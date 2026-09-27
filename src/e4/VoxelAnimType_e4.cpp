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

// 0x5F7A90
namespace gamemd {
AbstractClass * * VoxelAnimType::LoadSection(const char * a2, int a3)
{
  void *v4; // ebp
  unsigned char *v5; // eax
  void *v6; // ebp
  char *v7; // eax
  char v8; // cl
  char v9; // al
  int v10; // eax
  void *v12; // ebp
  void *v13; // ebp
  char v14; // [esp+12h] [ebp-2DEh]
  unsigned int v15[22]; // [esp+14h] [ebp-2DCh] BYREF
  unsigned char v16[12]; // [esp+6Ch] [ebp-284h] BYREF
  int v17; // [esp+78h] [ebp-278h]
  unsigned int v18[22]; // [esp+80h] [ebp-270h] BYREF
  unsigned char v19[12]; // [esp+D8h] [ebp-218h] BYREF
  int v20; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7aa7*/
    sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, "%sTUR", a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  CCFileClass::Construct(v15, Source); /*0x5f7b11*/
  if ( (uint8_t)CCFileClass::Open(0) ) /*0x5f7b1b*/
  {
    v4 = (void *)*(&this->u32_8 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      WaveClass::Destroy(*(&this->u32_8 * a3 + 50)); /*0x5f7b53*/
      RA2_OPDEL(v4); /*0x5f7b59*/
      *(&this->u32_8 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v14 = 0; /*0x5f7b6a*/
    if ( operator new(0x1Cu) ) /*0x5f7b6e*/
      v5 = (unsigned char *)File::LoadFileVXL(v15, 0); /*0x5f7b82*/
    else
      v5 = 0; /*0x5f7b89*/
    *(&this->u32_8 * a3 + 50) = v5; /*0x5f7b8d*/
    if ( v5 && !*v5 ) /*0x5f7b96*/
      v14 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, "%sTUR", a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    CCFileClass::Construct(v18, Source); /*0x5f7c0e*/
    v6 = (void *)*(&this->u32_8 * a3 + 51); /*0x5f7c13*/
    if ( v6 ) /*0x5f7c1c*/
    {
      String::Release(*(&this->u32_8 * a3 + 51)); /*0x5f7c20*/
      RA2_OPDEL(v6); /*0x5f7c26*/
      *(&this->u32_8 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    if ( operator new(0x10u) ) /*0x5f7c3b*/
      v7 = (char *)File::LoadFileHVA(v18); /*0x5f7c51*/
    else
      v7 = 0; /*0x5f7c58*/
    *(&this->u32_8 * a3 + 51) = v7; /*0x5f7c5c*/
    if ( !v7 || (v8 = *v7, v9 = 1, v8) ) /*0x5f7c6b*/
      v9 = 0; /*0x5f7c6d*/
    if ( v14 && v9 ) /*0x5f7c7d*/
    {
      v10 = VoxelSection::GetInfo(0, 0); /*0x5f7c8c*/
      Matrix::Scale(*(float *)(v10 + 12)); /*0x5f7c9c*/
      v20 = 0; /*0x5f7cb4*/
      Vector::Clear(v19); /*0x5f7cbb*/
      v18[0] = &off_7E1668; /*0x5f7ccc*/
      BufferIOFileClass::Dtor(v18); /*0x5f7cd3*/
      v17 = 0; /*0x5f7ce0*/
      Vector::Clear(v16); /*0x5f7ce4*/
      v15[0] = &off_7E1668; /*0x5f7ced*/
      BufferIOFileClass::Dtor(v15); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v12 = (void *)*(&this->u32_8 * a3 + 50); /*0x5f7d05*/
    if ( v12 ) /*0x5f7d0e*/
    {
      WaveClass::Destroy(*(&this->u32_8 * a3 + 50)); /*0x5f7d12*/
      RA2_OPDEL(v12); /*0x5f7d18*/
      *(&this->u32_8 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v13 = (void *)*(&this->u32_8 * a3 + 51); /*0x5f7d27*/
    if ( v13 ) /*0x5f7d30*/
    {
      String::Release(*(&this->u32_8 * a3 + 51)); /*0x5f7d34*/
      RA2_OPDEL(v13); /*0x5f7d3a*/
      *(&this->u32_8 * a3 + 51) = 0; /*0x5f7d42*/
    }
    v20 = 0; /*0x5f7d5c*/
    Vector::Clear(v19); /*0x5f7d63*/
    v18[0] = &off_7E1668; /*0x5f7d74*/
    BufferIOFileClass::Dtor(v18); /*0x5f7d7b*/
    v17 = 0; /*0x5f7d88*/
    Vector::Clear(v16); /*0x5f7d8c*/
    v15[0] = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    v17 = 0; /*0x5f7b30*/
    Vector::Clear(v16); /*0x5f7b34*/
    v15[0] = &off_7E1668; /*0x5f7b39*/
  }
  BufferIOFileClass::Dtor(v15); /*0x5f7d99*/
  return 0; /*0x5f7cf6*/
}
}
// 0x5F7DB0
namespace gamemd {
AbstractClass * * VoxelAnimType::LoadBarrel(const char * a2, int a3)
{
  unsigned char *v5; // eax
  char v6; // bl
  unsigned char *v7; // eax
  int v8; // eax
  void *v9; // ebp
  void *v10; // esi
  char v11; // [esp+13h] [ebp-2DDh]
  unsigned int v12[22]; // [esp+14h] [ebp-2DCh] BYREF
  unsigned char v13[12]; // [esp+6Ch] [ebp-284h] BYREF
  int v14; // [esp+78h] [ebp-278h]
  unsigned int v15[22]; // [esp+80h] [ebp-270h] BYREF
  unsigned char v16[12]; // [esp+D8h] [ebp-218h] BYREF
  int v17; // [esp+E4h] [ebp-20Ch]
  char Buffer[256]; // [esp+ECh] [ebp-204h] BYREF
  char Source[260]; // [esp+1ECh] [ebp-104h] BYREF

  if ( a3 ) /*0x5f7dc7*/
    sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, "%sBARL", a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  CCFileClass::Construct(v12, Source); /*0x5f7e31*/
  if ( (uint8_t)CCFileClass::Open(0) ) /*0x5f7e3b*/
  {
    v11 = 0; /*0x5f7e7b*/
    if ( operator new(0x1Cu) ) /*0x5f7e80*/
      v5 = (unsigned char *)File::LoadFileVXL(v12, 0); /*0x5f7e94*/
    else
      v5 = 0; /*0x5f7e9b*/
    *(&this->u32_8 * a3 + 86) = v5; /*0x5f7e9f*/
    if ( v5 && !*v5 ) /*0x5f7ea8*/
      v11 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, "%sBARL", a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    CCFileClass::Construct(v15, Source); /*0x5f7f13*/
    v6 = 0; /*0x5f7f1a*/
    if ( operator new(0x10u) ) /*0x5f7f1c*/
      v7 = (unsigned char *)File::LoadFileHVA(v15); /*0x5f7f32*/
    else
      v7 = 0; /*0x5f7f39*/
    *(&this->u32_8 * a3 + 87) = v7; /*0x5f7f3d*/
    if ( v7 && !*v7 ) /*0x5f7f46*/
      v6 = 1; /*0x5f7f4b*/
    if ( v11 && v6 ) /*0x5f7f5b*/
    {
      v8 = VoxelSection::GetInfo(0, 0); /*0x5f7f6a*/
      Matrix::Scale(*(float *)(v8 + 12)); /*0x5f7f7a*/
      v17 = 0; /*0x5f7f92*/
      Vector::Clear(v16); /*0x5f7f99*/
      v15[0] = &off_7E1668; /*0x5f7faa*/
      BufferIOFileClass::Dtor(v15); /*0x5f7fb1*/
      v14 = 0; /*0x5f7fbe*/
      Vector::Clear(v13); /*0x5f7fc2*/
      v12[0] = &off_7E1668; /*0x5f7fcb*/
      BufferIOFileClass::Dtor(v12); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v9 = (void *)*(&this->u32_8 * a3 + 86); /*0x5f7fe3*/
      if ( v9 ) /*0x5f7fee*/
      {
        WaveClass::Destroy(*(&this->u32_8 * a3 + 86)); /*0x5f7ff2*/
        RA2_OPDEL(v9); /*0x5f7ff8*/
      }
      v10 = (void *)*(&this->u32_8 * a3 + 87); /*0x5f8000*/
      if ( v10 ) /*0x5f8009*/
      {
        String::Release(v10); /*0x5f800d*/
        RA2_OPDEL(v10); /*0x5f8013*/
      }
      v17 = 0; /*0x5f802e*/
      Vector::Clear(v16); /*0x5f8035*/
      v15[0] = &off_7E1668; /*0x5f8046*/
      BufferIOFileClass::Dtor(v15); /*0x5f804d*/
      v14 = 0; /*0x5f805a*/
      Vector::Clear(v13); /*0x5f805e*/
      v12[0] = &off_7E1668; /*0x5f8067*/
      BufferIOFileClass::Dtor(v12); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    v14 = 0; /*0x5f7e50*/
    Vector::Clear(v13); /*0x5f7e54*/
    v12[0] = &off_7E1668; /*0x5f7e5d*/
    BufferIOFileClass::Dtor(v12); /*0x5f7e65*/
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
  unsigned int *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // edi
  unsigned int *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  void *v10; // edi
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  void *v13; // edi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  int v16; // eax
  void *v17; // edi
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  void *v20; // edi
  unsigned int *v21; // eax
  unsigned int *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  void *v26; // edi
  unsigned int *v27; // eax
  unsigned int *v28; // eax
  void *v29; // edi
  unsigned int *v30; // eax
  unsigned int *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  void *v35; // edi
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  void *v38; // edi
  unsigned int *v39; // eax
  unsigned int *v40; // eax
  int v41; // eax
  void *v42; // edi
  void *v43; // edi
  void *v44; // edi
  void *v45; // edi
  int v46; // edi
  int v47; // ebp
  unsigned int *v48; // ecx
  char v50; // [esp+13h] [ebp-349h]
  unsigned int v51[22]; // [esp+14h] [ebp-348h] BYREF
  unsigned char v52[12]; // [esp+6Ch] [ebp-2F0h] BYREF
  int v53; // [esp+78h] [ebp-2E4h]
  unsigned int v54[22]; // [esp+80h] [ebp-2DCh] BYREF
  unsigned char v55[12]; // [esp+D8h] [ebp-284h] BYREF
  int v56; // [esp+E4h] [ebp-278h]
  char Buffer[260]; // [esp+ECh] [ebp-270h] BYREF
  unsigned int v58[22]; // [esp+1F0h] [ebp-16Ch] BYREF
  char v59[12]; // [esp+248h] [ebp-114h] BYREF
  int v60; // [esp+254h] [ebp-108h]
  char Filename[256]; // [esp+25Ch] [ebp-100h] BYREF

  v2 = &this->u32_7E0; /*0x5f811e*/
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, &this->u32_7E0, g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(v58, Buffer); /*0x5f814f*/
  if ( CCFileClass::Open(v58, 0) ) /*0x5f815c*/
  {
    v3 = (void *)this->u32_B0; /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      WaveClass::Destroy(this->u32_B0); /*0x5f8175*/
      RA2_OPDEL(v3); /*0x5f817b*/
    }
    v4 = operator new(0x1Cu); /*0x5f8185*/
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    this->u32_B0 = FileVXL; /*0x5f81a7*/
    if ( !FileVXL || *(unsigned char *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    CCFileClass::Construct(v51, Buffer); /*0x5f81dc*/
    v6 = (void *)this->u32_B4; /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((void ***)&this->u32_105)); /*0x5f81ed*/
      RA2_OPDEL(v6); /*0x5f81f3*/
    }
    v7 = operator new(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    this->u32_B4 = FileHVA; /*0x5f821b*/
    if ( !FileHVA || *(unsigned char *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((unsigned int **)&this->u32_105), *(float *)(Info + 12)); /*0x5f823e*/
    }
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    v51[0] = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor(v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (__thiscall **)(char *))(((unsigned int)(this->u32_104))))(this) != 40 || *(&this->u32_50C3) ) /*0x5f8287*/
  {
    if ( (*(int (__thiscall **)(char *))(((unsigned int)(this->u32_104))))(this) != 40 /*0x5f8657*/
      || !HouseClass::HasPower(this)
      || *(&this->u32_5205) )
    {
      sprintf(Filename, "%sTUR", v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(v51, Buffer); /*0x5f86d4*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f86de*/
      {
        v26 = (void *)this->u32_B8; /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(this->u32_B8); /*0x5f86f7*/
          RA2_OPDEL(v26); /*0x5f86fd*/
        }
        v27 = operator new(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        this->u32_B8 = v28; /*0x5f8726*/
        if ( !v28 || *(unsigned char *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, "%sTUR", v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8778*/
        v29 = (void *)this->u32_BC; /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((void ***)&this->u32_107)); /*0x5f8789*/
          RA2_OPDEL(v29); /*0x5f878f*/
        }
        v30 = operator new(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        this->u32_BC = v31; /*0x5f87ba*/
        if ( !v31 || *(unsigned char *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((unsigned int **)&this->u32_106), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((unsigned int **)&this->u32_107), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        v54[0] = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor(v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = this->ptr_808; /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection(this, &this->u32_7E0, v25) ) /*0x5f8680*/
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
      sprintf(Filename, off_832AE0, &this->u32_C84); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f8310*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f831a*/
      {
        v10 = (void *)this->u32_B8; /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(this->u32_B8); /*0x5f8333*/
          RA2_OPDEL(v10); /*0x5f8339*/
        }
        v11 = operator new(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        this->u32_B8 = v12; /*0x5f8362*/
        if ( !v12 || *(unsigned char *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, off_832AE0, &this->u32_C84); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f83b4*/
        v13 = (void *)this->u32_BC; /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((void ***)&this->u32_107)); /*0x5f83c5*/
          RA2_OPDEL(v13); /*0x5f83cb*/
        }
        v14 = operator new(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        this->u32_BC = v15; /*0x5f83f6*/
        if ( !v15 || *(unsigned char *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((unsigned int **)&this->u32_106), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((unsigned int **)&this->u32_107), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        v54[0] = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8455*/
      }
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      v51[0] = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor(v51); /*0x5f847b*/
    }
    if ( *(&this->u32_C08) ) /*0x5f8480*/
    {
      sprintf(Filename, "%sWO", &this->u32_C84); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f84d0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f84da*/
      {
        v17 = (void *)this->u32_B8; /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(this->u32_B8); /*0x5f84f3*/
          RA2_OPDEL(v17); /*0x5f84f9*/
        }
        v18 = operator new(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        this->u32_B8 = v19; /*0x5f8522*/
        if ( !v19 || *(unsigned char *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, "%sWO", &this->u32_C84); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8574*/
        v20 = (void *)this->u32_BC; /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((void ***)&this->u32_107)); /*0x5f8585*/
          RA2_OPDEL(v20); /*0x5f858b*/
        }
        v21 = operator new(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        this->u32_BC = v22; /*0x5f85b6*/
        if ( !v22 || *(unsigned char *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((unsigned int **)&this->u32_106), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((unsigned int **)&this->u32_107), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        v54[0] = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8615*/
      }
  LABEL_92:
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      v51[0] = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor(v51); /*0x5f883f*/
    }
  }
  LABEL_93:
  if ( (*(int (__thiscall **)(char *))(((unsigned int)(this->u32_104))))(this) != 40 || *(&this->u32_50C3) ) /*0x5f8850*/
  {
    if ( (*(int (__thiscall **)(char *))(((unsigned int)(this->u32_104))))(this) == 40 /*0x5f8873*/
      && HouseClass::HasPower(this)
      && !*(&this->u32_5205) )
    {
      v33 = this->ptr_808; /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel(this, &this->u32_7E0, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, "%sBARL", &this->u32_C84); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f88f0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f88fa*/
      {
        v35 = (void *)this->u32_C0; /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(this->u32_C0); /*0x5f8913*/
          RA2_OPDEL(v35); /*0x5f8919*/
        }
        v36 = operator new(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        this->u32_C0 = v37; /*0x5f8942*/
        if ( !v37 || *(unsigned char *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, "%sBARL", &this->u32_C84); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8994*/
        v38 = (void *)this->u32_C4; /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((void ***)&this->u32_109)); /*0x5f89a5*/
          RA2_OPDEL(v38); /*0x5f89ab*/
        }
        v39 = operator new(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        this->u32_C4 = v40; /*0x5f89d6*/
        if ( !v40 || *(unsigned char *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((unsigned int **)&this->u32_108), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((unsigned int **)&this->u32_109), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        v54[0] = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8a35*/
      }
      v53 = 0; /*0x5f8a46*/
      Vector::Clear((int)v52); /*0x5f8a4a*/
      v51[0] = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor(v51); /*0x5f8a5b*/
    }
  }
  LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
  LABEL_123:
    v42 = (void *)this->u32_B0; /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(this->u32_B0); /*0x5f8a76*/
      RA2_OPDEL(v42); /*0x5f8a7c*/
      this->u32_B0 = 0; /*0x5f8a84*/
    }
    v43 = (void *)this->u32_B4; /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((void ***)&this->u32_105)); /*0x5f8a96*/
      RA2_OPDEL(v43); /*0x5f8a9c*/
      this->u32_B4 = 0; /*0x5f8aa4*/
    }
    if ( (*(int (__thiscall **)(char *))(((unsigned int)(this->u32_104))))(this) == 40 /*0x5f8ac1*/
      && HouseClass::HasPower(this)
      && !*(&this->u32_5205) )
    {
      ObjectTypeClass::CleanupWeapons(); /*0x5f8acb*/
    }
    else
    {
      v44 = (void *)this->u32_B8; /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(this->u32_B8); /*0x5f8ae1*/
        RA2_OPDEL(v44); /*0x5f8ae7*/
        this->u32_B8 = 0; /*0x5f8aef*/
      }
      v45 = (void *)this->u32_BC; /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((void ***)&this->u32_107)); /*0x5f8b05*/
        RA2_OPDEL(v45); /*0x5f8b0b*/
        this->u32_BC = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), 0, 0) + 160); /*0x5f8b35*/
  v48 = (unsigned int *)this->u32_B0; /*0x5f8b37*/
  if ( (int)v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)&this->u32_104), v46, 0) + 162); /*0x5f8bce*/
      v48 = (unsigned int *)this->u32_B0; /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
  this->u32_1EC = v47; /*0x5f8bea*/
  RA2_OPDEL(*((void **)&this->u32_385)); /*0x5f8bf7*/
  this->q244 = 0; /*0x5f8bfc*/
  this->ptr_248 = 0; /*0x5f8c02*/
  this->u32_24C = 0; /*0x5f8c08*/
  *(&this->u32_EC2) = 0; /*0x5f8c0e*/
  this->ptr_254 = 0; /*0x5f8c14*/
  RA2_OPDEL(*((void **)&this->u32_3C0)); /*0x5f8c21*/
  this->ptr_258 = 0; /*0x5f8c26*/
  this->u32_25C = 0; /*0x5f8c2c*/
  this->q260 = 0; /*0x5f8c32*/
  *(&this->u32_F42) = 0; /*0x5f8c38*/
  this->ptr_268 = 0; /*0x5f8c3e*/
  RA2_OPDEL(*((void **)&this->u32_3C5)); /*0x5f8c4b*/
  this->u32_26C = 0; /*0x5f8c50*/
  this->ptr_270 = 0; /*0x5f8c56*/
  this->ptr_274 = 0; /*0x5f8c5c*/
  *(&this->u32_FC2) = 0; /*0x5f8c62*/
  this->u32_27C = 0; /*0x5f8c68*/
  RA2_OPDEL(*((void **)&this->u32_400)); /*0x5f8c75*/
  this->ptr_280 = 0; /*0x5f8c7d*/
  this->ptr_284 = 0; /*0x5f8c83*/
  this->ptr_288 = 0; /*0x5f8c89*/
  *(&this->q1042) = 0; /*0x5f8c8f*/
  this->ptr_290 = 0; /*0x5f8c95*/
  LABEL_146:
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  v58[0] = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor(v58); /*0x5f8cd0*/
}
}