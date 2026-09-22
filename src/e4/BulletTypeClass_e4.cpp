// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"

// 0x465450
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{
{
  int result; // eax
  int i; // edi
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  BuildingTypeClass *v0 = g_TriggerClassCount; /*0x465450*/
  int v1 = 0; /*0x46545e*/
  if ( g_TriggerClassCount > 0 ) /*0x465462*/
  {
    AbstractClass *v2 = (char *)g_TriggerTypeCount; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(*(_DWORD *)v2 + 5895) ) /*0x465475*/
        v1 = *(char *)(*(_DWORD *)v2 + 5895); /*0x465477*/
      v2 += 4; /*0x465479*/
      --v0; /*0x46547c*/
    }
    while ( v0 ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( dword_89DDC0 ) /*0x46548b*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x465491*/
      _DWORD * v3 = __2_YAPAXI_Z(0x20u); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        dword_89DDC0 = (int)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  result = g_TriggerClassCount; /*0x4654df*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x4654e8*/
  {
    int v6 = *((_DWORD *)g_TriggerTypeCount + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)DataGlobal_887048,
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    int v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < g_TechnoClassCount ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *((_DWORD *)g_FrameCounter + v7); /*0x465531*/
    result = g_TriggerClassCount; /*0x465537*/
  }
  return result; /*0x465541*/
}

// 0x465CC0
BuildingTypeClass * * BulletTypeClass::ReadTrailerAnim()
{
{
  int result; // eax
  int i; // edi
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = g_TriggerClassCount; /*0x465cc0*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x465ccd*/
  {
    WeaponTypeClass *v2 = *((_DWORD *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (unsigned __int8 ***)DataGlobal_887048,
      (unsigned __int8 *)(v2 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    int v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < g_TechnoClassCount ) /*0x465d0d*/
      *(_DWORD *)(v2 + 3672) = *((_DWORD *)g_FrameCounter + v3); /*0x465d18*/
    result = g_TriggerClassCount; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}

// 0x46BBC0
unsigned char * BulletTypeClass::Construct(ObjectClass * aP1)
{
{
  BulletTypeClass *v3; // eax
  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x46bbc9*/
  this->airburst = 0; /*0x46bbd5*/
  this->floater = 0; /*0x46bbdb*/
  this->subjectToCliffs = 0; /*0x46bbe1*/
  this->subjectToElevation = 0; /*0x46bbe7*/
  this->subjectToWalls = 0; /*0x46bbed*/
  this->veryHigh = 0; /*0x46bbf3*/
  this->shadow = 1; /*0x46bbf9*/
  this->arcing = 0; /*0x46bc00*/
  this->dropping = 0; /*0x46bc06*/
  this->level = 0; /*0x46bc0c*/
  this->inviso = 0; /*0x46bc12*/
  this->proximity = 0; /*0x46bc18*/
  this->ranged = 0; /*0x46bc1e*/
  this->noRotate = 1; /*0x46bc24*/
  this->inaccurate = 0; /*0x46bc2b*/
  this->flakScatter = 0; /*0x46bc31*/
  this->AA = 0; /*0x46bc37*/
  this->q2A5 = 1; /*0x46bc3d*/
  this->acceleration = 3; /*0x46bc44*/
  this->spawnDelay = 3; /*0x46bc4a*/
  this->degenerates = 0; /*0x46bc50*/
  this->bouncy = 0; /*0x46bc59*/
  this->animPalette = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  this->firersPalette = 0; /*0x46bc6c*/
  this->cluster = 1; /*0x46bc72*/
  this->airburstWeapon = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  this->vertical = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->trailer = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->courseLockDuration = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  this->scalable = 0; /*0x46bcc2*/
  this->arm = 0; /*0x46bcc8*/
  this->animLow = 0; /*0x46bcce*/
  this->animHigh = 0; /*0x46bcd4*/
  this->animRate = 0; /*0x46bcda*/
  this->flat = 0; /*0x46bce0*/
  *(_DWORD *)this = &BulletTypeClass::`vftable'; /*0x46bce6*/
  this->vtable1 = &BulletTypeClass::`vftable'; /*0x46bcec*/
  this->vtable2 = &BulletTypeClass::`vftable'; /*0x46bcf2*/
  this->vtable3 = &vt_BulletTypeClass; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( (int)g_BulletTypeInitState < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))BulletTypeClass_Array->field_8)(
         &BulletTypeClass_Array,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = g_BulletTypeInitState; /*0x46bd72*/
    g_BulletTypeInitState = (BulletTypeClass *)((char *)g_BulletTypeInitState + 1); /*0x46bd75*/
    *(_DWORD *)&dword_A83C84->__pad_0[4 * (_DWORD)v3] = this; /*0x46bd81*/
  }
  if ( *(int *)&g_OverlayTypeConfig[32392] < *(int *)&g_OverlayTypeConfig[32384] /*0x46bdb8*/
    || (g_OverlayTypeConfig[32389] || !*(_DWORD *)&g_OverlayTypeConfig[32384])
    && *(int *)&g_OverlayTypeConfig[32396] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[32376] + 8))(
         &g_OverlayTypeConfig[32376],
         *(_DWORD *)&g_OverlayTypeConfig[32384] + *(_DWORD *)&g_OverlayTypeConfig[32396],
         0) )
  {
    int v4 = (*(_DWORD *)&g_OverlayTypeConfig[32392])++; /*0x46bdc5*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[32380] + 4 * v4) = this; /*0x46bdd4*/
  }
  return this; /*0x46bdd9*/
}

// 0x46BEE0
WeaponTypeClass * * BulletTypeClass::LoadFromINI(unsigned char *** a2)
{
{
  char Bool_Overwrite; // al
  WeaponTypeClass *v22; // eax
  WeaponTypeClass *v23; // eax
  int Int_Overwrite; // eax
  INIClass *v28; // edx
  WeaponTypeClass *v33; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v35; // [esp-Ch] [ebp-98h]
  WeaponTypeClass *v37; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v38; // [esp+8h] [ebp-84h]
  WeaponTypeClass *v39; // [esp+8h] [ebp-84h]
  INIClass Destination[2]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)a2) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  this->arm = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.unknown30,
                              this->arm);
  this->rot = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.INIClass_field_2C,
                              this->rot);
  this->courseLockDuration = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.sectionHead[2],
                              this->courseLockDuration);
  this->elasticity = INIClass::ReadDouble_Overwrite( /*0x46bf76*/
                              (int)a2,
                              (INIClass *)(this + 36),
                              (unsigned __int8 *)&stru_8184C8.INIClass_field_2C,
                              (INIClass *)this->elasticity);
  this->acceleration = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_81B138.headNode[1],
                              this->acceleration);
  this->Color = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                              a2,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              this->Color);
  this->arcing = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B130,
                             this->arcing);
  this->floater = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B128,
                             this->floater);
  this->subjectToCliffs = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B118,
                             this->subjectToCliffs);
  this->subjectToElevation = INIClass::ReadBool_Overwrite( /*0x46c012*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B104,
                             this->subjectToElevation);
  this->subjectToWalls = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B0F4,
                             this->subjectToWalls);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int)a2,
                     (unsigned __int8 *)(this + 36),
                     &unk_81B0E8,
                     this->veryHigh);
  bool v5 = this->shadow; /*0x46c046*/
  this->veryHigh = Bool_Overwrite; /*0x46c04c*/
  char v6 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_818660, v5); /*0x46c05b*/
  bool v30 = this->dropping; /*0x46c068*/
  this->shadow = v6; /*0x46c06f*/
  this->dropping = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0DC, v30); /*0x46c07a*/
  char v7 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &aLevel, this->level); /*0x46c08f*/
  bool v8 = this->inviso; /*0x46c094*/
  this->level = v7; /*0x46c09a*/
  char v9 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0CC, v8); /*0x46c0a9*/
  bool v31 = this->proximity; /*0x46c0b6*/
  this->inviso = v9; /*0x46c0bd*/
  this->proximity = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0C0, v31); /*0x46c0c8*/
  char v10 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0B8, this->ranged); /*0x46c0dd*/
  bool v11 = this->inaccurate; /*0x46c0e2*/
  this->ranged = v10; /*0x46c0e8*/
  char v12 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0AC, v11); /*0x46c0f7*/
  bool v32 = this->flakScatter; /*0x46c104*/
  this->inaccurate = v12; /*0x46c10b*/
  this->flakScatter = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B0A0, v32); /*0x46c116*/
  char v13 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B09C, this->AA); /*0x46c12b*/
  char v14 = this->AG; /*0x46c130*/
  this->AA = v13; /*0x46c136*/
  char v15 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B098, v14); /*0x46c145*/
  bool v16 = this->degenerates; /*0x46c14a*/
  this->AG = v15; /*0x46c150*/
  this->degenerates = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B08C, v16); /*0x46c164*/
  char v17 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B084, this->bouncy); /*0x46c179*/
  bool v18 = this->airburst; /*0x46c17e*/
  this->bouncy = v17; /*0x46c184*/
  char v19 = INIClass::ReadBool_Overwrite((int)a2, (unsigned __int8 *)(this + 36), &unk_81B078, v18); /*0x46c193*/
  v33 = this->cluster; /*0x46c1a0*/
  this->airburst = v19; /*0x46c1a7*/
  this->cluster = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81B070,
                              (INIClass *)v33);
  this->scalable = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             &unk_81B064,
                             this->scalable);
  if ( (int)INIClass::GetString( /*0x46c1ef*/
              a2,
              (INIClass *)(this + 36),
              (unsigned __int8 *)&g_INI_Key_Image,
              (INIClass *)&DataGlobal_87F8E4[42624],
              (INIClass *)(this + 504),
              25) > 0 )
  {
  WeaponTypeClass *v20; // eax
    v37 = this->trailer; /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (unsigned __int8 ***)&DataGlobal_87F8E4[30876],
           (INIClass *)(this + 504),
           (unsigned __int8 *)Delimiter.location,
           (INIClass *)&DataGlobal_87F8E4[42624],
           Destination,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate((AbstractClass *)Destination); /*0x46c226*/
    }
    else
    {
      v20 = v37; /*0x46c22d*/
    }
    this->trailer = v20; /*0x46c231*/
    this->spawnDelay = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                                (int)&DataGlobal_87F8E4[30876],
                                (unsigned __int8 *)(this + 504),
                                (CCINIClass *)&Delimiter.isAliveFlag,
                                this->spawnDelay);
  char v21; // al
    v21 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int)&DataGlobal_87F8E4[30876],
            (unsigned __int8 *)(this + 504),
            &unk_81B05C,
            this->noRotate == 0);
    bool v34 = this->flat; /*0x46c27d*/
    this->noRotate = v21 == 0; /*0x46c287*/
    this->flat = INIClass::ReadBool_Overwrite( /*0x46c292*/
                               (int)&DataGlobal_87F8E4[30876],
                               (unsigned __int8 *)(this + 504),
                               &unk_818624,
                               v34);
  }
  v38 = this->airburstWeapon; /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         a2,
         (INIClass *)(this + 36),
         &unk_81B04C,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Destination,
         128) )
  {
    v22 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c2c6*/
  }
  else
  {
    v22 = v38; /*0x46c2cd*/
  }
  this->airburstWeapon = v22; /*0x46c2db*/
  v39 = this->shrapnelWeapon; /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         a2,
         (INIClass *)(this + 36),
         &unk_81B03C,
         (INIClass *)&DataGlobal_87F8E4[42624],
         Destination,
         128) )
  {
    v23 = InfantryTypeClass::Find(Destination[0].__pad_0); /*0x46c305*/
  }
  else
  {
    v23 = v39; /*0x46c30c*/
  }
  v35 = this->shrapnelCount; /*0x46c318*/
  this->shrapnelWeapon = v23; /*0x46c31f*/
  this->shrapnelCount = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                              (int)a2,
                              (unsigned __int8 *)(this + 36),
                              &unk_81B02C,
                              (INIClass *)v35);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    (int)a2,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)stru_81AFD0[72],
                    this->detonationAltitude);
  bool v25 = this->vertical; /*0x46c344*/
  this->detonationAltitude = Int_Overwrite; /*0x46c34a*/
  char v26; // al
  v26 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int)a2,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_81AFD0.INIClass_field_3C,
          v25);
  bool v36 = this->firersPalette; /*0x46c366*/
  this->vertical = v26; /*0x46c36d*/
  this->firersPalette = INIClass::ReadBool_Overwrite( /*0x46c378*/
                             (int)a2,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_81AFD0.INIClass_field_2C,
                             v36);
  this->animLow = INIClass::ReadInt_Overwrite( /*0x46c399*/
                             (int)&DataGlobal_87F8E4[30876],
                             (unsigned __int8 *)(this + 504),
                             (CCINIClass *)&stru_81AFD0[36],
                             (INIClass *)this->animLow);
  char v27; // al
  v27 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (int)&DataGlobal_87F8E4[30876],
          (unsigned __int8 *)(this + 504),
          (CCINIClass *)&stru_81AFD0.sectionHead[2],
          (INIClass *)this->animHigh);
  v28 = (INIClass *)this->animRate; /*0x46c3bd*/
  this->animHigh = v27; /*0x46c3c3*/
  this->animRate = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                             (int)&DataGlobal_87F8E4[30876],
                             (unsigned __int8 *)(this + 504),
                             (CCINIClass *)&stru_81AFD0.headNode[2],
                             v28);
  this->animPalette = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                             (int)&DataGlobal_87F8E4[30876],
                             (unsigned __int8 *)(this + 504),
                             &stru_81AFD0,
                             this->animPalette);
  if ( !this->inviso ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x46c406*/
  if ( this->Voxel ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)this); /*0x46c417*/
  return 1; /*0x46c41c*/
}

// 0x46C560
int BulletTypeClass::ProcessPower(int * a2)
{
{

  int v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46c569*/
  LOBYTE(v3) = this->airburst; /*0x46c56e*/
  Power::FlagProcess(a2, v3); /*0x46c577*/
  int v4; // ecx
  LOBYTE(v4) = this->shadow; /*0x46c57c*/
  Power::FlagProcess(a2, v4); /*0x46c585*/
  int v5; // edx
  LOBYTE(v5) = this->arcing; /*0x46c58a*/
  int v6 = Power::FlagProcess(a2, v5); /*0x46c593*/
  LOBYTE(v6) = this->dropping; /*0x46c598*/
  Power::FlagProcess(a2, v6); /*0x46c5a1*/
  int v7; // ecx
  LOBYTE(v7) = this->level; /*0x46c5a6*/
  Power::FlagProcess(a2, v7); /*0x46c5af*/
  int v8; // edx
  LOBYTE(v8) = this->inviso; /*0x46c5b4*/
  int v9 = Power::FlagProcess(a2, v8); /*0x46c5bd*/
  LOBYTE(v9) = this->proximity; /*0x46c5c2*/
  Power::FlagProcess(a2, v9); /*0x46c5cb*/
  int v10; // ecx
  LOBYTE(v10) = this->ranged; /*0x46c5d0*/
  Power::FlagProcess(a2, v10); /*0x46c5d9*/
  int v11; // edx
  LOBYTE(v11) = this->noRotate; /*0x46c5de*/
  int v12 = Power::FlagProcess(a2, v11); /*0x46c5e7*/
  LOBYTE(v12) = this->inaccurate; /*0x46c5ec*/
  Power::FlagProcess(a2, v12); /*0x46c5f5*/
  int v13; // ecx
  LOBYTE(v13) = this->flakScatter; /*0x46c5fa*/
  Power::FlagProcess(a2, v13); /*0x46c603*/
  int v14; // edx
  LOBYTE(v14) = this->AA; /*0x46c608*/
  int v15 = Power::FlagProcess(a2, v14); /*0x46c611*/
  LOBYTE(v15) = this->AG; /*0x46c616*/
  Power::FlagProcess(a2, v15); /*0x46c61f*/
  int v16; // ecx
  LOBYTE(v16) = this->degenerates; /*0x46c624*/
  Power::FlagProcess(a2, v16); /*0x46c62d*/
  int v17; // edx
  LOBYTE(v17) = this->bouncy; /*0x46c632*/
  Power::FlagProcess(a2, v17); /*0x46c63b*/
  Checksummer::Add_double(this->elasticity, this->Acceleration); /*0x46c650*/
  Power::TimerProcess(this->acceleration); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->arm); /*0x46c67a*/
  int v18; // edx
  LOBYTE(v18) = this->flat; /*0x46c67f*/
  return Power::FlagProcess(a2, v18); /*0x46c68d*/
}

// 0x46C890
BulletTypeClass * BulletTypeClass::ddtor(char a2)
{
    BulletTypeClass* v7 = this;
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
    BulletTypeClass_Array;
    int v3 = BulletTypeClass_Array.FindItemIndex(&v7);
    if ( v3 != -1 && v3 < g_BulletTypeInitState && v3 < --g_BulletTypeInitState )
    {
        do
        {
            ++v3;
            *(g_BulletTypeTable + v3 - 1) = *(g_BulletTypeTable + v3);
        }
        while ( v3 < g_BulletTypeInitState );
    }
    ObjectTypeClass::Destruct(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}

// 0x69FC10
int BulletTypeClass::ProcessImpact(int a1)
{
{
  void **v13; // eax
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  int v1 = a1; /*0x69fc16*/
  int v2 = a1 - 4; /*0x69fc28*/
  int v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x69fc31*/
  int v4 = *(_DWORD *)(v2 + 28); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x69fc3a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x69fc43*/
    Timer::Start(&v23, 3); /*0x69fc46*/
    *(_DWORD *)(v2 + 36) = v23; /*0x69fc57*/
    *(_DWORD *)(v2 + 40) = v24; /*0x69fc5d*/
    *(_DWORD *)(v2 + 44) = v25; /*0x69fc64*/
    *(_DWORD *)(v2 + 48) = 3; /*0x69fc67*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x69fc7a*/
  {
  _DWORD *v9; // ecx
    int v5 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x69fd16*/
    if ( v5 /*0x69fd54*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11
  _DWORD *v6; // ecx
      && (v6 = *(_DWORD **)(v1 + 8),
  _WORD *v7; // ebp
          v7 = (_WORD *)(v6[361] + 36),
  _WORD *v8; // eax
          v8 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v6 + 440))(v6, &a1),
          *v8 == *v7)
      && v8[1] == v7[1] )
    {
      v9 = *(_DWORD **)(v2 + 12); /*0x69fd56*/
      if ( !v9[358] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      _DWORD * v11 = *(_DWORD **)(v1 + 8); /*0x69fd7f*/
      if ( v11[43] != 5 /*0x69fddc*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig && *(_QWORD *)(v1 + 52) == DataGlobal_B077FC
        || v11[39] != *(_DWORD *)(v1 + 48)
        || v11[40] != *(_DWORD *)(v1 + 52)
        || v11[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v11 + 226)) ) /*0x69fe28*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x69ff5d*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x69ff62*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x69ff6b*/
          _BYTE * v16 = *(_BYTE **)(v1 + 8); /*0x69ff71*/
          if ( !v16[144] || v16[129] || v16[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x69ffcd*/
        {
          int v17 = *(_DWORD *)(v1 + 8); /*0x69ffd8*/
          if ( *(_DWORD *)(v17 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(_BYTE *)(v17 + 973) ) /*0x69ffe7*/
            {
              if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != DataGlobal_B077FC ) /*0x6a0006*/
              {
                *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = DataGlobal_B077FC; /*0x6a001d*/
                *(_BYTE *)(v2 + 99) = 0; /*0x6a0029*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x6a002c*/
              *(_DWORD *)(v1 + 80) = 0; /*0x6a002f*/
            }
            else
            {
              int v18 = *(_DWORD *)(v17 + 1444); /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
  _DWORD *v19; // eax
                v19 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v18 + 76))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v19, v19[1], v19[2]); /*0x6a0069*/
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        _BYTE * v20 = *(_BYTE **)(v1 + 8); /*0x6a0074*/
        if ( v20[981] /*0x6a00ab*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v20 + 388))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != DataGlobal_B077FC ) /*0x6a00cc*/
          {
            *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = DataGlobal_B077FC; /*0x6a00e3*/
            *(_BYTE *)(v2 + 99) = 0; /*0x6a00ef*/
          }
          _DWORD * v21 = *(_DWORD **)(v2 + 12); /*0x6a00f2*/
          if ( v21[358] ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex(v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x6a011a*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x6a0142*/
        if ( (_BYTE)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = *(_DWORD **)(v2 + 12); /*0x69fdde*/
      if ( !v9[358] ) /*0x69fde7*/
      {
LABEL_20:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( *(_DWORD *)(v1 + 84) != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
    && *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) == -1
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) == 1
    && *(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x69fcee*/
  if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
LABEL_81:
  WalkLocomotion::ProcessCollision(v1 - 4, v22); /*0x6a0171*/
  if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !((int)g_CurrentFrame % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 132))(*(_DWORD *)(v1 + 8)) + 3433) )
    {
      _BYTE * v12 = *(_BYTE **)(v1 + 8); /*0x69fe76*/
      if ( !v12[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 444))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( g_RulesClass_Instance->InfantryBrute ) /*0x69fe97*/
        {
          v13 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            int * v14 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x69feb4*/
            v23 = *v14; /*0x69fec5*/
            v24 = v14[1]; /*0x69fecc*/
            v25 = v14[2]; /*0x69fed8*/
            AnimClass::ctor(v13, (void *)g_RulesClass_Instance->InfantryBrute, &v23, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig /*0x69ff1e*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)DataGlobal_B077FC
    && *(_QWORD *)(v1 + 56) == __PAIR64__(g_OverlayTypeConfig, HIDWORD(DataGlobal_B077FC))
    && *(_QWORD *)(v1 + 64) == DataGlobal_B077FC )
  {
    int v15 = *(_DWORD *)(v1 + 8); /*0x69ff25*/
    if ( *(_DWORD *)(v15 + 1504) == -1 && *(double *)(v15 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 1348))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x69fd72*/
}

// 0x46C4F0
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{
{
    int GroundHeight;
    int v3;
    int v5;
    int v6;
    int v7;
    v5 = *a2;
    v6 = *((int*)(a2) + 1);
    v7 = *((int*)(a2) + 2);
    GroundHeight = Cell::GetGroundHeight(&v5);
    v3 = v7;
    if ( v7 <= GroundHeight )
    v3 = Cell::GetGroundHeight(&v5) + 1;
    *a1 = v5;
    *((int*)(a1) + 1) = v6;
    *((int*)(a1) + 2) = v3;
    return a1;
}
}

// 0x46C6A0
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
{
    int result;
    result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_BulletTypeClass;
    *(int *)&aP0->__pad_0[12] = &vt_BulletTypeClass;
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0);
    ObjectTypeClass::Load2DArt(aP0->__pad_0);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].UINameLabel[7]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].NeedsSaveOrLink);
    return 0;
  }
    return result;
}
}

// 0x46C730
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}

// 0x46C750
int BulletTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1525862007;
  a2[1] = 298976820;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}

// 0x46C820
int BulletTypeClass::GetWarhead(int a2, int a3)
{
    int result;
    result = a2;
    if ( a2 == (int)this->trailer )
        this->trailer = 0;
    return result;
}

// 0x46C850
int BulletTypeClass::GetTypeIdentifier()
{
return 9;
}

// 0x46C860
int BulletTypeClass::GetObjectSize()
{
return 760;
}

// 0x46C870
char BulletTypeClass::Stub(int a1, int a2)
{
return 0;
}

// 0x46C880
int BulletTypeClass::StubReturnFalse(int a1)
{
return 0;
}

// 0x475150
char BulletTypeClass::ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4)
{
{
    char v4;
    char *v5;
    int v6;
    int v8;
    char Source[128];
    v4 = 0;
    Source[0] = 0;
    if ( !a4 || g_SuperWeaponTypeArray <= 0 )
    return 1;
    v5 = (char *)g_SuperWeaponTypeCount;
    v8 = g_SuperWeaponTypeArray;
    do
  {
    v6 = *(int *)v5;
    if ( ((1 << *(int *)(*(int *)(v5) + 184)) & a4) != 0 )
    {
    if ( v4 )
    strcat(Source, Delimiter);
    strcat(Source, (const char *)(v6 + 36));
    v4 = Source[0];
    }
    v5 += 4;
    --v8;
  }
    while ( v8 );
    if ( v4 )
    return INIClass::SetString(this, Block, a3, Source);
    else
    return 1;
}
}
