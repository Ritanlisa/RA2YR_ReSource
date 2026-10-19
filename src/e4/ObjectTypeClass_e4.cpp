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
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_45DD20(int p0); }  // x4:signals@0x45dd20
namespace gamemd { int sub_45DD50(int p0); }  // x4:signals@0x45dd50
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int ObjectTypeClass_Read(ObjectClass *p_this);  // x4:ida@0x6cee60
} // namespace gamemd

// 0x46C790
namespace gamemd {  // G42.18 ns repair
BulletTypeClass * ObjectTypeClass::FindOrCreate(ObjectClass * Source)
{

  int v2; // esi
  BulletTypeClass *v3; // eax

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x46c7ac*/
    return 0; /*0x46c80f*/
  v2 = 0; /*0x46c7bd*/
  if ( dword_A83C90 <= 0 ) /*0x46c7c1*/
  {
    LABEL_6:
    v3 = (BulletTypeClass *)__2_YAPAXI_Z(0x2F8u); /*0x46c7e6*/
    if ( v3 ) /*0x46c7f5*/
      return BulletTypeClass::Construct(v3, Source); /*0x46c801*/
    return 0; /*0x46c7f5*/
  }
  while ( _strcmpi((char *)(*((unsigned int *)dword_A83C84 + v2) + 36), Source) ) /*0x46c7da*/
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

  if ( !this ) /*0x473987*/
    return -1; /*0x4739bd*/
  int v2 = 0; // edi /*0x473989*/
  char **v3; // esi
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

  char Destination[32]; // [esp+8h] [ebp-20h] BYREF
  if ( ((INIClass *)this)->GetString(aP1, a2, &g_INI_DefaultBuffer, Destination, 32) <= 0 ) /*0x474962*/
    return a4; /*0x4749a4*/
  int v4 = 0; // edi /*0x474964*/
  char **v5; // esi
  v5 = (char **)(&off_81B9B0); /*0x474966*/
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

  if ( a4 == -1 ) /*0x474f5a*/
  {
    char v6; // [esp+0h] [ebp-3Ch] BYREF
    v6 = 0; /*0x474f6a*/
    v4 = &v6; /*0x474f6f*/
  }
  else
  {
    v4 = (char *)(*((unsigned int *)dword_A8E334 + a4) + 36); /*0x474f65*/
  }
  char Destination[32]; // [esp+1Ch] [ebp-20h] BYREF
  INIClass::GetString(a2, a3, v4, Destination, 32); /*0x474f85*/
  return ObjectTypeClass_Read((ObjectClass *)Destination); /*0x474f93*/
}
} // namespace gamemd
// 0x5F7090
namespace gamemd {
int ObjectTypeClass::ConstructFull(char *aP1)
{

  char Destination[24]; // [esp+8h] [ebp-1Ch] BYREF
  char v10; // [esp+20h] [ebp-4h]

  AbstractTypeClass::Constructor(this, aP1); /*0x5f709c*/
  int *v3 = &this->TurretVoxel; // eax /*0x5f70a3*/
  this->u32_98 = 0; /*0x5f70a9*/
  this->__pad_099 = 0; /*0x5f70af*/
  this->u32_9A = 0; /*0x5f70b5*/
  this->u8_27 = 0; /*0x5f70bb*/
  this->ChargerTurrets_0x12 = 0; /*0x5f70c1*/
  this->q029 = 0; /*0x5f70c7*/
  this->ImageAllocated = 0; /*0x5f70cd*/
  this->q02B = 0; /*0x5f70d3*/
  this->ChargerBarrels_0x12 = 0; /*0x5f70d9*/
  this->u32_2D = 0; /*0x5f70df*/
  this->u32_2E = 0; /*0x5f70e5*/
  this->u32_2F = 0; /*0x5f70eb*/
  this->NoSpawnAlt = 0; /*0x5f70f1*/
  this->u32_31 = 0; /*0x5f70f7*/
  int v4 = 18; // ecx /*0x5f70fd*/
  do /*0x5f710b*/
  {
    *v3 = 0; /*0x5f7102*/
    v3->u32_4 = 0; /*0x5f7104*/
    v3 += 2; /*0x5f7107*/
    --v4; /*0x5f710a*/
  }
  while ( v4 ); /*0x5f710b*/
  int *v5 = &this->q056; // eax /*0x5f710d*/
  int v6 = 18; // ecx /*0x5f7113*/
  do /*0x5f7121*/
  {
    *v5 = 0; /*0x5f7118*/
    v5[1] = 0; /*0x5f711a*/
    v5 += 2; /*0x5f711d*/
    --v6; /*0x5f7120*/
  }
  while ( v6 ); /*0x5f7121*/
  this->NoSpawnAlt_2 = 0; /*0x5f712e*/
  this->u8_7B = 0; /*0x5f7134*/
  this->q07C = (gamemd::VectorClass *)(-1); /*0x5f713a*/
  this->u8_7D = -1; /*0x5f7140*/
  this->ImageFile_0x19 = 0; /*0x5f7146*/
  this->AlternateArcticArt_d = 0; /*0x5f7148*/
  this->ArcticArtInUse_d = 0; /*0x5f714e*/
  this->AlphaImageFile = 0; /*0x5f7156*/
  this->Bombable_d = 1; /*0x5f715c*/
  this->Selectable_d = 1; /*0x5f7162*/
  this->LegalTarget_d = 1; /*0x5f7168*/
  this->AllowCellContent_d = 1; /*0x5f716e*/
  this->Theater_d = 0; /*0x5f7176*/
  this->Crushable_d = 0; /*0x5f717c*/
  this->RadarInvisible_d = 0; /*0x5f7182*/
  this->Insignificant_d = 0; /*0x5f7188*/
  this->Immune_d = 0; /*0x5f718e*/
  this->IsLogic_d = 0; /*0x5f7194*/
  this->Voxel_d = 0; /*0x5f719a*/
  this->NewTheater_d = 0; /*0x5f71a0*/
  this->HasRadialIndicator_d = 0; /*0x5f71a6*/
  this->IgnoresFirestorm_d = 0; /*0x5f71ac*/
  this->UseLineTrail_d = 0; /*0x5f71b2*/
  this->LineTrailColor_d = 0x80; /*0x5f71b8*/
  this->u32_23C = 0x80; /*0x5f71be*/
  this->u32_23D = 0x80; /*0x5f71c4*/
  this->u32_90 = 16; /*0x5f71ca*/
  this->u8_91 = 0; /*0x5f71d4*/
  this->u32_92 = 0; /*0x5f71da*/
  this->u32_93 = 0; /*0x5f71e0*/
  this->u32_250 = 0; /*0x5f71e6*/
  this->tail_95 = 0; /*0x5f71ec*/
  this->u32_96 = 0; /*0x5f71f2*/
  this->u32_97 = 0; /*0x5f71f8*/
  this->u32_98 = 0; /*0x5f71fe*/
  this->q264 = 0; /*0x5f7204*/
  this->u32_9A = 0; /*0x5f720a*/
  this->unused_9B = 0; /*0x5f7213*/
  this->Armor = 0; /*0x5f7219*/
  this->u32_9D = 0; /*0x5f721f*/
  this->u32_278 = 0; /*0x5f7225*/
  this->u32_9F = 0; /*0x5f722b*/
  this->Strength_d = 0; /*0x5f7231*/
  this->u32_A1 = 0; /*0x5f7237*/
  this->u32_A2 = 0; /*0x5f723d*/
  this->u32_28C = 0; /*0x5f7243*/
  this->Image_d = 0; /*0x5f7249*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EF2AC) */  /*0x5f7251*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF2AC) */  /*0x5f7258*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF2AC) */  /*0x5f725f*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF2AC) */  /*0x5f7266*/
  if ( &this->u8_9 != &this->u8_7E ) /*0x5f726d*/
    memcpy(&this->u8_7E, &this->u8_9, 0x19u); /*0x5f7274*/
  if ( &g_INI_DefaultBuffer ) /*0x5f727e*/
  {
    strncpy(Destination, &g_INI_DefaultBuffer, 0x18u); /*0x5f7292*/
    v10 = 0; /*0x5f729a*/
  }
  else
  {
    Destination[0] = 0; /*0x5f7280*/
  }
  if ( Destination != &this->AlphaImageFile ) /*0x5f72aa*/
  {
    memcpy(&this->AlphaImageFile, Destination, 0x18u); /*0x5f72b5*/
    this->u32_22B = v10; /*0x5f72b7*/
  }
  if ( dword_AC1428 < dword_AC1420 /*0x5f72ee*/
    || (byte_AC1425 || !dword_AC1420)
    && dword_AC142C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_AC1418 + 8))(
         &dword_AC1418,
         dword_AC142C + dword_AC1420,
         0) )
  {
    int v7; // eax
    v7 = dword_AC1428++; /*0x5f72fb*/
    *((unsigned int *)dword_AC141C + v7) = (unsigned int)(this); /*0x5f730a*/
  }
  return (int)this; /*0x5f730f*/

}
} // namespace gamemd
// 0x5F7320
namespace gamemd {
BulletTypeClass * ObjectTypeClass::Construct(int aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{

  int *v3; // eax
  int v4; // edx
  char *v5; // eax
  int v6; // edx

  AbstractTypeClass::Init((int)this, a2); /*0x5f7328*/
  v3 = &this->ChargerTurrets[3]; /*0x5f732f*/
  this->Image_d = 0; /*0x5f7335*/
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
  this->VoxelCaches[0] = 0; /*0x5f7361*/
  this->VoxelCaches[1] = 0; /*0x5f7367*/
  this->VoxelCaches[2] = 0; /*0x5f736d*/
  LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f7373*/
  this->VoxelCaches[4] = 0; /*0x5f7379*/
  this->VoxelCaches[5] = 0; /*0x5f737f*/
  this->VoxelCaches[6] = 0; /*0x5f7385*/
  this->VoxelCaches[7] = 0; /*0x5f738b*/
  LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f7391*/
  this->VoxelCaches[9] = 0; /*0x5f7397*/
  this->VoxelCaches[10] = 0; /*0x5f739d*/
  this->VoxelCaches[11] = 0; /*0x5f73a3*/
  this->VoxelCaches[12] = 0; /*0x5f73a9*/
  LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f73af*/
  this->VoxelCaches[14] = 0; /*0x5f73b5*/
  this->VoxelCaches[15] = 0; /*0x5f73bb*/
  this->VoxelCaches[16] = 0; /*0x5f73c1*/
  this->VoxelCaches[17] = 0; /*0x5f73c7*/
  LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f73cd*/
  this->VoxelCaches[19] = 0; /*0x5f73d3*/
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_8780a4) */  /*0x5f73d9*/
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_8780a4) */  /*0x5f73df*/
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_8780a4) */  /*0x5f73e6*/
  /* X11: ptr_0 install elided (legacy slot spelling slot, RHS g_var_8780a4) */  /*0x5f73ed*/
  return &this->ptr_0; /*0x5f73f6*/

}
} // namespace gamemd
// 0x5F7400
namespace gamemd {
SomeVoxelCache * * ObjectTypeClass::Destruct(void *a1)
{


  /* X11: ptr_0 install elided (implicit via ObjectTypeClass virtuals 0x5f740b) */
  /* X11: ptr_0 install elided (implicit via ObjectTypeClass virtuals 0x5f7411) */
  /* X11: ptr_0 install elided (implicit via ObjectTypeClass virtuals 0x5f7418) */
  /* X11: ptr_0 install elided (implicit via ObjectTypeClass virtuals 0x5f741f) */
  int v8; // [esp+Ch] [ebp-4h] BYREF
  v8 = this; /*0x5f7431*/
  int v2; // eax
  v2 = (*(int (**)(int *, int *))(dword_AC1418 + 16))(&dword_AC1418, &v8); /*0x5f7435*/
  if ( v2 != -1 && v2 < dword_AC1428 && v2 < --dword_AC1428 ) /*0x5f7450*/
  {
    do /*0x5f7468*/
    {
      ++v2; /*0x5f7458*/
      *((unsigned int *)dword_AC141C + v2 - 1) = *((unsigned int *)dword_AC141C + v2); /*0x5f745c*/
    }
    while ( v2 < dword_AC1428 ); /*0x5f7468*/
  }
  if ( this->ImageAllocated && this->Image_d ) /*0x5f7476*/
  {
    __3_YAXPAX_Z(*&this->Image_d); /*0x5f7481*/
    this->Image_d = 0; /*0x5f7489*/
    this->ImageAllocated = 0; /*0x5f748f*/
  }
  ((char *)this)->CleanupWeapons(); /*0x5f7497*/
  __3_YAXPAX_Z(*&this->q280); /*0x5f74a3*/
  this->q280 = 0; /*0x5f74a8*/
  this->u32_284 = 0; /*0x5f74ae*/
  this->u32_288 = 0; /*0x5f74b4*/
  this->u32_28C = 0; /*0x5f74ba*/
  this->q290 = 0; /*0x5f74c0*/
  __3_YAXPAX_Z(*&this->q26C); /*0x5f74cd*/
  this->q26C = 0; /*0x5f74d2*/
  this->q270 = 0; /*0x5f74d8*/
  this->u32_274 = 0; /*0x5f74de*/
  this->u32_278 = 0; /*0x5f74e4*/
  this->u32_27C = 0; /*0x5f74ea*/
  __3_YAXPAX_Z(*&this->u32_258); /*0x5f74f7*/
  this->u32_258 = 0; /*0x5f74fc*/
  this->u32_25C = 0; /*0x5f7502*/
  this->u32_260 = 0; /*0x5f7508*/
  this->q264 = 0; /*0x5f750e*/
  this->u32_268 = 0; /*0x5f7514*/
  __3_YAXPAX_Z(*&this->VoxelCaches_4); /*0x5f7521*/
  this->VoxelCaches_4 = 0; /*0x5f7526*/
  this->u32_248 = 0; /*0x5f752c*/
  this->u32_24C = 0; /*0x5f7532*/
  this->u32_250 = 0; /*0x5f7538*/
  this->q254 = 0; /*0x5f753e*/
  ObjectTypeClass *v3 = &this->NoSpawnAlt_2; // edi /*0x5f7547*/
  int v4 = 18; // ebx /*0x5f754d*/
  do /*0x5f755d*/
  {
    v3 = (ObjectTypeClass *)((char *)v3 - 8); /*0x5f7552*/
    ObjectTypeClass::ReleaseWaveAndString(v3); /*0x5f7557*/
    --v4; /*0x5f755c*/
  }
  while ( v4 ); /*0x5f755d*/
  ObjectTypeClass *v5 = &this->u32_158; // edi /*0x5f755f*/
  int v6 = 18; // ebx /*0x5f7565*/
  do /*0x5f7575*/
  {
    v5 = (ObjectTypeClass *)((char *)v5 - 8); /*0x5f756a*/
    ObjectTypeClass::ReleaseWaveAndString(v5); /*0x5f756f*/
    --v6; /*0x5f7574*/
  }
  while ( v6 ); /*0x5f7575*/
  ObjectTypeClass::ReleaseWaveAndString(&this->u32_C0); /*0x5f757d*/
  ObjectTypeClass::ReleaseWaveAndString(&this->BarrelVoxel_d); /*0x5f7588*/
  ObjectTypeClass::ReleaseWaveAndString(&this->MainVoxel); /*0x5f7593*/
  return ((AbstractTypeClass *)this)->Dtor(); /*0x5f759f*/

}
} // namespace gamemd
// 0x5F77F0
namespace gamemd {
void ObjectTypeClass::UnloadPipsSHP()
{

  if ( byte_AC1488 ) /*0x5f77fd*/
  {
    if ( FileSystem_PIPBRD_SHP ) /*0x5f7807*/
    {
      int v1; // eax
      v1 = *(unsigned int *)(FileSystem_PIPBRD_SHP - 4); /*0x5f7809*/
      void *v2; // ebp
      v2 = (void *)(FileSystem_PIPBRD_SHP - 4); /*0x5f780c*/
      int v3 = 9 * v1; // edx /*0x5f780f*/
      int v4 = v1 - 1; // eax /*0x5f7812*/
      FileTreeNode *v5; // esi
      v5 = (FileTreeNode *)(FileSystem_PIPBRD_SHP + 4 * v3); /*0x5f7813*/
      if ( v4 >= 0 ) /*0x5f7816*/
      {
        int v6 = v4 + 1; // edi /*0x5f7818*/
        do /*0x5f7826*/
        {
          v5 -= 9; /*0x5f781b*/
          (v5)->Destroy(); /*0x5f7820*/
          --v6; /*0x5f7825*/
        }
        while ( v6 ); /*0x5f7826*/
      }
      operator delete((v2)); /*0x5f7829*/
    }
    byte_AC1488 = 0; /*0x5f7831*/
  }
  if ( byte_AC1489 ) /*0x5f783d*/
  {
    if ( FileSystem_PIPS_SHP ) /*0x5f7847*/
    {
      int v7; // eax
      v7 = *(unsigned int *)(FileSystem_PIPS_SHP - 4); /*0x5f7849*/
      void *v8; // ebp
      v8 = (void *)(FileSystem_PIPS_SHP - 4); /*0x5f784c*/
      int v9 = 9 * v7; // edx /*0x5f784f*/
      int v10 = v7 - 1; // eax /*0x5f7852*/
      FileTreeNode *v11; // esi
      v11 = (FileTreeNode *)(FileSystem_PIPS_SHP + 4 * v9); /*0x5f7853*/
      if ( v10 >= 0 ) /*0x5f7856*/
      {
        int v12 = v10 + 1; // edi /*0x5f7858*/
        do /*0x5f7866*/
        {
          v11 -= 9; /*0x5f785b*/
          (v11)->Destroy(); /*0x5f7860*/
          --v12; /*0x5f7865*/
        }
        while ( v12 ); /*0x5f7866*/
      }
      operator delete((v8)); /*0x5f7869*/
    }
    byte_AC1489 = 0; /*0x5f7871*/
  }
  if ( byte_AC148A ) /*0x5f787d*/
  {
    if ( FileSystem_PIPS2_SHP ) /*0x5f7887*/
    {
      int v13; // eax
      v13 = *(unsigned int *)(FileSystem_PIPS2_SHP - 4); /*0x5f7889*/
      void *v14; // ebp
      v14 = (void *)(FileSystem_PIPS2_SHP - 4); /*0x5f788c*/
      int v15 = 9 * v13; // edx /*0x5f788f*/
      int v16 = v13 - 1; // eax /*0x5f7892*/
      FileTreeNode *v17; // esi
      v17 = (FileTreeNode *)(FileSystem_PIPS2_SHP + 4 * v15); /*0x5f7893*/
      if ( v16 >= 0 ) /*0x5f7896*/
      {
        int v18 = v16 + 1; // edi /*0x5f7898*/
        do /*0x5f78a6*/
        {
          v17 -= 9; /*0x5f789b*/
          (v17)->Destroy(); /*0x5f78a0*/
          --v18; /*0x5f78a5*/
        }
        while ( v18 ); /*0x5f78a6*/
      }
      operator delete((v14)); /*0x5f78a9*/
    }
    byte_AC148A = 0; /*0x5f78b1*/
  }
  if ( byte_AC148B ) /*0x5f78bd*/
  {
    if ( FileSystem_TALKBUBL_SHP ) /*0x5f78c7*/
    {
      int v19; // eax
      v19 = *(unsigned int *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78c9*/
      void *v20; // ebp
      v20 = (void *)(FileSystem_TALKBUBL_SHP - 4); /*0x5f78cc*/
      int v21 = 9 * v19; // edx /*0x5f78cf*/
      int v22 = v19 - 1; // eax /*0x5f78d2*/
      FileTreeNode *v23; // esi
      v23 = (FileTreeNode *)(FileSystem_TALKBUBL_SHP + 4 * v21); /*0x5f78d3*/
      if ( v22 >= 0 ) /*0x5f78d6*/
      {
        int v24 = v22 + 1; // edi /*0x5f78d8*/
        do /*0x5f78e6*/
        {
          v23 -= 9; /*0x5f78db*/
          (v23)->Destroy(); /*0x5f78e0*/
          --v24; /*0x5f78e5*/
        }
        while ( v24 ); /*0x5f78e6*/
      }
      operator delete((v20)); /*0x5f78e9*/
    }
    byte_AC148B = 0; /*0x5f78f1*/
  }
}
} // namespace gamemd
// 0x5F9070
namespace gamemd {
AbstractClass * * ObjectTypeClass::Load2DArt(void *a1)
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

  if ( this->AlternateArcticArt_d && dword_A8B230[130].uniqueId == 1 && !*(&this->uniqueId8) ) /*0x5f9096*/
  {
    if ( !this->ArcticArtInUse_d ) /*0x5f90a0*/
    {
      v2 = &this->ImageFile_0x19; /*0x5f90ab*/
      sprintf(Buffer, off_832AE8, &this->TurretVoxel4); /*0x5f90bf*/
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
        memcpy(v2, Destination, 0x18u); /*0x5f9105*/
        this->u32_840 = v13; /*0x5f9107*/
      }
      this->ArcticArtInUse_d = 1; /*0x5f9108*/
    }
  }
  else
  {
    this->ArcticArtInUse_d = 0; /*0x5f9112*/
  }
  _makepath(&Source, 0, 0, &this->ImageFile_0x19, Ext); /*0x5f912e*/
  if ( this->Theater_d ) /*0x5f9133*/
  {
    _makepath(&Source, 0, 0, &this->ImageFile_0x19, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5f9169*/
  }
  else if ( this->NewTheater_d ) /*0x5f9173*/
  {
    v3 = dword_A8B230[130].uniqueId; /*0x5f9183*/
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
  if ( *(&this->uniqueId8) && this->Image_d ) /*0x5f91eb*/
    operator delete((*((void **)&this->uniqueId1))); /*0x5f91f6*/
  v6 = *(unsigned int *)this; /*0x5f91fe*/
  this->Image_d = 0; /*0x5f9203*/
  *(&this->uniqueId8) = 0; /*0x5f920d*/
  if ( (*(int (**)(char *))(v6 + 44))(this) == 21 /*0x5f9227*/
    || (*(int (**)(char *))(*(unsigned int *)&this->uniqueId4))(this) == 5 )
  {
    v9 = SearchMIXFile(&Source, 1); /*0x5f9267*/
    this->Image_d = v9; /*0x5f926e*/
    if ( v9 ) /*0x5f9274*/
      goto LABEL_41; /*0x5f9274*/
    v15 = 71; /*0x5f9276*/
    v8 = 1; /*0x5f927b*/
    goto LABEL_40; /*0x5f927b*/
  }
  if ( (*(int (**)(char *))(*(unsigned int *)&this->uniqueId4))(this) != 30 /*0x5f9241*/
    && (*(int (**)(char *))(*(unsigned int *)&this->uniqueId4))(this) != 37 )
  {
    v7 = SearchMIXFile(&Source, 0); /*0x5f9249*/
    this->Image_d = v7; /*0x5f9250*/
    if ( !v7 ) /*0x5f9256*/
    {
      v15 = 71; /*0x5f9258*/
      v8 = 0; /*0x5f925d*/
      LABEL_40:
      this->Image_d = SearchMIXFile(&Source, v8); /*0x5f927d*/
    }
  }
  LABEL_41:
  result = this->Image_d; /*0x5f928c*/
  if ( result ) /*0x5f9294*/
  {
    v11 = result->ptr_8; /*0x5f9296*/
    (*((unsigned short *)&(result))) = result->ptr_4; /*0x5f929a*/
    if ( v11 <= (int16_t)result ) /*0x5f92a1*/
      result = (int16_t)result; /*0x5f92a8*/
    else
      result = v11; /*0x5f92a3*/
    if ( result <= 8 ) /*0x5f92ae*/
      result = 8; /*0x5f92b0*/
    this->MaxDimension = result; /*0x5f92b5*/
  }
  return result; /*0x5f92bb*/
}
} // namespace gamemd
// 0x5F92D0
namespace gamemd {
void* ObjectTypeClass::LoadFromINI(uint8_t ***aP1, void *a2)
{

  VocClass Destination; // [esp+28h] [ebp-184h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x5f92e3*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)this, aP1) ) /*0x5f92eb*/
    return 0; /*0x5f969e*/
  char Source[28]; // [esp+Ch] [ebp-1A0h] BYREF
  strcpy(Source, this->ImageFile); /*0x5f931c*/
  INIClass::GetString( /*0x5f933b*/
    (INIClass *)aP1,
    (unsigned __int8 *)this->?,
    (unsigned __int8 *)g_INI_Key_Image,
    Source,
    this->ImageFile,
    25);
  int v34; // [esp+8h] [ebp-1A4h] BYREF
  v34 = (int)strcpy(Source, this->AlphaImageFile); /*0x5f9366*/
  ((INIClass *)aP1)->GetString((unsigned __int8 *)this->ptr_4, aAlphaimage, Source, this->AlphaImageFile, 25); /*0x5f9386*/
  int CrushSound; // edi
  CrushSound = this->CrushSound; /*0x5f938b*/
  if ( INIClass::GetString( /*0x5f93a8*/
         (INIClass *)aP1,
         (unsigned __int8 *)this->?,
         aCrushsound,
         &g_INI_DefaultBuffer,
         (char *)&Destination,
         128) )
  {
    int Index; // eax
    Index = VocClass::FindIndex(&Destination); /*0x5f93b5*/
    if ( Index != -1 ) /*0x5f93bd*/
      CrushSound = Index; /*0x5f93bf*/
  }
  this->CrushSound = CrushSound; /*0x5f93d5*/
  int AmbientSound; // edi
  AmbientSound = this->AmbientSound; /*0x5f93db*/
  int v6; // eax
  if ( !INIClass::GetString( /*0x5f93f9*/
          (INIClass *)aP1,
          (unsigned __int8 *)this->?,
          aAmbientsound,
          &g_INI_DefaultBuffer,
          (char *)&Destination,
          128)
    || (v6 = VocClass::FindIndex(&Destination), v6 == -1) )
  {
    v6 = AmbientSound; /*0x5f93fb*/
  }
  char Crushable; // cl
  Crushable = this->Crushable; /*0x5f93fd*/
  this->AmbientSound = v6; /*0x5f9403*/
  char Bool_Overwrite; // al
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aCrushable, Crushable); /*0x5f9412*/
  char Bombable; // [esp-Ch] [ebp-1B8h]
  Bombable = this->Bombable; /*0x5f941f*/
  this->Crushable = Bool_Overwrite; /*0x5f9426*/
  this->Bombable = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->Bombable_d, aBombable, Bombable); /*0x5f9431*/
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aNospawnalt, this->NoSpawnAlt_2); /*0x5f9446*/
  char AlternateArcticArt; // cl
  AlternateArcticArt = this->AlternateArcticArt; /*0x5f944b*/
  this->NoSpawnAlt_2 = v9; /*0x5f9451*/
  char v11; // al
  v11 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aAlternatearcti, AlternateArcticArt); /*0x5f9460*/
  char RadarInvisible; // [esp-Ch] [ebp-1B8h]
  RadarInvisible = this->RadarInvisible; /*0x5f946d*/
  this->AlternateArcticArt = v11; /*0x5f9474*/
  this->RadarInvisible = INIClass::ReadBool_Overwrite( /*0x5f947f*/
                           (int *)aP1,
                           (unsigned __int8 *)this->?,
                           aRadarinvisible,
                           RadarInvisible);
  char v12; // al
  v12 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aSelectable, this->Selectable); /*0x5f9494*/
  char LegalTarget; // cl
  LegalTarget = this->LegalTarget; /*0x5f9499*/
  this->Selectable = v12; /*0x5f949f*/
  char v14; // al
  v14 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aLegaltarget, LegalTarget); /*0x5f94ae*/
  int v29; // [esp-Ch] [ebp-1B8h]
  v29 = this->Armor[0]; /*0x5f94bb*/
  this->LegalTarget = v14; /*0x5f94c2*/
  this->Armor[0] = ((ArmorType *)aP1)->FindIndex((unsigned __int8 *)this->Armor, g_INI_Key_Armor, v29); /*0x5f94cd*/
  int Int_Overwrite; // eax
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)aP1, (unsigned __int8 *)this->ptr_4, aStrength, this->Strength); /*0x5f94e2*/
  char Immune; // cl
  Immune = this->Immune; /*0x5f94e7*/
  this->Strength = Int_Overwrite; /*0x5f94ed*/
  char v17; // al
  v17 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aImmune, Immune); /*0x5f94fc*/
  char Insignificant; // [esp-Ch] [ebp-1B8h]
  Insignificant = this->Insignificant; /*0x5f9509*/
  this->Immune = v17; /*0x5f9510*/
  this->Insignificant = INIClass::ReadBool_Overwrite( /*0x5f951b*/
                          (int *)aP1,
                          (unsigned __int8 *)this->?,
                          aInsignificant,
                          Insignificant);
  this->HasRadialIndicator = INIClass::ReadBool_Overwrite( /*0x5f9549*/
                               (int *)aP1,
                               (unsigned __int8 *)this->?,
                               aHasradialindic,
                               this->HasRadialIndicator);
  int Coord; // eax
  Coord = INIClass::GetCoord( /*0x5f954f*/
            (INIClass *)aP1,
            (int)&v34,
            (unsigned __int8 *)this->?,
            aRadialcolor,
            (unsigned __int8 *)this->u32_98);
  char IgnoresFirestorm; // cl
  IgnoresFirestorm = this->IgnoresFirestorm; /*0x5f9557*/
  *(unsigned short *)this->u32_98 = *(unsigned short *)Coord; /*0x5f955d*/
  this->u32_9A = *(unsigned char *)(Coord + 2); /*0x5f956c*/
  char v20; // al
  v20 = INIClass::ReadBool_Overwrite((int *)aP1, (unsigned __int8 *)this->ptr_4, aIgnoresfiresto, IgnoresFirestorm); /*0x5f956f*/
  char UseLineTrail; // [esp-Ch] [ebp-1B8h]
  UseLineTrail = this->UseLineTrail; /*0x5f9580*/
  this->IgnoresFirestorm = v20; /*0x5f958c*/
  this->UseLineTrail = INIClass::ReadBool_Overwrite( /*0x5f959d*/
                         (int *)&DataGlobal_887180,
                         (unsigned __int8 *)this->ImageFile,
                         aUselinetrail,
                         UseLineTrail);
  int v21; // eax
  v21 = INIClass::GetCoord( /*0x5f95b4*/
          (INIClass *)&DataGlobal_887180,
          (int)&v34,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor,
          (unsigned __int8 *)this->LineTrailColor);
  *(unsigned short *)this->LineTrailColor = *(unsigned short *)v21; /*0x5f95bc*/
  int LineTrailColorDecrement; // [esp-Ch] [ebp-1B8h]
  LineTrailColorDecrement = this->LineTrailColorDecrement; /*0x5f95cd*/
  this->LineTrailColor[2] = v21->UINameLabel[0x20]; /*0x5f95d4*/
  int v22; // eax
  v22 = INIClass::ReadInt_Overwrite( /*0x5f95d7*/
          (bool *)&DataGlobal_887180,
          (unsigned __int8 *)this->ImageFile,
          aLinetrailcolor_0,
          LineTrailColorDecrement);
  char Theater; // cl
  Theater = this->Theater; /*0x5f95dc*/
  this->LineTrailColorDecrement = v22; /*0x5f95e2*/
  char v24; // al
  v24 = INIClass::ReadBool_Overwrite( /*0x5f95f4*/
          (int *)&DataGlobal_887180,
          (unsigned __int8 *)this->ImageFile,
          (unsigned __int8 *)g_INI_Key_Theater,
          Theater);
  char NewTheater; // [esp-Ch] [ebp-1B8h]
  NewTheater = this->NewTheater; /*0x5f9604*/
  this->Theater = v24; /*0x5f960b*/
  this->NewTheater = INIClass::ReadBool_Overwrite( /*0x5f9616*/
                       (int *)&DataGlobal_887180,
                       (unsigned __int8 *)this->ImageFile,
                       aNewtheater,
                       NewTheater);
  char v25; // al
  v25 = INIClass::ReadBool_Overwrite( /*0x5f962e*/
          (int *)&DataGlobal_887180,
          (unsigned __int8 *)this->ImageFile,
          aVoxel,
          this->Voxel);
  this->Voxel = v25; /*0x5f9634*/
  if ( !v25 && (*((int (**)(ObjectTypeClass *))this->AbstractTypeClass + 11))(this) != 5 ) /*0x5f9649*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x5f964d*/
  if ( this->AlphaImageFile[0] ) /*0x5f9652*/
  {
    _makepath((char *)&Destination.Name[5], 0, 0, this->AlphaImageFile, Ext); /*0x5f9674*/
    this->AlphaImage = (SHPStruct *)SearchMIXFile((char *)&Destination.Name[5], 0); /*0x5f968a*/
  }
  return 1; /*0x5f9690*/

}
} // namespace gamemd
// 0x5F9710
namespace gamemd {
int ObjectTypeClass::SetRTTI71(void *a1)
{


  BYTE1(this->AbstractTypeClass) = 71; /*0x5f9710*/
  int result; // eax
  return result; /*0x5f9714*/

}
} // namespace gamemd
// 0x5F9720
namespace gamemd {
int ObjectTypeClass::LoadCleanup(ObjectTypeClass *aP0, int aP1)
{

  operator delete((void *)((void *)aP0->VoxelCaches[0])); /*0x5f973e*/
  aP0->VoxelCaches[0] = 0; /*0x5f974e*/
  aP0->VoxelCaches[1] = 0; /*0x5f9750*/
  aP0->VoxelCaches[2] = 0; /*0x5f9753*/
  (aP0->ptr_4) = 0; /*0x5f9756*/
  aP0->VoxelCaches[4] = 0; /*0x5f9759*/
  ObjectTypeClass::FreeLoaderBuffer(&aP0->ptr_4); /*0x5f975c*/
  ObjectTypeClass::FreeLoaderBuffer(&aP0->ptr_4); /*0x5f9767*/
  ObjectTypeClass::FreeLoaderBuffer(&aP0->ptr_4); /*0x5f9772*/
  void *v2; // ebp
  v2 = (void *)aP0->MainVoxel[0]; /*0x5f9777*/
  if ( v2 ) /*0x5f977f*/
  {
    WaveClass::Destroy((WaveClass *)aP0->MainVoxel[0]); /*0x5f9783*/
    operator delete((v2)); /*0x5f9789*/
  }
  String *v3; // ebp
  v3 = (String *)aP0->TurretVoxel[0]; /*0x5f9791*/
  aP0->MainVoxel[0] = 0; /*0x5f9797*/
  if ( v3 ) /*0x5f979f*/
  {
    ((String *)(v3))->Release(); /*0x5f97a3*/
    operator delete((v3)); /*0x5f97a9*/
  }
  WaveClass *v4; // ebp
  v4 = (WaveClass *)aP0->BarrelVoxel[0]; /*0x5f97b1*/
  aP0->TurretVoxel[0] = 0; /*0x5f97b7*/
  if ( v4 ) /*0x5f97bf*/
  {
    WaveClass::Destroy(v4); /*0x5f97c3*/
    operator delete((v4)); /*0x5f97c9*/
  }
  String *v5; // ebp
  v5 = (String *)aP0->ChargerTurrets[0]; /*0x5f97d1*/
  aP0->BarrelVoxel[0] = 0; /*0x5f97d7*/
  if ( v5 ) /*0x5f97df*/
  {
    ((String *)(v5))->Release(); /*0x5f97e3*/
    operator delete((v5)); /*0x5f97e9*/
  }
  WaveClass *v6; // ebp
  v6 = (WaveClass *)aP0->ChargerTurrets[1]; /*0x5f97f1*/
  aP0->ChargerTurrets[0] = 0; /*0x5f97f7*/
  if ( v6 ) /*0x5f97ff*/
  {
    WaveClass::Destroy(v6); /*0x5f9803*/
    operator delete((v6)); /*0x5f9809*/
  }
  String *v7; // ebp
  v7 = (String *)aP0->ChargerTurrets[2]; /*0x5f9811*/
  aP0->ChargerTurrets[1] = 0; /*0x5f9817*/
  if ( v7 ) /*0x5f981f*/
  {
    ((String *)(v7))->Release(); /*0x5f9823*/
    operator delete((v7)); /*0x5f9829*/
  }
  aP0->ChargerTurrets[2] = 0; /*0x5f9833*/
  ((ObjectTypeClass *)((char *)aP0))->CleanupWeapons(); /*0x5f9839*/
  int result; // eax
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
      (aP0->ptr_4) = 0; /*0x5f9872*/
      aP0->VoxelCaches[4] = 0; /*0x5f9875*/
    }
    if ( aP0 != (ObjectTypeClass *)-600 ) /*0x5f9880*/
    {
      aP0->VoxelCaches[5] = 0; /*0x5f9882*/
      aP0->VoxelCaches[6] = 0; /*0x5f9884*/
      aP0->VoxelCaches[7] = 0; /*0x5f9887*/
      (aP0->ptr_4) = 0; /*0x5f988a*/
      aP0->VoxelCaches[9] = 0; /*0x5f988d*/
    }
    if ( aP0 != (ObjectTypeClass *)-620 ) /*0x5f9898*/
    {
      aP0->VoxelCaches[10] = 0; /*0x5f989a*/
      aP0->VoxelCaches[11] = 0; /*0x5f989c*/
      aP0->VoxelCaches[12] = 0; /*0x5f989f*/
      (aP0->ptr_4) = 0; /*0x5f98a2*/
      aP0->VoxelCaches[14] = 0; /*0x5f98a5*/
    }
    if ( aP0 != (ObjectTypeClass *)-640 ) /*0x5f98b0*/
    {
      aP0->VoxelCaches[15] = 0; /*0x5f98b2*/
      aP0->VoxelCaches[16] = 0; /*0x5f98b4*/
      aP0->VoxelCaches[17] = 0; /*0x5f98b7*/
      (aP0->ptr_4) = 0; /*0x5f98ba*/
      aP0->VoxelCaches[19] = 0; /*0x5f98bd*/
    }
    aP0->MainVoxel[0] = 0; /*0x5f98c0*/
    aP0->TurretVoxel[0] = 0; /*0x5f98c6*/
    aP0->BarrelVoxel[0] = 0; /*0x5f98cc*/
    aP0->ChargerTurrets[0] = 0; /*0x5f98d2*/
    aP0->ChargerTurrets[1] = 0; /*0x5f98d8*/
    aP0->ChargerTurrets[2] = 0; /*0x5f98de*/
    int *v9; // eax
    v9 = &aP0->ChargerTurrets[4]; /*0x5f98e4*/
    int v10 = 18; // ecx /*0x5f98ea*/
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
      char Buffer[260]; // [esp+10h] [ebp-104h] BYREF
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

  int result; // eax

  Object *v1 = dword_A83D4C; // eax /*0x712040*/
  if ( !dword_A83D4C ) /*0x71204a*/
    return *&this->u32_6F0; /*0x7120bf*/
  if ( dword_A83D4C[1].__pad_C[19] ) /*0x71204c*/
  {
    if ( (*(int (**)(TechnoTypeClass *))(this->ObjectTypeClass[0] + 44))(this) == 16 ) /*0x712060*/
    {
      result = *&this->q710; /*0x712062*/
      if ( result ) /*0x71206a*/
      {
        if ( this->u8_C8E ) /*0x71206c*/
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
    return *&this->q408; /*0x7120a1*/
  }
  result = *&this->q710; /*0x7120ab*/
  if ( !result || !this->u8_C8E ) /*0x7120b5*/
    return *&this->ptr_4; /*0x7120bd*/
  return result; /*0x7120c5*/

}
} // namespace gamemd
// 0x712170
namespace gamemd {
int ObjectTypeClass::LoadExtras(CCINIClass * aP0, void * _38C, unsigned char *** a2)  // G57w11: def 同步 hpp（st0 伪影，raw 调用侧传 ini 指针）
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
  // w15f4: v3-export truncated tail (RHS lost): uint8_t *v55;... ...
  // live body via get_context/0x712170 — w15f4 regrafted decls only
  int v31; // edx
  char v33; // al
  int v55; // eax
  unsigned char *v56; // eax
  int v57; // eax
  unsigned char *v58; // eax
  int v59; // eax
  unsigned char *v60; // eax
  int v61; // eax
  int v62; // edi
  int v64; // edi
  int v65; // eax
  int v66; // edi
  int v67; // eax
  int v68; // edi
  int v69; // eax
  int v70; // edi
  int v71; // eax
  int v72; // edi
  int v73; // eax
  int v74; // edi
  int v75; // eax
  int v76; // edi
  int v77; // eax
  int v78; // edi
  int v79; // eax
  int v80; // edi
  int v81; // eax
  int v82; // edi
  int v83; // eax
  int v84; // edi
  int v85; // eax
  int v86; // edi
  int v87; // eax
  int TypeMember_54749E0; // eax
  char *k; // eax
  int v90; // edx
  int v91; // eax
  int v92; // edi
  int v93; // eax
  int v94; // edi
  int Alt; // eax
  int v96; // edi
  int v97; // eax
  char v98; // al
  char v99; // al
  char v100; // cl
  char v101; // al
  int v102; // edi
  int v103; // eax
  int v104; // edi
  int v105; // eax
  int v106; // edi
  int v107; // eax
  unsigned char *v108; // eax
  int v109; // eax
  unsigned char *v110; // eax
  int v111; // eax
  int v112; // edx
  void *Items; // eax
  int v114; // edi
  int v115; // eax
  int v116; // edi
  int v117; // eax
  int v118; // edi
  int v119; // eax
  int v120; // edi
  int v121; // eax
  int v122; // edi
  int v123; // eax
  int v124; // edi
  int v125; // eax
  int v126; // edi
  int v127; // eax
  int v128; // edi
  int v129; // eax
  int v130; // edi
  int v131; // eax
  int v132; // edi
  int v133; // eax
  int v134; // edi
  int v135; // eax
  int v136; // edi
  int v137; // eax
  int v138; // edi
  int v139; // eax
  int v140; // edi
  int v141; // eax
  int v142; // edi
  int v143; // eax
  int v144; // edi
  int v145; // eax
  int v146; // edi
  int v147; // eax
  int v148; // edi
  int v149; // eax
  char *m; // eax
  int v151; // ecx
  int v152; // edx
  void *v153; // eax
  char *n; // eax
  int v155; // ecx
  int v156; // edx
  void *v157; // eax
  unsigned int *v158; // edi
  unsigned int *v159; // eax
  unsigned int *v160; // edi
  unsigned int *v161; // eax
  int *Coord2; // eax
  int v163; // ecx
  int v164; // edx
  int v165; // eax
  char *ii; // eax
  int v167; // ecx
  int v168; // edx
  void *v169; // eax
  char *jj; // eax
  int v171; // ecx
  int v172; // edx
  void *v173; // eax
  int *v174; // eax
  int v175; // edx
  char v176; // al
  int *v177; // eax
  int *v178; // eax
  int *v179; // eax
  int *v180; // eax
  int *v181; // eax
  int *v182; // edi
  int v183; // ecx
  unsigned char *v184; // eax
  int v185; // eax
  unsigned int *v186; // eax
  unsigned char *v187; // eax
  int v188; // eax
  int v190; // edi
  int v191; // eax
  int v192; // eax
  int v193; // eax
  int v194; // edx
  int v195; // edi
  int v196; // eax
  unsigned int *v197; // edi
  unsigned int *v198; // eax
  int v200; // eax
  int v201; // ecx
  unsigned char *v202; // eax
  int v203; // edx
  unsigned char *v204; // eax
  int v205; // eax
  unsigned char *v206; // eax
  unsigned char *v207; // eax
  unsigned char *v208; // eax
  unsigned char *v209; // eax
  unsigned char *v210; // eax
  unsigned char *v212; // eax
  int v213; // ecx
  unsigned char *v214; // eax
  int v215; // edx
  unsigned char *v216; // eax
  int v217; // eax
  unsigned char *v218; // eax
  int v219; // ecx
  unsigned char *v220; // eax
  int v221; // edx
  unsigned char *v222; // eax
  int v223; // eax
  unsigned char *v224; // eax
  int v225; // ecx
  unsigned char *v226; // eax
  int v227; // edx
  unsigned char *v228; // eax
  int v229; // eax
  unsigned char *v230; // eax
  int v231; // ecx
  unsigned char *v232; // eax
  int v233; // edx
  unsigned char *v234; // eax
  int v235; // eax
  unsigned char *v236; // eax
  int v237; // ecx
  unsigned char *v238; // eax
  int v239; // edx
  unsigned char *v240; // eax
  int v241; // eax
  unsigned char *v242; // eax
  int v243; // ecx
  unsigned char *v244; // eax
  unsigned char *v245; // eax
  unsigned char *v246; // eax
  unsigned char *v247; // eax
  unsigned char *v248; // eax
  unsigned char *v249; // eax
  int v250; // ecx
  unsigned char *v251; // eax
  unsigned char *v252; // eax
  unsigned char *v253; // eax
  unsigned char *v254; // eax
  unsigned char *v255; // eax
  int v256; // eax
  unsigned char *v257; // eax
  int v258; // ecx
  unsigned char *v259; // eax
  int v260; // edx
  unsigned char *v261; // eax
  int v262; // eax
  unsigned char *v263; // eax
  int v264; // ecx
  unsigned char *v265; // eax
  int v266; // edx
  unsigned char *v267; // eax
  int v268; // eax
  unsigned char *v269; // eax
  int v270; // ecx
  unsigned char *v271; // eax
  int v272; // edx
  unsigned char *v273; // eax
  int v274; // eax
  unsigned char *v275; // eax
  unsigned char *v276; // eax
  int v277; // edx
  unsigned char *v278; // eax
  unsigned char *v279; // eax
  unsigned char *v280; // eax
  unsigned char *v281; // eax
  unsigned char *v282; // eax
  unsigned char *v283; // eax
  unsigned char *v284; // eax
  unsigned char *v285; // eax
  int Double_Overwrite; // eax
  unsigned char *v287; // eax
  unsigned char *v288; // eax
  int v289; // edx
  unsigned char *v290; // eax
  int v291; // eax
  unsigned char *v292; // eax
  int v293; // ecx
  unsigned char *v294; // eax
  int v295; // edx
  unsigned char *v296; // eax
  int v297; // eax
  unsigned char *v298; // eax
  unsigned char *v299; // eax
  int v300; // eax
  unsigned char *v301; // eax
  int v302; // eax
  unsigned char *v303; // eax
  int v304; // eax
  unsigned char *v305; // eax
  int v306; // eax
  unsigned char *v307; // eax
  int v308; // eax
  unsigned char *v309; // eax
  int v310; // eax
  unsigned char *v311; // eax
  int v312; // eax
  unsigned char *v313; // eax
  int v314; // eax
  int v315; // ecx
  unsigned char *v316; // eax
  int v317; // edx
  unsigned char *v318; // eax
  unsigned char *v319; // eax
  unsigned char *v320; // eax
  unsigned char *v321; // eax
  unsigned char *v322; // eax
  int v323; // eax
  unsigned char *v324; // eax
  unsigned int *Abilities; // eax
  unsigned char *v326; // eax
  unsigned int *v327; // eax
  int v329; // eax
  unsigned char *v330; // eax
  int v333; // ecx
  unsigned char *v334; // eax
  int v337; // edx
  unsigned char *v338; // eax
  int v341; // eax
  unsigned char *v342; // eax
  int v345; // ecx
  unsigned char *v346; // eax
  unsigned char *v348; // eax
  int v349; // eax
  unsigned char *v351; // eax
  int v352; // ecx
  unsigned char *v353; // eax
  int v354; // eax
  const char *v355; // eax
  unsigned char *v356; // eax
  unsigned char *v357; // eax
  unsigned char *v358; // eax
  int v359; // ecx
  unsigned char *v360; // eax
  int v361; // edx
  unsigned char *v362; // eax
  int v363; // eax
  unsigned char *v364; // eax
  unsigned char *v365; // eax
  int v366; // edx
  unsigned char *v367; // eax
  int v368; // eax
  unsigned char *v369; // eax
  char v370; // al
  unsigned char *v371; // eax
  char *v372; // edx
  const char *v373; // eax
  unsigned char *v374; // eax
  char *v375; // edx
  const char *v376; // eax
  int v377; // edi
  unsigned char *v378; // eax
  int *Point3D_Overwrite; // eax
  unsigned char *v380; // eax
  unsigned char *v381; // eax
  double v382; // rax
  unsigned char *v383; // eax
  char v384; // al
  unsigned char *v385; // eax
  int *v386; // eax
  unsigned char *v387; // eax
  unsigned char *v388; // eax
  double v389; // rax
  unsigned char *v390; // eax
  int v391; // ecx
  unsigned char *v392; // eax
  int *v393; // eax
  unsigned char *v394; // eax
  unsigned char *v395; // eax
  unsigned char *v396; // eax
  int *v397; // eax
  unsigned char *v398; // eax
  unsigned char *v399; // eax
  int v400; // eax
  unsigned char *v401; // eax
  int *v402; // eax
  unsigned char *v403; // eax
  unsigned char *v404; // eax
  unsigned char *v405; // eax
  int *v406; // eax
  unsigned char *v407; // eax
  unsigned char *v408; // eax
  int v409; // esi
  unsigned char *v410; // eax
  int *v411; // eax
  int v412; // ecx
  unsigned int *v413; // ecx
  unsigned char *v414; // eax
  char v415; // al
  unsigned char *v416; // eax
  int *v417; // eax
  unsigned char *v418; // eax
  ObjectTypeClass *v419; // ecx
  int v420; // ecx
  IntVector v423; // [esp-14h] [ebp-398h] BYREF
  unsigned char *v424; // [esp-Ch] [ebp-390h]
  unsigned char *v425; // [esp-8h] [ebp-38Ch]
  unsigned char *v426; // [esp-4h] [ebp-388h]
  double v427; // [esp+0h] [ebp-384h]
  ObjectClass *v428; // [esp+8h] [ebp-37Ch]
  unsigned char v429[8]; // [esp+18h] [ebp-36Ch] BYREF
  int IntList; // [esp+24h] [ebp-360h] BYREF
  char String[128]; // [esp+E4h] [ebp-2A0h] BYREF
  char v434[32]; // [esp+164h] [ebp-220h] BYREF
}
} // namespace gamemd


// 0x7170A0
namespace gamemd {
int ObjectTypeClass::DeserializeArrays()
{

  int result; // eax
  ObjectTypeClass *v19; // [esp+Ch] [ebp+4h]
  int *v20; // [esp+10h] [ebp+8h]
  result = COMObject::GetSizeMaxWrapper(v19, v20); /*0x7170ac*/
  if ( result >= 0 ) /*0x7170b3*/
  {
    int v2; // eax
    v2 = 4 * *(unsigned int *)&v19[1].__pad_14D[67] + 4 + *v20; /*0x7170c8*/
    *v20 = v2; /*0x7170ca*/
    int v3; // eax
    v3 = v2 + 4 * *(unsigned int *)&v19[1].__pad_14D[95] + 4; /*0x7170d2*/
    *v20 = v3; /*0x7170d6*/
    int v4; // eax
    v4 = v3 + 4 * *(unsigned int *)&v19[1].__pad_14D[123] + 4; /*0x7170de*/
    *v20 = v4; /*0x7170e2*/
    int v5; // eax
    v5 = v4 + 4 * *(unsigned int *)&v19[1].__pad_14D[151] + 4; /*0x7170ea*/
    *v20 = v5; /*0x7170ee*/
    int v6; // eax
    v6 = v5 + 4 * *(unsigned int *)&v19[1].ImageFile[8] + 4; /*0x7170f6*/
    *v20 = v6; /*0x7170fa*/
    int v7; // eax
    v7 = v6 + 4 * *(unsigned int *)&v19[1].AlphaImageFile[9] + 4; /*0x717102*/
    *v20 = v7; /*0x717106*/
    int v8; // eax
    v8 = v7 + 4 * *(unsigned int *)&v19[1].HasRadialIndicator + 4; /*0x71710e*/
    *v20 = v8; /*0x717112*/
    int v9; // eax
    v9 = v8 + 4 * v19[1].VoxelCaches[4] + 4; /*0x71711a*/
    *v20 = v9; /*0x71711e*/
    int v10; // eax
    v10 = v9 + 4 * v19[1].VoxelCaches[11] + 4; /*0x717126*/
    *v20 = v10; /*0x71712a*/
    int v11; // eax
    v11 = v10 + 4 * v19[1].VoxelCaches[18] + 4; /*0x717132*/
    *v20 = v11; /*0x717136*/
    int v12; // eax
    v12 = v11 + 4 * *(unsigned int *)&v19[2].AlphaImageFile[1] + 4; /*0x71713e*/
    *v20 = v12; /*0x717142*/
    int v13; // eax
    v13 = v12 + 4 * *(unsigned int *)&v19[2].Selectable + 4; /*0x71714a*/
    *v20 = v13; /*0x71714e*/
    int v14; // eax
    v14 = v13 + 4 * *(unsigned int *)&v19[1].Name[44] + 4; /*0x717156*/
    *v20 = v14; /*0x71715a*/
    int v15; // eax
    v15 = v14 + 4 * (int)v19[2].AlphaImage + 4; /*0x717162*/
    *v20 = v15; /*0x717166*/
    int v16; // eax
    v16 = v15 + 4 * *(unsigned int *)&v19[1].__pad_14D[23] + 4; /*0x71716e*/
    *v20 = v16; /*0x717172*/
    int v17; // eax
    v17 = v16 + 4 * (int)v19[1].AlphaImage + 4; /*0x71717a*/
    *v20 = v17; /*0x71717e*/
    int v18; // eax
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
  LOBYTE(v2) = this->__pad_DC8[8]; /*0x717823*/
  const char *v3; // ecx
  v3 = &this->__pad_DC8[8]; /*0x717829*/
  if ( (unsigned char)v2 ) /*0x717831*/
  {
    v2 = FileExtension::MapHandler(v3); /*0x717833*/
    *&this->u32_DF0 = v2; /*0x717838*/
  }
  return v2; /*0x71783e*/

}
} // namespace gamemd
// 0x717C00
namespace gamemd {
unsigned int * ObjectTypeClass::loadTypeMember_5717C00(unsigned int * a2)
{


  if ( this == (ObjectTypeClass *)a2 ) /*0x717c0a*/
    return &this->AbstractTypeClass; /*0x717c0a*/
  (*((void (**)(ObjectTypeClass *))this->AbstractTypeClass + 3))(this); /*0x717c0e*/
  void *v3; // eax
  v3 = (void *)a2[2]; /*0x717c11*/
  this->ptr_8 = v3; /*0x717c16*/
  if ( !v3 ) /*0x717c19*/
  {
    this->ptr_4 = 0; /*0x717c5a*/
    (this->u8_D) = ((this->u8_D) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x717c61*/
    return &this->AbstractTypeClass; /*0x717c65*/
  }
  void *v4; // eax
  v4 = __2_YAPAXI_Z(4 * (unsigned int)v3); /*0x717c23*/
  this->ptr_4 = v4; /*0x717c2b*/
  if ( !v4 ) /*0x717c30*/
    return &this->AbstractTypeClass; /*0x717c30*/
  void *ptr_4 = this->ptr_8; // ecx /*0x717c32*/
  int v6 = 0; // eax /*0x717c35*/
  (this->u8_D) = ((this->u8_D) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x717c39*/
  if ( (int)ptr_4 <= 0 ) /*0x717c3d*/
    return &this->AbstractTypeClass; /*0x717c3d*/
  do /*0x717c51*/
  {
    *((unsigned int *)this->ptr_4 + v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x717c48*/
    ++v6; /*0x717c4e*/
  }
  while ( v6 < (int)this->ptr_4 ); /*0x717c51*/
  return &this->AbstractTypeClass; /*0x717c55*/

}
} // namespace gamemd
// 0x41CBF0
namespace gamemd {
unsigned int * ObjectTypeClass::g_var_773e90(unsigned int * a1)
{

  int v1 = 2 * dword_889F58; // esi /*0x41cbfc*/
  *(unsigned int *)a1->ptr_0 = 256; /*0x41cc07*/
  *(unsigned int *)&a1->ptr_0[4] = 256; /*0x41cc09*/
  *(unsigned int *)&a1->ptr_0[8] = v1; /*0x41cc0c*/
  return a1->ptr_0; /*0x41cc0f*/
}
} // namespace gamemd
// 0x41CF80
namespace gamemd {
unsigned int * ObjectTypeClass::Copy(unsigned int * a0, ObjectTypeClass * aP1)
{
  a0->ptr_0 = (void *)*aP1; /*0x41cf8d*/
  a0->ptr_1 = aP1->ptr_4; /*0x41cf92*/
  a0->ptr_2 = aP1->ptr_8; /*0x41cf99*/
  return &a0->ptr_0; /*0x41cf95*/
}
} // namespace gamemd
// 0x474690
namespace gamemd {
char ObjectTypeClass::ReadBool(INIClass * Block, INIClass * aP2, int a4)
{

  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF
  sprintf(Buffer, "%d", 360 * a4 / 256); /*0x4746ba*/
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
    (*(((unsigned short *)&(a4)) + 1)) = (unsigned short)a3; /*0x47478e*/
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
  return INIClass::SetString(Block, aP2, Buffer); /*0x4747fb*/
}
} // namespace gamemd
// 0x4749E0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_54749E0(CCINIClass * aP1, unsigned char * a2, unsigned int a4)
{

  char *v5; // eax
  v5 = sub_473960(a4); /*0x4749f1*/
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass::GetString(aP1, a2, v5, Destination, 32); /*0x474a03*/
  return ObjectTypeClass::loadTypeMember_473980((ObjectTypeClass *)Destination); /*0x474a11*/
}
} // namespace gamemd
// 0x474D50
namespace gamemd {
char ObjectTypeClass::ReadString(INIClass * Block, INIClass * aP2, unsigned char * a4)
{

  char Buffer[64]; // [esp+4h] [ebp-40h] BYREF
  sprintf(Buffer, "%d,%d,%d", *a4, a4[1], a4[2]); /*0x474d75*/
  return INIClass::SetString(Block, aP2, Buffer); /*0x474d93*/
}
} // namespace gamemd
// 0x474E40
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5474E40(INIClass * aP1, unsigned char * a2, int a4)
{

  char Destination[32]; // [esp+8h] [ebp-20h] BYREF
  INIClass::GetString(aP1, a2, (&off_81BA88)[a4], Destination, 32); /*0x474e62*/
  int v4 = 0; // edi /*0x474e67*/
  char **v5 = &off_81BA88; // esi /*0x474e69*/
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
    return VocClass::FindByName((VocClass *)Destination); /*0x474fd4*/
  else
    return a4; /*0x474fdf*/
}
} // namespace gamemd
// 0x474FF0
namespace gamemd {
int ObjectTypeClass::ReadDouble2(INIClass * aP1, unsigned char * a2, void * a4)
{
  StringTable Destination[4]; // [esp+4h] [ebp-20h] BYREF

  char *Name; // eax
  Name = AbstractType::FindName(a4); /*0x475001*/
  INIClass::GetString(aP1, a2, Name, Destination[0].__pad_0, 32); /*0x475013*/
  return StringTable::Lookup(Destination); /*0x475021*/
}
} // namespace gamemd
// 0x475060
namespace gamemd {
int ObjectTypeClass::ReadBool3(INIClass * aP1, unsigned char * a2, void * a4)
{

  char *v5; // eax
  v5 = sub_45DD20((ObjectClass *)a4); /*0x475071*/
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass::GetString(aP1, a2, v5, Destination, 32); /*0x475083*/
  return sub_45DD50((ObjectClass *)Destination); /*0x475091*/
}
} // namespace gamemd
// 0x476240
namespace gamemd {
char ObjectTypeClass::ReadTypeListINI(unsigned char * Block, char * a2, ObjectTypeClass * aP3)
{

  int i; // ebp
  unsigned int *v5; // eax
  unsigned int v6; // ecx
  unsigned char v8[521]; // [esp+Ch] [ebp-20Ch] BYREF
  __int16 v9; // [esp+215h] [ebp-3h]
  char v10; // [esp+217h] [ebp-1h]

  *(unsigned int *)&v8[8] = this; /*0x47624d*/
  v8[12] = g_INI_DefaultBuffer; /*0x476252*/
  memset(&v8[13], 0, 0x1FCu); /*0x476268*/
  v9 = 0; /*0x47626a*/
  v10 = 0; /*0x47626c*/
  for ( i = 0; i < aP3->uniqueId; ++i ) /*0x476274*/
  {
    if ( v8[12] ) /*0x476281*/
      strcat(&v8[12], Delimiter); /*0x4762a8*/
    v5 = aP3->ptr_4; /*0x4762b1*/
    v8[4] = 0; /*0x4762b4*/
    v6 = v5[i]; /*0x4762bc*/
    v8[4] = HIBYTE(v6); /*0x4762c6*/
    *(unsigned int *)v8 = v6 & 0xFFFFFF; /*0x4762ce*/
    strcat(&v8[12], (const char *)(System_Read_6E7330((ObjectClass *)v8) + 36)); /*0x4762fa*/
  }
  return INIClass::SetString(*(char **)&v8[8], Block, a2, &v8[12]); /*0x47632e*/

}
} // namespace gamemd
// 0x476FC0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_476FC0(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{

  char *v5; // eax
  v5 = sub_48E030(aP3); /*0x476fdd*/
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  if ( INIClass::GetString((INIClass *)this, aP1, a2, v5, Destination, 128) ) /*0x476ff5*/
    return ObjectTypeClass::loadTypeMember_48DFF0((ObjectTypeClass *)Destination); /*0x477002*/
  else
    return aP3; /*0x477012*/
}
} // namespace gamemd
// 0x477590
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5477590(CCINIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{

  char String[128]; // [esp+8h] [ebp-80h] BYREF
  INIClass::GetString(aP1, a2, (&off_81BABC)[aP3], String, 128); /*0x4775c1*/
  char *v4; // esi
  v4 = strtok(String, Str); /*0x4775d5*/
  int result; // eax
  result = _strcmpi(v4, g_INI_Key_None); /*0x4775dd*/
  if ( result ) /*0x4775e7*/
  {
    if ( _strcmpi(v4, (char *)g_INI_Key_Normal) ) /*0x4775fa*/
    {
      bool v6; // zf
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

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  int v2 = 0; // edi /*0x48dff9*/
  char **v3 = off_81DA58; // esi /*0x48dffb*/
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
int ObjectTypeClass::CreateInstance(int aP1, int aP2, void *a3)
{
  if ( *&this->zero_3C ) /*0x5f1c30*/
    return (*(int (**)(unsigned int, int, int))(**&this->NeedsSaveOrLink + 16))(*&this->NeedsSaveOrLink, aP1, aP2); /*0x5f1c4b*/
  else
    return 0; /*0x5f1c37*/
}
} // namespace gamemd
// 0x5F61A0
namespace gamemd {
void ObjectTypeClass::ReleaseWaveAndString(void *a1)
{

  void *ptr_0 = a1->ptr_0; // edi /*0x5f61a4*/
  if ( a1->ptr_0 ) /*0x5f61a4*/
  {
    WaveClass::Destroy((WaveClass *)a1->ptr_0); /*0x5f61ac*/
    operator delete((ptr_0)); /*0x5f61b2*/
  }
  String *ptr_0; // edi
  ptr_0 = (String *)a1->ptr_4; /*0x5f61ba*/
  a1->ptr_0 = 0; /*0x5f61bd*/
  if ( ptr_0 ) /*0x5f61c5*/
  {
    ((String *)(ptr_0))->Release(); /*0x5f61c9*/
    operator delete((ptr_0)); /*0x5f61cf*/
  }
  a1->ptr_1 = 0; /*0x5f61d7*/
}
} // namespace gamemd
// 0x5F75C0
namespace gamemd {
unsigned int * ObjectTypeClass::InitTripleTen(unsigned int * a1)
{
  a1->ptr_0 = (void *)10; /*0x5f75cd*/
  a1->ptr_1 = (void *)10; /*0x5f75d3*/
  a1->ptr_2 = (void *)10; /*0x5f75d6*/
  return &a1->ptr_0; /*0x5f75d9*/
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
      __3_YAXPAX_Z(v3); /*0x5f80a0*/
      *((unsigned int *)v1 - 1) = 0; /*0x5f80a8*/
    }
    v4 = *(void ***)v1; /*0x5f80ab*/
    if ( *(unsigned int *)v1 ) /*0x5f80ab*/
    {
      String::Release(*(void ***)v1); /*0x5f80b3*/
      __3_YAXPAX_Z(v4); /*0x5f80b9*/
      *(unsigned int *)v1 = 0; /*0x5f80c1*/
    }
    v5 = (void *)*((unsigned int *)v1 + 35); /*0x5f80c3*/
    if ( v5 ) /*0x5f80cb*/
    {
      WaveClass::Destroy(*((unsigned int *)v1 + 35)); /*0x5f80cf*/
      __3_YAXPAX_Z(v5); /*0x5f80d5*/
      *((unsigned int *)v1 + 35) = 0; /*0x5f80dd*/
    }
    v6 = (void *)*((unsigned int *)v1 + 36); /*0x5f80e3*/
    if ( v6 ) /*0x5f80eb*/
    {
      String::Release(*((void ***)v1 + 36)); /*0x5f80ef*/
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
  ObjectTypeClass::Destruct((int)Block); /*0x5f9ae3*/
  if ( (a2 & 1) != 0 ) /*0x5f9aed*/
    operator delete((Block)); /*0x5f9af0*/
  return Block; /*0x5f9afa*/
}
} // namespace gamemd
// 0x5F9B60
namespace gamemd {
int ObjectTypeClass::FreeLoaderBuffer()
{

  __3_YAXPAX_Z(this->AbstractTypeClass); /*0x5f9b66*/
  this->AbstractTypeClass = 0; /*0x5f9b70*/
  this->ptr_4 = 0; /*0x5f9b72*/
  this->ptr_8 = 0; /*0x5f9b75*/
  (this->ptr_10) = ((this->ptr_10) & ~0xFF) | ((0) & 0xFF); /*0x5f9b78*/
  this->uniqueId = 0; /*0x5f9b7b*/
  return 0; /*0x5f9b7e*/

}
} // namespace gamemd
// 0x6E5E70
namespace gamemd {
int ObjectTypeClass::FindByName(void *a1)
{
  int v3; // esi

  if ( !this ) /*0x6e5e77*/
    return 0; /*0x6e5e77*/
  int v2 = 0; // ebx /*0x6e5e7e*/
  if ( g_MultiplayerCleanup <= 0 ) /*0x6e5e82*/
    return 0; /*0x6e5eb8*/
  while ( 1 ) /*0x6e5e8a*/
  {
    v3 = *((unsigned int *)dword_B0E784 + v2); /*0x6e5e8a*/
    if ( !_strcmpi(&v3->u32_24, (char *)this) || !_strcmpi((char *)(v3 + 100), (char *)this) ) /*0x6e5ea2*/
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
    this->ptr_4 = aP2->headNode; /*0x7179e2*/
    this->ptr_8 = aP2->__pad_008; /*0x7179e8*/
    this->ptr_C = aP2->u32_C; /*0x7179ee*/
    LOWORD(this->uniqueId) = aP2->sectionHead; /*0x7179f5*/
  }
  *(unsigned int *)aP1 = this->AbstractTypeClass; /*0x717a01*/
  aP1->ROF = this->ptr_4; /*0x717a06*/
  aP1->VEIN_PROOF = this->ptr_8; /*0x717a0c*/
  aP1->SENSORS = this->ptr_C; /*0x717a12*/
  aP1->GUARD_AREA = this->uniqueId; /*0x717a1a*/
  return aP1; /*0x717a19*/

}
} // namespace gamemd
// 0x717A30
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A30(int a2)
{

  this->ptr_0 = (void *)a2; /*0x717a34*/
  return a2; /*0x717a36*/

}
} // namespace gamemd
// 0x717A50
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A50(int a2)
{


  int result = a2; // eax /*0x717a50*/
  if ( a2 <= 0 ) /*0x717a56*/
    result = 1; /*0x717a58*/
  this->ptr_4 = (void *)result; /*0x717a5d*/
  return result; /*0x717a60*/

}
} // namespace gamemd
// 0x717A70
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A70()
{

  return (int)this->ptr_4; /*0x717a73*/

}
} // namespace gamemd
// 0x717A80
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717A80(int a2)
{


  int result = a2; // eax /*0x717a80*/
  if ( a2 <= 0 ) /*0x717a86*/
    result = 1; /*0x717a88*/
  this->ptr_8 = (void *)result; /*0x717a8d*/
  return result; /*0x717a90*/

}
} // namespace gamemd
// 0x717AA0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AA0()
{

  return (int)this->ptr_4; /*0x717aa3*/

}
} // namespace gamemd
// 0x717AB0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AB0(int a2)
{


  int result = a2; // eax /*0x717ab0*/
  if ( a2 <= 0 ) /*0x717ab6*/
    result = 1; /*0x717ab8*/
  this->ptr_C = (void *)result; /*0x717abd*/
  return result; /*0x717ac0*/

}
} // namespace gamemd
// 0x717AD0
namespace gamemd {
int ObjectTypeClass::loadTypeMember_5717AD0()
{

  return (int)this->ptr_4; /*0x717ad3*/

}
} // namespace gamemd
// 0x717AE0
namespace gamemd {
BOOL ObjectTypeClass::loadTypeMember_5717AE0()
{

  return LOBYTE(this->AbstractTypeClass) == 0; /*0x717ae9*/

}
} // namespace gamemd
// 0x717BF0
namespace gamemd {
unsigned int * ObjectTypeClass::CheckFlag(int aP1)
{

  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x717bf2*/
  return &this->AbstractTypeClass; /*0x717bf8*/

}
} // namespace gamemd
// 0x71CB90
namespace gamemd {
int ObjectTypeClass::ReadDestroyAnim()
{

  INIClass::ClearSection((int)aTerrain, 0); /*0x71cb9f*/
  int result = dword_A8E998; // eax /*0x71cba4*/
  int i; // ebx
  for ( i = 0; i < dword_A8E998; ++i ) /*0x71cbad*/
  {
    int v4; // esi
    v4 = *((unsigned int *)dword_A8E98C + i); /*0x71cbba*/
    if ( v4 && !*(unsigned char *)(v4 + 129) ) /*0x71cbc1*/
    {
      if ( *(unsigned char *)(v4 + 144) ) /*0x71cbcb*/
      {
        int v5; // [esp+8h] [ebp-14h]
        unsigned char v6[4]; // [esp+Ch] [ebp-10h] BYREF
        v5 = *(unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v4 + 440))(v4, v6); /*0x71cbe6*/
        char Buffer[12]; // [esp+10h] [ebp-Ch] BYREF
        sprintf(Buffer, "%d", (int16_t)v5 + 1000 * (*((signed short *)(((unsigned char *)&(v5)) + 2)))); /*0x71cc09*/
        INIClass::SetString((uint8_t *)aTerrain, Buffer, (char *)(*(unsigned int *)(v4 + 200) + 36)); /*0x71cc29*/
      }
    }
    result = dword_A8E998; /*0x71cc2e*/
  }
  return result; /*0x71cc3d*/
}
} // namespace gamemd
