// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x41CBF0
unsigned int * ObjectTypeClass::vt_entry_7C(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall ObjectTypeClass::vt_entry_7C(_DWORD *a1)
{
  int v1; // esi

  v1 = 2 * MEMORY[0x889F58]; /*0x41cbfc*/
  *a1 = 256; /*0x41cc07*/
  a1[1] = 256; /*0x41cc09*/
  a1[2] = v1; /*0x41cc0c*/
  return a1; /*0x41cc0f*/
}
}

// 0x41CF80
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall ObjectTypeClass::Copy(_DWORD *a0, ObjectTypeClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x41cf8d*/
  a0[1] = *(_DWORD *)&aP1->__pad_0[4]; /*0x41cf92*/
  a0[2] = *(_DWORD *)&aP1->__pad_0[8]; /*0x41cf99*/
  return a0; /*0x41cf95*/
}
}

// 0x46C790
BulletTypeClass * ObjectTypeClass::FindOrCreate(ObjectClass * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BulletTypeClass *__thiscall ObjectTypeClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  _BYTE *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( (int)g_BulletTypeInitState <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    v3 = (_BYTE *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return (BulletTypeClass *)BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)&dword_A83C84->__pad_0[4 * v2] + 36), Source) ) /*0x46c7da*/
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
int __thiscall ObjectTypeClass::loadTypeMember_473980(void *this)
{
  int v2; // edi
  ObjectClass *v3; // esi

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  v2 = 0; /*0x473989*/
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

// 0x474690
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectTypeClass::ReadBool(char *this, INIClass *Block, INIClass *aP2, int a4)
{
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, MEMORY[0x817F6C], 360 * a4 / 256); /*0x4746ba*/
  return INIClass::SetString(this, Block, aP2, (INIClass *)Buffer); /*0x4746d8*/
}
}

// 0x4746E0
int ObjectTypeClass::ReadPrerequisite(unsigned signed char * a2, unsigned signed char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4746E0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], String, 32) ) /*0x4746f9*/
    return (atoi(String) << 8) / 360; /*0x474727*/
  else
    return a4; /*0x47472f*/
}
}

// 0x474740
namespace gamemd {
int ObjectTypeClass_ReadSoundList()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned __int8 **__thiscall sub_474740(
        unsigned __int8 ***this,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5)
{
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  if ( INIClass::GetString(this, a3, a4, &MEMORY[0x889F64], Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, MEMORY[0x81C000], &a4, &a3); /*0x474776*/
    HIWORD(a4) = (_WORD)a3; /*0x47478e*/
    *a2 = a4; /*0x47479a*/
    return a2; /*0x474785*/
  }
  else
  {
    *a2 = *a5; /*0x4747ac*/
    return a2; /*0x4747a6*/
  }
}
}
} // namespace gamemd

// 0x4747C0
char ObjectTypeClass::ReadBool2(INIClass * Block, INIClass * aP2, short * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectTypeClass::ReadBool2(char *this, INIClass *Block, INIClass *aP2, __int16 *a4)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, g_INI_Key_Digest.__pad_20, *a4, a4[1]); /*0x4747dd*/
  return INIClass::SetString(this, Block, aP2, &Buffer); /*0x4747fb*/
}
}

// 0x474940
namespace gamemd {
int ObjectTypeClass_loadTypeMember_5474940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_5474940(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        int a4)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( (int)INIClass::GetString( /*0x474962*/
              this,
              (INIClass *)aP1,
              a2,
              (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
              (INIClass *)Destination,
              32) <= 0 )
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
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
} // namespace gamemd

// 0x4749E0
namespace gamemd {
int ObjectTypeClass_loadTypeMember_54749E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_54749E0(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        unsigned int a4)
{
  INIClass *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = (INIClass *)sub_473960(a4); /*0x4749f1*/
  INIClass::GetString(this, (INIClass *)aP1, a2, v5, (INIClass *)Destination, 32); /*0x474a03*/
  return ObjectTypeClass::loadTypeMember_473980(Destination); /*0x474a11*/
}
}
} // namespace gamemd

// 0x474D50
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned signed char * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectTypeClass::ReadString(char *this, INIClass *Block, INIClass *aP2, unsigned __int8 *a4)
{
  INIClass Buffer; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer.__pad_0, (const char *const)&MEMORY[0x818994].sectionCount, *a4, a4[1], a4[2]); /*0x474d75*/
  return INIClass::SetString(this, Block, aP2, &Buffer); /*0x474d93*/
}
}

// 0x474E40
namespace gamemd {
int ObjectTypeClass_loadTypeMember_5474E40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_5474E40(
        unsigned __int8 ***this,
        INIClass *aP1,
        unsigned __int8 *a2,
        int a4)
{
  int v4; // edi
  ObjectClass *v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, aP1, a2, *(&off_81BA88 + a4), (INIClass *)Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = (ObjectClass *)&off_81BA88; /*0x474e69*/
  while ( _strcmpi(Destination, *(char **)v5->__pad_0) ) /*0x474e80*/
  {
    v5 = (ObjectClass *)((char *)v5 + 4); /*0x474e82*/
    ++v4; /*0x474e85*/
    if ( (int)v5 >= (int)&off_81BABC ) /*0x474e8c*/
      return -1; /*0x474e96*/
  }
  return v4; /*0x474e8e*/
}
}
} // namespace gamemd

// 0x474F50
int ObjectTypeClass::ReadInt(unsigned signed char * a2, unsigned signed char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_474F50(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
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
    v4 = (char *)(*((_DWORD *)MEMORY[0xA8E334] + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString(this, a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read(Destination); /*0x474f93*/
}
}

// 0x474FA0
int ObjectTypeClass::ReadDouble(unsigned signed char * a2, unsigned signed char * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_474FA0(unsigned __int8 ***this, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  char Destination[100]; // [esp+4h] [ebp-64h] BYREF

  INIClass::GetString(this, a2, a3, &MEMORY[0x889F64], Destination, 100); /*0x474fba*/
  if ( strlen(Destination) ) /*0x474fc3*/
    return VocClass::FindByName(Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}
}

// 0x474FF0
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned signed char * a2, void * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::ReadDouble2(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, void *a4)
{
  INIClass *Name; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  Name = (INIClass *)AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString(this, aP1, a2, Name, (INIClass *)Destination, 32); /*0x475013*/
  return StringTable::Lookup(Destination); /*0x475021*/
}
}

// 0x475060
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned signed char * a2, void * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::ReadBool3(unsigned __int8 ***this, INIClass *aP1, unsigned __int8 *a2, void *a4)
{
  INIClass *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = (INIClass *)sub_45DD20(a4); /*0x475071*/
  INIClass::GetString(this, aP1, a2, v5, (INIClass *)Destination, 32); /*0x475083*/
  return sub_45DD50(Destination); /*0x475091*/
}
}

// 0x476240
char ObjectTypeClass::ReadTypeListINI(unsigned signed char * Block, char * a2, ObjectTypeClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectTypeClass::ReadTypeListINI(char *this, unsigned __int8 *Block, char *a2, ObjectTypeClass *aP3)
{
  int i; // ebp
  int v5; // eax
  int v6; // ecx
  CCINIClass *v8; // [esp+Ch] [ebp-20Ch] BYREF
  char v9; // [esp+10h] [ebp-208h]
  char *v10; // [esp+14h] [ebp-204h]
  _BYTE Source[509]; // [esp+18h] [ebp-200h] BYREF
  __int16 v12; // [esp+215h] [ebp-3h]
  char v13; // [esp+217h] [ebp-1h]

  v10 = this; /*0x47624d*/
  Source[0] = stru_87C374.__pad_579C[33876]; /*0x476252*/
  memset(&Source[1], 0, 0x1FCu); /*0x476268*/
  v12 = 0; /*0x47626a*/
  v13 = 0; /*0x47626c*/
  for ( i = 0; i < aP3->uniqueId; ++i ) /*0x476274*/
  {
    if ( Source[0] ) /*0x476281*/
      strcat(Source, (const char *)&stru_817F40.nextObject); /*0x4762a8*/
    v5 = *(_DWORD *)&aP3->__pad_0[4]; /*0x4762b1*/
    v9 = 0; /*0x4762b4*/
    v6 = *(_DWORD *)(v5 + 4 * i); /*0x4762bc*/
    v9 = HIBYTE(v6); /*0x4762c6*/
    v8 = (CCINIClass *)(v6 & 0xFFFFFF); /*0x4762ce*/
    strcat(Source, (const char *)(System_Read_6E7330(&v8) + 36)); /*0x4762fa*/
  }
  return INIClass::SetString(v10, (INIClass *)Block, (INIClass *)a2, (INIClass *)Source); /*0x47632e*/
}
}

// 0x476FC0
namespace gamemd {
int ObjectTypeClass_loadTypeMember_476FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_476FC0(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  INIClass *v5; // eax
  INIClass Destination[2]; // [esp+8h] [ebp-80h] BYREF

  v5 = (INIClass *)sub_48E030((unsigned int)aP3); /*0x476fdd*/
  if ( INIClass::GetString(this, (INIClass *)aP1, a2, v5, Destination, 128) ) /*0x476ff5*/
    return ObjectTypeClass::loadTypeMember_48DFF0(Destination); /*0x477002*/
  else
    return (int)aP3->__pad_0; /*0x477012*/
}
}
} // namespace gamemd

// 0x477590
namespace gamemd {
int ObjectTypeClass_loadTypeMember_5477590()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_5477590(
        unsigned __int8 ***this,
        CCINIClass *aP1,
        unsigned __int8 *a2,
        CCINIClass *aP3)
{
  char *v4; // esi
  ObjectClass *result; // eax
  bool v6; // zf
  INIClass String[2]; // [esp+8h] [ebp-80h] BYREF

  INIClass::GetString(this, (INIClass *)aP1, a2, *(&off_81BABC + (_DWORD)aP3), String, 128); /*0x4775c1*/
  v4 = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x4775d5*/
  result = (ObjectClass *)_strcmpi(v4, MEMORY[0x817F64]); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)&stru_81BB58.headNode[1]) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4, aStrong) == 0; /*0x477624*/
      result = (ObjectClass *)2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return (int)aP3->__pad_0; /*0x47762d*/
    }
    else
    {
      return 1; /*0x477607*/
    }
  }
  return (int)result->__pad_0; /*0x4775e9*/
}
}
} // namespace gamemd

// 0x48DFF0
int ObjectTypeClass::loadTypeMember_48DFF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_48DFF0(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = (const void **)&unk_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, this) ) /*0x48e00e*/
  {
    ++v3; /*0x48e010*/
    ++v2; /*0x48e013*/
    if ( (int)v3 >= (int)off_81DA78 ) /*0x48e01a*/
      return -1; /*0x48e01a*/
  }
  return v2; /*0x48e01c*/
}
}

// 0x5F1C30
int ObjectTypeClass::CreateInstance(CampaignScore * aP1, CampaignScore * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::CreateInstance(int this, CampaignScore *aP1, CampaignScore *aP2)
{
  if ( *(_DWORD *)(this + 60) ) /*0x5f1c30*/
    return (*(int (__thiscall **)(_DWORD, CampaignScore *, CampaignScore *))(**(_DWORD **)(this + 56) + 16))( /*0x5f1c4b*/
             *(_DWORD *)(this + 56),
             aP1,
             aP2);
  else
    return 0; /*0x5f1c37*/
}
}

// 0x5F61A0
void ObjectTypeClass::ReleaseWaveAndString()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ObjectTypeClass_ReleaseWaveAndString(int *this)
{
  void *v2; // edi
  void **v3; // edi

  v2 = (void *)*this; /*0x5f61a4*/
  if ( *this ) /*0x5f61a4*/
  {
    WaveClass::Destroy(*this); /*0x5f61ac*/
    __3_YAXPAX_Z(v2); /*0x5f61b2*/
  }
  v3 = (void **)*(this + 1); /*0x5f61ba*/
  *this = 0; /*0x5f61bd*/
  if ( v3 ) /*0x5f61c5*/
  {
    String::Release(v3); /*0x5f61c9*/
    __3_YAXPAX_Z(v3); /*0x5f61cf*/
  }
  *(this + 1) = 0; /*0x5f61d7*/
}
}

// 0x5F7090
int ObjectTypeClass::ConstructFull(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::ConstructFull(int this, AbstractClass *aP1)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  AbstractTypeClass::Constructor(this, aP1); /*0x5f709c*/
  v3 = (_DWORD *)(this + 200); /*0x5f70a3*/
  *(_BYTE *)(this + 152) = 0; /*0x5f70a9*/
  *(_BYTE *)(this + 153) = 0; /*0x5f70af*/
  *(_BYTE *)(this + 154) = 0; /*0x5f70b5*/
  this->Armor = 0; /*0x5f70bb*/
  this->Strength = 0; /*0x5f70c1*/
  this->Image = 0; /*0x5f70c7*/
  this->ImageAllocated = 0; /*0x5f70cd*/
  this->AlphaImage = 0; /*0x5f70d3*/
  this->MainVoxel = 0; /*0x5f70d9*/
  this->TurretVoxel = 0; /*0x5f70df*/
  this->BarrelVoxel = 0; /*0x5f70e5*/
  *(_DWORD *)(this + 188) = 0; /*0x5f70eb*/
  *(_DWORD *)(this + 192) = 0; /*0x5f70f1*/
  *(_DWORD *)(this + 196) = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = (_DWORD *)(this + 344); /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *(_BYTE *)(this + 488) = 0; /*0x5f712e*/
  this->MaxDimension = 0; /*0x5f7134*/
  this->CrushSound = -1; /*0x5f713a*/
  this->AmbientSound = -1; /*0x5f7140*/
  *(_BYTE *)(this + 504) = 0; /*0x5f7146*/
  this->AlternateArcticArt = 0; /*0x5f7148*/
  this->ArcticArtInUse = 0; /*0x5f714e*/
  *(_BYTE *)(this + 531) = 0; /*0x5f7156*/
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
  *(_BYTE *)(this + 571) = 0x80; /*0x5f71b8*/
  *(_BYTE *)(this + 572) = 0x80; /*0x5f71be*/
  *(_BYTE *)(this + 573) = 0x80; /*0x5f71c4*/
  this->LineTrailColorDecrement = 16; /*0x5f71ca*/
  *(_DWORD *)(this + 580) = 0; /*0x5f71d4*/
  *(_DWORD *)(this + 584) = 0; /*0x5f71da*/
  *(_DWORD *)(this + 588) = 0; /*0x5f71e0*/
  *(_BYTE *)(this + 592) = 0; /*0x5f71e6*/
  *(_DWORD *)(this + 596) = 0; /*0x5f71ec*/
  *(_DWORD *)(this + 600) = 0; /*0x5f71f2*/
  *(_DWORD *)(this + 604) = 0; /*0x5f71f8*/
  *(_DWORD *)(this + 608) = 0; /*0x5f71fe*/
  *(_BYTE *)(this + 612) = 0; /*0x5f7204*/
  *(_DWORD *)(this + 616) = 0; /*0x5f720a*/
  *(_DWORD *)(this + 620) = 0; /*0x5f7213*/
  *(_DWORD *)(this + 624) = 0; /*0x5f7219*/
  *(_DWORD *)(this + 628) = 0; /*0x5f721f*/
  *(_BYTE *)(this + 632) = 0; /*0x5f7225*/
  *(_DWORD *)(this + 636) = 0; /*0x5f722b*/
  *(_DWORD *)(this + 640) = 0; /*0x5f7231*/
  *(_DWORD *)(this + 644) = 0; /*0x5f7237*/
  *(_DWORD *)(this + 648) = 0; /*0x5f723d*/
  *(_BYTE *)(this + 652) = 0; /*0x5f7243*/
  *(_DWORD *)(this + 656) = 0; /*0x5f7249*/
  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f7251*/
  this->unused_9B = &ObjectTypeClass::`vftable'; /*0x5f7258*/
  this->Armor = &ObjectTypeClass::`vftable'; /*0x5f725f*/
  this->Strength = &ObjectTypeClass::`vftable'; /*0x5f7266*/
  if ( this + 36 != this + 504 ) /*0x5f726d*/
    qmemcpy((void *)(this + 504), (const void *)(this + 36), 0x19u); /*0x5f7274*/
  if ( &MEMORY[0x87F8E4] == (MouseClass *)-42624 ) /*0x5f727e*/
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  else
  {
    strncpy(Destination, &MEMORY[0x87F8E4].__pad_5568[20760], 0x18u); /*0x5f7292*/
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
    v7 = (int)*(&g_MatrixTransformState + 2438); /*0x5f72fb*/
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
_DWORD *__thiscall ObjectTypeClass::Construct(_DWORD *this, ObjectTypeClass *aP1)
{
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x5f7328*/
  v3 = this + 50; /*0x5f732f*/
  *(this + 41) = 0; /*0x5f7335*/
  v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  v5 = this + 86; /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *v5 = 0; /*0x5f7356*/
    v5[1] = 0; /*0x5f7358*/
    v5 += 2; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  *(this + 145) = 0; /*0x5f7361*/
  *(this + 146) = 0; /*0x5f7367*/
  *(this + 147) = 0; /*0x5f736d*/
  *((_BYTE *)this + 592) = 0; /*0x5f7373*/
  *(this + 149) = 0; /*0x5f7379*/
  *(this + 150) = 0; /*0x5f737f*/
  *(this + 151) = 0; /*0x5f7385*/
  *(this + 152) = 0; /*0x5f738b*/
  *((_BYTE *)this + 612) = 0; /*0x5f7391*/
  *(this + 154) = 0; /*0x5f7397*/
  *(this + 155) = 0; /*0x5f739d*/
  *(this + 156) = 0; /*0x5f73a3*/
  *(this + 157) = 0; /*0x5f73a9*/
  *((_BYTE *)this + 632) = 0; /*0x5f73af*/
  *(this + 159) = 0; /*0x5f73b5*/
  *(this + 160) = 0; /*0x5f73bb*/
  *(this + 161) = 0; /*0x5f73c1*/
  *(this + 162) = 0; /*0x5f73c7*/
  *((_BYTE *)this + 652) = 0; /*0x5f73cd*/
  *(this + 164) = 0; /*0x5f73d3*/
  *this = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
  *(this + 1) = &ObjectTypeClass::`vftable'; /*0x5f73df*/
  *(this + 2) = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
  *(this + 3) = &ObjectTypeClass::`vftable'; /*0x5f73ed*/
  return this; /*0x5f73f6*/
}
}

// 0x5F7400
int ObjectTypeClass::Destruct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::Destruct(int this)
{
  int v2; // eax
  int *v3; // edi
  int v4; // ebx
  int *v5; // edi
  int v6; // ebx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)this = &ObjectTypeClass::`vftable'; /*0x5f740b*/
  this->unused_9B = &ObjectTypeClass::`vftable'; /*0x5f7411*/
  this->Armor = &ObjectTypeClass::`vftable'; /*0x5f7418*/
  this->Strength = &ObjectTypeClass::`vftable'; /*0x5f741f*/
  v8 = this; /*0x5f7431*/
  v2 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xAC1418] + 16))(&MEMORY[0xAC1418], &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < MEMORY[0xAC1428] && v2 < --MEMORY[0xAC1428] ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((_DWORD *)MEMORY[0xAC141C] + v2 - 1) = *((_DWORD *)MEMORY[0xAC141C] + v2); /*0x5f745c*/
    }
    while ( v2 < MEMORY[0xAC1428] ); /*0x5f7468*/
  }
  if ( this->ImageAllocated && this->Image ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(*(void **)(this + 164)); /*0x5f7481*/
    this->Image = 0; /*0x5f7489*/
    this->ImageAllocated = 0; /*0x5f748f*/
  }
  ObjectTypeClass::CleanupWeapons((char *)this); /*0x5f7497*/
  __3_YAXPAX_Z(*(void **)(this + 640)); /*0x5f74a3*/
  *(_DWORD *)(this + 640) = 0; /*0x5f74a8*/
  *(_DWORD *)(this + 644) = 0; /*0x5f74ae*/
  *(_DWORD *)(this + 648) = 0; /*0x5f74b4*/
  *(_BYTE *)(this + 652) = 0; /*0x5f74ba*/
  *(_DWORD *)(this + 656) = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(*(void **)(this + 620)); /*0x5f74cd*/
  *(_DWORD *)(this + 620) = 0; /*0x5f74d2*/
  *(_DWORD *)(this + 624) = 0; /*0x5f74d8*/
  *(_DWORD *)(this + 628) = 0; /*0x5f74de*/
  *(_BYTE *)(this + 632) = 0; /*0x5f74e4*/
  *(_DWORD *)(this + 636) = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(*(void **)(this + 600)); /*0x5f74f7*/
  *(_DWORD *)(this + 600) = 0; /*0x5f74fc*/
  *(_DWORD *)(this + 604) = 0; /*0x5f7502*/
  *(_DWORD *)(this + 608) = 0; /*0x5f7508*/
  *(_BYTE *)(this + 612) = 0; /*0x5f750e*/
  *(_DWORD *)(this + 616) = 0; /*0x5f7514*/
  __3_YAXPAX_Z(*(void **)(this + 580)); /*0x5f7521*/
  *(_DWORD *)(this + 580) = 0; /*0x5f7526*/
  *(_DWORD *)(this + 584) = 0; /*0x5f752c*/
  *(_DWORD *)(this + 588) = 0; /*0x5f7532*/
  *(_BYTE *)(this + 592) = 0; /*0x5f7538*/
  *(_DWORD *)(this + 596) = 0; /*0x5f753e*/
  v3 = (int *)(this + 488); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 -= 2; /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (int *)(this + 344); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
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

// 0x5F75C0
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall Struct_InitTripleTen(_DWORD *a1)
{
  *a1 = 10; /*0x5f75cd*/
  a1[1] = 10; /*0x5f75d3*/
  a1[2] = 10; /*0x5f75d6*/
  return a1; /*0x5f75d9*/
}
}

// 0x5F77F0
void ObjectTypeClass::UnloadPipsSHP()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ObjectTypeClass::UnloadPipsSHP()
{
  int v0; // eax
  void *v1; // ebp
  int v2; // edx
  int v3; // eax
  char *v4; // esi
  int v5; // edi
  int v6; // eax
  void *v7; // ebp
  int v8; // edx
  int v9; // eax
  char *v10; // esi
  int v11; // edi
  int v12; // eax
  void *v13; // ebp
  int v14; // edx
  int v15; // eax
  char *v16; // esi
  int v17; // edi
  int v18; // eax
  void *v19; // ebp
  int v20; // edx
  int v21; // eax
  char *v22; // esi
  int v23; // edi

  if ( MEMORY[0xAC1488] ) /*0x5f77fd*/
  {
    if ( MEMORY[0xAC1478] ) /*0x5f7807*/
    {
      v0 = *(_DWORD *)(MEMORY[0xAC1478] - 4); /*0x5f7809*/
      v1 = (void *)(MEMORY[0xAC1478] - 4); /*0x5f780c*/
      v2 = 9 * v0; /*0x5f780f*/
      v3 = v0 - 1; /*0x5f7812*/
      v4 = (char *)(MEMORY[0xAC1478] + 4 * v2); /*0x5f7813*/
      if ( v3 >= 0 ) /*0x5f7816*/
      {
        v5 = v3 + 1; /*0x5f7818*/
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
    MEMORY[0xAC1488] = 0; /*0x5f7831*/
  }
  if ( MEMORY[0xAC1489] ) /*0x5f783d*/
  {
    if ( MEMORY[0xAC147C] ) /*0x5f7847*/
    {
      v6 = *(_DWORD *)(MEMORY[0xAC147C] - 4); /*0x5f7849*/
      v7 = (void *)(MEMORY[0xAC147C] - 4); /*0x5f784c*/
      v8 = 9 * v6; /*0x5f784f*/
      v9 = v6 - 1; /*0x5f7852*/
      v10 = (char *)(MEMORY[0xAC147C] + 4 * v8); /*0x5f7853*/
      if ( v9 >= 0 ) /*0x5f7856*/
      {
        v11 = v9 + 1; /*0x5f7858*/
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
    MEMORY[0xAC1489] = 0; /*0x5f7871*/
  }
  if ( MEMORY[0xAC148A] ) /*0x5f787d*/
  {
    if ( MEMORY[0xAC1480] ) /*0x5f7887*/
    {
      v12 = *(_DWORD *)(MEMORY[0xAC1480] - 4); /*0x5f7889*/
      v13 = (void *)(MEMORY[0xAC1480] - 4); /*0x5f788c*/
      v14 = 9 * v12; /*0x5f788f*/
      v15 = v12 - 1; /*0x5f7892*/
      v16 = (char *)(MEMORY[0xAC1480] + 4 * v14); /*0x5f7893*/
      if ( v15 >= 0 ) /*0x5f7896*/
      {
        v17 = v15 + 1; /*0x5f7898*/
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
    MEMORY[0xAC148A] = 0; /*0x5f78b1*/
  }
  if ( MEMORY[0xAC148B] ) /*0x5f78bd*/
  {
    if ( MEMORY[0xAC1484] ) /*0x5f78c7*/
    {
      v18 = *(_DWORD *)(MEMORY[0xAC1484] - 4); /*0x5f78c9*/
      v19 = (void *)(MEMORY[0xAC1484] - 4); /*0x5f78cc*/
      v20 = 9 * v18; /*0x5f78cf*/
      v21 = v18 - 1; /*0x5f78d2*/
      v22 = (char *)(MEMORY[0xAC1484] + 4 * v20); /*0x5f78d3*/
      if ( v21 >= 0 ) /*0x5f78d6*/
      {
        v23 = v21 + 1; /*0x5f78d8*/
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
    MEMORY[0xAC148B] = 0; /*0x5f78f1*/
  }
}
}

// 0x5F8080
void ObjectTypeClass::CleanupWeapons()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ObjectTypeClass::CleanupWeapons(char *this)
{
  char *v1; // esi
  int v2; // ebp
  void *v3; // edi
  void **v4; // edi
  void *v5; // edi
  void *v6; // edi

  v1 = this + 204; /*0x5f8084*/
  v2 = 18; /*0x5f808a*/
  do /*0x5f8107*/
  {
    v3 = (void *)*((_DWORD *)v1 - 1); /*0x5f8091*/
    if ( v3 ) /*0x5f8096*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 - 1)); /*0x5f809a*/
      __3_YAXPAX_Z(v3); /*0x5f80a0*/
      *((_DWORD *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(_DWORD *)v1 ) /*0x5f80ab*/
    {
      String::Release(*(void ***)v1); /*0x5f80b3*/
      __3_YAXPAX_Z(v4); /*0x5f80b9*/
      *(_DWORD *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((_DWORD *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      WaveClass::Destroy(*((_DWORD *)v1 + 35)); /*0x5f80cf*/
      __3_YAXPAX_Z(v5); /*0x5f80d5*/
      *((_DWORD *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((_DWORD *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      String::Release(*((void ***)v1 + 36)); /*0x5f80ef*/
      __3_YAXPAX_Z(v6); /*0x5f80f5*/
      *((_DWORD *)v1 + 36) = 0; /*0x5f80fd*/
    }
    v1 += 8; /*0x5f8103*/
    --v2; /*0x5f8106*/
  }
  while ( v2 ); /*0x5f8107*/
}
}

// 0x5F9070
int ObjectTypeClass::Load2DArt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::Load2DArt(char *this)
{
  char *v2; // edi
  int v3; // esi
  char v4; // al
  char v5; // dl
  int v6; // edx
  int v7; // eax
  char v8; // dl
  int v9; // eax
  int result; // eax
  __int16 v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( *(this + 529) && *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 && !*(this + 168) ) /*0x5f9096*/
  {
    if ( !*(this + 530) ) /*0x5f90a0*/
    {
      v2 = this + 504; /*0x5f90ab*/
      sprintf(Buffer, MEMORY[0x832AE8], this + 504); /*0x5f90bf*/
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
        *(this + 528) = v13; /*0x5f9107*/
      }
      *(this + 530) = 1; /*0x5f9108*/
    }
  }
  else
  {
    *(this + 530) = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, this + 504, Ext); /*0x5f912e*/
  if ( *(this + 556) ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, this + 504, (const char *)&off_7E1BC6 + 112 * *((_DWORD *)MEMORY[0xA8B230] + 1174)); /*0x5f9169*/
  }
  else if ( *(this + 567) ) /*0x5f9173*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8B230] + 1174); /*0x5f9183*/
    if ( v3 != -1 ) /*0x5f918c*/
    {
      v4 = Source; /*0x5f918e*/
      v5 = v15; /*0x5f9198*/
      if ( Source >= 65 && Source <= 90 ) /*0x5f919e*/
        v4 = Source + 32; /*0x5f91a0*/
      if ( v15 >= 65 && v15 <= 90 ) /*0x5f91aa*/
        v5 = v15 + 32; /*0x5f91af*/
      if ( (v4 == 103 || v4 == 110 || v4 == 99 || v4 == 121) && (v5 == 97 || v5 == 116) ) /*0x5f91c9*/
        v15 = byte_7E1BCE[112 * v3]; /*0x5f91dd*/
    }
  }
  if ( *(this + 168) && this->Image ) /*0x5f91eb*/
    __3_YAXPAX_Z(*((void **)this + 41)); /*0x5f91f6*/
  v6 = *(_DWORD *)this; /*0x5f91fe*/
  this->Image = 0; /*0x5f9203*/
  *(this + 168) = 0; /*0x5f920d*/
  if ( (*(int (__thiscall **)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->Image = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) != 30 /*0x5f9241*/
    && (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) != 37 )
  {
    v7 = SearchMIXFile(&Source, 0); /*0x5f9249*/
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
char ObjectTypeClass::LoadFromINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ObjectTypeClass::LoadFromINI(char *this, CCINIClass *aP1)
{
  int v3; // edi
  int Index; // eax
  int v5; // edi
  int v6; // eax
  char v7; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char v16; // cl
  char v17; // al
  int Coord; // eax
  char v19; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char v23; // cl
  char v24; // al
  char v25; // al
  char v27; // [esp-Ch] [ebp-1B8h]
  char v28; // [esp-Ch] [ebp-1B8h]
  CCINIClass *v29; // [esp-Ch] [ebp-1B8h]
  char v30; // [esp-Ch] [ebp-1B8h]
  char v31; // [esp-Ch] [ebp-1B8h]
  CCINIClass *v32; // [esp-Ch] [ebp-1B8h]
  char v33; // [esp-Ch] [ebp-1B8h]
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
  *(_DWORD *)v34.__pad_0 = strcpy((char *)v34.headNode, this + 531); /*0x5f9366*/
  INIClass::GetString( /*0x5f9386*/
    (unsigned __int8 ***)aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620.__pad_14B0[4400],
    (INIClass *)v34.headNode,
    (INIClass *)(this + 531),
    25);
  v3 = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (unsigned __int8 ***)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620.__pad_14B0[4388],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         (INIClass *)v34.__pad_20,
         128) )
  {
    Index = VocClass::FindIndex(v34.__pad_20); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      v3 = Index; /*0x5f93bf*/
  }
  this->CrushSound = v3; /*0x5f93d5*/
  v5 = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (unsigned __int8 ***)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620.__pad_14B0[4372],
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          (INIClass *)v34.__pad_20,
          128)
    || (v6 = VocClass::FindIndex(v34.__pad_20), v6 == -1) )
  {
    v6 = v5; /*0x5f93fb*/
  }
  v7 = *(this + 557); /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5f9412*/
                     (int)aP1,
                     (unsigned __int8 *)this + 36,
                     (CCINIClass *)&stru_830620.__pad_14B0[4360],
                     v7);
  v27 = *(this + 558); /*0x5f941f*/
  *(this + 557) = Bool_Overwrite; /*0x5f9426*/
  *(this + 558) = INIClass::ReadBool_Overwrite( /*0x5f9431*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4348],
                    v27);
  v9 = INIClass::ReadBool_Overwrite( /*0x5f9446*/
         (int)aP1,
         (unsigned __int8 *)this + 36,
         (CCINIClass *)&stru_830620.__pad_14B0[4336],
         *(this + 488));
  v10 = *(this + 529); /*0x5f944b*/
  *(this + 488) = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite( /*0x5f9460*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4316],
          v10);
  v28 = *(this + 559); /*0x5f946d*/
  *(this + 529) = v11; /*0x5f9474*/
  *(this + 559) = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4300],
                    v28);
  v12 = INIClass::ReadBool_Overwrite( /*0x5f9494*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4288],
          *(this + 560));
  v13 = *(this + 561); /*0x5f9499*/
  *(this + 560) = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite( /*0x5f94ae*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4276],
          v13);
  v29 = (CCINIClass *)this->Armor; /*0x5f94bb*/
  *(this + 561) = v14; /*0x5f94c2*/
  this->Armor = ArmorType::FindIndex( /*0x5f94cd*/
                             (unsigned __int8 ***)aP1,
                             (CCINIClass *)(this + 36),
                             (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
                             (int)v29);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5f94e2*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4264],
                    *((INIClass **)this + 40));
  v16 = *(this + 563); /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite( /*0x5f94fc*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4256],
          v16);
  v30 = *(this + 562); /*0x5f9509*/
  *(this + 563) = v17; /*0x5f9510*/
  *(this + 562) = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4240],
                    v30);
  *(this + 568) = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                    (int)aP1,
                    (unsigned __int8 *)this + 36,
                    (CCINIClass *)&stru_830620.__pad_14B0[4220],
                    *(this + 568));
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (unsigned __int8 ***)aP1,
            &v34,
            (INIClass *)(this + 36),
            (Color *)&stru_830620.__pad_14B0[4208],
            (Color *)this + 38);
  v19 = *(this + 569); /*0x5f9557*/
  *((_WORD *)this + 76) = *(_WORD *)Coord; /*0x5f955d*/
  *(this + 154) = *(_BYTE *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite( /*0x5f956f*/
          (int)aP1,
          (unsigned __int8 *)this + 36,
          (CCINIClass *)&stru_830620.__pad_14B0[4188],
          v19);
  v31 = *(this + 570); /*0x5f9580*/
  *(this + 569) = v20; /*0x5f958c*/
  *(this + 570) = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                    (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                    (unsigned __int8 *)this + 504,
                    (CCINIClass *)&stru_830620.__pad_14B0[4172],
                    v31);
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
          &v34,
          (INIClass *)(this + 504),
          (Color *)&stru_830620.__pad_14B0[4156],
          (Color *)(this + 571));
  *(_WORD *)(this + 571) = *(_WORD *)v21; /*0x5f95bc*/
  v32 = (CCINIClass *)this->LineTrailColorDecrement; /*0x5f95cd*/
  *(this + 573) = *(_BYTE *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620.__pad_14B0[4132],
          (INIClass *)v32);
  v23 = *(this + 556); /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          &unk_818658,
          v23);
  v33 = *(this + 567); /*0x5f9604*/
  *(this + 556) = v24; /*0x5f960b*/
  *(this + 567) = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                    (int)&MEMORY[0x87F8E4].__pad_5568[9012],
                    (unsigned __int8 *)this + 504,
                    &unk_81864C,
                    v33);
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int)&MEMORY[0x87F8E4].__pad_5568[9012],
          (unsigned __int8 *)this + 504,
          (CCINIClass *)&stru_830620.__pad_14B0[4124],
          *(this + 566));
  *(this + 566) = v25; /*0x5f9634*/
  if ( !v25 && (*(int (__thiscall **)(char *))(*(_DWORD *)this + 44))(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt(this); /*0x5f964d*/
  if ( *(this + 531) ) /*0x5f9652*/
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
void __thiscall ObjectTypeClass_SetRTTI71(_BYTE *this)
{
  *(this + 1) = 71; /*0x5f9710*/
}
}

// 0x5F9720
int ObjectTypeClass::LoadCleanup(IUnknown * aP0, ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall ObjectTypeClass::LoadCleanup(IUnknown *aP0, ObjectTypeClass *aP1)
{
  void *v2; // ebp
  void **v3; // ebp
  void *v4; // ebp
  void **v5; // ebp
  void *v6; // ebp
  void **v7; // ebp
  int result; // eax
  char *v9; // eax
  int v10; // ecx
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
  v2 = *(void **)&aP0->__pad_A8[8]; /*0x5f9777*/
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
  v4 = *(void **)&aP0->__pad_A8[16]; /*0x5f97b1*/
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
  v6 = *(void **)&aP0->__pad_A8[24]; /*0x5f97f1*/
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
    v9 = &aP0->__pad_A8[36]; /*0x5f98e4*/
    v10 = 18; /*0x5f98ea*/
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

// 0x5F9AE0
ObjectTypeClass * ObjectTypeClass::Destru_vt08(void * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectTypeClass *__thiscall ObjectTypeClass::Destru_vt08(void *Block, char a2)
{
  ObjectTypeClass::Destruct((int)Block); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    __3_YAXPAX_Z(Block); /*0x5f9af0*/
  return (ObjectTypeClass *)Block; /*0x5f9afa*/
}
}

// 0x5F9B60
int ObjectTypeClass::FreeLoaderBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::FreeLoaderBuffer(int this)
{
  __3_YAXPAX_Z(*(void **)this); /*0x5f9b66*/
  *(_DWORD *)this = 0; /*0x5f9b70*/
  this->unused_9B = 0; /*0x5f9b72*/
  this->Armor = 0; /*0x5f9b75*/
  *(_BYTE *)(this + 12) = 0; /*0x5f9b78*/
  this->uniqueId = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/
}
}

// 0x6E5E70
int ObjectTypeClass::FindByName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::FindByName(void *this)
{
  int v2; // ebx
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  v2 = 0; /*0x6e5e7e*/
  if ( *(int *)&stru_B05488.__pad_579C[15212] <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15200] + 4 * v2); /*0x6e5e8a*/
    if ( !_strcmpi((const void *)(v3 + 36), this) || !_strcmpi((const void *)(v3 + 100), this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= *(int *)&stru_B05488.__pad_579C[15212] ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}
}

// 0x712040
int ObjectTypeClass::SelectArtOrAlt()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass_SelectArtOrAlt(_DWORD *this)
{
  #375 *v1; // eax
  int result; // eax

  v1 = HouseClass_Player; /*0x712040*/
  if ( !HouseClass_Player ) /*0x71204a*/
    return *(this + 444); /*0x7120bf*/
  if ( *((_BYTE *)HouseClass_Player + 703) ) /*0x71204c*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) == 16 ) /*0x712060*/
    {
      result = *(this + 452); /*0x712062*/
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
    || (*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 40
    && ((*(int (__thiscall **)(_DWORD *))(*this + 44))(this) != 7 || !*(this + 258)) )
  {
    return *(this + 444); /*0x7120a1*/
  }
  result = *(this + 452); /*0x7120ab*/
  if ( !result || !*((_BYTE *)this + 3214) ) /*0x7120b5*/
    return *(this + 444); /*0x7120bd*/
  return result; /*0x7120c5*/
}
}

// 0x712170
namespace gamemd {
int ObjectTypeClass_LoadExtras()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (no pseudocode — ASM-only function)
}
} // namespace gamemd

// 0x7170A0
int ObjectTypeClass::DeserializeArrays()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::DeserializeArrays(#376 *this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]

  result = COMObject::GetSizeMaxWrapper((int)v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * v19[265] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * v19[272] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * v19[279] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * v19[286] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * v19[293] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * v19[300] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * v19[307] + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * v19[314] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * v19[321] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * v19[328] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * v19[463] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * v19[470] + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * v19[201] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * v19[373] + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * v19[254] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * v19[208] + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * v19[482] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[489] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}
}

// 0x717820
char ObjectTypeClass::loadTypeMember_5717820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_717820(int this)
{
  int v2; // eax
  const char *v3; // ecx

  LOBYTE(v2) = *(_BYTE *)(this + 3536); /*0x717823*/
  v3 = (const char *)(this + 3536); /*0x717829*/
  if ( (_BYTE)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(_DWORD *)(this + 3568) = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}
}

// 0x7179D0
int ObjectTypeClass::loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::loadTypeMember_57179D0(_DWORD *this, WeaponTypeClass *aP1, CCINIClass *aP2)
{
  if ( this != (_DWORD *)aP2 ) /*0x7179d7*/
  {
    *this = *(_DWORD *)aP2->__pad_0; /*0x7179dd*/
    *(this + 1) = aP2->headNode[0]; /*0x7179e2*/
    *(this + 2) = aP2->headNode[1]; /*0x7179e8*/
    *(this + 3) = aP2->headNode[2]; /*0x7179ee*/
    *((_WORD *)this + 8) = aP2->sectionHead[0]; /*0x7179f5*/
  }
  *(_DWORD *)aP1->__pad_0 = *this; /*0x717a01*/
  *(_DWORD *)&aP1->__pad_0[4] = *(this + 1); /*0x717a06*/
  *(_DWORD *)&aP1->__pad_0[8] = *(this + 2); /*0x717a0c*/
  *(_DWORD *)&aP1->__pad_0[12] = *(this + 3); /*0x717a12*/
  LOWORD(aP1->uniqueId) = (unsigned short)this->uniqueId; /*0x717a1a*/
  return (int)aP1->__pad_0; /*0x717a19*/
}
}

// 0x717A30
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717A30(_DWORD *this, int a2)
{
  *this = a2; /*0x717a34*/
  return a2; /*0x717a36*/
}
}

// 0x717A50
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717A50(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  *(this + 1) = result; /*0x717a5d*/
  return result; /*0x717a60*/
}
}

// 0x717A70
int ObjectTypeClass::loadTypeMember_5717A70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717A70(_DWORD *this)
{
  return *(this + 1); /*0x717a73*/
}
}

// 0x717A80
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717A80(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  *(this + 2) = result; /*0x717a8d*/
  return result; /*0x717a90*/
}
}

// 0x717AA0
int ObjectTypeClass::loadTypeMember_5717AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717AA0(_DWORD *this)
{
  return *(this + 2); /*0x717aa3*/
}
}

// 0x717AB0
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717AB0(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  *(this + 3) = result; /*0x717abd*/
  return result; /*0x717ac0*/
}
}

// 0x717AD0
int ObjectTypeClass::loadTypeMember_5717AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_717AD0(_DWORD *this)
{
  return *(this + 3); /*0x717ad3*/
}
}

// 0x717AE0
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_717AE0(_BYTE *this)
{
  return *this == 0; /*0x717ae9*/
}
}

// 0x717BF0
unsigned int * ObjectTypeClass::CheckFlag(ObjectTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall ObjectTypeClass::CheckFlag(_DWORD *this, ObjectTypeClass *aP1)
{
  *this = &DynamicVectorClass<AnimTypeClass const *>::`vftable'; /*0x717bf2*/
  return this; /*0x717bf8*/
}
}

// 0x717C00
unsigned int * ObjectTypeClass::loadTypeMember_5717C00(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_717C00(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == a2 ) /*0x717c0a*/
    return this; /*0x717c0a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x717c0e*/
  v3 = a2[2]; /*0x717c11*/
  *(this + 2) = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    *(this + 1) = 0; /*0x717c5a*/
    *((_BYTE *)this + 13) = 0; /*0x717c61*/
    return this; /*0x717c65*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x717c23*/
  *(this + 1) = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return this; /*0x717c30*/
  v5 = *(this + 2); /*0x717c32*/
  v6 = 0; /*0x717c35*/
  *((_BYTE *)this + 13) = 1; /*0x717c39*/
  if ( v5 <= 0 ) /*0x717c3d*/
    return this; /*0x717c3d*/
  do /*0x717c51*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < *(this + 2) ); /*0x717c51*/
  return this; /*0x717c55*/
}
}

// 0x71CB90
int ObjectTypeClass::ReadDestroyAnim()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ObjectTypeClass::ReadDestroyAnim(char *this)
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  int v5; // [esp+8h] [ebp-14h]
  char v6[4]; // [esp+Ch] [ebp-10h] BYREF
  char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF

  INIClass::ClearSection((int)this, (INIClass *)aTerrain, 0); /*0x71cb9f*/
  result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[260]; /*0x71cba4*/
  for ( i = 0; i < *(int *)&MEMORY[0xA8D63C].__pad_1258[260]; ++i ) /*0x71cbad*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[248] + 4 * i); /*0x71cbba*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(_BYTE *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v4 + 440))(v4, v6); /*0x71cbe6*/
        sprintf(Buffer, MEMORY[0x817F6C], (__int16)v5 + 1000 * SHIWORD(v5)); /*0x71cc09*/
        INIClass::SetString(this, (INIClass *)aTerrain, (INIClass *)Buffer, (INIClass *)(*(_DWORD *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[260]; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}
}
