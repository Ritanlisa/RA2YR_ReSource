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
#include "e4/classes/Matrix_e4.hpp"
#include "e4/classes/VoxelSection_e4.hpp"

// 0x5F7A90
namespace gamemd {
AbstractClass * * VoxelAnimType::LoadSection(const char *a2, int a3)
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
  _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__VXL)); /*0x5f7afd*/
  ((CCFileClass *)(&v17))->Construct(Source); /*0x5f7b11*/
  if ( (uint8_t)CCFileClass::Open((int)(&v17), 0) ) /*0x5f7b1b*/
  {
    v4 = (void *)*((unsigned int *)this + 2 * a3 + 50); /*0x5f7b46*/
    if ( v4 ) /*0x5f7b4f*/
    {
      ((WaveClass *)(*((WaveClass **)this + 2 * a3 + 50)))->Destroy(); /*0x5f7b53*/
      __3_YAXPAX_Z(v4); /*0x5f7b59*/
      *((unsigned int *)this + 2 * a3 + 50) = 0; /*0x5f7b61*/
    }
    v16 = (unsigned int)(0);
    v5 = (gamemd::File *)((unsigned int)((File *)__2_YAPAXI_Z(0x1Cu)));
    if ( v5 ) /*0x5f7b78*/
      FileVXL = ((File *)(v5))->LoadFileVXL((int)&v17, 0); /*0x5f7b82*/
    else
      FileVXL = 0; /*0x5f7b89*/
    *((unsigned int *)this + 2 * a3 + 50) = (unsigned int)(FileVXL); /*0x5f7b8d*/
    if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f7b96*/
      v16 = 1; /*0x5f7b9a*/
    if ( a3 ) /*0x5f7ba1*/
      sprintf(Buffer, "%sTUR%d", a2, a3); /*0x5f7bd8*/
    else
      sprintf(Buffer, "%sTUR", a2); /*0x5f7bb8*/
    _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__HVA)); /*0x5f7bf7*/
    ((CCFileClass *)(&v20))->Construct(Source); /*0x5f7c0e*/
    v7 = (void *)*((unsigned int *)this + 2 * a3 + 51); /*0x5f7c13*/
    if ( v7 ) /*0x5f7c1c*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7c20*/
      __3_YAXPAX_Z(v7); /*0x5f7c26*/
      *((unsigned int *)this + 2 * a3 + 51) = 0; /*0x5f7c2e*/
    }
    v8 = (gamemd::File *)((unsigned int)((File *)__2_YAPAXI_Z(0x10u)));
    if ( v8 ) /*0x5f7c45*/
      FileHVA = ((File *)(v8))->LoadFileHVA((int)&v20); /*0x5f7c51*/
    else
      FileHVA = 0; /*0x5f7c58*/
    *((unsigned int *)this + 2 * a3 + 51) = (unsigned int)(FileHVA); /*0x5f7c5c*/
    if ( !FileHVA || (v10 = *(unsigned char *)FileHVA, v11 = 1, v10) ) /*0x5f7c6b*/
      v11 = 0; /*0x5f7c6d*/
    if ( v16 && v11 ) /*0x5f7c7d*/
    {
      Info = (gamemd::AbstractClass **)(VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 50), 0, 0));
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 51), *(float *)(Info + 12)); /*0x5f7c9c*/
      *(unsigned int *)v20.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7cad*/
      v22 = 0; /*0x5f7cb4*/
      ((Vector *)((int)v21))->Clear(); /*0x5f7cbb*/
      *(unsigned int *)v20.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7ccc*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x5f7cd3*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7cdc*/
      v19 = 0; /*0x5f7ce0*/
      ((Vector *)((int)v18))->Clear(); /*0x5f7ce4*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7ced*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x5f7cf1*/
      return 1; /*0x5f7d02*/
    }
    v14 = (void *)*((unsigned int *)this + 2 * a3 + 50); /*0x5f7d05*/
    if ( v14 ) /*0x5f7d0e*/
    {
      ((WaveClass *)(*((WaveClass **)this + 2 * a3 + 50)))->Destroy(); /*0x5f7d12*/
      __3_YAXPAX_Z(v14); /*0x5f7d18*/
      *((unsigned int *)this + 2 * a3 + 50) = 0; /*0x5f7d20*/
    }
    v15 = (void *)*((unsigned int *)this + 2 * a3 + 51); /*0x5f7d27*/
    if ( v15 ) /*0x5f7d30*/
    {
      String::Release(*((String **)this + 2 * a3 + 51)); /*0x5f7d34*/
      __3_YAXPAX_Z(v15); /*0x5f7d3a*/
      *((unsigned int *)this + 2 * a3 + 51) = 0; /*0x5f7d42*/
    }
    *(unsigned int *)v20.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7d55*/
    v22 = 0; /*0x5f7d5c*/
    ((Vector *)((int)v21))->Clear(); /*0x5f7d63*/
    *(unsigned int *)v20.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7d74*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x5f7d7b*/
    *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7d84*/
    v19 = 0; /*0x5f7d88*/
    ((Vector *)((int)v18))->Clear(); /*0x5f7d8c*/
    *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7d91*/
  }
  else
  {
    *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7b28*/
    v19 = 0; /*0x5f7b30*/
    ((Vector *)((int)v18))->Clear(); /*0x5f7b34*/
    *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7b39*/
  }
  ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x5f7d99*/
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
  _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__VXL)); /*0x5f7e1d*/
  ((CCFileClass *)(&v14))->Construct(Source); /*0x5f7e31*/
  if ( (uint8_t)CCFileClass::Open((int)(&v14), 0) ) /*0x5f7e3b*/
  {
    v13 = (unsigned int)(0);
    v5 = (gamemd::File *)((unsigned int)((File *)__2_YAPAXI_Z(0x1Cu)));
    if ( v5 ) /*0x5f7e8a*/
      FileVXL = ((File *)(v5))->LoadFileVXL((int)&v14, 0); /*0x5f7e94*/
    else
      FileVXL = 0; /*0x5f7e9b*/
    *((unsigned int *)this + 2 * a3 + 86) = (unsigned int)(FileVXL); /*0x5f7e9f*/
    if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f7ea8*/
      v13 = 1; /*0x5f7ead*/
    if ( a3 ) /*0x5f7eb4*/
      sprintf(Buffer, "%sBARL%d", a2, a3); /*0x5f7edd*/
    else
      sprintf(Buffer, "%sBARL", a2); /*0x5f7ec4*/
    _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__HVA)); /*0x5f7efc*/
    ((CCFileClass *)(&v17))->Construct(Source); /*0x5f7f13*/
    v7 = 0; /*0x5f7f1a*/
    v8 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f7f1c*/
    if ( v8 ) /*0x5f7f26*/
      FileHVA = ((File *)(v8))->LoadFileHVA((int)&v17); /*0x5f7f32*/
    else
      FileHVA = 0; /*0x5f7f39*/
    *((unsigned int *)this + 2 * a3 + 87) = (unsigned int)(FileHVA); /*0x5f7f3d*/
    if ( FileHVA && !*(unsigned char *)FileHVA ) /*0x5f7f46*/
      v7 = 1; /*0x5f7f4b*/
    if ( v13 && v7 ) /*0x5f7f5b*/
    {
      Info = (unsigned int)(VoxelSection::GetInfo(*((VoxelSection **)this + 2 * a3 + 86), 0, 0));
      Matrix::Scale(*((Matrix **)this + 2 * a3 + 87), *(float *)(Info + 12)); /*0x5f7f7a*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7f8b*/
      v19 = 0; /*0x5f7f92*/
      ((Vector *)((int)v18))->Clear(); /*0x5f7f99*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7faa*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x5f7fb1*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7fba*/
      v16 = 0; /*0x5f7fbe*/
      ((Vector *)((int)v15))->Clear(); /*0x5f7fc2*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7fcb*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7fcf*/
      return 1; /*0x5f7fd7*/
    }
    else
    {
      v11 = (void *)*((unsigned int *)this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v11 ) /*0x5f7fee*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 2 * a3 + 86)); /*0x5f7ff2*/
        __3_YAXPAX_Z(v11); /*0x5f7ff8*/
      }
      v12 = (String *)*((unsigned int *)this + 2 * a3 + 87); /*0x5f8000*/
      if ( v12 ) /*0x5f8009*/
      {
        String::Release(v12); /*0x5f800d*/
        __3_YAXPAX_Z(v12); /*0x5f8013*/
      }
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8027*/
      v19 = 0; /*0x5f802e*/
      ((Vector *)((int)v18))->Clear(); /*0x5f8035*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8046*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v17); /*0x5f804d*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8056*/
      v16 = 0; /*0x5f805a*/
      ((Vector *)((int)v15))->Clear(); /*0x5f805e*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8067*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7e48*/
    v16 = 0; /*0x5f7e50*/
    ((Vector *)((int)v15))->Clear(); /*0x5f7e54*/
    *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7e5d*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14); /*0x5f7e65*/
    return 1; /*0x5f7e6d*/
  }

}
}
// 0x5F8110
namespace gamemd {
int VoxelAnimType::LoadAnim(void *a1_1)
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

  v2 = (const char *)((unsigned char *)this + 504); /*0x5f811e*/
  v50 = 0; /*0x5f8134*/
  _makepath(Buffer, 0, 0,(const char *)((unsigned char *)this + 504), g_Str_File__VXL); /*0x5f8138*/
  CCFileClass::Construct(&v58, Buffer); /*0x5f814f*/
  if ( (uint8_t)CCFileClass::Open((int)(&v58), 0) ) /*0x5f815c*/
  {
    v3 = (void *)*((unsigned int *)this + 44); /*0x5f8169*/
    if ( v3 ) /*0x5f8171*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8175*/
      __3_YAXPAX_Z(v3); /*0x5f817b*/
    }
    v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8185*/
    if ( v4 ) /*0x5f818f*/
      FileVXL = ((File *)(v4))->LoadFileVXL((int)&v58, 0); /*0x5f819c*/
    else
      FileVXL = 0; /*0x5f81a3*/
    *((unsigned int *)this + 44) = (unsigned int)(FileVXL); /*0x5f81a7*/
    if ( !FileVXL || *(unsigned char *)FileVXL ) /*0x5f81af*/
      v50 = 1; /*0x5f81b3*/
    _makepath(Buffer, 0, 0, v2,(const char *)(g_Str_File__HVA)); /*0x5f81c8*/
    CCFileClass::Construct(&v51, Buffer); /*0x5f81dc*/
    v6 = (void *)*((unsigned int *)this + 45); /*0x5f81e1*/
    if ( v6 ) /*0x5f81e9*/
    {
      String::Release(*((String **)this + 45)); /*0x5f81ed*/
      __3_YAXPAX_Z(v6); /*0x5f81f3*/
    }
    v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f81fd*/
    if ( v7 ) /*0x5f8207*/
      FileHVA = ((File *)(v7))->LoadFileHVA((int)&v51); /*0x5f8210*/
    else
      FileHVA = 0; /*0x5f8217*/
    *((unsigned int *)this + 45) = (unsigned int)(FileHVA); /*0x5f821b*/
    if ( !FileHVA || *(unsigned char *)FileHVA ) /*0x5f8223*/
    {
      v50 = 1; /*0x5f8245*/
    }
    else
    {
      Info = VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0); /*0x5f822f*/
      Matrix::Scale(*((Matrix **)this + 45), *(float *)(Info + 12)); /*0x5f823e*/
    }
    *(unsigned int *)v51.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f824e*/
    v53 = 0; /*0x5f8256*/
    ((Vector *)((int)v52))->Clear(); /*0x5f825a*/
    *(unsigned int *)v51.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8263*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f826b*/
  }
  else
  {
    v50 = 1; /*0x5f8272*/
  }
  if ( (*(int ((char *)(**))(char *))(*(unsigned int *)this + 44))(this) != 40 || *((unsigned char *)this + 3233) ) /*0x5f8287*/
  {
    if ( (*(int ((char *)(**))(char *))(*(unsigned int *)this + 44))(this) != 40 /*0x5f8657*/
      || !(uint8_t)HouseClass::HasPower((HouseClass *)this)
      || *((unsigned char *)this + 3285) )
    {
      sprintf(Filename, "%sTUR", v2); /*0x5f86a4*/
      _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__VXL)); /*0x5f86c0*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f86d4*/
      if ( (uint8_t)CCFileClass::Open((int)(&v51), 0) ) /*0x5f86de*/
      {
        v26 = (void *)*((unsigned int *)this + 46); /*0x5f86eb*/
        if ( v26 ) /*0x5f86f3*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f86f7*/
          __3_YAXPAX_Z(v26); /*0x5f86fd*/
        }
        v27 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8707*/
        if ( v27 ) /*0x5f8711*/
          v28 = ((File *)(v27))->LoadFileVXL((int)&v51, 0); /*0x5f871b*/
        else
          v28 = 0; /*0x5f8722*/
        *((unsigned int *)this + 46) = v28; /*0x5f8726*/
        if ( !v28 || *(unsigned char *)v28 ) /*0x5f872e*/
          v50 = 1; /*0x5f8732*/
        sprintf(Filename, "%sTUR", v2); /*0x5f8745*/
        _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__HVA)); /*0x5f8761*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8778*/
        v29 = (void *)*((unsigned int *)this + 47); /*0x5f877d*/
        if ( v29 ) /*0x5f8785*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8789*/
          __3_YAXPAX_Z(v29); /*0x5f878f*/
        }
        v30 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8799*/
        if ( v30 ) /*0x5f87a3*/
          v31 = ((File *)(v30))->LoadFileHVA((int)&v54); /*0x5f87af*/
        else
          v31 = 0; /*0x5f87b6*/
        *((unsigned int *)this + 47) = v31; /*0x5f87ba*/
        if ( !v31 || *(unsigned char *)v31 ) /*0x5f87c2*/
        {
          v50 = 1; /*0x5f87e4*/
        }
        else
        {
          v32 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f87ce*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v32 + 12)); /*0x5f87dd*/
        }
        *(unsigned int *)v54.CDFileClass = &vt_CCFileClass; /*0x5f87f0*/
        v56 = 0; /*0x5f87fb*/
        ((Vector *)((int)v55))->Clear(); /*0x5f8802*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f880e*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8819*/
      }
      goto LABEL_92; /*0x5f8819*/
    }
    v24 = *((unsigned int *)this + 514); /*0x5f865f*/
    v25 = 0; /*0x5f8665*/
    if ( v24 > 0 ) /*0x5f8669*/
    {
      while ( ((VoxelAnimType *)((VoxelAnimType *)this))->LoadSection((const char *)((unsigned char *)this + 504), v25) ) /*0x5f8680*/
      {
        if ( ++v25 >= v24 ) /*0x5f8685*/
          goto LABEL_93; /*0x5f8685*/
      }
      v50 = 1; /*0x5f868c*/
    }
  }
  else
  {
    if ( !strcmp((const char *)((unsigned char *)this + 36), "APC") ) /*0x5f82a1*/
    {
      sprintf(Filename, off_832AE0, (unsigned char *)this + 504); /*0x5f82e0*/
      _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__VXL)); /*0x5f82fc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f8310*/
      if ( (uint8_t)CCFileClass::Open((int)(&v51), 0) ) /*0x5f831a*/
      {
        v10 = (void *)*((unsigned int *)this + 46); /*0x5f8327*/
        if ( v10 ) /*0x5f832f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8333*/
          __3_YAXPAX_Z(v10); /*0x5f8339*/
        }
        v11 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8343*/
        if ( v11 ) /*0x5f834d*/
          v12 = ((File *)(v11))->LoadFileVXL((int)&v51, 0); /*0x5f8357*/
        else
          v12 = 0; /*0x5f835e*/
        *((unsigned int *)this + 46) = v12; /*0x5f8362*/
        if ( !v12 || *(unsigned char *)v12 ) /*0x5f836a*/
          v50 = 1; /*0x5f836e*/
        sprintf(Filename, off_832AE0, (unsigned char *)this + 504); /*0x5f8381*/
        _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__HVA)); /*0x5f839d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f83b4*/
        v13 = (void *)*((unsigned int *)this + 47); /*0x5f83b9*/
        if ( v13 ) /*0x5f83c1*/
        {
          String::Release(*((String **)this + 47)); /*0x5f83c5*/
          __3_YAXPAX_Z(v13); /*0x5f83cb*/
        }
        v14 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f83d5*/
        if ( v14 ) /*0x5f83df*/
          v15 = ((File *)(v14))->LoadFileHVA((int)&v54); /*0x5f83eb*/
        else
          v15 = 0; /*0x5f83f2*/
        *((unsigned int *)this + 47) = v15; /*0x5f83f6*/
        if ( !v15 || *(unsigned char *)v15 ) /*0x5f83fe*/
        {
          v50 = 1; /*0x5f8420*/
        }
        else
        {
          v16 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f840a*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v16 + 12)); /*0x5f8419*/
        }
        *(unsigned int *)v54.CDFileClass = &vt_CCFileClass; /*0x5f842c*/
        v56 = 0; /*0x5f8437*/
        ((Vector *)((int)v55))->Clear(); /*0x5f843e*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f844a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8455*/
      }
      *(unsigned int *)v51.CDFileClass = &vt_CCFileClass; /*0x5f845e*/
      v53 = 0; /*0x5f8466*/
      ((Vector *)((int)v52))->Clear(); /*0x5f846a*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8473*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f847b*/
    }
    if ( *((unsigned char *)this + 488) ) /*0x5f8480*/
    {
      sprintf(Filename, "%sWO", (unsigned char *)this + 504); /*0x5f84a0*/
      _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__VXL)); /*0x5f84bc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f84d0*/
      if ( (uint8_t)CCFileClass::Open((int)(&v51), 0) ) /*0x5f84da*/
      {
        v17 = (void *)*((unsigned int *)this + 46); /*0x5f84e7*/
        if ( v17 ) /*0x5f84ef*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f84f3*/
          __3_YAXPAX_Z(v17); /*0x5f84f9*/
        }
        v18 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8503*/
        if ( v18 ) /*0x5f850d*/
          v19 = ((File *)(v18))->LoadFileVXL((int)&v51, 0); /*0x5f8517*/
        else
          v19 = 0; /*0x5f851e*/
        *((unsigned int *)this + 46) = v19; /*0x5f8522*/
        if ( !v19 || *(unsigned char *)v19 ) /*0x5f852a*/
          v50 = 1; /*0x5f852e*/
        sprintf(Filename, "%sWO", (unsigned char *)this + 504); /*0x5f8541*/
        _makepath(Buffer, 0, 0, Filename,(const char *)(g_Str_File__HVA)); /*0x5f855d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8574*/
        v20 = (void *)*((unsigned int *)this + 47); /*0x5f8579*/
        if ( v20 ) /*0x5f8581*/
        {
          String::Release(*((String **)this + 47)); /*0x5f8585*/
          __3_YAXPAX_Z(v20); /*0x5f858b*/
        }
        v21 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8595*/
        if ( v21 ) /*0x5f859f*/
          v22 = ((File *)(v21))->LoadFileHVA((int)&v54); /*0x5f85ab*/
        else
          v22 = 0; /*0x5f85b2*/
        *((unsigned int *)this + 47) = v22; /*0x5f85b6*/
        if ( !v22 || *(unsigned char *)v22 ) /*0x5f85be*/
        {
          v50 = 1; /*0x5f85e0*/
        }
        else
        {
          v23 = VoxelSection::GetInfo(*((VoxelSection **)this + 46), 0, 0); /*0x5f85ca*/
          Matrix::Scale(*((Matrix **)this + 47), *(float *)(v23 + 12)); /*0x5f85d9*/
        }
        *(unsigned int *)v54.CDFileClass = &vt_CCFileClass; /*0x5f85ec*/
        v56 = 0; /*0x5f85f7*/
        ((Vector *)((int)v55))->Clear(); /*0x5f85fe*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f860a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8615*/
      }
LABEL_92:
      *(unsigned int *)v51.CDFileClass = &vt_CCFileClass; /*0x5f881e*/
      v53 = 0; /*0x5f882a*/
      ((Vector *)((int)v52))->Clear(); /*0x5f882e*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8833*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f883f*/
    }
  }
LABEL_93:
  if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) != 40 || *((unsigned char *)this + 3233) ) /*0x5f8850*/
  {
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40 /*0x5f8873*/
      && (uint8_t)HouseClass::HasPower((HouseClass *)this)
      && !*((unsigned char *)this + 3285) )
    {
      v33 = *((unsigned int *)this + 514); /*0x5f887b*/
      v34 = 0; /*0x5f8881*/
      if ( v33 > 0 ) /*0x5f8885*/
      {
        while ( VoxelAnimType::LoadBarrel((VoxelAnimType *)this, (unsigned char *)this + 504, v34) ) /*0x5f889c*/
        {
          if ( ++v34 >= v33 ) /*0x5f88a5*/
            goto LABEL_122; /*0x5f88a5*/
        }
        goto LABEL_123; /*0x5f889c*/
      }
    }
    else
    {
      sprintf(Filename, "%sBARL", (unsigned char *)this + 504); /*0x5f88c0*/
      _makepath(Buffer, 0, 0, Filename, g_Str_File__VXL); /*0x5f88dc*/
      CCFileClass::Construct(&v51, Buffer); /*0x5f88f0*/
      if ( (uint8_t)CCFileClass::Open(&v51, 0) ) /*0x5f88fa*/
      {
        v35 = (void *)*((unsigned int *)this + 48); /*0x5f8907*/
        if ( v35 ) /*0x5f890f*/
        {
          WaveClass::Destroy(*((WaveClass **)this + 48)); /*0x5f8913*/
          __3_YAXPAX_Z(v35); /*0x5f8919*/
        }
        v36 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8923*/
        if ( v36 ) /*0x5f892d*/
          v37 = ((File *)(v36))->LoadFileVXL((int)&v51, 0); /*0x5f8937*/
        else
          v37 = 0; /*0x5f893e*/
        *((unsigned int *)this + 48) = v37; /*0x5f8942*/
        if ( !v37 || *(unsigned char *)v37 ) /*0x5f894a*/
          v50 = 1; /*0x5f894e*/
        sprintf(Filename, "%sBARL", (unsigned char *)this + 504); /*0x5f8961*/
        _makepath(Buffer, 0, 0, Filename, g_Str_File__HVA); /*0x5f897d*/
        CCFileClass::Construct(&v54, Buffer); /*0x5f8994*/
        v38 = (void *)*((unsigned int *)this + 49); /*0x5f8999*/
        if ( v38 ) /*0x5f89a1*/
        {
          String::Release(*((String **)this + 49)); /*0x5f89a5*/
          __3_YAXPAX_Z(v38); /*0x5f89ab*/
        }
        v39 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f89b5*/
        if ( v39 ) /*0x5f89bf*/
          v40 = ((File *)(v39))->LoadFileHVA((int)&v54); /*0x5f89cb*/
        else
          v40 = 0; /*0x5f89d2*/
        *((unsigned int *)this + 49) = v40; /*0x5f89d6*/
        if ( !v40 || *(unsigned char *)v40 ) /*0x5f89de*/
        {
          v50 = 1; /*0x5f8a00*/
        }
        else
        {
          v41 = VoxelSection::GetInfo(*((VoxelSection **)this + 48), 0, 0); /*0x5f89ea*/
          Matrix::Scale(*((Matrix **)this + 49), *(float *)(v41 + 12)); /*0x5f89f9*/
        }
        *(unsigned int *)v54.CDFileClass = &vt_CCFileClass; /*0x5f8a0c*/
        v56 = 0; /*0x5f8a17*/
        ((Vector *)((int)v55))->Clear(); /*0x5f8a1e*/
        *(unsigned int *)v54.CDFileClass = &off_7E1668; /*0x5f8a2a*/
        BufferIOFileClass::Dtor((BufferIOFileClass *)&v54); /*0x5f8a35*/
      }
      *(unsigned int *)v51.CDFileClass = &vt_CCFileClass; /*0x5f8a3e*/
      v53 = 0; /*0x5f8a46*/
      ((Vector *)((int)v52))->Clear(); /*0x5f8a4a*/
      *(unsigned int *)v51.CDFileClass = &off_7E1668; /*0x5f8a53*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v51); /*0x5f8a5b*/
    }
  }
LABEL_122:
  if ( v50 ) /*0x5f8a64*/
  {
LABEL_123:
    v42 = (void *)*((unsigned int *)this + 44); /*0x5f8a6a*/
    if ( v42 ) /*0x5f8a72*/
    {
      WaveClass::Destroy(*((WaveClass **)this + 44)); /*0x5f8a76*/
      __3_YAXPAX_Z(v42); /*0x5f8a7c*/
      *((unsigned int *)this + 44) = 0; /*0x5f8a84*/
    }
    v43 = (void *)*((unsigned int *)this + 45); /*0x5f8a8a*/
    if ( v43 ) /*0x5f8a92*/
    {
      String::Release(*((String **)this + 45)); /*0x5f8a96*/
      __3_YAXPAX_Z(v43); /*0x5f8a9c*/
      *((unsigned int *)this + 45) = 0; /*0x5f8aa4*/
    }
    if ( (*(int (**)(char *))(*(unsigned int *)this + 44))(this) == 40 /*0x5f8ac1*/
      && (uint8_t)HouseClass::HasPower((HouseClass *)this)
      && !*((unsigned char *)this + 3285) )
    {
      ObjectTypeClass::CleanupWeapons(this); /*0x5f8acb*/
    }
    else
    {
      v44 = (void *)*((unsigned int *)this + 46); /*0x5f8ad5*/
      if ( v44 ) /*0x5f8add*/
      {
        WaveClass::Destroy(*((WaveClass **)this + 46)); /*0x5f8ae1*/
        __3_YAXPAX_Z(v44); /*0x5f8ae7*/
        *((unsigned int *)this + 46) = 0; /*0x5f8aef*/
      }
      v45 = (void *)*((unsigned int *)this + 47); /*0x5f8af5*/
      if ( v45 ) /*0x5f8afd*/
      {
        String::Release(*((String **)this + 47)); /*0x5f8b05*/
        __3_YAXPAX_Z(v45); /*0x5f8b0b*/
        *((unsigned int *)this + 47) = 0; /*0x5f8b13*/
      }
    }
    goto LABEL_146; /*0x5f8ad0*/
  }
  v46 = 0; /*0x5f8b2d*/
  v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), 0, 0) + 160); /*0x5f8b35*/
  v48 = (VoxelSection *)*((unsigned int *)this + 44); /*0x5f8b37*/
  if ( *(unsigned int *)&v48[1] > 0 ) /*0x5f8b40*/
  {
    do /*0x5f8bda*/
    {
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(v48, v46, 0) + 160) ) /*0x5f8b57*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 160); /*0x5f8b6e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161) ) /*0x5f8b87*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 161); /*0x5f8b9e*/
      if ( v47 <= *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162) ) /*0x5f8bb7*/
        v47 = *(uint8_t *)(VoxelSection::GetInfo(*((VoxelSection **)this + 44), v46, 0) + 162); /*0x5f8bce*/
      v48 = (VoxelSection *)*((unsigned int *)this + 44); /*0x5f8bd0*/
      ++v46; /*0x5f8bd6*/
    }
    while ( v46 < *(unsigned int *)&v48[1] ); /*0x5f8bda*/
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
  *(unsigned int *)v58.CDFileClass = &vt_CCFileClass; /*0x5f8c9b*/
  v60 = 0; /*0x5f8cad*/
  ((Vector *)((int)v59))->Clear(); /*0x5f8cb4*/
  *(unsigned int *)v58.CDFileClass = &off_7E1668; /*0x5f8cc0*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v58); /*0x5f8cd0*/

}
}