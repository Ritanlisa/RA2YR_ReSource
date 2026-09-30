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
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x46C790
namespace gamemd {
BulletTypeClass * ObjectTypeClass::FindOrCreate()
{
  int v2; // esi
  BulletTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( dword_A83C90 <= 0 ) /*0x46c7c1*/
  {
  LABEL_6:
    v3 = (BulletTypeClass *)RA2_OPNEW(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
// 0x46bbc0
      return BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C84 + v2) + 36), Source) ) /*0x46c7da*/
  {
    if ( ++v2 >= dword_A83C90 ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return (gamemd::BulletTypeClass **)((unsigned char *)*((unsigned int *)dword_A83C84 + v2));
}
} // namespace gamemd
// 0x473980
namespace gamemd {
int ObjectTypeClass::loadTypeMember_473980()
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  v2 = 0; /*0x473989*/
  v3 = off_81B7C8; /*0x47398b*/
  while ( _strcmpi(v3[1], (char *)this) && _strcmpi(*v3, (char *)this) ) /*0x4739af*/
  {
    v3 += 2; /*0x4739b1*/
    ++v2; /*0x4739b4*/
    if ( (int)v3 >= (int)aAirlift ) /*0x4739bb*/
      return -1; /*0x4739bb*/
  }
  return v2; /*0x4739bd*/
}
} // namespace gamemd
// 0x474940
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5474940(CCINIClass * aP1, unsigned char * a2, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, aP1, a2, &g_INI_DefaultBuffer, Destination, 32) <= 0 ) /*0x474962*/
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
  v5 = &off_81B9B0; /*0x474966*/
  while ( _strcmpi(Destination, *v5) ) /*0x47497d*/
  {
    v5 += 2; /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return dword_81B9B4[2 * v4]; /*0x47498b*/
}
} // namespace gamemd
// 0x474F50
namespace gamemd {
int ObjectTypeClass::ReadInt(unsigned char * a2, unsigned char * a3, int a4)
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
    v4 = (char *)(*((unsigned int *)dword_A8E334 + a4) + 36); /*0x474f65*/
  }
  INIClass::GetString(a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read((ObjectClass *)Destination); /*0x474f93*/
}
} // namespace gamemd
// 0x5F7090
namespace gamemd {
int ObjectTypeClass::ConstructFull(AbstractClass * aP1)
{
  int *v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  ObjectTypeClass * v7;
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  ((AbstractTypeClass *)(aP1))->Constructor(); /*0x5f709c*/
  v3 = &this->u32_C8; /*0x5f70a3*/
  *(unsigned int *)&this->q098 = 0; /*0x5f70a9*/
  this->q264 = 0; /*0x5f70af*/
  *(unsigned int *)&this->q268 = 0; /*0x5f70b5*/
  *(&this->vtable49) = 0; /*0x5f70bb*/
  *(&this->uniqueId0) = 0; /*0x5f70c1*/
  *(&this->uniqueId1) = 0; /*0x5f70c7*/
  this->ImageAllocated = 0; /*0x5f70cd*/
  *(&this->uniqueId3) = 0; /*0x5f70d3*/
  *(&this->uniqueId4) = 0; /*0x5f70d9*/
  *(&this->uniqueId5) = 0; /*0x5f70df*/
  *(&this->uniqueId6) = 0; /*0x5f70e5*/
  *(&this->uniqueId7) = 0; /*0x5f70eb*/
  *(&this->uniqueId8) = 0; /*0x5f70f1*/
  *(&this->uniqueId9) = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = &this->u32_158; /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *(unsigned int *)&this->q1E8 = 0; /*0x5f712e*/
  *(&this->NoSpawnAlt3) = 0; /*0x5f7134*/
  *(&this->NoSpawnAlt4) = -1; /*0x5f713a*/
  *(&this->NoSpawnAlt5) = -1; /*0x5f7140*/
  this->ImageFile_0x19 = 0; /*0x5f7146*/
  this->q211 = 0; /*0x5f7148*/
  this->q212 = 0; /*0x5f714e*/
  this->AlphaImageFile = 0; /*0x5f7156*/
  this->q22E = 1; /*0x5f715c*/
  this->q230 = 1; /*0x5f7162*/
  this->q231 = (unsigned int)(1);
  this->q235 = (unsigned int)(1);
  this->q22C = (unsigned int)(0);
  this->q22D = (unsigned int)(0);
  this->q22F = (unsigned int)(0);
  this->q232 = (unsigned int)(0);
  this->q233 = (unsigned int)(0);
  this->q234 = (unsigned int)(0);
  this->q236 = (unsigned int)(0);
  this->q237 = 0; /*0x5f71a0*/
  this->q238 = 0; /*0x5f71a6*/
  this->q239 = 0; /*0x5f71ac*/
  this->q23A = 0; /*0x5f71b2*/
  this->q23B = 0x80; /*0x5f71b8*/
  this->u8_23C = 0x80; /*0x5f71be*/
  this->q23D = 0x80; /*0x5f71c4*/
  *(&this->u32_384) = 16; /*0x5f71ca*/
  *(&this->u32_385) = 0; /*0x5f71d4*/
  *(&this->u32_386) = 0; /*0x5f71da*/
  *(&this->u32_387) = 0; /*0x5f71e0*/
  this->q094 = (void *)(0);
  *(&this->u32_389) = 0; /*0x5f71ec*/
  *(&this->zero_3C0) = 0; /*0x5f71f2*/
  *(&this->zero_3C1) = 0; /*0x5f71f8*/
  *(&this->zero_3C2) = 0; /*0x5f71fe*/
  this->q264 = 0; /*0x5f7204*/
  *(&this->zero_3C4) = 0; /*0x5f720a*/
  *(&this->zero_3C5) = 0; /*0x5f7213*/
  *(&this->zero_3C6) = 0; /*0x5f7219*/
  *(&this->zero_3C7) = 0; /*0x5f721f*/
  this->q278 = 0; /*0x5f7225*/
  *(&this->zero_3C9) = 0; /*0x5f722b*/
  *(&this->q0400) = 0; /*0x5f7231*/
  *(&this->q0401) = 0; /*0x5f7237*/
  *(&this->q0402) = 0; /*0x5f723d*/
  this->q28C = 0; /*0x5f7243*/
  *(&this->q0404) = 0; /*0x5f7249*/
  *(unsigned int *)this = (int)&ObjectTypeClass_vftable; /*0x5f7251*/
  *(unsigned int *)&this->vtable2 = (int)&ObjectTypeClass_vftable; /*0x5f7258*/
  *(unsigned int *)&this->vtable3 = (int)&ObjectTypeClass_vftable; /*0x5f725f*/
  *(unsigned int *)&this->vtable4 = (int)&ObjectTypeClass_vftable; /*0x5f7266*/
  if ( &this->BarrelVoxel != &this->NoSpawnAlt6 ) /*0x5f726d*/
    qmemcpy(&this->ImageFile_0x19, &this->BarrelVoxel, 0x19u); /*0x5f7274*/
  if ( &g_INI_DefaultBuffer ) /*0x5f727e*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  else
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  if ( Destination != (char *)&this->u32_D41 ) /*0x5f72aa*/
  {
    qmemcpy((char *)&this->AlphaImageFile, Destination, 0x18u); /*0x5f72b5*/
    this->u8_22B = v10; /*0x5f72b7*/
  }
  if ( dword_AC1428 < dword_AC1420 /*0x5f72ee*/
    || (byte_AC1425 || !dword_AC1420)
    && dword_AC142C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC1418 + 8))(
         &dword_AC1418,
         dword_AC142C + dword_AC1420,
         0) )
  {
    v7 = (gamemd::ObjectTypeClass *)((unsigned int)(dword_AC1428++));
    *((unsigned int *)(unsigned int)(dword_AC141C)+ v7) = this; /*0x5f730a*/
  }
  return (int)this; /*0x5f730f*/
}
} // namespace gamemd
// 0x5F7320
namespace gamemd {
unsigned int * ObjectTypeClass::Construct(ObjectTypeClass * aP1)
{
  int *v3; // eax
  int v4; // edx
  char *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init(aP1); /*0x5f7328*/
  v3 = &this->ChargerTurrets[3]; /*0x5f732f*/
  *(unsigned int *)&this->Image = 0; /*0x5f7335*/
  v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  v5 = &this->u32_158; /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *(unsigned int *)v5 = 0; /*0x5f7356*/
    *((unsigned int *)v5 + 1) = 0; /*0x5f7358*/
    v5 += 8; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  this-((unsigned int *)(>VoxelCaches))[0] = 0; /*0x5f7361*/
  this-((unsigned int *)(>VoxelCaches))[1] = 0; /*0x5f7367*/
  this-((unsigned int *)(>VoxelCaches))[2] = 0; /*0x5f736d*/
  IDA_LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f7373*/
  this-((unsigned int *)(>VoxelCaches))[4] = 0; /*0x5f7379*/
  this-((unsigned int *)(>VoxelCaches))[5] = 0; /*0x5f737f*/
  this-((unsigned int *)(>VoxelCaches))[6] = 0; /*0x5f7385*/
  this-((unsigned int *)(>VoxelCaches))[7] = 0; /*0x5f738b*/
  IDA_LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f7391*/
  this-((unsigned int *)(>VoxelCaches))[9] = 0; /*0x5f7397*/
  this-((unsigned int *)(>VoxelCaches))[10] = 0; /*0x5f739d*/
  this-((unsigned int *)(>VoxelCaches))[11] = 0; /*0x5f73a3*/
  this-((unsigned int *)(>VoxelCaches))[12] = 0; /*0x5f73a9*/
  IDA_LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f73af*/
  this-((unsigned int *)(>VoxelCaches))[14] = 0; /*0x5f73b5*/
  this-((unsigned int *)(>VoxelCaches))[15] = 0; /*0x5f73bb*/
  this-((unsigned int *)(>VoxelCaches))[16] = 0; /*0x5f73c1*/
  this-((unsigned int *)(>VoxelCaches))[17] = 0; /*0x5f73c7*/
  IDA_LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f73cd*/
  this-((unsigned int *)(>VoxelCaches))[19] = 0; /*0x5f73d3*/
  this->AbstractTypeClass = (void*)&ObjectTypeClass_vftable; /*0x5f73d9*/
  *(void **)&this->vtable2 = (void*)&ObjectTypeClass_vftable; /*0x5f73df*/
  *(void **)&this->vtable3 = (void*)&ObjectTypeClass_vftable; /*0x5f73e6*/
  *(void **)&this->vtable4 = (void*)&ObjectTypeClass_vftable; /*0x5f73ed*/
  return &this->AbstractTypeClass; /*0x5f73f6*/
}
} // namespace gamemd
// 0x5F7400
namespace gamemd {
SomeVoxelCache * * ObjectTypeClass::Destruct()
{
  int v2; // eax
  ObjectTypeClass *v3; // edi
  int v4; // ebx
  ObjectTypeClass *v5; // edi
  int v6; // ebx

  *(unsigned int *)this = (void*)&ObjectTypeClass_vftable; /*0x5f740b*/
  this->vtable2 = (void*)&ObjectTypeClass_vftable; /*0x5f7411*/
  this->vtable3 = (void*)&ObjectTypeClass_vftable; /*0x5f7418*/
  this->vtable4 = (void*)&ObjectTypeClass_vftable; /*0x5f741f*/
  v2 = (*(int (**)(int *, int *))(dword_AC1418 + 16))(&dword_AC1418, &this); /*0x5f7435*/
  if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((unsigned int *)dword_AC141C + v2 - 1) = *((unsigned int *)dword_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < dword_AC1428 ); /*0x5f7468*/
  }
  if ( this->ImageAllocated && this->q0A4 ) /*0x5f7476*/
  {
    RA2_OPDEL(*(void **)(&this->q0404)); /*0x5f7481*/
    *(unsigned int *)&this->q0A4 = 0; /*0x5f7489*/
    this->ImageAllocated = 0; /*0x5f748f*/
  }
  ObjectTypeClass::CleanupWeapons(); /*0x5f7497*/
  RA2_OPDEL(*(void **)(&this->q1000)); /*0x5f74a3*/
  *(unsigned int *)&this->q280 = 0; /*0x5f74a8*/
  *(unsigned int *)&this->q284 = 0; /*0x5f74ae*/
  *(unsigned int *)&this->q288 = 0; /*0x5f74b4*/
  this->q28C = 0; /*0x5f74ba*/
  *(unsigned int *)&this->q290 = 0; /*0x5f74c0*/
  RA2_OPDEL(*(void **)(&this->q0F80)); /*0x5f74cd*/
  *(unsigned int *)&this->q26C = 0; /*0x5f74d2*/
  *(unsigned int *)&this->q270 = 0; /*0x5f74d8*/
  *(unsigned int *)&this->q274 = 0; /*0x5f74de*/
  this->q278 = 0; /*0x5f74e4*/
  *(unsigned int *)&this->q27C = 0; /*0x5f74ea*/
  RA2_OPDEL(*(void **)(&this->q0F00)); /*0x5f74f7*/
  *(unsigned int *)&this->q258 = 0; /*0x5f74fc*/
  *(unsigned int *)&this->q25C = 0; /*0x5f7502*/
  *(unsigned int *)&this->q260 = 0; /*0x5f7508*/
  this->q264 = 0; /*0x5f750e*/
  *(unsigned int *)&this->q268 = 0; /*0x5f7514*/
  RA2_OPDEL(*(void **)(&this->q0E80)); /*0x5f7521*/
  this->VoxelCaches_4 = 0; /*0x5f7526*/
  *(unsigned int *)&this->q248 = 0; /*0x5f752c*/
  *(unsigned int *)&this->q24C = 0; /*0x5f7532*/
  this->q094 = 0; /*0x5f7538*/
  *(unsigned int *)&this->q254 = 0; /*0x5f753e*/
  v3 = (ObjectTypeClass *)(&this->u32_C08); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 = (ObjectTypeClass *)((char *)v3 - 8); /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (ObjectTypeClass *)(&this->u32_884); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 = (ObjectTypeClass *)((char *)v5 - 8); /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(&this->u32_4C2)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(&this->u32_484)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString((ObjectTypeClass *)(&this->u32_446)); /*0x5f7593*/
  return this->AbstractTypeClass::Dtor(); /*0x5f759f*/
}
} // namespace gamemd
// 0x5F77F0
namespace gamemd {
void ObjectTypeClass::UnloadPipsSHP()
{
  int v1; // eax
  void *v2; // ebp
  int v3; // edx
  int v4; // eax
  FileTreeNode *v5; // esi
  int v6; // edi
  int v7; // eax
  void *v8; // ebp
  int v9; // edx
  int v10; // eax
  FileTreeNode *v11; // esi
  int v12; // edi
  int v13; // eax
  void *v14; // ebp
  int v15; // edx
  int v16; // eax
  FileTreeNode *v17; // esi
  int v18; // edi
  int v19; // eax
  void *v20; // ebp
  int v21; // edx
  int v22; // eax
  FileTreeNode *v23; // esi
  int v24; // edi

  if ( byte_AC1488 ) /*0x5f77fd*/
  {
    if ( FileSystem_PIPBRD_SHP ) /*0x5f7807*/
    {
      v1 = *(unsigned int *)(FileSystem_PIPBRD_SHP - 4); /*0x5f7809*/
      v2 = (void *)(FileSystem_PIPBRD_SHP - 4); /*0x5f780c*/
      v3 = 9 * v1; /*0x5f780f*/
      v4 = v1 - 1; /*0x5f7812*/
      v5 = (FileTreeNode *)(FileSystem_PIPBRD_SHP + 4 * v3); /*0x5f7813*/
      if ( v4 >= 0 ) /*0x5f7816*/
      {
        v6 = v4 + 1; /*0x5f7818*/
        do /*0x5f7826*/
        {
          v5 -= 9; /*0x5f781b*/
          FileTreeNode::Destroy(v5); /*0x5f7820*/
          --v6; /*0x5f7825*/
        }
        while ( v6 ); /*0x5f7826*/
      }
      RA2_OPDEL(v2); /*0x5f7829*/
    }
    byte_AC1488 = 0; /*0x5f7831*/
  }
  if ( byte_AC1489 ) /*0x5f783d*/
  {
    if ( FileSystem_PIPS_SHP ) /*0x5f7847*/
    {
      v7 = *(unsigned int *)(FileSystem_PIPS_SHP - 4); /*0x5f7849*/
      v8 = (void *)(FileSystem_PIPS_SHP - 4); /*0x5f784c*/
      v9 = 9 * v7; /*0x5f784f*/
      v10 = v7 - 1; /*0x5f7852*/
      v11 = (FileTreeNode *)(FileSystem_PIPS_SHP + 4 * v9); /*0x5f7853*/
      if ( v10 >= 0 ) /*0x5f7856*/
      {
        v12 = v10 + 1; /*0x5f7858*/
        do /*0x5f7866*/
        {
          v11 -= 9; /*0x5f785b*/
          FileTreeNode::Destroy(v11); /*0x5f7860*/
          --v12; /*0x5f7865*/
        }
        while ( v12 ); /*0x5f7866*/
      }
      RA2_OPDEL(v8); /*0x5f7869*/
    }
    byte_AC1489 = 0; /*0x5f7871*/
  }
  if ( byte_AC148A ) /*0x5f787d*/
  {
    if ( FileSystem_PIPS2_SHP ) /*0x5f7887*/
    {
      v13 = *(unsigned int *)(FileSystem_PIPS2_SHP - 4); /*0x5f7889*/
      v14 = (void *)(FileSystem_PIPS2_SHP - 4); /*0x5f788c*/
      v15 = 9 * v13; /*0x5f788f*/
      v16 = v13 - 1; /*0x5f7892*/
      v17 = (FileTreeNode *)(FileSystem_PIPS2_SHP + 4 * v15); /*0x5f7893*/
      if ( v16 >= 0 ) /*0x5f7896*/
      {
        v18 = v16 + 1; /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v17 -= 9; /*0x5f789b*/
          FileTreeNode::Destroy(v17); /*0x5f78a0*/
          --v18; /*0x5f78a5*/
        }
        while ( v18 ); /*0x5f78a6*/
      }
      RA2_OPDEL(v14); /*0x5f78a9*/
    }
    byte_AC148A = 0; /*0x5f78b1*/
  }
  if ( byte_AC148B ) /*0x5f78bd*/
  {
    if ( FileSystem_TALKBUBL_SHP ) /*0x5f78c7*/
    {
      v19 = *(unsigned int *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78c9*/
      v20 = (void *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78cc*/
      v21 = 9 * v19; /*0x5f78cf*/
      v22 = v19 - 1; /*0x5f78d2*/
      v23 = (FileTreeNode *)(FileSystem_TALKBUBL_SHP + 4 * v21); /*0x5f78d3*/
      if ( v22 >= 0 ) /*0x5f78d6*/
      {
        v24 = v22 + 1; /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v23 -= 9; /*0x5f78db*/
          FileTreeNode::Destroy(v23); /*0x5f78e0*/
          --v24; /*0x5f78e5*/
        }
        while ( v24 ); /*0x5f78e6*/
      }
      RA2_OPDEL(v20); /*0x5f78e9*/
    }
    byte_AC148B = 0; /*0x5f78f1*/
  }
}
} // namespace gamemd
// 0x5F9070
namespace gamemd {
AbstractClass * * ObjectTypeClass::Load2DArt()
{
  char *v2; // edi
  int v3; // esi
  char v4; // al
  char v5; // dl
  int v6; // edx
  AbstractClass ** v7;
  char v8; // dl
  int v9; // eax
  int result; // eax
  int16_t v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( *(&this->q0D09) && *((unsigned int *)dword_A8B230 + 1174) == 1 && !*(&this->q0408) ) /*0x5f9096*/
  {
    if ( !*(&this->u32_D40) ) /*0x5f90a0*/
    {
      v2 = &this->ImageFile_0x19; /*0x5f90ab*/
      sprintf(Buffer, off_832AE8, &this->u32_C84); /*0x5f90bf*/
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
        *(&this->q0D08) = v13; /*0x5f9107*/
      }
      *(&this->u32_D40) = 1; /*0x5f9108*/
    }
  }
  else
  {
    *(&this->u32_D40) = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, &this->ImageFile_0x19, Ext); /*0x5f912e*/
  if ( *(&this->u32_DC6) ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, &this->ImageFile_0x19, (const char *)&off_7E1BC6 + 112 * *((unsigned int *)dword_A8B230 + 1174)); /*0x5f9169*/
  }
  else if ( *(&this->q0E07) ) /*0x5f9173*/
  {
    v3 = *((unsigned int *)dword_A8B230 + 1174); /*0x5f9183*/
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
  if ( *(&this->q0408) && this->q0A4 ) /*0x5f91eb*/
    RA2_OPDEL(*((void **)&this->uniqueId1)); /*0x5f91f6*/
  v6 = *(unsigned int *)this; /*0x5f91fe*/
  *(unsigned int *)&this->q0A4 = 0; /*0x5f9203*/
  *(&this->q0408) = 0; /*0x5f920d*/
  if ( (*(int (**)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (**)(char *))(((unsigned int)(this->uniqueId4))))(this) == 5 )
  {
    v9 = (int)(SearchMIXFile(&Source, 1));
    *(unsigned int *)&this->q0A4 = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 30;
    && (*(int (**)(char *))(((unsigned int)(this->uniqueId4))))(this) != 37 )
  {
    v7 = (gamemd::AbstractClass **)((int)(SearchMIXFile(&Source, 0)));
    *(unsigned int *)&this->q0A4 = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = (unsigned int)(71);
      v8 = (unsigned int)(0);
  LABEL_40:
      *(unsigned int *)&this->q0A4 = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
  LABEL_41:
  result = *(unsigned int *)&this->q0A4; /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = *(unsigned int *)&result->vtable3; /*0x5f9296*/
    IDA_LOWORD(result) = result->vtable2; /*0x5f929a*/
    if ( v11 <= (int16_t)result ) /*0x5f92a1*/
      result = (int16_t)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    this->MaxDimension = result; /*0x5f92b5*/
  }
  return (gamemd::AbstractClass **)(result);
}
} // namespace gamemd
// 0x5F92D0
namespace gamemd {
void* ObjectTypeClass::LoadFromINI(CCINIClass * aP1)
{
  int CrushSound; // edi
  int Index; // eax
  int AmbientSound; // edi
  int v6; // eax
  char Crushable; // cl
  char Bool_Overwrite; // al
  char v9; // al
  char AlternateArcticArt; // cl
  char v11; // al
  char v12; // al
  char LegalTarget; // cl
  char v14; // al
  int Int_Overwrite; // eax
  char Immune; // cl
  char v17; // al
  int Coord; // eax
  char IgnoresFirestorm; // cl
  char v20; // al
  int v21; // eax
  int v22; // eax
  char Theater; // cl
  char v24; // al
  char v25; // al
  char Bombable; // [esp-Ch] [ebp-1B8h]
  char RadarInvisible; // [esp-Ch] [ebp-1B8h]
  int v29; // [esp-Ch] [ebp-1B8h]
  char Insignificant; // [esp-Ch] [ebp-1B8h]
  char UseLineTrail; // [esp-Ch] [ebp-1B8h]
  int LineTrailColorDecrement; // [esp-Ch] [ebp-1B8h]
  char NewTheater; // [esp-Ch] [ebp-1B8h]
  int v34; // [esp+8h] [ebp-1A4h] BYREF
  char Source[28]; // [esp+Ch] [ebp-1A0h] BYREF
  VocClass Destination; // [esp+28h] [ebp-184h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x5f92e3*/
  if ( !(uint8_t)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, aP1) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy(Source, this->ImageFile); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (INIClass *)aP1,
    (uint8_t *)this->?,
    (uint8_t *)g_INI_Key_Image,
    Source,
    this->ImageFile,
    25);
  v34 = (int)strcpy(Source, this->AlphaImageFile); /*0x5f9366*/
  INIClass::GetString((INIClass *)aP1, (uint8_t *)this->?, aAlphaimage, Source, this->AlphaImageFile, 25); /*0x5f9386*/
  CrushSound = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (INIClass *)aP1,
         (uint8_t *)this->?,
         aCrushsound,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    Index = VocClass::FindIndex(&Destination); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      CrushSound = Index; /*0x5f93bf*/
  }
  this->CrushSound = CrushSound; /*0x5f93d5*/
  AmbientSound = this->AmbientSound; /*0x5f93db*/
  if ( !INIClass::GetString( /*0x5f93f9*/
          (INIClass *)aP1,
          (uint8_t *)this->?,
          aAmbientsound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v6 = VocClass::FindIndex(&Destination), v6 == -1) )
  {
    v6 = AmbientSound; /*0x5f93fb*/
  }
  Crushable = this->Crushable; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aCrushable, Crushable); /*0x5f9412*/
  Bombable = this->Bombable; /*0x5f941f*/
  this->Crushable = Bool_Overwrite; /*0x5f9426*/
  this->Bombable = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)*(unsigned int *)&this->q22E, aBombable, Bombable); /*0x5f9431*/
  v9 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aNospawnalt, this->__pad_14D[155]); /*0x5f9446*/
  AlternateArcticArt = this->AlternateArcticArt; /*0x5f944b*/
  this-((unsigned int *)(>__pad_14D))[155] = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aAlternatearcti, AlternateArcticArt); /*0x5f9460*/
  RadarInvisible = this->RadarInvisible; /*0x5f946d*/
  this->AlternateArcticArt = v11; /*0x5f9474*/
  this->RadarInvisible = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                           (int *)aP1,
                           (uint8_t *)*(unsigned int *)&this->q22F,
                           aRadarinvisible,
                           RadarInvisible);
  v12 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aSelectable, this->Selectable); /*0x5f9494*/
  LegalTarget = this->LegalTarget; /*0x5f9499*/
  this->Selectable = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aLegaltarget, LegalTarget); /*0x5f94ae*/
  v29 = this->Armor[0]; /*0x5f94bb*/
  this->LegalTarget = v14; /*0x5f94c2*/
  this->Armor[0] = ArmorType::FindIndex((ArmorType *)aP1, (uint8_t *)this->?, g_INI_Key_Armor, v29); /*0x5f94cd*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)this->?, aStrength, this->Strength); /*0x5f94e2*/
  Immune = this->Immune; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aImmune, Immune); /*0x5f94fc*/
  Insignificant = this->Insignificant; /*0x5f9509*/
  this->Immune = v17; /*0x5f9510*/
  this->Insignificant = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                          (int *)aP1,
                          (uint8_t *)*(unsigned int *)&this->q232,
                          aInsignificant,
                          Insignificant);
  this->HasRadialIndicator = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                               (int *)aP1,
                               (uint8_t *)*(unsigned int *)&this->q238,
                               aHasradialindic,
                               this->HasRadialIndicator);
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (INIClass *)aP1,
            (int)&v34,
            (uint8_t *)this->?,
            aRadialcolor,
            (uint8_t *)this->__pad_98);
  IgnoresFirestorm = this->IgnoresFirestorm; /*0x5f9557*/
  *(unsigned short *)this->__pad_98 = *(unsigned short *)Coord; /*0x5f955d*/
  this->__pad_98[2] = *(unsigned char *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aIgnoresfiresto, IgnoresFirestorm); /*0x5f956f*/
  UseLineTrail = this->UseLineTrail; /*0x5f9580*/
  this->IgnoresFirestorm = v20; /*0x5f958c*/
  this->UseLineTrail = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                         (int *)&DSurface_ViewBounds.__pad_FC[228],
                         (uint8_t *)this->ImageFile,
                         aUselinetrail,
                         UseLineTrail);
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
          (int)&v34,
          (uint8_t *)this->ImageFile,
          aLinetrailcolor,
          (uint8_t *)this->LineTrailColor);
  *(unsigned short *)this->LineTrailColor = *(unsigned short *)v21; /*0x5f95bc*/
  LineTrailColorDecrement = this->LineTrailColorDecrement; /*0x5f95cd*/
  this->LineTrailColor[2] = *(unsigned char *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)this->ImageFile,
          aLinetrailcolor_0,
          LineTrailColorDecrement);
  Theater = this->Theater; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)this->ImageFile,
          (uint8_t *)g_INI_Key_Theater,
          Theater);
  NewTheater = this->NewTheater; /*0x5f9604*/
  this->Theater = v24; /*0x5f960b*/
  this->NewTheater = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                       (int *)&DSurface_ViewBounds.__pad_FC[228],
                       (uint8_t *)this->ImageFile,
                       aNewtheater,
                       NewTheater);
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)this->ImageFile,
          aVoxel,
          this->Voxel);
  this->Voxel = v25; /*0x5f9634*/
  if ( !v25 && (*((int (**)(ObjectTypeClass *))this->AbstractTypeClass + 11))(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt(); /*0x5f964d*/
  if ( this->AlphaImageFile[0] ) /*0x5f9652*/
  {
    _makepath((char *)&Destination.Name[5], 0, 0, this->AlphaImageFile, Ext); /*0x5f9674*/
    *(unsigned int *)&this->AlphaImage = (SHPStruct *)SearchMIXFile((char *)&Destination.VocClass_field_AC, 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/
}
} // namespace gamemd
// 0x5F9710
namespace gamemd {
void ObjectTypeClass::SetRTTI71()
{
  int result; // eax

  IDA_BYTE1(this->AbstractTypeClass) = 71; /*0x5f9710*/
  return result; /*0x5f9714*/
}
} // namespace gamemd
// 0x5F9720
namespace gamemd {
int ObjectTypeClass::LoadCleanup(IUnknown * aP0, ObjectTypeClass * aP1)
{
  void *v2; // ebp
  String *v3; // ebp
  WaveClass *v4; // ebp
  String *v5; // ebp
  WaveClass *v6; // ebp
  String *v7; // ebp
  int result; // eax
  int *v9; // eax
  int v10; // ecx
  char Buffer[260]; // [esp+10h] [ebp-104h] BYREF

  RA2_OPDEL((void *)aP0->VoxelCaches[0]); /*0x5f973e*/
  aP0->VoxelCaches[0] = 0; /*0x5f974e*/
  aP0->VoxelCaches[1] = 0; /*0x5f9750*/
  aP0->VoxelCaches[2] = 0; /*0x5f9753*/
  IDA_LOBYTE(aP0->VoxelCaches[3]) = 0; /*0x5f9756*/
  aP0->VoxelCaches[4] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&aP0->VoxelCaches[5]); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&aP0->VoxelCaches[10]); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer((ObjectTypeClass *)&aP0->VoxelCaches[15]); /*0x5f9772*/
  v2 = (void *)aP0->MainVoxel[0]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy((WaveClass *)aP0->MainVoxel[0]); /*0x5f9783*/
    RA2_OPDEL(v2); /*0x5f9789*/
  }
  v3 = (String *)aP0->TurretVoxel[0]; /*0x5f9791*/
  aP0->MainVoxel[0] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    String::Release(v3); /*0x5f97a3*/
    RA2_OPDEL(v3); /*0x5f97a9*/
  }
  v4 = (WaveClass *)aP0->BarrelVoxel[0]; /*0x5f97b1*/
  aP0->TurretVoxel[0] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy(v4); /*0x5f97c3*/
    RA2_OPDEL(v4); /*0x5f97c9*/
  }
  v5 = (String *)aP0->ChargerTurrets[0]; /*0x5f97d1*/
  aP0->BarrelVoxel[0] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    String::Release(v5); /*0x5f97e3*/
    RA2_OPDEL(v5); /*0x5f97e9*/
  }
  v6 = (WaveClass *)aP0->ChargerTurrets[1]; /*0x5f97f1*/
  aP0->ChargerTurrets[0] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy(v6); /*0x5f9803*/
    RA2_OPDEL(v6); /*0x5f9809*/
  }
  v7 = (String *)aP0->ChargerTurrets[2]; /*0x5f9811*/
  aP0->ChargerTurrets[1] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    String::Release(v7); /*0x5f9823*/
    RA2_OPDEL(v7); /*0x5f9829*/
  }
  aP0->ChargerTurrets[2] = 0; /*0x5f9833*/
  ObjectTypeClass::CleanupWeapons((char *)aP0); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    aP0->Image = 0; /*0x5f9856*/
    aP0->ImageAllocated = 0; /*0x5f985c*/
    aP0->AlphaImage = 0; /*0x5f9862*/
    if ( aP0 != (ObjectTypeClass *)-580 ) /*0x5f9868*/
    {
      aP0->VoxelCaches[0] = 0; /*0x5f986a*/
      aP0->VoxelCaches[1] = 0; /*0x5f986c*/
      aP0->VoxelCaches[2] = 0; /*0x5f986f*/
      IDA_LOBYTE(aP0->VoxelCaches[3]) = 0; /*0x5f9872*/
      aP0->VoxelCaches[4] = 0; /*0x5f9875*/
    }
    if ( aP0 != (ObjectTypeClass *)-600 ) /*0x5f9880*/
    {
      aP0->VoxelCaches[5] = 0; /*0x5f9882*/
      aP0->VoxelCaches[6] = 0; /*0x5f9884*/
      aP0->VoxelCaches[7] = 0; /*0x5f9887*/
      IDA_LOBYTE(aP0->VoxelCaches[8]) = 0; /*0x5f988a*/
      aP0->VoxelCaches[9] = 0; /*0x5f988d*/
    }
    if ( aP0 != (ObjectTypeClass *)-620 ) /*0x5f9898*/
    {
      aP0->VoxelCaches[10] = 0; /*0x5f989a*/
      aP0->VoxelCaches[11] = 0; /*0x5f989c*/
      aP0->VoxelCaches[12] = 0; /*0x5f989f*/
      IDA_LOBYTE(aP0->VoxelCaches[13]) = 0; /*0x5f98a2*/
      aP0->VoxelCaches[14] = 0; /*0x5f98a5*/
    }
    if ( aP0 != (ObjectTypeClass *)-640 ) /*0x5f98b0*/
    {
      aP0->VoxelCaches[15] = 0; /*0x5f98b2*/
      aP0->VoxelCaches[16] = 0; /*0x5f98b4*/
      aP0->VoxelCaches[17] = 0; /*0x5f98b7*/
      IDA_LOBYTE(aP0->VoxelCaches[18]) = 0; /*0x5f98ba*/
      aP0->VoxelCaches[19] = 0; /*0x5f98bd*/
    }
    aP0->MainVoxel[0] = 0; /*0x5f98c0*/
    aP0->TurretVoxel[0] = 0; /*0x5f98c6*/
    aP0->BarrelVoxel[0] = 0; /*0x5f98cc*/
    aP0->ChargerTurrets[0] = 0; /*0x5f98d2*/
    aP0->ChargerTurrets[1] = 0; /*0x5f98d8*/
    aP0->ChargerTurrets[2] = 0; /*0x5f98de*/
    v9 = &aP0->ChargerTurrets[4]; /*0x5f98e4*/
    v10 = 18; /*0x5f98ea*/
    do /*0x5f9904*/
    {
      *(v9 - 1) = 0; /*0x5f98ef*/
      *v9 = 0; /*0x5f98f2*/
      v9[35] = 0; /*0x5f98f4*/
      v9[36] = 0; /*0x5f98fa*/
      v9 += 2; /*0x5f9900*/
      --v10; /*0x5f9903*/
    }
    while ( v10 ); /*0x5f9904*/
    if ( aP0->AlphaImageFile[0] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0, aP0->AlphaImageFile, Ext); /*0x5f9923*/
      aP0->AlphaImage = (SHPStruct *)SearchMIXFile(Buffer, 0); /*0x5f9936*/
    }
    return 0; /*0x5f993c*/
  }
  return result; /*0x5f993e*/
}
} // namespace gamemd
// 0x712040
namespace gamemd {
SHPStruct * * ObjectTypeClass::SelectArtOrAlt()
{
  Object *v1; // eax
  int result; // eax

  v1 = dword_A83D4C; /*0x712040*/
  if ( !dword_A83D4C ) /*0x71204a*/
    return *(unsigned int *)&this->?[1548]; /*0x7120bf*/
  if ( dword_A83D4C[1].__pad_C[19] ) /*0x71204c*/
  {
    if ( (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) == 16 ) /*0x712060*/
    {
      result = *(unsigned int *)&this->?[1580]; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( this->?[2986] ) /*0x71206c*/
          return result; /*0x712074*/
      }
    }
    v1 = dword_A83D4C; /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !v1[1].__pad_C[20]
    || (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 40
    && ((*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) != 7
     || !*(unsigned int *)&this->?[804]) )
  {
    return *(unsigned int *)&this->?[1548]; /*0x7120a1*/
  }
  result = *(unsigned int *)&this->?[1580]; /*0x7120ab*/
  if ( !result || !this->?[2986] ) /*0x7120b5*/
    return *(unsigned int *)&this->?[1548]; /*0x7120bd*/
  return result; /*0x7120c5*/
}
} // namespace gamemd
// 0x712170
namespace gamemd {
int ObjectTypeClass::LoadExtras(CCINIClass * aP0, double _38C, unsigned char *** a2)
{
  WeaponTypeClass *v5; // edi
  WeaponTypeClass *v6; // eax
  char Bool_Overwrite; // al
  double Double_Overwrite; // st7
  INIClass *v10; // ecx
  unsigned int *GUID_Overwrite; // eax
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
  unsigned char *v408; // ecx
  int Info; // eax
  VectorClass v412; // [esp-14h] [ebp-398h] BYREF
  unsigned char aP3[12]; // [esp-4h] [ebp-388h]
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
  *(unsigned int *)(v4 + 1540) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81664],
                             *(INIClass **)(v4 + 1540));
  *(unsigned int *)(v4 + 1536) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81648],
                             *(INIClass **)(v4 + 1536));
  *(unsigned int *)(v4 + 1660) = ObjectTypeClass::loadTypeMember_476FC0(
                             (uint8_t ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (uint8_t *)&stru_830620[81636],
                             *(CCINIClass **)(v4 + 1660));
  *(unsigned char *)(v4 + 1828) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81624],
                            *(unsigned char *)(v4 + 1828));
  *(unsigned char *)(v4 + 3212) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81612],
                            *(unsigned char *)(v4 + 3212));
  *(unsigned int *)(v4 + 660) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81600],
                            *(INIClass **)(v4 + 660));
  *(unsigned int *)(v4 + 664) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81588],
                            *(INIClass **)(v4 + 664));
  *(unsigned char *)(v4 + 3213) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81572],
                            *(unsigned char *)(v4 + 3213));
  *(unsigned char *)(v4 + 3220) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81564],
                            *(unsigned char *)(v4 + 3220));
  *(unsigned char *)(v4 + 3225) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81552],
                            *(unsigned char *)(v4 + 3225));
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1464);
  *(unsigned int *)&aP3[4] = &stru_830620[81540];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1464) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(unsigned char *)(v4 + 3349) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[12092],
                            *(unsigned char *)(v4 + 3349));
  v5 = *(WeaponTypeClass **)(v4 + 3352);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[43772],
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
  *(unsigned int *)(v4 + 3352) = v6;
  *(double *)&aP3[4] = *(float *)(v4 + 3356);
  *(float *)(v4 + 3356) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81512],
                            *(INIClass **)&aP3[4]);
  *(unsigned int *)(v4 + 1560) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[49716],
                             *(INIClass **)(v4 + 1560));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP0,
                     (uint8_t *)(v4 + 36),
                     (CCINIClass *)&stru_830620[81500],
                     *(unsigned char *)(v4 + 3221));
  *(unsigned int *)&aP3[8] = -1074790400;
  *(unsigned int *)&aP3[4] = 0;
  *(unsigned int *)aP3 = &stru_830620[81488];
  *(unsigned int *)&v412.IsInitialized = v4 + 36;
  *(unsigned char *)(v4 + 3221) = Bool_Overwrite;
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP0,
                       *(INIClass **)&v412.IsInitialized,
                       *(uint8_t **)aP3,
                       *(INIClass **)&aP3[4]);
  if ( Double_Overwrite != -1.0 )
    *(double *)(v4 + 944) = Double_Overwrite * 0.0174532925199433;
  *(unsigned int *)&aP3[8] = -1074790400;
  double v9; // st7
  v9 = INIClass::ReadDouble_Overwrite(
         (int)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[81476],
         0);
  if ( v9 != -1.0 )
    *(double *)(v4 + 928) = v9 * 0.0174532925199433;
  v10 = *(INIClass **)(v4 + 936);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 940);
  *(double *)(v4 + 936) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81464],
                            v10);
  GUID_Overwrite = (unsigned int *)INIClass::ReadGUID_Overwrite(
                               (int)aP0,
                               (int)aP2.sectionHead,
                               (INIClass *)(v4 + 36),
                               (uint8_t *)&stru_830620[81452],
                               *(unsigned int *)(v4 + 844),
                               *(unsigned int *)(v4 + 848),
                               *(unsigned int *)(v4 + 852),
                               *(unsigned int *)(v4 + 856));
  *(unsigned int *)(v4 + 844) = *GUID_Overwrite;
  *(unsigned int *)(v4 + 848) = GUID_Overwrite[1];
  *(unsigned int *)(v4 + 852) = GUID_Overwrite[2];
  *(unsigned int *)(v4 + 856) = GUID_Overwrite[3];
  *(unsigned int *)(v4 + 784) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81436],
                            *(INIClass **)(v4 + 784));
  v12 = *(INIClass **)(v4 + 752);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 756);
  *(double *)(v4 + 752) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81408],
                            v12);
  *(unsigned int *)(v4 + 760) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81388],
                            *(INIClass **)(v4 + 760));
  v13 = *(INIClass **)(v4 + 768);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 772);
  *(double *)(v4 + 768) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81364],
                            v13);
  v14 = *(INIClass **)(v4 + 776);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 780);
  *(double *)(v4 + 776) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81344],
                            v14);
  v15 = *(INIClass **)(v4 + 880);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 884);
  *(double *)(v4 + 880) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81336],
                            v15);
  v16 = *(INIClass **)(v4 + 888);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 892);
  *(double *)(v4 + 888) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81320],
                            v16);
  v17 = *(INIClass **)(v4 + 896);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 900);
  *(double *)(v4 + 896) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)g_INI_Key_Size,
                            v17);
  v18 = *(INIClass **)(v4 + 904);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 908);
  *(double *)(v4 + 904) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81308],
                            v18);
  *(unsigned char *)(v4 + 912) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (uint8_t *)(v4 + 36),
                           (CCINIClass *)&stru_830620[81296],
                           *(unsigned char *)(v4 + 912));
  *(unsigned int *)(v4 + 916) = ObjectTypeClass::loadTypeMember_5477590(
                            (uint8_t ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[81288],
                            *(CCINIClass **)(v4 + 916));
  *(unsigned int *)(v4 + 1468) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81276],
                             *(INIClass **)(v4 + 1468));
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP0,
                    (uint8_t *)(v4 + 36),
                    (CCINIClass *)&stru_830620[81264],
                    *(INIClass **)(v4 + 1472));
  *(unsigned int *)(v4 + 1472) = Int_Overwrite;
  if ( Int_Overwrite < 0 )
    *(unsigned int *)(v4 + 1472) = 0;
  v11 = *(CCINIClass **)(v4 + 1472);
  if ( *(unsigned int *)(v4 + 1468) < (int)v11 )
    *(unsigned int *)(v4 + 1468) = v11;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[81252],
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
        DynamicVector::Add2(&aP2.unknown30, (VectorClass_flat *)&aP2.headNode[2]);
    }
    TypeList_flat::CopyVoxelAnim(aP2.sectionHead, (VectorClass_flat *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
    Vector::Cleanup2((int)&aP2.unknown30);
  }
  else
  {
    TypeList_flat::CopyVoxelAnim(aP2.sectionHead, (VectorClass_flat *)(v4 + 788));
  }
  VectorClass_flat::CopyAssign((unsigned int *)(v4 + 788), (VectorClass_flat *)aP2.sectionHead);
  int v22 = *(unsigned int *)aP2[32];
  int v23 = *(unsigned int *)&aP2[36];
  *(unsigned int *)(v4 + 812) = *(unsigned int *)&aP2[40];
  *(unsigned int *)(v4 + 804) = v22;
  *(unsigned int *)(v4 + 808) = v23;
  aP2.sectionHead[0] = (int)&vt_VectorClass_VoxelAnimTypeClass_const;
  Vector::Cleanup2((int)aP2.sectionHead);
  aP2.headNode[2] = (int)&v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 816));
  *(unsigned int *)aP2.headNode[2] = &vt_TypeList_int;
  inited = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  aP2.headNode[2] = INIClass::ReadIntList(
                      (uint8_t ***)aP0,
                      (int)aP2.sectionHead,
                      inited,
                      (uint8_t *)&stru_830620[81236],
                      (void **)v412.vtable0,
                      v412.Items,
                      v412.Capacity,
                      *(int16_t *)&v412.IsInitialized,
                      *(int *)aP3,
                      *(int *)&aP3[4],
                      *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 816), (unsigned int *)aP2.headNode[2]);
  int v25 = aP2.headNode[2];
  *(unsigned int *)(v4 + 832) = *(unsigned int *)(aP2.headNode[2] + 16);
  *(unsigned int *)(v4 + 836) = *(unsigned int *)(v25 + 20);
  *(unsigned int *)(v4 + 840) = *(unsigned int *)(v25 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[81224],
         (INIClass *)&stru_87C374[56304],
         String,
         128) )
  {
    DynamicVectorClass_flat::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( j = (AbstractClass *)strtok(String[0].__pad_0, (ObjectClass *)&stru_817F40.nextObject);
          j;
          j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !j->__pad_0[0] )
        break;
      aP2.headNode[2] = (int)AnimTypeClass::FindOrCreate(j);
      if ( aP2.headNode[2] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass_flat *)&aP2.headNode[2]);
    }
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass_flat::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)(v4 + 1476));
  }
  VectorClass_flat::CopyDefault((unsigned int *)(v4 + 1476), (VectorClass_flat *)aP2.sectionHead);
  edx29 = *(unsigned int *)&aP2[36];
  int v28 = *(unsigned int *)&aP2[40];
  *(unsigned int *)(v4 + 1492) = *(unsigned int *)aP2[32];
  *(unsigned int *)(v4 + 1496) = edx29;
  *(unsigned int *)(v4 + 1500) = v28;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  DynamicVectorClass_flat::Destroy_Alt((int)aP2.sectionHead);
  *(unsigned char *)(v4 + 2054) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81204],
                            *(unsigned char *)(v4 + 2054));
  *(unsigned int *)(v4 + 2056) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81192],
                             *(INIClass **)(v4 + 2056));
  *(unsigned int *)(v4 + 2060) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[81180],
                             *(INIClass **)(v4 + 2060));
  *(unsigned char *)(v4 + 2064) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[81164],
                            *(unsigned char *)(v4 + 2064));
  al29 = INIClass::ReadBool_Overwrite(
           (int)aP0,
           (uint8_t *)(v4 + 36),
           (CCINIClass *)&stru_830620[81148],
           *(unsigned char *)(v4 + 2704));
  *(unsigned char *)(v4 + 2704) = al29;
  if ( *(int *)(v4 + 2056) <= 0 )
  {
    if ( !al29 )
    {
      v34 = *(WeaponTypeClass **)(v4 + 2200);
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             (uint8_t *)&stru_830620[81112],
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
      *(unsigned int *)&aP3[8] = 128;
      *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(unsigned int *)aP3 = &stru_87C374[56304];
      *(void **)&v412.IsInitialized = &stru_830620[81100];
      *(unsigned int *)(v4 + 2200) = eax42;
      v27 = *(CCINIClass **)(v4 + 2228);
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             *(uint8_t **)&v412.IsInitialized,
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
      *(unsigned int *)(v4 + 2228) = eax45;
      v29 = *(CCINIClass **)(v4 + 2708);
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             (uint8_t *)&stru_830620[81084],
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
      *(unsigned int *)&aP3[8] = 128;
      *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
      *(unsigned int *)aP3 = &stru_87C374[56304];
      *(void **)&v412.IsInitialized = &stru_830620[81068];
      *(unsigned int *)(v4 + 2708) = eax48;
      v31 = *(CCINIClass **)(v4 + 2736);
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             *(uint8_t **)&v412.IsInitialized,
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
      *(unsigned int *)(v4 + 2736) = eax51;
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
      *(unsigned int *)aP2[0] = v21[-6].sectionHead[1];
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             (uint8_t *)&aP2.unknown30,
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
      *(unsigned int *)aP2[0] = *(unsigned int *)v21->__pad_0;
      if ( INIClass::GetString(
             (uint8_t ***)aP0,
             (INIClass *)(v4 + 36),
             (uint8_t *)aP2.sectionHead,
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
      *(unsigned int *)v21->__pad_0 = v32;
      v24 = *(CCINIClass **)(v4 + 2060);
      ++aP2.headNode[2];
      v21 = (CCINIClass *)((char *)v21 + 28);
    }
    while ( aP2.headNode[2] - 1 < (int)v24 );
  }
  if ( *(unsigned char *)(v4 + 2704) )
  {
    *(unsigned int *)(v4 + 2200) = 0;
    *(unsigned int *)(v4 + 2228) = 0;
    *(unsigned int *)(v4 + 2708) = 0;
    *(unsigned int *)(v4 + 2736) = 0;
  }
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1128));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v33 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v33,
                             (uint8_t *)&stru_830620[81056],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1128), *(unsigned int **)aP2[0]);
  eax56 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1144) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1148) = *(unsigned int *)(eax56 + 20);
  *(unsigned int *)(v4 + 1152) = *(unsigned int *)(eax56 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1044));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v35 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v35,
                             (uint8_t *)&stru_830620[81044],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1044), *(unsigned int **)aP2[0]);
  eax56a = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1060) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1064) = *(unsigned int *)(eax56a + 20);
  *(unsigned int *)(v4 + 1068) = *(unsigned int *)(eax56a + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1072));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v37 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v37,
                             (uint8_t *)&stru_830620[81024],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1072), *(unsigned int **)aP2[0]);
  eax56b = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1088) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1092) = *(unsigned int *)(eax56b + 20);
  *(unsigned int *)(v4 + 1096) = *(unsigned int *)(eax56b + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1100));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v39 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v39,
                             (uint8_t *)&stru_830620[81000],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1100), *(unsigned int **)aP2[0]);
  eax56c = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1116) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1120) = *(unsigned int *)(eax56c + 20);
  *(unsigned int *)(v4 + 1124) = *(unsigned int *)(eax56c + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1156));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v41 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v41,
                             (uint8_t *)&stru_830620[80988],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1156), *(unsigned int **)aP2[0]);
  int v51 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1172) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1176) = *(unsigned int *)(v51 + 20);
  *(unsigned int *)(v4 + 1180) = *(unsigned int *)(v51 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1184));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v43 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v43,
                             (uint8_t *)&stru_830620[80968],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1184), *(unsigned int **)aP2[0]);
  int v53 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1200) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1204) = *(unsigned int *)(v53 + 20);
  *(unsigned int *)(v4 + 1208) = *(unsigned int *)(v53 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1212));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v45 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v45,
                             (uint8_t *)&stru_830620[80956],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1212), *(unsigned int **)aP2[0]);
  int v55 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1228) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1232) = *(unsigned int *)(v55 + 20);
  *(unsigned int *)(v4 + 1236) = *(unsigned int *)(v55 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1240));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v47 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v47,
                             (uint8_t *)&stru_830620[80940],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1240), *(unsigned int **)aP2[0]);
  int v57 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1256) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1260) = *(unsigned int *)(v57 + 20);
  *(unsigned int *)(v4 + 1264) = *(unsigned int *)(v57 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  VectorClass_flat::Destroy((int)aP2.sectionHead);
  v49 = *(CCINIClass **)(v4 + 1324);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80928],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    Index = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C);
    if ( Index != (CCINIClass *)-1 )
      v49 = Index;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80916];
  *(unsigned int *)(v4 + 1324) = v49;
  int v60 = *(unsigned int *)(v4 + 1328);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v61; // eax
    || (v61 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v61 == -1) )
  {
    v61 = v60;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80904];
  *(unsigned int *)(v4 + 1328) = v61;
  int v62 = *(unsigned int *)(v4 + 1332);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v63; // eax
    || (v63 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v63 == -1) )
  {
    v63 = v62;
  }
  *(unsigned int *)(v4 + 1332) = v63;
  int v64 = *(unsigned int *)(v4 + 1336);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80892],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v65; // eax
    || (v65 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v65 == -1) )
  {
    v65 = v64;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41908];
  *(unsigned int *)(v4 + 1336) = v65;
  int v66 = *(unsigned int *)(v4 + 1340);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v67; // eax
    || (v67 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v67 == -1) )
  {
    v67 = v66;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41892];
  *(unsigned int *)(v4 + 1340) = v67;
  int v68 = *(unsigned int *)(v4 + 1344);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v69; // eax
    || (v69 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v69 == -1) )
  {
    v69 = v68;
  }
  *(unsigned int *)(v4 + 1344) = v69;
  int v70 = *(unsigned int *)(v4 + 1348);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80876],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v71; // eax
    || (v71 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v71 == -1) )
  {
    v71 = v70;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41876];
  *(unsigned int *)(v4 + 1348) = v71;
  int v72 = *(unsigned int *)(v4 + 1352);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v73; // eax
    || (v73 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v73 == -1) )
  {
    v73 = v72;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80860];
  *(unsigned int *)(v4 + 1352) = v73;
  int v74 = *(unsigned int *)(v4 + 1356);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v75; // eax
    || (v75 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v75 == -1) )
  {
    v75 = v74;
  }
  *(unsigned int *)(v4 + 1356) = v75;
  int v76 = *(unsigned int *)(v4 + 1360);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80844],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v77; // eax
    || (v77 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v77 == -1) )
  {
    v77 = v76;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80828];
  *(unsigned int *)(v4 + 1360) = v77;
  int v78 = *(unsigned int *)(v4 + 1364);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v79; // eax
    || (v79 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v79 == -1) )
  {
    v79 = v78;
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80816];
  *(unsigned int *)(v4 + 1364) = v79;
  int v80 = *(unsigned int *)(v4 + 1368);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v81; // eax
    || (v81 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v81 == -1) )
  {
    v81 = v80;
  }
  *(unsigned int *)(v4 + 1368) = v81;
  int v82 = *(unsigned int *)(v4 + 1372);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80800],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v83; // eax
    || (v83 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v83 == -1) )
  {
    v83 = v82;
  }
  *(unsigned int *)(v4 + 1372) = v83;
  *(unsigned char *)(v4 + 3219) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80788],
                            *(unsigned char *)(v4 + 3219));
  *(unsigned int *)(v4 + 2048) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[80780],
                             *(INIClass **)(v4 + 2048));
  *(unsigned int *)(v4 + 952) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80768],
                            *(INIClass **)(v4 + 952));
  TypeMember_54749E0 = ObjectTypeClass::loadTypeMember_54749E0(
                         (uint8_t ***)aP0,
                         (CCINIClass *)(v4 + 36),
                         (uint8_t *)&stru_830620[80756],
                         *(unsigned int *)(v4 + 956));
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80748];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 956) = TypeMember_54749E0;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)v412.Capacity,
         *(uint8_t **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    DynamicVectorClass_flat::BuildingTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_BuildingTypeClass_const;
    for ( k = strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          k;
          k = strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !*k )
        break;
      *(unsigned int *)aP2[0] = BuildingTypeClass::FindOrCreate(k);
      if ( *(unsigned int *)aP2[0] )
        DynamicVector::Add_Alt3(&aP2.unknown30, (VectorClass_flat *)&aP2);
    }
    TypeList_flat::BuildingTypeCopy(aP2.sectionHead, (VectorClass_flat *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_BuildingTypeClass_const;
    DynamicVectorClass_flat::Destroy((int)&aP2.unknown30);
  }
  else
  {
    TypeList_flat::BuildingTypeCopy(aP2.sectionHead, (VectorClass_flat *)(v4 + 1000));
  }
  VectorClass_flat::CopyBuilding((unsigned int *)(v4 + 1000), (VectorClass_flat *)aP2.sectionHead);
  int v86 = *(unsigned int *)aP2[32];
  int v87 = *(unsigned int *)&aP2[36];
  *(unsigned int *)(v4 + 1024) = *(unsigned int *)&aP2[40];
  *(unsigned int *)(v4 + 1016) = v86;
  *(unsigned int *)(v4 + 1020) = v87;
  aP2.sectionHead[0] = (int)&vt_VectorClass_BuildingTypeClass_const;
  DynamicVectorClass_flat::Destroy((int)aP2.sectionHead);
  v88 = *(BuildingTypeClass **)(v4 + 1028);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80736],
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
  *(unsigned int *)(v4 + 1028) = v89;
  v90 = *(UnitTypeClass **)(v4 + 1032);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80720],
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
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80708];
  *(unsigned int *)(v4 + 1032) = Alt;
  v92 = *(UnitTypeClass **)(v4 + 1036);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         *(uint8_t **)&v412.IsInitialized,
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
  *(unsigned int *)(v4 + 1036) = eax110;
  *(unsigned char *)(v4 + 1040) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80696],
                            *(unsigned char *)(v4 + 1040));
  *(unsigned char *)(v4 + 3366) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80680],
                            *(unsigned char *)(v4 + 3366));
  char v94; // al
  v94 = INIClass::ReadBool_Overwrite(
          (int)aP0,
          (uint8_t *)(v4 + 36),
          (CCINIClass *)&stru_830620[80664],
          *(unsigned char *)(v4 + 3364));
  aP3[8] = *(unsigned char *)(v4 + 3361);
  *(unsigned int *)&aP3[4] = &stru_830620[80652];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned char *)(v4 + 3364) = v94;
  *(unsigned char *)(v4 + 3361) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            *(uint8_t **)aP3,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  al112a = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (uint8_t *)(v4 + 36),
             (CCINIClass *)&stru_830620[80632],
             *(unsigned char *)(v4 + 3362));
  char v96 = *(unsigned char *)(v4 + 3233);
  *(unsigned char *)(v4 + 3362) = al112a;
  al112b = INIClass::ReadBool_Overwrite(
             (int)aP0,
             (uint8_t *)(v4 + 36),
             (CCINIClass *)&stru_830620[80624],
             v96);
  int v98 = *(unsigned int *)(v4 + 1376);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80604];
  v412.Capacity = v4 + 36;
  *(unsigned char *)(v4 + 3233) = al112b;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v99; // eax
    || (v99 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v99 == -1) )
  {
    v99 = v98;
  }
  int v100 = *(unsigned int *)(v4 + 1380);
  *(unsigned int *)(v4 + 1376) = v99;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80584],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v101; // eax
    || (v101 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v101 == -1) )
  {
    v101 = v100;
  }
  v93 = *(CCINIClass **)(v4 + 1384);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80564];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1380) = v101;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
    || (v103 = (CCINIClass *)VocClass::FindIndex(&aP2.CCINIClass_field_4C), v103 == (CCINIClass *)-1) )
  {
    v103 = v93;
  }
  *(unsigned int *)(v4 + 1384) = v103;
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1268));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v95 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v95,
                             (uint8_t *)&stru_830620[80552],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1268), *(unsigned int **)aP2[0]);
  int v105 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1284) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1288) = *(unsigned int *)(v105 + 20);
  *(unsigned int *)(v4 + 1292) = *(unsigned int *)(v105 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL((void *)aP2.sectionHead[1]);
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1296));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v97 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = GetINIClassIntList(
                             (int)aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v97,
                             (uint8_t *)&stru_830620[80540],
                             (void **)v412.vtable0,
                             v412.Items,
                             v412.Capacity,
                             *(int16_t *)&v412.IsInitialized,
                             *(int *)aP3,
                             *(int *)&aP3[4],
                             *(int *)&aP3[8]);
  TypeList_flat::Copy((unsigned int *)(v4 + 1296), *(unsigned int **)aP2[0]);
  int v107 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1312) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1316) = *(unsigned int *)(v107 + 20);
  int v108 = *(unsigned int *)(v107 + 24);
  void * v109 = (void *)aP2.sectionHead[1];
  *(unsigned int *)(v4 + 1320) = v108;
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( v109 && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL(v109);
  int v110 = *(unsigned int *)(v4 + 1388);
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80528],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v111; // eax
    || (v111 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v111 == -1) )
  {
    v111 = v110;
  }
  int v112 = *(unsigned int *)(v4 + 1392);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80512];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1388) = v111;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v113; // eax
    || (v113 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v113 == -1) )
  {
    v113 = v112;
  }
  int v114 = *(unsigned int *)(v4 + 1396);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41860];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1392) = v113;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v115; // eax
    || (v115 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v115 == -1) )
  {
    v115 = v114;
  }
  int v116 = *(unsigned int *)(v4 + 1400);
  *(unsigned int *)(v4 + 1396) = v115;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[41844],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v117; // eax
    || (v117 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v117 == -1) )
  {
    v117 = v116;
  }
  int v118 = *(unsigned int *)(v4 + 1404);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80496];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1400) = v117;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v119; // eax
    || (v119 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v119 == -1) )
  {
    v119 = v118;
  }
  int v120 = *(unsigned int *)(v4 + 1408);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80468];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1404) = v119;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v121; // eax
    || (v121 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v121 == -1) )
  {
    v121 = v120;
  }
  int v122 = *(unsigned int *)(v4 + 1412);
  *(unsigned int *)(v4 + 1408) = v121;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80436],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v123; // eax
    || (v123 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v123 == -1) )
  {
    v123 = v122;
  }
  int v124 = *(unsigned int *)(v4 + 1416);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80408];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1412) = v123;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v125; // eax
    || (v125 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v125 == -1) )
  {
    v125 = v124;
  }
  int v126 = *(unsigned int *)(v4 + 1420);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80376];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1416) = v125;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v127; // eax
    || (v127 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v127 == -1) )
  {
    v127 = v126;
  }
  int v128 = *(unsigned int *)(v4 + 1424);
  *(unsigned int *)(v4 + 1420) = v127;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[80364],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v129; // eax
    || (v129 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v129 == -1) )
  {
    v129 = v128;
  }
  int v130 = *(unsigned int *)(v4 + 1428);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80348];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1424) = v129;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v131; // eax
    || (v131 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v131 == -1) )
  {
    v131 = v130;
  }
  int v132 = *(unsigned int *)(v4 + 1432);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41232];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1428) = v131;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v133; // eax
    || (v133 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v133 == -1) )
  {
    v133 = v132;
  }
  int v134 = *(unsigned int *)(v4 + 1436);
  *(unsigned int *)(v4 + 1432) = v133;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[41212],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v135; // eax
    || (v135 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v135 == -1) )
  {
    v135 = v134;
  }
  int v136 = *(unsigned int *)(v4 + 1440);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41188];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1436) = v135;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v137; // eax
    || (v137 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v137 == -1) )
  {
    v137 = v136;
  }
  int v138 = *(unsigned int *)(v4 + 1444);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41164];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1440) = v137;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v139; // eax
    || (v139 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v139 == -1) )
  {
    v139 = v138;
  }
  int v140 = *(unsigned int *)(v4 + 1448);
  *(unsigned int *)(v4 + 1444) = v139;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)(v4 + 36),
          (uint8_t *)&stru_830620[41148],
          (INIClass *)&stru_87C374[56304],
          (INIClass *)&aP2.CCINIClass_field_4C,
          128)
  int v141; // eax
    || (v141 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v141 == -1) )
  {
    v141 = v140;
  }
  int v142 = *(unsigned int *)(v4 + 1452);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41132];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1448) = v141;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v143; // eax
    || (v143 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v143 == -1) )
  {
    v143 = v142;
  }
  int v144 = *(unsigned int *)(v4 + 1456);
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[41252];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1452) = v143;
  if ( !INIClass::GetString(
          (uint8_t ***)aP0,
          (INIClass *)v412.Capacity,
          *(uint8_t **)&v412.IsInitialized,
          *(INIClass **)aP3,
          *(INIClass **)&aP3[4],
          *(int *)&aP3[8])
  int v145; // eax
    || (v145 = VocClass::FindIndex(&aP2.CCINIClass_field_4C), v145 == -1) )
  {
    v145 = v144;
  }
  *(unsigned int *)(v4 + 1456) = v145;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&g_INI_Key_Speed.needsSave_flag,
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass_flat::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( m = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          m;
          m = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !m->__pad_0[0] )
        break;
      *(unsigned int *)aP2[0] = AnimTypeClass::FindOrCreate(m);
      if ( *(unsigned int *)aP2[0] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass_flat *)&aP2);
    }
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass_flat::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)(v4 + 1836));
  }
  VectorClass_flat::CopyDefault((unsigned int *)(v4 + 1836), (VectorClass_flat *)aP2.sectionHead);
  int v147 = *(unsigned int *)&aP2[36];
  int v148 = *(unsigned int *)&aP2[40];
  *(unsigned int *)(v4 + 1852) = *(unsigned int *)aP2[32];
  void * v149 = (void *)aP2.sectionHead[1];
  *(unsigned int *)(v4 + 1856) = v147;
  *(unsigned int *)(v4 + 1860) = v148;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v149 && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL(v149);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80336],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    DynamicVectorClass_flat::AnimTypeConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_AnimTypeClass_const;
    for ( n = (AbstractClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          n;
          n = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !n->__pad_0[0] )
        break;
      *(unsigned int *)aP2[0] = AnimTypeClass::FindOrCreate(n);
      if ( *(unsigned int *)aP2[0] )
        DynamicVector::Add_Alt4(&aP2.unknown30, (VectorClass_flat *)&aP2);
    }
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass_flat::Destroy_Alt((int)&aP2.unknown30);
  }
  else
  {
    TypeList_flat::AnimTypeCopy(aP2.sectionHead, (VectorClass_flat *)(v4 + 1864));
  }
  VectorClass_flat::CopyDefault((unsigned int *)(v4 + 1864), (VectorClass_flat *)aP2.sectionHead);
  int v151 = *(unsigned int *)&aP2[36];
  int v152 = *(unsigned int *)&aP2[40];
  *(unsigned int *)(v4 + 1880) = *(unsigned int *)aP2[32];
  void * v153 = (void *)aP2.sectionHead[1];
  *(unsigned int *)(v4 + 1884) = v151;
  *(unsigned int *)(v4 + 1888) = v152;
  aP2.sectionHead[0] = (int)&vt_VectorClass_AnimTypeClass_const;
  if ( v153 && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL(v153);
  v154 = *(ParticleSystemTypeClass **)(v4 + 1892);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80312],
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
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[80284];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1892) = v155;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)v412.Capacity,
         *(uint8_t **)&v412.IsInitialized,
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
  *(unsigned int *)&aP3[8] = v4 + 1896;
  *(unsigned int *)&aP3[4] = &stru_830620[80260];
  *(unsigned int *)aP3 = v4 + 36;
  *(void **)&v412.IsInitialized = &aP2.unknown30;
  *(unsigned int *)(v4 + 1908) = v157;
  Coord2 = INIClass::GetCoord2(
             (uint8_t ***)aP0,
             *(int **)&v412.IsInitialized,
             *(CCINIClass **)aP3,
             *(uint8_t **)&aP3[4],
             *(int **)&aP3[8]);
  int v159 = *Coord2;
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)(v4 + 1896) = v159;
  int v160 = Coord2[1];
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)(v4 + 1900) = v160;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  int v161 = Coord2[2];
  *(void **)&v412.IsInitialized = &stru_830620[80236];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1904) = v161;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)v412.Capacity,
         *(uint8_t **)&v412.IsInitialized,
         *(INIClass **)aP3,
         *(INIClass **)&aP3[4],
         *(int *)&aP3[8]) )
  {
    TypeList_flat::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( ii = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          ii;
          ii = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !ii->__pad_0[0] )
        break;
      *(unsigned int *)aP2[0] = BuildingTypeClass::LoadOrGet(ii);
      if ( *(unsigned int *)aP2[0] )
        TypeList_flat::PushBack(&aP2.unknown30, (VectorClass_flat *)&aP2);
    }
    VectorClass_flat::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass_flat::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass_flat::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1912));
  }
  ObjectTypeClass::loadTypeMember_5717C00((unsigned int *)(v4 + 1912), aP2.sectionHead);
  int v163 = *(unsigned int *)aP2[32];
  int v164 = *(unsigned int *)&aP2[36];
  *(unsigned int *)(v4 + 1936) = *(unsigned int *)&aP2[40];
  void * v165 = (void *)aP2.sectionHead[1];
  *(unsigned int *)(v4 + 1928) = v163;
  *(unsigned int *)(v4 + 1932) = v164;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v165 && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL(v165);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[80212],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    TypeList_flat::ParticleConstructor(&aP2.unknown30, 0, 0);
    aP2.unknown30 = (int)&vt_TypeList_ParticleSystemTypeClass_const;
    for ( jj = (ObjectClass *)strtok((char *)&aP2.CCINIClass_field_4C, (ObjectClass *)&stru_817F40.nextObject);
          jj;
          jj = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
    {
      if ( !jj->__pad_0[0] )
        break;
      *(unsigned int *)aP2[0] = BuildingTypeClass::LoadOrGet(jj);
      if ( *(unsigned int *)aP2[0] )
        TypeList_flat::PushBack(&aP2.unknown30, (VectorClass_flat *)&aP2);
    }
    VectorClass_flat::CopyParticle(aP2.sectionHead, (DynamicVector *)&aP2.unknown30);
    aP2.unknown30 = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
    VectorClass_flat::Cleanup((int)&aP2.unknown30);
  }
  else
  {
    VectorClass_flat::CopyParticle(aP2.sectionHead, (DynamicVector *)(v4 + 1940));
  }
  ObjectTypeClass::loadTypeMember_5717C00((unsigned int *)(v4 + 1940), aP2.sectionHead);
  int v167 = *(unsigned int *)aP2[32];
  int v168 = *(unsigned int *)&aP2[36];
  *(unsigned int *)(v4 + 1964) = *(unsigned int *)&aP2[40];
  void * v169 = (void *)aP2.sectionHead[1];
  *(unsigned int *)(v4 + 1956) = v167;
  *(unsigned int *)(v4 + 1960) = v168;
  aP2.sectionHead[0] = (int)&vt_VectorClass_ParticleSystemTypeClass_const;
  if ( v169 && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL(v169);
  eax231 = INIClass::GetCoord2(
             (uint8_t ***)aP0,
             &aP2.unknown30,
             (CCINIClass *)(v4 + 36),
             (uint8_t *)&stru_830620[80192],
             (int *)(v4 + 1968));
  *(unsigned int *)(v4 + 1968) = *eax231;
  *(unsigned int *)(v4 + 1972) = eax231[1];
  edx231 = eax231[2];
  aP3[8] = *(unsigned char *)(v4 + 1980);
  *(unsigned int *)&aP3[4] = &stru_830620[80172];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1976) = edx231;
  char v172 = INIClass::ReadBool_Overwrite((int)aP0, *(uint8_t **)aP3, *(CCINIClass **)&aP3[4], aP3[8]);
  *(unsigned int *)&aP3[8] = v4 + 1984;
  *(unsigned int *)&aP3[4] = &stru_830620[80152];
  *(unsigned int *)aP3 = v4 + 36;
  *(void **)&v412.IsInitialized = &aP2.unknown30;
  *(unsigned char *)(v4 + 1980) = v172;
  eax231a = INIClass::GetCoord2(
              (uint8_t ***)aP0,
              *(int **)&v412.IsInitialized,
              *(CCINIClass **)aP3,
              *(uint8_t **)&aP3[4],
              *(int **)&aP3[8]);
  *(unsigned int *)(v4 + 1984) = *eax231a;
  *(unsigned int *)(v4 + 1988) = eax231a[1];
  *(unsigned int *)(v4 + 1992) = eax231a[2];
  eax231b = INIClass::GetCoord2(
              (uint8_t ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (uint8_t *)&stru_830620[80128],
              (int *)(v4 + 1996));
  *(unsigned int *)(v4 + 1996) = *eax231b;
  *(unsigned int *)(v4 + 2000) = eax231b[1];
  *(unsigned int *)(v4 + 2004) = eax231b[2];
  int *v175; // eax
  v175 = INIClass::GetCoord2(
           (uint8_t ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (uint8_t *)&stru_830620[80104],
           (int *)(v4 + 2008));
  *(unsigned int *)(v4 + 2008) = *v175;
  *(unsigned int *)(v4 + 2012) = v175[1];
  *(unsigned int *)(v4 + 2016) = v175[2];
  int *v176; // eax
  v176 = INIClass::GetCoord2(
           (uint8_t ***)aP0,
           &aP2.unknown30,
           (CCINIClass *)(v4 + 36),
           (uint8_t *)&stru_830620[80076],
           (int *)(v4 + 2020));
  *(unsigned int *)(v4 + 2020) = *v176;
  *(unsigned int *)(v4 + 2024) = v176[1];
  *(unsigned int *)(v4 + 2028) = v176[2];
  eax231e = INIClass::GetCoord2(
              (uint8_t ***)aP0,
              &aP2.unknown30,
              (CCINIClass *)(v4 + 36),
              (uint8_t *)&stru_830620[80052],
              (int *)(v4 + 2032));
  *(unsigned int *)(v4 + 2032) = *eax231e;
  *(unsigned int *)(v4 + 2036) = eax231e[1];
  *(unsigned int *)(v4 + 2040) = eax231e[2];
  *(unsigned char *)(v4 + 3230) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80044],
                            *(unsigned char *)(v4 + 3230));
  *(unsigned char *)(v4 + 3231) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80032],
                            *(unsigned char *)(v4 + 3231));
  *(unsigned char *)(v4 + 3232) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80020],
                            *(unsigned char *)(v4 + 3232));
  *(unsigned char *)(v4 + 3280) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[80008],
                            *(unsigned char *)(v4 + 3280));
  *(unsigned char *)(v4 + 3281) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79992],
                            *(unsigned char *)(v4 + 3281));
  *(unsigned char *)(v4 + 3282) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79972],
                            (INIClass *)*(char *)(v4 + 3282));
  *(unsigned char *)(v4 + 3283) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79948],
                            (INIClass *)*(char *)(v4 + 3283));
  *(unsigned char *)(v4 + 3284) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79936],
                            *(unsigned char *)(v4 + 3284));
  *(unsigned char *)(v4 + 3229) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79928],
                            *(unsigned char *)(v4 + 3229));
  *(unsigned char *)(v4 + 3285) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79916],
                            *(unsigned char *)(v4 + 3285));
  *(unsigned int *)(v4 + 3288) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79900],
                             *(INIClass **)(v4 + 3288));
  *(unsigned int *)(v4 + 3340) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79892],
                             *(INIClass **)(v4 + 3340));
  *(unsigned int *)(v4 + 3344) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79880],
                             *(INIClass **)(v4 + 3344));
  if ( *(unsigned char *)(v4 + 3285) && *(int *)(v4 + 3288) > 1 )
  {
    aP2.headNode[2] = 1;
    v178 = (INIClass **)(v4 + 3316);
    do
    {
      sprintf(aP2[0], (ObjectClass *)&stru_830620[79872], (INIClass *)aP2.headNode[2]);
      sprintf((char *const)&aP2.unknown30, (ObjectClass *)&stru_830620[79856], (INIClass *)aP2.headNode[2]);
      *(v178 - 6) = (INIClass *)INIClass::ReadInt_Overwrite((int)aP0, (uint8_t *)(v4 + 36), &aP2, *(v178 - 6));
      *v178 = (INIClass *)INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&aP2.unknown30,
                            *v178);
      v170 = *(CCINIClass **)(v4 + 3288);
      ++v178;
      ++aP2.headNode[2];
    }
    while ( aP2.headNode[2] - 1 < (int)v170 );
  }
  *(unsigned int *)(v4 + 980) = ObjectTypeClass::loadTypeMember_5474940(
                            (uint8_t ***)aP0,
                            (CCINIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[79844],
                            *(unsigned int *)(v4 + 980));
  *(unsigned char *)(v4 + 984) = INIClass::ReadBool_Overwrite(
                           (int)aP0,
                           (uint8_t *)(v4 + 36),
                           (CCINIClass *)&stru_830620[79828],
                           *(unsigned char *)(v4 + 984));
  *(unsigned int *)(v4 + 988) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79804],
                            *(INIClass **)(v4 + 988));
  *(unsigned int *)(v4 + 992) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79776],
                            *(INIClass **)(v4 + 992));
  *(unsigned int *)(v4 + 996) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79768],
                            *(INIClass **)(v4 + 996));
  *(unsigned int *)aP2[0] = &v412;
  DynamicVectorClass_flat::Copy(&v412, (DynamicVector *)(v4 + 1592));
  **(unsigned int **)aP2[0] = &vt_TypeList_int;
  v171 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v171,
                             (uint8_t *)&stru_830620[79752],
                             v412);
  TypeList_flat::Copy((unsigned int *)(v4 + 1592), *(unsigned int **)aP2[0]);
  int v181 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1608) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1612) = *(unsigned int *)(v181 + 20);
  *(unsigned int *)(v4 + 1616) = *(unsigned int *)(v181 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL((void *)aP2.sectionHead[1]);
  *(unsigned int *)aP2[0] = &v412;
  IntVector::Copy(&v412, (VectorClass_flat *)(v4 + 1620));
  v173 = *(CCINIClass **)aP2[0];
  *(unsigned int *)(*(unsigned int *)aP2[0] + 16) = *(unsigned int *)(v4 + 1636);
  v173->sectionHead[1] = *(unsigned int *)(v4 + 1640);
  *(unsigned int *)v173->__pad_0 = &vt_TypeList_int;
  v174 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)aP2[0] = LoadBuildingTypeClassPrerequisites(
                             aP2.sectionHead,
                             (uint8_t ***)aP0,
                             v174,
                             (uint8_t *)&stru_830620[79728],
                             v412);
  TypeList_flat::Copy((unsigned int *)(v4 + 1620), *(unsigned int **)aP2[0]);
  int v184 = *(unsigned int *)aP2[0];
  *(unsigned int *)(v4 + 1636) = *(unsigned int *)(*(unsigned int *)aP2[0] + 16);
  *(unsigned int *)(v4 + 1640) = *(unsigned int *)(v184 + 20);
  *(unsigned int *)(v4 + 1644) = *(unsigned int *)(v184 + 24);
  aP2.sectionHead[0] = (int)&vt_VectorClass_int;
  if ( aP2.sectionHead[1] && IDA_BYTE1(aP2.sectionCount) )
    RA2_OPDEL((void *)aP2.sectionHead[1]);
  *(unsigned int *)(v4 + 1512) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79720],
                             *(INIClass **)(v4 + 1512));
  *(unsigned char *)(v4 + 3388) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79700],
                            *(unsigned char *)(v4 + 3388));
  *(unsigned char *)(v4 + 3389) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79680],
                            *(unsigned char *)(v4 + 3389));
  *(unsigned int *)(v4 + 1520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79664],
                             *(INIClass **)(v4 + 1520));
  *(unsigned int *)(v4 + 1524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79644],
                             *(INIClass **)(v4 + 1524));
  *(unsigned int *)(v4 + 1528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79632],
                             *(INIClass **)(v4 + 1528));
  *(unsigned int *)(v4 + 1532) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79612],
                             *(INIClass **)(v4 + 1532));
  *(unsigned int *)(v4 + 1548) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79588],
                             *(INIClass **)(v4 + 1548));
  *(double *)&aP3[4] = *(float *)(v4 + 1544);
  *(float *)(v4 + 1544) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[79568],
                            *(INIClass **)&aP3[4]);
  *(unsigned char *)(v4 + 1518) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79556],
                            *(unsigned char *)(v4 + 1518));
  *(unsigned char *)(v4 + 1519) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79544],
                            *(unsigned char *)(v4 + 1519));
  *(unsigned char *)(v4 + 1508) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79532],
                            *(unsigned char *)(v4 + 1508));
  *(unsigned char *)(v4 + 1516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79512],
                            *(unsigned char *)(v4 + 1516));
  *(unsigned char *)(v4 + 1517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79492],
                            *(unsigned char *)(v4 + 1517));
  *(unsigned char *)(v4 + 3375) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79480],
                            *(unsigned char *)(v4 + 3375));
  *(unsigned char *)(v4 + 3376) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79464],
                            *(unsigned char *)(v4 + 3376));
  *(unsigned char *)(v4 + 3377) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79448],
                            *(unsigned char *)(v4 + 3377));
  *(unsigned char *)(v4 + 3378) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79428],
                            *(unsigned char *)(v4 + 3378));
  *(unsigned char *)(v4 + 3481) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79408],
                            *(unsigned char *)(v4 + 3481));
  *(unsigned char *)(v4 + 3482) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79392],
                            *(unsigned char *)(v4 + 3482));
  *(unsigned char *)(v4 + 3379) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79372],
                            *(unsigned char *)(v4 + 3379));
  *(unsigned char *)(v4 + 3380) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79348],
                            *(unsigned char *)(v4 + 3380));
  *(unsigned char *)(v4 + 3483) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79324],
                            *(unsigned char *)(v4 + 3483));
  *(unsigned char *)(v4 + 3484) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79296],
                            *(unsigned char *)(v4 + 3484));
  *(unsigned char *)(v4 + 3485) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[79268],
                            *(unsigned char *)(v4 + 3485));
  *(unsigned int *)(v4 + 3488) = INIClass::ParseFlagList(
                             (uint8_t ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (uint8_t *)&stru_830620[79252],
                             *(unsigned int *)(v4 + 3488));
  *(unsigned int *)(v4 + 3496) = INIClass::ParseFlagList(
                             (uint8_t ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (uint8_t *)&stru_830620[79236],
                             *(unsigned int *)(v4 + 3496));
  *(unsigned int *)(v4 + 3492) = INIClass::ParseFlagList(
                             (uint8_t ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (uint8_t *)&stru_830620[79220],
                             *(unsigned int *)(v4 + 3492));
  *(unsigned int *)(v4 + 1588) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             aTechlevel,
                             *(INIClass **)(v4 + 1588));
  *(unsigned int *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (uint8_t *)(v4 + 36),
                         (CCINIClass *)&stru_830620[79204],
                         *(INIClass **)(v4 + 1564));
  *(unsigned int *)&aP3[4] = &stru_830620[79184];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1564) = *(unsigned int *)&aP3[8];
  *(unsigned int *)(v4 + 1568) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             *(uint8_t **)aP3,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  v177 = *(CCINIClass **)(v4 + 1572);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[79164],
         (INIClass *)&stru_87C374[56304],
         (INIClass *)&aP2.CCINIClass_field_4C,
         128) )
  {
    v177 = (CCINIClass *)KeywordClass::FindOrCreate((ObjectClass *)&aP2.CCINIClass_field_4C);
  }
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[79140];
  v412.Capacity = v4 + 36;
  *(unsigned int *)(v4 + 1572) = v177;
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)v412.Capacity,
         *(uint8_t **)&v412.IsInitialized,
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
  *(unsigned int *)(v4 + 1576) = v186;
  *(unsigned int *)&aP3[8] = INIClass::ReadInt_Overwrite(
                         (int)aP0,
                         (uint8_t *)(v4 + 36),
                         (CCINIClass *)&stru_830620[79116],
                         *(INIClass **)(v4 + 1580));
  *(unsigned int *)&aP3[4] = &stru_830620[79088];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1580) = *(unsigned int *)&aP3[8];
  int v187 = INIClass::ReadInt_Overwrite((int)aP0, *(uint8_t **)aP3, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = -1;
  *(unsigned int *)&aP3[4] = &g_INI_Key_Speed;
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1584) = v187;
  eax246 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             *(uint8_t **)aP3,
             *(CCINIClass **)&aP3[4],
             *(INIClass **)&aP3[8]);
  if ( eax246 != -1 )
  {
    if ( eax246 >= 100 )
      eax246 = 100;
    int v189 = ((eax246 <= 0 ? 0 : eax246) << 8) / 100;
    if ( v189 >= 255 )
      v189 = 255;
    *(unsigned int *)(v4 + 1656) = v189;
  }
  *(unsigned int *)(v4 + 1552) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_825430.ownsFile,
                             *(INIClass **)(v4 + 1552));
  *(unsigned int *)(v4 + 1556) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79080],
                             *(INIClass **)(v4 + 1556));
  edi252 = *(UnitTypeClass **)(v4 + 1720);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         (uint8_t *)&stru_830620[79064],
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
  *(unsigned int *)&aP3[8] = 128;
  *(unsigned int *)&aP3[4] = &aP2.CCINIClass_field_4C;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(unsigned int *)&v412.IsInitialized = aDeployinganim;
  *(unsigned int *)(v4 + 1720) = v191;
  edi255 = *(AnimTypeClass **)(v4 + 1724);
  if ( INIClass::GetString(
         (uint8_t ***)aP0,
         (INIClass *)(v4 + 36),
         *(uint8_t **)&v412.IsInitialized,
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
  *(unsigned int *)(v4 + 1724) = eax256;
  *(unsigned int *)(v4 + 1664) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79052],
                             *(INIClass **)(v4 + 1664));
  *(unsigned int *)(v4 + 1668) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_81BBC8.sectionHead[2],
                             *(INIClass **)(v4 + 1668));
  *(unsigned int *)(v4 + 1672) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79044],
                             *(INIClass **)(v4 + 1672));
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1676);
  *(unsigned int *)&aP3[4] = &stru_830620[79028];
  *(unsigned int *)aP3 = v4 + 36;
  *(unsigned int *)(v4 + 1676) = INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], v414, v415);
  *(unsigned int *)(v4 + 1700) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[79008],
                             *(INIClass **)(v4 + 1700));
  *(unsigned int *)(v4 + 1704) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78988],
                             *(INIClass **)(v4 + 1704));
  *(unsigned char *)(v4 + 1708) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78976],
                            *(unsigned char *)(v4 + 1708));
  *(unsigned char *)(v4 + 1709) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78960],
                            *(unsigned char *)(v4 + 1709));
  *(unsigned char *)(v4 + 1710) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78948],
                            *(unsigned char *)(v4 + 1710));
  *(unsigned char *)(v4 + 1711) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78932],
                            *(unsigned char *)(v4 + 1711));
  *(unsigned char *)(v4 + 1712) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78916],
                            *(unsigned char *)(v4 + 1712));
  *(unsigned int *)(v4 + 1688) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78908],
                             *(INIClass **)(v4 + 1688));
  *(unsigned int *)(v4 + 1692) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78896],
                             *(INIClass **)(v4 + 1692));
  *(unsigned int *)(v4 + 1696) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78880],
                             *(INIClass **)(v4 + 1696));
  *(unsigned char *)(v4 + 1713) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78856],
                            *(unsigned char *)(v4 + 1713));
  *(double *)&aP3[4] = *(float *)(v4 + 1716);
  *(float *)(v4 + 1716) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            (INIClass *)(v4 + 36),
                            (uint8_t *)&stru_830620[78824],
                            *(INIClass **)&aP3[4]);
  *(unsigned char *)(v4 + 1680) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78808],
                            *(unsigned char *)(v4 + 1680));
  *(unsigned char *)(v4 + 1681) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78796],
                            *(unsigned char *)(v4 + 1681));
  *(unsigned char *)(v4 + 1682) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78788],
                            *(unsigned char *)(v4 + 1682));
  *(unsigned char *)(v4 + 1683) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78780],
                            *(unsigned char *)(v4 + 1683));
  *(unsigned char *)(v4 + 1684) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78768],
                            *(unsigned char *)(v4 + 1684));
  *(unsigned char *)(v4 + 1685) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78756],
                            *(unsigned char *)(v4 + 1685));
  *(unsigned char *)(v4 + 1736) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78736],
                            *(unsigned char *)(v4 + 1736));
  eax258 = INIClass::ReadInt_Overwrite(
             (int)aP0,
             (uint8_t *)(v4 + 36),
             (CCINIClass *)&stru_830620[78728],
             *(INIClass **)(v4 + 1832));
  *(unsigned int *)(v4 + 1832) = eax258;
  *(unsigned int *)(v4 + 1652) = eax258;
  *(unsigned int *)(v4 + 1648) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78716],
                             *(INIClass **)(v4 + 1648));
  *(unsigned int *)(v4 + 1740) = INIClass::ParseFlagList(
                             (uint8_t ***)aP0,
                             (CCINIClass *)(v4 + 36),
                             (uint8_t *)&stru_830620[78708],
                             *(unsigned int *)(v4 + 1740));
  *(unsigned int *)(v4 + 1744) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)(v4 + 36),
                             (CCINIClass *)&stru_830620[78688],
                             *(INIClass **)(v4 + 1744));
  *(unsigned char *)(v4 + 3214) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78676],
                            *(unsigned char *)(v4 + 3214));
  *(unsigned char *)(v4 + 3277) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78668],
                            *(unsigned char *)(v4 + 3277));
  *(unsigned char *)(v4 + 2053) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78660],
                            *(unsigned char *)(v4 + 2053));
  *(unsigned char *)(v4 + 3278) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78652],
                            *(unsigned char *)(v4 + 3278));
  *(unsigned char *)(v4 + 3276) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78640],
                            *(unsigned char *)(v4 + 3276));
  *(unsigned char *)(v4 + 3226) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)(v4 + 36),
                            (CCINIClass *)&stru_830620[78628],
                            *(unsigned char *)(v4 + 3226));
  IDA_LOBYTE(ecx258) = *(unsigned char *)(v4 + 3227);
  *(unsigned int *)&aP3[8] = ecx258;
  *(unsigned int *)&aP3[4] = &stru_830620[78612];
  v188 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3227) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v188,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258) = *(unsigned char *)(v4 + 3348);
  *(unsigned int *)&aP3[8] = edx258;
  *(unsigned int *)&aP3[4] = &stru_830620[78600];
  v190 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3348) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v190,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258a) = *(unsigned char *)(v4 + 3360);
  *(unsigned int *)&aP3[8] = eax258a;
  *(unsigned int *)&aP3[4] = &stru_830620[78588];
  v192 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3360) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v192,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1820);
  *(unsigned int *)&aP3[4] = &stru_81B138.INIClass_field_2C;
  v193 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 1820) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v193,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1504);
  *(unsigned int *)&aP3[4] = &stru_81BBC8.headNode[2];
  v194 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 1504) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v194,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 976);
  *(unsigned int *)&aP3[4] = &stru_830620[78576];
  v195 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 976) = INIClass::ReadInt_Overwrite(
                            (int)aP0,
                            (uint8_t *)v195,
                            *(CCINIClass **)&aP3[4],
                            *(INIClass **)&aP3[8]);
  int v204 = *(unsigned int *)(v4 + 968);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 972);
  *(unsigned int *)&aP3[4] = v204;
  *(unsigned int *)aP3 = &stru_830620[78564];
  v196 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 968) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v196,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1732);
  *(unsigned int *)&aP3[4] = &stru_830620[78548];
  v197 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 1732) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v197,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  IDA_LOBYTE(ecx258a) = *(unsigned char *)(v4 + 3223);
  *(unsigned int *)&aP3[8] = ecx258a;
  *(unsigned int *)&aP3[4] = &stru_830620[78536];
  v199 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3223) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v199,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258b) = *(unsigned char *)(v4 + 3222);
  *(unsigned int *)&aP3[8] = edx258b;
  *(unsigned int *)&aP3[4] = &stru_830620[78524];
  v201 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3222) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v201,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258b) = *(unsigned char *)(v4 + 3218);
  *(unsigned int *)&aP3[8] = eax258b;
  *(unsigned int *)&aP3[4] = &stru_830620[50772];
  v203 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3218) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v203,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258b) = *(unsigned char *)(v4 + 3217);
  *(unsigned int *)&aP3[8] = ecx258b;
  *(unsigned int *)&aP3[4] = &stru_830620[78508];
  v205 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3217) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v205,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258c) = *(unsigned char *)(v4 + 1749);
  *(unsigned int *)&aP3[8] = edx258c;
  *(unsigned int *)&aP3[4] = &stru_830620[78480];
  v207 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 1749) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v207,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258c) = *(unsigned char *)(v4 + 1748);
  *(unsigned int *)&aP3[8] = eax258c;
  *(unsigned int *)&aP3[4] = &stru_830620[78468];
  v209 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 1748) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v209,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258c) = *(unsigned char *)(v4 + 3216);
  *(unsigned int *)&aP3[8] = ecx258c;
  *(unsigned int *)&aP3[4] = &stru_830620[78456];
  v211 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3216) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v211,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258d) = *(unsigned char *)(v4 + 3367);
  *(unsigned int *)&aP3[8] = edx258d;
  *(unsigned int *)&aP3[4] = &stru_830620[78440];
  v213 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3367) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v213,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258d) = *(unsigned char *)(v4 + 3368);
  *(unsigned int *)&aP3[8] = eax258d;
  *(unsigned int *)&aP3[4] = &stru_81BB58;
  v215 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3368) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v215,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258d) = *(unsigned char *)(v4 + 3369);
  *(unsigned int *)&aP3[8] = ecx258d;
  *(unsigned int *)&aP3[4] = &stru_830620[78428];
  v217 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3369) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v217,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258e) = *(unsigned char *)(v4 + 3370);
  *(unsigned int *)&aP3[8] = edx258e;
  *(unsigned int *)&aP3[4] = &stru_830620[78408];
  v219 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3370) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v219,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258e) = *(unsigned char *)(v4 + 3373);
  *(unsigned int *)&aP3[8] = eax258e;
  *(unsigned int *)&aP3[4] = &stru_830620[52920];
  v221 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3373) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v221,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258e) = *(unsigned char *)(v4 + 3383);
  *(unsigned int *)&aP3[8] = ecx258e;
  *(unsigned int *)&aP3[4] = &stru_830620[78388];
  v223 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3383) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v223,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258f) = *(unsigned char *)(v4 + 3433);
  *(unsigned int *)&aP3[8] = edx258f;
  *(unsigned int *)&aP3[4] = &stru_830620[78376];
  v225 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3433) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v225,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v235; // eax
  IDA_LOBYTE(v235) = *(unsigned char *)(v4 + 3434);
  *(unsigned int *)&aP3[8] = v235;
  *(unsigned int *)&aP3[4] = &stru_830620[78360];
  v227 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3434) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v227,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258f) = *(unsigned char *)(v4 + 3390);
  *(unsigned int *)&aP3[8] = ecx258f;
  *(unsigned int *)&aP3[4] = &stru_830620[78352];
  v229 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3390) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v229,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3392);
  *(unsigned int *)&aP3[4] = &stru_830620[78340];
  v230 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3392) = GetINIClassInt((uint8_t ***)aP0, v230, *(uint8_t **)&aP3[4], *(int *)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3400);
  *(unsigned int *)&aP3[4] = &stru_830620[78324];
  v231 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3400) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v231,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3396);
  *(unsigned int *)&aP3[4] = &stru_830620[78308];
  v232 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3396) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v232,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3404);
  *(unsigned int *)&aP3[4] = &stru_830620[78292];
  v233 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3404) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v233,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3408);
  *(unsigned int *)&aP3[4] = &stru_830620[78272];
  v234 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3408) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v234,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  IDA_LOBYTE(ecx258g) = *(unsigned char *)(v4 + 3412);
  *(unsigned int *)&aP3[8] = ecx258g;
  *(unsigned int *)&aP3[4] = &stru_830620[78264];
  v236 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3412) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v236,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3416);
  *(unsigned int *)&aP3[4] = &stru_8184C8;
  v237 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3416) = GetINIClassKeyword(
                             (uint8_t ***)aP0,
                             v237,
                             *(uint8_t **)&aP3[4],
                             *(int *)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3424);
  *(unsigned int *)&aP3[4] = &stru_830620[78248];
  v238 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3424) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v238,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3420);
  *(unsigned int *)&aP3[4] = &stru_830620[78232];
  v239 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3420) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v239,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3428);
  *(unsigned int *)&aP3[4] = &stru_830620[78216];
  v240 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258g = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v240,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  *(unsigned int *)(v4 + 3428) = eax258g;
  IDA_LOBYTE(eax258g) = *(unsigned char *)(v4 + 3432);
  *(unsigned int *)&aP3[8] = eax258g;
  *(unsigned int *)&aP3[4] = &stru_830620[78200];
  v242 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3432) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v242,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258h) = *(unsigned char *)(v4 + 3385);
  *(unsigned int *)&aP3[8] = ecx258h;
  *(unsigned int *)&aP3[4] = &stru_830620[78180];
  v244 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3385) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v244,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258g) = *(unsigned char *)(v4 + 3386);
  *(unsigned int *)&aP3[8] = edx258g;
  *(unsigned int *)&aP3[4] = &stru_830620[78168];
  v246 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3386) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v246,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258h) = *(unsigned char *)(v4 + 3384);
  *(unsigned int *)&aP3[8] = eax258h;
  *(unsigned int *)&aP3[4] = &stru_830620[78152];
  v248 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3384) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v248,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258i) = *(unsigned char *)(v4 + 3381);
  *(unsigned int *)&aP3[8] = ecx258i;
  *(unsigned int *)&aP3[4] = &stru_830620[78132];
  v250 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3381) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v250,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258h) = *(unsigned char *)(v4 + 3382);
  *(unsigned int *)&aP3[8] = edx258h;
  *(unsigned int *)&aP3[4] = &stru_830620[78108];
  v252 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3382) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v252,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v262; // eax
  IDA_LOBYTE(v262) = *(unsigned char *)(v4 + 3478);
  *(unsigned int *)&aP3[8] = v262;
  *(unsigned int *)&aP3[4] = &stru_830620[78088];
  v254 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3478) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v254,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx258j) = *(unsigned char *)(v4 + 3374);
  *(unsigned int *)&aP3[8] = ecx258j;
  *(unsigned int *)&aP3[4] = &stru_830620[78076];
  v256 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3374) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v256,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258i) = *(unsigned char *)(v4 + 3479);
  *(unsigned int *)&aP3[8] = edx258i;
  *(unsigned int *)&aP3[4] = &stru_830620[78068];
  v258 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3479) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v258,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax258j) = *(unsigned char *)(v4 + 3387);
  *(unsigned int *)&aP3[8] = eax258j;
  *(unsigned int *)&aP3[4] = &stru_830620[78052];
  v260 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3387) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v260,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3436);
  *(unsigned int *)&aP3[4] = &stru_830620[78028];
  v261 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3436) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v261,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  int v271; // edx
  IDA_LOBYTE(v271) = *(unsigned char *)(v4 + 3480);
  *(unsigned int *)&aP3[8] = v271;
  *(unsigned int *)&aP3[4] = &stru_830620[78016];
  v263 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3480) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v263,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3440);
  *(unsigned int *)&aP3[4] = &stru_830620[78000];
  v264 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3440) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v264,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3444);
  *(unsigned int *)&aP3[4] = &stru_830620[77984];
  v265 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3444) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v265,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3448);
  *(unsigned int *)aP3 = &stru_830620[77968];
  v266 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3448) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v266,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3452);
  *(unsigned int *)aP3 = &stru_830620[77952];
  v267 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3452) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v267,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3456);
  *(unsigned int *)&aP3[4] = &stru_830620[77936];
  v268 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3456) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v268,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(double *)&aP3[4] = *(float *)(v4 + 3460);
  *(unsigned int *)aP3 = &stru_830620[77920];
  v269 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3460) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v269,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  *(double *)&aP3[4] = *(float *)(v4 + 3464);
  *(unsigned int *)aP3 = &stru_830620[77904];
  v270 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(float *)(v4 + 3464) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v270,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  int v280; // eax
  IDA_LOBYTE(v280) = *(unsigned char *)(v4 + 3468);
  *(unsigned int *)&aP3[8] = v280;
  *(unsigned int *)&aP3[4] = &stru_830620[77884];
  v272 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3468) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v272,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3472);
  *(unsigned int *)&aP3[4] = &stru_830620[77864];
  v273 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3472) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v273,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  IDA_LOBYTE(edx258k) = *(unsigned char *)(v4 + 3476);
  *(unsigned int *)&aP3[8] = edx258k;
  *(unsigned int *)&aP3[4] = &stru_830620[77856];
  v275 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3476) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v275,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v285; // eax
  IDA_LOBYTE(v285) = *(unsigned char *)(v4 + 3477);
  *(unsigned int *)&aP3[8] = v285;
  *(unsigned int *)&aP3[4] = &stru_830620[77844];
  v277 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3477) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v277,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v287; // ecx
  IDA_LOBYTE(v287) = *(unsigned char *)(v4 + 1728);
  *(unsigned int *)&aP3[8] = v287;
  *(unsigned int *)&aP3[4] = &stru_830620[77824];
  v279 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 1728) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v279,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v289; // edx
  IDA_LOBYTE(v289) = *(unsigned char *)(v4 + 1729);
  *(unsigned int *)&aP3[8] = v289;
  *(unsigned int *)&aP3[4] = &stru_830620[77796];
  v281 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 1729) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v281,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v291; // eax
  IDA_LOBYTE(v291) = *(unsigned char *)(v4 + 3234);
  *(unsigned int *)&aP3[8] = v291;
  *(unsigned int *)&aP3[4] = &stru_830620[77780];
  v283 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3234) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v283,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77764];
  v284 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258n = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v284,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((unsigned int *)(v4 + 3236), eax258n);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77740];
  v286 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258o = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v286,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((unsigned int *)(v4 + 3236), eax258o);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77720];
  v288 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258p = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v288,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((unsigned int *)(v4 + 3236), eax258p);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77700];
  v290 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v300 = INIClass::ReadInt_Overwrite((int)aP0, (uint8_t *)v290, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((unsigned int *)(v4 + 3236), v300);
  qmemcpy((void *)(v4 + 3256), (const void *)(v4 + 3236), 0x14u);
  *(unsigned int *)&aP3[8] = ReadPointerFromECX4((void *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77684];
  v292 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v302 = INIClass::ReadInt_Overwrite((int)aP0, (uint8_t *)v292, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A30((unsigned int *)(v4 + 3256), v302);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717A70((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77660];
  v294 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258s = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v294,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A50((unsigned int *)(v4 + 3256), eax258s);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AD0((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77640];
  v296 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  eax258t = INIClass::ReadInt_Overwrite(
              (int)aP0,
              (uint8_t *)v296,
              *(CCINIClass **)&aP3[4],
              *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717AB0((unsigned int *)(v4 + 3256), eax258t);
  *(unsigned int *)&aP3[8] = ObjectTypeClass::loadTypeMember_5717AA0((unsigned int *)(v4 + 3236));
  *(unsigned int *)&aP3[4] = &stru_830620[77620];
  v298 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v308 = INIClass::ReadInt_Overwrite((int)aP0, (uint8_t *)v298, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717A80((unsigned int *)(v4 + 3256), v308);
  IDA_LOBYTE(ecx258l) = *(unsigned char *)(v4 + 3371);
  *(unsigned int *)&aP3[8] = ecx258l;
  *(unsigned int *)&aP3[4] = &stru_830620[77600];
  v301 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3371) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v301,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(edx258m) = *(unsigned char *)(v4 + 3517);
  *(unsigned int *)&aP3[8] = edx258m;
  *(unsigned int *)&aP3[4] = &stru_830620[77588];
  v303 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3517) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v303,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3520);
  *(unsigned int *)&aP3[4] = &stru_830620[77576];
  v304 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3520) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v304,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3524);
  *(unsigned int *)&aP3[4] = &stru_830620[77560];
  v305 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3524) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v305,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3528);
  *(unsigned int *)&aP3[4] = &stru_830620[77544];
  v306 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned int *)(v4 + 3528) = INIClass::ReadInt_Overwrite(
                             (int)aP0,
                             (uint8_t *)v306,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 3532);
  *(unsigned int *)&aP3[4] = &stru_830620[77528];
  v307 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  int v317 = INIClass::ReadInt_Overwrite((int)aP0, (uint8_t *)v307, *(CCINIClass **)&aP3[4], *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = v4 + 668;
  *(unsigned int *)&aP3[4] = &stru_830620[77508];
  *(unsigned int *)(v4 + 3532) = v317;
  v309 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  Abilities = (CCINIClass *)INIEntry::ReadAbilities(
                              (uint8_t ***)aP0,
                              (CCINIClass *)&aP2.unknown30,
                              (CCINIClass *)v309,
                              *(uint8_t **)&aP3[4],
                              *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((unsigned int *)(v4 + 668), (WeaponTypeClass *)aP2.sectionHead, Abilities);
  nullsub_86();
  nullsub_86();
  *(unsigned int *)&aP3[8] = v4 + 686;
  *(unsigned int *)&aP3[4] = &stru_830620[77492];
  v311 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  v321 = (CCINIClass *)INIEntry::ReadAbilities(
                         (uint8_t ***)aP0,
                         (CCINIClass *)&aP2.unknown30,
                         (CCINIClass *)v311,
                         *(uint8_t **)&aP3[4],
                         *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_57179D0((unsigned int *)(v4 + 686), (WeaponTypeClass *)aP2.sectionHead, v321);
  nullsub_86();
  nullsub_86();
  if ( *(double *)(v4 + 712) == 0.0 )
  {
    *(unsigned int *)aP2[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4160);
    aP2.headNode[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4164);
  }
  else
  {
    eax260 = *(unsigned int *)(v4 + 716);
    *(unsigned int *)aP2[0] = *(unsigned int *)(v4 + 712);
    aP2.headNode[0] = eax260;
  }
  *(unsigned int *)&aP3[8] = aP2.headNode[0];
  *(unsigned int *)&aP3[4] = *(unsigned int *)aP2[0];
  *(unsigned int *)aP3 = &stru_830620[77464];
  v314 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 712) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v314,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 720) == 0.0 )
  {
    *(unsigned int *)aP2[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4168);
    aP2.headNode[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4172);
  }
  else
  {
    int v324 = *(unsigned int *)(v4 + 724);
    *(unsigned int *)aP2[0] = *(unsigned int *)(v4 + 720);
    aP2.headNode[0] = v324;
  }
  *(unsigned int *)&aP3[8] = aP2.headNode[0];
  *(unsigned int *)&aP3[4] = *(unsigned int *)aP2[0];
  *(unsigned int *)aP3 = &stru_830620[77432];
  v316 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 720) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v316,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 728) == 0.0 )
  {
    *(unsigned int *)aP2[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4176);
    aP2.headNode[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4180);
  }
  else
  {
    int v326 = *(unsigned int *)(v4 + 732);
    *(unsigned int *)aP2[0] = *(unsigned int *)(v4 + 728);
    aP2.headNode[0] = v326;
  }
  *(unsigned int *)&aP3[8] = aP2.headNode[0];
  *(unsigned int *)&aP3[4] = *(unsigned int *)aP2[0];
  *(unsigned int *)aP3 = &stru_830620[77400];
  v318 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 728) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v318,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 736) == 0.0 )
  {
    *(unsigned int *)aP2[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4184);
    aP2.headNode[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4188);
  }
  else
  {
    v319 = *(CCINIClass **)(v4 + 740);
    *(unsigned int *)aP2[0] = *(unsigned int *)(v4 + 736);
    aP2.headNode[0] = (int)v319;
  }
  *(unsigned int *)&aP3[8] = aP2.headNode[0];
  *(unsigned int *)&aP3[4] = *(unsigned int *)aP2[0];
  *(unsigned int *)aP3 = &stru_830620[77372];
  v320 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 736) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v320,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  if ( *(double *)(v4 + 744) == 0.0 )
  {
    *(unsigned int *)aP2[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4192);
    aP2.headNode[0] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4196);
  }
  else
  {
    ecx272 = *(unsigned int *)(v4 + 748);
    *(unsigned int *)aP2[0] = *(unsigned int *)(v4 + 744);
    aP2.headNode[0] = ecx272;
  }
  *(unsigned int *)&aP3[8] = aP2.headNode[0];
  *(unsigned int *)&aP3[4] = *(unsigned int *)aP2[0];
  *(unsigned int *)aP3 = &stru_830620[77344];
  v322 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 744) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v322,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  edx273 = *(unsigned int *)(v4 + 704);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 708);
  *(unsigned int *)&aP3[4] = edx273;
  *(unsigned int *)aP3 = &stru_830620[77324];
  v323 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(double *)(v4 + 704) = INIClass::ReadDouble_Overwrite(
                            (int)aP0,
                            v323,
                            *(uint8_t **)aP3,
                            *(INIClass **)&aP3[4]);
  IDA_LOBYTE(eax273) = *(unsigned char *)(v4 + 3516);
  *(unsigned int *)&aP3[8] = eax273;
  *(unsigned int *)&aP3[4] = &stru_830620[77300];
  v325 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3516) = INIClass::ReadBool_Overwrite(
                            (int)aP0,
                            (uint8_t *)v325,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(ecx273) = *(unsigned char *)(v4 + 3500);
  *(unsigned int *)&aP3[8] = ecx273;
  *(unsigned int *)&aP3[4] = &stru_830620[77288];
  v327 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  *(unsigned char *)(v4 + 3500) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v327,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned char *)(v4 + 3228) = 0;
  v328 = *(ObjectClass **)(v4 + 2200);
  if ( v328 && v328->location[2] > 0 )
    *(unsigned char *)(v4 + 3228) = 1;
  *(unsigned int *)&aP3[8] = Ext;
  v329 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  _makepath(aP4[32], 0, 0, (ObjectClass *)v329, *(const char **)&aP3[8]);
  if ( *(unsigned char *)(v4 + 168) && *(unsigned int *)(v4 + 164) )
  {
    RA2_OPDEL(*(void **)(v4 + 164));
    *(unsigned int *)(v4 + 164) = 0;
    *(unsigned char *)(v4 + 168) = 0;
  }
  if ( (*(int (**)(int))(*(unsigned int *)v4 + 44))(v4) != 7 )
  {
    IDA_LOBYTE(v340) = 0;
    *(unsigned int *)(v4 + 164) = SearchMIXFile(aP4[32], v340);
  }
  *(unsigned int *)&aP3[8] = 32;
  *(unsigned int *)&aP3[4] = v4 + 3536;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_824238.sectionCount;
  v330 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (uint8_t ***)&stru_87C374[44556],
    v330,
    *(uint8_t **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  ObjectTypeClass::loadTypeMember_5717820(v4);
  if ( FileSystem::ProcessNextFileExtension() > 1 )
  {
    *(unsigned int *)&aP3[8] = &stru_830620[77216];
    Debug::Log();
    ExitProgram((void *)0xFFFFFFFF);
  }
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1824);
  *(unsigned int *)&aP3[4] = &stru_830620[77200];
  v331 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned int *)(v4 + 1824) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (uint8_t *)v331,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1816);
  *(unsigned int *)&aP3[4] = &stru_830620[77188];
  v332 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned int *)(v4 + 1816) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (uint8_t *)v332,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  int v344; // ecx
  IDA_LOBYTE(v344) = *(unsigned char *)(v4 + 3279);
  *(unsigned int *)&aP3[8] = v344;
  *(unsigned int *)&aP3[4] = &stru_830620[77176];
  v334 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned char *)(v4 + 3279) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v334,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v346; // edx
  IDA_LOBYTE(v346) = *(unsigned char *)(v4 + 3363);
  *(unsigned int *)&aP3[8] = v346;
  *(unsigned int *)&aP3[4] = &unk_818610;
  v336 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned char *)(v4 + 3363) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v336,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  IDA_LOBYTE(eax283) = *(unsigned char *)(v4 + 3365);
  *(unsigned int *)&aP3[8] = eax283;
  *(unsigned int *)&aP3[4] = &stru_830620[77164];
  v338 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned char *)(v4 + 3365) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v338,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2044);
  *(unsigned int *)&aP3[4] = &stru_830620[77152];
  v339 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned int *)(v4 + 2044) = INIClass::ReadInt_Overwrite(
                             (int)&stru_87C374[44556],
                             (uint8_t *)v339,
                             *(CCINIClass **)&aP3[4],
                             *(INIClass **)&aP3[8]);
  IDA_LOBYTE(edx283b) = *(unsigned char *)(v4 + 3518);
  *(unsigned int *)&aP3[8] = edx283b;
  *(unsigned int *)&aP3[4] = &stru_830620[77132];
  v341 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  *(unsigned char *)(v4 + 3518) = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v341,
                            *(CCINIClass **)&aP3[4],
                            aP3[8]);
  int v353; // eax
  IDA_LOBYTE(v353) = *(unsigned char *)(v4 + 3519);
  *(unsigned int *)&aP3[8] = v353;
  *(unsigned int *)&aP3[4] = &stru_830620[77112];
  v343 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  al283 = INIClass::ReadBool_Overwrite(
            (int)&stru_87C374[44556],
            (uint8_t *)v343,
            *(CCINIClass **)&aP3[4],
            aP3[8]);
  *(unsigned int *)&aP3[8] = 25;
  *(unsigned int *)&aP3[4] = &aP4;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[77104];
  *(unsigned char *)(v4 + 3519) = al283;
  v345 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (uint8_t ***)&stru_87C374[44556],
    v345,
    *(uint8_t **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( !strlen(aP4[0]) )
    goto LABEL_286;
  char * v358 = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  *(unsigned int *)&aP3[8] = Ext;
  strcpy(v358, aP4[0]);
  v347 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1750));
  _makepath(aP4[32], 0, 0, (ObjectClass *)v347, *(const char **)&aP3[8]);
  if ( !*(unsigned int *)(v4 + 1776) )
  {
    IDA_LOBYTE(v360) = 0;
    *(unsigned int *)(v4 + 1776) = SearchMIXFile(aP4[32], v360);
LABEL_286:
    if ( !*(unsigned int *)(v4 + 1776) )
    {
      IDA_LOBYTE(edx283) = 0;
      *(unsigned int *)(v4 + 1776) = SearchMIXFile(g_Str_File_XXICON_SHP, edx283);
    }
  }
  *(unsigned int *)&aP3[8] = 25;
  *(unsigned int *)&aP3[4] = &aP4;
  *(unsigned int *)aP3 = &stru_87C374[56304];
  *(void **)&v412.IsInitialized = &stru_830620[77092];
  v348 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  INIClass::GetString(
    (uint8_t ***)&stru_87C374[44556],
    v348,
    *(uint8_t **)&v412.IsInitialized,
    *(INIClass **)aP3,
    *(INIClass **)&aP3[4],
    *(int *)&aP3[8]);
  if ( strlen(aP4[0]) )
  {
    edx289a = (char *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    *(unsigned int *)&aP3[8] = Ext;
    strcpy(edx289a, aP4[0]);
    v350 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 1781));
    _makepath(aP4[32], 0, 0, (ObjectClass *)v350, *(const char **)&aP3[8]);
    if ( !*(unsigned int *)(v4 + 1808) )
    {
      IDA_LOBYTE(edx289) = 0;
      *(unsigned int *)(v4 + 1808) = SearchMIXFile(aP4[32], edx289);
    }
  }
  if ( HouseClass::HasPower((unsigned int *)v4) )
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
        *(unsigned int *)&aP3[8] = v351;
        *(unsigned int *)&aP3[4] = String;
        v352 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        Point3D_Overwrite = INIClass::ReadPoint3D_Overwrite(
                              &stru_87C374[44556],
                              (CCINIClass *)&aP2.unknown30,
                              (uint8_t *)v352,
                              *(int *)&aP3[4],
                              *(unsigned int **)&aP3[8]);
        *(unsigned int *)v351->__pad_0 = *Point3D_Overwrite;
        *(unsigned int *)&v351->__pad_0[4] = Point3D_Overwrite[1];
        *(unsigned int *)&v351->__pad_0[8] = Point3D_Overwrite[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77068], (INIClass *)aP2.sectionHead);
        *(unsigned int *)&aP3[8] = *(unsigned int *)&v351->__pad_0[12];
        *(unsigned int *)&aP3[4] = String;
        v354 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(unsigned int *)&v351->__pad_0[12] = INIClass::ReadInt_Overwrite(
                                          (int)&stru_87C374[44556],
                                          (uint8_t *)v354,
                                          *(CCINIClass **)&aP3[4],
                                          *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77048], (INIClass *)aP2.sectionHead);
        *(unsigned int *)&aP3[8] = v351->uniqueId;
        *(unsigned int *)&aP3[4] = String;
        v355 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351->uniqueId = INIClass::ReadInt_Overwrite(
                           (int)&stru_87C374[44556],
                           (uint8_t *)v355,
                           *(CCINIClass **)&aP3[4],
                           *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77032], (INIClass *)aP2.sectionHead);
        IDA_LOBYTE(edx294) = v351->abstractFlags;
        *(unsigned int *)&aP3[8] = edx294;
        *(unsigned int *)&aP3[4] = String;
        v357 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        al294 = INIClass::ReadBool_Overwrite(
                  (int)&stru_87C374[44556],
                  (uint8_t *)v357,
                  *(CCINIClass **)&aP3[4],
                  aP3[8]);
        *(unsigned int *)&aP3[8] = aP2.headNode[2];
        *(unsigned int *)&aP3[4] = &stru_830620[81120];
        *(unsigned int *)aP3 = aP2.sectionHead;
        IDA_LOBYTE(v351->abstractFlags) = al294;
        sprintf(*(char *const *)aP3, *(ObjectClass **)&aP3[4], *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77084], (INIClass *)aP2.sectionHead);
        *(unsigned int *)&aP3[8] = v351;
        *(unsigned int *)&aP3[4] = String;
        v359 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v374; // eax
        v374 = INIClass::ReadPoint3D_Overwrite(
                 &stru_87C374[44556],
                 &aP2,
                 (uint8_t *)v359,
                 *(int *)&aP3[4],
                 *(unsigned int **)&aP3[8]);
        *(unsigned int *)&v351[1].CellRangefinding = *v374;
        *(unsigned int *)&v351[1].TerrainFire = v374[1];
        v351[1].DisguiseFakeBlinkTime = v374[2];
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77068], (INIClass *)aP2.sectionHead);
        *(unsigned int *)&aP3[8] = *(unsigned int *)&v351->__pad_0[12];
        *(unsigned int *)&aP3[4] = String;
        v361 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(unsigned int *)&v351[1].InfiniteMindControl = INIClass::ReadInt_Overwrite(
                                                    (int)&stru_87C374[44556],
                                                    (uint8_t *)v361,
                                                    *(CCINIClass **)&aP3[4],
                                                    *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77048], (INIClass *)aP2.sectionHead);
        *(unsigned int *)&aP3[8] = v351->uniqueId;
        *(unsigned int *)&aP3[4] = String;
        v362 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        *(unsigned int *)&v351[1].Suicide = INIClass::ReadInt_Overwrite(
                                        (int)&stru_87C374[44556],
                                        (uint8_t *)v362,
                                        *(CCINIClass **)&aP3[4],
                                        *(INIClass **)&aP3[8]);
        sprintf(String[0].__pad_0, (ObjectClass *)&stru_830620[77032], (INIClass *)aP2.sectionHead);
        IDA_LOBYTE(edx294a) = v351->abstractFlags;
        *(unsigned int *)&aP3[8] = edx294a;
        *(unsigned int *)&aP3[4] = String;
        v364 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
        v351[1].Charges = INIClass::ReadBool_Overwrite(
                            (int)&stru_87C374[44556],
                            (uint8_t *)v364,
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
    *(unsigned int *)&aP3[8] = v4 + 2204;
    *(unsigned int *)&aP3[4] = &stru_830620[77016];
    v366 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296 = INIClass::ReadPoint3D_Overwrite(
               &stru_87C374[44556],
               (CCINIClass *)&aP2.unknown30,
               (uint8_t *)v366,
               *(int *)&aP3[4],
               *(unsigned int **)&aP3[8]);
    *(unsigned int *)(v4 + 2204) = *eax296;
    *(unsigned int *)(v4 + 2208) = eax296[1];
    *(unsigned int *)(v4 + 2212) = eax296[2];
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2216);
    *(unsigned int *)&aP3[4] = &stru_830620[77000];
    v368 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2216) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v368,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2220);
    *(unsigned int *)&aP3[4] = &stru_830620[76980];
    v369 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2220) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v369,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = v4 + 2232;
    *(unsigned int *)&aP3[4] = &stru_830620[76960];
    v370 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v385; // eax
    v385 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (uint8_t *)v370,
             *(int *)&aP3[4],
             *(unsigned int **)&aP3[8]);
    *(unsigned int *)(v4 + 2232) = *v385;
    *(unsigned int *)(v4 + 2236) = v385[1];
    *(unsigned int *)(v4 + 2240) = v385[2];
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2244);
    *(unsigned int *)&aP3[4] = &stru_830620[76944];
    v372 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2244) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v372,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2248);
    *(unsigned int *)&aP3[4] = &stru_830620[76924];
    v373 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296b = INIClass::ReadInt_Overwrite(
                (int)&stru_87C374[44556],
                (uint8_t *)v373,
                *(CCINIClass **)&aP3[4],
                *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = v4 + 2204;
    *(unsigned int *)&aP3[4] = &stru_830620[76904];
    *(unsigned int *)(v4 + 2248) = eax296b;
    v375 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    eax296c = INIClass::ReadPoint3D_Overwrite(
                &stru_87C374[44556],
                (CCINIClass *)&aP2.unknown30,
                (uint8_t *)v375,
                *(int *)&aP3[4],
                *(unsigned int **)&aP3[8]);
    *(unsigned int *)(v4 + 2712) = *eax296c;
    *(unsigned int *)(v4 + 2716) = eax296c[1];
    *(unsigned int *)(v4 + 2720) = eax296c[2];
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2216);
    *(unsigned int *)&aP3[4] = &stru_830620[76884];
    v377 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2724) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v377,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2220);
    *(unsigned int *)&aP3[4] = &stru_830620[76860];
    v378 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2728) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v378,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = v4 + 2232;
    *(unsigned int *)&aP3[4] = &stru_830620[76836];
    v379 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v394; // eax
    v394 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (uint8_t *)v379,
             *(int *)&aP3[4],
             *(unsigned int **)&aP3[8]);
    *(unsigned int *)(v4 + 2740) = *v394;
    *(unsigned int *)(v4 + 2744) = v394[1];
    *(unsigned int *)(v4 + 2748) = v394[2];
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2244);
    *(unsigned int *)&aP3[4] = &stru_830620[76816];
    v381 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2752) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v381,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
    *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 2248);
    *(unsigned int *)&aP3[4] = &stru_830620[76792];
    v382 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
    *(unsigned int *)(v4 + 2756) = INIClass::ReadInt_Overwrite(
                               (int)&stru_87C374[44556],
                               (uint8_t *)v382,
                               *(CCINIClass **)&aP3[4],
                               *(INIClass **)&aP3[8]);
  }
  v392 = 0;
  aP2.headNode[2] = v4 + 2140;
  do
  {
    sprintf((char *const)aP2.sectionHead, (ObjectClass *)&stru_830620[76776], v392);
    *(unsigned int *)&aP3[8] = v4 + 2204;
    *(unsigned int *)&aP3[4] = aP2.sectionHead;
    v384 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  int *v399; // eax
    v399 = INIClass::ReadPoint3D_Overwrite(
             &stru_87C374[44556],
             (CCINIClass *)&aP2.unknown30,
             (uint8_t *)v384,
             *(int *)&aP3[4],
             *(unsigned int **)&aP3[8]);
    int v400 = aP2.headNode[2];
    v392 = (INIClass *)((char *)v392 + 1);
    *(unsigned int *)aP2.headNode[2] = *v399;
    *(unsigned int *)(v400 + 4) = v399[1];
    *(unsigned int *)(v400 + 8) = v399[2];
    v401 = v400 + 12;
    aP2.headNode[2] = v401;
  }
  while ( (int)v392 < 5 );
  IDA_LOBYTE(v401) = *(unsigned char *)(v4 + 2052);
  *(unsigned int *)&aP3[8] = v401;
  *(unsigned int *)&aP3[4] = &stru_830620[76748];
  v388 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v403 = INIClass::ReadBool_Overwrite(
           (int)&stru_87C374[44556],
           (uint8_t *)v388,
           *(CCINIClass **)&aP3[4],
           aP3[8]);
  *(unsigned int *)&aP3[8] = v4 + 3504;
  *(unsigned int *)&aP3[4] = &stru_830620[76728];
  *(unsigned char *)(v4 + 2052) = v403;
  v390 = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 504));
  v405 = INIClass::ReadPoint3D_Overwrite(
           &stru_87C374[44556],
           (CCINIClass *)&aP2.unknown30,
           (uint8_t *)v390,
           *(int *)&aP3[4],
           *(unsigned int **)&aP3[8]);
  *(unsigned int *)(v4 + 3504) = *v405;
  *(unsigned int *)(v4 + 3508) = v405[1];
  *(unsigned int *)(v4 + 3512) = v405[2];
  *(unsigned int *)&aP3[8] = *(unsigned int *)(v4 + 1460);
  *(unsigned int *)&aP3[4] = &stru_830620[76712];
  eax299c = (INIClass *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(v4 + 36));
  TypeMember_5474E40 = ObjectTypeClass::loadTypeMember_5474E40(
                         (uint8_t ***)aP0,
                         eax299c,
                         *(uint8_t **)&aP3[4],
                         *(int *)&aP3[8]);
  *(unsigned int *)(v4 + 1460) = TypeMember_5474E40;
  *(unsigned char *)(v4 + 3372) = TypeMember_5474E40 == 6;
  if ( *(unsigned char *)(v4 + 566) )
  {
    VoxelAnimType::LoadAnim((char *)v4);
  }
  else if ( *(unsigned char *)(v4 + 3233) )
  {
    Turret::LoadVoxelTurretAndBarrel((void *)v4);
  }
  v408 = *(unsigned char **)(v4 + 176);
  if ( v408 )
  {
    if ( ObjectTypeClass::loadTypeMember_5717AE0(v408) )
    {
      Info = VoxelSection::GetInfo(*(unsigned int **)(v4 + 176), 0, 0);
      *(unsigned int *)&aP3[8] = 0;
      int v410 = *(uint8_t *)(Info + 161);
      *(unsigned int *)&aP3[4] = 0;
      *(unsigned int *)aP2[0] = v410;
      *(double *)(v4 + 864) = (double)v410 * 0.5 + 0.5;
      *(unsigned int *)aP2[0] = *(uint8_t *)(VoxelSection::GetInfo(
                                                      *(unsigned int **)(v4 + 176),
                                                      *(SomeVoxelCache **)&aP3[4],
                                                      *(SomeVoxelCache **)&aP3[8])
                                                  + 160);
      *(double *)(v4 + 872) = (double)*(int *)aP2[0] * 0.5;
    }
  }
  return 1;
}
} // namespace gamemd


// 0x7170A0
namespace gamemd {
int ObjectTypeClass::DeserializeArrays()
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
  ObjectTypeClass *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]

  result = COMObject::GetSizeMaxWrapper(v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * *(unsigned int *)&v19[1].__pad_14D[67] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * *(unsigned int *)&v19[1].__pad_14D[95] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * *(unsigned int *)&v19[1].__pad_14D[123] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * *(unsigned int *)&v19[1].__pad_14D[151] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * *(unsigned int *)&v19[1].ImageFile[8] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * *(unsigned int *)&v19[1].AlphaImageFile[9] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * *(unsigned int *)&v19[1].HasRadialIndicator + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * v19[1].VoxelCaches[4] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * v19[1].VoxelCaches[11] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * v19[1].VoxelCaches[18] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * *(unsigned int *)&v19[2].AlphaImageFile[1] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * *(unsigned int *)&v19[2].Selectable + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * *(unsigned int *)&v19[1].?[44] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * (int)v19[2].AlphaImage + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * *(unsigned int *)&v19[1].__pad_14D[23] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * (int)v19[1].AlphaImage + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * v19[2].VoxelCaches[7] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * v19[2].VoxelCaches[14] + 4; /*0x717196*/
    return 0; /*0x717198*/
  }
  return result; /*0x71719a*/
}
} // namespace gamemd
// 0x717820
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717820()
{
  int v2; // eax
  const char *v3; // ecx

  IDA_LOBYTE(v2) = this->__pad_DC8[8]; /*0x717823*/
  v3 = &this->__pad_DC8[8]; /*0x717829*/
  if ( (unsigned char)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *(unsigned int *)&this->__pad_DC8[40] = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/
}
} // namespace gamemd
// 0x717C00
namespace gamemd {
unsigned int * ObjectTypeClass::loadTypeMember_5717C00(unsigned int * a2)
{
  void *v3; // eax
  void *v4; // eax
  void *vtable2; // ecx
  int v6; // eax

  if ( this == (ObjectTypeClass *)a2 ) /*0x717c0a*/
    return &this->AbstractTypeClass; /*0x717c0a*/
  (*((void (**)(ObjectTypeClass *))this->AbstractTypeClass + 3))(this); /*0x717c0e*/
  v3 = (void *)a2[2]; /*0x717c11*/
  *(void **)&this->vtable3 = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    *(unsigned int *)&this->vtable2 = 0; /*0x717c5a*/
    IDA_BYTE1(this->vtable4) = 0; /*0x717c61*/
    return &this->AbstractTypeClass; /*0x717c65*/
  }
  v4 = (void *)RA2_OPNEW(4 * (unsigned int)v3); /*0x717c23*/
  *(void **)&this->vtable2 = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return &this->AbstractTypeClass; /*0x717c30*/
  vtable2 = *(unsigned int *)&this->vtable3; /*0x717c32*/
  v6 = 0; /*0x717c35*/
  IDA_BYTE1(this->vtable4) = 1; /*0x717c39*/
  if ( (int)vtable2 <= 0 ) /*0x717c3d*/
    return &this->AbstractTypeClass; /*0x717c3d*/
  do /*0x717c51*/
  {
    *((unsigned int *)this->? + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < (int)this->? ); /*0x717c51*/
  return &this->AbstractTypeClass; /*0x717c55*/
}
} // namespace gamemd
// 0x41CBF0
namespace gamemd {
unsigned int * ObjectTypeClass::vt_entry_7C(unsigned int * a1)
{
  int v1; // esi

  v1 = 2 * dword_889F58; /*0x41cbfc*/
  *(unsigned int *)a1->TechnoTypeClass = 256; /*0x41cc07*/
  *(unsigned int *)&a1->TechnoTypeClass[4] = 256; /*0x41cc09*/
  *(unsigned int *)&a1->TechnoTypeClass[8] = v1; /*0x41cc0c*/
  return a1->TechnoTypeClass; /*0x41cc0f*/
}
} // namespace gamemd
// 0x41CF80
namespace gamemd {
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{
  a0->AbstractTypeClass = (void *)*aP1; /*0x41cf8d*/
  a0->vtable2 = (void *)aP1[1]; /*0x41cf92*/
  a0->? = (void *)aP1[2]; /*0x41cf99*/
  return &a0->AbstractTypeClass; /*0x41cf95*/
}
} // namespace gamemd
// 0x474690
namespace gamemd {
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, "%d", 360 * a4 / 256); /*0x4746ba*/
// 0x528660
  return INIClass::SetString(Block, aP2, Buffer); /*0x4746d8*/
}
} // namespace gamemd
// 0x4746E0
namespace gamemd {
int ObjectTypeClass::ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4)
{
  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, String, 32) ) /*0x4746f9*/
    return (atoi(String) << 8) / 360; /*0x474727*/
  else
    return a4; /*0x47472f*/
}
} // namespace gamemd
// 0x474740
namespace gamemd {
unsigned char ** ObjectTypeClass::ReadSoundList(unsigned char ** a2, unsigned char * a3, unsigned char * a4, unsigned char ** a5)
{
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  if ( INIClass::GetString((INIClass *)this, a3, a4, &g_INI_DefaultBuffer, Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, "%d,%d", &a4, &a3); /*0x474776*/
    IDA_HIWORD(a4) = (unsigned short)a3; /*0x47478e*/
    *a2 = a4; /*0x47479a*/
    return a2; /*0x474785*/
  }
  else
  {
    *a2 = *a5; /*0x4747ac*/
    return a2; /*0x4747a6*/
  }
}
} // namespace gamemd
// 0x4747C0
namespace gamemd {
char ObjectTypeClass::ReadBool2(INIClass * Block, INIClass * aP2, short * a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d", *a4, a4[1]); /*0x4747dd*/
// 0x528660
  return INIClass::SetString(Block, aP2, Buffer); /*0x4747fb*/
}
} // namespace gamemd
// 0x4749E0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_473960(a4); /*0x4749f1*/
  INIClass::GetString(aP1, a2, v5, Destination, 32); /*0x474a03*/
// 0x473980
  return ObjectTypeClass::loadTypeMember_473980((ObjectTypeClass *)Destination); /*0x474a11*/
}
} // namespace gamemd
// 0x474D50
namespace gamemd {
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{
  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474d75*/
// 0x528660
  return INIClass::SetString(Block, aP2, Buffer); /*0x474d93*/
}
} // namespace gamemd
// 0x474E40
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{
  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(aP1, a2, (&off_81BA88)[a4], Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = &off_81BA88; /*0x474e69*/
  while ( _strcmpi(Destination, *v5) ) /*0x474e80*/
  {
    ++v5; /*0x474e82*/
    ++v4; /*0x474e85*/
    if ( (int)v5 >= (int)&off_81BABC ) /*0x474e8c*/
      return -1; /*0x474e96*/
  }
  return v4; /*0x474e8e*/
}
} // namespace gamemd
// 0x474FA0
namespace gamemd {
int ObjectTypeClass::ReadDouble(unsigned char * a2, unsigned char * a3, int a4)
{
  char Destination[100]; // [esp+4h] [ebp-64h] BYREF

  INIClass::GetString(a2, a3, &g_INI_DefaultBuffer, Destination, 100); /*0x474fba*/
  if ( strlen(Destination) ) /*0x474fc3*/
// 0x753250
    return VocClass::FindByName((VocClass *)Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}
} // namespace gamemd
// 0x474FF0
namespace gamemd {
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4)
{
  char *Name; // eax
  StringTable Destination[4]; // [esp+4h] [ebp-20h] BYREF

  Name = AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString(aP1, a2, Name, Destination[0].__pad_0, 32); /*0x475013*/
// 0x40dce0
  return StringTable::Lookup(Destination); /*0x475021*/
}
} // namespace gamemd
// 0x475060
namespace gamemd {
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned char * a2, void * a4)
{
  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = sub_45DD20((ObjectClass *)a4); /*0x475071*/
  INIClass::GetString(aP1, a2, v5, Destination, 32); /*0x475083*/
  return sub_45DD50((ObjectClass *)Destination); /*0x475091*/
}
} // namespace gamemd
// 0x476240
namespace gamemd {
char ObjectTypeClass::ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3)
{
  int i; // ebp
  int v5; // eax
  int v6; // ecx
  unsigned char v8[521]; // [esp+Ch] [ebp-20Ch] BYREF
  int16_t v9; // [esp+215h] [ebp-3h]
  char v10; // [esp+217h] [ebp-1h]

  *(unsigned int *)&v8[8] = this; /*0x47624d*/
  v8[12] = g_INI_DefaultBuffer; /*0x476252*/
  memset(&v8[13], 0, 0x1FCu); /*0x476268*/
  v9 = 0; /*0x47626a*/
  v10 = 0; /*0x47626c*/
  for ( i = 0; i < *(unsigned int *)(aP3 + 16); ++i ) /*0x476274*/
  {
    if ( v8[12] ) /*0x476281*/
      strcat(&v8[12], Str); /*0x4762a8*/
    v5 = *(unsigned int *)(aP3 + 4); /*0x4762b1*/
    v8[4] = 0; /*0x4762b4*/
    v6 = *(unsigned int *)(v5 + 4 * i); /*0x4762bc*/
    v8[4] = IDA_HIBYTE(v6); /*0x4762c6*/
    *(unsigned int *)v8 = v6 & 0xFFFFFF; /*0x4762ce*/
    strcat(&v8[12], (const char *)(System_Read_6E7330((ObjectClass *)v8) + 36)); /*0x4762fa*/
  }
// 0x528660
  return INIClass::SetString(*(char **)&v8[8], Block, a2, &v8[12]); /*0x47632e*/
}
} // namespace gamemd
// 0x476FC0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48E030(aP3); /*0x476fdd*/
  if ( INIClass::GetString((INIClass *)this, aP1, a2, v5, Destination, 128) ) /*0x476ff5*/
// 0x48dff0
    return ObjectTypeClass::loadTypeMember_48DFF0((ObjectTypeClass *)Destination); /*0x477002*/
  else
    return aP3; /*0x477012*/
}
} // namespace gamemd
// 0x477590
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
  char *v4; // esi
  int result; // eax
  bool v6; // zf
  char String[128]; // [esp+8h] [ebp-80h] BYREF

  INIClass::GetString(aP1, a2, (&off_81BABC)[aP3], String, 128); /*0x4775c1*/
  v4 = strtok(String, Str); /*0x4775d5*/
  result = _strcmpi(v4, g_INI_Key_None); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)g_INI_Key_Normal) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4, aStrong) == 0; /*0x477624*/
      result = 2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return aP3; /*0x47762d*/
    }
    else
    {
      return 1; /*0x477607*/
    }
  }
  return result; /*0x4775e9*/
}
} // namespace gamemd
// 0x48DFF0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_48DFF0()
{
  int v2; // edi
  char **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = off_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48e00e*/
  {
    ++v3; /*0x48e010*/
    ++v2; /*0x48e013*/
    if ( (int)v3 >= (int)off_81DA78 ) /*0x48e01a*/
      return -1; /*0x48e01a*/
  }
  return v2; /*0x48e01c*/
}
} // namespace gamemd
// 0x5F1C30
namespace gamemd {
int ObjectTypeClass::CreateInstance(CampaignScore * aP1, CampaignScore * aP2)
{
  if ( *(unsigned int *)&this->zero_3C ) /*0x5f1c30*/
    return (*(int (**)(unsigned int, int, int))(**(unsigned int **)&this->?[8] + 16))(*(unsigned int *)&this->?[8], aP1, aP2); /*0x5f1c4b*/
  else
    return 0; /*0x5f1c37*/
}
} // namespace gamemd
// 0x5F61A0
namespace gamemd {
void ObjectTypeClass::ReleaseWaveAndString()
{
  void *vtable0; // edi
  String *vtable1; // edi

  vtable0 = this->AbstractTypeClass; /*0x5f61a4*/
  if ( this->AbstractTypeClass ) /*0x5f61a4*/
  {
    WaveClass::Destroy((WaveClass *)this->AbstractTypeClass); /*0x5f61ac*/
    RA2_OPDEL(vtable0); /*0x5f61b2*/
  }
  vtable1 = (String *)this->vtable2; /*0x5f61ba*/
  this->AbstractTypeClass = 0; /*0x5f61bd*/
  if ( vtable1 ) /*0x5f61c5*/
  {
    String::Release(vtable1); /*0x5f61c9*/
    RA2_OPDEL(vtable1); /*0x5f61cf*/
  }
  *(unsigned int *)&this->vtable2 = 0; /*0x5f61d7*/
}
} // namespace gamemd
// 0x5F75C0
namespace gamemd {
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
  a1->AbstractTypeClass = (void *)10; /*0x5f75cd*/
  a1->vtable2 = (void *)10; /*0x5f75d3*/
  a1->vtable3 = (void *)10; /*0x5f75d6*/
  return &a1->AbstractTypeClass; /*0x5f75d9*/
}
} // namespace gamemd
// 0x5F8080
namespace gamemd {
void ObjectTypeClass::CleanupWeapons()
{
  char *v1; // esi
  int v2; // ebp
  void *v3; // edi
  void **v4; // edi
  void *v5; // edi
  void *v6; // edi

  v1 = &this->q0CC; /*0x5f8084*/
  v2 = 18; /*0x5f808a*/
  do /*0x5f8107*/
  {
    v3 = (void *)*((unsigned int *)v1 - 1); /*0x5f8091*/
    if ( v3 ) /*0x5f8096*/
    {
      WaveClass::Destroy(*((unsigned int *)v1 - 1)); /*0x5f809a*/
      RA2_OPDEL(v3); /*0x5f80a0*/
      *((unsigned int *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(unsigned int *)v1 ) /*0x5f80ab*/
    {
      String::Release(*(void ***)v1); /*0x5f80b3*/
      RA2_OPDEL(v4); /*0x5f80b9*/
      *(unsigned int *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((unsigned int *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      WaveClass::Destroy(*((unsigned int *)v1 + 35)); /*0x5f80cf*/
      RA2_OPDEL(v5); /*0x5f80d5*/
      *((unsigned int *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((unsigned int *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      String::Release(*((void ***)v1 + 36)); /*0x5f80ef*/
      RA2_OPDEL(v6); /*0x5f80f5*/
      *((unsigned int *)v1 + 36) = 0; /*0x5f80fd*/
    }
    v1 += 8; /*0x5f8103*/
    --v2; /*0x5f8106*/
  }
  while ( v2 ); /*0x5f8107*/
}
} // namespace gamemd
// 0x5F9AE0
namespace gamemd {
ObjectTypeClass * ObjectTypeClass::Destru_vt08(char a2)
{
  ObjectTypeClass::Destruct(); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    RA2_OPDEL(); /*0x5f9af0*/
  return this; /*0x5f9afa*/
}
} // namespace gamemd
// 0x5F9B60
namespace gamemd {
int ObjectTypeClass::FreeLoaderBuffer()
{
  RA2_OPDEL(this->AbstractTypeClass); /*0x5f9b66*/
  this->AbstractTypeClass = 0; /*0x5f9b70*/
  *(unsigned int *)&this->vtable2 = 0; /*0x5f9b72*/
  *(unsigned int *)&this->vtable3 = 0; /*0x5f9b75*/
  IDA_LOBYTE(this->vtable4) = 0; /*0x5f9b78*/
  *(unsigned int *)&this->uniqueId = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/
}
} // namespace gamemd
// 0x6E5E70
namespace gamemd {
int ObjectTypeClass::FindByName()
{
  int v2; // ebx
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  v2 = 0; /*0x6e5e7e*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *((unsigned int *)dword_B0E784 + v2); /*0x6e5e8a*/
    if ( !_strcmpi((char *)(v3 + 36), (char *)this) || !_strcmpi((char *)(v3 + 100), (char *)this) ) /*0x6e5ea2*/
      break; /*0x6e5ea2*/
    if ( ++v2 >= g_MultiplayerCleanup ) /*0x6e5eb6*/
      return 0; /*0x6e5eb6*/
  }
  return v3; /*0x6e5eb8*/
}
} // namespace gamemd
// 0x7179D0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_57179D0(WeaponTypeClass * aP1, CCINIClass * aP2)
{
  if ( this != (ObjectTypeClass *)aP2 ) /*0x7179d7*/
  {
    this->AbstractTypeClass = (void *)*aP2; /*0x7179dd*/
    this->vtable2 = (void *)aP2[1]; /*0x7179e2*/
    this->vtable3 = (void *)aP2[2]; /*0x7179e8*/
    this->vtable4 = (void *)aP2[3]; /*0x7179ee*/
    IDA_LOWORD(this->uniqueId) = *((unsigned short *)aP2 + 8); /*0x7179f5*/
  }
  *(unsigned int *)aP1 = this->AbstractTypeClass; /*0x717a01*/
  *(unsigned int *)(aP1 + 4) = this->vtable2; /*0x717a06*/
  *(unsigned int *)(aP1 + 8) = this->vtable3; /*0x717a0c*/
  *(unsigned int *)(aP1 + 12) = this->vtable4; /*0x717a12*/
  *(unsigned short *)(aP1 + 16) = this->?; /*0x717a1a*/
  return aP1; /*0x717a19*/
}
} // namespace gamemd
// 0x717A30
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{
  this->AbstractTypeClass = (void *)a2; /*0x717a34*/
  return a2; /*0x717a36*/
}
} // namespace gamemd
// 0x717A50
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{
  int result; // eax

  result = a2; /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  this->vtable2 = (void *)result; /*0x717a5d*/
  return result; /*0x717a60*/
}
} // namespace gamemd
// 0x717A70
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A70()
{
  return (int)this->?; /*0x717a73*/
}
} // namespace gamemd
// 0x717A80
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{
  int result; // eax

  result = a2; /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  this->vtable3 = (void *)result; /*0x717a8d*/
  return result; /*0x717a90*/
}
} // namespace gamemd
// 0x717AA0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AA0()
{
  return (int)this->?; /*0x717aa3*/
}
} // namespace gamemd
// 0x717AB0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{
  int result; // eax

  result = a2; /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  this->vtable4 = (void *)result; /*0x717abd*/
  return result; /*0x717ac0*/
}
} // namespace gamemd
// 0x717AD0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AD0()
{
  return (int)this->?; /*0x717ad3*/
}
} // namespace gamemd
// 0x717AE0
namespace gamemd {
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{
  return IDA_LOBYTE(this->AbstractTypeClass) == 0; /*0x717ae9*/
}
} // namespace gamemd
// 0x717BF0
namespace gamemd {
unsigned int * ObjectTypeClass::CheckFlag(ObjectTypeClass * aP1)
{
  this->AbstractTypeClass = (void*)&DynamicVectorClass_AnimTypeClass_const___vftable; /*0x717bf2*/
  return &this->AbstractTypeClass; /*0x717bf8*/
}
} // namespace gamemd
// 0x71CB90
namespace gamemd {
int ObjectTypeClass::ReadDestroyAnim()
{
  int result; // eax
  int i; // ebx
  int v4; // esi
  int v5; // [esp+8h] [ebp-14h]
  unsigned char v6[4]; // [esp+Ch] [ebp-10h] BYREF
  char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF

  INIClass::ClearSection((int)aTerrain, 0); /*0x71cb9f*/
  result = dword_A8E998; /*0x71cba4*/
  for ( i = 0; i < dword_A8E998; ++i ) /*0x71cbad*/
  {
    v4 = *((unsigned int *)dword_A8E98C + i); /*0x71cbba*/
    if ( v4 && !*(unsigned char *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(unsigned char *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v4 + 440))(v4, v6); /*0x71cbe6*/
        sprintf(Buffer, "%d", (int16_t)v5 + 1000 * IDA_SHIWORD(v5)); /*0x71cc09*/
        INIClass::SetString((uint8_t *)aTerrain, Buffer, (char *)(*(unsigned int *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = dword_A8E998; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}
} // namespace gamemd