// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x5F8CE0
namespace gamemd {
AbstractClass * * Turret::LoadVoxelTurretAndBarrel()
{
  int v2; // eax
  void *v3; // edi
  _DWORD *v4; // eax
  _DWORD *File; // eax
  void *v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  void * Info;
  void *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  void *v14; // edi
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  void * v18;
  _DWORD v20[22]; // [esp+8h] [ebp-348h] BYREF
  _BYTE v21[12]; // [esp+60h] [ebp-2F0h] BYREF
  void ** v22;
  _DWORD v23[22]; // [esp+74h] [ebp-2DCh] BYREF
  _BYTE v24[12]; // [esp+CCh] [ebp-284h] BYREF
  void ** v25;
  _DWORD v26[22]; // [esp+E0h] [ebp-270h] BYREF
  _BYTE v27[12]; // [esp+138h] [ebp-218h] BYREF
  void ** v28;
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->u32_104))(this); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q03C6))(this); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      IDA_LOBYTE(v2) = this->u8_CA1; /*0x5f8d0a*/
      if ( (_BYTE)v2 ) /*0x5f8d14*/
      {
        sprintf(Buffer, "%sTUR", (const char *)&this->u32_C84); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
        CCFileClass::Construct(v26, Source); /*0x5f8d63*/
        if ( CCFileClass::Open(v26, 0) ) /*0x5f8d70*/
        {
          v3 = (void *)this->u32_B8; /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            WaveClass::Destroy(this->u32_B8); /*0x5f8d89*/
            RA2_OPDEL(v3); /*0x5f8d8f*/
          }
          v4 = RA2_OPNEW(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            File = File::LoadFileVXL(v4, (int)v26, 0); /*0x5f8db0*/
          else
            File = 0; /*0x5f8db7*/
          this->u32_B8 = File; /*0x5f8dbb*/
          if ( File && !*(_BYTE *)File ) /*0x5f8dc7*/
          {
            sprintf(Buffer, "%sTUR", (const char *)&this->u32_C84); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(v20, Source); /*0x5f8e0d*/
            v6 = (void *)this->u32_BC; /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              String::Release(*((void ***)&this->u32_107)); /*0x5f8e1e*/
              RA2_OPDEL(v6); /*0x5f8e24*/
            }
            v7 = RA2_OPNEW(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              v8 = File::LoadFileHVA(v7, (int)v20); /*0x5f8e41*/
            else
              v8 = 0; /*0x5f8e48*/
            v9 = (_DWORD *)this->u32_B8; /*0x5f8e4a*/
            this->u32_BC = v8; /*0x5f8e52*/
            Info = VoxelSection::GetInfo(v9, 0, 0); /*0x5f8e58*/
            Matrix::Scale(*((unsigned int **)&this->u32_107), *(float *)(Info + 12)); /*0x5f8e67*/
            v20[0] = (void*)&CCFileClass_vftable; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            v20[0] = &off_7E1668; /*0x5f8e85*/
            BufferIOFileClass::Dtor(v20); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, "%sBARL", (const char *)&this->u32_C84); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
        CCFileClass::Construct(v23, Source); /*0x5f8ed0*/
        if ( CCFileClass::Open(v23, 0) ) /*0x5f8edd*/
        {
          v11 = (void *)this->u32_C0; /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            WaveClass::Destroy(this->u32_C0); /*0x5f8ef6*/
            RA2_OPDEL(v11); /*0x5f8efc*/
          }
          v12 = RA2_OPNEW(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            v13 = File::LoadFileVXL(v12, (int)v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          this->u32_C0 = v13; /*0x5f8f25*/
          if ( v13 && !*(_BYTE *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, "%sBARL", (const char *)&this->u32_C84); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(v20, Source); /*0x5f8f77*/
            v14 = (void *)this->u32_C4; /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              String::Release(*((void ***)&this->u32_109)); /*0x5f8f88*/
              RA2_OPDEL(v14); /*0x5f8f8e*/
            }
            v15 = RA2_OPNEW(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              v16 = File::LoadFileHVA(v15, (int)v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            v17 = (_DWORD *)this->u32_C0; /*0x5f8fb4*/
            this->u32_C4 = v16; /*0x5f8fbc*/
            v18 = VoxelSection::GetInfo(v17, 0, 0); /*0x5f8fc2*/
            Matrix::Scale(*((unsigned int **)&this->u32_109), *(float *)(v18 + 12)); /*0x5f8fd1*/
            v20[0] = (void*)&CCFileClass_vftable; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            v20[0] = &off_7E1668; /*0x5f8fef*/
            BufferIOFileClass::Dtor(v20); /*0x5f8ff7*/
          }
        }
        v23[0] = (void*)&CCFileClass_vftable; /*0x5f9008*/
        v25 = 0; /*0x5f900c*/
        Vector::Clear((int)v24); /*0x5f9013*/
        v23[0] = &off_7E1668; /*0x5f9021*/
        BufferIOFileClass::Dtor(v23); /*0x5f9025*/
        v26[0] = (void*)&CCFileClass_vftable; /*0x5f9031*/
        v28 = 0; /*0x5f9038*/
        Vector::Clear((int)v27); /*0x5f903f*/
        v26[0] = &off_7E1668; /*0x5f904b*/
        IDA_LOBYTE(v2) = BufferIOFileClass::Dtor(v26); /*0x5f9052*/
      }
    }
  }
  return v2; /*0x5f9059*/
}
} // namespace gamemd
// 0x55A730
namespace gamemd {
float * Turret::GetTransform(signed int a1, float * a2, unsigned int * a3)
{
  signed int v3; // edi
  _DWORD *v4; // esi
  float *result; // eax
  float v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h] BYREF
  float v8[12]; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(v8); /*0x55a739*/
  v3 = a1; /*0x55a73e*/
  a1 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) & 0x1F) /*0x55a763*/
     - 8;
  v6 = (double)a1 * -0.1963495408493621; /*0x55a776*/
  Matrix2D::Rotate(v8, v6); /*0x55a779*/
  v4 = a3; /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
  }
  result = a2; /*0x55a7b6*/
  qmemcpy(a2, v8, 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/
}
} // namespace gamemd