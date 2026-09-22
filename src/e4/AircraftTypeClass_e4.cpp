// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x41C8B0
A AircraftTypeClass::AircraftTypeClass(ObjectClass * aP1)
{
{
  AircraftTypeClass *v3; // eax
  CCINIClass *v6; // edx
  TechnoTypeClass::ReadINI((char *)this, aP1->__pad_0, 4); /*0x41c8bb*/
  this->ArrayIndex = -1; /*0x41c8c6*/
  this->Carryall = 0; /*0x41c8d0*/
  this->Rotors = 0; /*0x41c8d6*/
  this->CustomRotor = 0; /*0x41c8dc*/
  this->Landable = 0; /*0x41c8e2*/
  this->FlyBy = 0; /*0x41c8e8*/
  this->FlyBack = 0; /*0x41c8ee*/
  this->AirportBound = 0; /*0x41c8f4*/
  this->Fighter = 0; /*0x41c8fa*/
  *(_DWORD *)this = &AircraftTypeClass::`vftable'; /*0x41c900*/
  this->vtable1 = &AircraftTypeClass::`vftable'; /*0x41c906*/
  this->vtable2 = &AircraftTypeClass::`vftable'; /*0x41c90c*/
  this->vtable3 = &vt_AircraftTypeClass; /*0x41c913*/
  this->vtable1.GenerateUniqueID(); /*0x41c91a*/
  v3 = g_TypeClass_FindCache; /*0x41c91f*/
  if ( (int)g_TypeClass_FindCache < DataGlobal_A8B220 /*0x41c95d*/
    || (DataGlobal_A8B225 || !DataGlobal_A8B220)
    && DataGlobal_A8B22C > 0
  bool v4; // zf
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))AircraftTypeClass_Array->field_8)(
               &AircraftTypeClass_Array,
               DataGlobal_A8B220 + DataGlobal_A8B22C,
               0) == 0,
        v3 = g_TypeClass_FindCache,
        !v4) )
  {
    g_TypeClass_FindCache = (AircraftTypeClass *)&v3->vtable0[1]; /*0x41c962*/
    *(_DWORD *)&g_AircraftTypeCount->__pad_0[4 * (_DWORD)v3] = this; /*0x41c96c*/
    v3 = g_TypeClass_FindCache; /*0x41c96f*/
  }
  int v5 = 0; /*0x41c974*/
  if ( (int)v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = g_AircraftTypeCount; /*0x41c97a*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x41c985*/
      if ( v5 >= (int)v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  this->ArrayIndex = v5; /*0x41c991*/
  this->u8_D38 = 1; /*0x41c997*/
  this->u8_D96 = 1; /*0x41c99d*/
  this->MoveToShroud = 0; /*0x41c9a3*/
  this->RotCount = 32; /*0x41c9a9*/
  this->Trailer = 0; /*0x41c9b3*/
  this->SpawnDelay = 3; /*0x41c9b9*/
  this->u8_D35 = 0; /*0x41c9c3*/
  this->u8_D36 = 0; /*0x41c9c9*/
  this->u8_D3B = 0; /*0x41c9cf*/
  this->u8_D97 = 0; /*0x41c9d5*/
  this->u8_D2E = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/
}
}

// 0x41CC20
namespace gamemd {
AnimTypeClass * * AircraftTypeClass_LoadTypeData()
{
{
  char Bool_Overwrite; // al
  AnimTypeClass *v9; // eax
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
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, unk_81804C, *(_BYTE *)(a1 + 3594)); /*0x41cc5c*/
  char v5 = *(_BYTE *)(a1 + 3597); /*0x41cc61*/
  *(_BYTE *)(a1 + 3594) = Bool_Overwrite; /*0x41cc67*/
  char v6 = INIClass::ReadBool_Overwrite(a1 + 36, unk_81803C, v5); /*0x41cc76*/
  v13 = *(_BYTE *)(a1 + 3598); /*0x41cc83*/
  *(_BYTE *)(a1 + 3597) = v6; /*0x41cc8a*/
  *(_BYTE *)(a1 + 3598) = INIClass::ReadBool_Overwrite(a1 + 36, unk_818034, v13); /*0x41cc95*/
  char v7 = INIClass::ReadBool_Overwrite(a1 + 36, unk_818028, *(_BYTE *)(a1 + 3580)); /*0x41ccaa*/
  v14 = *(_BYTE *)(a1 + 3592); /*0x41ccbb*/
  *(_BYTE *)(a1 + 3580) = v7; /*0x41ccc7*/
  char v8 = INIClass::ReadBool_Overwrite(a1 + 504, unk_818020, v14); /*0x41cccd*/
  v15 = *(_BYTE *)(a1 + 3593); /*0x41ccdd*/
  *(_BYTE *)(a1 + 3592) = v8; /*0x41cce4*/
  *(_BYTE *)(a1 + 3593) = INIClass::ReadBool_Overwrite(a1 + 504, unk_818014, v15); /*0x41ccf9*/
  v17 = *(_DWORD *)(a1 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (unsigned __int8 ***)&DataGlobal_887180,
         (unsigned __int8 *)(a1 + 504),
         (unsigned __int8 *)unk_81800C,
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
  v16 = *(_DWORD *)(a1 + 3588); /*0x41cd3c*/
  *(_DWORD *)(a1 + 3584) = v9; /*0x41cd43*/
  *(_DWORD *)(a1 + 3588) = INIClass::ReadInt_Overwrite(a1 + 504, unk_818000, v16); /*0x41cd4e*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, unk_817FF8, *(_BYTE *)(a1 + 3595)); /*0x41cd63*/
  v11 = *(_BYTE *)(a1 + 3596); /*0x41cd68*/
  *(_BYTE *)(a1 + 3595) = v10; /*0x41cd6e*/
  *(_BYTE *)(a1 + 3596) = INIClass::ReadBool_Overwrite(a1 + 36, unk_817FF0, v11); /*0x41cd83*/
  return 1; /*0x41cd8a*/
}
} // namespace gamemd
}

// 0x41CFE0
AircraftTypeClass * AircraftTypeClass::ddtor(char a2)
{
    AircraftTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    DataGlobal_A8B218;
    int v2 = DataGlobal_A8B218.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8B228 && v2 < --DataGlobal_A8B228 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8B21C + v2 - 1) = *(DataGlobal_A8B21C + v2);
        }
        while ( v2 < DataGlobal_A8B228 );
    }
    TechnoTypeClass::DTOR(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x41CB20
AircraftClass * AircraftTypeClass::ConstructAircraft(AbstractClass * ppv)
{
{
    int v3;
    v3 = __2_YAPAXI_Z(0x6D8u);
    if ( v3 )
    return (AircraftClass *)AircraftClass::Construct(v3, this, ppv);
    else
    return 0;
}
}

// 0x41CB60
char AircraftTypeClass::StubReturnFalse()
{
return 0;
}

// 0x41CB70
int * AircraftTypeClass::CreateAircraft(int a1)
{
{
    if ( (DataGlobal_889F38 & 1) == 0 )
  {
    DataGlobal_889F38 |= 1u;
    DataGlobal_889F20 = 0;
    DataGlobal_889F24 = 2147450879;
    atexit(nullsub_85);
  }
    return &DataGlobal_889F20;
}
}

// 0x41CBE0
char AircraftTypeClass::GetDimensions(int a1, int a2)
{
return 0;
}

// 0x41CDB0
int AircraftTypeClass::PowerDrainUpdate(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    v3 = BuildingTypeClass::ProcessPower(this, a2);
    LOBYTE(v3) = this->Rotors;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->CustomRotor;
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->Landable;
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->AirportBound;
    Power::FlagProcess(a2, v6);
    LOBYTE(v7) = this->Fighter;
    Power::FlagProcess(a2, v7);
    return Power::TimerProcess(this->ArrayIndex);
}
}

// 0x41CE20
int AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix(aP0, aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    TechnoTypeClass::Construct((int)aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_AircraftTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_AircraftTypeClass;
    }
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[5].ChargerBarrels[6]);
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    return 0;
  }
    return result;
}
}

// 0x41CE90
int AircraftTypeClass::SaveToINI(void * a0, TechnoTypeClass * aP1, int a3)
{
{
    int result;
    result = TechnoTypeClass::SaveLoad_Prefix_0(aP1, a0, aP1, (TechnoTypeClass *)a3);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x41CEB0
int AircraftTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1366608935;
  a2[1] = 298976796;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x41CFB0
int AircraftTypeClass::GetTypeIdentifier()
{
return 3;
}

// 0x41CFC0
int AircraftTypeClass::GetObjectSize()
{
return 3600;
}

// 0x41CFD0
int AircraftTypeClass::GetAuxField()
{
{
    return this->ArrayIndex;
}
}

// 0x712120
int AircraftTypeClass::GetGameplayValue()
{
{
    return g_RulesClass_Instance[1].?;
}
}
