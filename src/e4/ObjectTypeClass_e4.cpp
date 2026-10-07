// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VocClass_e4.hpp"
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
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/FileExtension_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ObjectTypeClass_Read(...);  // raw 006CEE60: int __thiscall ObjectTypeClass_Read(ObjectClass *this)
} // namespace gamemd

// 0x46C790
namespace gamemd {
BulletTypeClass * ObjectTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  BulletTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_,(const char *)( Source)) || !_strcmpi( g_Str_none, (const char *)(Source) ) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( dword_A83C90 <= 0 ) /*0x46c7c1*/
  {
LABEL_6:
    v3 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return (gamemd::BulletTypeClass *)(((BulletTypeClass *)v3)->Construct( (char *)(Source))); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((const char *)((*((unsigned int *)dword_A83C84 + v2) + 36)),(const char *)(Source)) ) /*0x46c7da*/
  {
    if ( ++v2 >= dword_A83C90 ) /*0x46c7e4*/
      goto LABEL_6; /*0x46c7e4*/
  }
  return (gamemd::BulletTypeClass *)((unsigned char *)*((unsigned int *)dword_A83C84 + v2)); /*0x46c7ff*/

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
  v3 = (char **)(off_81B7C8); /*0x47398b*/
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

  if ( ((INIClass*)((INIClass *)this))->GetString((unsigned char *)(aP1), (gamemd::INIClass *)(a2), (gamemd::INIClass *)(&g_INI_DefaultBuffer), Destination, 32) <= 0 ) /*0x474962*/
    return a4; /*0x4749a4*/
  v4 = 0; /*0x474964*/
  v5 = (char **)(&off_81B9B0); /*0x474966*/
  while ( _strcmpi(Destination, *v5) ) /*0x47497d*/
  {
    v5 += 2; /*0x47497f*/
    ++v4; /*0x474982*/
    if ( (int)v5 >= (int)&off_81B9D8 ) /*0x474989*/
      return 0; /*0x474992*/
  }
  return (&dword_81B9B4)[2 * v4]; /*0x47498b*/

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
  ((INIClass*)((INIClass *)this))->GetString(a2, (gamemd::INIClass *)(a3), (gamemd::INIClass *)(v4), (int)(Destination), 32); /*0x474f85*/
  return ObjectTypeClass_Read((ObjectClass *)Destination); /*0x474f93*/

}
} // namespace gamemd
// 0x5F7090
namespace gamemd {
int ObjectTypeClass::ConstructFull(char *aP1)
{

  int *v3; // eax
  int v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // eax
  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  ((AbstractTypeClass *)(this))->Constructor( (char *)(aP1)); /*0x5f709c*/
  v3 = (int *)((char *)this + 50); /*0x5f70a3*/
  *((unsigned char *)this + 152) = 0; /*0x5f70a9*/
  *((unsigned char *)this + 153) = 0; /*0x5f70af*/
  *((unsigned char *)this + 154) = 0; /*0x5f70b5*/
  *((char *)this + 39) = 0; /*0x5f70bb*/
  *((char *)this + 40) = 0; /*0x5f70c1*/
  *((char *)this + 41) = 0; /*0x5f70c7*/
  *((unsigned char *)this + 168) = 0; /*0x5f70cd*/
  *((char *)this + 43) = 0; /*0x5f70d3*/
  *((char *)this + 44) = 0; /*0x5f70d9*/
  *((char *)this + 45) = 0; /*0x5f70df*/
  *((char *)this + 46) = 0; /*0x5f70e5*/
  *((char *)this + 47) = 0; /*0x5f70eb*/
  *((char *)this + 48) = 0; /*0x5f70f1*/
  *((char *)this + 49) = 0; /*0x5f70f7*/
  v4 = 18; /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3[1] = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  v5 = (int *)((char *)this + 86); /*0x5f710d*/
  v6 = 18; /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  *((unsigned char *)this + 488) = 0; /*0x5f712e*/
  *((char *)this + 123) = 0; /*0x5f7134*/
  *((char *)this + 124) = -1; /*0x5f713a*/
  *((char *)this + 125) = -1; /*0x5f7140*/
  *((unsigned char *)this + 504) = 0; /*0x5f7146*/
  *((unsigned char *)this + 529) = 0; /*0x5f7148*/
  *((unsigned char *)this + 530) = 0; /*0x5f714e*/
  *((unsigned char *)this + 531) = 0; /*0x5f7156*/
  *((unsigned char *)this + 558) = 1; /*0x5f715c*/
  *((unsigned char *)this + 560) = 1; /*0x5f7162*/
  *((unsigned char *)this + 561) = 1; /*0x5f7168*/
  *((unsigned char *)this + 565) = 1; /*0x5f716e*/
  *((unsigned char *)this + 556) = 0; /*0x5f7176*/
  *((unsigned char *)this + 557) = 0; /*0x5f717c*/
  *((unsigned char *)this + 559) = 0; /*0x5f7182*/
  *((unsigned char *)this + 562) = 0; /*0x5f7188*/
  *((unsigned char *)this + 563) = 0; /*0x5f718e*/
  *((unsigned char *)this + 564) = 0; /*0x5f7194*/
  *((unsigned char *)this + 566) = 0; /*0x5f719a*/
  *((unsigned char *)this + 567) = 0; /*0x5f71a0*/
  *((unsigned char *)this + 568) = 0; /*0x5f71a6*/
  *((unsigned char *)this + 569) = 0; /*0x5f71ac*/
  *((unsigned char *)this + 570) = 0; /*0x5f71b2*/
  *((unsigned char *)this + 571) = 0x80; /*0x5f71b8*/
  *((unsigned char *)this + 572) = 0x80; /*0x5f71be*/
  *((unsigned char *)this + 573) = 0x80; /*0x5f71c4*/
  *((char *)this + 144) = 16; /*0x5f71ca*/
  *((char *)this + 145) = 0; /*0x5f71d4*/
  *((char *)this + 146) = 0; /*0x5f71da*/
  *((char *)this + 147) = 0; /*0x5f71e0*/
  *((unsigned char *)this + 592) = 0; /*0x5f71e6*/
  *((char *)this + 149) = 0; /*0x5f71ec*/
  *((char *)this + 150) = 0; /*0x5f71f2*/
  *((char *)this + 151) = 0; /*0x5f71f8*/
  *((char *)this + 152) = 0; /*0x5f71fe*/
  *((unsigned char *)this + 612) = 0; /*0x5f7204*/
  *((char *)this + 154) = 0; /*0x5f720a*/
  *((char *)this + 155) = 0; /*0x5f7213*/
  *((char *)this + 156) = 0; /*0x5f7219*/
  *((char *)this + 157) = 0; /*0x5f721f*/
  *((unsigned char *)this + 632) = 0; /*0x5f7225*/
  *((char *)this + 159) = 0; /*0x5f722b*/
  *((char *)this + 160) = 0; /*0x5f7231*/
  *((char *)this + 161) = 0; /*0x5f7237*/
  *((char *)this + 162) = 0; /*0x5f723d*/
  *((unsigned char *)this + 652) = 0; /*0x5f7243*/
  *((char *)this + 164) = 0; /*0x5f7249*/
  *this = (int)&vt_ObjectTypeClass; /*0x5f7251*/
  *((char *)this + 1) = (unsigned int)(int)&vt_ObjectTypeClass;
  *((char *)this + 2) = (unsigned int)(int)&vt_ObjectTypeClass;
  *((char *)this + 3) = (unsigned int)(int)&vt_ObjectTypeClass;
  if ( (char *)this + 9 != (char *)this + 126 ) /*0x5f726d*/
    qmemcpy((char *)this + 126, (char *)this + 9, 0x19u); /*0x5f7274*/
  if ( &g_INI_DefaultBuffer ) /*0x5f727e*/
  {
    strncpy( (char *)(Destination), (const char *)(&g_INI_DefaultBuffer), 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  else
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  if ( Destination != (char *)this + 531 ) /*0x5f72aa*/
  {
    qmemcpy( (char *)this + 531, (const void *)(Destination), 0x18u); /*0x5f72b5*/
    *((unsigned char *)this + 555) = v10; /*0x5f72b7*/
  }
  if ( dword_AC1428 < dword_AC1420 /*0x5f72ee*/
    || (byte_AC1425 || !dword_AC1420)
    && dword_AC142C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC1418 + 8))(
         (int *)&dword_AC1418,
         dword_AC142C + dword_AC1420,
         0) )
  {
    v7 = (unsigned int)(dword_AC1428++);
    *((unsigned int *)dword_AC141C + v7) = (unsigned int)(this); /*0x5f730a*/
  }
  return (int)this; /*0x5f730f*/

}
} // namespace gamemd
// 0x5F7320
namespace gamemd {
BulletTypeClass * ObjectTypeClass::Construct(int aP1)
{

  int *v3; // eax
  int v4; // edx
  char *v5; // eax
  int v6; // edx

  ((AbstractTypeClass*)((int)this))->Init(aP1); /*0x5f7328*/
  v3 = (int *)(&this->ChargerTurrets[3]); /*0x5f732f*/
  this->Image = 0; /*0x5f7335*/
  v4 = 18; /*0x5f733b*/
  do /*0x5f7349*/
  {
    *v3 = 0; /*0x5f7340*/
    v3[1] = 0; /*0x5f7342*/
    v3 += 2; /*0x5f7345*/
    --v4; /*0x5f7348*/
  }
  while ( v4 ); /*0x5f7349*/
  v5 = (char *)(&(&this->__pad_14D)[11]); /*0x5f734b*/
  v6 = 18; /*0x5f7351*/
  do /*0x5f735f*/
  {
    *(unsigned int *)v5 = 0; /*0x5f7356*/
    *((unsigned int *)v5 + 1) = 0; /*0x5f7358*/
    v5 += 8; /*0x5f735b*/
    --v6; /*0x5f735e*/
  }
  while ( v6 ); /*0x5f735f*/
  (&this->VoxelCaches)[0] = 0; /*0x5f7361*/
  (&this->VoxelCaches)[1] = 0; /*0x5f7367*/
  (&this->VoxelCaches)[2] = 0; /*0x5f736d*/
  LOBYTE((&this->VoxelCaches)[3]) = 0; /*0x5f7373*/
  (&this->VoxelCaches)[4] = 0; /*0x5f7379*/
  (&this->VoxelCaches)[5] = 0; /*0x5f737f*/
  (&this->VoxelCaches)[6] = 0; /*0x5f7385*/
  (&this->VoxelCaches)[7] = 0; /*0x5f738b*/
  LOBYTE((&this->VoxelCaches)[8]) = 0; /*0x5f7391*/
  (&this->VoxelCaches)[9] = 0; /*0x5f7397*/
  (&this->VoxelCaches)[10] = 0; /*0x5f739d*/
  (&this->VoxelCaches)[11] = 0; /*0x5f73a3*/
  (&this->VoxelCaches)[12] = 0; /*0x5f73a9*/
  LOBYTE((&this->VoxelCaches)[13]) = 0; /*0x5f73af*/
  (&this->VoxelCaches)[14] = 0; /*0x5f73b5*/
  (&this->VoxelCaches)[15] = 0; /*0x5f73bb*/
  (&this->VoxelCaches)[16] = 0; /*0x5f73c1*/
  (&this->VoxelCaches)[17] = 0; /*0x5f73c7*/
  LOBYTE((&this->VoxelCaches)[18]) = 0; /*0x5f73cd*/
  (&this->VoxelCaches)[19] = 0; /*0x5f73d3*/
  this->vtable1 = (void *)((unsigned int)(&vt_ObjectTypeClass)); /*0x5f73d9*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ObjectTypeClass); /*0x5f73df*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ObjectTypeClass); /*0x5f73e6*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ObjectTypeClass); /*0x5f73ed*/
  return (gamemd::BulletTypeClass *)(this); /*0x5f73f6*/

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
  int v8; // [esp+Ch] [ebp-4h] BYREF

  *(unsigned int *)this = (unsigned int)(&vt_ObjectTypeClass); /*0x5f740b*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_ObjectTypeClass); /*0x5f7411*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_ObjectTypeClass); /*0x5f7418*/
  *((unsigned int *)this + 3) = (int)(&vt_ObjectTypeClass); /*0x5f741f*/
  v8 = (int)(this); /*0x5f7431*/
  v2 = (*(int (**)(int *, int *))(dword_AC1418 + 16))( (int *)(&dword_AC1418), (int *)(&v8)); /*0x5f7435*/
  if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((unsigned int *)dword_AC141C + v2 - 1) = *((unsigned int *)dword_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < dword_AC1428 ); /*0x5f7468*/
  }
  if ( *((unsigned char *)this + 168) && *((unsigned int *)this + 41) ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(*(void **)&this->q0A4); /*0x5f7481*/
    *((unsigned int *)this + 41) = 0; /*0x5f7489*/
    *((unsigned char *)this + 168) = 0; /*0x5f748f*/
  }
  ((ObjectTypeClass *)(char *)this)->CleanupWeapons(); /*0x5f7497*/
  __3_YAXPAX_Z(*(void **)&this->q280); /*0x5f74a3*/
  *((unsigned int *)this + 160) = 0; /*0x5f74a8*/
  *((unsigned int *)this + 161) = 0; /*0x5f74ae*/
  *((unsigned int *)this + 162) = 0; /*0x5f74b4*/
  *((unsigned char *)this + 652) = 0; /*0x5f74ba*/
  *((unsigned int *)this + 164) = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(*(void **)&this->q26C); /*0x5f74cd*/
  *((unsigned int *)this + 155) = 0; /*0x5f74d2*/
  *((unsigned int *)this + 156) = 0; /*0x5f74d8*/
  *((unsigned int *)this + 157) = 0; /*0x5f74de*/
  *((unsigned char *)this + 632) = 0; /*0x5f74e4*/
  *((unsigned int *)this + 159) = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(*(void **)&this->q258); /*0x5f74f7*/
  *((unsigned int *)this + 150) = 0; /*0x5f74fc*/
  *((unsigned int *)this + 151) = 0; /*0x5f7502*/
  *((unsigned int *)this + 152) = 0; /*0x5f7508*/
  *((unsigned char *)this + 612) = 0; /*0x5f750e*/
  *((unsigned int *)this + 154) = 0; /*0x5f7514*/
  __3_YAXPAX_Z(*(void **)&this->VoxelCaches_4); /*0x5f7521*/
  *((unsigned int *)this + 145) = 0; /*0x5f7526*/
  *((unsigned int *)this + 146) = 0; /*0x5f752c*/
  *((unsigned int *)this + 147) = 0; /*0x5f7532*/
  *((unsigned char *)this + 592) = 0; /*0x5f7538*/
  *((unsigned int *)this + 149) = 0; /*0x5f753e*/
  v3 = (ObjectTypeClass *)((char *)this + 488); /*0x5f7547*/
  v4 = 18; /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 = (ObjectTypeClass *)((char *)v3 - 8); /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString( (void *)(v3)); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  v5 = (ObjectTypeClass *)((char *)this + 344); /*0x5f755f*/
  v6 = 18; /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 = (ObjectTypeClass *)((char *)v5 - 8); /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString( (void *)(v5)); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString(  (ObjectTypeClass *)((char *)this + 192)); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString(  (ObjectTypeClass *)((char *)this + 184)); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString(  (ObjectTypeClass *)((char *)this + 176)); /*0x5f7593*/
  return (gamemd::SomeVoxelCache **)(((AbstractTypeClass *)((AbstractTypeClass *)this))->Dtor()); /*0x5f759f*/

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
          ((FileTreeNode *)((HWND)(v5)))->Destroy(); /*0x5f7820*/
          --v6; /*0x5f7825*/
        }
        while ( v6 ); /*0x5f7826*/
      }
      __3_YAXPAX_Z(v2); /*0x5f7829*/
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
          ((FileTreeNode *)((HWND)(v11)))->Destroy(); /*0x5f7860*/
          --v12; /*0x5f7865*/
        }
        while ( v12 ); /*0x5f7866*/
      }
      __3_YAXPAX_Z(v8); /*0x5f7869*/
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
          ((FileTreeNode *)((HWND)(v17)))->Destroy(); /*0x5f78a0*/
          --v18; /*0x5f78a5*/
        }
        while ( v18 ); /*0x5f78a6*/
      }
      __3_YAXPAX_Z(v14); /*0x5f78a9*/
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
          ((FileTreeNode *)((HWND)(v23)))->Destroy(); /*0x5f78e0*/
          --v24; /*0x5f78e5*/
        }
        while ( v24 ); /*0x5f78e6*/
      }
      __3_YAXPAX_Z(v20); /*0x5f78e9*/
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
  int v7; // eax
  char v8; // dl
  int v9; // eax
  int result; // eax
  int16_t v11; // cx
  char Destination[24]; // [esp+8h] [ebp-220h] BYREF
  char v13; // [esp+20h] [ebp-208h]
  char Source; // [esp+24h] [ebp-204h] BYREF
  char v15; // [esp+25h] [ebp-203h]
  char Buffer[256]; // [esp+128h] [ebp-100h] BYREF

  if ( *((unsigned char *)this + 529) && *((unsigned int *)dword_A8B230 + 1174) == 1 && !*((unsigned char *)this + 168) ) /*0x5f9096*/
  {
    if ( !*((unsigned char *)this + 530) ) /*0x5f90a0*/
    {
      v2 = (char *)((unsigned char *)this + 504); /*0x5f90ab*/
      sprintf(Buffer,(const char *const )(off_832AE8), (unsigned char *)this + 504); /*0x5f90bf*/
      if ( Buffer ) /*0x5f90d0*/
      {
        strncpy( (char *)(Destination), (const char *)(Buffer), 0x18u); /*0x5f90e7*/
        v13 = 0; /*0x5f90ef*/
      }
      else
      {
        Destination[0] = 0; /*0x5f90d2*/
      }
      if ( Destination != v2 ) /*0x5f90fa*/
      {
        qmemcpy( (void *)(v2), (const void *)(Destination), 0x18u); /*0x5f9105*/
        *((unsigned char *)this + 528) = v13; /*0x5f9107*/
      }
      *((unsigned char *)this + 530) = 1; /*0x5f9108*/
    }
  }
  else
  {
    *((unsigned char *)this + 530) = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0,(const char *)((unsigned char *)this + 504),(const char *)(Ext)); /*0x5f912e*/
  if ( *((unsigned char *)this + 556) ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0,(const char *)((unsigned char *)this + 504), (const char *)&off_7E1BC6 + 112 * *((unsigned int *)dword_A8B230 + 1174)); /*0x5f9169*/
  }
  else if ( *((unsigned char *)this + 567) ) /*0x5f9173*/
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
        v15 = (&byte_7E1BCE)[112 * v3]; /*0x5f91dd*/
    }
  }
  if ( *((unsigned char *)this + 168) && *((unsigned int *)this + 41) ) /*0x5f91eb*/
    __3_YAXPAX_Z(*((void **)this + 41)); /*0x5f91f6*/
  v6 = *(unsigned int *)this; /*0x5f91fe*/
  *((unsigned int *)this + 41) = 0; /*0x5f9203*/
  *((unsigned char *)this + 168) = 0; /*0x5f920d*/
  if ( (*(int (**)(void *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (**)(void *))(*(unsigned int *)this + 44))(this) == 5 )
  {
    v9 = (int)(SearchMIXFile( (char *)(&Source), 1)); /*0x5f9267*/
    *((unsigned int *)this + 41) = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (**)(void *))(*(unsigned int *)this + 44))(this) != 30 /*0x5f9241*/
    && (*(int (**)(void *))(*(unsigned int *)this + 44))(this) != 37 )
  {
    v7 = (int)(SearchMIXFile( (char *)(&Source), 0)); /*0x5f9249*/
    *((unsigned int *)this + 41) = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
LABEL_40:
      *((unsigned int *)this + 41) = (unsigned int)(SearchMIXFile( (char *)(&Source), v8)); /*0x5f927d*/
    }
  }
LABEL_41:
  result = *((unsigned int *)this + 41); /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = *(unsigned short *)(result + 2); /*0x5f9296*/
    LOWORD(result) = *(unsigned short *)(result + 4); /*0x5f929a*/
    if ( v11 <= (int16_t)result ) /*0x5f92a1*/
      result = (int16_t)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    *((unsigned int *)this + 123) = result; /*0x5f92b5*/
  }
  return (AbstractClass * *)result; /*0x5f92bb*/

}
} // namespace gamemd
// 0x5F92D0
namespace gamemd {
void* ObjectTypeClass::LoadFromINI(uint8_t ***aP1)
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

  INIClass::ResetSection(((INIClass*)((INIClass *)aP1))); /*0x5f92e3*/
  if ( !(uint8_t)((AbstractTypeClass*)((AbstractTypeClass *)this))->LoadFromINI( (unsigned __int8 ***)(aP1)) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  strcpy( (char *)(Source), (const char *)(this->ImageFile)); /*0x5f931c*/
  /*0x5f933b*/
    ((INIClass*)((INIClass *)aP1))->GetString(/*0x5f933b*/ (uint8_t *)((unsigned int *)this)[0], (uint8_t *)g_INI_Key_Image, Source, this->ImageFile, 25);
  v34 = (int)strcpy( (char *)(Source), (const char *)(this->AlphaImageFile)); /*0x5f9366*/
  ((INIClass*)((INIClass *)aP1))->GetString((uint8_t *)((unsigned int *)this)[0], (gamemd::INIClass *)(aAlphaimage), Source, this->AlphaImageFile, 25); /*0x5f9386*/
  CrushSound = this->CrushSound; /*0x5f938b*/
  if ( /*0x5f93a8*/
         ((INIClass*)((INIClass *)aP1))->GetString(/*0x5f93a8*/ (uint8_t *)((unsigned int *)this)[0], aCrushsound, &g_INI_DefaultBuffer, (char *)&Destination, 128) )
  {
    Index = VocClass::FindIndex( &Destination); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      CrushSound = Index; /*0x5f93bf*/
  }
  this->CrushSound = CrushSound; /*0x5f93d5*/
  AmbientSound = this->AmbientSound; /*0x5f93db*/
  if ( !/*0x5f93f9*/
          ((INIClass*)((INIClass *)aP1))->GetString(/*0x5f93f9*/ (uint8_t *)((unsigned int *)this)[0], aAmbientsound, &g_INI_DefaultBuffer, (char *)&Destination, 128)
    || (v6 = VocClass::FindIndex( &Destination), v6 == -1) )
  {
    v6 = AmbientSound; /*0x5f93fb*/
  }
  Crushable = this->Crushable; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aCrushable), Crushable); /*0x5f9412*/
  Bombable = this->Bombable; /*0x5f941f*/
  this->Crushable = Bool_Overwrite; /*0x5f9426*/
  this->Bombable = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aBombable), Bombable); /*0x5f9431*/
  v9 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aNospawnalt), (&this->__pad_14D)[155]); /*0x5f9446*/
  AlternateArcticArt = this->AlternateArcticArt; /*0x5f944b*/
  (&this->__pad_14D)[155] = v9; /*0x5f9451*/
  v11 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aAlternatearcti), AlternateArcticArt); /*0x5f9460*/
  RadarInvisible = this->RadarInvisible; /*0x5f946d*/
  this->AlternateArcticArt = v11; /*0x5f9474*/
  this->RadarInvisible = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f947f*/
                           (int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aRadarinvisible), RadarInvisible);
  v12 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aSelectable), this->Selectable); /*0x5f9494*/
  LegalTarget = this->LegalTarget; /*0x5f9499*/
  this->Selectable = v12; /*0x5f949f*/
  v14 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aLegaltarget), LegalTarget); /*0x5f94ae*/
  v29 = this->Armor[0]; /*0x5f94bb*/
  this->LegalTarget = v14; /*0x5f94c2*/
  this->Armor[0] = ArmorType::FindIndex((ArmorType *)aP1, (uint8_t *)((unsigned int *)this)[0], g_INI_Key_Armor, v29); /*0x5f94cd*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(((INIClass *)((bool *)aP1)), (uint8_t *)((unsigned int *)this)[0], (uint8_t *)(aStrength), this->Strength); /*0x5f94e2*/
  Immune = this->Immune; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  v17 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aImmune), Immune); /*0x5f94fc*/
  Insignificant = this->Insignificant; /*0x5f9509*/
  this->Immune = v17; /*0x5f9510*/
  this->Insignificant = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f951b*/
                          (int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aInsignificant), Insignificant);
  this->HasRadialIndicator = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f9549*/
                               (int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aHasradialindic), this->HasRadialIndicator);
  Coord = INIClass::GetCoord(/*0x5f954f*/
            (INIClass *)aP1, (int)&v34, (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aRadialcolor), (uint8_t *)this->__pad_98);
  IgnoresFirestorm = this->IgnoresFirestorm; /*0x5f9557*/
  *(unsigned short *)this->__pad_98 = *(unsigned short *)Coord; /*0x5f955d*/
  this->__pad_98[2] = *(unsigned char *)(Coord + 2); /*0x5f956c*/
  v20 = INIClass::ReadBool_Overwrite((INIClass *)((int *)aP1), (uint8_t *)((unsigned int *)this)[0], (unsigned char *)(aIgnoresfiresto), IgnoresFirestorm); /*0x5f956f*/
  UseLineTrail = this->UseLineTrail; /*0x5f9580*/
  this->IgnoresFirestorm = v20; /*0x5f958c*/
  this->UseLineTrail = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f959d*/
                         (int *)&DSurface_ViewBounds.__pad_FC[228]), (uint8_t *)this->ImageFile, (unsigned char *)(aUselinetrail), UseLineTrail);
  v21 = INIClass::GetCoord(/*0x5f95b4*/
          (INIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v34, (uint8_t *)this->ImageFile, (unsigned char *)(aLinetrailcolor), (uint8_t *)this->LineTrailColor);
  *(unsigned short *)this->LineTrailColor = *(unsigned short *)v21; /*0x5f95bc*/
  LineTrailColorDecrement = this->LineTrailColorDecrement; /*0x5f95cd*/
  this->LineTrailColor[2] = *(unsigned char *)(v21 + 2); /*0x5f95d4*/
  v22 = INIClass::ReadInt_Overwrite((INIClass *)(/*0x5f95d7*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228]), (uint8_t *)this->ImageFile, (unsigned char *)(aLinetrailcolor_0), LineTrailColorDecrement);
  Theater = this->Theater; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  v24 = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f95f4*/
          (int *)&DSurface_ViewBounds.__pad_FC[228]), (uint8_t *)this->ImageFile, (uint8_t *)g_INI_Key_Theater, Theater);
  NewTheater = this->NewTheater; /*0x5f9604*/
  this->Theater = v24; /*0x5f960b*/
  this->NewTheater = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f9616*/
                       (int *)&DSurface_ViewBounds.__pad_FC[228]), (uint8_t *)this->ImageFile, (unsigned char *)(aNewtheater), NewTheater);
  v25 = INIClass::ReadBool_Overwrite((INIClass *)(/*0x5f962e*/
          (int *)&DSurface_ViewBounds.__pad_FC[228]), (uint8_t *)this->ImageFile, (unsigned char *)(aVoxel), this->Voxel);
  this->Voxel = v25; /*0x5f9634*/
  if ( !v25 && (*((int (**)(ObjectTypeClass *))this->vtable1 + 11))(this) != 5 ) /*0x5f9649*/
    ((ObjectTypeClass*)((char *)this))->Load2DArt(); /*0x5f964d*/
  if ( (&this->AlphaImageFile)[0] ) /*0x5f9652*/
  {
    _makepath((char *)&(&Destination.Name)[5], 0, 0,(const char *)( this->AlphaImageFile),(const char *)( Ext)); /*0x5f9674*/
    this->AlphaImage = (SHPStruct *)SearchMIXFile((char *)&(&Destination.Name)[5], 0); /*0x5f968a*/
  }
  return (void *)(1); /*0x5f9690*/

}
} // namespace gamemd
// 0x5F9710
namespace gamemd {
int ObjectTypeClass::SetRTTI71()
{

  int result; // eax

  BYTE1(this->vtable1) = 71; /*0x5f9710*/
  return result; /*0x5f9714*/

}
} // namespace gamemd
// 0x5F9720
namespace gamemd {
int ObjectTypeClass::LoadCleanup(ObjectTypeClass *aP0, int aP1)
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

  __3_YAXPAX_Z((void *)((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[0]); /*0x5f973e*/
  ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[0] = 0; /*0x5f974e*/
  ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[1] = 0; /*0x5f9750*/
  ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[2] = 0; /*0x5f9753*/
  LOBYTE(((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[3]) = 0; /*0x5f9756*/
  ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[4] = 0; /*0x5f9759*/
  ((ObjectTypeClass *)((ObjectTypeClass *)&((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[5]))->FreeLoaderBuffer(); /*0x5f975c*/
  ((ObjectTypeClass *)((ObjectTypeClass *)&((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[10]))->FreeLoaderBuffer(); /*0x5f9767*/
  ((ObjectTypeClass *)((ObjectTypeClass *)&((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[15]))->FreeLoaderBuffer(); /*0x5f9772*/
  v2 = (void *)((gamemd::ObjectTypeClass*)aP0)->MainVoxel[0]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    ((WaveClass *)(((gamemd::ObjectTypeClass*)aP0)->MainVoxel[0]))->Destroy(); /*0x5f9783*/
    __3_YAXPAX_Z(v2); /*0x5f9789*/
  }
  v3 = (String *)((gamemd::ObjectTypeClass*)aP0)->TurretVoxel[0]; /*0x5f9791*/
  ((gamemd::ObjectTypeClass*)aP0)->MainVoxel[0] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    ((String*)v3)->Release(); /*0x5f97a3*/
    __3_YAXPAX_Z(v3); /*0x5f97a9*/
  }
  v4 = (WaveClass *)((gamemd::ObjectTypeClass*)aP0)->BarrelVoxel[0]; /*0x5f97b1*/
  ((gamemd::ObjectTypeClass*)aP0)->TurretVoxel[0] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    ((WaveClass*)v4)->Destroy(); /*0x5f97c3*/
    __3_YAXPAX_Z(v4); /*0x5f97c9*/
  }
  v5 = (String *)((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[0]; /*0x5f97d1*/
  ((gamemd::ObjectTypeClass*)aP0)->BarrelVoxel[0] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    ((String*)v5)->Release(); /*0x5f97e3*/
    __3_YAXPAX_Z(v5); /*0x5f97e9*/
  }
  v6 = (WaveClass *)((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[1]; /*0x5f97f1*/
  ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[0] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    ((WaveClass*)v6)->Destroy(); /*0x5f9803*/
    __3_YAXPAX_Z(v6); /*0x5f9809*/
  }
  v7 = (String *)((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[2]; /*0x5f9811*/
  ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[1] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    ((String*)v7)->Release(); /*0x5f9823*/
    __3_YAXPAX_Z(v7); /*0x5f9829*/
  }
  ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[2] = 0; /*0x5f9833*/
  ((ObjectTypeClass*)(char *)aP0)->CleanupWeapons(); /*0x5f9839*/
  result = AbstractClass::SaveLoad_Prefix_0( (gamemd::AbstractClass *)(aP0), (AbstractClass *)(aP1)); /*0x5f9847*/
  if ( result >= 0 ) /*0x5f984e*/
  {
    ((gamemd::ObjectTypeClass*)aP0)->Image = 0; /*0x5f9856*/
    ((gamemd::ObjectTypeClass*)aP0)->ImageAllocated = 0; /*0x5f985c*/
    ((gamemd::ObjectTypeClass*)aP0)->AlphaImage = 0; /*0x5f9862*/
    if ( aP0 != (IUnknown *)-580 ) /*0x5f9868*/
    {
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[0] = 0; /*0x5f986a*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[1] = 0; /*0x5f986c*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[2] = 0; /*0x5f986f*/
      LOBYTE(((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[3]) = 0; /*0x5f9872*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[4] = 0; /*0x5f9875*/
    }
    if ( aP0 != (IUnknown *)-600 ) /*0x5f9880*/
    {
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[5] = 0; /*0x5f9882*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[6] = 0; /*0x5f9884*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[7] = 0; /*0x5f9887*/
      LOBYTE(((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[8]) = 0; /*0x5f988a*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[9] = 0; /*0x5f988d*/
    }
    if ( aP0 != (IUnknown *)-620 ) /*0x5f9898*/
    {
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[10] = 0; /*0x5f989a*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[11] = 0; /*0x5f989c*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[12] = 0; /*0x5f989f*/
      LOBYTE(((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[13]) = 0; /*0x5f98a2*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[14] = 0; /*0x5f98a5*/
    }
    if ( aP0 != (IUnknown *)-640 ) /*0x5f98b0*/
    {
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[15] = 0; /*0x5f98b2*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[16] = 0; /*0x5f98b4*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[17] = 0; /*0x5f98b7*/
      LOBYTE(((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[18]) = 0; /*0x5f98ba*/
      ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->VoxelCaches)[19] = 0; /*0x5f98bd*/
    }
    ((gamemd::ObjectTypeClass*)aP0)->MainVoxel[0] = 0; /*0x5f98c0*/
    ((gamemd::ObjectTypeClass*)aP0)->TurretVoxel[0] = 0; /*0x5f98c6*/
    ((gamemd::ObjectTypeClass*)aP0)->BarrelVoxel[0] = 0; /*0x5f98cc*/
    ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[0] = 0; /*0x5f98d2*/
    ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[1] = 0; /*0x5f98d8*/
    ((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[2] = 0; /*0x5f98de*/
    v9 = (int *)(&((gamemd::ObjectTypeClass*)aP0)->ChargerTurrets[4]); /*0x5f98e4*/
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
    if ( ((unsigned int *)&((gamemd::ObjectTypeClass*)aP0)->AlphaImageFile)[0] ) /*0x5f9906*/
    {
      _makepath(Buffer, 0, 0,(const char *)( ((gamemd::ObjectTypeClass*)aP0)->AlphaImageFile),(const char *)( Ext)); /*0x5f9923*/
      ((gamemd::ObjectTypeClass*)aP0)->AlphaImage = (SHPStruct *)SearchMIXFile( (char *)(Buffer), 0); /*0x5f9936*/
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

  v1 = (Object *)(dword_A83D4C); /*0x712040*/
  if ( !dword_A83D4C ) /*0x71204a*/
    return (gamemd::SHPStruct **)(*(unsigned int *)&((unsigned int *)this)[1548]); /*0x7120bf*/
  if ( (&dword_A83D4C)[1].__pad_C[19] ) /*0x71204c*/
  {
    if ( (*(int (**)(gamemd::TechnoTypeClass*))(this->ObjectTypeClass[0] + 44))(this) == 16 ) /*0x712060*/
    {
      result = *(unsigned int *)&((unsigned int *)this)[1580]; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( ((unsigned int *)this)[2986] ) /*0x71206c*/
          return (SHPStruct * *)result; /*0x712074*/
      }
    }
    v1 = (Object *)(dword_A83D4C); /*0x712076*/
  }
  if ( !v1 /*0x7120a1*/
    || !v1[1].__pad_C[20]
    || (*(int (**)(gamemd::TechnoTypeClass*))(this->ObjectTypeClass[0] + 44))(this) != 40
    && ((*(int (**)(gamemd::TechnoTypeClass*))(this->ObjectTypeClass[0] + 44))(this) != 7
     || !*(unsigned int *)&((unsigned int *)this)[804]) )
  {
    return (gamemd::SHPStruct **)(*(unsigned int *)&((unsigned int *)this)[1548]); /*0x7120a1*/
  }
  result = *(unsigned int *)&((unsigned int *)this)[1580]; /*0x7120ab*/
  if ( !result || !((unsigned int *)this)[2986] ) /*0x7120b5*/
    return (gamemd::SHPStruct **)(*(unsigned int *)&((unsigned int *)this)[1548]); /*0x7120bd*/
  return (SHPStruct * *)result; /*0x7120c5*/

}
} // namespace gamemd
// 0x712170
namespace gamemd {
int ObjectTypeClass::LoadExtras(CCINIClass * aP0, void * _38C, unsigned char *** a2)  // G57w11: def 同步 hpp（__userpurge st0 伪影，raw 调用侧传 ini 指针）
{

  int v3; // ecx
  int result; // eax
  int v6; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  char Bool_Overwrite; // al
  unsigned int *GUID_Overwrite; // eax
  int Int_Overwrite; // eax
  int v25; // eax
  char *i; // eax
  int Count; // edx
  int CapacityIncrement; // eax
  uint8_t *inited; // eax
  int v30; // eax
  char *j; // eax
  int v32; // edx
  int unknown_18; // eax
  char v34; // al
  unsigned int *v35; // edi
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  int v38; // ecx
  unsigned int *v39; // edi
  unsigned int *v40; // eax
  unsigned int *v41; // edi
  unsigned int *v42; // eax
  unsigned int *v43; // edi
  unsigned int *v44; // eax
  unsigned int *v45; // edi
  unsigned int *v46; // eax
  uint8_t *v47; // eax
  int v48; // eax
  uint8_t *v49; // eax
  int v50; // eax
  uint8_t *v51; // eax
  int v52; // eax
  uint8_t *v53; // eax
  int v54; // eax
  uint8_t *v55;... [174146 chars total]
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

  result = COMObject::GetSizeMaxWrapper( (AbstractClass *)(v19), (AbstractClass *)(v20)); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    v2 = 4 * *(unsigned int *)&((unsigned int *)&v19[1].__pad_14D)[67] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    v3 = v2 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].__pad_14D)[95] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    v4 = v3 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].__pad_14D)[123] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    v5 = v4 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].__pad_14D)[151] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    v6 = v5 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].ImageFile)[8] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    v7 = v6 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].AlphaImageFile)[9] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    v8 = v7 + 4 * *(unsigned int *)&v19[1].HasRadialIndicator + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    v9 = v8 + 4 * ((unsigned int *)&v19[1].VoxelCaches)[4] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    v10 = v9 + 4 * ((unsigned int *)&v19[1].VoxelCaches)[11] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    v11 = v10 + 4 * ((unsigned int *)&v19[1].VoxelCaches)[18] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    v12 = v11 + 4 * *(unsigned int *)&((unsigned int *)&v19[2].AlphaImageFile)[1] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    v13 = v12 + 4 * *(unsigned int *)&v19[2].Selectable + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    v14 = v13 + 4 * *(unsigned int *)&((unsigned int *)&v19[1])[44] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    v15 = v14 + 4 * (int)v19[2].AlphaImage + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    v16 = v15 + 4 * *(unsigned int *)&((unsigned int *)&v19[1].__pad_14D)[23] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    v17 = v16 + 4 * (int)v19[1].AlphaImage + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    v18 = v17 + 4 * ((unsigned int *)&v19[2].VoxelCaches)[7] + 4; /*0x717186*/
    *v20 = v18; /*0x71718a*/
    *v20 = v18 + 4 * ((unsigned int *)&v19[2].VoxelCaches)[14] + 4; /*0x717196*/
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

  LOBYTE(v2) = this->__pad_DC8[8]; /*0x717823*/
  v3 = &this->__pad_DC8[8]; /*0x717829*/
  if ( (unsigned char)v2 ) /*0x717831*/
  {
    v2 = ((FileExtension*)v3)->MapHandler(); /*0x717833*/
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
    return (unsigned int *)this; /*0x717c0a*/
  (*((void (**)(ObjectTypeClass *))this->vtable1 + 3))(this); /*0x717c0e*/
  v3 = (void *)a2[2]; /*0x717c11*/
  ((unsigned int *)this)[0] = (unsigned int)v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    ((unsigned int *)this)[0] = 0; /*0x717c5a*/
    BYTE1(((unsigned int *)this)[0]) = 0; /*0x717c61*/
    return (unsigned int *)this; /*0x717c65*/
  }
  v4 = (void *)__2_YAPAXI_Z(4 * (unsigned int)v3); /*0x717c23*/
  ((unsigned int *)this)[0] = (unsigned int)v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return (unsigned int *)this; /*0x717c30*/
  vtable2 = (void *)(((unsigned int *)this)[0]); /*0x717c32*/
  v6 = 0; /*0x717c35*/
  BYTE1(((unsigned int *)this)[0]) = 1; /*0x717c39*/
  if ( (int)vtable2 <= 0 ) /*0x717c3d*/
    return (unsigned int *)this; /*0x717c3d*/
  do /*0x717c51*/
  {
    *((unsigned int *)((unsigned int *)this)[0] + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < (int)((unsigned int *)this)[0] ); /*0x717c51*/
  return (unsigned int *)this; /*0x717c55*/

}
} // namespace gamemd
// 0x41CBF0
namespace gamemd {
unsigned int * ObjectTypeClass::vt_entry_7C(unsigned int * a1)
{

  int v1; // esi

  v1 = 2 * dword_889F58; /*0x41cbfc*/
  *(unsigned int *)a1->TechnoTypeClass = 256; /*0x41cc07*/
  *(unsigned int *)a1[4] = 256; /*0x41cc09*/
  *(unsigned int *)a1[8] = v1; /*0x41cc0c*/
  return a1->TechnoTypeClass; /*0x41cc0f*/

}
} // namespace gamemd
// 0x41CF80
namespace gamemd {
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{

  a0->AbstractTypeClass = (void *)*aP1; /*0x41cf8d*/
  ((unsigned int *)a0)[0] = (unsigned int)(void *)aP1[1]; /*0x41cf92*/
  ((unsigned int *)a0)[0] = (unsigned int)(void *)aP1[2]; /*0x41cf99*/
  return a0; /*0x41cf95*/

}
} // namespace gamemd
// 0x474690
namespace gamemd {
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{

  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  sprintf(Buffer, "%d", 360 * a4 / 256); /*0x4746ba*/
  return ((INIClass *)(char *)this)->SetString((unsigned char *)( this), (char *)(aP2), (char *)(Buffer)); /*0x4746d8*/

}
} // namespace gamemd
// 0x4746E0
namespace gamemd {
int ObjectTypeClass::ReadPrerequisite(unsigned char * a2, unsigned char * a3, int a4)
{

  char String[32]; // [esp+0h] [ebp-20h] BYREF

  if ( ((INIClass*)((INIClass *)this))->GetString(a2, a3, &g_INI_DefaultBuffer, String, 32) ) /*0x4746f9*/
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

  if ( ((INIClass*)((INIClass *)this))->GetString(a3, a4, &g_INI_DefaultBuffer, Buffer, 64) ) /*0x474759*/
  {
    sscanf(Buffer, "%d,%d", &a4, &a3); /*0x474776*/
    HIWORD(a4) = (unsigned short)a3; /*0x47478e*/
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
  return ((INIClass *)(char *)this)->SetString((unsigned char *)( this), (char *)(aP2), (char *)(Buffer)); /*0x4747fb*/

}
} // namespace gamemd
// 0x4749E0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{

  char *v5; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v5 = (char *)(sub_473960(a4)); /*0x4749f1*/
  ((INIClass*)((INIClass *)this))->GetString(aP1, a2, v5, Destination, 32); /*0x474a03*/
  return ((ObjectTypeClass *)Destination)->loadTypeMember_473980(); /*0x474a11*/

}
} // namespace gamemd
// 0x474D50
namespace gamemd {
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{

  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF

  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474d75*/
  return ((INIClass *)(char *)this)->SetString((unsigned char *)( this), (char *)(aP2), (char *)(Buffer)); /*0x474d93*/

}
} // namespace gamemd
// 0x474E40
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{

  int v4; // edi
  char **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  ((INIClass*)((INIClass *)this))->GetString(aP1, a2, (&off_81BA88)[a4], Destination, 32); /*0x474e62*/
  v4 = 0; /*0x474e67*/
  v5 = (char **)(&off_81BA88); /*0x474e69*/
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

  ((INIClass*)((INIClass *)this))->GetString(a2, a3, &g_INI_DefaultBuffer, Destination, 100); /*0x474fba*/
  if ( strlen( (const char *)(Destination)) ) /*0x474fc3*/
    return ((VocClass *)Destination)->FindByName(); /*0x474fd4*/
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

  Name = ((AbstractType_e4 *)a4)->FindName(); /*0x475001*/
  ((INIClass*)((INIClass *)this))->GetString(aP1, a2, Name, Destination[0].__pad_0, 32); /*0x475013*/
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
  ((INIClass*)((INIClass *)this))->GetString(aP1, a2, v5, Destination, 32); /*0x475083*/
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

  *(unsigned int *)&v8[8] = (unsigned int)this;
  v8[12] = g_INI_DefaultBuffer; /*0x476252*/
  memset( (void *)(&v8[13]), 0, 0x1FCu); /*0x476268*/
  v9 = 0; /*0x47626a*/
  v10 = 0; /*0x47626c*/
  for ( i = 0; i < *(unsigned int *)(aP3 + 16); ++i ) /*0x476274*/
  {
    if ( v8[12] ) /*0x476281*/
      strcat( (char *)(&v8[12]), (char *)&::Delimiter); /*0x4762a8*/
    v5 = *(unsigned int *)(aP3 + 4); /*0x4762b1*/
    v8[4] = 0; /*0x4762b4*/
    v6 = *(unsigned int *)(v5 + 4 * i); /*0x4762bc*/
    v8[4] = HIBYTE(v6); /*0x4762c6*/
    *(unsigned int *)v8 = v6 & 0xFFFFFF; /*0x4762ce*/
    strcat( (char *)(&v8[12]), (const char *)(System_Read_6E7330((ObjectClass *)v8) + 36)); /*0x4762fa*/
  }
  return ((INIClass *)*(char **)&v8[8])->SetString((unsigned char *)( this), (char *)(a2), (char *)(&v8[12])); /*0x47632e*/

}
} // namespace gamemd
// 0x476FC0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{

  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = (char *)(sub_48E030(aP3)); /*0x476fdd*/
  if ( ((INIClass*)((INIClass *)this))->GetString(aP1, a2, v5, Destination, 128) ) /*0x476ff5*/
    return ((ObjectTypeClass *)Destination)->loadTypeMember_48DFF0(); /*0x477002*/
  else
    return (int)(aP3); /*0x477012*/

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

  ((INIClass*)((INIClass *)this))->GetString(aP1, a2, (&off_81BABC)[aP3], String, 128); /*0x4775c1*/
  v4 = strtok(String, (char *)&::Delimiter); /*0x4775d5*/
  result = _strcmpi(v4,(const char *)( g_INI_Key_None)); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)g_INI_Key_Normal) ) /*0x4775fa*/
    {
      v6 = _strcmpi(v4,(const char *)(aStrong)) == 0; /*0x477624*/
      result = 2; /*0x477626*/
      if ( !v6 ) /*0x47762b*/
        return (int)(aP3); /*0x47762d*/
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
  v3 = (char **)(off_81DA58); /*0x48dffb*/
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
int ObjectTypeClass::CreateInstance(int aP1, int aP2)
{

  if ( *(unsigned int *)&((unsigned int *)this)[0] ) /*0x5f1c30*/
    return (*(int (**)(unsigned int, int, int))(**(unsigned int **)&((unsigned int *)this)[8] + 16))(*(unsigned int *)&((unsigned int *)this)[8], aP1, aP2); /*0x5f1c4b*/
  else
    return 0; /*0x5f1c37*/

}
} // namespace gamemd
// 0x5F61A0
namespace gamemd {
void ObjectTypeClass::ReleaseWaveAndString(void *a1)
{

  void *vtable0; // edi
  String *vtable1; // edi

  vtable0 = this->vtable1; /*0x5f61a4*/
  if ( this->vtable1 ) /*0x5f61a4*/
  {
    ((WaveClass *)(this->vtable1))->Destroy(); /*0x5f61ac*/
    __3_YAXPAX_Z(vtable0); /*0x5f61b2*/
  }
  vtable1 = (String *)((unsigned int *)this)[0]; /*0x5f61ba*/
  this->vtable1 = 0; /*0x5f61bd*/
  if ( vtable1 ) /*0x5f61c5*/
  {
    ((String *)vtable1)->Release(); /*0x5f61c9*/
    __3_YAXPAX_Z(vtable1); /*0x5f61cf*/
  }
  ((unsigned int *)this)[0] = 0; /*0x5f61d7*/

}
} // namespace gamemd
// 0x5F75C0
namespace gamemd {
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{

  a1->AbstractTypeClass = (void *)10; /*0x5f75cd*/
  ((unsigned int *)a1)[0] = (unsigned int)(void *)10; /*0x5f75d3*/
  ((unsigned int *)a1)[0] = (unsigned int)(void *)10; /*0x5f75d6*/
  return a1; /*0x5f75d9*/

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

  v1 = (char *)((unsigned char *)this + 204); /*0x5f8084*/
  v2 = 18; /*0x5f808a*/
  do /*0x5f8107*/
  {
    v3 = (void *)*((unsigned int *)v1 - 1); /*0x5f8091*/
    if ( v3 ) /*0x5f8096*/
    {
      ((WaveClass *)(*((unsigned int *)v1 - 1)))->Destroy(); /*0x5f809a*/
      __3_YAXPAX_Z(v3); /*0x5f80a0*/
      *((unsigned int *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(unsigned int *)v1 ) /*0x5f80ab*/
    {
      ((String *)*(void ***)v1)->Release(); /*0x5f80b3*/
      __3_YAXPAX_Z(v4); /*0x5f80b9*/
      *(unsigned int *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((unsigned int *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      ((WaveClass *)(*((unsigned int *)v1 + 35)))->Destroy(); /*0x5f80cf*/
      __3_YAXPAX_Z(v5); /*0x5f80d5*/
      *((unsigned int *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((unsigned int *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      ((String *)*((void ***)v1 + 36))->Release(); /*0x5f80ef*/
      __3_YAXPAX_Z(v6); /*0x5f80f5*/
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
ObjectTypeClass * ObjectTypeClass::Destru_vt08(void * Block, char a2)
{

  ((ObjectTypeClass *)((int)this))->Destruct(); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    __3_YAXPAX_Z(this); /*0x5f9af0*/
  return (ObjectTypeClass *)this; /*0x5f9afa*/

}
} // namespace gamemd
// 0x5F9B60
namespace gamemd {
int ObjectTypeClass::FreeLoaderBuffer()
{

  __3_YAXPAX_Z(this->vtable1); /*0x5f9b66*/
  this->vtable1 = 0; /*0x5f9b70*/
  ((unsigned int *)this)[0] = 0; /*0x5f9b72*/
  ((unsigned int *)this)[0] = 0; /*0x5f9b75*/
  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x5f9b78*/
  ((unsigned int *)this)[0] = 0; /*0x5f9b7b*/
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
    this->vtable1 = (void *)*aP2; /*0x7179dd*/
    ((unsigned int *)this)[0] = (unsigned int)(void *)aP2[1]; /*0x7179e2*/
    ((unsigned int *)this)[0] = (unsigned int)(void *)aP2[2]; /*0x7179e8*/
    ((unsigned int *)this)[0] = (unsigned int)(void *)aP2[3]; /*0x7179ee*/
    LOWORD(((unsigned int *)this)[0]) = *((unsigned short *)aP2 + 8); /*0x7179f5*/
  }
  *(unsigned int *)aP1 = this->vtable1; /*0x717a01*/
  *(unsigned int *)((char *)aP1 +) = ((unsigned int *)this)[0]; /*0x717a06*/
  *(unsigned int *)(aP1 + 8) = ((unsigned int *)this)[0]; /*0x717a0c*/
  *(unsigned int *)(aP1 + 12) = ((unsigned int *)this)[0]; /*0x717a12*/
  *(unsigned short *)(aP1 + 16) = ((unsigned int *)this)[0]; /*0x717a1a*/
  return (int)(aP1); /*0x717a19*/

}
} // namespace gamemd
// 0x717A30
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{

  this->vtable1 = (void *)a2; /*0x717a34*/
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
  ((unsigned int *)this)[0] = (unsigned int)(void *)result; /*0x717a5d*/
  return result; /*0x717a60*/

}
} // namespace gamemd
// 0x717A70
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A70()
{

  return (int)((unsigned int *)this)[0]; /*0x717a73*/

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
  ((unsigned int *)this)[0] = (unsigned int)(void *)result; /*0x717a8d*/
  return result; /*0x717a90*/

}
} // namespace gamemd
// 0x717AA0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AA0()
{

  return (int)((unsigned int *)this)[0]; /*0x717aa3*/

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
  ((unsigned int *)this)[0] = (unsigned int)(void *)result; /*0x717abd*/
  return result; /*0x717ac0*/

}
} // namespace gamemd
// 0x717AD0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AD0()
{

  return (int)((unsigned int *)this)[0]; /*0x717ad3*/

}
} // namespace gamemd
// 0x717AE0
namespace gamemd {
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{

  return LOBYTE(this->vtable1) == 0; /*0x717ae9*/

}
} // namespace gamemd
// 0x717BF0
namespace gamemd {
unsigned int * ObjectTypeClass::CheckFlag(int aP1)
{

  this->vtable1 = &vt_DynamicVectorClass; /*0x717bf2*/
  return (unsigned int *)this; /*0x717bf8*/

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

  INIClass::ClearSection((INIClass *)((int)this), (int)aTerrain, 0); /*0x71cb9f*/
  result = dword_A8E998; /*0x71cba4*/
  for ( i = 0; i < dword_A8E998; ++i ) /*0x71cbad*/
  {
    v4 = *((unsigned int *)dword_A8E98C + i); /*0x71cbba*/
    if ( v4 && !*(unsigned char *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(unsigned char *)(v4 + 144) ) /*0x71cbcb*/
      {
        v5 = *(unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v4 + 440))( v4, (unsigned char *)(v6)); /*0x71cbe6*/
        sprintf(Buffer, "%d", (int16_t)v5 + 1000 * SHIWORD(v5)); /*0x71cc09*/
        ((INIClass *)this)->SetString( (unsigned __int8 *)((uint8_t *)aTerrain), (char *)(Buffer), (char *)(*(unsigned int *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = dword_A8E998; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/

}
} // namespace gamemd
