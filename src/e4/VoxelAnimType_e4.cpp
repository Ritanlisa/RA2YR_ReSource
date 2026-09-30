// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/VoxelAnim_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VoxelAnimTypeClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"

// 0x5F7A90
namespace gamemd {
AbstractClass * * VoxelAnimType::LoadSection(const char * a2, int a3)
{
  void *v4; // ebp
  File *v5; // eax
  unsigned int *FileVXL; // eax
  void *v7; // ebp
  File *v8; // eax
  unsigned int *FileHVA; // eax
  char v10; // cl
  char v11; // al
  int Info; // eax
  void *v14; // ebp
  void *v15; // ebp
  char v16; // [esp+12h] [ebp-2DEh]
  CCFileClass v17; // [esp+14h] [ebp-2DCh] BYREF
  int v18[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v19; // [esp+78h] [ebp-278h]
  CCFileClass v20; // [esp+80h] [ebp-270h] BYREF
  int v21[3]; // [esp+D8h] [ebp-218h] BYREF
  int v22; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7aa7*/
    sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, "%sTUR", a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  ((CCFileClass *)(&v17))->Construct(Source); /*0x5f7b11*/
  if ( (uint8_t)CCFileClass::Open(&v17, 0) ) /*0x5f7b1b*/
  {
        v4 = (void *)*((char *)this + 8 * a3 + 50);
    if ( v4 ) /*0x5f7b4f*/
    {
            WaveClass::Destroy(*((char *)this + 8 * a3 + 50));
      RA2_OPDEL(v4); /*0x5f7b59*/
            *((char *)this + 8 * a3 + 50) = 0;
    }
    v16 = 0; /*0x5f7b6a*/
    v5 = (File *)RA2_OPNEW(0x1Cu); /*0x5f7b6e*/
    if ( v5 ) /*0x5f7b78*/
      FileVXL = File::LoadFileVXL(v5, (int)&v17, 0); /*0x5f7b82*/
    else
      FileVXL = 0; /*0x5f7b89*/
        *((char *)this + 8 * a3 + 50) = v5;
    if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f7b96*/
      v16 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, "%sTUR", a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    ((CCFileClass *)(&v20))->Construct(Source); /*0x5f7c0e*/
        v6 = (void *)*((char *)this + 8 * a3 + 51);
    if ( v7 ) /*0x5f7c1c*/
    {
            String::Release(*((char *)this + 8 * a3 + 51));
      RA2_OPDEL(v7); /*0x5f7c26*/
            *((char *)this + 8 * a3 + 51) = 0;
    }
    v8 = (File *)RA2_OPNEW(0x10u); /*0x5f7c3b*/
    if ( v8 ) /*0x5f7c45*/
      FileHVA = File::LoadFileHVA(v8, (int)&v20); /*0x5f7c51*/
    else
      FileHVA = 0; /*0x5f7c58*/
        *((char *)this + 8 * a3 + 51) = v7;
    if ( !FileHVA || (v10 = *(unsigned char *)FileHVA, v11 = 1, v10) ) /*0x5f7c6b*/
      v11 = 0; /*0x5f7c6d*/
    if ( v16 && v11 ) /*0x5f7c7d*/
    {
      Info = (unsigned int)(VoxelSection::GetInfo(*((VoxelSection **)&(unsigned int)(this->u32_8)* a3 + 50), 0, 0));
      Matrix::Scale(*((Matrix **)&(unsigned int)(this->u32_8)* a3 + 51), *(float *)(Info + 12)); /*0x5f7c9c*/
      *(unsigned int *)v20.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7cad*/
      v22 = 0; /*0x5f7cb4*/
      Vector::Clear((int)v21); /*0x5f7cbb*/
      *(unsigned int *)v20.CDFileClass = &off_7E1668; /*0x5f7ccc*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7cd3*/
      *(unsigned int *)v17.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7cdc*/
      v19 = 0; /*0x5f7ce0*/
      Vector::Clear((int)v18); /*0x5f7ce4*/
      *(unsigned int *)v17.CDFileClass = &off_7E1668; /*0x5f7ced*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
        v12 = (void *)*((char *)this + 8 * a3 + 50);
    if ( v14 ) /*0x5f7d0e*/
    {
            WaveClass::Destroy(*((char *)this + 8 * a3 + 50));
      RA2_OPDEL(v14); /*0x5f7d18*/
            *((char *)this + 8 * a3 + 50) = 0;
    }
        v13 = (void *)*((char *)this + 8 * a3 + 51);
    if ( v15 ) /*0x5f7d30*/
    {
            String::Release(*((char *)this + 8 * a3 + 51));
      RA2_OPDEL(v15); /*0x5f7d3a*/
            *((char *)this + 8 * a3 + 51) = 0;
    }
    *(unsigned int *)v20.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7d55*/
    v22 = 0; /*0x5f7d5c*/
    Vector::Clear((int)v21); /*0x5f7d63*/
    *(unsigned int *)v20.CDFileClass = &off_7E1668; /*0x5f7d74*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x5f7d7b*/
    *(unsigned int *)v17.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7d84*/
    v19 = 0; /*0x5f7d88*/
    Vector::Clear((int)v18); /*0x5f7d8c*/
    *(unsigned int *)v17.CDFileClass = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    *(unsigned int *)v17.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7b28*/
    v19 = 0; /*0x5f7b30*/
    Vector::Clear((int)v18); /*0x5f7b34*/
    *(unsigned int *)v17.CDFileClass = &off_7E1668; /*0x5f7b39*/
  }
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7d99*/
  return 0; /*0x5f7cf6*/
}
}
// 0x5F7DB0
namespace gamemd {
AbstractClass * * VoxelAnimType::LoadBarrel(const char * a2, int a3)
{
  File *v5; // eax
  unsigned int *FileVXL; // eax
  char v7; // bl
  File *v8; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  void *v11; // ebp
  String *v12; // esi
  char v13; // [esp+13h] [ebp-2DDh]
  CCFileClass v14; // [esp+14h] [ebp-2DCh] BYREF
  int v15[3]; // [esp+6Ch] [ebp-284h] BYREF
  int v16; // [esp+78h] [ebp-278h]
  CCFileClass v17; // [esp+80h] [ebp-270h] BYREF
  int v18[3]; // [esp+D8h] [ebp-218h] BYREF
  int v19; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7dc7*/
    sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, "%sBARL", a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  ((CCFileClass *)(&v14))->Construct(Source); /*0x5f7e31*/
  if ( (uint8_t)CCFileClass::Open(&v14, 0) ) /*0x5f7e3b*/
  {
    v13 = 0; /*0x5f7e7b*/
    v5 = (File *)RA2_OPNEW(0x1Cu); /*0x5f7e80*/
    if ( v5 ) /*0x5f7e8a*/
      FileVXL = File::LoadFileVXL(v5, (int)&v14, 0); /*0x5f7e94*/
    else
      FileVXL = 0; /*0x5f7e9b*/
        *((char *)this + 8 * a3 + 86) = v5;
    if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f7ea8*/
      v13 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, "%sBARL", a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    ((CCFileClass *)(&v17))->Construct(Source); /*0x5f7f13*/
    v7 = 0; /*0x5f7f1a*/
    v8 = (File *)RA2_OPNEW(0x10u); /*0x5f7f1c*/
    if ( v8 ) /*0x5f7f26*/
      FileHVA = File::LoadFileHVA(v8, (int)&v17); /*0x5f7f32*/
    else
      FileHVA = 0; /*0x5f7f39*/
        *((char *)this + 8 * a3 + 87) = v7;
    if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x5f7f46*/
      v7 = 1; /*0x5f7f4b*/
    if ( v13 && v7 ) /*0x5f7f5b*/
    {
      Info = (unsigned int)(VoxelSection::GetInfo(*((VoxelSection **)&(unsigned int)(this->u32_8)* a3 + 86), 0, 0));
      Matrix::Scale(*((Matrix **)&(unsigned int)(this->u32_8)* a3 + 87), *(float *)(Info + 12)); /*0x5f7f7a*/
      *(unsigned int *)v17.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7f8b*/
      v19 = 0; /*0x5f7f92*/
      Vector::Clear((int)v18); /*0x5f7f99*/
      *(unsigned int *)v17.CDFileClass = &off_7E1668; /*0x5f7faa*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f7fb1*/
      *(unsigned int *)v14.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7fba*/
      v16 = 0; /*0x5f7fbe*/
      Vector::Clear((int)v15); /*0x5f7fc2*/
      *(unsigned int *)v14.CDFileClass = &off_7E1668; /*0x5f7fcb*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
            v9 = (void *)*((char *)this + 8 * a3 + 86);
      if ( v11 ) /*0x5f7fee*/
      {
                WaveClass::Destroy(*((char *)this + 8 * a3 + 86));
        RA2_OPDEL(v11); /*0x5f7ff8*/
      }
            v10 = (void *)*((char *)this + 8 * a3 + 87);
      if ( v12 ) /*0x5f8009*/
      {
        String::Release(v12); /*0x5f800d*/
        RA2_OPDEL(v12); /*0x5f8013*/
      }
      *(unsigned int *)v17.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f8027*/
      v19 = 0; /*0x5f802e*/
      Vector::Clear((int)v18); /*0x5f8035*/
      *(unsigned int *)v17.CDFileClass = &off_7E1668; /*0x5f8046*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f804d*/
      *(unsigned int *)v14.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f8056*/
      v16 = 0; /*0x5f805a*/
      Vector::Clear((int)v15); /*0x5f805e*/
      *(unsigned int *)v14.CDFileClass = &off_7E1668; /*0x5f8067*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    *(unsigned int *)v14.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f7e48*/
    v16 = 0; /*0x5f7e50*/
    Vector::Clear((int)v15); /*0x5f7e54*/
    *(unsigned int *)v14.CDFileClass = &off_7E1668; /*0x5f7e5d*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7e65*/
    return 1; /*0x5f7e6d*/
  }
}
}
// 0x5F8110
namespace gamemd {
int VoxelAnimType::LoadAnim()
{
  const char *v2; // ebp
  void *v3; // edi
  File *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  void *v10; // edi
  File *v11; // eax
  unsigned int *v12; // eax
  void *v13; // edi
  File *v14; // eax
  unsigned int *v15; // eax
  int v16; // eax
  void *v17; // edi
  File *v18; // eax
  unsigned int *v19; // eax
  void *v20; // edi
  File *v21; // eax
  unsigned int *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  void *v26; // edi
  File *v27; // eax
  unsigned int *v28; // eax
  void *v29; // edi
  File *v30; // eax
  unsigned int *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  void *v35; // edi
  File *v36; // eax
  unsigned int *v37; // eax
  void *v38; // edi
  File *v39; // eax
  unsigned int *v40; // eax
  int v41; // eax
  void *v42; // edi
  void *v43; // edi
  void *v44; // edi
  void *v45; // edi
  int v46; // edi
  int v47; // ebp
  VoxelSection *v48; // ecx
  char v50; // [esp+13h] [ebp-349h]
  CCFileClass v51; // [esp+14h] [ebp-348h] BYREF
  int v52[3]; // [esp+6Ch] [ebp-2F0h] BYREF
  int v53; // [esp+78h] [ebp-2E4h]
  CCFileClass v54; // [esp+80h] [ebp-2DCh] BYREF
  int v55[3]; // [esp+D8h] [ebp-284h] BYREF
  int v56; // [esp+E4h] [ebp-278h]
  char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
  CCFileClass v58; // [esp+1F0h] [ebp-16Ch] BYREF
  char v59[12]; // [esp+248h] [ebp-114h] BYREF
  int v60; // [esp+254h] [ebp-108h]
  char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF

  v2 = (const char *)(&this->u32_7E0);
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, &this->u32_7E0, g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(&v58, Buffer); /*0x5f814f*/
  if ( (uint8_t)CCFileClass::Open(&v58, 0) ) /*0x5f815c*/
  {
        v3 = (WaveClass *)*((unsigned int *)this + 44);
    if ( v3 ) /*0x5f8171*/
    {
            WaveClass::Destroy(*((unsigned int *)this + 44));
      RA2_OPDEL(v3); /*0x5f817b*/
    }
    v4 = (gamemd::File *)((unsigned int)((File *)RA2_OPNEW(0x1Cu)));
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)&v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
        *((unsigned int *)this + 44) = FileVXL;
    if ( !FileVXL || *(unsigned char *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    CCFileClass::Construct(&v51, Buffer); /*0x5f81dc*/
        v6 = (SomeVoxelCache *)*((unsigned int *)this + 45);
    if ( v6 ) /*0x5f81e9*/
    {
            String::Release(*((void ***)this + 45));
      RA2_OPDEL(v6); /*0x5f81f3*/
    }
    v7 = (gamemd::File *)((unsigned int)((File *)RA2_OPNEW(0x10u)));
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)&v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
        *((unsigned int *)this + 45) = FileHVA;
    if ( !FileHVA || *(unsigned char *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = (unsigned int)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), 0, 0));
      Matrix::Scale(*((Matrix **)&this->u32_105), *(float *)(Info + 12)); /*0x5f823e*/
    }
    *(unsigned int *)v51.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 || *(this + 3233) );
  {
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40;
      || !(uint8_t)HouseClass::HasPower((HouseClass *)this)
      || *(&this->u32_5205) )
    {
      sprintf(Filename, "%sTUR", v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f86d4*/
      if ( (uint8_t)CCFileClass::Open(&v51, 0) ) /*0x5f86de*/
      {
                v26 = (WaveClass *)*((unsigned int *)this + 46);
        if ( v26 ) /*0x5f86f3*/
        {
                    WaveClass::Destroy(*((unsigned int *)this + 46));
          RA2_OPDEL(v26); /*0x5f86fd*/
        }
        v27 = (File *)RA2_OPNEW(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)&v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
                *((unsigned int *)this + 46) = v28;
        if ( !v28 || *(unsigned char *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, "%sTUR", v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8778*/
                v29 = (SomeVoxelCache *)*((unsigned int *)this + 47);
        if ( v29 ) /*0x5f8785*/
        {
                    String::Release(*((void ***)this + 47));
          RA2_OPDEL(v29); /*0x5f878f*/
        }
        v30 = (File *)RA2_OPNEW(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)&v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
                *((unsigned int *)this + 47) = v31;
        if ( !v31 || *(unsigned char *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((VoxelSection **)&this->u32_106), 0, 0); /*0x5f87ce*/
                    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v32 + 12));
        }
        *(unsigned int *)v54.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
        v24 = *((unsigned int *)this + 514);
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection((VoxelAnimType *)this, &this->u32_7E0, v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp(&this->u32_90, "APC") ) /*0x5f82a1*/
    {
            sprintf(Filename, MEMORY[0x832AE0], (char *)this + 2016);
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f8310*/
      if ( (uint8_t)CCFileClass::Open(&v51, 0) ) /*0x5f831a*/
      {
                v10 = (WaveClass *)*((unsigned int *)this + 46);
        if ( v10 ) /*0x5f832f*/
        {
                    WaveClass::Destroy(*((unsigned int *)this + 46));
          RA2_OPDEL(v10); /*0x5f8339*/
        }
        v11 = (File *)RA2_OPNEW(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)&v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
                *((unsigned int *)this + 46) = v12;
        if ( !v12 || *(unsigned char *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
                sprintf(Filename, MEMORY[0x832AE0], (char *)this + 2016);
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f83b4*/
                v13 = (SomeVoxelCache *)*((unsigned int *)this + 47);
        if ( v13 ) /*0x5f83c1*/
        {
                    String::Release(*((void ***)this + 47));
          RA2_OPDEL(v13); /*0x5f83cb*/
        }
        v14 = (File *)RA2_OPNEW(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)&v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
                *((unsigned int *)this + 47) = v15;
        if ( !v15 || *(unsigned char *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((VoxelSection **)&this->u32_106), 0, 0); /*0x5f840a*/
                    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v16 + 12));
        }
        *(unsigned int *)v54.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8455*/
      }
      *(unsigned int *)v51.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f847b*/
    }
        if ( *((unsigned int *)this + 1952) )
    {
            sprintf(Filename, MEMORY[0x832AD8], (char *)this + 2016);
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f84d0*/
      if ( (uint8_t)CCFileClass::Open(&v51, 0) ) /*0x5f84da*/
      {
                v17 = (WaveClass *)*((unsigned int *)this + 46);
        if ( v17 ) /*0x5f84ef*/
        {
                    WaveClass::Destroy(*((unsigned int *)this + 46));
          RA2_OPDEL(v17); /*0x5f84f9*/
        }
        v18 = (File *)RA2_OPNEW(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)&v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
                *((unsigned int *)this + 46) = v19;
        if ( !v19 || *(unsigned char *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
                sprintf(Filename, MEMORY[0x832AD8], (char *)this + 2016);
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8574*/
                v20 = (SomeVoxelCache *)*((unsigned int *)this + 47);
        if ( v20 ) /*0x5f8581*/
        {
                    String::Release(*((void ***)this + 47));
          RA2_OPDEL(v20); /*0x5f858b*/
        }
        v21 = (File *)RA2_OPNEW(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)&v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
                *((unsigned int *)this + 47) = v22;
        if ( !v22 || *(unsigned char *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((VoxelSection **)&this->u32_106), 0, 0); /*0x5f85ca*/
                    Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v23 + 12));
        }
        *(unsigned int *)v54.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8615*/
      }
  LABEL_92:
      *(unsigned int *)v51.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f883f*/
    }
  }
  LABEL_93:
  LABEL_93:
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 || *(this + 3233) );
  {
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40;
      && (uint8_t)HouseClass::HasPower((HouseClass *)this)
      && !*(&this->u32_5205) )
    {
            v33 = *((unsigned int *)this + 514);
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel((VoxelAnimType *)this, &this->u32_7E0, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
            sprintf(Filename, MEMORY[0x832AD0], (char *)this + 2016);
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f88f0*/
      if ( (uint8_t)CCFileClass::Open(&v51, 0) ) /*0x5f88fa*/
      {
                v35 = (WaveClass *)*((unsigned int *)this + 48);
        if ( v35 ) /*0x5f890f*/
        {
                    WaveClass::Destroy(*((unsigned int *)this + 48));
          RA2_OPDEL(v35); /*0x5f8919*/
        }
        v36 = (File *)RA2_OPNEW(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)&v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
                *((unsigned int *)this + 48) = v37;
        if ( !v37 || *(unsigned char *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
                sprintf(Filename, MEMORY[0x832AD0], (char *)this + 2016);
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8994*/
                v38 = (void *)*((unsigned int *)this + 49);
        if ( v38 ) /*0x5f89a1*/
        {
                    String::Release(*((void ***)this + 49));
          RA2_OPDEL(v38); /*0x5f89ab*/
        }
        v39 = (File *)RA2_OPNEW(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)&v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
                *((unsigned int *)this + 49) = v40;
        if ( !v40 || *(unsigned char *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((VoxelSection **)&this->u32_108), 0, 0); /*0x5f89ea*/
                    Matrix::Scale(*((unsigned int **)this + 49), *(float *)(v41 + 12));
        }
        *(unsigned int *)v54.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8a35*/
      }
      *(unsigned int *)v51.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f8a3e*/
      v53 = 0; /*0x5f8a46*/
      Vector::Clear((int)v52); /*0x5f8a4a*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f8a5b*/
    }
  }
  LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
  LABEL_123:
        v42 = (WaveClass *)*((unsigned int *)this + 44);
    if ( v42 ) /*0x5f8a72*/
    {
            WaveClass::Destroy(*((unsigned int *)this + 44));
      RA2_OPDEL(v42); /*0x5f8a7c*/
            *((unsigned int *)this + 44) = 0;
    }
        v43 = (SomeVoxelCache *)*((unsigned int *)this + 45);
    if ( v43 ) /*0x5f8a92*/
    {
            String::Release(*((void ***)this + 45));
      RA2_OPDEL(v43); /*0x5f8a9c*/
            *((unsigned int *)this + 45) = 0;
    }
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40;
      && (uint8_t)HouseClass::HasPower((HouseClass *)this)
      && !*(&this->u32_5205) )
    {
      ObjectTypeClass::CleanupWeapons(); /*0x5f8acb*/
    }
    else
    {
            v44 = (WaveClass *)*((unsigned int *)this + 46);
      if ( v44 ) /*0x5f8add*/
      {
                WaveClass::Destroy(*((unsigned int *)this + 46));
        RA2_OPDEL(v44); /*0x5f8ae7*/
                *((unsigned int *)this + 46) = 0;
      }
            v45 = (SomeVoxelCache *)*((unsigned int *)this + 47);
      if ( v45 ) /*0x5f8afd*/
      {
                String::Release(*((void ***)this + 47));
        RA2_OPDEL(v45); /*0x5f8b0b*/
                *((unsigned int *)this + 47) = 0;
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), 0, 0) + 160); /*0x5f8b35*/
    v48 = (unsigned int *)*((unsigned int *)this + 44);
  if ( *(unsigned int *)&v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)&this->u32_104), v46, 0) + 162); /*0x5f8bce*/
            v48 = (unsigned int *)*((unsigned int *)this + 44);
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < *(unsigned int *)&v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
    *((unsigned int *)this + 123) = v47;
  RA2_OPDEL(*((void **)&this->u32_385)); /*0x5f8bf7*/
    *((unsigned int *)this + 145) = 0;
    *((unsigned int *)this + 146) = 0;
    *((unsigned int *)this + 147) = 0;
    *((unsigned int *)this + 2368) = 0;
    *((unsigned int *)this + 149) = 0;
  RA2_OPDEL(*((void **)&this->u32_3C0)); /*0x5f8c21*/
    *((unsigned int *)this + 150) = 0;
    *((unsigned int *)this + 151) = 0;
    *((unsigned int *)this + 152) = 0;
    *((unsigned int *)this + 2448) = 0;
    *((unsigned int *)this + 154) = 0;
  RA2_OPDEL(*((void **)&this->u32_3C5)); /*0x5f8c4b*/
    *((unsigned int *)this + 155) = 0;
    *((unsigned int *)this + 156) = 0;
    *((unsigned int *)this + 157) = 0;
    *((unsigned int *)this + 2528) = 0;
    *((unsigned int *)this + 159) = 0;
  RA2_OPDEL(*((void **)&this->u32_400)); /*0x5f8c75*/
    *((unsigned int *)this + 160) = 0;
    *((unsigned int *)this + 161) = 0;
    *((unsigned int *)this + 162) = 0;
    *((unsigned int *)this + 2608) = 0;
    *((unsigned int *)this + 164) = 0;
  LABEL_146:
  *(unsigned int *)v58.CDFileClass = (void*)&CCFileClass_vftable; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  *(unsigned int *)v58.CDFileClass = &off_7E1668; /*0x5f8cc0*/
// 0x431b80
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v58); /*0x5f8cd0*/
}
}