// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Matrix2D_e4.hpp"
#include "e4/classes/Matrix_e4.hpp"
#include "e4/classes/VoxelSection_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Turret_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Type_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/TypeList_Particle_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/TiberiumClass_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/TypeList_cptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"

// 0x5F8CE0
namespace gamemd {
AbstractClass * * Turret::LoadVoxelTurretAndBarrel()
{

  int v2; // eax
  void *v3; // edi
  File *v4; // eax
  unsigned int *FileVXL; // eax
  void *v6; // edi
  File *v7; // eax
  unsigned int *FileHVA; // eax
  VoxelSection *v9; // ecx
  int Info; // eax
  void *v11; // edi
  File *v12; // eax
  unsigned int *v13; // eax
  void *v14; // edi
  File *v15; // eax
  unsigned int *v16; // eax
  VoxelSection *v17; // ecx
  int v18; // eax
  CCFileClass v20; // [esp+8h] [ebp-348h] BYREF
  int v21[3]; // [esp+60h] [ebp-2F0h] BYREF
  int v22; // [esp+6Ch] [ebp-2E4h]
  CCFileClass v23; // [esp+74h] [ebp-2DCh] BYREF
  int v24[3]; // [esp+CCh] [ebp-284h] BYREF
  int v25; // [esp+D8h] [ebp-278h]
  CCFileClass v26; // [esp+E0h] [ebp-270h] BYREF
  int v27[3]; // [esp+138h] [ebp-218h] BYREF
  int v28; // [esp+144h] [ebp-20Ch]
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  v2 = (*(int (**)(Turret *))(this->Turret_field_00 + 44))(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (**)(Turret *))(this->Turret_field_00 + 156))(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = *((unsigned char *)this + 3233); /*0x5f8d0a*/
      if ( (unsigned char)v2 ) /*0x5f8d14*/
      {
        sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__VXL)); /*0x5f8d4c*/
        ((CCFileClass*)&v26)->Construct( (char *)(Source)); /*0x5f8d63*/
        if ( (uint8_t)((CCFileClass *)((int)(&v26)))->Open(0) ) /*0x5f8d70*/
        {
          v3 = (void *)*((unsigned int *)this + 46); /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            ((WaveClass*)*((WaveClass **)this + 46))->Destroy(); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            FileVXL = ((File *)(v4))->LoadFileVXL((int)&v26, 0); /*0x5f8db0*/
          else
            FileVXL = (unsigned int *)(0); /*0x5f8db7*/
          *((unsigned int *)this + 46) = (unsigned int)(FileVXL); /*0x5f8dbb*/
          if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f8dc7*/
          {
            sprintf(Buffer, "%sTUR", (const char *)this + 504); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__HVA)); /*0x5f8df9*/
            ((CCFileClass*)&v20)->Construct( (char *)(Source)); /*0x5f8e0d*/
            v6 = (void *)*((unsigned int *)this + 47); /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              ((String*)*((String **)this + 47))->Release(); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              FileHVA = ((File *)(v7))->LoadFileHVA((int)&v20); /*0x5f8e41*/
            else
              FileHVA = (unsigned int *)(0); /*0x5f8e48*/
            v9 = (VoxelSection *)*((unsigned int *)this + 46); /*0x5f8e4a*/
            *((unsigned int *)this + 47) = (unsigned int)(FileHVA); /*0x5f8e52*/
            Info = (unsigned int)(((VoxelSection *)(v9))->GetInfo(0, 0)); /*0x5f8e58*/
            ((Matrix *)(*((Matrix **)this + 47)))->Scale(*(float *)(Info + 12)); /*0x5f8e67*/
            *(unsigned int *)v20.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8e70*/
            v22 = (unsigned int)(0); /*0x5f8e78*/
            ((Vector *)((int)v21))->Clear((int)((Vector *)((int)v21))); /*0x5f8e7c*/
            *(unsigned int *)v20.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8e85*/
            ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__VXL)); /*0x5f8ebc*/
        ((CCFileClass*)&v23)->Construct( (char *)(Source)); /*0x5f8ed0*/
        if ( (uint8_t)((CCFileClass *)((int)(&v23)))->Open(0) ) /*0x5f8edd*/
        {
          v11 = (void *)*((unsigned int *)this + 48); /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            ((WaveClass*)*((WaveClass **)this + 48))->Destroy(); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          v12 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            v13 = ((File *)(v12))->LoadFileVXL((int)&v23, 0); /*0x5f8f1a*/
          else
            v13 = (unsigned int *)(0); /*0x5f8f21*/
          *((unsigned int *)this + 48) = (unsigned int)(v13); /*0x5f8f25*/
          if ( v13 && !*(unsigned char *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, "%sBARL", (const char *)this + 504); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer,(const char *)(g_Str_File__HVA)); /*0x5f8f63*/
            ((CCFileClass*)&v20)->Construct( (char *)(Source)); /*0x5f8f77*/
            v14 = (void *)*((unsigned int *)this + 49); /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              ((String*)*((String **)this + 49))->Release(); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            v15 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              v16 = ((File *)(v15))->LoadFileHVA((int)&v20); /*0x5f8fab*/
            else
              v16 = (unsigned int *)(0); /*0x5f8fb2*/
            v17 = (VoxelSection *)*((unsigned int *)this + 48); /*0x5f8fb4*/
            *((unsigned int *)this + 49) = (unsigned int)(v16); /*0x5f8fbc*/
            v18 = (unsigned int)(((VoxelSection *)(v17))->GetInfo(0, 0)); /*0x5f8fc2*/
            ((Matrix *)(*((Matrix **)this + 49)))->Scale(*(float *)(v18 + 12)); /*0x5f8fd1*/
            *(unsigned int *)v20.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f8fda*/
            v22 = (unsigned int)(0); /*0x5f8fe2*/
            ((Vector *)((int)v21))->Clear((int)((Vector *)((int)v21))); /*0x5f8fe6*/
            *(unsigned int *)v20.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f8fef*/
            ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x5f8ff7*/
          }
        }
        *(unsigned int *)v23.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f9008*/
        v25 = (unsigned int)(0); /*0x5f900c*/
        ((Vector *)((int)v24))->Clear((int)((Vector *)((int)v24))); /*0x5f9013*/
        *(unsigned int *)v23.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f9021*/
        ((BufferIOFileClass *)((BufferIOFileClass *)&v23))->Dtor(); /*0x5f9025*/
        *(unsigned int *)v26.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x5f9031*/
        v28 = (unsigned int)(0); /*0x5f9038*/
        ((Vector *)((int)v27))->Clear((int)((Vector *)((int)v27))); /*0x5f903f*/
        *(unsigned int *)v26.CDFileClass = (unsigned int)(&off_7E1668); /*0x5f904b*/
        LOBYTE(v2) = ((BufferIOFileClass *)((BufferIOFileClass *)&v26))->Dtor(); /*0x5f9052*/
      }
    }
  }
  return (gamemd::AbstractClass **)(v2); /*0x5f9059*/

}
} // namespace gamemd
// 0x55A730
namespace gamemd {
float * Turret::GetTransform(signed int a1, float * a2, unsigned int * a3)
{

  LocomotionClass *v3; // edi
  unsigned int *v4; // esi
  float *result; // eax
  float v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v8; // [esp+10h] [ebp-30h] BYREF

  ((Matrix3x4*)&v8)->Identity(); /*0x55a739*/
  v3 = (gamemd::LocomotionClass *)(a1); /*0x55a73e*/
  a1 = (LocomotionClass *)((((unsigned int)((*((ProgressTimer *)((ProgressTimer *)((unsigned int *)a1->Owner)[0]))->GetValue(&v7) >> 10) + 1) >> 1) /*0x55a763*/
                            & 0x1F)
                           - 8);
  v6 = (double)(int)a1 * -0.1963495408493621; /*0x55a776*/
  ((Matrix2D *)(v8.m_Data))->Rotate(v6); /*0x55a779*/
  v4 = a3; /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*((ProgressTimer *)((ProgressTimer *)((unsigned int *)v3->Owner)[0]))->GetValue(&a1) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
  }
  result = a2; /*0x55a7b6*/
  qmemcpy( (void *)(a2), (const void *)(&v8), 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/

}
} // namespace gamemd
