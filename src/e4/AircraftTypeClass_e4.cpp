// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/AlphaShapeClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Team_e4.hpp"
struct AircraftTypeClass;  // fix_tu_missing_types
struct BuildingTypeClass;  // fix_tu_missing_types
struct Power;  // fix_tu_missing_types
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
// [w14e3] fwd decl: nullsub_85 def at addr41_e4.cpp (void nullsub_85())
namespace gamemd { void nullsub_85(); }


// 0x41C8B0
namespace gamemd {  // G42.18 ns repair
AircraftTypeClass::AircraftTypeClass(char *Source, int aP1, int a1, int a2, int a3, int aP0, int a0)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int *v6; // edx

  TechnoTypeClass::ReadINI((char *)aP1, aP1, 4); /*0x41c8bb*/
  aP1->u32_DF8 = -1; /*0x41c8c6*/
  aP1->u8_DFC = 0; /*0x41c8d0*/
  aP1->u8_E08 = 0; /*0x41c8d6*/
  aP1->u8_E09 = 0; /*0x41c8dc*/
  aP1->u8_E0A = 0; /*0x41c8e2*/
  aP1->u8_E0B = 0; /*0x41c8e8*/
  aP1->u8_E0C = 0; /*0x41c8ee*/
  aP1->u8_E0D = 0; /*0x41c8f4*/
  aP1->u8_E0E = 0; /*0x41c8fa*/
  *(unsigned int *)aP1 = (unsigned int)(&vt_AircraftTypeClass); /*0x41c900*/
  *(unsigned int *)(aP1 + 4) = (unsigned int)(&vt_AircraftTypeClass); /*0x41c906*/
  aP1->VtableStub_8 = &vt_AircraftTypeClass; /*0x41c90c*/
  *(unsigned int *)(aP1 + 12) = (unsigned int)(&vt_AircraftTypeClass); /*0x41c913*/
  AbstractClass::GenerateUniqueID(aP1 + 4); /*0x41c91a*/
  v3 = dword_A8B228; /*0x41c91f*/
  if ( dword_A8B228 < dword_A8B220 /*0x41c95d*/
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A8B218 + 8))(
               &dword_A8B218,
               dword_A8B220 + dword_A8B22C,
               0) == 0,
        v3 = dword_A8B228,
        !v4) )
  {
    dword_A8B228 = v3 + 1; /*0x41c962*/
    *((unsigned int *)dword_A8B21C + v3) = aP1; /*0x41c96c*/
    v3 = dword_A8B228; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = (unsigned int *)(dword_A8B21C); /*0x41c97a*/
    while ( *v6 != aP1 ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      ++v6; /*0x41c985*/
      if ( v5 >= v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  aP1->u32_DF8 = v5; /*0x41c991*/
  aP1->u8_D38 = 1; /*0x41c997*/
  aP1->u8_D96 = 1; /*0x41c99d*/
  aP1->u8_C8D = 0; /*0x41c9a3*/
  aP1->u32_718 = 32; /*0x41c9a9*/
  aP1->u32_E00 = 0; /*0x41c9b3*/
  aP1->u32_E04 = 3; /*0x41c9b9*/
  aP1->u8_D35 = 0; /*0x41c9c3*/
  aP1->u8_D36 = 0; /*0x41c9c9*/
  aP1->u8_D3B = 0; /*0x41c9cf*/
  aP1->u8_D97 = 0; /*0x41c9d5*/
  aP1->u8_D2E = 0; /*0x41c9db*/
  return aP1; /*0x41c9e3*/

}
}  // G42.18c ns repair
// 0x41CC20
namespace gamemd {
AnimTypeClass * * AircraftTypeClass_LoadTypeData(void * a1, void * a2, void * a3)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v6; // cl
  char v7; // al
  char v8; // al
  char v9; // al
  int v10; // eax
  char v11; // al
  char v12; // cl
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  char v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp-Ch] [ebp-98h]
  uint8_t ***v18; // [esp+0h] [ebp-8Ch]
  int v19; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x41cc2f*/
  INIClass::ResetSection(); /*0x41cc33*/
  if ( !(uint8_t)ObjectTypeClass::LoadExtras((TechnoTypeClass *)this, a2, v18) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x41cc5c*/
                     (int *)this,
                     &v4->BarrelVoxel,
                     aLandable,
                     v4->Landable_2);
  v6 = *&v4->AirportBound_2; /*0x41cc61*/
  v4->Landable_2 = Bool_Overwrite; /*0x41cc67*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, &v4->BarrelVoxel, aAirportbound, v6); /*0x41cc76*/
  v14 = v4->Fighter_2; /*0x41cc83*/
  v4->AirportBound_2 = v7; /*0x41cc8a*/
  v4->Fighter_2 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aFighter, v14); /*0x41cc95*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, &v4->BarrelVoxel, aCarryall, v4->Carryall_d); /*0x41ccaa*/
  v15 = *&v4->Rotors_d; /*0x41ccbb*/
  v4->Carryall_d = v8; /*0x41ccc7*/
  v9 = INIClass::ReadBool_Overwrite( /*0x41cccd*/
         (int *)&DataGlobal_887180,
         &v4->ImageFile,
         aRotors,
         v15);
  v16 = *&v4->CustomRotor_2; /*0x41ccdd*/
  v4->Rotors_d = v9; /*0x41cce4*/
  v4->CustomRotor_2 = INIClass::ReadBool_Overwrite( /*0x41ccf9*/
                            (int *)&DataGlobal_887180,
                            &v4->ImageFile,
                            aCustomrotor,
                            v16);
  v19 = *&v4->qE00; /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (INIClass *)&DataGlobal_887180,
         &v4->ImageFile,
         aTrailer,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v10 = AnimTypeClass::FindOrCreate(Destination); /*0x41cd26*/
  }
  else
  {
    v10 = v19; /*0x41cd2d*/
  }
  v17 = v4->SpawnDelay_d; /*0x41cd3c*/
  v4->qE00 = v10; /*0x41cd43*/
  v4->SpawnDelay_d = INIClass::ReadInt_Overwrite( /*0x41cd4e*/
                             (bool *)&DataGlobal_887180,
                             &v4->ImageFile,
                             aSpawndelay,
                             v17);
  v11 = INIClass::ReadBool_Overwrite((int *)this, &v4->BarrelVoxel, aFlyby, v4->FlyBy_2); /*0x41cd63*/
  v12 = v4->FlyBack; /*0x41cd68*/
  v4->FlyBy_2 = v11; /*0x41cd6e*/
  v4->FlyBack = INIClass::ReadBool_Overwrite((int *)this, &v4->BarrelVoxel, aFlyback, v12); /*0x41cd83*/
  return (gamemd::AnimTypeClass **)(1); /*0x41cd8a*/
}
}
// 0x41CFE0
namespace gamemd {  // G42.18c ns repair
AircraftTypeClass * AircraftTypeClass::ddtor(char a2, int a1, int aP0, int aP1, int a0, int a3)
{

  int v3; // eax
  AircraftTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)a1->TechnoTypeClass = &vt_AircraftTypeClass; /*0x41cfe6*/
  *(unsigned int *)&a1->TechnoTypeClass[4] = &vt_AircraftTypeClass; /*0x41cfec*/
  *(unsigned int *)&a1->TechnoTypeClass[8] = &vt_AircraftTypeClass; /*0x41cff3*/
  *(unsigned int *)&a1->TechnoTypeClass[12] = &vt_AircraftTypeClass; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer((void **)a1, 1); /*0x41d001*/
  v5 = (gamemd::AircraftTypeClass *)(a1); /*0x41d016*/
  v3 = (*(int (**)(unsigned int *, AircraftTypeClass **))(dword_A8B218 + 16))(&dword_A8B218, &v5); /*0x41d01a*/
  if ( v3 != -1 && v3 < dword_A8B228 && v3 < --dword_A8B228 ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((unsigned int *)dword_A8B21C + v3 - 1) = *((unsigned int *)dword_A8B21C + v3); /*0x41d041*/
    }
    while ( v3 < dword_A8B228 ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR((int)a1); /*0x41d051*/
  if ( (a1 & 1) != 0 ) /*0x41d05b*/
    __3_YAXPAX_Z(a1); /*0x41d05e*/
  return (gamemd::AircraftTypeClass *)((void **)a1); /*0x41d068*/

}
}  // G42.18c ns repair
// 0x41CB20
namespace gamemd {  // G42.18c ns repair
AircraftClass * AircraftTypeClass::ConstructAircraft(AbstractClass * ppv)
{

  int v2; // edi
  int v4; // eax

  v4 = (int)(__2_YAPAXI_Z(0x6D8u)); /*0x41cb28*/
  if ( v4 ) /*0x41cb32*/
    return (AircraftClass *)AircraftClass::Construct(v4, v2, (int)this, ppv); /*0x41cb3c*/
  else
    return 0; /*0x41cb45*/

}
}  // G42.18c ns repair
// 0x41CB60
namespace gamemd {  // G42.18c ns repair
char AircraftTypeClass::StubReturnFalse()
{
  return 0; /*0x41cb62*/
}
}  // G42.18c ns repair
// 0x41CB70
namespace gamemd {  // G42.18c ns repair
int * AircraftTypeClass::CreateAircraft(int a1)
{

  if ( (byte_889F38 & 1) == 0 ) /*0x41cb7b*/
  {
    byte_889F38 |= 1u; /*0x41cb96*/
    dword_889F20 = 0; /*0x41cb9c*/
    dword_889F24 = 2147450879; /*0x41cbb4*/
    atexit(nullsub_85); /*0x41cbba*/
  }
  return (int *)(&dword_889F20); /*0x41cbc8*/

}
}  // G42.18c ns repair
// 0x41CBE0
namespace gamemd {  // G42.18c ns repair
char AircraftTypeClass::GetDimensions(int a1, int a2)
{
  return 0; /*0x41cbe2*/
}
}  // G42.18c ns repair
// 0x41CDB0
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = (int)(BuildingTypeClass::ProcessPower((int)this, a2)); /*0x41cdb9*/
  LOBYTE(v3) = this->Rotors_d; /*0x41cdbe*/
  Power::FlagProcess((Power *)a2, v3); /*0x41cdc7*/
  LOBYTE(v4) = this->CustomRotor_2; /*0x41cdcc*/
  Power::FlagProcess((Power *)a2, v4); /*0x41cdd5*/
  LOBYTE(v5) = this->Landable_2; /*0x41cdda*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x41cde3*/
  LOBYTE(v6) = this->AirportBound_2; /*0x41cde8*/
  Power::FlagProcess((Power *)a2, v6); /*0x41cdf1*/
  LOBYTE(v7) = this->Fighter_2; /*0x41cdf6*/
  Power::FlagProcess((Power *)a2, v7); /*0x41cdff*/
  return Power::TimerProcess(this->ArrayIndex); /*0x41ce12*/

}
}  // G42.18c ns repair
// 0x41CE20
namespace gamemd {  // G42.18c ns repair
int  AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = (int)(TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)aP0, aP1)); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( aP0 ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)aP0, (int)&aP1); /*0x41ce3f*/
      *(unsigned int *)aP0->TechnoTypeClass = (unsigned int)(&vt_AircraftTypeClass); /*0x41ce44*/
      /* X11: vtable install elided (implicit via AircraftTypeClass virtuals 0x41ce4a) */
      *&aP0->u32_D2E = &vt_AircraftTypeClass; /*0x41ce51*/
      /* X11: vtable install elided (implicit via AircraftTypeClass virtuals 0x41ce58) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->u32_E00); /*0x41ce6b*/
    VoxelAnimType::LoadAnim(aP0->TechnoTypeClass); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(aP0->TechnoTypeClass); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/

}
}  // G42.18c ns repair
// 0x41CE90
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{

  int result; // eax

  result = ((TechnoTypeClass *)aP1)->SaveLoad_Prefix_0( (void *)(a0), (TechnoTypeClass *)(aP1), (TechnoTypeClass *)a3); /*0x41ce9f*/
  if ( result >= 0 ) /*0x41cea6*/
    return 0; /*0x41cea8*/
  return result; /*0x41ceaa*/

}
}  // G42.18c ns repair

// 0x41CEB0
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x41ceb6*/
    return -2147467261; /*0x41ceb8*/
  *a2 = -1366608935; /*0x41cec6*/
  a2[1] = 298976796; /*0x41cece*/
  a2[2] = 1610654892; /*0x41ced7*/
  a2[3] = unk_7E95BC; /*0x41cee0*/
  return 0; /*0x41cebd*/
}
}  // G42.18c ns repair
// 0x41CFB0
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::GetTypeIdentifier()
{
  return 3; /*0x41cfb5*/
}
}  // G42.18c ns repair
// 0x41CFC0
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::GetObjectSize()
{
  return 3600; /*0x41cfc5*/
}
}  // G42.18c ns repair
// 0x41CFD0
namespace gamemd {  // G42.18c ns repair
int AircraftTypeClass::GetAuxField()
{

  return (int)(this->ArrayIndex); /*0x41cfd6*/

}
}  // G42.18c ns repair
// 0x712120
int AircraftTypeClass::GetGameplayValue()
{
  return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5836); /*0x71212b*/
}