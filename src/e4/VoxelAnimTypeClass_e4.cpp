// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x74AD80
namespace gamemd {
unsigned int * VoxelAnimTypeClass::Constructor(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall VoxelAnimTypeClass::Constructor(_DWORD *this, ObjectClass *aP1)
{
  int v3; // eax
  VoxelAnimTypeClass *v4; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x74ad89*/
  this->StartSound = -1; /*0x74ad93*/
  this->StopSound = -1; /*0x74ad99*/
  this->Normalized = 0; /*0x74ad9f*/
  this->Translucent = 0; /*0x74ada8*/
  this->SourceShared = 0; /*0x74adae*/
  this->Elasticity = -1610612736; /*0x74adb4*/
  this->MinAngularVelocity = 0; /*0x74adbe*/
  this->MaxAngularVelocity = 484854086; /*0x74adc4*/
  this->MinZVel = 0; /*0x74adce*/
  this->MaxZVel = 0; /*0x74add4*/
  this->MaxXYVel = 0; /*0x74adda*/
  this->VoxelIndex = 0; /*0x74ade1*/
  this->Duration = 30; /*0x74ade7*/
  this->q2A4 = 1072273817; /*0x74adf1*/
  this->q0AB = 0; /*0x74adfb*/
  this->q0AD = 1069962989; /*0x74ae01*/
  this->q0AF = 1074528256; /*0x74ae0b*/
  this->q2C4 = 1075052544; /*0x74ae15*/
  this->q2CC = 1076756480; /*0x74ae1f*/
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
  *this = &VoxelAnimTypeClass::`vftable'; /*0x74ae6b*/
  this->vtable2 = &VoxelAnimTypeClass::`vftable'; /*0x74ae71*/
  this->vtable3 = &VoxelAnimTypeClass::`vftable'; /*0x74ae77*/
  this->vtable4 = &vt_VoxelAnimTypeClass; /*0x74ae7e*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x74ae85*/
  this->LegalTarget = 0; /*0x74ae8c*/
  this->IsLogic = 1; /*0x74ae92*/
  this->RadarInvisible = 1; /*0x74ae98*/
  this->Selectable = 1; /*0x74ae9e*/
  this->Insignificant = 1; /*0x74aea4*/
  this->Immune = 1; /*0x74aeaa*/
  this->AllowCellContent = 0; /*0x74aeb0*/
  if ( *(int *)&stru_B05488[41464] < *(int *)&stru_B05488[41456] /*0x74aeea*/
    || (stru_B05488[41461] || !*(_DWORD *)&stru_B05488[41456])
    && *(int *)&stru_B05488[41468] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41448] + 8))(
         &stru_B05488[41448],
         *(_DWORD *)&stru_B05488[41456] + *(_DWORD *)&stru_B05488[41468],
         0) )
  {
    v3 = (*(_DWORD *)&stru_B05488[41464])++; /*0x74aef7*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v3) = this; /*0x74af06*/
  }
  if ( *(int *)&HouseClass_Player[44524] < *(int *)&HouseClass_Player[44516] /*0x74af3d*/
    || (HouseClass_Player[44521] || !*(_DWORD *)&HouseClass_Player[44516])
    && *(int *)&HouseClass_Player[44528] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player[44508] + 8))(
         &HouseClass_Player[44508],
         *(_DWORD *)&HouseClass_Player[44516] + *(_DWORD *)&HouseClass_Player[44528],
         0) )
  {
    v4 = (VoxelAnimTypeClass *)(*(_DWORD *)&HouseClass_Player[44524])++; /*0x74af4a*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player[44512] + 4 * (_DWORD)v4) = this; /*0x74af59*/
  }
  return this; /*0x74af5e*/
}
}
} // namespace gamemd

// 0x74B050
namespace gamemd {
char VoxelAnimTypeClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall VoxelAnimTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  double Double_Overwrite; // st7
  double v9; // st7
  int Int_Overwrite; // eax
  double v11; // st7
  INIClass *ecx6; // ecx
  double v13; // st7
  INIClass *v14; // eax
  double st7_6b; // st7
  VoxelAnimTypeClass *v12; // ecx
  VoxelAnimTypeClass *v17; // eax
  int v18; // eax
  AbstractTypeClass *v15; // edx
  int Index; // eax
  int v21; // eax
  AnimTypeClass *v22; // eax
  AnimTypeClass *v19; // edx
  AnimTypeClass *v24; // eax
  AnimTypeClass *eax22; // eax
  int v26; // eax
  INIClass *v27; // ecx
  int v28; // eax
  WarheadTypeClass *v25; // edx
  int v30; // eax
  ParticleSystemTypeClass *eax28; // eax
  bool v32; // al
  _DWORD *TechnoType; // eax
  WaveClass *v31; // edi
  ObjectClass *v36; // eax
  _DWORD *FileVXL; // eax
  INIClass *v38; // [esp-8h] [ebp-2A0h]
  INIClass *v39; // [esp-8h] [ebp-2A0h]
  char v40; // [esp-4h] [ebp-29Ch]
  VoxelAnimTypeClass *v41; // [esp+10h] [ebp-288h]
  AbstractTypeClass *v42; // [esp+10h] [ebp-288h]
  int v43; // [esp+10h] [ebp-288h]
  AnimTypeClass *v44; // [esp+10h] [ebp-288h]
  AnimTypeClass *v45; // [esp+10h] [ebp-288h]
  AnimTypeClass *v46; // [esp+10h] [ebp-288h]
  WarheadTypeClass *v47; // [esp+10h] [ebp-288h]
  ParticleSystemTypeClass *v48; // [esp+10h] [ebp-288h]
  char v49; // [esp+15h] [ebp-283h]
  char v50; // [esp+16h] [ebp-282h]
  char v51; // [esp+17h] [ebp-281h]
  ObjectClass Destination[3]; // [esp+18h] [ebp-280h] BYREF

  INIClass::ResetSection(aP1); /*0x74b066*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x74b06e*/
    return 0; /*0x74b614*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x74b08d*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     &unk_818610,
                     this->Normalized);
  v5 = this->Translucent; /*0x74b092*/
  this->Normalized = Bool_Overwrite; /*0x74b098*/
  v6 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_818604, v5); /*0x74b0a7*/
  v40 = this->IsTiberium; /*0x74b0b4*/
  this->Translucent = v6; /*0x74b0bb*/
  this->IsTiberium = INIClass::ReadBool_Overwrite( /*0x74b0c6*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_8184C8.unknown50,
                             v40);
  v7 = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_8184B0, this->IsMeteor); /*0x74b0db*/
  v38 = *(INIClass **)(this + 672); /*0x74b0ed*/
  this->IsMeteor = v7; /*0x74b0f6*/
  *(double *)(this + 672) = INIClass::ReadDouble_Overwrite( /*0x74b101*/
                              (int)aP1,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                              v38);
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x74b116*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620[88308],
                       0);
  if ( Double_Overwrite != 0.0 ) /*0x74b126*/
    *(double *)(this + 680) = Double_Overwrite * 0.01745277777777778; /*0x74b12e*/
  v9 = INIClass::ReadDouble_Overwrite( /*0x74b147*/
         (int)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[88288],
         0);
  if ( v9 != 0.0 ) /*0x74b157*/
    *(double *)(this + 688) = v9 * 0.01745277777777778; /*0x74b15f*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x74b178*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[88276],
                    *(INIClass **)(this + 668));
  v39 = *(INIClass **)(this + 696); /*0x74b18a*/
  this->Duration = Int_Overwrite; /*0x74b193*/
  v11 = INIClass::ReadDouble_Overwrite( /*0x74b199*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_8184C8.sectionHead[2],
          v39);
  ecx6 = *(INIClass **)(this + 704); /*0x74b1a4*/
  *(double *)(this + 696) = v11; /*0x74b1aa*/
  v13 = INIClass::ReadDouble_Overwrite( /*0x74b1ba*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[88268],
          ecx6);
  v14 = *(INIClass **)(this + 712); /*0x74b1c5*/
  *(double *)(this + 704) = v13; /*0x74b1cb*/
  st7_6b = INIClass::ReadDouble_Overwrite( /*0x74b1db*/
             (int)aP1,
             (INIClass *)(this + 36),
             (unsigned __int8 *)stru_8184C8[32],
             v14);
  v12 = *(VoxelAnimTypeClass **)(this + 724); /*0x74b1e0*/
  *(double *)(this + 712) = st7_6b; /*0x74b1ea*/
  v41 = v12; /*0x74b1fb*/
  if ( INIClass::GetString( /*0x74b207*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_8184C8,
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    v17 = globalHelper_04BB20(Destination[0].__pad_0, (int)&g_NetworkPlayerBuffer[5356]); /*0x74b219*/
  }
  else
  {
    v17 = v41; /*0x74b220*/
  }
  this->Spawns = v17; /*0x74b224*/
  this->SpawnCount = INIClass::ReadInt_Overwrite( /*0x74b248*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              &unk_8184BC,
                              *(INIClass **)(this + 728));
  v51 = INIClass::ReadBool_Overwrite( /*0x74b25d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[88252],
          0);
  v50 = INIClass::ReadBool_Overwrite( /*0x74b270*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[88236],
          0);
  v49 = INIClass::ReadBool_Overwrite( /*0x74b27f*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[88220],
          0);
  v18 = INIClass::ReadInt_Overwrite( /*0x74b28c*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[88208],
          *(INIClass **)(this + 664));
  v15 = *(AbstractTypeClass **)(this + 732); /*0x74b291*/
  this->VoxelIndex = v18; /*0x74b297*/
  v42 = v15; /*0x74b2b4*/
  if ( !INIClass::GetString( /*0x74b2cd*/
          aP1,
          (INIClass *)(this + 36),
          &unk_818418,
          (INIClass *)&DataGlobal_87F8E4[42624],
          (INIClass *)Destination,
          128)
    || (Index = VocClass::FindIndex(Destination), Index == -1) )
  {
    Index = (int)v42; /*0x74b2cf*/
  }
  v43 = this->StopSound; /*0x74b2e8*/
  this->StartSound = Index; /*0x74b2f4*/
  if ( !INIClass::GetString( /*0x74b30f*/
          aP1,
          (INIClass *)(this + 36),
          &unk_818404,
          (INIClass *)&DataGlobal_87F8E4[42624],
          (INIClass *)Destination,
          128)
    || (v21 = VocClass::FindIndex(Destination), v21 == -1) )
  {
    v21 = v43; /*0x74b311*/
  }
  this->StopSound = v21; /*0x74b31f*/
  v44 = *(AnimTypeClass **)(this + 740); /*0x74b338*/
  if ( INIClass::GetString( /*0x74b33c*/
         aP1,
         (INIClass *)(this + 36),
         &unk_8183F8,
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    v22 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x74b349*/
  }
  else
  {
    v22 = v44; /*0x74b350*/
  }
  v19 = *(AnimTypeClass **)(this + 744); /*0x74b354*/
  this->BounceAnim = v22; /*0x74b35a*/
  v45 = v19; /*0x74b377*/
  if ( INIClass::GetString( /*0x74b37b*/
         aP1,
         (INIClass *)(this + 36),
         &unk_8183EC,
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    v24 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x74b388*/
  }
  else
  {
    v24 = v45; /*0x74b38f*/
  }
  v46 = *(AnimTypeClass **)(this + 748); /*0x74b3a8*/
  this->ExpireAnim = v24; /*0x74b3b4*/
  if ( INIClass::GetString( /*0x74b3ba*/
         aP1,
         (INIClass *)(this + 36),
         &unk_8183E0,
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    eax22 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x74b3c7*/
  }
  else
  {
    eax22 = v46; /*0x74b3ce*/
  }
  this->TrailerAnim = eax22; /*0x74b3d2*/
  v26 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81859C, *(INIClass **)(this + 752)); /*0x74b3e7*/
  v27 = *(INIClass **)(this + 756); /*0x74b3ec*/
  this->Damage = v26; /*0x74b3f2*/
  v28 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &unk_8183BC, v27); /*0x74b401*/
  v25 = *(WarheadTypeClass **)(this + 760); /*0x74b406*/
  this->DamageRadius = v28; /*0x74b40c*/
  v47 = v25; /*0x74b429*/
  if ( INIClass::GetString( /*0x74b42d*/
         aP1,
         (INIClass *)(this + 36),
         &unk_8183B4,
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    v30 = WarheadTypeClass::FindOrCreate(Destination[0].__pad_0); /*0x74b43a*/
  }
  else
  {
    v30 = (int)v47; /*0x74b441*/
  }
  v48 = *(ParticleSystemTypeClass **)(this + 764); /*0x74b45a*/
  this->Warhead = v30; /*0x74b466*/
  if ( INIClass::GetString( /*0x74b46c*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[88192],
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)Destination,
         128) )
  {
    eax28 = BuildingTypeClass::LoadOrGet(Destination); /*0x74b479*/
  }
  else
  {
    eax28 = v48; /*0x74b480*/
  }
  this->AttachedSystem = eax28; /*0x74b484*/
  v32 = v51 || v49 || v50; /*0x74b4a6*/
  this->SourceShared = v32; /*0x74b4ad*/
  if ( v32 ) /*0x74b4b3*/
  {
    TechnoType = (_DWORD *)INIEntry::GetTechnoType( /*0x74b4c1*/
                             aP1,
                             (CCINIClass *)(this + 36),
                             (unsigned __int8 *)&stru_830620[88180]);
    if ( !TechnoType ) /*0x74b4ca*/
    {
      this->MainVoxel = 0; /*0x74b555*/
      this->TurretVoxel = 0; /*0x74b55b*/
      return 1; /*0x74b569*/
    }
    if ( v51 ) /*0x74b4d6*/
    {
      this->MainVoxel = TechnoType[44]; /*0x74b4de*/
      this->TurretVoxel = TechnoType[45]; /*0x74b4ea*/
      return 1; /*0x74b4f8*/
    }
    if ( v50 ) /*0x74b501*/
    {
      this->MainVoxel = TechnoType[46]; /*0x74b509*/
      this->TurretVoxel = TechnoType[47]; /*0x74b515*/
      return 1; /*0x74b523*/
    }
    if ( v49 ) /*0x74b52c*/
    {
      this->MainVoxel = TechnoType[48]; /*0x74b538*/
      this->TurretVoxel = TechnoType[49]; /*0x74b544*/
      return 1; /*0x74b552*/
    }
  }
  else
  {
    _makepath(&Destination[0].needsRedraw, 0, 0, (const char *)(this + 504), g_Str_File__VXL); /*0x74b584*/
    CCFileClass::Construct(Destination, &Destination[0].needsRedraw); /*0x74b598*/
    v31 = *(WaveClass **)(this + 176); /*0x74b59d*/
    if ( v31 ) /*0x74b5a5*/
    {
      WaveClass::Destroy(this->MainVoxel); /*0x74b5a9*/
      __3_YAXPAX_Z(v31); /*0x74b5af*/
    }
    v36 = (ObjectClass *)__2_YAPAXI_Z(0x1Cu); /*0x74b5b9*/
    if ( v36 ) /*0x74b5c3*/
      FileVXL = File::LoadFileVXL(v36, Destination, 0); /*0x74b5ce*/
    else
      FileVXL = 0; /*0x74b5d5*/
    this->MainVoxel = FileVXL; /*0x74b5db*/
    *(_DWORD *)Destination[0].__pad_0 = &vt_CCFileClass; /*0x74b5e1*/
    Destination[0].customSound = 0; /*0x74b5e9*/
    Vector::Clear((int)&Destination[0].customSound_controller[2]); /*0x74b5f1*/
    *(_DWORD *)Destination[0].__pad_0 = &off_7E1668; /*0x74b5fa*/
    BufferIOFileClass::Dtor(Destination); /*0x74b602*/
  }
  return 1; /*0x74b4f2*/
}
}
} // namespace gamemd

// 0x74B690
namespace gamemd {
int VoxelAnimTypeClass::PowerDrainUpdate(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall VoxelAnimTypeClass::_vt13(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x74b699*/
  LOBYTE(v3) = this->Normalized; /*0x74b69e*/
  Power::FlagProcess(a2, v3); /*0x74b6a7*/
  LOBYTE(v4) = this->Translucent; /*0x74b6ac*/
  Power::FlagProcess(a2, v4); /*0x74b6b5*/
  LOBYTE(v5) = this->SourceShared; /*0x74b6ba*/
  Power::FlagProcess(a2, v5); /*0x74b6c3*/
  Power::TimerProcess(this->VoxelIndex); /*0x74b6d1*/
  Power::TimerProcess(this->Duration); /*0x74b6df*/
  Checksummer::Add_double((unsigned int *)a2, this->Elasticity, this->q2A4); /*0x74b6f4*/
  Checksummer::Add_double((unsigned int *)a2, this->MinAngularVelocity, this->q0AB); /*0x74b709*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxAngularVelocity, this->q0AD); /*0x74b71e*/
  Checksummer::Add_double((unsigned int *)a2, this->MinZVel, this->q0AF); /*0x74b733*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxZVel, this->q2C4); /*0x74b748*/
  Checksummer::Add_double((unsigned int *)a2, this->MaxXYVel, this->q2CC); /*0x74b75d*/
  LOBYTE(v6) = this->IsMeteor; /*0x74b762*/
  Power::FlagProcess(a2, v6); /*0x74b76b*/
  Power::TimerProcess(this->SpawnCount); /*0x74b779*/
  Power::TimerProcess(this->StartSound); /*0x74b787*/
  Power::TimerProcess(this->StopSound); /*0x74b795*/
  Power::TimerProcess(this->Damage); /*0x74b7a3*/
  Power::TimerProcess(this->DamageRadius); /*0x74b7b1*/
  LOBYTE(v7) = this->IsTiberium; /*0x74b7b6*/
  return Power::FlagProcess(a2, v7); /*0x74b7c4*/
}
}
} // namespace gamemd

// 0x74BA30
namespace gamemd {
VoxelAnimTypeClass * VoxelAnimTypeClass::ddtor(char a2)
{
    VoxelAnimTypeClass* v7 = this;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    g_AnimPoolManager;
    int v2 = g_AnimPoolManager.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < g_AnimManager && v2 < --g_AnimManager )
    {
        do
        {
            ++v2;
            *(g_AnimPoolCount + v2 - 1) = *(g_AnimPoolCount + v2);
        }
        while ( v2 < g_AnimManager );
    }
    VoxelAnimTypeClass_Array;
    int v3 = VoxelAnimTypeClass_Array.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < g_MultiplayerPool && v3 < --g_MultiplayerPool )
    {
        do
        {
            ++v3;
            *(DataGlobal_A8EB2C + v3 - 1) = *(DataGlobal_A8EB2C + v3);
        }
        while ( v3 < g_MultiplayerPool );
    }
    if ( blk->voxelByte662 )
    {
        blk->voxelSlot176 = 0;
        blk->voxelSlot180 = 0;
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x74B7D0
namespace gamemd {
int VoxelAnimTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 784035174;
  a2[1] = 298978637;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x74B810
namespace gamemd {
int VoxelAnimTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_VoxelAnimTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_VoxelAnimTypeClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)aP0[1].Name);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[19]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[23]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[27]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[3]);
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].Name[4]);
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x74B8D0
namespace gamemd {
int VoxelAnimTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x74B8F0
namespace gamemd {
long long VoxelAnimTypeClass::GetData(ObjectTypeClass * aP1, int a3)
{
{
    __int64 result;
    result = (unsigned int)aP1;
    if ( (ObjectTypeClass *)this->Warhead == aP1 )
    this->Warhead = 0;
    if ( (ObjectTypeClass *)this->BounceAnim == aP1 )
    this->BounceAnim = 0;
    if ( (ObjectTypeClass *)this->ExpireAnim == aP1 )
    this->ExpireAnim = 0;
    if ( (ObjectTypeClass *)this->TrailerAnim == aP1 )
    this->TrailerAnim = 0;
    if ( (ObjectTypeClass *)this->Spawns == aP1 )
    this->Spawns = 0;
    if ( (ObjectTypeClass *)this->AttachedSystem == aP1 )
    this->AttachedSystem = 0;
    return result;
}
}
} // namespace gamemd

// 0x74B9F0
namespace gamemd {
int VoxelAnimTypeClass::GetTypeIdentifier()
{
return 42;
}
} // namespace gamemd

// 0x74BA00
namespace gamemd {
int VoxelAnimTypeClass::GetObjectSize()
{
return 776;
}
} // namespace gamemd

// 0x74BA10
namespace gamemd {
char VoxelAnimTypeClass::Stub(int a1, int a2)
{
return 0;
}
} // namespace gamemd

// 0x74BA20
namespace gamemd {
int VoxelAnimTypeClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd
