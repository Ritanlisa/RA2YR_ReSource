// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotionClass_26_e4.hpp"

// 0x439A10
double JumpjetLocomotionClass::ComputeVectorLengthMetric()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall sub_439A10(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // eax
  double v5; // st7
  int GroundHeight; // eax
  int v7; // edi
  double v8; // st7
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  _DWORD v14[3]; // [esp+20h] [ebp-Ch] BYREF

  v2 = Math::RoundToInt(*(float *)(this + 24)); /*0x439a1a*/
  v3 = *(float *)(this + 28); /*0x439a1f*/
  v14[0] = v2; /*0x439a22*/
  v4 = Math::RoundToInt(v3); /*0x439a26*/
  v5 = *(float *)(this + 32); /*0x439a2b*/
  v14[1] = v4; /*0x439a2e*/
  v14[2] = Math::RoundToInt(v5); /*0x439a37*/
  GroundHeight = Cell::GetGroundHeight(v14); /*0x439a45*/
  v7 = Math::RoundToInt(*(float *)(this + 32) - (double)GroundHeight); /*0x439a5e*/
  v10 = v7; /*0x439a66*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v14) + 80) & 0x100) != 0 && v7 >= unk_89C76C ) /*0x439a81*/
    v10 = v7 - unk_89C76C; /*0x439a85*/
  v11 = Math::RoundToInt(*(float *)(this + 36)); /*0x439a94*/
  v12 = Math::RoundToInt(*(float *)(this + 40)); /*0x439aa1*/
  v13 = Math::RoundToInt((double)v10 * *(double *)(this + 8) + *(float *)(this + 44)); /*0x439ab8*/
  v8 = Math::Sqrt((double)v13 * (double)v13 + (double)v11 * (double)v11 + (double)v12 * (double)v12); /*0x439adc*/
  return (double)(int)Math::RoundToInt(v8); /*0x439af2*/
}
}

// 0x439B00
int JumpjetLocomotionClass::Update2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass_Update2(char *this)
{
  float *v1; // esi
  double v2; // st7
  float *v3; // ebp
  char *v4; // ebx
  double v5; // st6
  float v6; // edx
  double v7; // st6
  float v8; // eax
  int v9; // eax
  float v10; // ecx
  double v11; // st7
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // edi
  double v15; // st7
  _DWORD *v16; // eax
  int v17; // ebx
  int Byte284; // eax
  float *v19; // eax
  double v20; // st7
  float v21; // edx
  float *v22; // eax
  float *v23; // eax
  float *v24; // edi
  float v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // esi
  float v30; // ecx
  float v31; // edx
  int v32; // ecx
  int v33; // edx
  float v34; // ecx
  int v35; // eax
  float *v36; // eax
  double v37; // st7
  float *v38; // eax
  double v39; // st7
  int result; // eax
  int v41; // [esp+0h] [ebp-148h]
  int v42; // [esp+0h] [ebp-148h]
  int v43; // [esp+0h] [ebp-148h]
  int v44; // [esp+0h] [ebp-148h]
  int v45; // [esp+0h] [ebp-148h]
  int v46; // [esp+4h] [ebp-144h]
  int v47; // [esp+4h] [ebp-144h]
  float v48; // [esp+4h] [ebp-144h]
  int v49; // [esp+4h] [ebp-144h]
  int v50; // [esp+4h] [ebp-144h]
  float v51; // [esp+8h] [ebp-140h]
  bool v52; // [esp+19h] [ebp-12Fh]
  char v53; // [esp+1Ah] [ebp-12Eh]
  char v54; // [esp+1Bh] [ebp-12Dh]
  float v55; // [esp+1Ch] [ebp-12Ch]
  float v56; // [esp+1Ch] [ebp-12Ch]
  float v57; // [esp+1Ch] [ebp-12Ch]
  double v58; // [esp+20h] [ebp-128h] BYREF
  float v59; // [esp+28h] [ebp-120h]
  char *v60; // [esp+2Ch] [ebp-11Ch]
  int v61; // [esp+30h] [ebp-118h]
  int GroundHeight; // [esp+34h] [ebp-114h]
  float v63; // [esp+38h] [ebp-110h]
  float v64; // [esp+3Ch] [ebp-10Ch]
  float v65; // [esp+40h] [ebp-108h]
  int v66; // [esp+44h] [ebp-104h]
  int v67; // [esp+48h] [ebp-100h]
  float v68; // [esp+4Ch] [ebp-FCh]
  _DWORD v69[3]; // [esp+50h] [ebp-F8h] BYREF
  _DWORD v70[2]; // [esp+5Ch] [ebp-ECh] BYREF
  int v71; // [esp+64h] [ebp-E4h]
  double v72; // [esp+6Ch] [ebp-DCh] BYREF
  float v73[4]; // [esp+78h] [ebp-D0h] BYREF
  float v74[12]; // [esp+88h] [ebp-C0h] BYREF
  float v75[12]; // [esp+B8h] [ebp-90h] BYREF
  float v76[12]; // [esp+E8h] [ebp-60h] BYREF
  char v77[48]; // [esp+118h] [ebp-30h] BYREF

  v1 = (float *)this; /*0x439b09*/
  v60 = this; /*0x439b0b*/
  v2 = *((double *)this + 2); /*0x439b17*/
  v3 = (float *)(this + 24); /*0x439b1a*/
  v58 = v2; /*0x439b22*/
  v5 = *((float *)this + 11); /*0x439b28*/
  v6 = *((float *)this + 7); /*0x439b2b*/
  v63 = *((float *)this + 6); /*0x439b2e*/
  v7 = v5 - *((double *)this + 1); /*0x439b32*/
  v8 = *((float *)this + 8); /*0x439b35*/
  v4 = this + 36; /*0x439b1d*/
  v64 = v6; /*0x439b3a*/
  v65 = v8; /*0x439b3e*/
  v66 = this->Climb; /*0x439b44*/
  v9 = this->Crash; /*0x439b4a*/
  LODWORD(v72) = *(_DWORD *)this; /*0x439b4d*/
  v67 = v9; /*0x439b51*/
  v10 = *((float *)this + 11); /*0x439b58*/
  HIDWORD(v72) = *((_DWORD *)v60 + 1); /*0x439b5b*/
  *((float *)v4 + 2) = v7; /*0x439b5f*/
  v68 = v10; /*0x439b62*/
  if ( v2 > 0.0 ) /*0x439b71*/
  {
    v11 = JumpjetLocomotionClass::ComputeVectorLengthMetric_0(v4); /*0x439b75*/
    if ( v11 > v58 ) /*0x439b83*/
    {
      v51 = v11 / v11; /*0x439b8c*/
      Coord::Scale((float *)v4, v51); /*0x439b8f*/
    }
  }
  v46 = Math::RoundToInt(v3[2]); /*0x439ba4*/
  v41 = Math::RoundToInt(v3[1]); /*0x439bad*/
  v12 = Math::RoundToInt(*v3); /*0x439bae*/
  Coord3D::Set(v70, v12, v41, v46); /*0x439bb8*/
  Vector3::AddAssign(v4); /*0x439bc0*/
  v47 = Math::RoundToInt(v3[2]); /*0x439bd0*/
  v42 = Math::RoundToInt(v3[1]); /*0x439bd9*/
  v13 = Math::RoundToInt(*v3); /*0x439bda*/
  Coord3D::Set(v69, v13, v42, v47); /*0x439be4*/
  GroundHeight = Cell::GetGroundHeight(v69); /*0x439bfe*/
  v61 = unk_89C76C + GroundHeight; /*0x439c09*/
  v14 = Coord::To_Cell(&MEMORY[0x87F7E8], v69); /*0x439c17*/
  v54 = 0; /*0x439c19*/
  v53 = 0; /*0x439c1e*/
  if ( (v14[80] & 0x100) != 0 || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v70) + 80) & 0x100) != 0 ) /*0x439c46*/
  {
    if ( v69[2] < v61 ) /*0x439c56*/
    {
      if ( v71 >= v61 ) /*0x439c65*/
        v54 = 1; /*0x439c67*/
    }
    else if ( v71 < v61 ) /*0x439c5a*/
    {
      v53 = 1; /*0x439c5c*/
    }
  }
  v52 = 0; /*0x439c70*/
  if ( !v54 && !v53 ) /*0x439c83*/
  {
    v15 = (double)GroundHeight; /*0x439c89*/
    if ( v15 <= v3[2] && v3[2] - 150.0 < v15 ) /*0x439ca9*/
    {
      v16 = Cell::IsBridge(v14); /*0x439cad*/
      LODWORD(v58) = v16; /*0x439cb4*/
      if ( !v16 ) /*0x439cb8*/
      {
        if ( !BuildingPlacement::ValidateType(v14, -1, -1) ) /*0x439cc0*/
        {
          v52 = 0; /*0x439cc9*/
          goto LABEL_24; /*0x439ccd*/
        }
        v16 = (_DWORD *)LODWORD(v58); /*0x439ccf*/
      }
      v52 = 1; /*0x439cd5*/
      if ( v16 ) /*0x439cda*/
      {
        if ( *(_BYTE *)(v16[328] + 5823) ) /*0x439ce2*/
          v52 = v16[390] < 8; /*0x439cf5*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v16 + 128))(v16) ) /*0x439cfe*/
          v52 = 0; /*0x439d08*/
      }
    }
  }
LABEL_24:
  *(float *)&v58 = (float)GroundHeight; /*0x439d11*/
  if ( v3[2] < (double)*(float *)&v58 ) /*0x439d29*/
  {
    if ( !v54 ) /*0x439d4a*/
    {
      if ( !v53 ) /*0x439d5b*/
      {
LABEL_33:
        if ( (double)(GroundHeight - 100) < v3[2] ) /*0x439d88*/
          v3[2] = *(float *)&v58; /*0x439d8e*/
        goto LABEL_35; /*0x439d8e*/
      }
      goto LABEL_32; /*0x439d5b*/
    }
LABEL_30:
    v3[2] = (float)v61; /*0x439d4c*/
    goto LABEL_35; /*0x439d53*/
  }
  if ( v54 ) /*0x439d2d*/
    goto LABEL_30; /*0x439d2d*/
  if ( !v53 ) /*0x439d35*/
  {
    if ( !v52 ) /*0x439d3d*/
    {
      v17 = 0; /*0x439d3f*/
      goto LABEL_43; /*0x439d43*/
    }
    goto LABEL_33; /*0x439d3d*/
  }
LABEL_32:
  v3[2] = (float)(v61 - 20); /*0x439d5d*/
LABEL_35:
  Byte284 = CellClass::GetByte284(v69); /*0x439d91*/
  qmemcpy(v75, CopyAudioData(v77, Byte284), sizeof(v75)); /*0x439dc4*/
  v19 = InvertMatrix3x3Signs(v76, v75); /*0x439dcd*/
  v20 = *((float *)v4 + 1); /*0x439dd2*/
  v21 = *(float *)v4; /*0x439de3*/
  qmemcpy(v74, v19, sizeof(v74)); /*0x439de5*/
  *(float *)&v43 = -v20; /*0x439df2*/
  Triple::Set(&v58, SLODWORD(v21), v43, *((_DWORD *)v4 + 2)); /*0x439df6*/
  v22 = Matrix3x3::TransformPoint(v74, v73, (float *)&v58); /*0x439e0c*/
  v58 = *(double *)v22; /*0x439e17*/
  v48 = v72; /*0x439e2a*/
  v59 = v22[2]; /*0x439e2d*/
  Coord::Scale((float *)&v58, v48); /*0x439e31*/
  v59 = -v59; /*0x439e46*/
  v23 = Matrix3x3::TransformPoint(v75, (float *)&v72, (float *)&v58); /*0x439e51*/
  v24 = (float *)v60; /*0x439e58*/
  v58 = *(double *)v23; /*0x439e5c*/
  v25 = v23[2]; /*0x439e6c*/
  v26 = LODWORD(v58); /*0x439e6f*/
  v59 = v25; /*0x439e79*/
  *((float *)v4 + 1) = -*((float *)&v58 + 1); /*0x439e7f*/
  *((float *)v4 + 2) = v25; /*0x439e82*/
  *(_DWORD *)v4 = v26; /*0x439e87*/
  v55 = -*(float *)Function::645D00(0); /*0x439e92*/
  *(float *)Function::645D00(0) = v55; /*0x439ea5*/
  v56 = -*(float *)Function::645D00(1); /*0x439eb2*/
  *(float *)Function::645D00(1) = v56; /*0x439ec5*/
  v57 = -*(float *)Function::645D00(2); /*0x439ed2*/
  *(float *)Function::645D00(2) = v57; /*0x439ee3*/
  v49 = Math::RoundToInt(v24[8]); /*0x439ef0*/
  v44 = Math::RoundToInt(v24[7]); /*0x439ef9*/
  v27 = Math::RoundToInt(*v3); /*0x439efa*/
  Coord::Subtract(v69, v27, v44, v49); /*0x439f04*/
  v50 = Math::RoundToInt(v65); /*0x439f16*/
  v45 = Math::RoundToInt(v64); /*0x439f20*/
  v28 = Math::RoundToInt(v63); /*0x439f21*/
  Coord::Subtract(v70, v28, v45, v50); /*0x439f2b*/
  v29 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v70) + 283); /*0x439f3f*/
  if ( *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v69) + 283) - v29 >= 2 /*0x439fb1*/
    && (v68 < -0.0002 && v24[8] > (double)v65 || v68 >= -0.0003 && v68 + v65 + 1.0 < v24[8]) )
  {
    v30 = v64; /*0x439fbb*/
    v31 = v65; /*0x439fbf*/
    *v3 = v63; /*0x439fc3*/
    v3[1] = v30; /*0x439fc6*/
    v32 = v66; /*0x439fc9*/
    v3[2] = v31; /*0x439fcf*/
    v33 = v67; /*0x439fd2*/
    *(_DWORD *)v4 = v32; /*0x439fd6*/
    v34 = v68; /*0x439fd8*/
    *((_DWORD *)v4 + 1) = v33; /*0x439fdc*/
    *((float *)v4 + 2) = v34; /*0x439fe4*/
    Coord::To_Cell(&MEMORY[0x87F7E8], v69); /*0x439ff1*/
    v35 = JumpjetLocomotionClass::AdjustClimbFacing(v70); /*0x439ff8*/
    if ( v35 != -1 ) /*0x43a000*/
    {
      qmemcpy(v74, (const void *)Locomotor_Update(v76, v35), sizeof(v74)); /*0x43a01f*/
      v36 = TransformMatrix3x4Point(v73, v74, (float *)v4); /*0x43a02c*/
      *(float *)v4 = *v36; /*0x43a035*/
      *((float *)v4 + 1) = v36[1]; /*0x43a03a*/
      *((float *)v4 + 2) = v36[2]; /*0x43a040*/
      v37 = *(double *)v60; /*0x43a047*/
      *(float *)v4 = v37 * *(float *)v4; /*0x43a04d*/
      *((float *)v4 + 1) = v37 * *((float *)v4 + 1); /*0x43a054*/
      *((float *)v4 + 2) = v37 * *((float *)v4 + 2); /*0x43a05a*/
    }
  }
  v1 = (float *)v60; /*0x43a05d*/
  v17 = 1; /*0x43a061*/
LABEL_43:
  v38 = QuaternionMathMultiply(v73, v1 + 12, v1 + 16); /*0x43a066*/
  Float4::Copy(v1 + 12, v70, v38); /*0x43a080*/
  v39 = JumpjetLocomotionClass::ComputeVectorLengthMetric(v1); /*0x43a087*/
  result = 2; /*0x43a098*/
  if ( v39 >= 2.5 ) /*0x43a09d*/
    return v17; /*0x43a09f*/
  return result; /*0x43a0a1*/
}
}

// 0x43A130
void JumpjetLocomotionClass::ComputeVectorLengthMetric_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_43A130(float *this)
{
  Math::Sqrt(*this * *this + *(this + 1) * *(this + 1) + *(this + 2) * *(this + 2)); /*0x43a154*/
}
}

// 0x4848B0
int JumpjetLocomotionClass::AdjustClimbFacing(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4848B0(__int16 *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  bool v14; // sf
  bool v15; // of
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // [esp+10h] [ebp-10h]
  __int16 v20; // [esp+14h] [ebp-Ch] BYREF
  __int16 v21; // [esp+16h] [ebp-Ah]
  int v22; // [esp+18h] [ebp-8h]

  v2 = a2; /*0x4848b4*/
  v4 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], a2) + 9); /*0x4848c8*/
  v5 = *(this + 18); /*0x4848cb*/
  v6 = *(this + 19); /*0x4848cf*/
  v22 = v4; /*0x4848d3*/
  v7 = v6 - SHIWORD(v4); /*0x4848de*/
  v8 = v5 - (__int16)v4; /*0x4848e6*/
  v9 = v5 == (__int16)v4; /*0x4848ec*/
  result = dword_81CD5C[v5 + 3 * v7 - (__int16)v4]; /*0x4848ee*/
  v19 = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      LOWORD(a2) = v4 + v8; /*0x484916*/
      HIWORD(a2) = HIWORD(v22); /*0x48491b*/
      v11 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x484944*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) >= v11; /*0x484959*/
      v20 = v4; /*0x484960*/
      v21 = HIWORD(v22) + v7; /*0x484965*/
      v12 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      LOWORD(a2) = v4 + v7; /*0x4849ab*/
      HIWORD(a2) = HIWORD(v22); /*0x4849b0*/
      v16 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x4849d3*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) >= v16; /*0x4849ee*/
      v20 = v4; /*0x4849f5*/
      v21 = HIWORD(v22) + v8; /*0x4849fa*/
      v17 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v20) + 283); /*0x484a2b*/
      v15 = __OFSUB__(v18, v17); /*0x484a32*/
      v14 = v18 - v17 < 0; /*0x484a32*/
    }
    if ( (_BYTE)a2 ) /*0x484a3d*/
    {
      if ( v14 != v15 ) /*0x484a38*/
        return ((_BYTE)v19 - 1) & 7; /*0x484a4e*/
      else
        return v19; /*0x484a6a*/
    }
    else
    {
      result = v19; /*0x484a59*/
      if ( v14 == v15 ) /*0x484a38*/
        return v19 + 1; /*0x484a62*/
    }
  }
  return result; /*0x484a47*/
}
}

// 0x485080
int JumpjetLocomotionClass::FindClosestOccupiableCell()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass::FindClosestOccupiableCell(_DWORD *this)
{
  int inited; // ebp
  int v3; // esi
  int *v5; // eax
  int v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  _BYTE v8[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = 128; /*0x48508f*/
  v7 = 128; /*0x485097*/
  inited = Isometric::InitTables((int)this, (IUnknown *)&v6); /*0x4850a3*/
  if ( MEMORY[0xA8D63C].__pad_1258[268] && (v3 = *(this + 57)) != 0 ) /*0x4850b6*/
  {
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) != 6 ) /*0x4850c2*/
    {
      v3 = *(_DWORD *)(v3 + 48); /*0x4850c4*/
      if ( !v3 ) /*0x4850c9*/
        goto LABEL_5; /*0x4850c9*/
    }
    v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v3 + 1312) + 124))(*(_DWORD *)(v3 + 1312), v8); /*0x48510c*/
    v6 = *v5; /*0x485112*/
    v7 = v5[1]; /*0x48511a*/
    return v5[2] + inited; /*0x485121*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4850cb*/
    v7 = 0; /*0x4850de*/
    if ( Object::FindClosestObjectCell(this, (IUnknown *)&v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}
}

// 0x4AFF60
float * JumpjetLocomotionClass::ComputeVoxelTransform(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall Voxel_ComputeTransform(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  int v13; // ebx
  int *v14; // ecx
  int v15; // edi
  int v16; // eax
  double v17; // st7
  int v18; // edi
  const void *v19; // eax
  int v20; // esi
  float *v21; // eax
  float *v22; // edx
  float *v23; // ecx
  int v24; // ecx
  float *Transform; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // eax
  const void *v33; // eax
  int v34; // esi
  float v36; // [esp+4h] [ebp-234h]
  float v37; // [esp+4h] [ebp-234h]
  float v38; // [esp+4h] [ebp-234h]
  float *v39; // [esp+4h] [ebp-234h]
  float v40; // [esp+14h] [ebp-224h]
  int v41; // [esp+14h] [ebp-224h]
  float v42; // [esp+18h] [ebp-220h]
  int v43; // [esp+18h] [ebp-220h]
  float v44; // [esp+1Ch] [ebp-21Ch]
  int v45; // [esp+1Ch] [ebp-21Ch]
  float v46; // [esp+20h] [ebp-218h]
  int v47; // [esp+20h] [ebp-218h]
  float v48; // [esp+24h] [ebp-214h]
  int v49; // [esp+24h] [ebp-214h]
  _DWORD v50[12]; // [esp+28h] [ebp-210h] BYREF
  float v51[12]; // [esp+58h] [ebp-1E0h] BYREF
  float v52[12]; // [esp+88h] [ebp-1B0h] BYREF
  float v53[12]; // [esp+B8h] [ebp-180h] BYREF
  float v54[12]; // [esp+E8h] [ebp-150h] BYREF
  float v55[12]; // [esp+118h] [ebp-120h] BYREF
  float v56[12]; // [esp+148h] [ebp-F0h] BYREF
  char v57[48]; // [esp+178h] [ebp-C0h] BYREF
  float v58[12]; // [esp+1A8h] [ebp-90h] BYREF
  _BYTE v59[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v60[12]; // [esp+208h] [ebp-30h] BYREF

  v3 = a1[11]; /*0x4aff72*/
  if ( v3 ) /*0x4aff7b*/
  {
    v5 = a1[8]; /*0x4aff85*/
    v6 = a1[10]; /*0x4aff88*/
    if ( v5 != -1 ) /*0x4aff8e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x4aff9a*/
        v6 = 0; /*0x4affa0*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x4aff9c*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x4affac*/
  }
  else
  {
    v4 = 1.0; /*0x4aff7d*/
  }
  if ( v4 == 1.0 ) /*0x4affbb*/
  {
    v7 = a1[2]; /*0x4affbd*/
    if ( fabs(*(float *)(v7 + 808)) < 0.005 && fabs(*(float *)(v7 + 812)) < 0.005 ) /*0x4affe8*/
    {
      if ( a3 && *a3 != -1 ) /*0x4b02bf*/
      {
        v24 = *a3 << 6; /*0x4b02c1*/
        *a3 = v24; /*0x4b02c4*/
        *a3 = v24 + a1[6]; /*0x4b02cb*/
      }
      Transform = Turret::GetTransform((signed int)a1, v55, a3); /*0x4b02d7*/
      Transform::Copy(v54, Transform); /*0x4b02e4*/
      Matrix3x4::Identity(v50); /*0x4b02ed*/
      v26 = a1[11]; /*0x4b02f2*/
      if ( !v26 ) /*0x4b02fb*/
        goto LABEL_48; /*0x4b02fb*/
      v27 = a1[8]; /*0x4b0301*/
      v28 = a1[10]; /*0x4b0304*/
      if ( v27 != -1 ) /*0x4b0310*/
      {
        if ( (int)MEMORY[0xA8ED84] - v27 >= v28 ) /*0x4b0318*/
          v28 = 0; /*0x4b031e*/
        else
          v28 -= (int)MEMORY[0xA8ED84] - v27; /*0x4b031a*/
      }
      if ( (double)(v26 - v28) / (double)(int)a1[11] < 1.0 ) /*0x4b0339*/
      {
        v29 = a1[11]; /*0x4b033b*/
        if ( v29 ) /*0x4b0344*/
        {
          v31 = a1[8]; /*0x4b034e*/
          v32 = a1[10]; /*0x4b0351*/
          if ( v31 != -1 ) /*0x4b0357*/
          {
            if ( (int)MEMORY[0xA8ED84] - v31 >= v32 ) /*0x4b035f*/
              v32 = 0; /*0x4b0365*/
            else
              v32 -= (int)MEMORY[0xA8ED84] - v31; /*0x4b0361*/
          }
          v30 = (double)(v29 - v32) / (double)(int)a1[11]; /*0x4b0371*/
        }
        else
        {
          v30 = 1.0; /*0x4b0346*/
        }
        v33 = InterpolateVoxelAnimPose(v58, a1[7], a1[6], v30); /*0x4b0389*/
      }
      else
      {
LABEL_48:
        v34 = a1[6]; /*0x4b0390*/
        if ( !v34 ) /*0x4b0395*/
        {
LABEL_51:
          qmemcpy(v53, v50, sizeof(v53)); /*0x4b03c9*/
          v39 = v54; /*0x4b03cb*/
          v22 = v53; /*0x4b03cc*/
          v23 = (float *)v57; /*0x4b03d3*/
          goto LABEL_52; /*0x4b03d3*/
        }
        v33 = CopyAudioData((char *)v56, v34); /*0x4b03a0*/
      }
      qmemcpy(v50, v33, sizeof(v50)); /*0x4b03b0*/
      goto LABEL_51; /*0x4b03b0*/
    }
  }
  Matrix3x4::Identity(v51); /*0x4afff2*/
  Matrix3x4::Identity(v52); /*0x4afffe*/
  v44 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x4b0019*/
  v46 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x4b002f*/
  v40 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x4b0044*/
  v48 = Math::SinCos(*(float *)(a1[2] + 812)); /*0x4b0059*/
  v42 = Math::ArcTan2(*(float *)(a1[2] + 808)); /*0x4b006e*/
  v8 = Math::SinCos(*(float *)(a1[2] + 808)); /*0x4b007b*/
  v49 = Math::RoundToInt(fabs(v8) * v44 + fabs(v48) * v46); /*0x4b00a2*/
  v41 = Math::RoundToInt(v40 * v46); /*0x4b00ab*/
  v9 = Math::RoundToInt(v46 - (double)v41); /*0x4b00c4*/
  v47 = v9; /*0x4b00c6*/
  v43 = Math::RoundToInt(v42 * v44); /*0x4b00cf*/
  v10 = Math::RoundToInt(v44 - (double)v43); /*0x4b00db*/
  v11 = a1[2]; /*0x4b00e0*/
  v45 = v10; /*0x4b00e5*/
  if ( *(float *)(v11 + 812) < 0.0 ) /*0x4b00fa*/
    v47 = -v9; /*0x4b00fe*/
  if ( *(float *)(v11 + 808) > 0.0 ) /*0x4b0113*/
    v45 = -v10; /*0x4b0117*/
  v36 = (float)v49; /*0x4b0124*/
  Matrix3x3::ApplyCol1(v51, v36); /*0x4b0127*/
  v37 = (float)v47; /*0x4b0138*/
  Matrix3x4::Translate(v52, v37); /*0x4b013b*/
  v38 = (float)v45; /*0x4b014c*/
  Matrix3x3::ApplyCol0(v52, v38); /*0x4b014f*/
  Matrix3x3::RotateX(v52, *(float *)(a1[2] + 808)); /*0x4b0165*/
  Matrix3D::RotateZ(v52, *(float *)(a1[2] + 812)); /*0x4b017b*/
  if ( a3 ) /*0x4b0185*/
    *a3 = -1; /*0x4b0187*/
  v12 = Turret::GetTransform((signed int)a1, v60, a3); /*0x4b0197*/
  Transform::Copy(v53, v12); /*0x4b01a4*/
  Matrix3x4::Identity(v50); /*0x4b01ad*/
  v13 = a1[11]; /*0x4b01b2*/
  v14 = a1 + 8; /*0x4b01b5*/
  if ( v13 ) /*0x4b01be*/
  {
    v15 = *v14; /*0x4b01c0*/
    v16 = a1[10]; /*0x4b01c2*/
    if ( *v14 != -1 ) /*0x4b01c8*/
    {
      if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x4b01d4*/
        v16 = 0; /*0x4b01da*/
      else
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x4b01d6*/
    }
    if ( (double)(v13 - v16) / (double)(int)a1[11] < 1.0 ) /*0x4b01f5*/
    {
      if ( a1[11] ) /*0x4b01f7*/
      {
        v18 = a1[11]; /*0x4b0206*/
        v17 = (double)(v18 - Timeout::GetRemaining(v14)) / (double)v18; /*0x4b021c*/
      }
      else
      {
        v17 = 1.0; /*0x4b01fe*/
      }
      v19 = InterpolateVoxelAnimPose(v59, a1[7], a1[6], v17); /*0x4b0234*/
      goto LABEL_29; /*0x4b0239*/
    }
  }
  v20 = a1[6]; /*0x4b023b*/
  if ( v20 ) /*0x4b0240*/
  {
    v19 = CopyAudioData(v57, v20); /*0x4b024b*/
LABEL_29:
    qmemcpy(v50, v19, sizeof(v50)); /*0x4b025b*/
  }
  qmemcpy(v54, v50, sizeof(v54)); /*0x4b0274*/
  v39 = v52; /*0x4b0284*/
  v21 = MultiplyMatrix3x4(v56, v51, v54); /*0x4b0292*/
  v22 = MultiplyMatrix3x4(v58, v21, v53); /*0x4b02a5*/
  v23 = v55; /*0x4b02a7*/
LABEL_52:
  qmemcpy(v51, MultiplyMatrix3x4(v23, v22, v39), sizeof(v51)); /*0x4b03da*/
  qmemcpy(a2, v51, 0x30u); /*0x4b03fa*/
  return a2; /*0x4b03fc*/
}
}

// 0x4B0C40
char JumpjetLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_4B0C40(int a1, int a2, unsigned int a3, __int64 a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr00_8
  _DWORD *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  *(_DWORD *)(a1 + 84) = a2; /*0x4b0c53*/
  *(_DWORD *)(a1 + 88) = 0; /*0x4b0c56*/
  v4 = MEMORY[0x8A0790]; /*0x4b0c5d*/
  if ( a3 != MEMORY[0x8A0790] || a4 != MEMORY[0x8A0794] ) /*0x4b0c70*/
  {
    v5 = a1 - 4; /*0x4b0c88*/
    v13 = a4; /*0x4b0c8b*/
    v6 = (unsigned int *)(a1 - 4 + 64); /*0x4b0c93*/
    v12 = a3; /*0x4b0c9a*/
    if ( *v6 != MEMORY[0x8A0790] || __PAIR64__(*(_DWORD *)(a1 - 4 + 72), *(_DWORD *)(a1 + 64)) != MEMORY[0x8A0794] ) /*0x4b0ca5*/
    {
      *v6 = MEMORY[0x8A0790]; /*0x4b0cb6*/
      *(_DWORD *)(a1 + 64) = MEMORY[0x8A0794]; /*0x4b0cbd*/
      v7 = HIDWORD(MEMORY[0x8A0794]); /*0x4b0cc0*/
      *(_BYTE *)(v5 + 99) = 0; /*0x4b0cc6*/
      *(_DWORD *)(a1 - 4 + 72) = v7; /*0x4b0cca*/
      v4 = MEMORY[0x8A0790]; /*0x4b0ccd*/
    }
    if ( __PAIR64__(a4, a3) != __PAIR64__(MEMORY[0x8A0794], v4) /*0x4b0cee*/
      || (LOBYTE(v4) = BYTE4(MEMORY[0x8A0794]), HIDWORD(a4) != HIDWORD(MEMORY[0x8A0794])) )
    {
      v8 = v13; /*0x4b0cf4*/
      *(_BYTE *)(v5 + 99) = 1; /*0x4b0cfa*/
      *v6 = a3; /*0x4b0cfe*/
      *(_QWORD *)(a1 + 64) = v8; /*0x4b0d00*/
      v11 = *(_DWORD *)(v5 + 12); /*0x4b0d0d*/
      v9 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x4b0d14*/
      if ( !CrateClass::ProcessPickup(v9, v11) || *(_BYTE *)(*(_DWORD *)(v5 + 12) + 129) ) /*0x4b0d27*/
      {
        LOBYTE(v4) = *(_BYTE *)(*(_DWORD *)(v5 + 12) + 144); /*0x4b0d6d*/
        if ( (_BYTE)v4 ) /*0x4b0d75*/
        {
          LOBYTE(v4) = MEMORY[0x8A0790]; /*0x4b0d77*/
          *v6 = MEMORY[0x8A0790]; /*0x4b0d7c*/
          *(_QWORD *)(a1 + 64) = MEMORY[0x8A0794]; /*0x4b0d84*/
          *(_BYTE *)(v5 + 99) = 0; /*0x4b0d90*/
        }
      }
      else
      {
        JumpjetLocomotion::MoveTo(a1 - 4, &v12, 1); /*0x4b0d3a*/
        LOBYTE(v4) = a1 + 48; /*0x4b0d3f*/
        *(_DWORD *)(a1 + 48) = a3; /*0x4b0d4a*/
        *(_QWORD *)(a1 + 52) = a4; /*0x4b0d4c*/
        *(_DWORD *)(a1 + 76) = 0; /*0x4b0d52*/
        *(_DWORD *)(a1 + 80) = 1072693248; /*0x4b0d59*/
      }
    }
  }
  return v4; /*0x4b0d60*/
}
}

// 0x4B4920
bool JumpjetLocomotionClass::IsAtDestination(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_4B4920(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  _DWORD *v18; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x4b4925*/
  v5 = (int *)(*(int (__stdcall **)(int, _DWORD *))(*(_DWORD *)a1 + 24))(a1, v21); /*0x4b4932*/
  v6 = *v5; /*0x4b4935*/
  v7 = v5[1]; /*0x4b4937*/
  v8 = v5[2]; /*0x4b4940*/
  v23 = v6; /*0x4b4945*/
  v24 = v7; /*0x4b4949*/
  v25 = v8; /*0x4b494d*/
  if ( v6 == MEMORY[0x8A0790] && __PAIR64__(v8, v7) == MEMORY[0x8A0794] ) /*0x4b4959*/
    return 0; /*0x4b4959*/
  if ( !*(_BYTE *)(v4 + 92) ) /*0x4b4967*/
  {
    v9 = *(_DWORD *)(v4 + 84); /*0x4b4972*/
    if ( v9 != -1 ) /*0x4b4978*/
    {
      v10 = byte_7E7B28[12 * v9]; /*0x4b4981*/
      if ( v10 ) /*0x4b498b*/
      {
        v11 = 4 * v10; /*0x4b4991*/
        v12 = dword_7E7A34[v11]; /*0x4b4994*/
        if ( v12 > -1 ) /*0x4b49a3*/
        {
          v13 = (int *)(dword_7E7A28[v11] + 12 * v12); /*0x4b49ac*/
          a1 = v13[2]; /*0x4b49b2*/
          if ( *(_DWORD *)(v4 + 88) < v12 ) /*0x4b49bb*/
          {
            v14 = v13[1]; /*0x4b49c3*/
            v20[0] = *v13; /*0x4b49c6*/
            v20[1] = v14; /*0x4b49cf*/
            v15 = JumpjetLocomotion::TransformCoords((_DWORD *)(v4 - 4), v21, v20, &a1); /*0x4b49e1*/
            v16 = *v15; /*0x4b49e6*/
            v17 = v15[1]; /*0x4b49e8*/
            v18 = (_DWORD *)(*(_DWORD *)(v4 + 8) + 156); /*0x4b49ee*/
            v21[0] = *v18; /*0x4b49f5*/
            v21[1] = v18[1]; /*0x4b49fc*/
            v22 = v18[2]; /*0x4b4a03*/
            if ( (unsigned __int16)(v16 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4a6b*/
              && (unsigned __int16)(v17 / 256) == (unsigned __int16)(a3 / 256)
              && (int)abs32(v22 - a4) <= MEMORY[0x8A07D0] )
            {
              return 1; /*0x4b4a75*/
            }
          }
        }
      }
    }
  }
  return (unsigned __int16)(v23 / 256) == (unsigned __int16)(a2 / 256) /*0x4b4aee*/
      && (unsigned __int16)(v24 / 256) == (unsigned __int16)(a3 / 256)
      && (int)abs32(v25 - a4) <= MEMORY[0x8A07D0];
}
}

// 0x4B4B00
char JumpjetLocomotionClass::StubReturnZero_2(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_4B4B00(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int v6; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = a1; /*0x4b4b02*/
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504); /*0x4b4b09*/
  if ( v2 < -1 || v2 > 8 ) /*0x4b4b1b*/
    return 0; /*0x4b4b1b*/
  v3 = 12 * *(_DWORD *)(a1 + 84) + 8289064; /*0x4b4b2c*/
  v4 = *(_BYTE *)(a1 + 92) ? (char)algn_7E7B29[12 * *(_DWORD *)(a1 + 84)] : byte_7E7B28[12 * *(_DWORD *)(a1 + 84)];
  if ( v2 == 8 ) /*0x4b4b43*/
    return 0; /*0x4b4b43*/
  if ( v2 == -1 ) /*0x4b4b4c*/
    return 0; /*0x4b4b4c*/
  LOBYTE(v5) = 0; /*0x4b4b53*/
  HIBYTE(v5) = algn_7E7B29[12 * *(_DWORD *)(a1 + 84) + 3]; /*0x4b4b55*/
  LOWORD(a1) = v5; /*0x4b4b58*/
  if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x4b4b78*/
    return 0; /*0x4b4b78*/
  v6 = *(_DWORD *)(v1 + 88); /*0x4b4b7a*/
  if ( dword_7E7A2C[4 * v4] == v6 /*0x4b4bc1*/
    && v6
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(a1) = v7,
        (v8 = byte_7E7B28[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7E7A30[4 * v8] )
  {
    return 1; /*0x4b4bcc*/
  }
  else
  {
    return 0; /*0x4b4bd3*/
  }
}
}

// 0x4B6040
void ** JumpjetLocomotionClass::UpdateMovementPosition(unsigned int * a1, double VeteranCombat_low, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void **__stdcall JumpjetLocomotionClass::sub_4B6040(_DWORD *a1, double VeteranCombat_low, int a3)
{
  int v3; // edi
  void **result; // eax
  int *v5; // esi
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  double v9; // st7
  char v10; // al
  int v11; // ecx
  int v12; // ecx
  __int64 VeteranSpeed; // [esp-Ch] [ebp-28h]
  _DWORD *v14; // [esp-8h] [ebp-24h]
  __int64 v15; // [esp-8h] [ebp-24h]
  double v16; // [esp+8h] [ebp-14h]
  int v17[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (int)a1; /*0x4b604b*/
  result = (void **)a1[7]; /*0x4b604f*/
  v5 = a1 + 7; /*0x4b6052*/
  if ( result == (void **)MEMORY[0x8A0820] ) /*0x4b6057*/
  {
    result = (void **)MEMORY[0x8A0824]; /*0x4b6060*/
    if ( a1[8] == MEMORY[0x8A0824] ) /*0x4b6067*/
    {
      result = (void **)MEMORY[0x8A0828]; /*0x4b6070*/
      if ( a1[9] == MEMORY[0x8A0828] ) /*0x4b6077*/
      {
        v6 = HIDWORD(VeteranCombat_low); /*0x4b6081*/
        v7 = a3; /*0x4b6086*/
        v14 = a1 + 7; /*0x4b608c*/
        *v5 = LODWORD(VeteranCombat_low); /*0x4b608d*/
        v5[1] = v6; /*0x4b608f*/
        v5[2] = v7; /*0x4b6097*/
        *(_DWORD *)(v3 + 36) = Cell::GetGroundHeight(v14); /*0x4b609f*/
        v17[0] = *v5; /*0x4b60a6*/
        v17[1] = v5[1]; /*0x4b60ad*/
        v17[2] = LODWORD(MEMORY[0x8871E0]->DropPodHeight) + v5[2]; /*0x4b60c3*/
        VeteranSpeed = MEMORY[0x8871E0]->DropPodAngle; /*0x4b60da*/
        VeteranCombat_low = (double)SLODWORD(MEMORY[0x8871E0]->DropPodHeight); /*0x4b60db*/
        v8 = Math::Sin(*(double *)&VeteranSpeed); /*0x4b60df*/
        v17[0] = Math::RoundToInt(VeteranCombat_low / v8 + (double)v17[0]); /*0x4b60f4*/
        if ( !IsCoordVisibleMap(&MEMORY[0x87F7E8], v17) ) /*0x4b6102*/
        {
          *(_BYTE *)(v3 + 24) = 1; /*0x4b610c*/
          v15 = MEMORY[0x8871E0]->DropPodAngle; /*0x4b6124*/
          v16 = (double)*v5; /*0x4b6125*/
          VeteranCombat_low = (double)SLODWORD(MEMORY[0x8871E0]->DropPodHeight); /*0x4b612f*/
          v9 = Math::Sin(*(double *)&v15); /*0x4b6133*/
          v17[0] = Math::RoundToInt(v16 - VeteranCombat_low / v9); /*0x4b6148*/
        }
        (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 8) + 436))(*(_DWORD *)(v3 + 8), v17); /*0x4b6156*/
        v10 = (*(int (__thiscall **)(_DWORD, int *, int))(**(_DWORD **)(v3 + 8) + 216))(*(_DWORD *)(v3 + 8), v17, 128); /*0x4b616b*/
        v11 = *(_DWORD *)(v3 + 8); /*0x4b6171*/
        if ( v10 ) /*0x4b6176*/
        {
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v11 + 436))(v11, v17); /*0x4b617f*/
          v12 = *(_DWORD *)(v3 + 8); /*0x4b6185*/
          LOWORD(a1) = 0x8000; /*0x4b6193*/
          FacingClass::Set_SyncLog((char *)(v12 + 904), &a1); /*0x4b619a*/
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4b61a4*/
          if ( result ) /*0x4b61ae*/
            return AnimClass::ctor(result, (void *)MEMORY[0x8871E0]->?[2], v17, 0, 1, (void *)0x600, 0, 0); /*0x4b61d1*/
        }
        else
        {
          return (void **)(*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v11 + 216))(v11, v17, 128); /*0x4b61ea*/
        }
      }
    }
  }
  return result; /*0x4b61d6*/
}
}

// 0x4C94B0
bool JumpjetLocomotionClass::StubReturnZero_5()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4C94B0(__int16 *this)
{
  int v1; // esi
  int v2; // eax

  if ( *(this + 10) <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  v1 = this->Owner; /*0x4c94b8*/
  v2 = *((_DWORD *)this + 4); /*0x4c94bb*/
  if ( v1 != -1 ) /*0x4c94c1*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (__int16)(*this - *(this + 2)) > 0; /*0x4c94e7*/
  return 0; /*0x4c94d8*/
}
}

// 0x4C94F0
bool JumpjetLocomotionClass::StubReturnZero_6()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_4C94F0(__int16 *this)
{
  int v1; // esi
  int v2; // eax

  if ( *(this + 10) <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  v1 = this->Owner; /*0x4c94f8*/
  v2 = *((_DWORD *)this + 4); /*0x4c94fb*/
  if ( v1 != -1 ) /*0x4c9501*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (__int16)(*this - *(this + 2)) < 0; /*0x4c9525*/
  return 0; /*0x4c9518*/
}
}

// 0x4CCC80
char JumpjetLocomotionClass::UpdateFootLocomotion(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall UpdateFootLocomotion(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  int v15; // esi
  int GroundHeightCell; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // esi
  char v20; // al
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  _DWORD v25[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a1; /*0x4ccc84*/
  v5 = a2; /*0x4ccc89*/
  if ( (unsigned __int16)(a2 / 256) != (unsigned __int16)(*(_DWORD *)(a1 + 24) / 256) /*0x4ccce0*/
    || (unsigned __int16)(a3 / 256) != (unsigned __int16)(*(_DWORD *)(a1 + 28) / 256)
    || (LOBYTE(v6) = *(_BYTE *)(a1 + 77), !(_BYTE)v6) )
  {
    v7 = (_DWORD *)(a1 + 8); /*0x4ccce9*/
    LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x4cccee*/
    if ( !(_BYTE)v6 ) /*0x4cccf6*/
    {
      LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 896))(*v7); /*0x4ccd00*/
      if ( !(_BYTE)v6 ) /*0x4ccd08*/
      {
        LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 468))(*v7); /*0x4ccd12*/
        if ( !(_BYTE)v6 ) /*0x4ccd1a*/
        {
          LOBYTE(v6) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 472))(*v7); /*0x4ccd24*/
          if ( !(_BYTE)v6 ) /*0x4ccd2c*/
          {
            LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 96))(v4); /*0x4ccd35*/
            if ( (_BYTE)v6 ) /*0x4ccd3a*/
            {
              v8 = a3; /*0x4ccd45*/
              v9 = a4; /*0x4ccd4b*/
              if ( v5 == MEMORY[0x8B3C78] && a3 == MEMORY[0x8B3C7C] && a4 == MEMORY[0x8B3C80] ) /*0x4ccd67*/
              {
                v10 = 0; /*0x4ccd6f*/
                v11 = *v7 == 0; /*0x4ccd71*/
                a1 = 0; /*0x4ccd73*/
                if ( !v11 ) /*0x4ccd77*/
                {
                  v12 = ComPtr::ReleaseAndSet(&a1, (_DWORD *)(v4 + 8)); /*0x4ccd7e*/
                  if ( v12 < 0 && v12 != -2147467262 ) /*0x4ccd8c*/
                    WinAPI::Wrapper(v12); /*0x4ccd8f*/
                  if ( a1 ) /*0x4ccd9a*/
                    v10 = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 12))(a1); /*0x4ccda2*/
                }
                if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 456))(*v7) <= v10 && !*(_BYTE *)(v4 + 76) /*0x4ccdb9*/
                  || *(_BYTE *)(v4 + 77) )
                {
                  *(_DWORD *)(v4 + 24) = MEMORY[0x8B3C78]; /*0x4ccde8*/
                  *(_DWORD *)(v4 + 28) = MEMORY[0x8B3C7C]; /*0x4ccdf1*/
                  *(_DWORD *)(v4 + 32) = MEMORY[0x8B3C80]; /*0x4ccdf9*/
                }
                else
                {
                  v13 = (_DWORD *)(*v7 + 156); /*0x4ccdc2*/
                  *(_DWORD *)(v4 + 24) = *v13; /*0x4ccdc9*/
                  *(_DWORD *)(v4 + 28) = v13[1]; /*0x4ccdd2*/
                  *(_DWORD *)(v4 + 32) = v13[2]; /*0x4ccdd8*/
                  LocomotionClass::CheckBridgeBlock(v4 - 4); /*0x4ccddb*/
                }
                v6 = a1; /*0x4ccdfc*/
                *(_BYTE *)(v4 + 88) = 0; /*0x4cce00*/
                if ( v6 ) /*0x4cce06*/
                  LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4cce0f*/
              }
              else
              {
                *(_DWORD *)(v4 + 24) = v5; /*0x4cce1c*/
                *(_DWORD *)(v4 + 28) = v8; /*0x4cce1f*/
                *(_DWORD *)(v4 + 32) = v9; /*0x4cce22*/
                v14 = (_DWORD *)*v7; /*0x4cce25*/
                if ( *(_DWORD *)(*v7 + 692) && v14[191] ) /*0x4cce31*/
                {
                  v25[0] = v5; /*0x4cce3b*/
                  v25[1] = v8; /*0x4cce3f*/
                  v25[2] = v9; /*0x4cce43*/
                  v15 = (*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14); /*0x4cce4f*/
                  GroundHeightCell = Cell::GetGroundHeight(v25); /*0x4cce64*/
                  *(_DWORD *)(v4 + 32) = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 188))(v15) + GroundHeightCell; /*0x4cce6e*/
                }
                v17 = 0; /*0x4cce73*/
                v11 = *v7 == 0; /*0x4cce75*/
                a2 = 0; /*0x4cce77*/
                if ( !v11 ) /*0x4cce7b*/
                {
                  v18 = ComPtr::ReleaseAndSet(&a2, (_DWORD *)(v4 + 8)); /*0x4cce82*/
                  if ( v18 < 0 && v18 != -2147467262 ) /*0x4cce90*/
                    WinAPI::Wrapper(v18); /*0x4cce93*/
                  v17 = a2; /*0x4cce98*/
                }
                v19 = 0; /*0x4cce9c*/
                if ( v17 ) /*0x4ccea0*/
                  v19 = (*(int (__stdcall **)(int))(*(_DWORD *)v17 + 12))(v17); /*0x4ccea8*/
                *(_BYTE *)(v4 + 48) = 1; /*0x4cceaa*/
                if ( *(int *)(*v7 + 108) > 0 /*0x4ccecf*/
                  && !*(_BYTE *)(v4 + 76)
                  && (*(_BYTE *)(v4 + 77) || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 456))(*v7) <= v19) )
                {
                  TechnoClass::GetData(v4 - 4); /*0x4cced4*/
                }
                if ( *(_DWORD *)(v4 + 32) <= Cell::GetGroundHeight((_DWORD *)(v4 + 24)) + 120 ) /*0x4cceef*/
                {
                  v21 = *(_DWORD *)(v4 + 8); /*0x4ccef8*/
                  if ( *(_DWORD *)(v21 + 692) && *(_DWORD *)(v21 + 764) ) /*0x4ccf08*/
                  {
                    v20 = 1; /*0x4ccf12*/
                  }
                  else
                  {
                    v22 = *(_DWORD *)(v4 + 8); /*0x4ccf16*/
                    a1 = 0; /*0x4ccf18*/
                    if ( v22 ) /*0x4ccf22*/
                    {
                      v23 = ComPtr::ReleaseAndSet(&a1, (_DWORD *)(v4 + 8)); /*0x4ccf29*/
                      if ( v23 < 0 && v23 != -2147467262 ) /*0x4ccf37*/
                        WinAPI::Wrapper(v23); /*0x4ccf3a*/
                    }
                    if ( (unsigned __int8)JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(0) ) /*0x4ccf45*/
                      goto LABEL_54; /*0x4ccf45*/
                    if ( !a1 ) /*0x4ccf54*/
                      WinAPI::Wrapper(-2147467261); /*0x4ccf5b*/
                    if ( !(*(int (__stdcall **)(int))(*(_DWORD *)a1 + 32))(a1) ) /*0x4ccf67*/
                    {
LABEL_54:
                      Release3COM(&a1); /*0x4ccf7f*/
                      v20 = 0; /*0x4ccf84*/
                    }
                    else
                    {
                      Release3COM(&a1); /*0x4ccf72*/
                      v20 = 1; /*0x4ccf77*/
                    }
                  }
                }
                else
                {
                  v20 = 1; /*0x4ccef1*/
                }
                *(_BYTE *)(v4 + 88) = v20; /*0x4ccf86*/
                if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v7 + 44))(*v7) == 2 /*0x4ccf9d*/
                  && !*(_BYTE *)(*(_DWORD *)(*v7 + 1732) + 3594) )
                {
                  *(_BYTE *)(v4 + 88) = 1; /*0x4ccfa7*/
                }
                LOBYTE(v6) = a2; /*0x4ccfab*/
                if ( a2 ) /*0x4ccfb1*/
                  LOBYTE(v6) = (*(int (__stdcall **)(int))(*(_DWORD *)a2 + 8))(a2); /*0x4ccfb6*/
              }
            }
          }
        }
      }
    }
  }
  return v6; /*0x4cce12*/
}
}

// 0x4CCFD0
char JumpjetLocomotionClass::ComputeMoveToPosition(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ComputeMoveToPosition(int a1)
{
  int v1; // esi
  char result; // al
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int *v6; // edi
  void *ClosestPlacementCellTechnoClass; // eax
  void *v8; // eax
  int v9; // eax
  int v10; // edi
  void *v11; // eax
  int v12; // edi
  void *v13; // eax
  int *v14; // ecx
  _DWORD *v15; // esi
  int v16; // [esp+8h] [ebp-18h] BYREF
  int v17; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeightCell; // [esp+1Ch] [ebp-4h]

  v1 = a1; /*0x4ccfd4*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4ccfdc*/
  if ( result ) /*0x4ccfe1*/
  {
    v3 = *(_DWORD *)(v1 + 8); /*0x4ccfe7*/
    v4 = *(_DWORD *)(v3 + 156); /*0x4ccff0*/
    v5 = *(_DWORD *)(v3 + 160); /*0x4ccff6*/
    GroundHeightCell = *(_DWORD *)(v3 + 164); /*0x4ccffc*/
    LOWORD(a1) = v4 / 256; /*0x4cd00c*/
    HIWORD(a1) = v5 / 256; /*0x4cd01f*/
    if ( !*(_BYTE *)(v3 + 980) /*0x4cd050*/
      && !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&a1, 1)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 1244))(*(_DWORD *)(v1 + 8)) )
    {
      a1 = *(_DWORD *)JumpjetLocomotionClass::ClampToCellBounds(&v17, &a1, 1); /*0x4cd072*/
    }
    v6 = *(int **)(v1 + 8); /*0x4cd076*/
    if ( v6 && (*(int (__thiscall **)(_DWORD))(*v6 + 44))(*(_DWORD *)(v1 + 8)) == 2 ) /*0x4cd08b*/
    {
      if ( a1 == MEMORY[0x8B3C58] ) /*0x4cd09d*/
      {
        (*(void (__stdcall **)(int, _DWORD, int, _DWORD, int, int, _DWORD))(**(_DWORD **)(v1 + 8) + 364))( /*0x4cd0cd*/
          *(_DWORD *)(v1 + 8) + 108,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          1,
          1,
          0);
LABEL_21:
        result = MEMORY[0x8B3C78]; /*0x4cd273*/
        v15 = (_DWORD *)(v1 + 24); /*0x4cd278*/
        *v15 = MEMORY[0x8B3C78]; /*0x4cd27b*/
        v15[1] = MEMORY[0x8B3C7C]; /*0x4cd283*/
        v15[2] = MEMORY[0x8B3C80]; /*0x4cd28c*/
        return result; /*0x4cd28c*/
      }
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 1 ) /*0x4cd0e6*/
      {
        ClosestPlacementCellTechnoClass = TechnoClass::FindClosestPlacementCell(v6); /*0x4cd0ea*/
      }
      else
      {
        v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x4cd10f*/
        ClosestPlacementCellTechnoClass = InfantryClass::FindNearbyCell(v6, (int)v8); /*0x4cd117*/
      }
      return (*(int (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(v1 + 8) + 1152))( /*0x4cd0f7*/
               *(_DWORD *)(v1 + 8),
               ClosestPlacementCellTechnoClass,
               1);
    }
    else
    {
      v16 = 0; /*0x4cd161*/
      v9 = *LayerClass::Pathfinding_Find( /*0x4cd174*/
              &MEMORY[0x87F7E8],
              (int)&v16,
              &v18,
              (__int16 *)&a1,
              1,
              -1,
              9,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (__int16 *)&v16,
              0,
              0);
      v17 = v9; /*0x4cd17d*/
      if ( v9 == MEMORY[0x8B3C58] ) /*0x4cd186*/
      {
        v14 = *(int **)(v1 + 8); /*0x4cd246*/
        result = (_BYTE)v14 + 108; /*0x4cd24c*/
        if ( v14[27] <= 0 ) /*0x4cd251*/
          return result; /*0x4cd251*/
        (*(void (__stdcall **)(int *, _DWORD, int, _DWORD, int, int, _DWORD))(*v14 + 364))( /*0x4cd26d*/
          v14 + 27,
          0,
          MEMORY[0x8871E0]->?[5],
          0,
          1,
          1,
          0);
        goto LABEL_21; /*0x4cd26d*/
      }
      GroundHeightCell = 0; /*0x4cd1a9*/
      v19[1] = (SHIWORD(v9) << 8) + 128; /*0x4cd1b6*/
      v19[0] = ((__int16)v9 << 8) + 128; /*0x4cd1c0*/
      GroundHeightCell = Cell::GetGroundHeight(v19); /*0x4cd1ce*/
      if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 80) & 0x100) != 0 ) /*0x4cd1e5*/
        GroundHeightCell += MEMORY[0x8B3CAC]; /*0x4cd1f3*/
      v10 = **(_DWORD **)(v1 + 8); /*0x4cd201*/
      v11 = Coord::To_Cell(&MEMORY[0x87F7E8], v19); /*0x4cd208*/
      (*(void (__thiscall **)(_DWORD, void *, int))(v10 + 1152))(*(_DWORD *)(v1 + 8), v11, 1); /*0x4cd211*/
      result = *(_BYTE *)(v1 + 77); /*0x4cd217*/
      if ( !result ) /*0x4cd21c*/
      {
        v12 = **(_DWORD **)(v1 + 8); /*0x4cd228*/
        v13 = Coord::To_Cell(&MEMORY[0x87F7E8], v19); /*0x4cd22f*/
        return (*(int (__thiscall **)(_DWORD, void *, int))(v12 + 1152))(*(_DWORD *)(v1 + 8), v13, 1); /*0x4cd238*/
      }
    }
  }
  return result; /*0x4cd0fd*/
}
}

// 0x4CD510
char JumpjetLocomotionClass::IsMapCoordVisible()
{
{
    int *v2;
    bool v3;
    char *v4;
    int i;
    int *v6;
    int v7;
    int v8;
    int v10[3];
    v2 = (int *)(this->LinkedTo + 156);
    v10[0] = *v2;
    v10[1] = v2[1];
    v10[2] = v2[2];
    v3 = IsCoordVisibleMap(&DataGlobal_87F7E8, v10);
    v4 = (char *)this->LinkedTo;
    if ( v3 )
  {
    v4[981] = 1;
    return 0;
  }
    if ( (*(int (__thiscall **)(char *))(*(int *)(v4) + 388))(v4) != 4 )
    return 0;
    for ( i = this->LinkedTo; *(int *)(i + 280); i = this->LinkedTo )
  {
    v6 = (int *)LinkedList::Pop((int *)(i + 276));
    if ( sub_413CD0((int)v6) )
    *(char *)(v6[135] + 505) = 1;
    v7 = v6[373];
    if ( v7 )
    *(char *)(v7 + 130) = 1;
    if ( v6 )
    (*(void (__thiscall **)(int *, int))(*v6 + 32))(v6, 1);
  }
    v8 = *(int *)(this->LinkedTo + 1492);
    if ( v8 )
    *(char *)(v8 + 130) = 1;
    (*(void (__thiscall **)(int))(*(int *)this->LinkedTo + 928))(this->LinkedTo);
    (*(void (__thiscall **)(int))(*(int *)this->LinkedTo + 248))(this->LinkedTo);
    return 1;
}