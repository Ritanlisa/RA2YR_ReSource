// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"

// 0x6B5260
SmudgeTypeClass::SmudgeTypeClass(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  void **v6; // edx

  ObjectTypeClass::ConstructFull(aP1); /*0x6b5269*/
  this->ArrayIndex = -1; /*0x6b5277*/
  this->Width = 1; /*0x6b5281*/
  this->Height = 1; /*0x6b5287*/
  *(&this->q10C2) = 0; /*0x6b528d*/
  *(&this->q10C3) = 0; /*0x6b5294*/
  AbstractClass::GenerateUniqueID((int)&this->uniqueId); /*0x6b52b5*/
  this->q22F = 1; /*0x6b52ba*/
  *(&this->q0E01) = 0; /*0x6b52c7*/
  *(&this->q0E02) = 1; /*0x6b52ce*/
  *(&this->q0E03) = 1; /*0x6b52d4*/
  *(&this->q0E05) = 0; /*0x6b52da*/
  v3 = FactoryClass_Count; /*0x6b52e1*/
  if ( FactoryClass_Count < dword_A8EC20 /*0x6b5322*/
    || (byte_A8EC25 || !dword_A8EC20)
    && dword_A8EC2C > 0
    && (v4 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A8EC18 + 8))(
               &dword_A8EC18,
               dword_A8EC20 + dword_A8EC2C,
               0) == 0,
        v3 = FactoryClass_Count,
        !v4) )
  {
    FactoryClass_Count = v3 + 1; /*0x6b5327*/
    *((unsigned int *)FactoryClass_Array + v3) = this; /*0x6b5331*/
    v3 = FactoryClass_Count; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
  LABEL_11:
    this->ArrayIndex = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)FactoryClass_Array; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->ArrayIndex = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}
// 0x6B55F0
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF

  v7 = this->GetMember41_2(); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v8 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      v9 = *(&this->q0406); /*0x6b5623*/
      v8 += -15 * (a4 / v9 + a4 % v9); /*0x6b5659*/
      v13 += 60 * (a4 / v9 - a4 % v9) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj(&MapClass_Instance, a6); /*0x6b5674*/
    v12 = *((int16_t *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP(g_DSurface_Hidden_2, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0, unsigned int a2); /*0x6b56b4*/
  }
}
// 0x6B56D0
int SmudgeTypeClass::GetSize(unsigned char *** aP1, void * a1, void * a2)
{
  char Bool_Overwrite; // al
  char v4; // cl
  char v5; // al
  int v7; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6b56e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, aP1) ) /*0x6b56eb*/
    return 0; /*0x6b57db*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b570b*/
                     (int)aP1,
                     (uint8_t *)(&this->vtable46),
                     (uint8_t *)aCrater,
                     this->q2A0);
  v4 = this->q2A1; /*0x6b5710*/
  this->q2A0 = Bool_Overwrite; /*0x6b5716*/
  v5 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aBurn, v4); /*0x6b5725*/
  v7 = this->Width; /*0x6b5732*/
  this->q2A1 = v5; /*0x6b5739*/
  this->Width = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)g_INI_Key_Width,
                              v7);
  this->Height = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)g_INI_Key_Height,
                              this->Height);
  if ( this->q22C ) /*0x6b5764*/
    _makepath( /*0x6b57b4*/
      Buffer,
      0,
      0,
      (const char *)(&this->u32_C84),
      (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_ScenarioClass_Instance + 1174));
  else
    _makepath(Buffer, 0, 0, (const char *)(&this->u32_C84), Ext); /*0x6b5784*/
  this->Image = SearchMIXFile(Buffer, 0, unsigned int a2); /*0x6b57c7*/
  return 1; /*0x6b57cd*/
}
// 0x6B6160
SmudgeTypeClass * SmudgeTypeClass::ddtor(AbstractClass *a2, char a3, void * a1)
{
  void *v3; // eax
  int v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *(a3 + 41); /*0x6b6164*/
  if ( v3 ) /*0x6b6187*/
  {
    RA2_OPDEL(v3); /*0x6b618a*/
    *(a3 + 41) = 0; /*0x6b6192*/
  }
  AbstractClass::AnnounceExpiredPointer(a3, 1); /*0x6b61a0*/
  v6 = a3; /*0x6b61b5*/
  v4 = (*(int (__thiscall **)(int *, void ***))(dword_A8EC18 + 16))(&dword_A8EC18, &v6); /*0x6b61b9*/
  if ( v4 != -1 && v4 < FactoryClass_Count && v4 < --FactoryClass_Count ) /*0x6b61d4*/
  {
    do /*0x6b61ec*/
    {
      ++v4; /*0x6b61dc*/
      *((unsigned int *)FactoryClass_Array + v4 - 1) = *((unsigned int *)FactoryClass_Array + v4); /*0x6b61e0*/
    }
    while ( v4 < FactoryClass_Count ); /*0x6b61ec*/
  }
  ObjectTypeClass::Destruct((int)a3); /*0x6b61f0*/
  if ( (a3 & 1) != 0 ) /*0x6b61fa*/
    RA2_OPDEL(a3); /*0x6b61fd*/
  return a3; /*0x6b6207*/
}
// 0x6B5550
bool SmudgeTypeClass::GetType(short * a2, int a3)
{
  void **v4; // eax
  int v5; // edx
  bool result; // al
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (void *)operator new(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/
}
// 0x6B55C0
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{
  void **v3; // eax

  v3 = (void *)operator new(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/
}
// 0x6B57F0
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower(a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  IDA_LOBYTE(v3) = this->q2A0; /*0x6b580c*/
  Power::FlagProcess(a2, v3); /*0x6b5815*/
  IDA_LOBYTE(v4) = this->q2A1; /*0x6b581a*/
  Power::FlagProcess(a2, v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/
}
// 0x6B5850
int SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((int)aP0, aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct(aP0, (int)&aP1); /*0x6b586f*/
    }
    VoxelAnimType::LoadAnim(aP0); /*0x6b5891*/
    ObjectTypeClass::Load2DArt(aP0); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/
}
// 0x6B58B0
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/
}
// 0x6B58D0
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = -1252326136; /*0x6b5900*/
  return 0; /*0x6b58dd*/
}
// 0x6B6130
int SmudgeTypeClass::GetTypeIdentifier()
{
  return 30; /*0x6b6135*/
}
// 0x6B6140
int SmudgeTypeClass::GetObjectSize()
{
  return 676; /*0x6b6145*/
}
// 0x6B6150
int SmudgeTypeClass::GetAuxField()
{
  return this->ArrayIndex; /*0x6b6156*/
}