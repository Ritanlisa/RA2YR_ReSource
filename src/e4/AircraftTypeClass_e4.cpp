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
struct AbstractClass;  // fix_tu_missing_types
struct AircraftTypeClass;  // fix_tu_missing_types
struct BuildingTypeClass;  // fix_tu_missing_types
struct ObjectClass;  // fix_tu_missing_types
struct Power;  // fix_tu_missing_types
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Random_e4.hpp"

// 0x41C8B0
AircraftTypeClass::AircraftTypeClass(ObjectClass * aP1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  unsigned int *v6; // edx

  TechnoTypeClass::ReadINI((char *)this, aP1, 4); /*0x41c8bb*/
  *((unsigned int *)this + 894) = -1; /*0x41c8c6*/
  *((unsigned char *)this + 3580) = 0; /*0x41c8d0*/
  *((unsigned char *)this + 3592) = 0; /*0x41c8d6*/
  *((unsigned char *)this + 3593) = 0; /*0x41c8dc*/
  *((unsigned char *)this + 3594) = 0; /*0x41c8e2*/
  *((unsigned char *)this + 3595) = 0; /*0x41c8e8*/
  *((unsigned char *)this + 3596) = 0; /*0x41c8ee*/
  *((unsigned char *)this + 3597) = 0; /*0x41c8f4*/
  *((unsigned char *)this + 3598) = 0; /*0x41c8fa*/
  *(unsigned int *)this = &vt_AircraftTypeClass; /*0x41c900*/
  *((unsigned int *)this + 1) = &vt_AircraftTypeClass; /*0x41c906*/
  *((unsigned int *)this + 2) = &vt_AircraftTypeClass; /*0x41c90c*/
  *((unsigned int *)this + 3) = &vt_AircraftTypeClass; /*0x41c913*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x41c91a*/
  v3 = dword_A8B228; /*0x41c91f*/
  if ( dword_A8B228 < dword_A8B220 /*0x41c95d*/
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(uint8_t (**)(int *, int, unsigned int))(dword_A8B218 + 8))(
               &dword_A8B218,
               dword_A8B220 + dword_A8B22C,
               0) == 0,
        v3 = dword_A8B228,
        !v4) )
  {
    dword_A8B228 = v3 + 1; /*0x41c962*/
    *((unsigned int *)dword_A8B21C + v3) = this; /*0x41c96c*/
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
    v6 = dword_A8B21C; /*0x41c97a*/
    while ( *v6 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      ++v6; /*0x41c985*/
      if ( v5 >= v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  *((unsigned int *)this + 894) = v5; /*0x41c991*/
  *((unsigned char *)this + 3384) = 1; /*0x41c997*/
  *((unsigned char *)this + 3478) = 1; /*0x41c99d*/
  *((unsigned char *)this + 3213) = 0; /*0x41c9a3*/
  *((unsigned int *)this + 454) = 32; /*0x41c9a9*/
  *((unsigned int *)this + 896) = 0; /*0x41c9b3*/
  *((unsigned int *)this + 897) = 3; /*0x41c9b9*/
  *((unsigned char *)this + 3381) = 0; /*0x41c9c3*/
  *((unsigned char *)this + 3382) = 0; /*0x41c9c9*/
  *((unsigned char *)this + 3387) = 0; /*0x41c9cf*/
  *((unsigned char *)this + 3479) = 0; /*0x41c9d5*/
  *((unsigned char *)this + 3374) = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/

}
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
  AnimTypeClass ** v12;
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  char v16; // [esp-Ch] [ebp-98h]
  AnimTypeClass ** v17;
  uint8_t ***v18; // [esp+0h] [ebp-8Ch]
  int v19; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x41cc2f*/
  INIClass::ResetSection(); /*0x41cc33*/
  if ( !(uint8_t)ObjectTypeClass::LoadExtras((TechnoTypeClass *)this, a2, v18) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x41cc5c*/
                     (int *)this,
                     (uint8_t *)(v4 + 36),
                     aLandable,
                     *(unsigned char *)(v4 + 3594));
  v6 = *(unsigned char *)(v4 + 3597); /*0x41cc61*/
  *(unsigned char *)(v4 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v7 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aAirportbound, v6); /*0x41cc76*/
  v14 = *(unsigned char *)(v4 + 3598); /*0x41cc83*/
  *(unsigned char *)(v4 + 3597) = v7; /*0x41cc8a*/
  *(unsigned char *)(v4 + 3598) = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aFighter, v14); /*0x41cc95*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aCarryall, *(unsigned char *)(v4 + 3580)); /*0x41ccaa*/
  v15 = *(unsigned char *)(v4 + 3592); /*0x41ccbb*/
  *(unsigned char *)(v4 + 3580) = v8; /*0x41ccc7*/
  v9 = INIClass::ReadBool_Overwrite( /*0x41cccd*/
         (int *)&DSurface_ViewBounds.__pad_FC[228],
         (uint8_t *)(v4 + 504),
         aRotors,
         v15);
  v16 = *(unsigned char *)(v4 + 3593); /*0x41ccdd*/
  *(unsigned char *)(v4 + 3592) = v9; /*0x41cce4*/
  *(unsigned char *)(v4 + 3593) = INIClass::ReadBool_Overwrite( /*0x41ccf9*/
                            (int *)&DSurface_ViewBounds.__pad_FC[228],
                            (uint8_t *)(v4 + 504),
                            aCustomrotor,
                            v16);
  v19 = *(unsigned int *)(v4 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
         (uint8_t *)(v4 + 504),
         aTrailer,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v10 = (int)(((AnimTypeClass *)(Destination))->FindOrCreate());
  }
  else
  {
    v10 = v19; /*0x41cd2d*/
  }
  v17 = (gamemd::AnimTypeClass **)((int)((gamemd::AnimTypeClass **)(*(unsigned int *)(v4 + 3588))));
  *(unsigned int *)(v4 + 3584) = v10; /*0x41cd43*/
  *(unsigned int *)(v4 + 3588) = INIClass::ReadInt_Overwrite( /*0x41cd4e*/
                             (bool *)&DSurface_ViewBounds.__pad_FC[228],
                             (uint8_t *)(v4 + 504),
                             aSpawndelay,
                             v17);
  v11 = (gamemd::AnimTypeClass **)(INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aFlyby, *(unsigned char *)(v4 + 3595)));
  v12 = (gamemd::AnimTypeClass **)((char)((gamemd::AnimTypeClass **)(*(unsigned char *)(v4 + 3596))));
  *(unsigned char *)(v4 + 3595) = v11; /*0x41cd6e*/
  *(unsigned char *)(v4 + 3596) = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aFlyback, v12); /*0x41cd83*/
  return (gamemd::AnimTypeClass **)(1); /*0x41cd8a*/
}
}
// 0x41CFE0
AircraftTypeClass * AircraftTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  AircraftTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)Block->vtable1 = &vt_AircraftTypeClass; /*0x41cfe6*/
  *(unsigned int *)Block[4] = &vt_AircraftTypeClass; /*0x41cfec*/
  *(unsigned int *)Block[8] = &vt_AircraftTypeClass; /*0x41cff3*/
  *(unsigned int *)Block[12] = &vt_AircraftTypeClass; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer((void **)Block, 1); /*0x41d001*/
  v5 = (AircraftTypeClass *)(Block); /*0x41d016*/
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
  TechnoTypeClass::DTOR((int)Block); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    __3_YAXPAX_Z(Block); /*0x41d05e*/
  return (AircraftTypeClass *)((void **)Block); /*0x41d068*/

}
// 0x41CB20
AircraftClass * AircraftTypeClass::ConstructAircraft(AbstractClass * ppv)
{

  int v2; // edi
  int v4; // eax

  v4 = __2_YAPAXI_Z(0x6D8u); /*0x41cb28*/
  if ( v4 ) /*0x41cb32*/
    return (AircraftClass *)AircraftClass::Construct(v4, v2, (int)this, ppv); /*0x41cb3c*/
  else
    return 0; /*0x41cb45*/

}
// 0x41CB60
char AircraftTypeClass::StubReturnFalse()
{

  return 0; /*0x41cb62*/

}
// 0x41CB70
int * AircraftTypeClass::CreateAircraft(int a1)
{

  if ( (byte_889F38 & 1) == 0 ) /*0x41cb7b*/
  {
    byte_889F38 |= 1u; /*0x41cb96*/
    dword_889F20 = 0; /*0x41cb9c*/
    dword_889F24 = 2147450879; /*0x41cbb4*/
    atexit(nullsub_85); /*0x41cbba*/
  }
  return &dword_889F20; /*0x41cbc8*/

}
// 0x41CBE0
char AircraftTypeClass::GetDimensions(int a1, int a2)
{

  return 0; /*0x41cbe2*/

}
// 0x41CDB0
int AircraftTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx

  v3 = BuildingTypeClass::ProcessPower((int)this, a2); /*0x41cdb9*/
  LOBYTE(v3) = *((unsigned char *)this + 3592); /*0x41cdbe*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x41cdc7*/
  LOBYTE(v4) = *((unsigned char *)this + 3593); /*0x41cdcc*/
  ((Power *)((Power *)a2))->FlagProcess(v4); /*0x41cdd5*/
  LOBYTE(v5) = *((unsigned char *)this + 3594); /*0x41cdda*/
  v6 = ((Power *)((Power *)a2))->FlagProcess(v5); /*0x41cde3*/
  LOBYTE(v6) = *((unsigned char *)this + 3597); /*0x41cde8*/
  ((Power *)((Power *)a2))->FlagProcess(v6); /*0x41cdf1*/
  LOBYTE(v7) = *((unsigned char *)this + 3598); /*0x41cdf6*/
  ((Power *)((Power *)a2))->FlagProcess(v7); /*0x41cdff*/
  return Power::TimerProcess(*((unsigned int *)this + 894)); /*0x41ce12*/

}
// 0x41CE20
int  AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix((TechnoTypeClass *)aP0, aP1); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( aP0 ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)aP0, (int)&aP1); /*0x41ce3f*/
      *(unsigned int *)aP0->vtable1 = &vt_AircraftTypeClass; /*0x41ce44*/
      *(unsigned int *)aP0[4] = &vt_AircraftTypeClass; /*0x41ce4a*/
      *(unsigned int *)aP0[8] = &vt_AircraftTypeClass; /*0x41ce51*/
      *(unsigned int *)aP0[12] = &vt_AircraftTypeClass; /*0x41ce58*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 896); /*0x41ce6b*/
    VoxelAnimType::LoadAnim(aP0->TechnoTypeClass); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(aP0->TechnoTypeClass); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/

}
// 0x41CE90
int AircraftTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{

  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3); /*0x41ce9f*/
  if ( result >= 0 ) /*0x41cea6*/
    return 0; /*0x41cea8*/
  return result; /*0x41ceaa*/

}

// 0x41CEB0
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
// 0x41CFB0
int AircraftTypeClass::GetTypeIdentifier()
{

  return 3; /*0x41cfb5*/

}
// 0x41CFC0
int AircraftTypeClass::GetObjectSize()
{

  return 3600; /*0x41cfc5*/

}
// 0x41CFD0
int AircraftTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 894); /*0x41cfd6*/

}
// 0x712120
int AircraftTypeClass::GetGameplayValue()
{

  return *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5836); /*0x71212b*/

}