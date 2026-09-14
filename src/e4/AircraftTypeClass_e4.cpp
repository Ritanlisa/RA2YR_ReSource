// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41C8B0
int AircraftTypeClass::AircraftTypeClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall AircraftTypeClass::AircraftTypeClass(int this, ObjectClass *aP1)
{
  AircraftTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
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
  AbstractClass::GenerateUniqueID(this + 4); /*0x41c91a*/
  v3 = MEMORY[0xA8B228]; /*0x41c91f*/
  if ( (int)MEMORY[0xA8B228] < MEMORY[0xA8B220] /*0x41c95d*/
    || (MEMORY[0xA8B225] || !MEMORY[0xA8B220])
    && MEMORY[0xA8B22C] > 0
    && (v4 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))MEMORY[0xA8B218]->field_8)(
               &MEMORY[0xA8B218],
               MEMORY[0xA8B220] + MEMORY[0xA8B22C],
               0) == 0,
        v3 = MEMORY[0xA8B228],
        !v4) )
  {
    MEMORY[0xA8B228] = (AircraftTypeClass *)&v3->vtable0[1]; /*0x41c962*/
    *(_DWORD *)&MEMORY[0xA8B21C]->__pad_0[4 * (_DWORD)v3] = this; /*0x41c96c*/
    v3 = MEMORY[0xA8B228]; /*0x41c96f*/
  }
  v5 = 0; /*0x41c974*/
  if ( (int)v3 <= 0 ) /*0x41c978*/
  {
LABEL_11:
    v5 = -1; /*0x41c98c*/
  }
  else
  {
    v6 = MEMORY[0xA8B21C]; /*0x41c97a*/
    while ( *(_DWORD *)v6->__pad_0 != this ) /*0x41c982*/
    {
      ++v5; /*0x41c984*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x41c985*/
      if ( v5 >= (int)v3 ) /*0x41c98a*/
        goto LABEL_11; /*0x41c98a*/
    }
  }
  this->ArrayIndex = v5; /*0x41c991*/
  *(_BYTE *)(this + 3384) = 1; /*0x41c997*/
  *(_BYTE *)(this + 3478) = 1; /*0x41c99d*/
  this->MoveToShroud = 0; /*0x41c9a3*/
  this->RotCount = 32; /*0x41c9a9*/
  this->Trailer = 0; /*0x41c9b3*/
  this->SpawnDelay = 3; /*0x41c9b9*/
  *(_BYTE *)(this + 3381) = 0; /*0x41c9c3*/
  *(_BYTE *)(this + 3382) = 0; /*0x41c9c9*/
  *(_BYTE *)(this + 3387) = 0; /*0x41c9cf*/
  *(_BYTE *)(this + 3479) = 0; /*0x41c9d5*/
  *(_BYTE *)(this + 3374) = 0; /*0x41c9db*/
  return this; /*0x41c9e3*/
}
}

// 0x41CC20
namespace gamemd {
int AircraftTypeClass_LoadTypeData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge AircraftTypeClass::vt_25_@<al>(int a1@<ecx>, double a2@<st0>, unsigned __int8 ***a3)
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
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, unk_81804C, *(_BYTE *)(a1 + 3594)); /*0x41cc5c*/
  v5 = *(_BYTE *)(a1 + 3597); /*0x41cc61*/
  *(_BYTE *)(a1 + 3594) = Bool_Overwrite; /*0x41cc67*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, unk_81803C, v5); /*0x41cc76*/
  v13 = *(_BYTE *)(a1 + 3598); /*0x41cc83*/
  *(_BYTE *)(a1 + 3597) = v6; /*0x41cc8a*/
  *(_BYTE *)(a1 + 3598) = INIClass::ReadBool_Overwrite(a1 + 36, unk_818034, v13); /*0x41cc95*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, unk_818028, *(_BYTE *)(a1 + 3580)); /*0x41ccaa*/
  v14 = *(_BYTE *)(a1 + 3592); /*0x41ccbb*/
  *(_BYTE *)(a1 + 3580) = v7; /*0x41ccc7*/
  v8 = INIClass::ReadBool_Overwrite(a1 + 504, unk_818020, v14); /*0x41cccd*/
  v15 = *(_BYTE *)(a1 + 3593); /*0x41ccdd*/
  *(_BYTE *)(a1 + 3592) = v8; /*0x41cce4*/
  *(_BYTE *)(a1 + 3593) = INIClass::ReadBool_Overwrite(a1 + 504, unk_818014, v15); /*0x41ccf9*/
  v17 = *(_DWORD *)(a1 + 3584); /*0x41cd15*/
  if ( INIClass::GetString( /*0x41cd19*/
         (unsigned __int8 ***)&MEMORY[0x887180],
         (unsigned __int8 *)(a1 + 504),
         (unsigned __int8 *)unk_81800C,
         &MEMORY[0x889F64],
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
}
} // namespace gamemd

// 0x41CE20
int AircraftTypeClass::LoadFromINI(ObjectTypeClass * aP0, int aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall AircraftTypeClass::LoadFromINI(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = TechnoTypeClass::SaveLoad_Prefix(aP0, aP1); /*0x41ce2b*/
  if ( result >= 0 ) /*0x41ce32*/
  {
    if ( aP0 ) /*0x41ce36*/
    {
      TechnoTypeClass::Construct((int)aP0, (ObjectTypeClass *)&aP1); /*0x41ce3f*/
      *(_DWORD *)aP0->__pad_0 = &AircraftTypeClass::`vftable'; /*0x41ce44*/
      *(_DWORD *)&aP0->__pad_0[4] = &AircraftTypeClass::`vftable'; /*0x41ce4a*/
      *(_DWORD *)&aP0->__pad_0[8] = &AircraftTypeClass::`vftable'; /*0x41ce51*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_AircraftTypeClass; /*0x41ce58*/
    }
    ObjectPtr::RegisterForTracking( /*0x41ce6b*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[5].ChargerBarrels[6]);
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x41ce72*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x41ce79*/
    return 0; /*0x41ce7e*/
  }
  return result; /*0x41ce80*/
}
}

// 0x41CFE0
AircraftTypeClass * AircraftTypeClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
AircraftTypeClass *__thiscall AircraftTypeClass::ddtor(void **this, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *this = &AircraftTypeClass::`vftable'; /*0x41cfe6*/
  *(this + 1) = &AircraftTypeClass::`vftable'; /*0x41cfec*/
  *(this + 2) = &AircraftTypeClass::`vftable'; /*0x41cff3*/
  *(this + 3) = &vt_AircraftTypeClass; /*0x41cffa*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x41d001*/
  v5 = this; /*0x41d016*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8B218] + 16))(&MEMORY[0xA8B218], &v5); /*0x41d01a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8B228] && v3 < --MEMORY[0xA8B228] ) /*0x41d035*/
  {
    do /*0x41d04d*/
    {
      ++v3; /*0x41d03d*/
      *((_DWORD *)MEMORY[0xA8B21C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8B21C] + v3); /*0x41d041*/
    }
    while ( v3 < MEMORY[0xA8B228] ); /*0x41d04d*/
  }
  TechnoTypeClass::DTOR((int)this); /*0x41d051*/
  if ( (a2 & 1) != 0 ) /*0x41d05b*/
    __3_YAXPAX_Z(this); /*0x41d05e*/
  return (AircraftTypeClass *)this; /*0x41d068*/
}
}

// 0x712120
int AircraftTypeClass::GetGameplayValue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int AircraftTypeClass::_vt45()
{
  return MEMORY[0x8871E0][1].?; /*0x71212b*/
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
