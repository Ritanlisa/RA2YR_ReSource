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
namespace gamemd {  // G42.18 ns repair
AbstractClass * * Turret::LoadVoxelTurretAndBarrel()
{

  CCFileClass v20; // [esp+8h] [ebp-348h] BYREF
  int v21[3]; // [esp+60h] [ebp-2F0h] BYREF
  int v22; // [esp+6Ch] [ebp-2E4h]
  CCFileClass v23; // [esp+74h] [ebp-2DCh] BYREF
  CCFileClass v26; // [esp+E0h] [ebp-270h] BYREF

  int v2; // eax
  v2 = (*(int (**)(Turret *))(this->Turret_field_00 + 44))(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (**)(Turret *))(this->Turret_field_00 + 156))(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = this->u32_CA1; /*0x5f8d0a*/
      if ( (unsigned char)v2 ) /*0x5f8d14*/
      {
        char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
        sprintf(Buffer, "%sTUR", (const char *)&this->q0324); /*0x5f8d30*/
        char Source[260]; // [esp+24Ch] [ebp-104h] BYREF
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
        CCFileClass::Construct(&v26, Source); /*0x5f8d63*/
        if ( (unsigned __int8)(&v26)->Open(0) ) /*0x5f8d70*/
        {
          void *v3; // edi
          v3 = (void *)this->u32_B8; /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            (this->WaveClass_B86)->Destroy()); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          File *v4; // eax
          v4 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          unsigned int *FileVXL; // eax
          if ( v4 ) /*0x5f8da3*/
            FileVXL = File::LoadFileVXL(v4, (int)&v26, 0); /*0x5f8db0*/
          else
            FileVXL = 0; /*0x5f8db7*/
          this->u32_B8 = (unsigned int)(FileVXL); /*0x5f8dbb*/
          if ( FileVXL && !*(unsigned char *)FileVXL ) /*0x5f8dc7*/
          {
            sprintf(Buffer, "%sTUR", (const char *)&this->q0324); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(&v20, Source); /*0x5f8e0d*/
            void *v6; // edi
            v6 = (void *)this->u32_BC; /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              (this->String_BC7)->Release()); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            File *v7; // eax
            v7 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            unsigned int *FileHVA; // eax
            if ( v7 ) /*0x5f8e38*/
              FileHVA = File::LoadFileHVA(v7, (int)&v20); /*0x5f8e41*/
            else
              FileHVA = 0; /*0x5f8e48*/
            VoxelSection *v9; // ecx
            v9 = (VoxelSection *)this->u32_B8; /*0x5f8e4a*/
            this->u32_BC = (unsigned int)(FileHVA); /*0x5f8e52*/
            int Info; // eax
            Info = (v9)->GetInfo(0, 0); /*0x5f8e58*/
            Matrix::Scale(this->Matrix_B87), *(float *)(Info + 12)); /*0x5f8e67*/
            *(unsigned int *)v20.CDFileClass = &vt_CCFileClass; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            *(unsigned int *)v20.CDFileClass = &off_7E1668; /*0x5f8e85*/
            ((BufferIOFileClass *)&v20)->Dtor(); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, "%sBARL", &this->AbstractClass_1F8); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
        CCFileClass::Construct(&v23, Source); /*0x5f8ed0*/
        if ( (unsigned __int8)(&v23)->Open(0) ) /*0x5f8edd*/
        {
          void *v11 = this->u32_C0; // edi /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            (this->u32_C0)->Destroy(); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          File *v12; // eax
          v12 = (File *)__2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          unsigned int *v13; // eax
          if ( v12 ) /*0x5f8f10*/
            v13 = File::LoadFileVXL(v12, (int)&v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          this->u32_C0 = v13; /*0x5f8f25*/
          if ( v13 && !*(unsigned char *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, "%sBARL", &this->AbstractClass_1F8); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(&v20, Source); /*0x5f8f77*/
            void *v14 = this->u32_C4; // edi /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              (this->u32_C4)->Release(); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            File *v15; // eax
            v15 = (File *)__2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            unsigned int *v16; // eax
            if ( v15 ) /*0x5f8fa2*/
              v16 = File::LoadFileHVA(v15, (int)&v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            VoxelSection *v17; // ecx
            v17 = (VoxelSection *)this->u32_C0; /*0x5f8fb4*/
            this->u32_C4 = v16; /*0x5f8fbc*/
            int v18; // eax
            v18 = (v17)->GetInfo(0, 0); /*0x5f8fc2*/
            (this->u32_C4)->Scale(*(float *)(v18 + 12)); /*0x5f8fd1*/
            *(unsigned int *)v20.CDFileClass = &vt_CCFileClass; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            *(unsigned int *)v20.CDFileClass = &off_7E1668; /*0x5f8fef*/
            ((BufferIOFileClass *)&v20)->Dtor(); /*0x5f8ff7*/
          }
        }
        *(unsigned int *)v23.CDFileClass = &vt_CCFileClass; /*0x5f9008*/
        int v25; // [esp+D8h] [ebp-278h]
        v25 = 0; /*0x5f900c*/
        int v24[3]; // [esp+CCh] [ebp-284h] BYREF
        Vector::Clear((int)v24); /*0x5f9013*/
        *(unsigned int *)v23.CDFileClass = &off_7E1668; /*0x5f9021*/
        ((BufferIOFileClass *)&v23)->Dtor(); /*0x5f9025*/
        *(unsigned int *)v26.CDFileClass = &vt_CCFileClass; /*0x5f9031*/
        int v28; // [esp+144h] [ebp-20Ch]
        v28 = 0; /*0x5f9038*/
        int v27[3]; // [esp+138h] [ebp-218h] BYREF
        Vector::Clear((int)v27); /*0x5f903f*/
        *(unsigned int *)v26.CDFileClass = &off_7E1668; /*0x5f904b*/
        LOBYTE(v2) = ((BufferIOFileClass *)&v26)->Dtor(); /*0x5f9052*/
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
  Matrix3x4 v8; // [esp+10h] [ebp-30h] BYREF

  (&v8)->Identity(); /*0x55a739*/
  LocomotionClass *v3; // edi
  v3 = (gamemd::LocomotionClass *)(a1); /*0x55a73e*/
  int v7; // [esp+Ch] [ebp-34h] BYREF
  a1 = (LocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue( /*0x55a763*/
                                                  (ProgressTimer *)a1->Owner->primaryFacing,
                                                  &v7) >> 10)
  + 1) >> 1)
  & 0x1F)
  - 8);
  float v6; // [esp+0h] [ebp-40h]
  v6 = (double)(int)a1 * -0.1963495408493621; /*0x55a776*/
  Matrix2D::Rotate(v8.m_Data, v6); /*0x55a779*/
  unsigned int *v4 = a3; // esi /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->Owner->primaryFacing, &a1) >> 10) + 1) >> 1) /*0x55a7b4*/
    & 0x1F;
  }
  float *result = a2; // eax /*0x55a7b6*/
  memcpy(a2, &v8, 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/
}
} // namespace gamemd
