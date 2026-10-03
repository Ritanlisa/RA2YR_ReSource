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
#include "e4/classes/HouseClass_e4.hpp"

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
  if ( (uint8_t)((CCFileClass *)((int)(&v17)))->Open(0) ) /*0x5f7b1b*/
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
      ((String*)*((String **)this + 2 * a3 + 51))->Release(); /*0x5f7c20*/
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
      Info = (int)((gamemd::AbstractClass **)(((VoxelSection *)(*((VoxelSection **)this + 2 * a3 + 50)))->GetInfo(0, 0)));
      ((Matrix *)(*((Matrix **)this + 2 * a3 + 51)))->Scale(*(float *)(Info + 12)); /*0x5f7c9c*/
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
      return (gamemd::AbstractClass **)(1); /*0x5f7d02*/
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
      ((String*)*((String **)this + 2 * a3 + 51))->Release(); /*0x5f7d34*/
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
AbstractClass * * VoxelAnimType::LoadBarrel(const char *a2, int a3)
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
  if ( (uint8_t)((CCFileClass *)((int)(&v14)))->Open(0) ) /*0x5f7e3b*/
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
      Info = (unsigned int)(((VoxelSection *)(*((VoxelSection **)this + 2 * a3 + 86)))->GetInfo(0, 0));
      ((Matrix *)(*((Matrix **)this + 2 * a3 + 87)))->Scale(*(float *)(Info + 12)); /*0x5f7f7a*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7f8b*/
      v19 = 0; /*0x5f7f92*/
      ((Vector *)((int)v18))->Clear(); /*0x5f7f99*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7faa*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x5f7fb1*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7fba*/
      v16 = 0; /*0x5f7fbe*/
      ((Vector *)((int)v15))->Clear(); /*0x5f7fc2*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7fcb*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v14))->Dtor(); /*0x5f7fcf*/
      return (gamemd::AbstractClass **)(1); /*0x5f7fd7*/
    }
    else
    {
      v11 = (void *)*((unsigned int *)this + 2 * a3 + 86); /*0x5f7fe3*/
      if ( v11 ) /*0x5f7fee*/
      {
        ((WaveClass*)*((WaveClass **)this + 2 * a3 + 86))->Destroy(); /*0x5f7ff2*/
        __3_YAXPAX_Z(v11); /*0x5f7ff8*/
      }
      v12 = (String *)*((unsigned int *)this + 2 * a3 + 87); /*0x5f8000*/
      if ( v12 ) /*0x5f8009*/
      {
        ((String*)v12)->Release(); /*0x5f800d*/
        __3_YAXPAX_Z(v12); /*0x5f8013*/
      }
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8027*/
      v19 = 0; /*0x5f802e*/
      ((Vector *)((int)v18))->Clear(); /*0x5f8035*/
      *(unsigned int *)v17.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8046*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v17))->Dtor(); /*0x5f804d*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8056*/
      v16 = 0; /*0x5f805a*/
      ((Vector *)((int)v15))->Clear(); /*0x5f805e*/
      *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8067*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v14))->Dtor(); /*0x5f806b*/
      return 0; /*0x5f8073*/
    }
  }
  else
  {
    *(unsigned int *)v14.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f7e48*/
    v16 = 0; /*0x5f7e50*/
    ((Vector *)((int)v15))->Clear(); /*0x5f7e54*/
    *(unsigned int *)v14.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f7e5d*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v14))->Dtor(); /*0x5f7e65*/
    return (gamemd::AbstractClass **)(1); /*0x5f7e6d*/
  }

}
}
// 0x5F8110
namespace gamemd {
int VoxelAnimType::LoadAnim()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5F8110)
}
}