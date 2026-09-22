// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6CEE60_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractType_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x46C790
void * ObjectTypeClass::FindOrCreate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !_strcmpi(g_Str_none, this) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  int v2 = 0; /*0x46c7bd*/
  if ( (int)g_BulletTypeInitState <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    _BYTE * v3 = (_BYTE *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return (BulletTypeClass *)BulletTypeClass::Construct(v3, this); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)&dword_A83C84->__pad_0[4 * v2] + 36), this) ) /*0x46c7da*/
  {
    if ( ++v2 >= (int)g_BulletTypeInitState ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return *(BulletTypeClass **)&dword_A83C84->__pad_0[4 * v2]; /*0x46c7ff*/
}
}

// 0x473980
int ObjectTypeClass::loadTypeMember_473980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v3; // esi
  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  int v2 = 0; /*0x473989*/
  v3 = (ObjectClass *)off_81B7C8; /*0x47398b*/
  while ( _strcmpi(*(const void **)&v3->__pad_0[4], this) && _strcmpi(*(const void **)v3->__pad_0, this) ) /*0x4739af*/
  {
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x4739b1*/
    ++v2; /*0x4739b4*/
    if ( (int)v3 >= (int)aAirlift ) /*0x4739bb*/
      return -1; /*0x4739bb*/
  }
  return v2; /*0x4739bd*/
}
}

// 0x474940
int ObjectTypeClass::loadTypeMember_5474940(CCINIClass * aP1, unsigned char * a2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( (int)INIClass::GetString( /*0x474962*/
              this,
              (INIClass *)aP1,
              a2,
              (INIClass *)&DataGlobal_87F8E4[42624],
              (INIClass *)Destination,
              32) <= 0 )
    return a4; /*0x4749a4*/
  int v4 = 0; /*0x474964*/
  v5 = (ObjectClass *)&off_81B9B0; /*0x474966*/
  while ( _strcmpi(Destination, *(char **)v5->__pad_0) ) /*0x47497d*/
  {
    v5 = (ObjectClass *)((char *)v5 + 8); /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return dword_81B9B4[2 * v4]; /*0x47498b*/
}
}

// 0x474F50
int ObjectTypeClass::ReadInt(unsigned char * a2, unsigned char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *v4; // eax
  char v6; // [esp+0h] [ebp-3Ch] BYREF
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF

  if ( a4 == -1 ) /*0x474f5a*/
  {
    v6 = 0; /*0x474f6a*/
    v4 = &v6; /*0x474f6f*/
  }
  else
  {
    v4 = (char *)(*((_DWORD *)g_SuperWeaponPool + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString(this, a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read(Destination); /*0x474f93*/
}
}

// 0x5F7090
int ObjectTypeClass::ConstructFull(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]
  AbstractTypeClass::Constructor(this, aP1); /*0x5f709c*/
  _DWORD * v3 = (_DWORD *)(this + 200); /*0x5f70a3*/
  this->q098 = 0; /*0x5f70a9*/
  this->q264 = 0; /*0x5f70af*/
  this->q268 = 0; /*0x5f70b5*/
  this->Armor = 0; /*0x5f70bb*/
  this->Strength = 0; /*0x5f70c1*/
  this->Image = 0; /*0x5f70c7*/
  this->ImageAllocated = 0; /*0x5f70cd*/
  this->AlphaImage = 0; /*0x5f70d3*/
  this->MainVoxel = 0; /*0x5f70d9*/
  this->TurretVoxel = 0; /*0x5f70df*/
  this->BarrelVoxel = 0; /*0x5f70e5*/
  this->ChargerTurrets = 0; /*0x5f70eb*/
  this->q0C0 = 0; /*0x5f70f1*/
  this->q0C4 = 0; /*0x5f70f7*/
  int v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  _DWORD * v5 = (_DWORD *)(this + 344); /*0x5f710d*/
  int v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  this->q7A0 = 0; /*0x5f712e*/
  this->MaxDimension = 0; /*0x5f7134*/
  this->CrushSound = -1; /*0x5f713a*/
  this->AmbientSound = -1; /*0x5f7140*/
  this->ImageFile_0x19 = 0; /*0x5f7146*/
  this->AlternateArcticArt = 0; /*0x5f7148*/
  this->ArcticArtInUse = 0; /*0x5f714e*/
  this->AlphaImageFile = 0; /*0x5f7156*/
  this->Bombable = 1; /*0x5f715c*/
  this->Selectable = 1; /*0x5f7162*/
  this->LegalTarget = 1; /*0x5f7168*/
  this->AllowCellContent = 1; /*0x5f716e*/
  this->Theater = 0; /*0x5f7176*/
  this->Crushable = 0; /*0x5f717c*/
  this->RadarInvisible = 0; /*0x5f7182*/
  this->Insignificant = 0; /*0x5f7188*/
  this->Immune = 0; /*0x5f718e*/
  this->IsLogic = 0; /*0x5f7194*/
  this->Voxel = 0; /*0x5f719a*/
  this->NewTheater = 0; /*0x5f71a0*/
  this->HasRadialIndicator = 0; /*0x5f71a6*/
  this->IgnoresFirestorm = 0; /*0x5f71ac*/
  this->UseLineTrail = 0; /*0x5f71b2*/
  this->q23B = 0x80; /*0x5f71b8*/
  *(_BYTE *)(this + 572) = 0x80; /*0x5f71be*/
  this->q23D = 0x80; /*0x5f71c4*/
  this->LineTrailColorDecrement = 16; /*0x5f71ca*/
  this->VoxelCaches = 0; /*0x5f71d4*/
  this->q248 = 0; /*0x5f71da*/
  this->q24C = 0; /*0x5f71e0*/
  this->q094 = 0; /*0x5f71e6*/
  this->q254 = 0; /*0x5f71ec*/
  this->q258 = 0; /*0x5f71f2*/
  this->q25C = 0; /*0x5f71f8*/
  this->q260 = 0; /*0x5f71fe*/
  this->q264 = 0; /*0x5f7204*/
  this->q268 = 0; /*0x5f720a*/
  this->q26C = 0; /*0x5f7213*/
  this->q270 = 0; /*0x5f7219*/
  this->q274 = 0; /*0x5f721f*/
  this->q278 = 0; /*0x5f7225*/
  this->q27C = 0; /*0x5f722b*/
  this->q280 = 0; /*0x5f7231*/
  this->q284 = 0; /*0x5f7237*/
  this->q288 = 0; /*0x5f723d*/
  this->q28C = 0; /*0x5f7243*/
  this->q290 = 0; /*0x5f7249*/
  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f7251*/
  this->vtable1 = &ObjectTypeClass::`vftable'; /*0x5f7258*/
  this->vtable2 = &ObjectTypeClass::`vftable'; /*0x5f725f*/
  this->vtable3 = &vt_ObjectTypeClass; /*0x5f7266*/
  if ( this + 36 != this + 504 ) /*0x5f726d*/
    qmemcpy((void *)(this + 504), (const void *)(this + 36), 0x19u); /*0x5f7274*/
  if ( &DataGlobal_87F8E4 == (MouseClass *)-42624 ) /*0x5f727e*/
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  else
  {
    strncpy(Destination, &DataGlobal_87F8E4[42624], 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  if ( Destination != (char *)(this + 531) ) /*0x5f72aa*/
  {
    qmemcpy((void *)(this + 531), Destination, 0x18u); /*0x5f72b5*/
    *(_BYTE *)(this + 555) = v10; /*0x5f72b7*/
  }
  if ( (int)*(&g_MatrixTransformState + 2438) < (int)*(&g_MatrixTransformState + 2436) /*0x5f72ee*/
    || (*((_BYTE *)&(&g_MatrixTransformState)[203] + 5) || !*(&g_MatrixTransformState + 2436))
    && (int)*(&g_MatrixTransformState + 2439) > 0
    && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 2434))->Z)(
         &g_MatrixTransformState + 2434,
         (char *)*(&g_MatrixTransformState + 2436) + (_DWORD)*(&g_MatrixTransformState + 2439),
         0) )
  {
    int v7 = (int)*(&g_MatrixTransformState + 2438); /*0x5f72fb*/
    *(&g_MatrixTransformState + 2438) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2438) + 1); /*0x5f72fe*/
    *(&(*(&g_MatrixTransformState + 2435))->X + v7) = this; /*0x5f730a*/
  }
  return this; /*0x5f730f*/
}
}

// 0x5F7320
unsigned int * ObjectTypeClass::Construct(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x5f7328*/
  _DWORD * v3 = this + 50; /*0x5f732f*/
  this->Image = 0; /*0x5f7335*/
  int v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  _DWORD * v5 = this + 86; /*0x5f734b*/
  int v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *v5 = 0; /*0x5f7356*/
    v5[1] = 0; /*0x5f7358*/
    v5 += 2; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  this->VoxelCaches_4 = 0; /*0x5f7361*/
  this->q248 = 0; /*0x5f7367*/
  this->q24C = 0; /*0x5f736d*/
  this->q094 = 0; /*0x5f7373*/
  this->q254 = 0; /*0x5f7379*/
  this->q258 = 0; /*0x5f737f*/
  this->q25C = 0; /*0x5f7385*/
  this->q260 = 0; /*0x5f738b*/
  this->q264 = 0; /*0x5f7391*/
  this->q268 = 0; /*0x5f7397*/
  this->q26C = 0; /*0x5f739d*/
  this->q270 = 0; /*0x5f73a3*/
  this->q274 = 0; /*0x5f73a9*/
  this->q278 = 0; /*0x5f73af*/
  this->q27C = 0; /*0x5f73b5*/
  this->q280 = 0; /*0x5f73bb*/
  this->q284 = 0; /*0x5f73c1*/
  this->q288 = 0; /*0x5f73c7*/
  this->q28C = 0; /*0x5f73cd*/
  this->q290 = 0; /*0x5f73d3*/
  *this = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
  this->vtable2 = &ObjectTypeClass::`vftable'; /*0x5f73df*/
  this->vtable3 = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
  this->vtable4 = &vt_ObjectTypeClass; /*0x5f73ed*/
  return this; /*0x5f73f6*/
}
}

// 0x5F7400
int ObjectTypeClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectTypeClass *v8; // [esp+Ch] [ebp-4h] BYREF
  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f740b*/
  this->vtable1 = &ObjectTypeClass::`vftable'; /*0x5f7411*/
  this->vtable2 = &ObjectTypeClass::`vftable'; /*0x5f7418*/
  this->vtable3 = &vt_ObjectTypeClass; /*0x5f741f*/
  v8 = this; /*0x5f7431*/
  int v2 = (*(int (__thiscall **)(int *, int *))(DataGlobal_AC1418 + 16))(&DataGlobal_AC1418, &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < DataGlobal_AC1428 && v2 < --DataGlobal_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((_DWORD *)DataGlobal_AC141C + v2 - 1) = *((_DWORD *)DataGlobal_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < DataGlobal_AC1428 ); /*0x5f7468*/
  }
  if ( this->ImageAllocated && this->Image ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(this->Image); /*0x5f7481*/
    this->Image = 0; /*0x5f7489*/
    this->ImageAllocated = 0; /*0x5f748f*/
  }
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f7497*/
  __3_YAXPAX_Z(this->q280); /*0x5f74a3*/
  this->q280 = 0; /*0x5f74a8*/
  this->q284 = 0; /*0x5f74ae*/
  this->q288 = 0; /*0x5f74b4*/
  this->q28C = 0; /*0x5f74ba*/
  this->q290 = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(this->q26C); /*0x5f74cd*/
  this->q26C = 0; /*0x5f74d2*/
  this->q270 = 0; /*0x5f74d8*/
  this->q274 = 0; /*0x5f74de*/
  this->q278 = 0; /*0x5f74e4*/
  this->q27C = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(this->q258); /*0x5f74f7*/
  this->q258 = 0; /*0x5f74fc*/
  this->q25C = 0; /*0x5f7502*/
  this->q260 = 0; /*0x5f7508*/
  this->q264 = 0; /*0x5f750e*/
  this->q268 = 0; /*0x5f7514*/
  __3_YAXPAX_Z(this->VoxelCaches_4); /*0x5f7521*/
  this->VoxelCaches = 0; /*0x5f7526*/
  this->q248 = 0; /*0x5f752c*/
  this->q24C = 0; /*0x5f7532*/
  this->q094 = 0; /*0x5f7538*/
  this->q254 = 0; /*0x5f753e*/
  int * v3 = (int *)(this + 488); /*0x5f7547*/
  int v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 -= 2; /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  int * v5 = (int *)(this + 344); /*0x5f755f*/
  int v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 -= 2; /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 192)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 184)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString((int *)(this + 176)); /*0x5f7593*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x5f759f*/
}
}

// 0x5F77F0
void ObjectTypeClass::UnloadPipsSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( DataGlobal_AC1488 ) /*0x5f77fd*/
  {
    if ( FileSystem_PIPBRD_SHP ) /*0x5f7807*/
    {
      int v0 = *(_DWORD *)(FileSystem_PIPBRD_SHP - 4); /*0x5f7809*/
      void * v1 = (void *)(FileSystem_PIPBRD_SHP - 4); /*0x5f780c*/
      int v2 = 9 * v0; /*0x5f780f*/
      int v3 = v0 - 1; /*0x5f7812*/
      char * v4 = (char *)(FileSystem_PIPBRD_SHP + 4 * v2); /*0x5f7813*/
      if ( v3 >= 0 ) /*0x5f7816*/
      {
        int v5 = v3 + 1; /*0x5f7818*/
        do /*0x5f7826*/
        {
          v4 -= 36; /*0x5f781b*/
          FileTreeNode::Destroy(v4); /*0x5f7820*/
          --v5; /*0x5f7825*/
        }
        while ( v5 ); /*0x5f7826*/
      }
      __3_YAXPAX_Z(v1); /*0x5f7829*/
    }
    DataGlobal_AC1488 = 0; /*0x5f7831*/
  }
  if ( DataGlobal_AC1489 ) /*0x5f783d*/
  {
    if ( FileSystem_PIPS_SHP ) /*0x5f7847*/
    {
      int v6 = *(_DWORD *)(FileSystem_PIPS_SHP - 4); /*0x5f7849*/
      void * v7 = (void *)(FileSystem_PIPS_SHP - 4); /*0x5f784c*/
      int v8 = 9 * v6; /*0x5f784f*/
      int v9 = v6 - 1; /*0x5f7852*/
      char * v10 = (char *)(FileSystem_PIPS_SHP + 4 * v8); /*0x5f7853*/
      if ( v9 >= 0 ) /*0x5f7856*/
      {
        int v11 = v9 + 1; /*0x5f7858*/
        do /*0x5f7866*/
        {
          v10 -= 36; /*0x5f785b*/
          FileTreeNode::Destroy(v10); /*0x5f7860*/
          --v11; /*0x5f7865*/
        }
        while ( v11 ); /*0x5f7866*/
      }
      __3_YAXPAX_Z(v7); /*0x5f7869*/
    }
    DataGlobal_AC1489 = 0; /*0x5f7871*/
  }
  if ( DataGlobal_AC148A ) /*0x5f787d*/
  {
    if ( FileSystem_PIPS2_SHP ) /*0x5f7887*/
    {
      int v12 = *(_DWORD *)(FileSystem_PIPS2_SHP - 4); /*0x5f7889*/
      void * v13 = (void *)(FileSystem_PIPS2_SHP - 4); /*0x5f788c*/
      int v14 = 9 * v12; /*0x5f788f*/
      int v15 = v12 - 1; /*0x5f7892*/
      char * v16 = (char *)(FileSystem_PIPS2_SHP + 4 * v14); /*0x5f7893*/
      if ( v15 >= 0 ) /*0x5f7896*/
      {
        int v17 = v15 + 1; /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v16 -= 36; /*0x5f789b*/
          FileTreeNode::Destroy(v16); /*0x5f78a0*/
          --v17; /*0x5f78a5*/
        }
        while ( v17 ); /*0x5f78a6*/
      }
      __3_YAXPAX_Z(v13); /*0x5f78a9*/
    }
    DataGlobal_AC148A = 0; /*0x5f78b1*/
  }
  if ( DataGlobal_AC148B ) /*0x5f78bd*/
  {
    if ( FileSystem_TALKBUBL_SHP ) /*0x5f78c7*/
    {
      int v18 = *(_DWORD *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78c9*/
      void * v19 = (void *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78cc*/
      int v20 = 9 * v18; /*0x5f78cf*/
      int v21 = v18 - 1; /*0x5f78d2*/
      char * v22 = (char *)(FileSystem_TALKBUBL_SHP + 4 * v20); /*0x5f78d3*/
      if ( v21 >= 0 ) /*0x5f78d6*/
      {
        int v23 = v21 + 1; /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v22 -= 36; /*0x5f78db*/
          FileTreeNode::Destroy(v22); /*0x5f78e0*/
          --v23; /*0x5f78e5*/
        }
        while ( v23 ); /*0x5f78e6*/
      }
      __3_YAXPAX_Z(v19); /*0x5f78e9*/
    }
    DataGlobal_AC148B = 0; /*0x5f78f1*/
  }
}
}

// 0x5F9070
int ObjectTypeClass::Load2DArt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char v8; // dl
  int v9; // eax
  int result; // eax
  __int16 v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( this->q211 && *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 && !this->ImageAllocated ) /*0x5f9096*/
  {
    if ( !this->q212 ) /*0x5f90a0*/
    {
      char * v2 = this + 504; /*0x5f90ab*/
      sprintf(Buffer, DataGlobal_832AE8, this + 504); /*0x5f90bf*/
      if ( Buffer ) /*0x5f90d0*/
      {
        strncpy(Destination, Buffer, 0x18u); /*0x5f90e7*/
        v13 = 0; /*0x5f90ef*/
      }
      else
      {
        Destination[0] = 0; /*0x5f90d2*/
      }
      if ( Destination != v2 ) /*0x5f90fa*/
      {
        qmemcpy(v2, Destination, 0x18u); /*0x5f9105*/
        this->q210 = v13; /*0x5f9107*/
      }
      this->q212 = 1; /*0x5f9108*/
    }
  }
  else
  {
    this->q212 = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, this + 504, Ext); /*0x5f912e*/
  if ( this->q22C ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)g_ScenarioClass_Instance + 1174)); /*0x5f9169*/
  }
  else if ( this->q237 ) /*0x5f9173*/
  {
    int v3 = *((_DWORD *)g_ScenarioClass_Instance + 1174); /*0x5f9183*/
    if ( v3 != -1 ) /*0x5f918c*/
    {
      char v4 = Source; /*0x5f918e*/
      char v5 = v15; /*0x5f9198*/
      if ( Source >= 65 && Source <= 90 ) /*0x5f919e*/
        v4 = Source + 32; /*0x5f91a0*/
      if ( v15 >= 65 && v15 <= 90 ) /*0x5f91aa*/
        v5 = v15 + 32; /*0x5f91af*/
      if ( (v4 == 103 || v4 == 110 || v4 == 99 || v4 == 121) && (v5 == 97 || v5 == 116) ) /*0x5f91c9*/
        v15 = byte_7E1BCE[112 * v3]; /*0x5f91dd*/
    }
  }
  if ( this->ImageAllocated && this->Image ) /*0x5f91eb*/
    __3_YAXPAX_Z(this->Image); /*0x5f91f6*/
  int v6 = *(_DWORD *)this; /*0x5f91fe*/
  this->Image = 0; /*0x5f9203*/
  this->ImageAllocated = 0; /*0x5f920d*/
  if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->Image = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 30 /*0x5f9241*/
    && (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 37 )
  {
    int v7 = SearchMIXFile(&Source, 0); /*0x5f9249*/
    this->Image = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
LABEL_40:
      this->Image = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
LABEL_41:
  result = this->Image; /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = *(_WORD *)(result + 2); /*0x5f9296*/
    LOWORD(result) = *(_WORD *)(result + 4); /*0x5f929a*/
    if ( v11 <= (__int16)result ) /*0x5f92a1*/
      result = (__int16)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    this->MaxDimension = result; /*0x5f92b5*/
  }
  return result; /*0x5f92bb*/
}
}

// 0x5F92D0
int ObjectTypeClass::LoadFromINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int Index; // eax
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int Coord; // eax
  CCINIClass *v29; // [esp-Ch] [ebp-1B8h]
  CCINIClass *v32; // [esp-Ch] [ebp-1B8h]
  CCINIClass v34; // [esp+8h] [ebp-1A4h] BYREF
  char Buffer[260]; // [esp+A8h] [ebp-104h] BYREF

  INIClass::ResetSection(aP1); /*0x5f92e3*/
  if ( !AbstractTypeClass::LoadFromINI((int)this, (AbstractTypeClass *)aP1) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy((char *)v34.headNode, this + 504); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&g_INI_Key_Image,
    (INIClass *)v34.headNode,
    (INIClass *)(this + 504),
    25);
  *(_DWORD *)v34[0] = strcpy((char *)v34.headNode, this + 531); /*0x5f9366*/
  INIClass::GetString( /*0x5f9386*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620[9696],
    (INIClass *)v34.headNode,
    (INIClass *)(this + 531),
    25);
  int v3 = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (unsigned __int8 ***)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[9684],
         (INIClass *)&DataGlobal_87F8E4[42624],
         (INIClass *)v34[32],
         128) )
  {
    Index = VocClass::FindIndex(v34[32]); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      v3 = Index; /*0x5f93bf*/
  }
  this->CrushSound = v3; /*0x5f93d5*/
  int v5 = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (unsigned __int8 ***)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[9668],
          (INIClass *)&DataGlobal_87F8E4[42624],
          (INIClass *)v34[32],
          128)
  int v6; // eax
    || (v6 = VocClass::FindIndex(v34[32]), v6 == -1) )
  {
    v6 = v5; /*0x5f93fb*/
  }
  bool v7 = this->q22D; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5f9412*/
                     (int)aP1,
                     (unsigned __int8 *)this + 36,
                     (CCINIClass *)&stru_830620[9656],
                     v7);
  bool v27 = this->q22E; /*0x5f941f*/
  this->q22D = Bool_Overwrite; /*0x5f9426*/
  this->q22E = INIClass::ReadBool_Overwrite( /*0x5f9431*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620[9644],
                    v27);
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x5f9446*/
         (int)aP1,
         (unsigned __int8 *)this + 36,
         (CCINIClass *)&stru_830620[9632],
         this->q7A0);
  bool v10 = this->q211; /*0x5f944b*/
  this->q7A0 = v9; /*0x5f9451*/
  char v11; // al
  v11 = INIClass::ReadBool_Overwrite( /*0x5f9460*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620[9612],
          v10);
  bool v28 = this->q22F; /*0x5f946d*/
  this->q211 = v11; /*0x5f9474*/
  this->q22F = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620[9596],
                    v28);
  char v12; // al
  v12 = INIClass::ReadBool_Overwrite( /*0x5f9494*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620[9584],
          this->q230);
  bool v13 = this->q231; /*0x5f9499*/
  this->q230 = v12; /*0x5f949f*/
  char v14; // al
  v14 = INIClass::ReadBool_Overwrite( /*0x5f94ae*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620[9572],
          v13);
  v29 = (CCINIClass *)this->Armor; /*0x5f94bb*/
  this->q231 = v14; /*0x5f94c2*/
  this->Armor = ArmorType::FindIndex( /*0x5f94cd*/
                             (unsigned __int8 ***)aP1,
                             (CCINIClass *)(this + 36),
                             (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
                             (int)v29);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5f94e2*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620[9560],
                    this->Strength);
  bool v16 = this->q233; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  char v17; // al
  v17 = INIClass::ReadBool_Overwrite( /*0x5f94fc*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620[9552],
          v16);
  bool v30 = this->q232; /*0x5f9509*/
  this->q233 = v17; /*0x5f9510*/
  this->q232 = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620[9536],
                    v30);
  this->q238 = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620[9516],
                    this->q238);
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (unsigned __int8 ***)aP1,
            &v34,
            (INIClass *)(this + 36),
            (Color *)&stru_830620[9504],
            (Color *)this + 38);
  bool v19 = this->q239; /*0x5f9557*/
  this->q04C = *(_WORD *)Coord; /*0x5f955d*/
  this->q268 = *(_BYTE *)(Coord + 2); /*0x5f956c*/
  char v20; // al
  v20 = INIClass::ReadBool_Overwrite( /*0x5f956f*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620[9484],
          v19);
  bool v31 = this->q23A; /*0x5f9580*/
  this->q239 = v20; /*0x5f958c*/
  this->q23A = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                    (int)&DataGlobal_87F8E4[30876],
                    (unsigned __int8 *)this + 504,
                    (CCINIClass *)&stru_830620[9468],
                    v31);
  int v21; // eax
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (unsigned __int8 ***)&DataGlobal_87F8E4[30876],
          &v34,
          (INIClass *)(this + 504),
          (Color *)&stru_830620[9452],
          (Color *)(this + 571));
  this->q23B = *(_WORD *)v21; /*0x5f95bc*/
  v32 = (CCINIClass *)this->LineTrailColorDecrement; /*0x5f95cd*/
  this->q23D = *(_BYTE *)(v21 + 2); /*0x5f95d4*/
  int v22; // eax
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (int)&DataGlobal_87F8E4[30876],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620[9428],
          (INIClass *)v32);
  bool v23 = this->q22C; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  char v24; // al
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int)&DataGlobal_87F8E4[30876],
          (unsigned __int8 *)this + 504,
          &unk_818658,
          v23);
  bool v33 = this->q237; /*0x5f9604*/
  this->q22C = v24; /*0x5f960b*/
  this->q237 = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                    (int)&DataGlobal_87F8E4[30876],
                    (unsigned __int8 *)this + 504,
                    &unk_81864C,
                    v33);
  char v25; // al
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int)&DataGlobal_87F8E4[30876],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620[9420],
          this->q236);
  this->q236 = v25; /*0x5f9634*/
  if ( !v25 && (*(int (__thiscall **)(char *))(this->ChargerBarrels_0x12)(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt(this); /*0x5f964d*/
  if ( this->AlphaImageFile ) /*0x5f9652*/
  {
    _makepath(Buffer, 0, 0, this + 531, Ext); /*0x5f9674*/
    this->AlphaImage = SearchMIXFile(Buffer, 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/
}
}

// 0x5F9710
void ObjectTypeClass::SetRTTI71()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  this->vtable2 = 71; /*0x5f9710*/
}
}

// 0x5F9720
int ObjectTypeClass::LoadCleanup(IUnknown * aP0, ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **v3; // ebp
  void **v5; // ebp
  void **v7; // ebp
  int result; // eax
  IUnknown *v11; // edx
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  __3_YAXPAX_Z(*(void **)&aP0->__pad_220[36]); /*0x5f973e*/
  *(_DWORD *)&aP0->__pad_220[36] = 0; /*0x5f974e*/
  *(_DWORD *)&aP0->__pad_220[40] = 0; /*0x5f9750*/
  *(_DWORD *)&aP0->__pad_220[44] = 0; /*0x5f9753*/
  aP0->__pad_220[48] = 0; /*0x5f9756*/
  *(_DWORD *)&aP0->__pad_220[52] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[56]); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[76]); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer((int)&aP0->__pad_220[96]); /*0x5f9772*/
  void * v2 = *(void **)&aP0->__pad_A8[8]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy(*(_DWORD *)&aP0->__pad_A8[8]); /*0x5f9783*/
    __3_YAXPAX_Z(v2); /*0x5f9789*/
  }
  v3 = *(void ***)&aP0->__pad_A8[12]; /*0x5f9791*/
  *(_DWORD *)&aP0->__pad_A8[8] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    String::Release(v3); /*0x5f97a3*/
    __3_YAXPAX_Z(v3); /*0x5f97a9*/
  }
  void * v4 = *(void **)&aP0->__pad_A8[16]; /*0x5f97b1*/
  *(_DWORD *)&aP0->__pad_A8[12] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy((int)v4); /*0x5f97c3*/
    __3_YAXPAX_Z(v4); /*0x5f97c9*/
  }
  v5 = *(void ***)&aP0->__pad_A8[20]; /*0x5f97d1*/
  *(_DWORD *)&aP0->__pad_A8[16] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    String::Release(v5); /*0x5f97e3*/
    __3_YAXPAX_Z(v5); /*0x5f97e9*/
  }
  void * v6 = *(void **)&aP0->__pad_A8[24]; /*0x5f97f1*/
  *(_DWORD *)&aP0->__pad_A8[20] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy((int)v6); /*0x5f9803*/
    __3_YAXPAX_Z(v6); /*0x5f9809*/
  }
  v7 = *(void ***)&aP0->__pad_A8[28]; /*0x5f9811*/
  *(_DWORD *)&aP0->__pad_A8[24] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    String::Release(v7); /*0x5f9823*/
    __3_YAXPAX_Z(v7); /*0x5f9829*/
  }
  *(_DWORD *)&aP0->__pad_A8[28] = 0; /*0x5f9833*/
  ObjectTypeClass::CleanupWeapons((char *)aP0); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP0, (AbstractClass *)aP1); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    aP0->field_A4 = 0; /*0x5f9856*/
    aP0->__pad_A8[0] = 0; /*0x5f985c*/
    *(_DWORD *)&aP0->__pad_A8[4] = 0; /*0x5f9862*/
    if ( aP0 != (IUnknown *)-580 ) /*0x5f9868*/
    {
      *(_DWORD *)&aP0->__pad_220[36] = 0; /*0x5f986a*/
      *(_DWORD *)&aP0->__pad_220[40] = 0; /*0x5f986c*/
      *(_DWORD *)&aP0->__pad_220[44] = 0; /*0x5f986f*/
      aP0->__pad_220[48] = 0; /*0x5f9872*/
      *(_DWORD *)&aP0->__pad_220[52] = 0; /*0x5f9875*/
    }
    if ( aP0 != (IUnknown *)-600 ) /*0x5f9880*/
    {
      *(_DWORD *)&aP0->__pad_220[56] = 0; /*0x5f9882*/
      *(_DWORD *)&aP0->__pad_220[60] = 0; /*0x5f9884*/
      *(_DWORD *)&aP0->__pad_220[64] = 0; /*0x5f9887*/
      aP0->__pad_220[68] = 0; /*0x5f988a*/
      *(_DWORD *)&aP0->__pad_220[72] = 0; /*0x5f988d*/
    }
    if ( aP0 != (IUnknown *)-620 ) /*0x5f9898*/
    {
      *(_DWORD *)&aP0->__pad_220[76] = 0; /*0x5f989a*/
      *(_DWORD *)&aP0->__pad_220[80] = 0; /*0x5f989c*/
      *(_DWORD *)&aP0->__pad_220[84] = 0; /*0x5f989f*/
      aP0->__pad_220[88] = 0; /*0x5f98a2*/
      *(_DWORD *)&aP0->__pad_220[92] = 0; /*0x5f98a5*/
    }
    if ( aP0 != (IUnknown *)-640 ) /*0x5f98b0*/
    {
      *(_DWORD *)&aP0->__pad_220[96] = 0; /*0x5f98b2*/
      *(_DWORD *)&aP0->__pad_220[100] = 0; /*0x5f98b4*/
      *(_DWORD *)&aP0->__pad_220[104] = 0; /*0x5f98b7*/
      aP0->__pad_220[108] = 0; /*0x5f98ba*/
      *(_DWORD *)&aP0->__pad_220[112] = 0; /*0x5f98bd*/
    }
    *(_DWORD *)&aP0->__pad_A8[8] = 0; /*0x5f98c0*/
    *(_DWORD *)&aP0->__pad_A8[12] = 0; /*0x5f98c6*/
    *(_DWORD *)&aP0->__pad_A8[16] = 0; /*0x5f98cc*/
    *(_DWORD *)&aP0->__pad_A8[20] = 0; /*0x5f98d2*/
    *(_DWORD *)&aP0->__pad_A8[24] = 0; /*0x5f98d8*/
    *(_DWORD *)&aP0->__pad_A8[28] = 0; /*0x5f98de*/
    char * v9 = &aP0->__pad_A8[36]; /*0x5f98e4*/
    int v10 = 18; /*0x5f98ea*/
    do /*0x5f9904*/
    {
      *((_DWORD *)v9 - 1) = 0; /*0x5f98ef*/
      *(_DWORD *)v9 = 0; /*0x5f98f2*/
      *((_DWORD *)v9 + 35) = 0; /*0x5f98f4*/
      *((_DWORD *)v9 + 36) = 0; /*0x5f98fa*/
      v9 += 8; /*0x5f9900*/
      --v10; /*0x5f9903*/
    }
    while ( v10 ); /*0x5f9904*/
    if ( aP0->__pad_1D8[59] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0, (ObjectClass *)&aP0->__pad_1D8[59], Ext); /*0x5f9923*/
      LOBYTE(v11) = 0; /*0x5f992b*/
      *(_DWORD *)&aP0->__pad_A8[4] = SearchMIXFile(Buffer, v11); /*0x5f9936*/
    }
    return 0; /*0x5f993c*/
  }
  return result; /*0x5f993e*/
}
}

// 0x712040
int ObjectTypeClass::SelectArtOrAlt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  #375 *v1; // eax
  int result; // eax

  v1 = HouseClass_Player; /*0x712040*/
  if ( !HouseClass_Player ) /*0x71204a*/
    return *(this + 444); /*0x7120bf*/
  if ( *((_BYTE *)HouseClass_Player + 703) ) /*0x71204c*/
  {
    if ( this->getAltitude() == 16 ) /*0x712060*/
    {
      result = this->q710; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( *((_BYTE *)this + 3214) ) /*0x71206c*/
          return result; /*0x712074*/
      }
    }
    v1 = HouseClass_Player; /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !*((_BYTE *)v1 + 704)
    || this->getAltitude() != 40
    && (this->getAltitude() != 7 || !*(this + 258)) )
  {
    return *(this + 444); /*0x7120a1*/
  }
  result = this->q710; /*0x7120ab*/
  if ( !result || !*((_BYTE *)this + 3214) ) /*0x7120b5*/
    return *(this + 444); /*0x7120bd*/
  return result; /*0x7120c5*/
}
}

// 0x712170
int ObjectTypeClass::LoadExtras(CCINIClass * aP0, double _38C, unsigned char *** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  WeaponTypeClass *v5; // edi
  WeaponTypeClass *v6; // eax
  char Bool_Overwrite; // al
  double Double_Overwrite; // st7
  INIClass *v10; // ecx
  _DWORD *GUID_Overwrite; // eax
  INIClass *v12; // edx
  INIClass *v13; // edx
  INIClass *v14; // ecx
  INIClass *v15; // eax
  INIClass *v16; // edx
  INIClass *v17; // ecx
  INIClass *v18; // eax
  int Int_Overwrite; // eax
  CCINIClass *v11; // eax
  ObjectClass *i; // eax
  INIClass *inited; // eax
  AbstractClass *j; // eax
  int edx29; // edx
  char al29; // al
  CCINIClass *v21; // edi
  WeaponTypeClass *eax33; // eax
  WeaponTypeClass *v32; // eax
  CCINIClass *v24; // ecx
  WeaponTypeClass *v34; // edi
  WeaponTypeClass *eax42; // eax
  CCINIClass *v27; // edi
  void *eax45; // eax
  CCINIClass *v29; // edi
  void *eax48; // eax
  CCINIClass *v31; // edi
  void *eax51; // eax
  INIClass *v33; // eax
  int eax56; // eax
  INIClass *v35; // eax
  int eax56a; // eax
  INIClass *v37; // eax
  int eax56b; // eax
  INIClass *v39; // eax
  int eax56c; // eax
  INIClass *v41; // eax
  INIClass *v43; // eax
  INIClass *v45; // eax
  INIClass *v47; // eax
  CCINIClass *v49; // edi
  CCINIClass *Index; // eax
  int TypeMember_54749E0; // eax
  char *k; // eax
  BuildingTypeClass *v88; // edi
  BuildingTypeClass *v89; // eax
  UnitTypeClass *v90; // edi
  UnitTypeClass *Alt; // eax
  UnitTypeClass *v92; // edi
  UnitTypeClass *eax110; // eax
  char al112a; // al
  char al112b; // al
  CCINIClass *v93; // edi
  CCINIClass *v103; // eax
  INIClass *v95; // eax
  INIClass *v97; // eax
  AbstractClass *m; // eax
  AbstractClass *n; // eax
  ParticleSystemTypeClass *v154; // edi
  ParticleSystemTypeClass *v155; // eax
  ParticleSystemTypeClass *v156; // edi
  ParticleSystemTypeClass *v157; // eax
  int *Coord2; // eax
  ObjectClass *ii; // eax
  ObjectClass *jj; // eax
  int *eax231; // eax
  int edx231; // edx
  int *eax231a; // eax
  int *eax231b; // eax
  int *eax231e; // eax
  INIClass **v178; // edi
  CCINIClass *v170; // ecx
  INIClass *v171; // eax
  CCINIClass *v173; // eax
  INIClass *v174; // eax
  CCINIClass *v177; // edi
  CCINIClass *v186; // eax
  int eax246; // eax
  UnitTypeClass *edi252; // edi
  UnitTypeClass *v191; // eax
  AnimTypeClass *edi255; // edi
  AnimTypeClass *eax256; // eax
  int eax258; // eax
  int ecx258; // ecx
  INIClass *v188; // eax
  int edx258; // edx
  INIClass *v190; // eax
  int eax258a; // eax
  INIClass *v192; // eax
  INIClass *v193; // eax
  INIClass *v194; // eax
  INIClass *v195; // eax
  INIClass *v196; // eax
  INIClass *v197; // eax
  int ecx258a; // ecx
  INIClass *v199; // eax
  int edx258b; // edx
  INIClass *v201; // eax
  int eax258b; // eax
  INIClass *v203; // eax
  int ecx258b; // ecx
  INIClass *v205; // eax
  int edx258c; // edx
  INIClass *v207; // eax
  int eax258c; // eax
  INIClass *v209; // eax
  int ecx258c; // ecx
  INIClass *v211; // eax
  int edx258d; // edx
  INIClass *v213; // eax
  int eax258d; // eax
  INIClass *v215; // eax
  int ecx258d; // ecx
  INIClass *v217; // eax
  int edx258e; // edx
  INIClass *v219; // eax
  int eax258e; // eax
  INIClass *v221; // eax
  int ecx258e; // ecx
  INIClass *v223; // eax
  int edx258f; // edx
  INIClass *v225; // eax
  INIClass *v227; // eax
  int ecx258f; // ecx
  INIClass *v229; // eax
  INIClass *v230; // eax
  INIClass *v231; // eax
  INIClass *v232; // eax
  INIClass *v233; // eax
  INIClass *v234; // eax
  int ecx258g; // ecx
  INIClass *v236; // eax
  INIClass *v237; // eax
  INIClass *v238; // eax
  INIClass *v239; // eax
  INIClass *v240; // eax
  int eax258g; // eax
  INIClass *v242; // eax
  int ecx258h; // ecx
  INIClass *v244; // eax
  int edx258g; // edx
  INIClass *v246; // eax
  int eax258h; // eax
  INIClass *v248; // eax
  int ecx258i; // ecx
  INIClass *v250; // eax
  int edx258h; // edx
  INIClass *v252; // eax
  INIClass *v254; // eax
  int ecx258j; // ecx
  INIClass *v256; // eax
  int edx258i; // edx
  INIClass *v258; // eax
  int eax258j; // eax
  INIClass *v260; // eax
  INIClass *v261; // eax
  INIClass *v263; // eax
  INIClass *v264; // eax
  INIClass *v265; // eax
  INIClass *v266; // eax
  INIClass *v267; // eax
  INIClass *v268; // eax
  INIClass *v269; // eax
  INIClass *v270; // eax
  INIClass *v272; // eax
  INIClass *v273; // eax
  int edx258k; // edx
  INIClass *v275; // eax
  INIClass *v277; // eax
  INIClass *v279; // eax
  INIClass *v281; // eax
  INIClass *v283; // eax
  INIClass *v284; // eax
  int eax258n; // eax
  INIClass *v286; // eax
  int eax258o; // eax
  INIClass *v288; // eax
  int eax258p; // eax
  INIClass *v290; // eax
  INIClass *v292; // eax
  INIClass *v294; // eax
  int eax258s; // eax
  INIClass *v296; // eax
  int eax258t; // eax
  INIClass *v298; // eax
  int ecx258l; // ecx
  INIClass *v301; // eax
  int edx258m; // edx
  INIClass *v303; // eax
  INIClass *v304; // eax
  INIClass *v305; // eax
  INIClass *v306; // eax
  INIClass *v307; // eax
  INIClass *v309; // eax
  CCINIClass *Abilities; // eax
  INIClass *v311; // eax
  CCINIClass *v321; // eax
  int eax260; // eax
  INIClass *v314; // eax
  INIClass *v316; // eax
  INIClass *v318; // eax
  CCINIClass *v319; // eax
  INIClass *v320; // eax
  int ecx272; // ecx
  INIClass *v322; // eax
  int edx273; // edx
  INIClass *v323; // eax
  int eax273; // eax
  INIClass *v325; // eax
  int ecx273; // ecx
  INIClass *v327; // eax
  ObjectClass *v328; // eax
  INIClass *v329; // eax
  IUnknown *v340; // edx
  INIClass *v330; // eax
  INIClass *v331; // eax
  INIClass *v332; // eax
  INIClass *v334; // eax
  INIClass *v336; // eax
  int eax283; // eax
  INIClass *v338; // eax
  INIClass *v339; // eax
  int edx283b; // edx
  INIClass *v341; // eax
  INIClass *v343; // eax
  char al283; // al
  INIClass *v345; // eax
  IUnknown *edx283; // edx
  INIClass *v347; // eax
  IUnknown *v360; // edx
  INIClass *v348; // eax
  char *edx289a; // edx
  INIClass *v350; // eax
  IUnknown *edx289; // edx
  WeaponTypeClass *v351; // edi
  INIClass *v352; // eax
  int *Point3D_Overwrite; // eax
  INIClass *v354; // eax
  INIClass *v355; // eax
  int edx294; // edx
  INIClass *v357; // eax
  char al294; // al
  INIClass *v359; // eax
  INIClass *v361; // eax
  INIClass *v362; // eax
  int edx294a; // edx
  INIClass *v364; // eax
  CCINIClass *v365; // ecx
  INIClass *v366; // eax
  int *eax296; // eax
  INIClass *v368; // eax
  INIClass *v369; // eax
  INIClass *v370; // eax
  INIClass *v372; // eax
  INIClass *v373; // eax
  int eax296b; // eax
  INIClass *v375; // eax
  int *eax296c; // eax
  INIClass *v377; // eax
  INIClass *v378; // eax
  INIClass *v379; // eax
  INIClass *v381; // eax
  INIClass *v382; // eax
  INIClass *v392; // esi
  INIClass *v384; // eax
  int v401; // ecx
  INIClass *v388; // eax
  char v403; // al
  INIClass *v390; // eax
  int *v405; // eax
  INIClass *eax299c; // eax
  int TypeMember_5474E40; // eax
  _BYTE *v408; // ecx
  int Info; // eax
  int v410; // ecx
  VectorClass v412; // [esp-14h] [ebp-398h] BYREF
  _BYTE aP3[12]; // [esp-4h] [ebp-388h]
  INIClass *v414; // [esp+8h] [ebp-37Ch]
  int v415; // [esp+Ch] [ebp-378h]
  CCINIClass aP2; // [esp+18h] [ebp-36Ch] BYREF
  INIClass String[2]; // [esp+E4h] [ebp-2A0h] BYREF
  INIClass aP4; // [esp+164h] [ebp-220h] BYREF

  int v3 = v3;
  INIClass::ResetSection(aP0);
  int v4; // ebp
  if ( !ObjectTypeClass::LoadFromINI((char *)v4, aP0) )
    return 0;
  *(_DWORD *)(v4 + 1540) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81664],
                             *(INIClass **)(v4 + 1540));
  *(_DWORD *)(v4 + 1536) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81648],
                             *(INIClass **)(v4 + 1536));
  *(_DWORD *)(v4 + 1660) = ObjectTypeClass::loadTypeMember_476FC0(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620[81636],
                             *(CCINIClass **)(v4 + 1660));
  *(_BYTE *)(v4 + 1828) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81624],
                            *(_BYTE *)(v4 + 1828));
  *(_BYTE *)(v4 + 3212) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81612],
                            *(_BYTE *)(v4 + 3212));
  *(_DWORD *)(v4 + 660) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81600],
                            *(INIClass **)(v4 + 660));
  *(_DWORD *)(v4 + 664) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81588],
                            *(INIClass **)(v4 + 664));
  *(_BYTE *)(v4 + 3213) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81572],
                            *(_BYTE *)(v4 + 3213));
  *(_BYTE *)(v4 + 3220) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81564],
                            *(_BYTE *)(v4 + 3220));
  *(_BYTE *)(v4 + 3225) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81552],
                            *(_BYTE *)(v4 + 3225));
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1464);
  *(_DWORD *)&aP3[4] = &stru_830620[81540];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1464) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(_BYTE *)(v4 + 3349) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[12092],
                            *(_BYTE *)(v4 + 3349));
  v5 = *(WeaponTypeClass **)(v4 + 3352);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[43772],
         (INIClass *)&stru_87C374[56304],
         String,
         128) )
  {
    v6 = InfantryTypeClass::Find((ObjectClass *)String);
  }
  else
  {
    v6 = v5;
  }
  *(_DWORD *)(v4 + 3352) = v6;
  *(double *)&aP3[4] = *(float *)(v4 + 3356);
  *(float *)(v4 + 3356) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81512],
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)(v4 + 1560) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[49716],
                             *(INIClass **)(v4 + 1560));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP0,
                     (unsigned __int8 *)(v4 + 36),
                     (CCINIClass *)&stru_830620[81500],
                     *(_BYTE *)(v4 + 3221));
  *(_DWORD *)&aP3[8] = -1074790400;
  *(_DWORD *)&aP3[4] = 0;
  *(_DWORD *)aP3 = &stru_830620[81488];
  *(_DWORD *)&v412.IsInitialized = v4 + 36;
  *(_BYTE *)(v4 + 3221) = Bool_Overwrite;
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP0,
                       *(INIClass **)&v412.IsInitialized,
                       *(unsigned __int8 **)aP3,
                       *(INIClass **)&aP3[4]);
  if ( Double_Overwrite != -1.0 )
    *(double *)(v4 + 944) = Double_Overwrite * 0.0174532925199433;
  *(_DWORD *)&aP3[8] = -1074790400;
  double v9; // st7
  v9 = INIClass::ReadDouble_Overwrite(
         (int)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[81476],
         0);
  if ( v9 != -1.0 )
    *(double *)(v4 + 928) = v9 * 0.0174532925199433;
  v10 = *(INIClass **)(v4 + 936);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 940);
  *(double *)(v4 + 936) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81464],
                            v10);
  GUID_Overwrite = (_DWORD *)INIClass::ReadGUID_Overwrite(
                               (int)aP0,
                               (int)aP2.sectionHead,
                               (INIClass *)(v4 + 36),
                               (unsigned __int8 *)&stru_830620[81452],
                               *(_DWORD *)(v4 + 844),
                               *(_DWORD *)(v4 + 848),
                               *(_DWORD *)(v4 + 852),
                               *(_DWORD *)(v4 + 856));
  *(_DWORD *)(v4 + 844) = *GUID_Overwrite;
  *(_DWORD *)(v4 + 848) = GUID_Overwrite[1];
  *(_DWORD *)(v4 + 852) = GUID_Overwrite[2];
  *(_DWORD *)(v4 + 856) = GUID_Overwrite[3];
  *(_DWORD *)(v4 + 784) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81436],
                            *(INIClass **)(v4 + 784));
  v12 = *(INIClass **)(v4 + 752);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 756);
  *(double *)(v4 + 752) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81408],
                            v12);
  *(_DWORD *)(v4 + 760) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81388],
                            *(INIClass **)(v4 + 760));
  v13 = *(INIClass **)(v4 + 768);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 772);
  *(double *)(v4 + 768) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81364],
                            v13);
  v14 = *(INIClass **)(v4 + 776);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 780);
  *(double *)(v4 + 776) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81344],
                            v14);
  v15 = *(INIClass **)(v4 + 880);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 884);
  *(double *)(v4 + 880) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81336],
                            v15);
  v16 = *(INIClass **)(v4 + 888);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 892);
  *(double *)(v4 + 888) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81320],
                            v16);
  v17 = *(INIClass **)(v4 + 896);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 900);
  *(double *)(v4 + 896) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)g_INI_Key_Size,
                            v17);
  v18 = *(INIClass **)(v4 + 904);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 908);
  *(double *)(v4 + 904) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81308],
                            v18);
  *(_BYTE *)(v4 + 912) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (unsigned __int8 *)(v4 + 36),
                           (CCINIClass *)&stru_830620[81296],
                           *(_BYTE *)(v4 + 912));
  *(_DWORD *)(v4 + 916) = ObjectTypeClass::loadTypeMember_5477590(
                            (unsigned __int8 ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[81288],
                            *(CCINIClass **)(v4 + 916));
  *(_DWORD *)(v4 + 1468) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81276],
                             *(INIClass **)(v4 + 1468));
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP0,
                    (unsigned __int8 *)(v4 + 36),
                    (CCINIClass *)&stru_830620[81264],
                    *(INIClass **)(v4 + 1472));
  *(_DWORD *)(v4 + 1472) = Int_Overwrite;
  if ( Int_Overwrite < 0 )
    *(_DWORD *)(v4 + 1472) = 0;
  v11 = *(CCINIClass **)(v4 + 1472);
  if ( *(_DWORD *)(v4 + 1468) < (int)v11 )
    *(_DWORD *)(v4 + 1468) = v11;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[81252],
         (INIClass *)&stru_87C374[56304],
         String,
         128) )
  {
    DynamicVector::Constructor_VoxelAnim(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_VoxelAnimTypeClass_const;
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
          i;
          i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !i->__pad_0[0] )
        break;
      aP2.headNode[2] = (int)UnitTypeClass::FindOrCreate(i);
      if ( aP2.headNode[2] )
        DynamicVector::Add2(&aP2.unknown30, (VectorClass *)&aP2.headNode[2]);
    }
    TypeList::CopyVoxelAnim(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
    Vector::Cleanup2((int)&aP2.unknown30);
  }
  else
  {
    TypeList::CopyVoxelAnim(aP2.sectionHead, (VectorClass *)(v4 + 788));
  }
  VectorClass::CopyAssign((_DWORD *)(v4 + 788), (VectorClass *)aP2.sectionHead);
  int v22 = *(_DWORD *)aP2[32];
  int v23 = *(_DWORD *)&aP2[36];
  *(_DWORD *)(v4 + 812) = *(_DWORD *)&aP2[40];
  *(_DWORD *)(v4 + 804) = v22;
  *(_DWORD *)(v4 + 808) = v23;
  aP2.sectionHead[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
  Vector::Cleanup2((int)aP2.sectionHead);
  aP2.headNode[2] = (int)&v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 816));
  *(_DWORD *)aP2.headNode[2] = &vt_TypeList_int;
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  aP2.headNode[2] = INIClass::ReadIntList(
                      (unsigned __int8 ***)aP0,
                      (int)aP2.sectionHead,
                      inited,
                      (unsigned __int8 *)&stru_830620[81236],
                      (void **)v412.vtable0,
                      v412.Items,
                      v412.Capacity,
                      *(__int16 *)&v412.IsInitialized,
                      *(int *)aP3,
                      *(int *)&aP3[4],
                      *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 816), (_DWORD *)aP2.headNode[2]);
  int v25 = aP2.headNode[2];
  *(_DWORD *)(v4 + 832) = *(_DWORD *)(aP2.headNode[2] + 16);
  *(_DWORD *)(v4 + 836) = *(_DWORD *)(v25 + 20);
  *(_DWORD *)(v4 + 840) = *(_DWORD *)(v25 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[81224],
         (INIClass *)&stru_87C374[56304],
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( j = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
          j;
          j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !j->__pad_0[0] )
        break;
      aP2.headNode[2] = (int)AnimTypeClass::FindOrCreate(j);
      if ( aP2.headNode[2] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2.headNode[2]);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1476));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1476), (VectorClass *)aP2.sectionHead);
  edx29 = *(_DWORD *)&aP2[36];
  int v28 = *(_DWORD *)&aP2[40];
  *(_DWORD *)(v4 + 1492) = *(_DWORD *)aP2[32];
  *(_DWORD *)(v4 + 1496) = edx29;
  *(_DWORD *)(v4 + 1500) = v28;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  DynamicVectorClass::Destroy_Alt((int)aP2.sectionHead);
  *(_BYTE *)(v4 + 2054) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81204],
                            *(_BYTE *)(v4 + 2054));
  *(_DWORD *)(v4 + 2056) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81192],
                             *(INIClass **)(v4 + 2056));
  *(_DWORD *)(v4 + 2060) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81180],
                             *(INIClass **)(v4 + 2060));
  *(_BYTE *)(v4 + 2064) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81164],
                            *(_BYTE *)(v4 + 2064));
  al29 = INIClass::ReadBool_Overwrite(
           (int)aP0,
           (unsigned __int8 *)(v4 + 36),
           (CCINIClass *)&stru_830620[81148],
           *(_BYTE *)(v4 + 2704));
  *(_BYTE *)(v4 + 2704) = al29;
  if ( *(int *)(v4 + 2056) <= 0 )
  {
    if ( !al29 )
    {
      v34 = *(WeaponTypeClass **)(v4 + 2200);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620[81112],
             (INIClass *)&stru_87C374[56304],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        eax42 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax42 = v34;
      }
      *(_DWORD *)&aP3[8] = 128;
      *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(_DWORD *)aP3 = &stru_87C374[56304];
      *(_DWORD *)&v412.IsInitialized = &stru_830620[81100];
      *(_DWORD *)(v4 + 2200) = eax42;
      v27 = *(CCINIClass **)(v4 + 2228);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             *(unsigned __int8 **)&v412.IsInitialized,
             *(INIClass **)aP3,
             *(INIClass **)&aP3[4],
             *(int *)&aP3[8]) )
      {
        eax45 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax45 = v27;
      }
      *(_DWORD *)(v4 + 2228) = eax45;
      v29 = *(CCINIClass **)(v4 + 2708);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620[81084],
             (INIClass *)&stru_87C374[56304],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        eax48 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax48 = v29;
      }
      *(_DWORD *)&aP3[8] = 128;
      *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(_DWORD *)aP3 = &stru_87C374[56304];
      *(_DWORD *)&v412.IsInitialized = &stru_830620[81068];
      *(_DWORD *)(v4 + 2708) = eax48;
      v31 = *(CCINIClass **)(v4 + 2736);
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             *(unsigned __int8 **)&v412.IsInitialized,
             *(INIClass **)aP3,
             *(INIClass **)&aP3[4],
             *(int *)&aP3[8]) )
      {
        eax51 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        eax51 = v31;
      }
      *(_DWORD *)(v4 + 2736) = eax51;
    }
  }
  else if ( *(int *)(v4 + 2060) > 0 )
  {
    aP2.headNode[2] = 1;
    v21 = (CCINIClass *)(v4 + 2708);
    do
    {
      sprintf((char *const)&aP2.unknown30, (ObjectClass *)&stru_830620[81136], (INIClass *)aP2.headNode[2]);
      sprintf((char *const)aP2.sectionHead, (ObjectClass *)&stru_830620[81120], (INIClass *)aP2.headNode[2]);
      *(_DWORD *)aP2[0] = v21[-6].sectionHead[1];
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)&aP2.unknown30,
             (INIClass *)&stru_87C374[56304],
             String,
             128) )
      {
        eax33 = InfantryTypeClass::Find((ObjectClass *)String);
      }
      else
      {
        eax33 = *(WeaponTypeClass **)aP2[0];
      }
      v21[-6].sectionHead[1] = (int)eax33;
      *(_DWORD *)aP2[0] = *(_DWORD *)v21->__pad_0;
      if ( INIClass::GetString(
             (unsigned __int8 ***)aP0,
             (INIClass *)(v4 + 36),
             (unsigned __int8 *)aP2.sectionHead,
             (INIClass *)&stru_87C374[56304],
             (INIClass *)&aP2.CCINIClass_field_4C,
             128) )
      {
        v32 = InfantryTypeClass::Find((ObjectClass *)&aP2.CCINIClass_field_4C);
      }
      else
      {
        v32 = *(WeaponTypeClass **)aP2[0];
      }
      *(_DWORD *)v21->__pad_0 = v32;
      v24 = *(CCINIClass **)(v4 + 2060);
      ++aP2.headNode[2];
      v21 = (CCINIClass *)((char *)v21 + 28);
    }
    while ( aP2.headNode[2] - 1 < (int)v24 );
  }
  if ( *(_BYTE *)(v4 + 2704) )
  {
    *(_DWORD *)(v4 + 2200) = 0;
    *(_DWORD *)(v4 + 2228) = 0;
    *(_DWORD *)(v4 + 2708) = 0;
    *(_DWORD *)(v4 + 2736) = 0;
  }
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1128));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v33 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v33,
                             (unsigned __int8 *)&stru_830620[81056],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1128), *(_DWORD **)aP2[0]);
  eax56 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1144) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1148) = *(_DWORD *)(eax56 + 20);
  *(_DWORD *)(v4 + 1152) = *(_DWORD *)(eax56 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1044));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v35 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v35,
                             (unsigned __int8 *)&stru_830620[81044],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1044), *(_DWORD **)aP2[0]);
  eax56a = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1060) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1064) = *(_DWORD *)(eax56a + 20);
  *(_DWORD *)(v4 + 1068) = *(_DWORD *)(eax56a + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1072));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v37 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v37,
                             (unsigned __int8 *)&stru_830620[81024],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1072), *(_DWORD **)aP2[0]);
  eax56b = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1088) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1092) = *(_DWORD *)(eax56b + 20);
  *(_DWORD *)(v4 + 1096) = *(_DWORD *)(eax56b + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1100));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v39 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v39,
                             (unsigned __int8 *)&stru_830620[81000],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1100), *(_DWORD **)aP2[0]);
  eax56c = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1116) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1120) = *(_DWORD *)(eax56c + 20);
  *(_DWORD *)(v4 + 1124) = *(_DWORD *)(eax56c + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1156));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v41 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v41,
                             (unsigned __int8 *)&stru_830620[80988],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1156), *(_DWORD **)aP2[0]);
  int v51 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1172) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1176) = *(_DWORD *)(v51 + 20);
  *(_DWORD *)(v4 + 1180) = *(_DWORD *)(v51 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1184));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v43 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v43,
                             (unsigned __int8 *)&stru_830620[80968],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1184), *(_DWORD **)aP2[0]);
  int v53 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1200) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1204) = *(_DWORD *)(v53 + 20);
  *(_DWORD *)(v4 + 1208) = *(_DWORD *)(v53 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1212));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v45 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v45,
                             (unsigned __int8 *)&stru_830620[80956],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1212), *(_DWORD **)aP2[0]);
  int v55 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1228) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1232) = *(_DWORD *)(v55 + 20);
  *(_DWORD *)(v4 + 1236) = *(_DWORD *)(v55 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1240));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v47 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v47,
                             (unsigned __int8 *)&stru_830620[80940],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1240), *(_DWORD **)aP2[0]);
  int v57 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1256) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1260) = *(_DWORD *)(v57 + 20);
  *(_DWORD *)(v4 + 1264) = *(_DWORD *)(v57 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass::Destroy((int)aP2.sectionHead);
  v49 = *(CCINIClass **)(v4 + 1324);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80928],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    Index = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C);
    if ( Index != (CCINIClass *)-1 )
      v49 = Index;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80916];
  *(_DWORD *)(v4 + 1324) = v49;
  int v60 = *(_DWORD *)(v4 + 1328);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v61; // eax
    || (v61 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v61 == -1) )
  {
    v61 = v60;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80904];
  *(_DWORD *)(v4 + 1328) = v61;
  int v62 = *(_DWORD *)(v4 + 1332);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v63; // eax
    || (v63 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v63 == -1) )
  {
    v63 = v62;
  }
  *(_DWORD *)(v4 + 1332) = v63;
  int v64 = *(_DWORD *)(v4 + 1336);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80892],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v65; // eax
    || (v65 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v65 == -1) )
  {
    v65 = v64;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41908];
  *(_DWORD *)(v4 + 1336) = v65;
  int v66 = *(_DWORD *)(v4 + 1340);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v67; // eax
    || (v67 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v67 == -1) )
  {
    v67 = v66;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41892];
  *(_DWORD *)(v4 + 1340) = v67;
  int v68 = *(_DWORD *)(v4 + 1344);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v69; // eax
    || (v69 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v69 == -1) )
  {
    v69 = v68;
  }
  *(_DWORD *)(v4 + 1344) = v69;
  int v70 = *(_DWORD *)(v4 + 1348);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80876],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v71; // eax
    || (v71 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v71 == -1) )
  {
    v71 = v70;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41876];
  *(_DWORD *)(v4 + 1348) = v71;
  int v72 = *(_DWORD *)(v4 + 1352);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v73; // eax
    || (v73 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v73 == -1) )
  {
    v73 = v72;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80860];
  *(_DWORD *)(v4 + 1352) = v73;
  int v74 = *(_DWORD *)(v4 + 1356);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v75; // eax
    || (v75 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v75 == -1) )
  {
    v75 = v74;
  }
  *(_DWORD *)(v4 + 1356) = v75;
  int v76 = *(_DWORD *)(v4 + 1360);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80844],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v77; // eax
    || (v77 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v77 == -1) )
  {
    v77 = v76;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80828];
  *(_DWORD *)(v4 + 1360) = v77;
  int v78 = *(_DWORD *)(v4 + 1364);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v79; // eax
    || (v79 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v79 == -1) )
  {
    v79 = v78;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80816];
  *(_DWORD *)(v4 + 1364) = v79;
  int v80 = *(_DWORD *)(v4 + 1368);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v81; // eax
    || (v81 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v81 == -1) )
  {
    v81 = v80;
  }
  *(_DWORD *)(v4 + 1368) = v81;
  int v82 = *(_DWORD *)(v4 + 1372);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80800],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v83; // eax
    || (v83 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v83 == -1) )
  {
    v83 = v82;
  }
  *(_DWORD *)(v4 + 1372) = v83;
  *(_BYTE *)(v4 + 3219) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80788],
                            *(_BYTE *)(v4 + 3219));
  *(_DWORD *)(v4 + 2048) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[80780],
                             *(INIClass **)(v4 + 2048));
  *(_DWORD *)(v4 + 952) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80768],
                            *(INIClass **)(v4 + 952));
  TypeMember_54749E0 = ObjectTypeClass::loadTypeMember_54749E0(
                         (unsigned __int8 ***)aP0,
                         (CCINIClass *)(v4 + 36),
                         (unsigned __int8 *)&stru_830620[80756],
                         *(_DWORD *)(v4 + 956));
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80748];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 956) = TypeMember_54749E0;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    DynamicVectorClass::BuildingTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_BuildingTypeClass_const;
    for ( k = strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          k;
          k = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !*k )
        break;
      *(_DWORD *)aP2[0] = BuildingTypeClass::FindOrCreate(k);
      if ( *(_DWORD *)aP2[0] )
        DynamicVector::Add_Alt3(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::BuildingTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass::Destroy((int)&aP2.unknown30);
  }
  else
  {
    TypeList::BuildingTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1000));
  }
  VectorClass::CopyBuilding((_DWORD *)(v4 + 1000), (VectorClass *)aP2.sectionHead);
  int v86 = *(_DWORD *)aP2[32];
  int v87 = *(_DWORD *)&aP2[36];
  *(_DWORD *)(v4 + 1024) = *(_DWORD *)&aP2[40];
  *(_DWORD *)(v4 + 1016) = v86;
  *(_DWORD *)(v4 + 1020) = v87;
  aP2.sectionHead[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
  DynamicVectorClass::Destroy((int)aP2.sectionHead);
  v88 = *(BuildingTypeClass **)(v4 + 1028);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80736],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v89 = BuildingTypeClass::FindOrCreate((char *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v89 = v88;
  }
  *(_DWORD *)(v4 + 1028) = v89;
  v90 = *(UnitTypeClass **)(v4 + 1032);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80720],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    Alt = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    Alt = v90;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80708];
  *(_DWORD *)(v4 + 1032) = Alt;
  v92 = *(UnitTypeClass **)(v4 + 1036);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    eax110 = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    eax110 = v92;
  }
  *(_DWORD *)(v4 + 1036) = eax110;
  *(_BYTE *)(v4 + 1040) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80696],
                            *(_BYTE *)(v4 + 1040));
  *(_BYTE *)(v4 + 3366) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80680],
                            *(_BYTE *)(v4 + 3366));
  char v94; // al
  v94 = INIClass::ReadBool_Overwrite(
          (int)aP0,
          (unsigned __int8 *)(v4 + 36),
          (CCINIClass *)&stru_830620[80664],
          *(_BYTE *)(v4 + 3364));
  aP3[8] = *(_BYTE *)(v4 + 3361);
  *(_DWORD *)&aP3[4] = &stru_830620[80652];
  *(_DWORD *)aP3 = v4 + 36;
  *(_BYTE *)(v4 + 3364) = v94;
  *(_BYTE *)(v4 + 3361) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            *(unsigned __int8 **)aP3,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  al112a = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620[80632],
             *(_BYTE *)(v4 + 3362));
  char v96 = *(_BYTE *)(v4 + 3233);
  *(_BYTE *)(v4 + 3362) = al112a;
  al112b = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620[80624],
             v96);
  int v98 = *(_DWORD *)(v4 + 1376);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80604];
  v412.Capacity = v4 + 36;
  *(_BYTE *)(v4 + 3233) = al112b;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v99; // eax
    || (v99 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v99 == -1) )
  {
    v99 = v98;
  }
  int v100 = *(_DWORD *)(v4 + 1380);
  *(_DWORD *)(v4 + 1376) = v99;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80584],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v101; // eax
    || (v101 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v101 == -1) )
  {
    v101 = v100;
  }
  v93 = *(CCINIClass **)(v4 + 1384);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80564];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1380) = v101;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v103 = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C), v103 == (CCINIClass *)-1) )
  {
    v103 = v93;
  }
  *(_DWORD *)(v4 + 1384) = v103;
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1268));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v95 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v95,
                             (unsigned __int8 *)&stru_830620[80552],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1268), *(_DWORD **)aP2[0]);
  int v105 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1284) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1288) = *(_DWORD *)(v105 + 20);
  *(_DWORD *)(v4 + 1292) = *(_DWORD *)(v105 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1296));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v97 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v97,
                             (unsigned __int8 *)&stru_830620[80540],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(__int16 *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList::Copy((_DWORD *)(v4 + 1296), *(_DWORD **)aP2[0]);
  int v107 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1312) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1316) = *(_DWORD *)(v107 + 20);
  int v108 = *(_DWORD *)(v107 + 24);
  void * v109 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1320) = v108;
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( v109 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v109);
  int v110 = *(_DWORD *)(v4 + 1388);
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80528],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v111; // eax
    || (v111 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v111 == -1) )
  {
    v111 = v110;
  }
  int v112 = *(_DWORD *)(v4 + 1392);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80512];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1388) = v111;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v113; // eax
    || (v113 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v113 == -1) )
  {
    v113 = v112;
  }
  int v114 = *(_DWORD *)(v4 + 1396);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41860];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1392) = v113;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v115; // eax
    || (v115 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v115 == -1) )
  {
    v115 = v114;
  }
  int v116 = *(_DWORD *)(v4 + 1400);
  *(_DWORD *)(v4 + 1396) = v115;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[41844],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v117; // eax
    || (v117 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v117 == -1) )
  {
    v117 = v116;
  }
  int v118 = *(_DWORD *)(v4 + 1404);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80496];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1400) = v117;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v119; // eax
    || (v119 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v119 == -1) )
  {
    v119 = v118;
  }
  int v120 = *(_DWORD *)(v4 + 1408);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80468];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1404) = v119;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v121; // eax
    || (v121 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v121 == -1) )
  {
    v121 = v120;
  }
  int v122 = *(_DWORD *)(v4 + 1412);
  *(_DWORD *)(v4 + 1408) = v121;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80436],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v123; // eax
    || (v123 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v123 == -1) )
  {
    v123 = v122;
  }
  int v124 = *(_DWORD *)(v4 + 1416);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80408];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1412) = v123;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v125; // eax
    || (v125 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v125 == -1) )
  {
    v125 = v124;
  }
  int v126 = *(_DWORD *)(v4 + 1420);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80376];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1416) = v125;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v127; // eax
    || (v127 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v127 == -1) )
  {
    v127 = v126;
  }
  int v128 = *(_DWORD *)(v4 + 1424);
  *(_DWORD *)(v4 + 1420) = v127;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[80364],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v129; // eax
    || (v129 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v129 == -1) )
  {
    v129 = v128;
  }
  int v130 = *(_DWORD *)(v4 + 1428);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80348];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1424) = v129;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v131; // eax
    || (v131 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v131 == -1) )
  {
    v131 = v130;
  }
  int v132 = *(_DWORD *)(v4 + 1432);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41232];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1428) = v131;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v133; // eax
    || (v133 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v133 == -1) )
  {
    v133 = v132;
  }
  int v134 = *(_DWORD *)(v4 + 1436);
  *(_DWORD *)(v4 + 1432) = v133;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[41212],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v135; // eax
    || (v135 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v135 == -1) )
  {
    v135 = v134;
  }
  int v136 = *(_DWORD *)(v4 + 1440);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41188];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1436) = v135;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v137; // eax
    || (v137 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v137 == -1) )
  {
    v137 = v136;
  }
  int v138 = *(_DWORD *)(v4 + 1444);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41164];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1440) = v137;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v139; // eax
    || (v139 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v139 == -1) )
  {
    v139 = v138;
  }
  int v140 = *(_DWORD *)(v4 + 1448);
  *(_DWORD *)(v4 + 1444) = v139;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)(v4 + 36),
          (unsigned __int8 *)&stru_830620[41148],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v141; // eax
    || (v141 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v141 == -1) )
  {
    v141 = v140;
  }
  int v142 = *(_DWORD *)(v4 + 1452);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41132];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1448) = v141;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v143; // eax
    || (v143 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v143 == -1) )
  {
    v143 = v142;
  }
  int v144 = *(_DWORD *)(v4 + 1456);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[41252];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1452) = v143;
  if ( !INIClass::GetString(
          (unsigned __int8 ***)aP0,
          (INIClass *)v412.Capacity,
          *(unsigned __int8 **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v145; // eax
    || (v145 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v145 == -1) )
  {
    v145 = v144;
  }
  *(_DWORD *)(v4 + 1456) = v145;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&g_INI_Key_Speed.needsSave_flag,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( m = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          m;
          m = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !m->__pad_0[0] )
        break;
      *(_DWORD *)aP2[0] = AnimTypeClass::FindOrCreate(m);
      if ( *(_DWORD *)aP2[0] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1836));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1836), (VectorClass *)aP2.sectionHead);
  int v147 = *(_DWORD *)&aP2[36];
  int v148 = *(_DWORD *)&aP2[40];
  *(_DWORD *)(v4 + 1852) = *(_DWORD *)aP2[32];
  void * v149 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1856) = v147;
  *(_DWORD *)(v4 + 1860) = v148;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v149 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v149);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80336],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( n = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          n;
          n = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !n->__pad_0[0] )
        break;
      *(_DWORD *)aP2[0] = AnimTypeClass::FindOrCreate(n);
      if ( *(_DWORD *)aP2[0] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass *)&aP2);
    }
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList::AnimTypeCopy(aP2.sectionHead, (VectorClass *)(v4 + 1864));
  }
  VectorClass::CopyDefault((_DWORD *)(v4 + 1864), (VectorClass *)aP2.sectionHead);
  int v151 = *(_DWORD *)&aP2[36];
  int v152 = *(_DWORD *)&aP2[40];
  *(_DWORD *)(v4 + 1880) = *(_DWORD *)aP2[32];
  void * v153 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1884) = v151;
  *(_DWORD *)(v4 + 1888) = v152;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v153 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v153);
  v154 = *(ParticleSystemTypeClass **)(v4 + 1892);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80312],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v155 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v155 = v154;
  }
  v156 = *(ParticleSystemTypeClass **)(v4 + 1908);
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80284];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1892) = v155;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    v157 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v157 = v156;
  }
  *(_DWORD *)&aP3[8] = v4 + 1896;
  *(_DWORD *)&aP3[4] = &stru_830620[80260];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)&v412.IsInitialized = &aP2.unknown30;
  *(_DWORD *)(v4 + 1908) = v157;
  Coord2 = INIClass::GetCoord2(
             (unsigned __int8 ***)aP0,
             *(int **)&v412.IsInitialized,
             *(CCINIClass **)aP3,
             *(unsigned __int8 **)&aP3[4],
             *(int **)&aP3[8]);
  int v159 = *Coord2;
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)(v4 + 1896) = v159;
  int v160 = Coord2[1];
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)(v4 + 1900) = v160;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  int v161 = Coord2[2];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[80236];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1904) = v161;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    TypeList::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( ii = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          ii;
          ii = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !ii->__pad_0[0] )
        break;
      *(_DWORD *)aP2[0] = BuildingTypeClass::LoadOrGet(ii);
      if ( *(_DWORD *)aP2[0] )
        TypeList::PushBack(&aP2.unknown30, (VectorClass *)&aP2);
    }
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1912));
  }
  ObjectTypeClass::loadTypeMember_5717C00((_DWORD *)(v4 + 1912), aP2.sectionHead);
  int v163 = *(_DWORD *)aP2[32];
  int v164 = *(_DWORD *)&aP2[36];
  *(_DWORD *)(v4 + 1936) = *(_DWORD *)&aP2[40];
  void * v165 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1928) = v163;
  *(_DWORD *)(v4 + 1932) = v164;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v165 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v165);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[80212],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    TypeList::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( jj = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          jj;
          jj = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !jj->__pad_0[0] )
        break;
      *(_DWORD *)aP2[0] = BuildingTypeClass::LoadOrGet(jj);
      if ( *(_DWORD *)aP2[0] )
        TypeList::PushBack(&aP2.unknown30, (VectorClass *)&aP2);
    }
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1940));
  }
  ObjectTypeClass::loadTypeMember_5717C00((_DWORD *)(v4 + 1940), aP2.sectionHead);
  int v167 = *(_DWORD *)aP2[32];
  int v168 = *(_DWORD *)&aP2[36];
  *(_DWORD *)(v4 + 1964) = *(_DWORD *)&aP2[40];
  void * v169 = (void *)aP2.sectionHead[1];
  *(_DWORD *)(v4 + 1956) = v167;
  *(_DWORD *)(v4 + 1960) = v168;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v169 && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z(v169);
  eax231 = INIClass::GetCoord2(
             (unsigned __int8 ***)aP0,
             &aP2.unknown30,
             (CCINIClass *)(v4 + 36),
             (unsigned __int8 *)&stru_830620[80192],
             (int *)(v4 + 1968));
  *(_DWORD *)(v4 + 1968) = *eax231;
  *(_DWORD *)(v4 + 1972) = eax231[1];
  edx231 = eax231[2];
  aP3[8] = *(_BYTE *)(v4 + 1980);
  *(_DWORD *)&aP3[4] = &stru_830620[80172];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1976) = edx231;
  char v172 = INIClass::ReadBool_Overwrite((int)aP0, *(unsigned __int8 **)aP3, *(CCINIClass **)&aP3[4], aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 1984;
  *(_DWORD *)&aP3[4] = &stru_830620[80152];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)&v412.IsInitialized = &aP2.unknown30;
  *(_BYTE *)(v4 + 1980) = v172;
  eax231a = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              *(int **)&v412.IsInitialized,
              *(CCINIClass **)aP3,
              *(unsigned __int8 **)&aP3[4],
              *(int **)&aP3[8]);
  *(_DWORD *)(v4 + 1984) = *eax231a;
  *(_DWORD *)(v4 + 1988) = eax231a[1];
  *(_DWORD *)(v4 + 1992) = eax231a[2];
  eax231b = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (unsigned __int8 *)&stru_830620[80128],
              (int *)(v4 + 1996));
  *(_DWORD *)(v4 + 1996) = *eax231b;
  *(_DWORD *)(v4 + 2000) = eax231b[1];
  *(_DWORD *)(v4 + 2004) = eax231b[2];
  int *v175; // eax
  v175 = INIClass::GetCoord2(
           (unsigned __int8 ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (unsigned __int8 *)&stru_830620[80104],
           (int *)(v4 + 2008));
  *(_DWORD *)(v4 + 2008) = *v175;
  *(_DWORD *)(v4 + 2012) = v175[1];
  *(_DWORD *)(v4 + 2016) = v175[2];
  int *v176; // eax
  v176 = INIClass::GetCoord2(
           (unsigned __int8 ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (unsigned __int8 *)&stru_830620[80076],
           (int *)(v4 + 2020));
  *(_DWORD *)(v4 + 2020) = *v176;
  *(_DWORD *)(v4 + 2024) = v176[1];
  *(_DWORD *)(v4 + 2028) = v176[2];
  eax231e = INIClass::GetCoord2(
              (unsigned __int8 ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (unsigned __int8 *)&stru_830620[80052],
              (int *)(v4 + 2032));
  *(_DWORD *)(v4 + 2032) = *eax231e;
  *(_DWORD *)(v4 + 2036) = eax231e[1];
  *(_DWORD *)(v4 + 2040) = eax231e[2];
  *(_BYTE *)(v4 + 3230) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80044],
                            *(_BYTE *)(v4 + 3230));
  *(_BYTE *)(v4 + 3231) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80032],
                            *(_BYTE *)(v4 + 3231));
  *(_BYTE *)(v4 + 3232) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80020],
                            *(_BYTE *)(v4 + 3232));
  *(_BYTE *)(v4 + 3280) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80008],
                            *(_BYTE *)(v4 + 3280));
  *(_BYTE *)(v4 + 3281) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79992],
                            *(_BYTE *)(v4 + 3281));
  *(_BYTE *)(v4 + 3282) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79972],
                            (INIClass *)*(char *)(v4 + 3282));
  *(_BYTE *)(v4 + 3283) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79948],
                            (INIClass *)*(char *)(v4 + 3283));
  *(_BYTE *)(v4 + 3284) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79936],
                            *(_BYTE *)(v4 + 3284));
  *(_BYTE *)(v4 + 3229) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79928],
                            *(_BYTE *)(v4 + 3229));
  *(_BYTE *)(v4 + 3285) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79916],
                            *(_BYTE *)(v4 + 3285));
  *(_DWORD *)(v4 + 3288) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79900],
                             *(INIClass **)(v4 + 3288));
  *(_DWORD *)(v4 + 3340) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79892],
                             *(INIClass **)(v4 + 3340));
  *(_DWORD *)(v4 + 3344) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79880],
                             *(INIClass **)(v4 + 3344));
  if ( *(_BYTE *)(v4 + 3285) && *(int *)(v4 + 3288) > 1 )
  {
    aP2.headNode[2] = 1;
    v178 = (INIClass **)(v4 + 3316);
    do
    {
      sprintf(aP2[0], (ObjectClass *)&stru_830620[79872], (INIClass *)aP2.headNode[2]);
      sprintf((char *const)&aP2.unknown30, (ObjectClass *)&stru_830620[79856], (INIClass *)aP2.headNode[2]);
      *(v178 - 6) = (INIClass *)INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)(v4 + 36), &aP2, *(v178 - 6));
      *v178 = (INIClass *)INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&aP2.unknown30,
                            *v178);
      v170 = *(CCINIClass **)(v4 + 3288);
      ++v178;
      ++aP2.headNode[2];
    }
    while ( aP2.headNode[2] - 1 < (int)v170 );
  }
  *(_DWORD *)(v4 + 980) = ObjectTypeClass::loadTypeMember_5474940(
                            (unsigned __int8 ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[79844],
                            *(_DWORD *)(v4 + 980));
  *(_BYTE *)(v4 + 984) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (unsigned __int8 *)(v4 + 36),
                           (CCINIClass *)&stru_830620[79828],
                           *(_BYTE *)(v4 + 984));
  *(_DWORD *)(v4 + 988) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79804],
                            *(INIClass **)(v4 + 988));
  *(_DWORD *)(v4 + 992) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79776],
                            *(INIClass **)(v4 + 992));
  *(_DWORD *)(v4 + 996) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79768],
                            *(INIClass **)(v4 + 996));
  *(_DWORD *)aP2[0] = &v412;
  DynamicVectorClass::Copy(&v412, (DynamicVector *)(v4 + 1592));
  **(_DWORD **)aP2[0] = &vt_TypeList_int;
  v171 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v171,
                             (unsigned __int8 *)&stru_830620[79752],
                             v412);
  TypeList::Copy((_DWORD *)(v4 + 1592), *(_DWORD **)aP2[0]);
  int v181 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1608) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1612) = *(_DWORD *)(v181 + 20);
  *(_DWORD *)(v4 + 1616) = *(_DWORD *)(v181 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)aP2[0] = &v412;
  IntVector::Copy(&v412, (VectorClass *)(v4 + 1620));
  v173 = *(CCINIClass **)aP2[0];
  *(_DWORD *)(*(_DWORD *)aP2[0] + 16) = *(_DWORD *)(v4 + 1636);
  v173->sectionHead[1] = *(_DWORD *)(v4 + 1640);
  *(_DWORD *)v173->__pad_0 = &vt_TypeList_int;
  v174 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)aP2[0] = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (unsigned __int8 ***)aP0,
                             v174,
                             (unsigned __int8 *)&stru_830620[79728],
                             v412);
  TypeList::Copy((_DWORD *)(v4 + 1620), *(_DWORD **)aP2[0]);
  int v184 = *(_DWORD *)aP2[0];
  *(_DWORD *)(v4 + 1636) = *(_DWORD *)(*(_DWORD *)aP2[0] + 16);
  *(_DWORD *)(v4 + 1640) = *(_DWORD *)(v184 + 20);
  *(_DWORD *)(v4 + 1644) = *(_DWORD *)(v184 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && BYTE1(aP2.sectionCount) )
    __3_YAXPAX_Z((void *)aP2.sectionHead[1]);
  *(_DWORD *)(v4 + 1512) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79720],
                             *(INIClass **)(v4 + 1512));
  *(_BYTE *)(v4 + 3388) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79700],
                            *(_BYTE *)(v4 + 3388));
  *(_BYTE *)(v4 + 3389) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79680],
                            *(_BYTE *)(v4 + 3389));
  *(_DWORD *)(v4 + 1520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79664],
                             *(INIClass **)(v4 + 1520));
  *(_DWORD *)(v4 + 1524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79644],
                             *(INIClass **)(v4 + 1524));
  *(_DWORD *)(v4 + 1528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79632],
                             *(INIClass **)(v4 + 1528));
  *(_DWORD *)(v4 + 1532) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79612],
                             *(INIClass **)(v4 + 1532));
  *(_DWORD *)(v4 + 1548) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79588],
                             *(INIClass **)(v4 + 1548));
  *(double *)&aP3[4] = *(float *)(v4 + 1544);
  *(float *)(v4 + 1544) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[79568],
                            *(INIClass **)&aP3[4]);
  *(_BYTE *)(v4 + 1518) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79556],
                            *(_BYTE *)(v4 + 1518));
  *(_BYTE *)(v4 + 1519) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79544],
                            *(_BYTE *)(v4 + 1519));
  *(_BYTE *)(v4 + 1508) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79532],
                            *(_BYTE *)(v4 + 1508));
  *(_BYTE *)(v4 + 1516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79512],
                            *(_BYTE *)(v4 + 1516));
  *(_BYTE *)(v4 + 1517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79492],
                            *(_BYTE *)(v4 + 1517));
  *(_BYTE *)(v4 + 3375) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79480],
                            *(_BYTE *)(v4 + 3375));
  *(_BYTE *)(v4 + 3376) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79464],
                            *(_BYTE *)(v4 + 3376));
  *(_BYTE *)(v4 + 3377) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79448],
                            *(_BYTE *)(v4 + 3377));
  *(_BYTE *)(v4 + 3378) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79428],
                            *(_BYTE *)(v4 + 3378));
  *(_BYTE *)(v4 + 3481) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79408],
                            *(_BYTE *)(v4 + 3481));
  *(_BYTE *)(v4 + 3482) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79392],
                            *(_BYTE *)(v4 + 3482));
  *(_BYTE *)(v4 + 3379) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79372],
                            *(_BYTE *)(v4 + 3379));
  *(_BYTE *)(v4 + 3380) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79348],
                            *(_BYTE *)(v4 + 3380));
  *(_BYTE *)(v4 + 3483) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79324],
                            *(_BYTE *)(v4 + 3483));
  *(_BYTE *)(v4 + 3484) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79296],
                            *(_BYTE *)(v4 + 3484));
  *(_BYTE *)(v4 + 3485) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79268],
                            *(_BYTE *)(v4 + 3485));
  *(_DWORD *)(v4 + 3488) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620[79252],
                             *(_DWORD *)(v4 + 3488));
  *(_DWORD *)(v4 + 3496) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620[79236],
                             *(_DWORD *)(v4 + 3496));
  *(_DWORD *)(v4 + 3492) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620[79220],
                             *(_DWORD *)(v4 + 3492));
  *(_DWORD *)(v4 + 1588) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             aTechlevel,
                             *(INIClass **)(v4 + 1588));
  *(_DWORD *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (unsigned __int8 *)(v4 + 36),
                         (CCINIClass *)&stru_830620[79204],
                         *(INIClass **)(v4 + 1564));
  *(_DWORD *)&aP3[4] = &stru_830620[79184];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1564) = *(_DWORD *)&aP3[8];
  *(_DWORD *)(v4 + 1568) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             *(unsigned __int8 **)aP3,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  v177 = *(CCINIClass **)(v4 + 1572);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[79164],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v177 = (CCINIClass *)KeywordClass::FindOrCreate((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[79140];
  v412.Capacity = v4 + 36;
  *(_DWORD *)(v4 + 1572) = v177;
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)v412.Capacity,
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    v186 = KeywordClass::FindOrCreate((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v186 = v177;
  }
  *(_DWORD *)(v4 + 1576) = v186;
  *(_DWORD *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (unsigned __int8 *)(v4 + 36),
                         (CCINIClass *)&stru_830620[79116],
                         *(INIClass **)(v4 + 1580));
  *(_DWORD *)&aP3[4] = &stru_830620[79088];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1580) = *(_DWORD *)&aP3[8];
  int v187 = INIClass::ReadInt_Overwrite((int)aP0, *(unsigned __int8 **)aP3, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = -1;
  *(_DWORD *)&aP3[4] = &g_INI_Key_Speed;
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1584) = v187;
  eax246 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             *(unsigned __int8 **)aP3,
             *(CCINIClass **)&aP3[4],
             *(INIClass **)&aP3[8]);
  if ( eax246 != -1 )
  {
    if ( eax246 >= 100 )
      eax246 = 100;
    int v189 = ((eax246 <= 0 ? 0 : eax246) << 8) / 100;
    if ( v189 >= 255 )
      v189 = 255;
    *(_DWORD *)(v4 + 1656) = v189;
  }
  *(_DWORD *)(v4 + 1552) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_825430.ownsFile,
                             *(INIClass **)(v4 + 1552));
  *(_DWORD *)(v4 + 1556) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79080],
                             *(INIClass **)(v4 + 1556));
  edi252 = *(UnitTypeClass **)(v4 + 1720);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         (unsigned __int8 *)&stru_830620[79064],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v191 = BuildingTypeClass::FindOrCreateAlt((INIClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    v191 = edi252;
  }
  *(_DWORD *)&aP3[8] = 128;
  *(_DWORD *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = aDeployinganim;
  *(_DWORD *)(v4 + 1720) = v191;
  edi255 = *(AnimTypeClass **)(v4 + 1724);
  if ( INIClass::GetString(
         (unsigned __int8 ***)aP0,
         (INIClass *)(v4 + 36),
         *(unsigned __int8 **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    eax256 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP2.CCINIClass_field_4C);
  }
  else
  {
    eax256 = edi255;
  }
  *(_DWORD *)(v4 + 1724) = eax256;
  *(_DWORD *)(v4 + 1664) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79052],
                             *(INIClass **)(v4 + 1664));
  *(_DWORD *)(v4 + 1668) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_81BBC8.sectionHead[2],
                             *(INIClass **)(v4 + 1668));
  *(_DWORD *)(v4 + 1672) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79044],
                             *(INIClass **)(v4 + 1672));
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1676);
  *(_DWORD *)&aP3[4] = &stru_830620[79028];
  *(_DWORD *)aP3 = v4 + 36;
  *(_DWORD *)(v4 + 1676) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(_DWORD *)(v4 + 1700) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79008],
                             *(INIClass **)(v4 + 1700));
  *(_DWORD *)(v4 + 1704) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78988],
                             *(INIClass **)(v4 + 1704));
  *(_BYTE *)(v4 + 1708) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78976],
                            *(_BYTE *)(v4 + 1708));
  *(_BYTE *)(v4 + 1709) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78960],
                            *(_BYTE *)(v4 + 1709));
  *(_BYTE *)(v4 + 1710) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78948],
                            *(_BYTE *)(v4 + 1710));
  *(_BYTE *)(v4 + 1711) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78932],
                            *(_BYTE *)(v4 + 1711));
  *(_BYTE *)(v4 + 1712) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78916],
                            *(_BYTE *)(v4 + 1712));
  *(_DWORD *)(v4 + 1688) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78908],
                             *(INIClass **)(v4 + 1688));
  *(_DWORD *)(v4 + 1692) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78896],
                             *(INIClass **)(v4 + 1692));
  *(_DWORD *)(v4 + 1696) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78880],
                             *(INIClass **)(v4 + 1696));
  *(_BYTE *)(v4 + 1713) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78856],
                            *(_BYTE *)(v4 + 1713));
  *(double *)&aP3[4] = *(float *)(v4 + 1716);
  *(float *)(v4 + 1716) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (unsigned __int8 *)&stru_830620[78824],
                            *(INIClass **)&aP3[4]);
  *(_BYTE *)(v4 + 1680) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78808],
                            *(_BYTE *)(v4 + 1680));
  *(_BYTE *)(v4 + 1681) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78796],
                            *(_BYTE *)(v4 + 1681));
  *(_BYTE *)(v4 + 1682) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78788],
                            *(_BYTE *)(v4 + 1682));
  *(_BYTE *)(v4 + 1683) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78780],
                            *(_BYTE *)(v4 + 1683));
  *(_BYTE *)(v4 + 1684) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78768],
                            *(_BYTE *)(v4 + 1684));
  *(_BYTE *)(v4 + 1685) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78756],
                            *(_BYTE *)(v4 + 1685));
  *(_BYTE *)(v4 + 1736) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78736],
                            *(_BYTE *)(v4 + 1736));
  eax258 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             (unsigned __int8 *)(v4 + 36),
             (CCINIClass *)&stru_830620[78728],
             *(INIClass **)(v4 + 1832));
  *(_DWORD *)(v4 + 1832) = eax258;
  *(_DWORD *)(v4 + 1652) = eax258;
  *(_DWORD *)(v4 + 1648) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78716],
                             *(INIClass **)(v4 + 1648));
  *(_DWORD *)(v4 + 1740) = INIClass::ParseFlagList(
                             (unsigned __int8 ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (unsigned __int8 *)&stru_830620[78708],
                             *(_DWORD *)(v4 + 1740));
  *(_DWORD *)(v4 + 1744) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78688],
                             *(INIClass **)(v4 + 1744));
  *(_BYTE *)(v4 + 3214) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78676],
                            *(_BYTE *)(v4 + 3214));
  *(_BYTE *)(v4 + 3277) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78668],
                            *(_BYTE *)(v4 + 3277));
  *(_BYTE *)(v4 + 2053) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78660],
                            *(_BYTE *)(v4 + 2053));
  *(_BYTE *)(v4 + 3278) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78652],
                            *(_BYTE *)(v4 + 3278));
  *(_BYTE *)(v4 + 3276) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78640],
                            *(_BYTE *)(v4 + 3276));
  *(_BYTE *)(v4 + 3226) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78628],
                            *(_BYTE *)(v4 + 3226));
  LOBYTE(ecx258) = *(_BYTE *)(v4 + 3227);
  *(_DWORD *)&aP3[8] = ecx258;
  *(_DWORD *)&aP3[4] = &stru_830620[78612];
  v188 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3227) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v188,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258) = *(_BYTE *)(v4 + 3348);
  *(_DWORD *)&aP3[8] = edx258;
  *(_DWORD *)&aP3[4] = &stru_830620[78600];
  v190 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3348) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v190,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258a) = *(_BYTE *)(v4 + 3360);
  *(_DWORD *)&aP3[8] = eax258a;
  *(_DWORD *)&aP3[4] = &stru_830620[78588];
  v192 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3360) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v192,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1820);
  *(_DWORD *)&aP3[4] = &stru_81B138.INIClass_field_2C;
  v193 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1820) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v193,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1504);
  *(_DWORD *)&aP3[4] = &stru_81BBC8.headNode[2];
  v194 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1504) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v194,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 976);
  *(_DWORD *)&aP3[4] = &stru_830620[78576];
  v195 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 976) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v195,
                            *(CCINIClass **)&aP3[4],
                            *(INIClass **)&aP3[8]);
  int v204 = *(_DWORD *)(v4 + 968);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 972);
  *(_DWORD *)&aP3[4] = v204;
  *(_DWORD *)aP3 = &stru_830620[78564];
  v196 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 968) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v196,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1732);
  *(_DWORD *)&aP3[4] = &stru_830620[78548];
  v197 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 1732) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v197,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(ecx258a) = *(_BYTE *)(v4 + 3223);
  *(_DWORD *)&aP3[8] = ecx258a;
  *(_DWORD *)&aP3[4] = &stru_830620[78536];
  v199 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3223) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v199,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258b) = *(_BYTE *)(v4 + 3222);
  *(_DWORD *)&aP3[8] = edx258b;
  *(_DWORD *)&aP3[4] = &stru_830620[78524];
  v201 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3222) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v201,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258b) = *(_BYTE *)(v4 + 3218);
  *(_DWORD *)&aP3[8] = eax258b;
  *(_DWORD *)&aP3[4] = &stru_830620[50772];
  v203 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3218) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v203,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258b) = *(_BYTE *)(v4 + 3217);
  *(_DWORD *)&aP3[8] = ecx258b;
  *(_DWORD *)&aP3[4] = &stru_830620[78508];
  v205 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3217) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v205,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258c) = *(_BYTE *)(v4 + 1749);
  *(_DWORD *)&aP3[8] = edx258c;
  *(_DWORD *)&aP3[4] = &stru_830620[78480];
  v207 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1749) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v207,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258c) = *(_BYTE *)(v4 + 1748);
  *(_DWORD *)&aP3[8] = eax258c;
  *(_DWORD *)&aP3[4] = &stru_830620[78468];
  v209 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1748) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v209,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258c) = *(_BYTE *)(v4 + 3216);
  *(_DWORD *)&aP3[8] = ecx258c;
  *(_DWORD *)&aP3[4] = &stru_830620[78456];
  v211 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3216) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v211,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258d) = *(_BYTE *)(v4 + 3367);
  *(_DWORD *)&aP3[8] = edx258d;
  *(_DWORD *)&aP3[4] = &stru_830620[78440];
  v213 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3367) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v213,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258d) = *(_BYTE *)(v4 + 3368);
  *(_DWORD *)&aP3[8] = eax258d;
  *(_DWORD *)&aP3[4] = &stru_81BB58;
  v215 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3368) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v215,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258d) = *(_BYTE *)(v4 + 3369);
  *(_DWORD *)&aP3[8] = ecx258d;
  *(_DWORD *)&aP3[4] = &stru_830620[78428];
  v217 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3369) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v217,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258e) = *(_BYTE *)(v4 + 3370);
  *(_DWORD *)&aP3[8] = edx258e;
  *(_DWORD *)&aP3[4] = &stru_830620[78408];
  v219 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3370) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v219,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258e) = *(_BYTE *)(v4 + 3373);
  *(_DWORD *)&aP3[8] = eax258e;
  *(_DWORD *)&aP3[4] = &stru_830620[52920];
  v221 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3373) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v221,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258e) = *(_BYTE *)(v4 + 3383);
  *(_DWORD *)&aP3[8] = ecx258e;
  *(_DWORD *)&aP3[4] = &stru_830620[78388];
  v223 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3383) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v223,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258f) = *(_BYTE *)(v4 + 3433);
  *(_DWORD *)&aP3[8] = edx258f;
  *(_DWORD *)&aP3[4] = &stru_830620[78376];
  v225 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3433) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v225,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v235; // eax
  LOBYTE(v235) = *(_BYTE *)(v4 + 3434);
  *(_DWORD *)&aP3[8] = v235;
  *(_DWORD *)&aP3[4] = &stru_830620[78360];
  v227 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3434) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v227,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258f) = *(_BYTE *)(v4 + 3390);
  *(_DWORD *)&aP3[8] = ecx258f;
  *(_DWORD *)&aP3[4] = &stru_830620[78352];
  v229 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3390) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v229,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3392);
  *(_DWORD *)&aP3[4] = &stru_830620[78340];
  v230 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3392) = GetINIClassInt((unsigned __int8 ***)aP0, v230, *(unsigned __int8 **)&aP3[4], *(int *)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3400);
  *(_DWORD *)&aP3[4] = &stru_830620[78324];
  v231 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3400) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v231,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3396);
  *(_DWORD *)&aP3[4] = &stru_830620[78308];
  v232 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3396) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v232,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3404);
  *(_DWORD *)&aP3[4] = &stru_830620[78292];
  v233 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3404) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v233,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3408);
  *(_DWORD *)&aP3[4] = &stru_830620[78272];
  v234 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3408) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v234,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(ecx258g) = *(_BYTE *)(v4 + 3412);
  *(_DWORD *)&aP3[8] = ecx258g;
  *(_DWORD *)&aP3[4] = &stru_830620[78264];
  v236 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3412) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v236,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3416);
  *(_DWORD *)&aP3[4] = &stru_8184C8;
  v237 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3416) = GetINIClassKeyword(
                             (unsigned __int8 ***)aP0,
                             v237,
                             *(unsigned __int8 **)&aP3[4],
                             *(int *)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3424);
  *(_DWORD *)&aP3[4] = &stru_830620[78248];
  v238 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3424) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v238,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3420);
  *(_DWORD *)&aP3[4] = &stru_830620[78232];
  v239 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3420) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v239,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3428);
  *(_DWORD *)&aP3[4] = &stru_830620[78216];
  v240 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258g = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v240,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  *(_DWORD *)(v4 + 3428) = eax258g;
  LOBYTE(eax258g) = *(_BYTE *)(v4 + 3432);
  *(_DWORD *)&aP3[8] = eax258g;
  *(_DWORD *)&aP3[4] = &stru_830620[78200];
  v242 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3432) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v242,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258h) = *(_BYTE *)(v4 + 3385);
  *(_DWORD *)&aP3[8] = ecx258h;
  *(_DWORD *)&aP3[4] = &stru_830620[78180];
  v244 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3385) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v244,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258g) = *(_BYTE *)(v4 + 3386);
  *(_DWORD *)&aP3[8] = edx258g;
  *(_DWORD *)&aP3[4] = &stru_830620[78168];
  v246 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3386) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v246,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258h) = *(_BYTE *)(v4 + 3384);
  *(_DWORD *)&aP3[8] = eax258h;
  *(_DWORD *)&aP3[4] = &stru_830620[78152];
  v248 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3384) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v248,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258i) = *(_BYTE *)(v4 + 3381);
  *(_DWORD *)&aP3[8] = ecx258i;
  *(_DWORD *)&aP3[4] = &stru_830620[78132];
  v250 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3381) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v250,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258h) = *(_BYTE *)(v4 + 3382);
  *(_DWORD *)&aP3[8] = edx258h;
  *(_DWORD *)&aP3[4] = &stru_830620[78108];
  v252 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3382) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v252,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v262; // eax
  LOBYTE(v262) = *(_BYTE *)(v4 + 3478);
  *(_DWORD *)&aP3[8] = v262;
  *(_DWORD *)&aP3[4] = &stru_830620[78088];
  v254 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3478) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v254,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx258j) = *(_BYTE *)(v4 + 3374);
  *(_DWORD *)&aP3[8] = ecx258j;
  *(_DWORD *)&aP3[4] = &stru_830620[78076];
  v256 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3374) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v256,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258i) = *(_BYTE *)(v4 + 3479);
  *(_DWORD *)&aP3[8] = edx258i;
  *(_DWORD *)&aP3[4] = &stru_830620[78068];
  v258 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3479) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v258,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax258j) = *(_BYTE *)(v4 + 3387);
  *(_DWORD *)&aP3[8] = eax258j;
  *(_DWORD *)&aP3[4] = &stru_830620[78052];
  v260 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3387) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v260,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3436);
  *(_DWORD *)&aP3[4] = &stru_830620[78028];
  v261 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3436) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v261,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  int v271; // edx
  LOBYTE(v271) = *(_BYTE *)(v4 + 3480);
  *(_DWORD *)&aP3[8] = v271;
  *(_DWORD *)&aP3[4] = &stru_830620[78016];
  v263 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3480) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v263,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3440);
  *(_DWORD *)&aP3[4] = &stru_830620[78000];
  v264 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3440) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v264,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3444);
  *(_DWORD *)&aP3[4] = &stru_830620[77984];
  v265 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3444) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v265,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3448);
  *(_DWORD *)aP3 = &stru_830620[77968];
  v266 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3448) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v266,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3452);
  *(_DWORD *)aP3 = &stru_830620[77952];
  v267 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3452) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v267,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3456);
  *(_DWORD *)&aP3[4] = &stru_830620[77936];
  v268 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3456) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v268,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3460);
  *(_DWORD *)aP3 = &stru_830620[77920];
  v269 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3460) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v269,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3464);
  *(_DWORD *)aP3 = &stru_830620[77904];
  v270 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3464) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v270,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  int v280; // eax
  LOBYTE(v280) = *(_BYTE *)(v4 + 3468);
  *(_DWORD *)&aP3[8] = v280;
  *(_DWORD *)&aP3[4] = &stru_830620[77884];
  v272 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3468) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v272,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3472);
  *(_DWORD *)&aP3[4] = &stru_830620[77864];
  v273 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3472) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v273,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(edx258k) = *(_BYTE *)(v4 + 3476);
  *(_DWORD *)&aP3[8] = edx258k;
  *(_DWORD *)&aP3[4] = &stru_830620[77856];
  v275 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3476) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v275,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v285; // eax
  LOBYTE(v285) = *(_BYTE *)(v4 + 3477);
  *(_DWORD *)&aP3[8] = v285;
  *(_DWORD *)&aP3[4] = &stru_830620[77844];
  v277 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3477) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v277,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v287; // ecx
  LOBYTE(v287) = *(_BYTE *)(v4 + 1728);
  *(_DWORD *)&aP3[8] = v287;
  *(_DWORD *)&aP3[4] = &stru_830620[77824];
  v279 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1728) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v279,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v289; // edx
  LOBYTE(v289) = *(_BYTE *)(v4 + 1729);
  *(_DWORD *)&aP3[8] = v289;
  *(_DWORD *)&aP3[4] = &stru_830620[77796];
  v281 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 1729) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v281,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v291; // eax
  LOBYTE(v291) = *(_BYTE *)(v4 + 3234);
  *(_DWORD *)&aP3[8] = v291;
  *(_DWORD *)&aP3[4] = &stru_830620[77780];
  v283 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3234) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v283,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77764];
  v284 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258n = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v284,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((_DWORD *)(v4 + 3236), eax258n);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77740];
  v286 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258o = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v286,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((_DWORD *)(v4 + 3236), eax258o);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77720];
  v288 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258p = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v288,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((_DWORD *)(v4 + 3236), eax258p);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77700];
  v290 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v300 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v290, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((_DWORD *)(v4 + 3236), v300);
  qmemcpy((void *)(v4 + 3256), (const void *)(v4 + 3236), 0x14u);
  *(_DWORD *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77684];
  v292 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v302 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v292, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((_DWORD *)(v4 + 3256), v302);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77660];
  v294 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258s = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v294,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((_DWORD *)(v4 + 3256), eax258s);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77640];
  v296 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258t = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (unsigned __int8 *)v296,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((_DWORD *)(v4 + 3256), eax258t);
  *(_DWORD *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((_DWORD *)(v4 + 3236));
  *(_DWORD *)&aP3[4] = &stru_830620[77620];
  v298 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v308 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v298, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((_DWORD *)(v4 + 3256), v308);
  LOBYTE(ecx258l) = *(_BYTE *)(v4 + 3371);
  *(_DWORD *)&aP3[8] = ecx258l;
  *(_DWORD *)&aP3[4] = &stru_830620[77600];
  v301 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3371) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v301,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(edx258m) = *(_BYTE *)(v4 + 3517);
  *(_DWORD *)&aP3[8] = edx258m;
  *(_DWORD *)&aP3[4] = &stru_830620[77588];
  v303 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v303,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3520);
  *(_DWORD *)&aP3[4] = &stru_830620[77576];
  v304 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v304,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3524);
  *(_DWORD *)&aP3[4] = &stru_830620[77560];
  v305 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v305,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3528);
  *(_DWORD *)&aP3[4] = &stru_830620[77544];
  v306 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_DWORD *)(v4 + 3528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (unsigned __int8 *)v306,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 3532);
  *(_DWORD *)&aP3[4] = &stru_830620[77528];
  v307 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v317 = INIClass::ReadInt_Overwrite((int)aP0, (unsigned __int8 *)v307, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 668;
  *(_DWORD *)&aP3[4] = &stru_830620[77508];
  *(_DWORD *)(v4 + 3532) = v317;
  v309 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  Abilities = (CCINIClass *)INIEntry::ReadAbilities(
                              (unsigned __int8 ***)aP0,
                              (CCINIClass *)&aP2.unknown30,
                              (CCINIClass *)v309,
                              *(unsigned __int8 **)&aP3[4],
                              *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((_DWORD *)(v4 + 668), (WeaponTypeClass *)aP2.sectionHead, Abilities);
  nullsub_86();
  nullsub_86();
  *(_DWORD *)&aP3[8] = v4 + 686;
  *(_DWORD *)&aP3[4] = &stru_830620[77492];
  v311 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v321 = (CCINIClass *)INIEntry::ReadAbilities(
                         (unsigned __int8 ***)aP0,
                         (CCINIClass *)&aP2.unknown30,
                         (CCINIClass *)v311,
                         *(unsigned __int8 **)&aP3[4],
                         *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((_DWORD *)(v4 + 686), (WeaponTypeClass *)aP2.sectionHead, v321);
  nullsub_86();
  nullsub_86();
  if ( *(double *)(v4 + 712) == 0.0 )
  {
    *(_DWORD *)aP2[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4160);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4164);
  }
  else
  {
    eax260 = *(_DWORD *)(v4 + 716);
    *(_DWORD *)aP2[0] = *(_DWORD *)(v4 + 712);
    aP2.headNode[0] = eax260;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2[0];
  *(_DWORD *)aP3 = &stru_830620[77464];
  v314 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 712) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v314,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 720) == 0.0 )
  {
    *(_DWORD *)aP2[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4168);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4172);
  }
  else
  {
    int v324 = *(_DWORD *)(v4 + 724);
    *(_DWORD *)aP2[0] = *(_DWORD *)(v4 + 720);
    aP2.headNode[0] = v324;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2[0];
  *(_DWORD *)aP3 = &stru_830620[77432];
  v316 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 720) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v316,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 728) == 0.0 )
  {
    *(_DWORD *)aP2[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4176);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4180);
  }
  else
  {
    int v326 = *(_DWORD *)(v4 + 732);
    *(_DWORD *)aP2[0] = *(_DWORD *)(v4 + 728);
    aP2.headNode[0] = v326;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2[0];
  *(_DWORD *)aP3 = &stru_830620[77400];
  v318 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 728) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v318,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 736) == 0.0 )
  {
    *(_DWORD *)aP2[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4184);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4188);
  }
  else
  {
    v319 = *(CCINIClass **)(v4 + 740);
    *(_DWORD *)aP2[0] = *(_DWORD *)(v4 + 736);
    aP2.headNode[0] = (int)v319;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2[0];
  *(_DWORD *)aP3 = &stru_830620[77372];
  v320 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 736) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v320,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 744) == 0.0 )
  {
    *(_DWORD *)aP2[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4192);
    aP2.headNode[0] = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4196);
  }
  else
  {
    ecx272 = *(_DWORD *)(v4 + 748);
    *(_DWORD *)aP2[0] = *(_DWORD *)(v4 + 744);
    aP2.headNode[0] = ecx272;
  }
  *(_DWORD *)&aP3[8] = aP2.headNode[0];
  *(_DWORD *)&aP3[4] = *(_DWORD *)aP2[0];
  *(_DWORD *)aP3 = &stru_830620[77344];
  v322 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 744) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v322,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  edx273 = *(_DWORD *)(v4 + 704);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 708);
  *(_DWORD *)&aP3[4] = edx273;
  *(_DWORD *)aP3 = &stru_830620[77324];
  v323 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 704) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v323,
                            *(unsigned __int8 **)aP3,
                            *(INIClass **)&aP3[4]);
  LOBYTE(eax273) = *(_BYTE *)(v4 + 3516);
  *(_DWORD *)&aP3[8] = eax273;
  *(_DWORD *)&aP3[4] = &stru_830620[77300];
  v325 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (unsigned __int8 *)v325,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(ecx273) = *(_BYTE *)(v4 + 3500);
  *(_DWORD *)&aP3[8] = ecx273;
  *(_DWORD *)&aP3[4] = &stru_830620[77288];
  v327 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(_BYTE *)(v4 + 3500) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v327,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_BYTE *)(v4 + 3228) = 0;
  v328 = *(ObjectClass **)(v4 + 2200);
  if ( v328 && v328->location[2] > 0 )
    *(_BYTE *)(v4 + 3228) = 1;
  *(_DWORD *)&aP3[8] = Ext;
  v329 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  _makepath(aP4[32], 0, 0, (ObjectClass *)v329, *(const char **)&aP3[8]);
  if ( *(_BYTE *)(v4 + 168) && *(_DWORD *)(v4 + 164) )
  {
    __3_YAXPAX_Z(*(void **)(v4 + 164));
    *(_DWORD *)(v4 + 164) = 0;
    *(_BYTE *)(v4 + 168) = 0;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 7 )
  {
    LOBYTE(v340) = 0;
    *(_DWORD *)(v4 + 164) = SearchMIXFile(aP4[32], v340);
  }
  *(_DWORD *)&aP3[8] = 32;
  *(_DWORD *)&aP3[4] = v4 + 3536;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_824238.sectionCount;
  v330 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374[44556],
    v330,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717820(v4);
  if ( FileSystem::ProcessNextFileExtension() > 1 )
  {
    *(_DWORD *)&aP3[8] = &stru_830620[77216];
    Debug::Log();
    ExitProgram((void *)0xFFFFFFFF);
  }
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1824);
  *(_DWORD *)&aP3[4] = &stru_830620[77200];
  v331 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 1824) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (unsigned __int8 *)v331,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1816);
  *(_DWORD *)&aP3[4] = &stru_830620[77188];
  v332 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 1816) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (unsigned __int8 *)v332,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  int v344; // ecx
  LOBYTE(v344) = *(_BYTE *)(v4 + 3279);
  *(_DWORD *)&aP3[8] = v344;
  *(_DWORD *)&aP3[4] = &stru_830620[77176];
  v334 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3279) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v334,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v346; // edx
  LOBYTE(v346) = *(_BYTE *)(v4 + 3363);
  *(_DWORD *)&aP3[8] = v346;
  *(_DWORD *)&aP3[4] = &unk_818610;
  v336 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3363) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v336,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  LOBYTE(eax283) = *(_BYTE *)(v4 + 3365);
  *(_DWORD *)&aP3[8] = eax283;
  *(_DWORD *)&aP3[4] = &stru_830620[77164];
  v338 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3365) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v338,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2044);
  *(_DWORD *)&aP3[4] = &stru_830620[77152];
  v339 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_DWORD *)(v4 + 2044) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (unsigned __int8 *)v339,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  LOBYTE(edx283b) = *(_BYTE *)(v4 + 3518);
  *(_DWORD *)&aP3[8] = edx283b;
  *(_DWORD *)&aP3[4] = &stru_830620[77132];
  v341 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(_BYTE *)(v4 + 3518) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v341,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v353; // eax
  LOBYTE(v353) = *(_BYTE *)(v4 + 3519);
  *(_DWORD *)&aP3[8] = v353;
  *(_DWORD *)&aP3[4] = &stru_830620[77112];
  v343 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  al283 = INIClass::ReadBool_Overwrite(
            (int)&stru_87C374[44556],
            (unsigned __int8 *)v343,
            *(CCINIClass **)&aP3[4],
            aP3[8]);
  *(_DWORD *)&aP3[8] = 25;
  *(_DWORD *)&aP3[4] = &aP4;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[77104];
  *(_BYTE *)(v4 + 3519) = al283;
  v345 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374[44556],
    v345,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( !strlen(aP4[0]) )
    goto LABEL_286;
  char * v358 = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  *(_DWORD *)&aP3[8] = Ext;
  strcpy(v358, aP4[0]);
  v347 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  _makepath(aP4[32], 0, 0, (ObjectClass *)v347, *(const char **)&aP3[8]);
  if ( !*(_DWORD *)(v4 + 1776) )
  {
    LOBYTE(v360) = 0;
    *(_DWORD *)(v4 + 1776) = SearchMIXFile(aP4[32], v360);
LABEL_286:
    if ( !*(_DWORD *)(v4 + 1776) )
    {
      LOBYTE(edx283) = 0;
      *(_DWORD *)(v4 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, edx283);
    }
  }
  *(_DWORD *)&aP3[8] = 25;
  *(_DWORD *)&aP3[4] = &aP4;
  *(_DWORD *)aP3 = &stru_87C374[56304];
  *(_DWORD *)&v412.IsInitialized = &stru_830620[77092];
  v348 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (unsigned __int8 ***)&stru_87C374[44556],
    v348,
    *(unsigned __int8 **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( strlen(aP4[0]) )
  {
    edx289a = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    *(_DWORD *)&aP3[8] = Ext;
    strcpy(edx289a, aP4[0]);
    v350 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    _makepath(aP4[32], 0, 0, (ObjectClass *)v350, *(const char **)&aP3[8]);
    if ( !*(_DWORD *)(v4 + 1808) )
    {
      LOBYTE(edx289) = 0;
      *(_DWORD *)(v4 + 1808) = SearchMIXFile(aP4[32], edx289);
    }
  }
  if ( HouseClass::HasPower((_DWORD *)v4) )
  {
    if ( *(int *)(v4 + 2060) > 0 )
    {
      aP2.headNode[2] = 1;
      v351 = (WeaponTypeClass *)(v4 + 2204);
      do
      {
        sprintf(
          (char *const)aP2.sectionHead,
          (ObjectClass *)&stru_830620[81136],
          (INIClass *)aP2.headNode[2]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77084], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351;
        *(_DWORD *)&aP3[4] = String;
        v352 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        Point3D_Overwrite = INIClass::ReadPoint3D_Overwrite(
                              &stru_87C374[44556],
                              (CCINIClass *)&aP2.unknown30,
                              (unsigned __int8 *)v352,
                              *(int *)&aP3[4],
                              *(_DWORD **)&aP3[8]);
        *(_DWORD *)v351->__pad_0 = *Point3D_Overwrite;
        *(_DWORD *)&v351->__pad_0[4] = Point3D_Overwrite[1];
        *(_DWORD *)&v351->__pad_0[8] = Point3D_Overwrite[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77068], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = *(_DWORD *)&v351->__pad_0[12];
        *(_DWORD *)&aP3[4] = String;
        v354 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351->__pad_0[12] = INIClass::ReadInt_Overwrite(
                                          (int)&stru_87C374[44556],
                                          (unsigned __int8 *)v354,
                                          *(CCINIClass **)&aP3[4],
                                          *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77048], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351->uniqueId;
        *(_DWORD *)&aP3[4] = String;
        v355 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351->uniqueId = INIClass::ReadInt_Overwrite(
                           (int)&stru_87C374[44556],
                           (unsigned __int8 *)v355,
                           *(CCINIClass **)&aP3[4],
                           *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77032], (INIClass *)aP2.sectionHead);
        LOBYTE(edx294) = v351->abstractFlags;
        *(_DWORD *)&aP3[8] = edx294;
        *(_DWORD *)&aP3[4] = String;
        v357 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        al294 = INIClass::ReadBool_Overwrite(
                  (int)&stru_87C374[44556],
                  (unsigned __int8 *)v357,
                  *(CCINIClass **)&aP3[4],
                  aP3[8]);
        *(_DWORD *)&aP3[8] = aP2.headNode[2];
        *(_DWORD *)&aP3[4] = &stru_830620[81120];
        *(_DWORD *)aP3 = aP2.sectionHead;
        LOBYTE(v351->abstractFlags) = al294;
        sprintf(*(char *const *)aP3, *(ObjectClass **)&aP3[4], *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77084], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351;
        *(_DWORD *)&aP3[4] = String;
        v359 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v374; // eax
        v374 = INIClass::ReadPoint3D_Overwrite(
                 &stru_87C374[44556],
                 &aP2,
                 (unsigned __int8 *)v359,
                 *(int *)&aP3[4],
                 *(_DWORD **)&aP3[8]);
        *(_DWORD *)&v351[1].CellRangefinding = *v374;
        *(_DWORD *)&v351[1].TerrainFire = v374[1];
        v351[1].DisguiseFakeBlinkTime = v374[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77068], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = *(_DWORD *)&v351->__pad_0[12];
        *(_DWORD *)&aP3[4] = String;
        v361 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351[1].InfiniteMindControl = INIClass::ReadInt_Overwrite(
                                                    (int)&stru_87C374[44556],
                                                    (unsigned __int8 *)v361,
                                                    *(CCINIClass **)&aP3[4],
                                                    *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77048], (INIClass *)aP2.sectionHead);
        *(_DWORD *)&aP3[8] = v351->uniqueId;
        *(_DWORD *)&aP3[4] = String;
        v362 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(_DWORD *)&v351[1].Suicide = INIClass::ReadInt_Overwrite(
                                        (int)&stru_87C374[44556],
                                        (unsigned __int8 *)v362,
                                        *(CCINIClass **)&aP3[4],
                                        *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77032], (INIClass *)aP2.sectionHead);
        LOBYTE(edx294a) = v351->abstractFlags;
        *(_DWORD *)&aP3[8] = edx294a;
        *(_DWORD *)&aP3[4] = String;
        v364 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351[1].Charges = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (unsigned __int8 *)v364,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
        v365 = *(CCINIClass **)(v4 + 2060);
        ++aP2.headNode[2];
        v351 = (WeaponTypeClass *)((char *)v351 + 28);
      }
      while ( aP2.headNode[2] - 1 < (int)v365 );
    }
  }
  else
  {
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = &stru_830620[77016];
    v366 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296 = INIClass::ReadPoint3D_Overwrite(
               &stru_87C374[44556],
               (CCINIClass *)&aP2.unknown30,
               (unsigned __int8 *)v366,
               *(int *)&aP3[4],
               *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2204) = *eax296;
    *(_DWORD *)(v4 + 2208) = eax296[1];
    *(_DWORD *)(v4 + 2212) = eax296[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2216);
    *(_DWORD *)&aP3[4] = &stru_830620[77000];
    v368 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2216) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v368,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2220);
    *(_DWORD *)&aP3[4] = &stru_830620[76980];
    v369 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2220) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v369,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2232;
    *(_DWORD *)&aP3[4] = &stru_830620[76960];
    v370 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v385; // eax
    v385 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v370,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2232) = *v385;
    *(_DWORD *)(v4 + 2236) = v385[1];
    *(_DWORD *)(v4 + 2240) = v385[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2244);
    *(_DWORD *)&aP3[4] = &stru_830620[76944];
    v372 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2244) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v372,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2248);
    *(_DWORD *)&aP3[4] = &stru_830620[76924];
    v373 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296b = INIClass::ReadInt_Overwrite(
                (int)&stru_87C374[44556],
                (unsigned __int8 *)v373,
                *(CCINIClass **)&aP3[4],
                *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = &stru_830620[76904];
    *(_DWORD *)(v4 + 2248) = eax296b;
    v375 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296c = INIClass::ReadPoint3D_Overwrite(
                &stru_87C374[44556],
                (CCINIClass *)&aP2.unknown30,
                (unsigned __int8 *)v375,
                *(int *)&aP3[4],
                *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2712) = *eax296c;
    *(_DWORD *)(v4 + 2716) = eax296c[1];
    *(_DWORD *)(v4 + 2720) = eax296c[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2216);
    *(_DWORD *)&aP3[4] = &stru_830620[76884];
    v377 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2724) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v377,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2220);
    *(_DWORD *)&aP3[4] = &stru_830620[76860];
    v378 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2728) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v378,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = v4 + 2232;
    *(_DWORD *)&aP3[4] = &stru_830620[76836];
    v379 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v394; // eax
    v394 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v379,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    *(_DWORD *)(v4 + 2740) = *v394;
    *(_DWORD *)(v4 + 2744) = v394[1];
    *(_DWORD *)(v4 + 2748) = v394[2];
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2244);
    *(_DWORD *)&aP3[4] = &stru_830620[76816];
    v381 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2752) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v381,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 2248);
    *(_DWORD *)&aP3[4] = &stru_830620[76792];
    v382 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(_DWORD *)(v4 + 2756) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (unsigned __int8 *)v382,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
  }
  v392 = 0;
  aP2.headNode[2] = v4 + 2140;
  do
  {
    sprintf((char *const)aP2.sectionHead, (ObjectClass *)&stru_830620[76776], v392);
    *(_DWORD *)&aP3[8] = v4 + 2204;
    *(_DWORD *)&aP3[4] = aP2.sectionHead;
    v384 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v399; // eax
    v399 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (unsigned __int8 *)v384,
             *(int *)&aP3[4],
             *(_DWORD **)&aP3[8]);
    int v400 = aP2.headNode[2];
    v392 = (INIClass *)((char *)v392 + 1);
    *(_DWORD *)aP2.headNode[2] = *v399;
    *(_DWORD *)(v400 + 4) = v399[1];
    *(_DWORD *)(v400 + 8) = v399[2];
    v401 = v400 + 12;
    aP2.headNode[2] = v401;
  }
  while ( (int)v392 < 5 );
  LOBYTE(v401) = *(_BYTE *)(v4 + 2052);
  *(_DWORD *)&aP3[8] = v401;
  *(_DWORD *)&aP3[4] = &stru_830620[76748];
  v388 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v403 = INIClass::ReadBool_Overwrite(
           (int)&stru_87C374[44556],
           (unsigned __int8 *)v388,
           *(CCINIClass **)&aP3[4],
           aP3[8]);
  *(_DWORD *)&aP3[8] = v4 + 3504;
  *(_DWORD *)&aP3[4] = &stru_830620[76728];
  *(_BYTE *)(v4 + 2052) = v403;
  v390 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v405 = INIClass::ReadPoint3D_Overwrite(
           &stru_87C374[44556],
           (CCINIClass *)&aP2.unknown30,
           (unsigned __int8 *)v390,
           *(int *)&aP3[4],
           *(_DWORD **)&aP3[8]);
  *(_DWORD *)(v4 + 3504) = *v405;
  *(_DWORD *)(v4 + 3508) = v405[1];
  *(_DWORD *)(v4 + 3512) = v405[2];
  *(_DWORD *)&aP3[8] = *(_DWORD *)(v4 + 1460);
  *(_DWORD *)&aP3[4] = &stru_830620[76712];
  eax299c = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  TypeMember_5474E40 = ObjectTypeClass::loadTypeMember_5474E40(
                         (unsigned __int8 ***)aP0,
                         eax299c,
                         *(unsigned __int8 **)&aP3[4],
                         *(int *)&aP3[8]);
  *(_DWORD *)(v4 + 1460) = TypeMember_5474E40;
  *(_BYTE *)(v4 + 3372) = TypeMember_5474E40 == 6;
  if ( *(_BYTE *)(v4 + 566) )
  {
    VoxelAnimType::LoadAnim((char *)v4);
  }
  else if ( *(_BYTE *)(v4 + 3233) )
  {
    Turret::LoadVoxelTurretAndBarrel((void *)v4);
  }
  v408 = *(_BYTE **)(v4 + 176);
  if ( v408 )
  {
    if ( ObjectTypeClass::loadTypeMember_5717AE0(v408) )
    {
      Info = VoxelSection::GetInfo(*(_DWORD **)(v4 + 176), 0, 0);
      *(_DWORD *)&aP3[8] = 0;
      v410 = *(unsigned __int8 *)(Info + 161);
      *(_DWORD *)&aP3[4] = 0;
      *(_DWORD *)aP2[0] = v410;
      *(double *)(v4 + 864) = (double)v410 * 0.5 + 0.5;
      *(_DWORD *)aP2[0] = *(unsigned __int8 *)(VoxelSection::GetInfo(
                                                      *(_DWORD **)(v4 + 176),
                                                      *(SomeVoxelCache **)&aP3[4],
                                                      *(SomeVoxelCache **)&aP3[8])
                                                  + 160);
      *(double *)(v4 + 872) = (double)*(int *)aP2[0] * 0.5;
    }
  }
  return 1;
}

}

// 0x7170A0
int ObjectTypeClass::DeserializeArrays()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int *v20; // [esp+10h] [ebp+8h]
  _DWORD *v19; // [esp+Ch] [ebp+4h]
  result = COMObject::GetSizeMaxWrapper((int)v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    int v2 = 4 * v19[265] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    int v3 = v2 + 4 * v19[272] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    int v4 = v3 + 4 * v19[279] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    int v5 = v4 + 4 * v19[286] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    int v6 = v5 + 4 * v19[293] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    int v7 = v6 + 4 * v19[300] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    int v8 = v7 + 4 * v19[307] + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    int v9 = v8 + 4 * v19[314] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    int v10 = v9 + 4 * v19[321] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    int v11 = v10 + 4 * v19[328] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    int v12 = v11 + 4 * v19[463] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    int v13 = v12 + 4 * v19[470] + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    int v14 = v13 + 4 * v19[201] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    int v15 = v14 + 4 * v19[373] + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    int v16 = v15 + 4 * v19[254] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    int v17 = v16 + 4 * v19[208] + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    int v18 = v17 + 4 * v19[482] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[489] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}
}

// 0x717820
int ObjectTypeClass::loadTypeMember_5717820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v2; // eax
  LOBYTE(v2) = *(_BYTE *)(this + 3536); /*0x717823*/
  const char * v3 = (const char *)(this + 3536); /*0x717829*/
  if ( (_BYTE)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(_DWORD *)(this + 3568) = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}
}

// 0x717C00
unsigned int * ObjectTypeClass::loadTypeMember_5717C00(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this == a2 ) /*0x717c0a*/
    return this; /*0x717c0a*/
  this->vt_entry_68(); /*0x717c0e*/
  int v3 = a2[2]; /*0x717c11*/
  this->vtable3 = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    this->vtable2 = 0; /*0x717c5a*/
    *((_BYTE *)this + 13) = 0; /*0x717c61*/
    return this; /*0x717c65*/
  }
  void * v4 = __2_YAPAXI_Z(4 * v3); /*0x717c23*/
  this->vtable2 = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return this; /*0x717c30*/
  int v5 = this->vtable3; /*0x717c32*/
  int v6 = 0; /*0x717c35*/
  *((_BYTE *)this + 13) = 1; /*0x717c39*/
  if ( v5 <= 0 ) /*0x717c3d*/
    return this; /*0x717c3d*/
  do /*0x717c51*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < this->vtable3 ); /*0x717c51*/
  return this; /*0x717c55*/
}
}

// 0x41CBF0
unsigned int * ObjectTypeClass::vt_entry_7C(unsigned int * a1)
{
{
    int v1;
    v1 = 2 * DataGlobal_889F58;
    *a1 = 256;
    *((int*)(a1) + 1) = 256;
    *((int*)(a1) + 2) = v1;
    return a1;
}
}

// 0x41CF80
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{
{
    *a0 = *(int *)aP1->__pad_0;
    *((int*)(a0) + 1) = *(int *)&aP1->__pad_0[4];
    *((int*)(a0) + 2) = *(int *)&aP1->__pad_0[8];
    return a0;
}
}

// 0x474690
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{
{
    char Buffer[32];
    sprintf(Buffer, g_Str_Trace__d, 360 * a4 / 256);
    return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer);
}
}

// 0x4746E0
int ObjectTypeClass::ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4)
{
{
    char String[32];
    if ( INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, String, 32) )
    return (atoi(String) << 8) / 360;
    else
    return a4;
}
}

// 0x474740
unsigned char ** ObjectTypeClass::ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5)
{
{
    char Buffer[64];
    if ( INIClass::GetString(this, a3, a4, &g_INI_DefaultBuffer, Buffer, 64) )
  {
    sscanf(Buffer, g_Str_Trace__d__d, &a4, &a3);
    HIWORD(a4) = (short)a3;
    *a2 = a4;
    return a2;
  }
    else
  {
    *a2 = *a5;
    return a2;
  }
}
}

// 0x4747C0
char ObjectTypeClass::ReadBool2(INIClass * Block, INIClass * aP2, short * a4)
{
{
    INIClass Buffer;
    sprintf(Buffer[0], g_INI_Key_Digest[32], *a4, *((int*)(a4) + 1));
    return INIClass::SetString(this, Block, aP2, &Buffer);
}
}

// 0x4749E0
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{
{
    INIClass *v5;
    char Destination[32];
    v5 = (INIClass *)sub_473960(a4);
    INIClass::GetString(this, (INIClass *)aP1, a2, v5, (INIClass *)Destination, 32);
    return ObjectTypeClass::loadTypeMember_473980(Destination);
}
}

// 0x474D50
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{
{
    INIClass Buffer;
    sprintf(Buffer[0], (const char *const)&DataGlobal_818994.sectionCount, *a4, *((int*)(a4) + 1), *((int*)(a4) + 2));
    return INIClass::SetString(this, Block, aP2, &Buffer);
}
}

// 0x474E40
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, aP1, a2, *(&DataGlobal_81BA88 + a4), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_81BA88;
    while ( _strcmpi(Destination, *(char **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 4);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_81BABC )
    return -1;
  }
    return v4;
}
}

// 0x474FA0
int ObjectTypeClass::ReadDouble(unsigned char * a2, unsigned char * a3, int a4)
{
{
    char Destination[100];
    INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 100);
    if ( strlen(Destination) )
    return VocClass::FindByName(Destination);
    else
    return a4;
}
}

// 0x474FF0
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4)
{
{
    INIClass *Name;
    char Destination[32];
    Name = (INIClass *)AbstractType::FindName(a4);
    INIClass::GetString(this, aP1, a2, Name, (INIClass *)Destination, 32);
    return StringTable::Lookup(Destination);
}
}

// 0x475060
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned char * a2, void * a4)
{
{
    INIClass *v5;
    char Destination[32];
    v5 = (INIClass *)sub_45DD20(a4);
    INIClass::GetString(this, aP1, a2, v5, (INIClass *)Destination, 32);
    return sub_45DD50(Destination);
}
}

// 0x476240
char ObjectTypeClass::ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3)
{
{
    int i;
    int v5;
    int v6;
    CCINIClass *v8;
    char v9;
    char *v10;
    char Source[509];
    short v12;
    char v13;
    v10 = this;
    Source[0] = DataGlobal_87C374[56304];
    memset(&Source[1], 0, 0x1FCu);
    v12 = 0;
    v13 = 0;
    for ( i = 0; i < aP3->uniqueId; ++i )
  {
    if ( Source[0] )
    strcat(Source, (const char *)&DataGlobal_817F40.nextObject);
    v5 = *(int *)&aP3->__pad_0[4];
    v9 = 0;
    v6 = *(int *)(v5 + 4 * i);
    v9 = HIBYTE(v6);
    v8 = (CCINIClass *)(v6 & 0xFFFFFF);
    strcat(Source, (const char *)(System_Read_6E7330(&v8) + 36));
  }
    return INIClass::SetString(v10, (INIClass *)Block, (INIClass *)a2, (INIClass *)Source);
}
}

// 0x476FC0
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    INIClass *v5;
    INIClass Destination[2];
    v5 = (INIClass *)sub_48E030((unsigned int)aP3);
    if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) )
    return ObjectTypeClass::loadTypeMember_48DFF0(Destination);
    else
    return (int)aP3->__pad_0;
}
}

// 0x477590
int ObjectTypeClass::loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    char *v4;
    ObjectClass *result;
    bool v6;
    INIClass String[2];
    INIClass::GetString(this, (INIClass *)aP1, a2, *(&DataGlobal_81BABC + (int)aP3), String, 128);
    v4 = strtok(String[0].__pad_0, Delimiter[0]);
    result = (ObjectClass *)_strcmpi(v4, g_INI_Key_None);
    if ( result )
  {
    if ( _strcmpi(v4, (char *)&DataGlobal_81BB58.headNode[1]) )
    {
    v6 = _strcmpi(v4, aStrong) == 0;
    result = (ObjectClass *)2;
    if ( !v6 )
    return (int)aP3->__pad_0;
    }
    else
    {
    return 1;
    }
  }
    return (int)result->__pad_0;
}
}

// 0x48DFF0
int ObjectTypeClass::loadTypeMember_48DFF0()
{
{
    int v2;
    const void **v3;
    if ( !this )
    return -1;
    v2 = 0;
    v3 = (const void **)&DataGlobal_81DA58;
    while ( _strcmpi(*v3, this) )
  {
    ++v3;
    ++v2;
    if ( (int)v3 >= (int)DataGlobal_81DA78 )
    return -1;
  }
    return v2;
}
}

// 0x5F1C30
int ObjectTypeClass::CreateInstance(CampaignScore * aP1, CampaignScore * aP2)
{
{
    if ( this->zero_3C )
    return (*(int (__thiscall **)(int, CampaignScore *, CampaignScore *))(**(int **)(this + 56) + 16))( this->TargetStrengthCoefficient, aP1, aP2);
    else
    return 0;
}
}

// 0x5F61A0
void ObjectTypeClass::ReleaseWaveAndString()
{
{
    void *v2;
    void **v3;
    v2 = (void *)*(void**)this;
    if ( *(void**)this )
  {
    WaveClass::Destroy(*(void**)this);
    __3_YAXPAX_Z(v2);
  }
    v3 = (void **)this->unused_9B;
    *(void**)this = 0;
    if ( v3 )
  {
    String::Release(v3);
    __3_YAXPAX_Z(v3);
  }
    this->unused_9B = 0;
}
}

// 0x5F75C0
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
{
    *a1 = 10;
    *((int*)(a1) + 1) = 10;
    *((int*)(a1) + 2) = 10;
    return a1;
}
}

// 0x5F8080
void ObjectTypeClass::CleanupWeapons()
{
{
    char *v1;
    int v2;
    void *v3;
    void **v4;
    void *v5;
    void *v6;
    v1 = this + 204;
    v2 = 18;
    do
  {
    v3 = (void *)*((int *)v1 - 1);
    if ( v3 )
    {
    WaveClass::Destroy(*((int *)v1 - 1));
    __3_YAXPAX_Z(v3);
    *((int *)v1 - 1) = 0;
    }
    v4 = *(void ***)v1;
    if ( *(int *)v1 )
    {
    String::Release(*(void ***)v1);
    __3_YAXPAX_Z(v4);
    *(int *)v1 = 0;
    }
    v5 = (void *)*((int *)(v1) + 35);
    if ( v5 )
    {
    WaveClass::Destroy(*((int *)(v1) + 35));
    __3_YAXPAX_Z(v5);
    *((int *)(v1) + 35) = 0;
    }
    v6 = (void *)*((int *)(v1) + 36);
    if ( v6 )
    {
    String::Release(*((void ***)(v1) + 36));
    __3_YAXPAX_Z(v6);
    *((int *)(v1) + 36) = 0;
    }
    v1 += 8;
    --v2;
  }
    while ( v2 );
}
}

// 0x5F9AE0
ObjectTypeClass * ObjectTypeClass::Destru_vt08(char a2)
{
{
    ObjectTypeClass::Destruct((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectTypeClass *)this;
}
}

// 0x5F9B60
int ObjectTypeClass::FreeLoaderBuffer()
{
{
    __3_YAXPAX_Z(*(void **)this);
    *(int *)this = 0;
    this->vtable1 = 0;
    this->vtable2 = 0;
    this->vtable3 = 0;
    this->uniqueId = 0;
    return 0;
}
}

// 0x6E5E70
int ObjectTypeClass::FindByName()
{
{
    int v2;
    int v3;
    if ( !this )
    return 0;
    v2 = 0;
    if ( *(int *)&DataGlobal_B05488[37640] <= 0 )
    return 0;
    while ( 1 )
  {
    v3 = *(int *)(*(int *)&DataGlobal_B05488[37628] + 4 * v2);
    if ( !_strcmpi((const void *)(v3 + 36), this) || !_strcmpi((const void *)(v3 + 100), this) )
    break;
    if ( ++v2 >= *(int *)&DataGlobal_B05488[37640] )
    return 0;
  }
    return v3;
}
}

// 0x7179D0
int ObjectTypeClass::loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2)
{
{
    if ( this != (int *)aP2 )
  {
    *(void**)this = *(int *)aP2->__pad_0;
    this->vtable1 = aP2->headNode[0];
    this->vtable2 = aP2->headNode[1];
    this->vtable3 = aP2->headNode[2];
    this->uniqueId = aP2->sectionHead[0];
  }
    *(int *)aP1->__pad_0 = *(void**)this;
    *(int *)&aP1->__pad_0[4] = this->vtable1;
    *(int *)&aP1->__pad_0[8] = this->vtable2;
    *(int *)&aP1->__pad_0[12] = this->vtable3;
    LOWORD(aP1->uniqueId) = (unsigned short)this->uniqueId;
    return (int)aP1->__pad_0;
}
}

// 0x717A30
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{
{
    *(void**)this = a2;
    return a2;
}
}

// 0x717A50
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->unused_9B = result;
    return result;
}
}

// 0x717A70
int ObjectTypeClass::loadTypeMember_5717A70()
{
{
    return this->unused_9B;
}
}

// 0x717A80
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->vtable2 = result;
    return result;
}
}

// 0x717AA0
int ObjectTypeClass::loadTypeMember_5717AA0()
{
{
    return this->Armor;
}
}

// 0x717AB0
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{
{
    int result;
    result = a2;
    if ( a2 <= 0 )
    result = 1;
    this->vtable3 = result;
    return result;
}
}

// 0x717AD0
int ObjectTypeClass::loadTypeMember_5717AD0()
{
{
    return this->Strength;
}
}

// 0x717AE0
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{
{
    return *(void**)this == 0;
}
}

// 0x717BF0
unsigned int * ObjectTypeClass::CheckFlag(ObjectTypeClass * aP1)
{
{
    *(void**)this = &vt_DynamicVectorClass_AnimTypeClass_const;
    return this;
}
}

// 0x71CB90
int ObjectTypeClass::ReadDestroyAnim()
{
{
    int result;
    int i;
    int v4;
    int v5;
    char v6[4];
    char Buffer[12];
    INIClass::ClearSection((int)this, (INIClass *)aTerrain, 0);
    result = *(int *)&g_NetworkPlayerBuffer[4956];
    for ( i = 0; i < *(int *)&g_NetworkPlayerBuffer[4956]; ++i )
  {
    v4 = *(int *)(*(int *)&g_NetworkPlayerBuffer[4944] + 4 * i);
    if ( v4 && !*(char *)(v4 + 129) )
    {
    if ( *(char *)(v4 + 144) )
      {
    v5 = *(int *)(*(int (__thiscall **)(int, char *))(*(int *)(v4) + 440))(v4, v6);
    sprintf(Buffer, g_Str_Trace__d, (short)v5 + 1000 * SHIWORD(v5));
    INIClass::SetString(this, (INIClass *)aTerrain, (INIClass *)Buffer, (INIClass *)(*(int *)(v4 + 200) + 36));
      }
    }
    result = *(int *)&g_NetworkPlayerBuffer[4956];
  }
    return result;
}
}
