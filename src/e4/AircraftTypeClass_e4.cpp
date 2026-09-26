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

// 0x41C8B0
AircraftTypeClass::AircraftTypeClass(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx

  TechnoTypeClass::ReadINI(aP1, 4); /*0x41c8bb*/
  this->ArrayIndex = -1; /*0x41c8c6*/
  this->qDFC = 0; /*0x41c8d0*/
  this->qE08 = 0; /*0x41c8d6*/
  this->qE09 = 0; /*0x41c8dc*/
  this->qE0A = 0; /*0x41c8e2*/
  this->qE0B = 0; /*0x41c8e8*/
  this->FlyBack = 0; /*0x41c8ee*/
  this->qE0D = 0; /*0x41c8f4*/
  this->qE0E = 0; /*0x41c8fa*/
  this->vtable2.GenerateUniqueID(); /*0x41c91a*/
  v3 = g_TypeClass_FindCache; /*0x41c91f*/
  if ( g_TypeClass_FindCache < dword_A8B220 /*0x41c95d*/
    || (byte_A8B225 || !dword_A8B220)
    && dword_A8B22C > 0
    && (v4 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(AircraftTypeClass_Array + 8))(
               &AircraftTypeClass_Array,
               dword_A8B220 + dword_A8B22C,
               0) == 0,
        v3 = g_TypeClass_FindCache,
        !v4) )
  {
    g_TypeClass_FindCache = v3 + 1; /*0x41c962*/
    *((unsigned int *)g_AircraftTypeCount + v3) = this; /*0x41c96c*/
    v3 = g_TypeClass_FindCache; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( v3 <= 0 ) /*0x41c978*/
  {
  LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    g_AircraftTypeCount = g_AircraftTypeCount; /*0x41c97a*/
    while ( *g_AircraftTypeCount != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      ++g_AircraftTypeCount; /*0x41c985*/
      if (v5 >= v3, unsigned int a3, unsigned int a1, unsigned int a2) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  this->ArrayIndex = v5; /*0x41c991*/
  this->u8_D38 = 1; /*0x41c997*/
  this->u8_D96 = 1; /*0x41c99d*/
  this->MoveToShroud = 0; /*0x41c9a3*/
  this->RotCount = 32; /*0x41c9a9*/
  this->qE00 = 0; /*0x41c9b3*/
  this->qE04 = 3; /*0x41c9b9*/
  this->u8_D35 = 0; /*0x41c9c3*/
  this->u8_D36 = 0; /*0x41c9c9*/
  this->u8_D3B = 0; /*0x41c9cf*/
  this->u8_D97 = 0; /*0x41c9d5*/
  this->u8_D2E = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/
}
// 0x41CC20
namespace gamemd {
AnimTypeClass * * AircraftTypeClass_LoadTypeData()
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // al
  int v9; // eax
  char v10; // al
  char v11; // cl
  char v13; // [esp-Ch] [ebp-98h]
  char v14; // [esp-Ch] [ebp-98h]
  char v15; // [esp-Ch] [ebp-98h]
  int v16; // [esp-Ch] [ebp-98h]
  int v17; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a3); /*0x41cc33*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, a3) ) /*0x41cc3b*/
    return 0; /*0x41cd98*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aLandable, *(unsigned char *)(a1 + 3594)); /*0x41cc5c*/
  v5 = *(unsigned char *)(a1 + 3597); /*0x41cc61*/
  *(unsigned char *)(a1 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, aAirportbound, v5); /*0x41cc76*/
  v13 = *(unsigned char *)(a1 + 3598); /*0x41cc83*/
  *(unsigned char *)(a1 + 3597) = v6; /*0x41cc8a*/
  *(unsigned char *)(a1 + 3598) = INIClass::ReadBool_Overwrite(a1 + 36, aFighter, v13); /*0x41cc95*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, aCarryall, *(unsigned char *)(a1 + 3580)); /*0x41ccaa*/
  v14 = *(unsigned char *)(a1 + 3592); /*0x41ccbb*/
  *(unsigned char *)(a1 + 3580) = v7; /*0x41ccc7*/
  v8 = INIClass::ReadBool_Overwrite(a1 + 504, aRotors, v14); /*0x41cccd*/
  v15 = *(unsigned char *)(a1 + 3593); /*0x41ccdd*/
  *(unsigned char *)(a1 + 3592) = v8; /*0x41cce4*/
  *(unsigned char *)(a1 + 3593) = INIClass::ReadBool_Overwrite(a1 + 504, aCustomrotor, v15); /*0x41ccf9*/
  v17 = *(unsigned int *)(a1 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (uint8_t ***)&CCINIClass_INI_Art,
         (uint8_t *)(a1 + 504),
         (uint8_t *)aTrailer,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v9 = AnimTypeClass::FindOrCreate(Destination); /*0x41cd26*/
  }
  else
  {
    v9 = v17; /*0x41cd2d*/
  }
  v16 = *(unsigned int *)(a1 + 3588); /*0x41cd3c*/
  *(unsigned int *)(a1 + 3584) = v9; /*0x41cd43*/
  *(unsigned int *)(a1 + 3588) = INIClass::ReadInt_Overwrite(a1 + 504, aSpawndelay, v16); /*0x41cd4e*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, aFlyby, *(unsigned char *)(a1 + 3595)); /*0x41cd63*/
  v11 = *(unsigned char *)(a1 + 3596); /*0x41cd68*/
  *(unsigned char *)(a1 + 3595) = v10; /*0x41cd6e*/
  *(unsigned char *)(a1 + 3596) = INIClass::ReadBool_Overwrite(a1 + 36, aFlyback, v11); /*0x41cd83*/
  return 1; /*0x41cd8a*/
}
}
// 0x41CFE0
AircraftTypeClass * AircraftTypeClass::ddtor(char a2)
{
  int v3; // eax

  AbstractClass::AnnounceExpiredPointer(1); /*0x41d001*/
  v3 = (*(int (__thiscall **)(int *, void ***))(AircraftTypeClass_Array + 16))(&AircraftTypeClass_Array, &this); /*0x41d01a*/
  if ( v3 != -1 && v3 < g_TypeClass_FindCache && v3 < --g_TypeClass_FindCache ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((unsigned int *)g_AircraftTypeCount + v3 - 1) = *((unsigned int *)g_AircraftTypeCount + v3); /*0x41d041*/
    }
    while ( v3 < g_TypeClass_FindCache ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR(); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    RA2_OPDEL(); /*0x41d05e*/
  return this; /*0x41d068*/
}
// 0x41CB20
AircraftClass * AircraftTypeClass::ConstructAircraft(AbstractClass * ppv)
{
  void *v3; // eax

  v3 = operator new(0x6D8u); /*0x41cb28*/
  if ( v3 ) /*0x41cb32*/
    return AircraftClass::Construct((int)v3, (int)this, ppv); /*0x41cb3c*/
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

  v3 = BuildingTypeClass::ProcessPower(this, a2); /*0x41cdb9*/
  IDA_LOBYTE(v3) = this->qE08; /*0x41cdbe*/
  Power::FlagProcess(a2, v3); /*0x41cdc7*/
  IDA_LOBYTE(v4) = this->qE09; /*0x41cdcc*/
  Power::FlagProcess(a2, v4); /*0x41cdd5*/
  IDA_LOBYTE(v5) = this->qE0A; /*0x41cdda*/
  v6 = Power::FlagProcess(a2, v5); /*0x41cde3*/
  IDA_LOBYTE(v6) = this->qE0D; /*0x41cde8*/
  Power::FlagProcess(a2, v6); /*0x41cdf1*/
  IDA_LOBYTE(v7) = this->qE0E; /*0x41cdf6*/
  Power::FlagProcess(a2, v7); /*0x41cdff*/
  return Power::TimerProcess(this->ArrayIndex); /*0x41ce12*/
}
// 0x41CE20
int AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix(aP0, aP1); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( aP0 ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct(aP0, (int)&aP1); /*0x41ce3f*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(aP0 + 3584)); /*0x41ce6b*/
    VoxelAnimType::LoadAnim((char *)aP0); /*0x41ce72*/
    ObjectTypeClass::Load2DArt((char *)aP0); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/
}
// 0x41CE90
int AircraftTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3);
    if ( result >= 0 )
    return 0;
    return result;
}

// 0x41CEB0
int AircraftTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x41ceb6*/
    return -2147467261; /*0x41ceb8*/
  *a2 = -1366608935; /*0x41cec6*/
  a2[1] = 298976796; /*0x41cece*/
  a2[2] = 1610654892; /*0x41ced7*/
  a2[3] = -1252326136; /*0x41cee0*/
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
  return this->ArrayIndex; /*0x41cfd6*/
}
// 0x712120
int AircraftTypeClass::GetGameplayValue()
{
  return g_RulesClass_Instance[1].DominatorCaptureRange; /*0x71212b*/
}