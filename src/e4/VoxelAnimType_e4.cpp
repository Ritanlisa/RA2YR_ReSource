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
    sprintf(Buffer, MEMORY[0x832AB4], a2, a3); /*0x5f7ade*/
  else
    sprintf(Buffer, MEMORY[0x832ABC], a2); /*0x5f7abe*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7afd*/
  ((CCFileClass *)(v15))->Construct(Source); /*0x5f7b11*/
  if ( (uint8_t)((CCFileClass *)(0))->Open() ) /*0x5f7b1b*/
  {
    v4 = (void *)*((unsigned int *)this + 2 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      ((WaveClass *)(*((unsigned int *)this + 2 * a3 + 50)))->Destroy(); /*0x5f7b53*/
      __3_YAXPAX_Z(v4); /*0x5f7b59*/
      *((unsigned int *)this + 2 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v14 = (unsigned int)(0);
    if ( __2_YAPAXI_Z(0x1Cu) ) /*0x5f7b6e*/
      v5 = (unsigned char *)File::LoadFileVXL(v15, 0); /*0x5f7b82*/
    else
      v5 = 0; /*0x5f7b89*/
    *((unsigned int *)this + 2 * a3 + 50) = v5; /*0x5f7b8d*/
    if ( v5 && !*v5 ) /*0x5f7b96*/
      v14 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, MEMORY[0x832AB4], a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, MEMORY[0x832ABC], a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7bf7*/
    ((CCFileClass *)(v18))->Construct(Source); /*0x5f7c0e*/
    v6 = (void *)*((unsigned int *)this + 2 * a3 + 51); /*0x5f7c13*/
    if ( v6 ) /*0x5f7c1c*/
    {
      String::Release(*((unsigned int *)this + 2 * a3 + 51)); /*0x5f7c20*/
      __3_YAXPAX_Z(v6); /*0x5f7c26*/
      *((unsigned int *)this + 2 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    if ( __2_YAPAXI_Z(0x10u) ) /*0x5f7c3b*/
      v7 = (char *)File::LoadFileHVA(v18); /*0x5f7c51*/
    else
      v7 = 0; /*0x5f7c58*/
    *((unsigned int *)this + 2 * a3 + 51) = v7; /*0x5f7c5c*/
    if ( !v7 || (v8 = *v7, v9 = 1, v8) ) /*0x5f7c6b*/
      v9 = 0; /*0x5f7c6d*/
    if ( v14 && v9 ) /*0x5f7c7d*/
    {
      v10 = (gamemd::AbstractClass **)(VoxelSection::GetInfo(0, 0));
      Matrix::Scale(*(float *)(v10 + 12)); /*0x5f7c9c*/
      v18[0] = &vt_CCFileClass; /*0x5f7cad*/
      v20 = 0; /*0x5f7cb4*/
      Vector::Clear(v19); /*0x5f7cbb*/
      v18[0] = &off_7E1668; /*0x5f7ccc*/
      ((BufferIOFileClass *)(v18))->Dtor(); /*0x5f7cd3*/
      v15[0] = &vt_CCFileClass; /*0x5f7cdc*/
      v17 = 0; /*0x5f7ce0*/
      Vector::Clear(v16); /*0x5f7ce4*/
      v15[0] = &off_7E1668; /*0x5f7ced*/
      ((BufferIOFileClass *)(v15))->Dtor(); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v12 = (void *)*((unsigned int *)this + 2 * a3 + 50); /*0x5f7d05*/
    if ( v12 ) /*0x5f7d0e*/
    {
      ((WaveClass *)(*((unsigned int *)this + 2 * a3 + 50)))->Destroy(); /*0x5f7d12*/
      __3_YAXPAX_Z(v12); /*0x5f7d18*/
      *((unsigned int *)this + 2 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v13 = (void *)*((unsigned int *)this + 2 * a3 + 51); /*0x5f7d27*/
    if ( v13 ) /*0x5f7d30*/
    {
      String::Release(*((unsigned int *)this + 2 * a3 + 51)); /*0x5f7d34*/
      __3_YAXPAX_Z(v13); /*0x5f7d3a*/
      *((unsigned int *)this + 2 * a3 + 51) = 0; /*0x5f7d42*/
    }
    v18[0] = (unsigned int)(&vt_CCFileClass);
    v20 = (unsigned int)(0);
    Vector::Clear(v19); /*0x5f7d63*/
    v18[0] = &off_7E1668; /*0x5f7d74*/
    ((BufferIOFileClass *)(v18))->Dtor(); /*0x5f7d7b*/
    v15[0] = &vt_CCFileClass; /*0x5f7d84*/
    v17 = 0; /*0x5f7d88*/
    Vector::Clear(v16); /*0x5f7d8c*/
    v15[0] = &off_7E1668; /*0x5f7d91*/
  }
  else
  {
    v15[0] = (unsigned int)(&vt_CCFileClass);
    v17 = (unsigned int)(0);
    Vector::Clear(v16); /*0x5f7b34*/
    v15[0] = &off_7E1668; /*0x5f7b39*/
  }
  ((BufferIOFileClass *)(v15))->Dtor(); /*0x5f7d99*/
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
    sprintf(Buffer, MEMORY[0x832AC4], a2, a3); /*0x5f7dfe*/
  else
    sprintf(Buffer, MEMORY[0x832AD0], a2); /*0x5f7dde*/
  _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f7e1d*/
  ((CCFileClass *)(v12))->Construct(Source); /*0x5f7e31*/
  if ( (uint8_t)((CCFileClass *)(0))->Open() ) /*0x5f7e3b*/
  {
    v11 = (unsigned int)(0);
    if ( __2_YAPAXI_Z(0x1Cu) ) /*0x5f7e80*/
      v5 = (unsigned char *)File::LoadFileVXL(v12, 0); /*0x5f7e94*/
    else
      v5 = 0; /*0x5f7e9b*/
    *((unsigned int *)this + 2 * a3 + 86) = v5; /*0x5f7e9f*/
    if ( v5 && !*v5 ) /*0x5f7ea8*/
      v11 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, MEMORY[0x832AC4], a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, MEMORY[0x832AD0], a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f7efc*/
    ((CCFileClass *)(v15))->Construct(Source); /*0x5f7f13*/
    v6 = 0; /*0x5f7f1a*/
    if ( __2_YAPAXI_Z(0x10u) ) /*0x5f7f1c*/
      v7 = (unsigned char *)File::LoadFileHVA(v15); /*0x5f7f32*/
    else
      v7 = 0; /*0x5f7f39*/
    *((unsigned int *)this + 2 * a3 + 87) = v7; /*0x5f7f3d*/
    if ( v7 && !*v7 ) /*0x5f7f46*/
      v6 = 1; /*0x5f7f4b*/
    if ( v11 && v6 ) /*0x5f7f5b*/
    {
      v8 = (unsigned int)(VoxelSection::GetInfo(0, 0));
      Matrix::Scale(*(float *)(v8 + 12)); /*0x5f7f7a*/
      v15[0] = &vt_CCFileClass; /*0x5f7f8b*/
      v17 = 0; /*0x5f7f92*/
      Vector::Clear(v16); /*0x5f7f99*/
      v15[0] = &off_7E1668; /*0x5f7faa*/
      ((BufferIOFileClass *)(v15))->Dtor(); /*0x5f7fb1*/
      v12[0] = &vt_CCFileClass; /*0x5f7fba*/
      v14 = 0; /*0x5f7fbe*/
      Vector::Clear(v13); /*0x5f7fc2*/
      v12[0] = &off_7E1668; /*0x5f7fcb*/
      ((BufferIOFileClass *)(v12))->Dtor(); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v9 = (void *)*((unsigned int *)this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v9 ) /*0x5f7fee*/
      {
        ((WaveClass *)(*((unsigned int *)this + 2 * a3 + 86)))->Destroy(); /*0x5f7ff2*/
        __3_YAXPAX_Z(v9); /*0x5f7ff8*/
      }
      v10 = (void *)*((unsigned int *)this + 2 * a3 + 87); /*0x5f8000*/
      if ( v10 ) /*0x5f8009*/
      {
        String::Release(v10); /*0x5f800d*/
        __3_YAXPAX_Z(v10); /*0x5f8013*/
      }
      v15[0] = (unsigned int)(&vt_CCFileClass);
      v17 = (unsigned int)(0);
      Vector::Clear(v16); /*0x5f8035*/
      v15[0] = &off_7E1668; /*0x5f8046*/
      ((BufferIOFileClass *)(v15))->Dtor(); /*0x5f804d*/
      v12[0] = &vt_CCFileClass; /*0x5f8056*/
      v14 = 0; /*0x5f805a*/
      Vector::Clear(v13); /*0x5f805e*/
      v12[0] = &off_7E1668; /*0x5f8067*/
      ((BufferIOFileClass *)(v12))->Dtor(); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    v12[0] = (unsigned int)(&vt_CCFileClass);
    v14 = (gamemd::AbstractClass **)(0);
    Vector::Clear(v13); /*0x5f7e54*/
    v12[0] = &off_7E1668; /*0x5f7e5d*/
    ((BufferIOFileClass *)(v12))->Dtor(); /*0x5f7e65*/
    return 1; /*0x5f7e6d*/
  }

}
}
// 0x5F8110
namespace gamemd {
int VoxelAnimType::LoadAnim()
{

  const char *v2; // ebp
  WaveClass *v3; // edi
  unsigned int *v4; // eax
  unsigned int *FileVXL; // eax
  SomeVoxelCache *v6; // edi
  unsigned int *v7; // eax
  unsigned int *FileHVA; // eax
  int Info; // eax
  WaveClass *v10; // edi
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  SomeVoxelCache *v13; // edi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  int v16; // eax
  WaveClass *v17; // edi
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  SomeVoxelCache *v20; // edi
  unsigned int *v21; // eax
  unsigned int *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  WaveClass *v26; // edi
  unsigned int *v27; // eax
  unsigned int *v28; // eax
  SomeVoxelCache *v29; // edi
  unsigned int *v30; // eax
  unsigned int *v31; // eax
  int v32; // eax
  int v33; // ebp
  int v34; // edi
  WaveClass *v35; // edi
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  void *v38; // edi
  unsigned int *v39; // eax
  unsigned int *v40; // eax
  int v41; // eax
  WaveClass *v42; // edi
  SomeVoxelCache *v43; // edi
  WaveClass *v44; // edi
  SomeVoxelCache *v45; // edi
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

  v2 = (const char *)((unsigned char *)this + 504);
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0, (unsigned char *)this + 504, g_Str_File__VXL); /*0x5f8138*/
  ((CCFileClass *)(v58))->Construct(Buffer); /*0x5f814f*/
  if ( CCFileClass::Open(v58, 0) ) /*0x5f815c*/
  {
    v3 = (WaveClass *)*((unsigned int *)this + 44); /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      ((WaveClass *)(*((unsigned int *)this + 44)))->Destroy(); /*0x5f8175*/
      __3_YAXPAX_Z(v3); /*0x5f817b*/
    }
    v4 = (unsigned int)(__2_YAPAXI_Z(0x1Cu));
    if ( v4 ) /*0x5f818f*/
      FileVXL = File::LoadFileVXL(v4, (int)v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    *((unsigned int *)this + 44) = FileVXL; /*0x5f81a7*/
    if ( !FileVXL || *(unsigned char *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2, g_Str_File__HVA); /*0x5f81c8*/
    ((CCFileClass *)(v51))->Construct(Buffer); /*0x5f81dc*/
    v6 = (SomeVoxelCache *)*((unsigned int *)this + 45); /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((void ***)this + 45)); /*0x5f81ed*/
      __3_YAXPAX_Z(v6); /*0x5f81f3*/
    }
    v7 = __2_YAPAXI_Z(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = File::LoadFileHVA(v7, (int)v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    *((unsigned int *)this + 45) = FileHVA; /*0x5f821b*/
    if ( !FileHVA || *(unsigned char *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((unsigned int **)this + 44), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((unsigned int **)this + 45), *(float *)(Info + 12)); /*0x5f823e*/
    }
    v51[0] = &vt_CCFileClass; /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    Vector::Clear((int)v52); /*0x5f825a*/
    v51[0] = &off_7E1668; /*0x5f8263*/
    BufferIOFileClass::Dtor(v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 || *((unsigned char *)this + 3233) ) /*0x5f8287*/
  {
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 /*0x5f8657*/
      || !HouseClass::HasPower(this)
      || *((unsigned char *)this + 3285) )
    {
      sprintf(Filename, MEMORY[0x832ABC], v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f86c0*/
      CCFileClass::Construct(v51, Buffer); /*0x5f86d4*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f86de*/
      {
        v26 = (WaveClass *)*((unsigned int *)this + 46); /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(*((unsigned int *)this + 46)); /*0x5f86f7*/
          __3_YAXPAX_Z(v26); /*0x5f86fd*/
        }
        v27 = __2_YAPAXI_Z(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = File::LoadFileVXL(v27, (int)v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        *((unsigned int *)this + 46) = v28; /*0x5f8726*/
        if ( !v28 || *(unsigned char *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, MEMORY[0x832ABC], v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f8761*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8778*/
        v29 = (SomeVoxelCache *)*((unsigned int *)this + 47); /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f8789*/
          __3_YAXPAX_Z(v29); /*0x5f878f*/
        }
        v30 = __2_YAPAXI_Z(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = File::LoadFileHVA(v30, (int)v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        *((unsigned int *)this + 47) = v31; /*0x5f87ba*/
        if ( !v31 || *(unsigned char *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((unsigned int **)this + 46), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        Vector::Clear((int)v55); /*0x5f8802*/
        v54[0] = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor(v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = *((unsigned int *)this + 514); /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( VoxelAnimType::LoadSection(this, (unsigned char *)this + 504, v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp((unsigned char *)this + 36, MEMORY[0x832AE4]) ) /*0x5f82a1*/
    {
      sprintf(Filename, MEMORY[0x832AE0], (unsigned char *)this + 504); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f82fc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f8310*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f831a*/
      {
        v10 = (WaveClass *)*((unsigned int *)this + 46); /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(*((unsigned int *)this + 46)); /*0x5f8333*/
          __3_YAXPAX_Z(v10); /*0x5f8339*/
        }
        v11 = __2_YAPAXI_Z(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = File::LoadFileVXL(v11, (int)v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        *((unsigned int *)this + 46) = v12; /*0x5f8362*/
        if ( !v12 || *(unsigned char *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, MEMORY[0x832AE0], (unsigned char *)this + 504); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f839d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f83b4*/
        v13 = (SomeVoxelCache *)*((unsigned int *)this + 47); /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f83c5*/
          __3_YAXPAX_Z(v13); /*0x5f83cb*/
        }
        v14 = __2_YAPAXI_Z(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = File::LoadFileHVA(v14, (int)v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        *((unsigned int *)this + 47) = v15; /*0x5f83f6*/
        if ( !v15 || *(unsigned char *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((unsigned int **)this + 46), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        Vector::Clear((int)v55); /*0x5f843e*/
        v54[0] = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8455*/
      }
      v51[0] = &vt_CCFileClass; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      Vector::Clear((int)v52); /*0x5f846a*/
      v51[0] = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor(v51); /*0x5f847b*/
    }
    if ( *((unsigned char *)this + 488) ) /*0x5f8480*/
    {
      sprintf(Filename, MEMORY[0x832AD8], (unsigned char *)this + 504); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f84bc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f84d0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f84da*/
      {
        v17 = (WaveClass *)*((unsigned int *)this + 46); /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(*((unsigned int *)this + 46)); /*0x5f84f3*/
          __3_YAXPAX_Z(v17); /*0x5f84f9*/
        }
        v18 = __2_YAPAXI_Z(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = File::LoadFileVXL(v18, (int)v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        *((unsigned int *)this + 46) = v19; /*0x5f8522*/
        if ( !v19 || *(unsigned char *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, MEMORY[0x832AD8], (unsigned char *)this + 504); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f855d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8574*/
        v20 = (SomeVoxelCache *)*((unsigned int *)this + 47); /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((void ***)this + 47)); /*0x5f8585*/
          __3_YAXPAX_Z(v20); /*0x5f858b*/
        }
        v21 = __2_YAPAXI_Z(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = File::LoadFileHVA(v21, (int)v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        *((unsigned int *)this + 47) = v22; /*0x5f85b6*/
        if ( !v22 || *(unsigned char *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((unsigned int **)this + 46), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((unsigned int **)this + 47), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        Vector::Clear((int)v55); /*0x5f85fe*/
        v54[0] = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8615*/
      }
LABEL_92:
      v51[0] = &vt_CCFileClass; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      Vector::Clear((int)v52); /*0x5f882e*/
      v51[0] = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor(v51); /*0x5f883f*/
    }
  }
LABEL_93:
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 || *((unsigned char *)this + 3233) ) /*0x5f8850*/
  {
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40 /*0x5f8873*/
      && HouseClass::HasPower(this)
      && !*((unsigned char *)this + 3285) )
    {
      v33 = *((unsigned int *)this + 514); /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel(this, (unsigned char *)this + 504, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, MEMORY[0x832AD0], (unsigned char *)this + 504); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(v51, Buffer); /*0x5f88f0*/
      if ( CCFileClass::Open(v51, 0) ) /*0x5f88fa*/
      {
        v35 = (WaveClass *)*((unsigned int *)this + 48); /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(*((unsigned int *)this + 48)); /*0x5f8913*/
          __3_YAXPAX_Z(v35); /*0x5f8919*/
        }
        v36 = __2_YAPAXI_Z(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = File::LoadFileVXL(v36, (int)v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        *((unsigned int *)this + 48) = v37; /*0x5f8942*/
        if ( !v37 || *(unsigned char *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, MEMORY[0x832AD0], (unsigned char *)this + 504); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(v54, Buffer); /*0x5f8994*/
        v38 = (void *)*((unsigned int *)this + 49); /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((void ***)this + 49)); /*0x5f89a5*/
          __3_YAXPAX_Z(v38); /*0x5f89ab*/
        }
        v39 = __2_YAPAXI_Z(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = File::LoadFileHVA(v39, (int)v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        *((unsigned int *)this + 49) = v40; /*0x5f89d6*/
        if ( !v40 || *(unsigned char *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((unsigned int **)this + 48), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((unsigned int **)this + 49), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        v54[0] = &vt_CCFileClass; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        Vector::Clear((int)v55); /*0x5f8a1e*/
        v54[0] = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor(v54); /*0x5f8a35*/
      }
      v51[0] = &vt_CCFileClass; /*0x5f8a3e*/
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
    v42 = (WaveClass *)*((unsigned int *)this + 44); /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(*((unsigned int *)this + 44)); /*0x5f8a76*/
      __3_YAXPAX_Z(v42); /*0x5f8a7c*/
      *((unsigned int *)this + 44) = 0; /*0x5f8a84*/
    }
    v43 = (SomeVoxelCache *)*((unsigned int *)this + 45); /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((void ***)this + 45)); /*0x5f8a96*/
      __3_YAXPAX_Z(v43); /*0x5f8a9c*/
      *((unsigned int *)this + 45) = 0; /*0x5f8aa4*/
    }
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40 /*0x5f8ac1*/
      && HouseClass::HasPower(this)
      && !*((unsigned char *)this + 3285) )
    {
      ObjectTypeClass::CleanupWeapons(this); /*0x5f8acb*/
    }
    else
    {
      v44 = (WaveClass *)*((unsigned int *)this + 46); /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(*((unsigned int *)this + 46)); /*0x5f8ae1*/
        __3_YAXPAX_Z(v44); /*0x5f8ae7*/
        *((unsigned int *)this + 46) = 0; /*0x5f8aef*/
      }
      v45 = (SomeVoxelCache *)*((unsigned int *)this + 47); /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((void ***)this + 47)); /*0x5f8b05*/
        __3_YAXPAX_Z(v45); /*0x5f8b0b*/
        *((unsigned int *)this + 47) = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), 0, 0) + 160); /*0x5f8b35*/
  v48 = (unsigned int *)*((unsigned int *)this + 44); /*0x5f8b37*/
  if ( (int)v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((unsigned int **)this + 44), v46, 0) + 162); /*0x5f8bce*/
      v48 = (unsigned int *)*((unsigned int *)this + 44); /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < v48[1] ); /*0x5f8bda*/
  }
  if ( v47 <= 8 ) /*0x5f8be3*/
    v47 = 8; /*0x5f8be5*/
  *((unsigned int *)this + 123) = v47; /*0x5f8bea*/
  __3_YAXPAX_Z(*((void **)this + 145)); /*0x5f8bf7*/
  *((unsigned int *)this + 145) = 0; /*0x5f8bfc*/
  *((unsigned int *)this + 146) = 0; /*0x5f8c02*/
  *((unsigned int *)this + 147) = 0; /*0x5f8c08*/
  *((unsigned char *)this + 592) = 0; /*0x5f8c0e*/
  *((unsigned int *)this + 149) = 0; /*0x5f8c14*/
  __3_YAXPAX_Z(*((void **)this + 150)); /*0x5f8c21*/
  *((unsigned int *)this + 150) = 0; /*0x5f8c26*/
  *((unsigned int *)this + 151) = 0; /*0x5f8c2c*/
  *((unsigned int *)this + 152) = 0; /*0x5f8c32*/
  *((unsigned char *)this + 612) = 0; /*0x5f8c38*/
  *((unsigned int *)this + 154) = 0; /*0x5f8c3e*/
  __3_YAXPAX_Z(*((void **)this + 155)); /*0x5f8c4b*/
  *((unsigned int *)this + 155) = 0; /*0x5f8c50*/
  *((unsigned int *)this + 156) = 0; /*0x5f8c56*/
  *((unsigned int *)this + 157) = 0; /*0x5f8c5c*/
  *((unsigned char *)this + 632) = 0; /*0x5f8c62*/
  *((unsigned int *)this + 159) = 0; /*0x5f8c68*/
  __3_YAXPAX_Z(*((void **)this + 160)); /*0x5f8c75*/
  *((unsigned int *)this + 160) = 0; /*0x5f8c7d*/
  *((unsigned int *)this + 161) = 0; /*0x5f8c83*/
  *((unsigned int *)this + 162) = 0; /*0x5f8c89*/
  *((unsigned char *)this + 652) = 0; /*0x5f8c8f*/
  *((unsigned int *)this + 164) = 0; /*0x5f8c95*/
LABEL_146:
  v58[0] = &vt_CCFileClass; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  Vector::Clear((int)v59); /*0x5f8cb4*/
  v58[0] = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor(v58); /*0x5f8cd0*/

}
}