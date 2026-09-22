// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x5F8CE0
AbstractClass * * Turret::LoadVoxelTurretAndBarrel()
{
{
  _DWORD *File; // eax
  int Info; // eax
  char Buffer[256]; // [esp+14Ch] [ebp-204h] BYREF
  char Source[260]; // [esp+24Ch] [ebp-104h] BYREF

  int v2 = this->vt_slot_44(); /*0x5f8cec*/
  if ( v2 == 40 ) /*0x5f8cf2*/
  {
    v2 = this->vt_slot_156(); /*0x5f8cfc*/
    if ( v2 ) /*0x5f8d04*/
    {
      LOBYTE(v2) = this->u8_CA1; /*0x5f8d0a*/
      if ( (_BYTE)v2 ) /*0x5f8d14*/
      {
  int v22; // [esp+6Ch] [ebp-2E4h]
  _BYTE v21[12]; // [esp+60h] [ebp-2F0h] BYREF
  _DWORD v20[22]; // [esp+8h] [ebp-348h] BYREF
        sprintf(Buffer, g_Str_Trace__sTUR, (const char *)&this->u32_C84); /*0x5f8d30*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8d4c*/
  _DWORD v26[22]; // [esp+E0h] [ebp-270h] BYREF
        CCFileClass::Construct(v26, Source); /*0x5f8d63*/
        if ( CCFileClass::Open(v26, 0) ) /*0x5f8d70*/
        {
          AbstractClass *v3 = (void *)this->u32_B8; /*0x5f8d7d*/
          if ( v3 ) /*0x5f8d85*/
          {
            WaveClass::Destroy(this->u32_B8); /*0x5f8d89*/
            __3_YAXPAX_Z(v3); /*0x5f8d8f*/
          }
          _DWORD * v4 = __2_YAPAXI_Z(0x1Cu); /*0x5f8d99*/
          if ( v4 ) /*0x5f8da3*/
            File = File::LoadFileVXL(v4, (int)v26, 0); /*0x5f8db0*/
          else
            File = 0; /*0x5f8db7*/
          this->u32_B8 = File; /*0x5f8dbb*/
          if ( File && !*(_BYTE *)File ) /*0x5f8dc7*/
          {
            sprintf(Buffer, g_Str_Trace__sTUR, (const char *)&this->u32_C84); /*0x5f8ddd*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8df9*/
            CCFileClass::Construct(v20, Source); /*0x5f8e0d*/
            AbstractClass *v6 = (void *)this->u32_BC; /*0x5f8e12*/
            if ( v6 ) /*0x5f8e1a*/
            {
              String::Release(*((void ***)&this->u32_107)); /*0x5f8e1e*/
              __3_YAXPAX_Z(v6); /*0x5f8e24*/
            }
            _DWORD * v7 = __2_YAPAXI_Z(0x10u); /*0x5f8e2e*/
            if ( v7 ) /*0x5f8e38*/
              _DWORD * v8 = File::LoadFileHVA(v7, (int)v20); /*0x5f8e41*/
            else
              v8 = 0; /*0x5f8e48*/
            AbstractClass *v9 = (_DWORD *)this->u32_B8; /*0x5f8e4a*/
            this->u32_BC = v8; /*0x5f8e52*/
            Info = VoxelSection::GetInfo(v9, 0, 0); /*0x5f8e58*/
            Matrix::Scale(*((unsigned int **)&this->u32_107), *(float *)(Info + 12)); /*0x5f8e67*/
            v20[0] = &vt_CCFileClass; /*0x5f8e70*/
            v22 = 0; /*0x5f8e78*/
            Vector::Clear((int)v21); /*0x5f8e7c*/
            v20[0] = &off_7E1668; /*0x5f8e85*/
            BufferIOFileClass::Dtor(v20); /*0x5f8e8d*/
          }
        }
        sprintf(Buffer, g_Str_Trace__sBARL, (const char *)&this->u32_C84); /*0x5f8ea0*/
        _makepath(Source, 0, 0, Buffer, g_Str_File__VXL); /*0x5f8ebc*/
  _DWORD v23[22]; // [esp+74h] [ebp-2DCh] BYREF
        CCFileClass::Construct(v23, Source); /*0x5f8ed0*/
        if ( CCFileClass::Open(v23, 0) ) /*0x5f8edd*/
        {
          AbstractClass *v11 = (void *)this->u32_C0; /*0x5f8eea*/
          if ( v11 ) /*0x5f8ef2*/
          {
            WaveClass::Destroy(this->u32_C0); /*0x5f8ef6*/
            __3_YAXPAX_Z(v11); /*0x5f8efc*/
          }
          _DWORD * v12 = __2_YAPAXI_Z(0x1Cu); /*0x5f8f06*/
          if ( v12 ) /*0x5f8f10*/
            _DWORD * v13 = File::LoadFileVXL(v12, (int)v23, 0); /*0x5f8f1a*/
          else
            v13 = 0; /*0x5f8f21*/
          this->u32_C0 = v13; /*0x5f8f25*/
          if ( v13 && !*(_BYTE *)v13 ) /*0x5f8f31*/
          {
            sprintf(Buffer, g_Str_Trace__sBARL, (const char *)&this->u32_C84); /*0x5f8f47*/
            _makepath(Source, 0, 0, Buffer, g_Str_File__HVA); /*0x5f8f63*/
            CCFileClass::Construct(v20, Source); /*0x5f8f77*/
            AbstractClass *v14 = (void *)this->u32_C4; /*0x5f8f7c*/
            if ( v14 ) /*0x5f8f84*/
            {
              String::Release(*((void ***)&this->u32_109)); /*0x5f8f88*/
              __3_YAXPAX_Z(v14); /*0x5f8f8e*/
            }
            _DWORD * v15 = __2_YAPAXI_Z(0x10u); /*0x5f8f98*/
            if ( v15 ) /*0x5f8fa2*/
              _DWORD * v16 = File::LoadFileHVA(v15, (int)v20); /*0x5f8fab*/
            else
              v16 = 0; /*0x5f8fb2*/
            AbstractClass *v17 = (_DWORD *)this->u32_C0; /*0x5f8fb4*/
            this->u32_C4 = v16; /*0x5f8fbc*/
            int v18 = VoxelSection::GetInfo(v17, 0, 0); /*0x5f8fc2*/
            Matrix::Scale(*((unsigned int **)&this->u32_109), *(float *)(v18 + 12)); /*0x5f8fd1*/
            v20[0] = &vt_CCFileClass; /*0x5f8fda*/
            v22 = 0; /*0x5f8fe2*/
            Vector::Clear((int)v21); /*0x5f8fe6*/
            v20[0] = &off_7E1668; /*0x5f8fef*/
            BufferIOFileClass::Dtor(v20); /*0x5f8ff7*/
          }
        }
        v23[0] = &vt_CCFileClass; /*0x5f9008*/
        int v25 = 0; /*0x5f900c*/
  _BYTE v24[12]; // [esp+CCh] [ebp-284h] BYREF
        Vector::Clear((int)v24); /*0x5f9013*/
        v23[0] = &off_7E1668; /*0x5f9021*/
        BufferIOFileClass::Dtor(v23); /*0x5f9025*/
        v26[0] = &vt_CCFileClass; /*0x5f9031*/
        int v28 = 0; /*0x5f9038*/
  _BYTE v27[12]; // [esp+138h] [ebp-218h] BYREF
        Vector::Clear((int)v27); /*0x5f903f*/
        v26[0] = &off_7E1668; /*0x5f904b*/
        LOBYTE(v2) = BufferIOFileClass::Dtor(v26); /*0x5f9052*/
      }
    }
  }
  return v2; /*0x5f9059*/
}
}

// 0x55A730
float * Turret::GetTransform(signed int a1, float * a2, unsigned int * a3)
{
{
    signed int v3;
    int *v4;
    float *result;
    float v6;
    int v7;
    float v8[12];
    Matrix3x4::Identity(v8);
    v3 = a1;
    a1 = (((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) & 0x1F)
    - 8;
    v6 = (double)a1 * -0.1963495408493621;
    Matrix2D::Rotate(v8, v6);
    v4 = a3;
    if ( a3 && *a3 != -1 )
  {
    *a3 *= 32;
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) & 0x1F;
  }
    result = a2;
    qmemcpy(a2, v8, 0x30u);
    return result;
}
}
