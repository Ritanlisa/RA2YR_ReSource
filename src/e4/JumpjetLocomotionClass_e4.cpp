// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotionClass_26_e4.hpp"

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
  v66 = this->Crash; /*0x439b44*/
  v9 = this->Height; /*0x439b4a*/
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
  Math::Sqrt(*this * *this + this->vtable2 * this->vtable2 + this->Owner * this->Owner); /*0x43a154*/
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
  v5 = this->q012; /*0x4848cb*/
  v6 = this->IsMoving; /*0x4848cf*/
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
  if ( MEMORY[0xA8D63C].__pad_1258[268] && (v3 = this->q039) != 0 ) /*0x4850b6*/
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

  if ( this->Height <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  v1 = this->Owner; /*0x4c94b8*/
  v2 = this->vtable2; /*0x4c94bb*/
  if ( v1 != -1 ) /*0x4c94c1*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (__int16)(*this - this->Owner) > 0; /*0x4c94e7*/
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

  if ( this->Height <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  v1 = this->Owner; /*0x4c94f8*/
  v2 = this->vtable2; /*0x4c94fb*/
  if ( v1 != -1 ) /*0x4c9501*/
  {
    if ( (int)MEMORY[0xA8ED84] - v1 >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= (int)MEMORY[0xA8ED84] - v1; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (__int16)(*this - this->Owner) < 0; /*0x4c9525*/
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

// 0x4CE5A0
void JumpjetLocomotionClass::ProcessRotation()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_4CE5A0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  void *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 83) && *(int *)(this->LinkedTo + 108) > 0 ) /*0x4ce5b9*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(this + 4) + 96))(this + 4) ) /*0x4ce5c6*/
    {
      v5 = *(_DWORD **)(this + 12); /*0x4ce636*/
      *(_BYTE *)(this + 83) = 0; /*0x4ce639*/
      v5 += 39; /*0x4ce63d*/
      v9[0] = *v5; /*0x4ce645*/
      v9[1] = v5[1]; /*0x4ce651*/
      v9[2] = v5[2]; /*0x4ce658*/
      v6 = Coord::To_Cell(&MEMORY[0x87F7E8], v9); /*0x4ce661*/
      BuildingClass::CreateIdleAnim((int)v6); /*0x4ce668*/
    }
    else
    {
      LOWORD(v7) = *ProgressTimer::GetValue((_WORD *)(this->LinkedTo + 904), &v8) /*0x4ce5ee*/
                 + ((unsigned __int16)*(_DWORD *)(this + 84) << 8);
      FacingClass::Set_SyncLog((char *)(this->LinkedTo + 904), &v7); /*0x4ce605*/
      v2 = *(_DWORD *)(this + 84); /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      *(_DWORD *)(this + 84) = v4; /*0x4ce624*/
    }
  }
}
}

// 0x4CF610
float * JumpjetLocomotionClass::ComputeRotationMatrix(int a1, float * a2, signed int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_4CF610(int a1, float *a2, signed int a3)
{
  int *v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  float *result; // eax
  float v11; // [esp+0h] [ebp-3Ch]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+0h] [ebp-3Ch]
  float v15[12]; // [esp+Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v15); /*0x4cf619*/
  v3 = (int *)a3; /*0x4cf61e*/
  v4 = a1; /*0x4cf622*/
  if ( a3 ) /*0x4cf628*/
    *v3 |= 8 /*0x4cf64f*/
         * (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &a3) >> 10) + 1) >> 1) & 0x1F);
  a3 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v4 + 8) + 928), &a1) >> 10) + 1) >> 1) & 0x1F) /*0x4cf677*/
     - 8;
  v11 = (double)a3 * -0.1963495408493621; /*0x4cf685*/
  Matrix2D::Rotate(v15, v11); /*0x4cf688*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 456))(*(_DWORD *)(v4 + 8)) > 0 ) /*0x4cf69a*/
  {
    v5 = *(_DWORD *)(v4 + 8); /*0x4cf6a0*/
    if ( *(_BYTE *)(v5 + 1061) ) /*0x4cf6a3*/
    {
      Matrix3x3::RotateX(v15, *(float *)(v5 + 808)); /*0x4cf6b8*/
      if ( *(double *)(v4 + 68) <= *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) /*0x4cf6d6*/
                                             + 936) )
      {
        Matrix3D::RotateZ(v15, *(float *)(*(_DWORD *)(v4 + 8) + 812)); /*0x4cf706*/
      }
      else
      {
        v12 = *(float *)(*(_DWORD *)(v4 + 8) + 812) /*0x4cf6f3*/
            + *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944);
        Matrix3D::RotateZ(v15, v12); /*0x4cf6f6*/
      }
      if ( v3 ) /*0x4cf70d*/
        *v3 = -1; /*0x4cf713*/
    }
    else if ( *(double *)(v4 + 68) > *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5) + 936) ) /*0x4cf734*/
    {
      if ( *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944) != 0.0 ) /*0x4cf756*/
      {
        if ( v3 ) /*0x4cf75a*/
        {
          v6 = *v3; /*0x4cf75c*/
          LOBYTE(v6) = *v3 | 4; /*0x4cf75e*/
          *v3 = v6; /*0x4cf760*/
        }
        v13 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 944); /*0x4cf778*/
        Matrix3D::RotateZ(v15, v13); /*0x4cf77b*/
      }
      if ( *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928) != 0.0 ) /*0x4cf79c*/
      {
        if ( JumpjetLocomotionClass::StubReturnZero_5((__int16 *)(*(_DWORD *)(v4 + 8) + 928)) ) /*0x4cf7a7*/
        {
          if ( v3 ) /*0x4cf7b2*/
          {
            v7 = *v3; /*0x4cf7b4*/
            LOBYTE(v7) = *v3 | 1; /*0x4cf7b6*/
            *v3 = v7; /*0x4cf7b8*/
          }
          v8 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928); /*0x4cf7c5*/
        }
        else
        {
          if ( !JumpjetLocomotionClass::StubReturnZero_6((__int16 *)(*(_DWORD *)(v4 + 8) + 928)) ) /*0x4cf7dd*/
            goto LABEL_25; /*0x4cf7dd*/
          if ( v3 ) /*0x4cf7e1*/
          {
            v9 = *v3; /*0x4cf7e3*/
            LOBYTE(v9) = *v3 | 2; /*0x4cf7e5*/
            *v3 = v9; /*0x4cf7e7*/
          }
          v8 = -*(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 928); /*0x4cf7fa*/
        }
        v14 = v8; /*0x4cf801*/
        Matrix3x3::RotateX(v15, v14); /*0x4cf804*/
      }
    }
  }
LABEL_25:
  result = a2; /*0x4cf809*/
  qmemcpy(a2, v15, 0x30u); /*0x4cf818*/
  return result; /*0x4cf81a*/
}
}

// 0x4CFCF0
int JumpjetLocomotionClass::DispatchVirtualCall_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4CFCF0(int a1)
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) > 0 ? 4 : 2;
}
}

// 0x4CFD20
int JumpjetLocomotionClass::ClearLocomotionDirty(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4CFD20(_BYTE *a1)
{
  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) ) /*0x4cfd28*/
  {
    a1[79] = 1; /*0x4cfd2f*/
    *((_DWORD *)a1 + 20) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 20, 30); /*0x4cfd48*/
    if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 99) < 50 ) /*0x4cfd63*/
      *((_DWORD *)a1 + 20) = -*((_DWORD *)a1 + 20); /*0x4cfd6a*/
    (*(void (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1); /*0x4cfd70*/
    *((_DWORD *)a1 + 21) = 0; /*0x4cfd73*/
  }
  return StreamClass::ClearDirty(a1); /*0x4cfd80*/
}
}

// 0x514D90
unsigned int * JumpjetLocomotionClass::SetMovementTarget(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_514D90(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *result; // eax
  int v11; // edi
  int *v12; // esi
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  _WORD *v17; // eax
  bool v18; // bl
  int v19; // ecx
  _DWORD v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x514d93*/
  v5 = a2; /*0x514d99*/
  v6 = a1; /*0x514d9e*/
  v7 = a3; /*0x514da2*/
  v8 = (_DWORD *)(a1 + 20); /*0x514da7*/
  v9 = a1 + 20; /*0x514daa*/
  *(_DWORD *)(a1 + 20) = a2; /*0x514dac*/
  *(_DWORD *)(v9 + 4) = v7; /*0x514dae*/
  *(_DWORD *)(v9 + 8) = v4; /*0x514db1*/
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 8) + 896))(*(_DWORD *)(v6 + 8)); /*0x514db9*/
  if ( !(_BYTE)result ) /*0x514dc1*/
  {
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 96))(v6) /*0x514de4*/
      && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 100))(v6)
      && HouseClass::IonSensitivesShouldBeOffline() )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 92))(v6); /*0x514df0*/
    }
    *(_DWORD *)(v6 + 28) = Cell::GetGroundHeight(v8); /*0x514e02*/
    v11 = a4; /*0x514e05*/
    v20[0] = v5; /*0x514e0f*/
    v20[1] = v7; /*0x514e13*/
    v20[2] = a4; /*0x514e17*/
    result = Coord::To_Cell(&MEMORY[0x87F7E8], v20); /*0x514e1b*/
    if ( (result[80] & 0x100) != 0 ) /*0x514e29*/
    {
      result = (_DWORD *)(MEMORY[0xA8F1B4] + *(_DWORD *)(v6 + 28)); /*0x514e34*/
      *(_DWORD *)(v6 + 28) = result; /*0x514e36*/
    }
    if ( v5 != MEMORY[0xA8F180] || v7 != MEMORY[0xA8F184] || v11 != MEMORY[0xA8F188] ) /*0x514e4f*/
    {
      result = (_DWORD *)(*(int (__stdcall **)(int))(*(_DWORD *)v6 + 96))(v6); /*0x514e58*/
      if ( (_BYTE)result ) /*0x514e5d*/
      {
        if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v6 + 128))(v6) ) /*0x514e66*/
        {
          result = (_DWORD *)MEMORY[0xA8F180]; /*0x514ea1*/
          if ( *(_DWORD *)(v6 + 32) == MEMORY[0xA8F180] /*0x514ecd*/
            && *(_DWORD *)(v6 + 36) == MEMORY[0xA8F184]
            && *(_DWORD *)(v6 + 40) == MEMORY[0xA8F188] )
          {
            v13 = *(_DWORD *)(v6 + 32); /*0x514ed3*/
            v14 = v6 - 4; /*0x514ed6*/
            v18 = 1; /*0x514f28*/
            if ( v13 != MEMORY[0xA8F180] /*0x514ee5*/
              || *(_DWORD *)(v14 + 40) != MEMORY[0xA8F184]
              || *(_DWORD *)(v14 + 44) != MEMORY[0xA8F188] )
            {
              v15 = *(_DWORD *)(v14 + 36) / 256; /*0x514f0d*/
              v16 = *(_DWORD *)(v14 + 40) / 256; /*0x514f10*/
              v17 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v14 + 12) + 440))( /*0x514f13*/
                               *(_DWORD *)(v14 + 12),
                               &a1);
              if ( *v17 != (_WORD)v15 || v17[1] != (_WORD)v16 ) /*0x514f22*/
                v18 = 0; /*0x514ee5*/
            }
            v19 = *(_DWORD *)(v14 + 12); /*0x514f2a*/
            *(_DWORD *)(v14 + 72) = 0; /*0x514f2d*/
            *(_DWORD *)(v14 + 76) = 1072693248; /*0x514f34*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v19 + 1348))(v19, 0, 1072693248); /*0x514f44*/
            result = (_DWORD *)MovementAI::StepFootClass((int *)v14, 0); /*0x514f4e*/
            if ( v18 ) /*0x514f55*/
              return (_DWORD *)MovementAI::MainFootClass((int *)v14, 1); /*0x514f5b*/
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v6 + 8) + 1348))( /*0x514e7c*/
            *(_DWORD *)(v6 + 8),
            0,
            1072693248);
          v12 = (int *)(v6 - 4); /*0x514e82*/
          MovementAI::StepFootClass(v12, 0); /*0x514e89*/
          return (_DWORD *)MovementAI::MainFootClass(v12, 1); /*0x514e92*/
        }
      }
    }
  }
  return result; /*0x514e97*/
}
}

// 0x516BF0
int JumpjetLocomotionClass::ClearLocomotionDirty_0(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_516BF0(_BYTE *a1)
{
  int v1; // eax

  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1) ) /*0x516bf8*/
  {
    v1 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 172); /*0x516c02*/
    if ( v1 ) /*0x516c0a*/
    {
      if ( v1 != 7 ) /*0x516c0f*/
      {
        a1[100] = 1; /*0x516c11*/
        *((_DWORD *)a1 + 26) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 20, 30); /*0x516c2a*/
        if ( Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 99) < 50 ) /*0x516c44*/
          *((_DWORD *)a1 + 26) = -*((_DWORD *)a1 + 26); /*0x516c4b*/
      }
    }
  }
  if ( (*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) ) /*0x516c51*/
    (*(void (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1); /*0x516c5b*/
  return StreamClass::ClearDirty(a1); /*0x516c64*/
}
}

// 0x516C70
bool JumpjetLocomotionClass::DispatchVirtualCall_2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_516C70(int a1)
{
  return StreamClass::GetDirty(a1) /*0x516c90*/
      || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) > 0;
}
}

// 0x54AEC0
char JumpjetLocomotionClass::DispatchLocomotion(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall DispatchLocomotion(_DWORD *a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v8; // edi
  int *v9; // ecx
  int v10; // ebx
  int v11; // edx
  _DWORD *v12; // eax
  void *v13; // eax
  int *v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int *v19; // eax
  int *v20; // edx
  int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v25; // [esp+2Ch] [ebp-20h] BYREF
  int v26; // [esp+30h] [ebp-1Ch]
  int v27; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  _BYTE v30[12]; // [esp+40h] [ebp-Ch] BYREF
  int v31; // [esp+50h] [ebp+4h]

  v2 = (*(int (__stdcall **)(_DWORD *))(*a1 + 116))(a1); /*0x54aecb*/
  v3 = *a1; /*0x54aece*/
  v26 = v2; /*0x54aed1*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(v3 + 16))(a1) /*0x54aedf*/
    || (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 128))(a1) )
  {
    JumpjetLocomotion::UpdateFacing((int)(a1 - 1)); /*0x54aef0*/
    if ( !*(_BYTE *)(a1[2] + 144) ) /*0x54af00*/
      return 0; /*0x54af00*/
    if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x54af0c*/
    {
      v4 = a1[19]; /*0x54af15*/
      if ( v4 ) /*0x54af1a*/
      {
        if ( v4 != 5 ) /*0x54af1f*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[2] + 988))(a1[2], 0); /*0x54af28*/
      }
    }
    v5 = (_BYTE *)a1[2]; /*0x54af2e*/
    if ( v5[1061] ) /*0x54af33*/
    {
      v6 = a1[19]; /*0x54af41*/
      if ( v6 != 5 && v6 != 6 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 456))(v5) > 0 ) /*0x54af60*/
      {
        v7 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)a1[2] + 72))(a1[2], &v27); /*0x54af71*/
        v8 = *v7; /*0x54af74*/
        v9 = (int *)a1[2]; /*0x54af76*/
        v10 = v7[1]; /*0x54af79*/
        v11 = *v9; /*0x54af7c*/
        v29 = v7[2]; /*0x54af81*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v11 + 72))(v9, &v27); /*0x54af8a*/
        LOWORD(v31) = *v12 / 256; /*0x54af9d*/
        HIWORD(v31) = v12[1] / 256; /*0x54afb5*/
        v25 = v31; /*0x54afbe*/
        v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x54afc8*/
        v14 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v13 + 72))(v13, v30); /*0x54afdc*/
        v15 = *v14; /*0x54afde*/
        v16 = v14[1]; /*0x54afe8*/
        v17 = v14[2]; /*0x54afeb*/
        if ( !*(_BYTE *)(a1[2] + 1709) || v8 == v15 && v10 == v16 ) /*0x54aff6*/
        {
          a1[31] = -5; /*0x54b006*/
          a1[19] = 5; /*0x54b00d*/
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 44))(a1[2]) == 15 ) /*0x54b01f*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a1[2] + 1368))(a1[2], 34, 0, 0); /*0x54b02c*/
        }
        else
        {
          a1[15] = v15; /*0x54affb*/
          a1[16] = v16; /*0x54affe*/
          a1[17] = v17; /*0x54b001*/
        }
      }
    }
    switch ( a1[19] ) /*0x54b03c*/
    {
      case 0: /*0x54b03c*/
        HouseClass::Set(a1 - 1); /*0x54b046*/
        break; /*0x54b04b*/
      case 1: /*0x54b03c*/
        UpdateFootMovement((int)(a1 - 1)); /*0x54b050*/
        break; /*0x54b055*/
      case 2: /*0x54b03c*/
        UpdateFootMoveToState(a1 - 1); /*0x54b05a*/
        break; /*0x54b05f*/
      case 3: /*0x54b03c*/
        MovementClass::CalcSpeed((int)(a1 - 1)); /*0x54b064*/
        break; /*0x54b069*/
      case 4: /*0x54b03c*/
        BuildingPlacement::ProcessBuildingPlacementAction((int)(a1 - 1)); /*0x54b06e*/
        break; /*0x54b073*/
      case 5: /*0x54b03c*/
        JumpjetLocomotion::Land((int)(a1 - 1)); /*0x54b078*/
        break; /*0x54b078*/
      default:
        break;
    }
    v18 = a1[2]; /*0x54b07d*/
    if ( *(_BYTE *)(v18 + 131) ) /*0x54b080*/
    {
      if ( *(#375 **)(v18 + 540) != HouseClass_Player ) /*0x54b09c*/
      {
        v19 = (int *)(v18 + 156); /*0x54b09e*/
        v27 = *v19; /*0x54b0a5*/
        v28 = v19[1]; /*0x54b0ac*/
        v29 = v19[2]; /*0x54b0bd*/
        if ( Cell::IsPassable(&v27) /*0x54b0fe*/
          || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0
          && (v20 = (int *)(a1[2] + 156), v27 = *v20, v28 = v20[1], v29 = v20[2], Game::Stub3((int)&v27)) )
        {
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 336))(a1[2]); /*0x54b10c*/
        }
      }
    }
    v21 = a1[2]; /*0x54b112*/
    if ( !*(_BYTE *)(v21 + 1051) && *(#375 **)(v21 + 540) != HouseClass_Player ) /*0x54b12d*/
    {
      v22 = (int *)(v21 + 156); /*0x54b12f*/
      v27 = *v22; /*0x54b136*/
      v28 = v22[1]; /*0x54b13d*/
      v29 = v22[2]; /*0x54b14e*/
      if ( !Cell::IsPassable(&v27) ) /*0x54b152*/
        (*(void (__thiscall **)(_DWORD, #375 *))(*(_DWORD *)a1[2] + 408))(a1[2], HouseClass_Player); /*0x54b166*/
    }
  }
  if ( *(_BYTE *)(a1[2] + 144) ) /*0x54b16f*/
  {
    v23 = (*(int (__stdcall **)(_DWORD *))(*a1 + 116))(a1); /*0x54b17c*/
    if ( v23 != v26 ) /*0x54b183*/
      Targeting::Readd((_DWORD *)a1[2]); /*0x54b18e*/
  }
  return 0; /*0x54b195*/
}
}

// 0x54B1C0
int JumpjetLocomotionClass::SmoothObjectPlacement(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall SmoothObjectPlacement(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebp
  int result; // eax
  int *PlacementCellsMapClass; // eax
  int v9; // edx
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  int v16; // [esp+10h] [ebp-10h] BYREF
  _DWORD v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a1; /*0x54b1cc*/
  if ( (*(_DWORD *)(a1 + 60) != dword_ABC5A8 /*0x54b1fe*/
     || *(_DWORD *)(a1 + 64) != dword_ABC5AC
     || *(_DWORD *)(a1 + 68) != dword_ABC5B0)
    && *(_DWORD *)(a1 + 76)
    && *(_BYTE *)(a1 + 140) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), a1 + 60); /*0x54b20e*/
    *(_BYTE *)(v4 + 140) = 0; /*0x54b214*/
  }
  v5 = a2; /*0x54b21e*/
  v6 = a3; /*0x54b222*/
  result = a4; /*0x54b22b*/
  *(_DWORD *)(v4 + 60) = a2; /*0x54b22f*/
  *(_DWORD *)(v4 + 64) = v6; /*0x54b231*/
  *(_DWORD *)(v4 + 68) = result; /*0x54b234*/
  if ( v5 == dword_ABC5A8 && v6 == dword_ABC5AC && result == dword_ABC5B0 ) /*0x54b24f*/
  {
    *(_BYTE *)(v4 + 72) = 0; /*0x54b4c1*/
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 44))(*(_DWORD *)(v4 + 8)) != 1 /*0x54b26b*/
      || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 1732) + 3434) )
    {
      v17[2] = a4; /*0x54b2e4*/
      LOWORD(a1) = v5 / 256; /*0x54b2fd*/
      a2 = 0; /*0x54b30b*/
      HIWORD(a1) = v6 / 256; /*0x54b31a*/
      v17[0] = v5; /*0x54b33d*/
      v17[1] = v6; /*0x54b341*/
      v9 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v17) + 80) >> 8; /*0x54b358*/
      LOBYTE(v9) = v9 & 1; /*0x54b35b*/
      PlacementCellsMapClass = LayerClass::Pathfinding_Find( /*0x54b36f*/
                                 &MEMORY[0x87F7E8],
                                 v9,
                                 &v16,
                                 (__int16 *)&a1,
                                 3,
                                 -1,
                                 9,
                                 v9,
                                 1,
                                 1,
                                 0,
                                 0,
                                 0,
                                 1,
                                 (__int16 *)&a2,
                                 0,
                                 0);
    }
    else
    {
      LOWORD(a1) = v5 / 256; /*0x54b28c*/
      a2 = 0; /*0x54b29a*/
      HIWORD(a1) = v6 / 256; /*0x54b2a9*/
      PlacementCellsMapClass = LayerClass::Pathfinding_Find( /*0x54b2d9*/
                                 &MEMORY[0x87F7E8],
                                 (int)&v16,
                                 &v16,
                                 (__int16 *)&a1,
                                 3,
                                 -1,
                                 9,
                                 0,
                                 1,
                                 1,
                                 0,
                                 0,
                                 0,
                                 0,
                                 (__int16 *)&a2,
                                 0,
                                 0);
    }
    a1 = *PlacementCellsMapClass; /*0x54b37d*/
    a2 = ((__int16)a1 << 8) + 128; /*0x54b393*/
    a3 = (SHIWORD(a1) << 8) + 128; /*0x54b3a4*/
    a4 = 0; /*0x54b3a8*/
    v10 = (int *)JumpjetLocomotionClass::ProcessLanding(v17, &a2); /*0x54b3b0*/
    v11 = *v10; /*0x54b3b5*/
    v12 = v10[1]; /*0x54b3b7*/
    v13 = v10[2]; /*0x54b3ba*/
    result = dword_ABC5A8; /*0x54b3bd*/
    if ( v11 != dword_ABC5A8 || v12 != dword_ABC5AC || v13 != dword_ABC5B0 ) /*0x54b3d4*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 44))(*(_DWORD *)(v4 + 8)) != 1 /*0x54b413*/
        || !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 3434)
        && (v14 = *(_DWORD **)(v4 + 8), v14[45] != 7)
        && (*(int (__thiscall **)(_DWORD *))(*v14 + 388))(v14) != 7 )
      {
        *(_DWORD *)(v4 + 60) = v11; /*0x54b418*/
        *(_DWORD *)(v4 + 64) = v12; /*0x54b41b*/
        *(_DWORD *)(v4 + 68) = v13; /*0x54b41e*/
      }
      v15 = *(_DWORD **)(v4 + 8); /*0x54b421*/
      if ( v15[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v15 + 388))(v15) != 7 ) /*0x54b438*/
        *(_DWORD *)(*(_DWORD *)(v4 + 8) + 1444) = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(v4 + 60)); /*0x54b44b*/
      *(_BYTE *)(v4 + 72) = 1; /*0x54b451*/
      result = *(_DWORD *)(v4 + 76); /*0x54b455*/
      if ( result == 4 ) /*0x54b45b*/
      {
        *(_DWORD *)(v4 + 76) = 1; /*0x54b45d*/
        *(_DWORD *)(v4 + 124) = *(_DWORD *)(v4 + 40); /*0x54b467*/
        *(_BYTE *)(*(_DWORD *)(v4 + 8) + 308) = 0; /*0x54b46d*/
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 388))(*(_DWORD *)(v4 + 8)); /*0x54b479*/
        if ( result == 16 ) /*0x54b482*/
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 8) + 488))(*(_DWORD *)(v4 + 8), 5, 1); /*0x54b48d*/
          *(_BYTE *)(*(_DWORD *)(v4 + 8) + 184) = 1; /*0x54b496*/
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 512))(*(_DWORD *)(v4 + 8)); /*0x54b4a2*/
          if ( (_BYTE)result ) /*0x54b4aa*/
            return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 492))(*(_DWORD *)(v4 + 8)); /*0x54b4b1*/
        }
      }
    }
  }
  return result; /*0x54b4b7*/
}
}

// 0x54B4D0
int JumpjetLocomotionClass::MoveToDestination(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54B4D0(int a1)
{
  int result; // eax
  int v2; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // [esp-2Ch] [ebp-50h]
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  result = MEMORY[0xA8E7AC]; /*0x54b4d0*/
  if ( !MEMORY[0xA8E7AC] ) /*0x54b4dd*/
  {
    v2 = a1; /*0x54b4e3*/
    result = *(unsigned __int8 *)(a1 + 72); /*0x54b4e7*/
    if ( (_BYTE)result ) /*0x54b4ec*/
    {
      v3 = (_DWORD *)(a1 + 60); /*0x54b4fb*/
      if ( (*(_DWORD *)(a1 + 60) != dword_ABC5A8 /*0x54b521*/
         || *(_DWORD *)(a1 + 64) != dword_ABC5AC
         || *(_DWORD *)(a1 + 68) != dword_ABC5B0)
        && *(_DWORD *)(a1 + 76)
        && *(_BYTE *)(a1 + 140) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), a1 + 60); /*0x54b531*/
        *(_BYTE *)(v2 + 140) = 0; /*0x54b537*/
      }
      v4 = *(_DWORD **)(v2 + 8); /*0x54b541*/
      v5 = v4[39]; /*0x54b54f*/
      v6 = v4[40]; /*0x54b551*/
      GroundHeight = v4[41]; /*0x54b557*/
      LOWORD(a1) = v5 / 256; /*0x54b567*/
      HIWORD(a1) = v6 / 256; /*0x54b57e*/
      v12 = a1; /*0x54b587*/
      a1 = 0; /*0x54b59b*/
      v10 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1460); /*0x54b5be*/
      v7 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x54b5c3*/
      v8 = *LayerClass::Pathfinding_Find( /*0x54b5e4*/
              &MEMORY[0x87F7E8],
              (int)&v13,
              &v13,
              (__int16 *)&v12,
              *(_DWORD *)(v7 + 1660),
              -1,
              v10,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (__int16 *)&a1,
              0,
              0);
      v11 = v8; /*0x54b5ed*/
      if ( v8 == dword_ABC588 ) /*0x54b5f6*/
      {
        v9 = *(int **)(v2 + 8); /*0x54b68f*/
        result = (int)(v9 + 27); /*0x54b695*/
        if ( v9[27] > 0 ) /*0x54b69a*/
        {
          (*(void (__stdcall **)(int *, _DWORD, int, _DWORD, int, int, _DWORD))(*v9 + 364))( /*0x54b6b6*/
            v9 + 27,
            0,
            MEMORY[0x8871E0]->?[5],
            0,
            1,
            1,
            0);
          result = dword_ABC5A8; /*0x54b6bc*/
          *v3 = dword_ABC5A8; /*0x54b6c1*/
          *(_DWORD *)(v2 + 64) = dword_ABC5AC; /*0x54b6ca*/
          *(_DWORD *)(v2 + 68) = dword_ABC5B0; /*0x54b6d3*/
        }
      }
      else
      {
        v14 = ((__int16)v8 << 8) + 128; /*0x54b61e*/
        v15 = (SHIWORD(v8) << 8) + 128; /*0x54b626*/
        GroundHeight = 0; /*0x54b630*/
        GroundHeight = Cell::GetGroundHeight(&v14); /*0x54b643*/
        if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v11) + 80) & 0x100) != 0 ) /*0x54b655*/
          GroundHeight += dword_ABC5DC; /*0x54b663*/
        return (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v2 + 68))(v2, v14, v15, GroundHeight); /*0x54b683*/
      }
    }
  }
  return result; /*0x54b686*/
}
}

// 0x54D6D0
int * JumpjetLocomotionClass::ProcessLanding(int * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__thiscall sub_54D6D0(_DWORD *this, int *a2, _DWORD *a3)
{
  int v3; // ecx
  void *v4; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int v10; // edx
  int v12; // [esp+4h] [ebp-18h] BYREF
  int v13; // [esp+8h] [ebp-14h]
  int GroundHeight; // [esp+Ch] [ebp-10h]
  int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = this->LinkedTo; /*0x54d6d0*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 1 ) /*0x54d6e7*/
  {
    v4 = Coord::To_Cell(&MEMORY[0x87F7E8], a3); /*0x54d6f7*/
    v5 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v4 + 72))(v4, v15); /*0x54d705*/
    v6 = dword_ABC5A8; /*0x54d70a*/
    v12 = *v5; /*0x54d712*/
    v7 = v5[1]; /*0x54d718*/
    v13 = v7; /*0x54d71b*/
    v8 = v5[2]; /*0x54d71f*/
    GroundHeight = v8; /*0x54d722*/
    if ( v12 != dword_ABC5A8 || v7 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d736*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d74b*/
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d767*/
      {
        v8 = dword_ABC5DC + GroundHeight; /*0x54d776*/
        goto LABEL_14; /*0x54d778*/
      }
LABEL_13:
      v8 = GroundHeight; /*0x54d7fd*/
    }
  }
  else
  {
    v9 = ObjectPlacement::CalcPosition_Wrapper(v15, a3, 0); /*0x54d78e*/
    v6 = dword_ABC5A8; /*0x54d795*/
    v12 = *v9; /*0x54d79d*/
    v10 = v9[1]; /*0x54d7a3*/
    v13 = v10; /*0x54d7a6*/
    v8 = v9[2]; /*0x54d7aa*/
    GroundHeight = v8; /*0x54d7ad*/
    if ( v12 != dword_ABC5A8 || v10 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d7c1*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d7d2*/
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d7ee*/
      {
        v8 = dword_ABC5DC + GroundHeight; /*0x54d7f9*/
        goto LABEL_14; /*0x54d7fb*/
      }
      goto LABEL_13; /*0x54d7ee*/
    }
  }
LABEL_14:
  *a2 = v6; /*0x54d801*/
  a2[1] = v13; /*0x54d811*/
  a2[2] = v8; /*0x54d815*/
  return a2; /*0x54d805*/
}
}

// 0x54DCC0
float * JumpjetLocomotionClass::ComputeMovementTransform(signed int a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_54DCC0(signed int a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  float *Transform; // eax
  float *v9; // eax
  float *v10; // esi
  float *v12; // esi
  float v13; // [esp+4h] [ebp-144h]
  float v14; // [esp+4h] [ebp-144h]
  float v15; // [esp+4h] [ebp-144h]
  float v16; // [esp+14h] [ebp-134h]
  int v17; // [esp+14h] [ebp-134h]
  float v18; // [esp+18h] [ebp-130h]
  int v19; // [esp+18h] [ebp-130h]
  float v20; // [esp+1Ch] [ebp-12Ch]
  int v21; // [esp+1Ch] [ebp-12Ch]
  float v22; // [esp+20h] [ebp-128h]
  int v23; // [esp+20h] [ebp-128h]
  float v24; // [esp+24h] [ebp-124h]
  int v25; // [esp+24h] [ebp-124h]
  float v26[12]; // [esp+28h] [ebp-120h] BYREF
  float v27[12]; // [esp+58h] [ebp-F0h] BYREF
  float v28[12]; // [esp+88h] [ebp-C0h] BYREF
  float v29[12]; // [esp+B8h] [ebp-90h] BYREF
  float v30[12]; // [esp+E8h] [ebp-60h] BYREF
  float v31[12]; // [esp+118h] [ebp-30h] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3362) /*0x54dd13*/
    && ((v3 = *(_DWORD *)(a1 + 8), fabs(*(float *)(v3 + 808)) >= 0.005) || fabs(*(float *)(v3 + 812)) >= 0.005) )
  {
    if ( a3 ) /*0x54dd23*/
      *a3 = -1; /*0x54dd25*/
    Matrix3x4::Identity(v27); /*0x54dd2f*/
    Matrix3x4::Identity(v26); /*0x54dd38*/
    v18 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 864); /*0x54dd53*/
    v16 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 872); /*0x54dd69*/
    v22 = Math::ArcTan2(*(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dd7e*/
    v20 = Math::SinCos(*(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dd93*/
    v24 = Math::ArcTan2(*(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54dda8*/
    v4 = Math::SinCos(*(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54ddb5*/
    v21 = Math::RoundToInt(fabs(v4) * v18 + fabs(v20) * v16); /*0x54dddc*/
    v23 = Math::RoundToInt(v22 * v16); /*0x54dde5*/
    v5 = Math::RoundToInt(v16 - (double)v23); /*0x54ddfe*/
    v17 = v5; /*0x54de00*/
    v25 = Math::RoundToInt(v24 * v18); /*0x54de09*/
    v6 = Math::RoundToInt(v18 - (double)v25); /*0x54de15*/
    v7 = *(_DWORD *)(a1 + 8); /*0x54de1a*/
    v19 = v6; /*0x54de1f*/
    if ( *(float *)(v7 + 812) < 0.0 ) /*0x54de34*/
      v17 = -v5; /*0x54de38*/
    if ( *(float *)(v7 + 808) > 0.0 ) /*0x54de4d*/
      v19 = -v6; /*0x54de51*/
    v13 = (float)v21; /*0x54de5e*/
    Matrix3x3::ApplyCol1(v27, v13); /*0x54de61*/
    v14 = (float)v17; /*0x54de6f*/
    Matrix3x4::Translate(v26, v14); /*0x54de72*/
    v15 = (float)v19; /*0x54de80*/
    Matrix3x3::ApplyCol0(v26, v15); /*0x54de83*/
    Matrix3x3::RotateX(v26, *(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54de96*/
    Matrix3D::RotateZ(v26, *(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dea9*/
    Transform = Turret::GetTransform(a1, v30, a3); /*0x54deb8*/
    Transform::Copy(v28, Transform); /*0x54dec5*/
    v9 = MultiplyMatrix3x4(v31, v27, v28); /*0x54dee2*/
    v10 = MultiplyMatrix3x4(v29, v9, v26); /*0x54def5*/
    qmemcpy(a2, v10, 0x30u); /*0x54df06*/
    return a2; /*0x54defc*/
  }
  else
  {
    v12 = Turret::GetTransform(a1, v29, a3); /*0x54df29*/
    qmemcpy(a2, v12, 0x30u); /*0x54df39*/
    return a2; /*0x54df30*/
  }
}
}

// 0x586AC0
unsigned int * JumpjetLocomotionClass::ClampToCellBounds(MouseClass * aP1, IUnknown * aP2, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall JumpjetLocomotionClass::ClampToCellBounds(int *this, MouseClass *aP1, IUnknown *aP2, char a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // esi
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int aP2a; // [esp+24h] [ebp+8h]
  int v16; // [esp+28h] [ebp+Ch]

  v4 = this->unknown_3D; /*0x586ac8*/
  v5 = SLOWORD(aP2->field_0); /*0x586acf*/
  v6 = SHIWORD(aP2->field_0); /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - this->unknown_3F; /*0x586b05*/
  v9 = v5 + v6 - v4 - this->DestinationCoords; /*0x586b0d*/
  aP2a = this->q104 / 2; /*0x586b2d*/
  v10 = this->q042 / 2; /*0x586b36*/
  if ( (int)abs32(v8 - aP2a) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = this->q042; /*0x586b98*/
      if ( a4 ) /*0x586b9e*/
        --v11; /*0x586ba0*/
    }
    else
    {
      v11 = a4 != 0; /*0x586b8d*/
    }
  }
  else if ( v8 >= aP2a ) /*0x586b4b*/
  {
    if ( a4 ) /*0x586b64*/
      v8 = this->q104 - 1; /*0x586b6c*/
    else
      v8 = this->q104; /*0x586b75*/
    v11 = v9; /*0x586b6f*/
  }
  else
  {
    v8 = a4 != 0; /*0x586b58*/
    v11 = v9; /*0x586b5a*/
  }
  v12 = this->DestinationCoords + v11; /*0x586bb1*/
  v13 = v8 + this->unknown_3F; /*0x586bb3*/
  LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  aP1->field_0 = v16; /*0x586bdc*/
  return &aP1->field_0; /*0x586bb5*/
}
}

// 0x663470
float * JumpjetLocomotionClass::ComputePitchYaw(signed int a1, float * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_663470(signed int a1, float *a2, int *a3)
{
  signed int v3; // esi
  int *v4; // edi
  int v5; // ecx
  float *p_TiberiumExplosionDamage; // eax
  int v7; // eax
  int v8; // eax
  float *result; // eax
  float v10; // [esp+0h] [ebp-40h]
  float v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-34h] BYREF
  float v13[12]; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x663479*/
  v3 = a1; /*0x66347e*/
  a1 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v12) >> 10) + 1) >> 1) & 0x1F) /*0x6634a3*/
     - 8;
  v10 = (double)a1 * -0.1963495408493621; /*0x6634b6*/
  Matrix2D::Rotate(v13, v10); /*0x6634b9*/
  v4 = a3; /*0x6634c7*/
  if ( *(float *)(v3 + 80) == 0.0 ) /*0x6634d0*/
  {
LABEL_13:
    if ( v4 ) /*0x663565*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) /*0x663589*/
           & 0x1F;
    goto LABEL_15; /*0x663589*/
  }
  v11 = -*(float *)(v3 + 80); /*0x6634e0*/
  Matrix3D::RotateZ(v13, v11); /*0x6634e3*/
  v5 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 1732); /*0x6634f0*/
  if ( v5 == LODWORD(MEMORY[0x8871E0]->?) ) /*0x6634fe*/
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->?; /*0x663500*/
  }
  else if ( v5 == MEMORY[0x8871E0]->?[0] ) /*0x66350d*/
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->?; /*0x66350f*/
  }
  else
  {
    p_TiberiumExplosionDamage = (float *)&MEMORY[0x8871E0]->? + 1; /*0x663516*/
  }
  *(float *)&a1 = p_TiberiumExplosionDamage[3] * 1.570796326794897; /*0x663526*/
  if ( v4 ) /*0x66352a*/
  {
    if ( p_TiberiumExplosionDamage[2] * 1.570796326794897 == *(float *)(v3 + 80) ) /*0x66353d*/
    {
      v7 = *v4; /*0x66353f*/
      LOBYTE(v7) = *v4 | 0x20; /*0x663541*/
      *v4 = v7; /*0x663543*/
    }
    else if ( *(float *)(v3 + 80) == *(float *)&a1 ) /*0x663553*/
    {
      v8 = *v4; /*0x663555*/
      LOBYTE(v8) = *v4 | 0x40; /*0x663557*/
      *v4 = v8; /*0x663559*/
    }
    else
    {
      *v4 = -1; /*0x66355d*/
    }
    goto LABEL_13; /*0x663545*/
  }
LABEL_15:
  result = a2; /*0x66358b*/
  qmemcpy(a2, v13, 0x30u); /*0x66359a*/
  return result; /*0x66359c*/
}
}

// 0x69F670
float * JumpjetLocomotionClass::ComputeVoxelTransform2(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall Voxel_ComputeTransform2(_DWORD *a1, float *a2, _DWORD *a3)
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

  v3 = a1[11]; /*0x69f682*/
  if ( v3 ) /*0x69f68b*/
  {
    v5 = a1[8]; /*0x69f695*/
    v6 = a1[10]; /*0x69f698*/
    if ( v5 != -1 ) /*0x69f69e*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x69f6aa*/
        v6 = 0; /*0x69f6b0*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x69f6ac*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69f6bc*/
  }
  else
  {
    v4 = 1.0; /*0x69f68d*/
  }
  if ( v4 == 1.0 ) /*0x69f6cb*/
  {
    v7 = a1[2]; /*0x69f6cd*/
    if ( fabs(*(float *)(v7 + 808)) < 0.005 && fabs(*(float *)(v7 + 812)) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v24 = *a3 << 6; /*0x69f9d1*/
        *a3 = v24; /*0x69f9d4*/
        *a3 = v24 + a1[6]; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((signed int)a1, v55, a3); /*0x69f9e7*/
      Transform::Copy(v54, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(v50); /*0x69f9fd*/
      v26 = a1[11]; /*0x69fa02*/
      if ( !v26 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v27 = a1[8]; /*0x69fa11*/
      v28 = a1[10]; /*0x69fa14*/
      if ( v27 != -1 ) /*0x69fa20*/
      {
        if ( (int)MEMORY[0xA8ED84] - v27 >= v28 ) /*0x69fa28*/
          v28 = 0; /*0x69fa2e*/
        else
          v28 -= (int)MEMORY[0xA8ED84] - v27; /*0x69fa2a*/
      }
      if ( (double)(v26 - v28) / (double)(int)a1[11] < 1.0 ) /*0x69fa49*/
      {
        v29 = a1[11]; /*0x69fa4b*/
        if ( v29 ) /*0x69fa54*/
        {
          v31 = a1[8]; /*0x69fa5e*/
          v32 = a1[10]; /*0x69fa61*/
          if ( v31 != -1 ) /*0x69fa67*/
          {
            if ( (int)MEMORY[0xA8ED84] - v31 >= v32 ) /*0x69fa6f*/
              v32 = 0; /*0x69fa75*/
            else
              v32 -= (int)MEMORY[0xA8ED84] - v31; /*0x69fa71*/
          }
          v30 = (double)(v29 - v32) / (double)(int)a1[11]; /*0x69fa81*/
        }
        else
        {
          v30 = 1.0; /*0x69fa56*/
        }
        v33 = InterpolateVoxelAnimPose(v58, a1[7], a1[6], v30); /*0x69fa99*/
      }
      else
      {
LABEL_48:
        v34 = a1[6]; /*0x69faa0*/
        if ( !v34 ) /*0x69faa5*/
        {
LABEL_51:
          qmemcpy(v53, v50, sizeof(v53)); /*0x69fad9*/
          v39 = v54; /*0x69fadb*/
          v22 = v53; /*0x69fadc*/
          v23 = (float *)v57; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v33 = CopyAudioData((char *)v56, v34); /*0x69fab0*/
      }
      qmemcpy(v50, v33, sizeof(v50)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(v51); /*0x69f702*/
  Matrix3x4::Identity(v52); /*0x69f70e*/
  v44 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 864); /*0x69f729*/
  v46 = *(double *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 132))(a1[2]) + 872); /*0x69f73f*/
  v40 = Math::ArcTan2(*(float *)(a1[2] + 812)); /*0x69f754*/
  v48 = Math::SinCos(*(float *)(a1[2] + 812)); /*0x69f769*/
  v42 = Math::ArcTan2(*(float *)(a1[2] + 808)); /*0x69f77e*/
  v8 = Math::SinCos(*(float *)(a1[2] + 808)); /*0x69f78b*/
  v49 = Math::RoundToInt(fabs(v8) * v44 + fabs(v48) * v46); /*0x69f7b2*/
  v41 = Math::RoundToInt(v40 * v46); /*0x69f7bb*/
  v9 = Math::RoundToInt(v46 - (double)v41); /*0x69f7d4*/
  v47 = v9; /*0x69f7d6*/
  v43 = Math::RoundToInt(v42 * v44); /*0x69f7df*/
  v10 = Math::RoundToInt(v44 - (double)v43); /*0x69f7eb*/
  v11 = a1[2]; /*0x69f7f0*/
  v45 = v10; /*0x69f7f5*/
  if ( *(float *)(v11 + 812) < 0.0 ) /*0x69f80a*/
    v47 = -v9; /*0x69f80e*/
  if ( *(float *)(v11 + 808) > 0.0 ) /*0x69f823*/
    v45 = -v10; /*0x69f827*/
  v36 = (float)v49; /*0x69f834*/
  Matrix3x3::ApplyCol1(v51, v36); /*0x69f837*/
  v37 = (float)v47; /*0x69f848*/
  Matrix3x4::Translate(v52, v37); /*0x69f84b*/
  v38 = (float)v45; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v52, v38); /*0x69f85f*/
  Matrix3x3::RotateX(v52, *(float *)(a1[2] + 808)); /*0x69f875*/
  Matrix3D::RotateZ(v52, *(float *)(a1[2] + 812)); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v12 = Turret::GetTransform((signed int)a1, v60, a3); /*0x69f8a7*/
  Transform::Copy(v53, v12); /*0x69f8b4*/
  Matrix3x4::Identity(v50); /*0x69f8bd*/
  v13 = a1[11]; /*0x69f8c2*/
  v14 = a1 + 8; /*0x69f8c5*/
  if ( v13 ) /*0x69f8ce*/
  {
    v15 = *v14; /*0x69f8d0*/
    v16 = a1[10]; /*0x69f8d2*/
    if ( *v14 != -1 ) /*0x69f8d8*/
    {
      if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x69f8e4*/
        v16 = 0; /*0x69f8ea*/
      else
        v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x69f8e6*/
    }
    if ( (double)(v13 - v16) / (double)(int)a1[11] < 1.0 ) /*0x69f905*/
    {
      if ( a1[11] ) /*0x69f907*/
      {
        v18 = a1[11]; /*0x69f916*/
        v17 = (double)(v18 - Timeout::GetRemaining(v14)) / (double)v18; /*0x69f92c*/
      }
      else
      {
        v17 = 1.0; /*0x69f90e*/
      }
      v19 = InterpolateVoxelAnimPose(v59, a1[7], a1[6], v17); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v20 = a1[6]; /*0x69f94b*/
  if ( v20 ) /*0x69f950*/
  {
    v19 = CopyAudioData(v57, v20); /*0x69f95b*/
LABEL_29:
    qmemcpy(v50, v19, sizeof(v50)); /*0x69f96b*/
  }
  qmemcpy(v54, v50, sizeof(v54)); /*0x69f984*/
  v39 = v52; /*0x69f994*/
  v21 = MultiplyMatrix3x4(v56, v51, v54); /*0x69f9a2*/
  v22 = MultiplyMatrix3x4(v58, v21, v53); /*0x69f9b5*/
  v23 = v55; /*0x69f9b7*/
LABEL_52:
  qmemcpy(v51, MultiplyMatrix3x4(v23, v22, v39), sizeof(v51)); /*0x69faea*/
  qmemcpy(a2, v51, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}
}

// 0x6A4130
char JumpjetLocomotionClass::StubReturnZero_15(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_6A4130(unsigned int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  __int16 v5; // bx
  int v6; // edx
  __int16 v7; // dx
  char v8; // al

  v1 = a1; /*0x6a4132*/
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1504); /*0x6a4139*/
  if ( v2 < -1 || v2 > 8 ) /*0x6a414b*/
    return 0; /*0x6a414b*/
  v3 = 12 * *(_DWORD *)(a1 + 84) + 8333888; /*0x6a415c*/
  v4 = *(_BYTE *)(a1 + 92) ? (char)algn_7F2A41[12 * *(_DWORD *)(a1 + 84)] : byte_7F2A40[12 * *(_DWORD *)(a1 + 84)];
  if ( v2 == 8 ) /*0x6a4173*/
    return 0; /*0x6a4173*/
  if ( v2 == -1 ) /*0x6a417c*/
    return 0; /*0x6a417c*/
  LOBYTE(v5) = 0; /*0x6a4183*/
  HIBYTE(v5) = algn_7F2A41[12 * *(_DWORD *)(a1 + 84) + 3]; /*0x6a4185*/
  LOWORD(a1) = v5; /*0x6a4188*/
  if ( ((((a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x6a41a8*/
    return 0; /*0x6a41a8*/
  v6 = *(_DWORD *)(v1 + 88); /*0x6a41aa*/
  if ( dword_7F2964[4 * v4] == v6 /*0x6a41f1*/
    && v6
    && (LOBYTE(v7) = 0,
        HIBYTE(v7) = *(_BYTE *)(v3 + 4),
        LOWORD(a1) = v7,
        (v8 = byte_7F2A40[96 * ((((a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
  {
    return 1; /*0x6a41fc*/
  }
  else
  {
    return 0; /*0x6a4203*/
  }
}
}

// 0x709480
char JumpjetLocomotionClass::StubReturnZero_16()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_709480(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  char result; // al
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !FootClass::CanEnterCell((int)this, 0) ) /*0x709489*/
    return 0; /*0x7094d5*/
  v2 = this->q2B4; /*0x709497*/
  v3 = *this; /*0x70949e*/
  this->q13F = MEMORY[0xA8ED84]; /*0x7094a9*/
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (__thiscall **)(_DWORD *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( this->q2B4 != v2 ) /*0x7094c6*/
      this->q143 = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}
}

// 0x719BF0
int JumpjetLocomotionClass::SetCoordinateField(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_719BF0(_DWORD *a1)
{
  int v1; // edx
  int result; // eax
  _DWORD *v3; // ecx

  v1 = a1[15]; /*0x719bf5*/
  result = a1[17]; /*0x719bf8*/
  if ( v1 == -1 ) /*0x719bfe*/
  {
LABEL_4:
    if ( result ) /*0x719c10*/
      return result; /*0x719c10*/
    goto LABEL_5; /*0x719c10*/
  }
  if ( (int)MEMORY[0xA8ED84] - v1 < result ) /*0x719c0a*/
  {
    result -= (int)MEMORY[0xA8ED84] - v1; /*0x719c0c*/
    goto LABEL_4; /*0x719c0c*/
  }
LABEL_5:
  *(_BYTE *)(a1[3] + 625) = 0; /*0x719c12*/
  v3 = (_DWORD *)a1[3]; /*0x719c1c*/
  if ( !v3[173] ) /*0x719c1f*/
  {
    Mission::GetMissionDelay(v3); /*0x719c29*/
    if ( !JumpjetLocomotionClass::StubReturnZero_16((_DWORD *)a1[3]) ) /*0x719c31*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(*(_DWORD *)a1[3] + 1156))(a1[3], 0, 1); /*0x719c43*/
  }
  result = a1[14]; /*0x719c49*/
  if ( result > 0 ) /*0x719c4e*/
    a1[14] = ++result; /*0x719c51*/
  return result; /*0x719c54*/
}
}

// 0x729B40
void * JumpjetLocomotionClass::ComputeTurretTransform(unsigned int * a1, void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__stdcall ComputeTurretTransform(_DWORD *a1, void *a2, int *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  float *v6; // eax
  float *v7; // eax
  float *v8; // esi
  void *result; // eax
  float *v10; // eax
  int v11; // edx
  int v12; // eax
  double v13; // st7
  int v14; // edx
  int v15; // eax
  double v16; // st7
  int v17; // edx
  int v18; // eax
  float *Transform; // eax
  int v20; // esi
  float v21; // [esp+0h] [ebp-14Ch]
  double v22; // [esp+14h] [ebp-138h] BYREF
  int v23; // [esp+1Ch] [ebp-130h]
  int v24; // [esp+28h] [ebp-124h]
  _DWORD v25[12]; // [esp+2Ch] [ebp-120h] BYREF
  float v26[12]; // [esp+5Ch] [ebp-F0h] BYREF
  float v27[12]; // [esp+8Ch] [ebp-C0h] BYREF
  float v28[12]; // [esp+BCh] [ebp-90h] BYREF
  char v29[48]; // [esp+ECh] [ebp-60h] BYREF
  float v30[12]; // [esp+11Ch] [ebp-30h] BYREF

  v3 = a1[5]; /*0x729b52*/
  if ( v3 ) /*0x729b57*/
  {
    switch ( v3 ) /*0x729c61*/
    {
      case 2: /*0x729c61*/
        if ( a3 ) /*0x729c94*/
          *a3 = -1; /*0x729c96*/
        LODWORD(v22) = a1[12]; /*0x729ca1*/
        if ( LODWORD(v22) ) /*0x729ca5*/
        {
          v11 = a1[9]; /*0x729cbc*/
          v12 = a1[11]; /*0x729cbf*/
          if ( v11 != -1 ) /*0x729cc5*/
          {
            if ( (int)MEMORY[0xA8ED84] - v11 >= v12 ) /*0x729cd1*/
              v12 = 0; /*0x729cd7*/
            else
              v12 -= (int)MEMORY[0xA8ED84] - v11; /*0x729cd3*/
          }
          v24 = LODWORD(v22) - v12; /*0x729cdb*/
          v22 = (double)(LODWORD(v22) - v12) / (double)SLODWORD(v22) * 1.570796326794897; /*0x729ced*/
        }
        else
        {
          v22 = 1.0 * 1.570796326794897; /*0x729cb3*/
        }
        break; /*0x729cb7*/
      case 3: /*0x729c61*/
        v22 = 1.570796326794897; /*0x729c68*/
        break; /*0x729c78*/
      case 5: /*0x729c61*/
        v22 = -1.570796326794897; /*0x729c7d*/
        break; /*0x729c8d*/
      case 6: /*0x729c61*/
        if ( a3 ) /*0x729cf8*/
          *a3 = -1; /*0x729cfa*/
        v24 = a1[12]; /*0x729d05*/
        if ( v24 ) /*0x729d09*/
        {
          v14 = a1[9]; /*0x729d13*/
          v15 = a1[11]; /*0x729d16*/
          if ( v14 != -1 ) /*0x729d1c*/
          {
            if ( (int)MEMORY[0xA8ED84] - v14 >= v15 ) /*0x729d28*/
              v15 = 0; /*0x729d2e*/
            else
              v15 -= (int)MEMORY[0xA8ED84] - v14; /*0x729d2a*/
          }
          v13 = (double)(v24 - v15) / (double)v24; /*0x729d3a*/
        }
        else
        {
          v13 = 1.0; /*0x729d0b*/
        }
        v22 = (1.0 - v13) * -1.570796326794897; /*0x729d4c*/
        break; /*0x729d52*/
      case 7: /*0x729c61*/
        if ( a3 ) /*0x729d56*/
          *a3 = -1; /*0x729d58*/
        v24 = a1[12]; /*0x729d63*/
        if ( v24 ) /*0x729d67*/
        {
          v17 = a1[9]; /*0x729d71*/
          v18 = a1[11]; /*0x729d74*/
          if ( v17 != -1 ) /*0x729d7a*/
          {
            if ( (int)MEMORY[0xA8ED84] - v17 >= v18 ) /*0x729d86*/
              v18 = 0; /*0x729d8c*/
            else
              v18 -= (int)MEMORY[0xA8ED84] - v17; /*0x729d88*/
          }
          v16 = (double)(v24 - v18) / (double)v24; /*0x729d98*/
        }
        else
        {
          v16 = 1.0; /*0x729d69*/
        }
        v22 = (1.0 - v16) * 1.570796326794897; /*0x729daa*/
        break; /*0x729db0*/
      default:
        v22 = 0.0; /*0x729db2*/
        break; /*0x729db2*/
    }
    Transform = Turret::GetTransform((signed int)a1, v28, a3); /*0x729dcc*/
    Transform::Copy(v27, Transform); /*0x729dd9*/
    if ( a3 && *a3 != -1 ) /*0x729de7*/
    {
      v20 = *a3; /*0x729de2*/
      *a3 = (v20 << 8) | Math::RoundToInt(v22 * 32.0) & 0x3F; /*0x729e00*/
    }
    v21 = v22; /*0x729e0e*/
    Matrix3D::RotateZ(v27, v21); /*0x729e11*/
    qmemcpy(a2, v27, 0x30u); /*0x729e27*/
    return a2; /*0x729e16*/
  }
  else
  {
    v4 = a1[2] + 156; /*0x729b60*/
    v22 = *(double *)v4; /*0x729b67*/
    v23 = *(_DWORD *)(v4 + 8); /*0x729b7f*/
    v5 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v22) + 284); /*0x729b8d*/
    if ( a3 && *a3 != -1 ) /*0x729b9c*/
      *a3 = v5 + (*a3 << 6); /*0x729ba3*/
    Matrix3x4::Identity(v25); /*0x729ba9*/
    if ( v5 ) /*0x729bb1*/
    {
      v6 = Turret::GetTransform((signed int)a1, v30, a3); /*0x729bbc*/
      Transform::Copy(v26, v6); /*0x729bc6*/
      v7 = (float *)CopyAudioData(v29, v5); /*0x729bd9*/
      v8 = MultiplyMatrix3x4(v28, v7, v26); /*0x729bf1*/
      result = a2; /*0x729bf3*/
      qmemcpy(v25, v8, sizeof(v25)); /*0x729bfa*/
    }
    else
    {
      v10 = Turret::GetTransform((signed int)a1, v28, a3); /*0x729c1b*/
      Transform::Copy(v26, v10); /*0x729c25*/
      result = a2; /*0x729c2a*/
      qmemcpy(v25, v26, sizeof(v25)); /*0x729c3a*/
    }
    qmemcpy(a2, v25, 0x30u); /*0x729c07*/
  }
  return result; /*0x729c09*/
}
}

// 0x729E50
int JumpjetLocomotionClass::ComputeBounceHeight(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_729E50(int a1)
{
  _DWORD *v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  double v9; // [esp+Ch] [ebp-28h]
  int v10; // [esp+14h] [ebp-20h] BYREF
  int v11; // [esp+18h] [ebp-1Ch] BYREF
  int v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-10h]
  _DWORD v15[2]; // [esp+28h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+30h] [ebp-4h]
  int v17; // [esp+38h] [ebp+4h]

  v2 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x729e5d*/
  v15[0] = *v2; /*0x729e64*/
  v15[1] = v2[1]; /*0x729e76*/
  GroundHeight = v2[2]; /*0x729e82*/
  Coord::To_Screen(MEMORY[0x887324], v15, &v11); /*0x729e86*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x729eaa*/
  Coord::To_Screen(MEMORY[0x887324], v15, &v13); /*0x729eae*/
  v3 = *(_DWORD *)(a1 + 48); /*0x729eb7*/
  v10 = v3; /*0x729ebe*/
  v4 = v12 - v14; /*0x729ec2*/
  v17 = v12 - v14; /*0x729ec6*/
  if ( v3 ) /*0x729eca*/
  {
    v5 = *(_DWORD *)(a1 + 36); /*0x729eda*/
    v6 = *(_DWORD *)(a1 + 44); /*0x729edd*/
    if ( v5 != -1 ) /*0x729ee3*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x729eef*/
        v6 = 0; /*0x729ef5*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x729ef1*/
    }
    v9 = (double)(v3 - v6) / (double)v10; /*0x729f05*/
  }
  else
  {
    v9 = 1.0; /*0x729ecc*/
  }
  v7 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v10) >> 7) + 1) >> 1); /*0x729f2a*/
  switch ( *(_DWORD *)(a1 + 20) ) /*0x729f39*/
  {
    case 2: /*0x729f39*/
      if ( v9 > 0.4 && !*(_BYTE *)(a1 + 52) ) /*0x729f85*/
        *(_BYTE *)(a1 + 52) = 1; /*0x729f8c*/
      if ( v7 <= 70 || v7 >= 140 ) /*0x729f9b*/
        result = Math::RoundToInt((double)MEMORY[0x844A9C] * v9 + (double)v17); /*0x729fbc*/
      else
        result = MEMORY[0x844A9C] + v4; /*0x729fa3*/
      break; /*0x729fab*/
    case 3: /*0x729f39*/
      result = MEMORY[0x844A9C] + v4; /*0x729fd2*/
      break; /*0x729fdb*/
    case 4: /*0x729f39*/
      result = MEMORY[0x844A9C] + v4; /*0x729f46*/
      break; /*0x729f4f*/
    case 5: /*0x729f39*/
      result = v4 + MEMORY[0x844A98]; /*0x729fe3*/
      break; /*0x729feb*/
    case 6: /*0x729f39*/
      result = Math::RoundToInt((1.0 - v9) * (double)MEMORY[0x844A98] + (double)v17); /*0x729f66*/
      break; /*0x729f71*/
    default:
      result = JumpjetLocomotionClass::StubReturnFalse(a1); /*0x729fef*/
      break; /*0x729fef*/
  }
  return result; /*0x729f49*/
}
}

// 0x72A1A0
int JumpjetLocomotionClass::ShortFunc_72A1A0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 4 ? 2 : 0;
}

// 0x54EB20
namespace gamemd {
int JumpjetLocomotionClass_26::FindItem(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass_26_::sub_54EB20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( v2 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = (_DWORD *)this->q004; *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= v2 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}
}
} // namespace gamemd

// 0x439A10
double JumpjetLocomotionClass::ComputeVectorLengthMetric()
{
{
    int v2;
    double v3;
    int v4;
    double v5;
    int GroundHeight;
    int v7;
    double v8;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14[3];
    v2 = Math::RoundToInt(this->TurnRate);
    v3 = this->Speed;
    v14[0] = v2;
    v4 = Math::RoundToInt(v3);
    v5 = this->Climb;
    v14[1] = v4;
    v14[2] = Math::RoundToInt(v5);
    GroundHeight = Cell::GetGroundHeight(v14);
    v7 = Math::RoundToInt(this->Climb - (double)GroundHeight);
    v10 = v7;
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v14) + 80) & 0x100) != 0 && v7 >= DataGlobal_89C76C )
    v10 = v7 - DataGlobal_89C76C;
    v11 = Math::RoundToInt(this->Crash);
    v12 = Math::RoundToInt(this->Height);
    v13 = Math::RoundToInt((double)v10 * *(double *)(this + 8) + this->Accel);
    v8 = Math::Sqrt((double)v13 * (double)v13 + (double)v11 * (double)v11 + (double)v12 * (double)v12);
    return (double)(int)Math::RoundToInt(v8);
}
}

// 0x4AF610
int JumpjetLocomotionClass::LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 20;
    if ( *((int*)(a1) + 20) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x4AF8E0
int JumpjetLocomotionClass::StubReturnZero(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 80) )
    return -2147467259;
    *(int *)(a1 + 80) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x4AF930
int JumpjetLocomotionClass::StubReturnZero_0(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 80);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 80) = 0;
    return 0;
}
}

// 0x4AF970
bool JumpjetLocomotionClass::CheckPiggybackState(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 80)
    && *(char *)(a1 + 77)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// 0x4AFB40
unsigned int * JumpjetLocomotionClass::InitMovementState(unsigned int * a1, int a2)
{
{
    int v3;
    *((int*)(a1) + 7) = a2;
    *((int*)(a1) + 6) = a2;
    *((int*)(a1) + 8) = g_CurrentFrame;
    *((int*)(a1) + 9) = v3;
    *((int*)(a1) + 10) = 0;
    *((int*)(a1) + 11) = 0;
    return a1 + 8;
}
}

// 0x4AFB80
bool JumpjetLocomotionClass::StubReturnTrue(int a1)
{
{
    if ( *(int *)(a1 + 48) != g_DDraw_ClipRect || *(__int64 *)(a1 + 52) != DataGlobal_8A0794 )
    return 1;
    return (*(int *)(a1 + 60) != g_DDraw_ClipRect || *(__int64 *)(a1 + 64) != DataGlobal_8A0794)
    && (*(int *)(a1 + 60) != *(int *)(*(int *)(a1 + 8) + 156) || *(int *)(a1 + 64) != *(int *)(*(int *)(a1 + 8) + 160));
}
}

// 0x4AFC20
bool JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->ambientSoundController[0] != *(int *)&DataGlobal_89E138.__pad_14B0[4520] || aP0->ambientSoundController[1] != *(int *)&DataGlobal_89E138.__pad_14B0[4524] || aP0->ambientSoundController[2] != *(int *)&DataGlobal_89E138.__pad_14B0[4528])
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// 0x4AFC90
unsigned int * JumpjetLocomotionClass::GetCoordinate(unsigned int * a1, unsigned int * a2)
{
unsigned int coordY = a1[13];
unsigned int coordZ = a1[14];
*a2 = a1[12];
a2[1] = coordY;
a2[2] = coordZ;
return a2;
}

// 0x4AFCC0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    if ( *((int*)(a1) + 15) == g_DDraw_ClipRect && *((__int64 *)(a1) + 8) == DataGlobal_8A0794 )
  {
    v4 = *((int*)(a1) + 2);
    v5 = v4 + 156;
    v6 = *(int *)(v4 + 156);
    v7 = *(int *)(v4 + 160);
    v8 = *(int *)(v5 + 8);
    *a2 = v6;
    *((int*)(a2) + 1) = v7;
    *((int*)(a2) + 2) = v8;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 16);
    v3 = *((int*)(a1) + 17);
    *a2 = *((int*)(a1) + 15);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x4AFD40
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
{
    int *result;
    unsigned int v5;
    IUnknown *v6;
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 892))(*(int *)(arg0 + 8));
    if ( !(char)result )
  {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 896))(*(int *)(arg0 + 8));
    if ( !(char)result )
    {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 468))(*(int *)(arg0 + 8));
    if ( !(char)result )
      {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 472))(*(int *)(arg0 + 8));
    if ( !(char)result )
        {
    result = a1;
    v5 = aP1_4;
    v6 = aP3;
    *(int *)(arg0 + 48) = a1;
    *(int *)(arg0 + 52) = v5;
    *(int *)(arg0 + 56) = v6;
    if ( result != *(int **)&DataGlobal_89E138.__pad_14B0[4520] || v5 != *(int *)&DataGlobal_89E138.__pad_14B0[4524] || v6 != *(IUnknown **)&DataGlobal_89E138.__pad_14B0[4528] )
          {
    a1 = result;
    aP1_4 = v5;
    aP3 = v6;
    result = Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a1);
    if ( (result[80] & 0x100) != 0 )
            {
    result = (int *)(*(int *)&DataGlobal_89E138.__pad_14B0[4572] + *(int *)(arg0 + 56));
    *(int *)(arg0 + 56) = result;
            }
          }
        }
      }
    }
  }
    return result;
}
}

// 0x4AFE00
int JumpjetLocomotionClass::CheckWindowsErrorWrapper(int a1)
{
{
    int v1;
    int v2;
    double v3;
    int result;
    if ( *(int *)(a1 + 60) != g_DDraw_ClipRect || *(__int64 *)(a1 + 64) != DataGlobal_8A0794 )
  {
    if ( *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3220) )
    {
    v1 = *(int *)(a1 + 8);
    if ( !*(char *)(v1 + 1744) )
      {
    v2 = *(int *)(v1 + 1736);
    if ( v2 )
        {
    do
          {
    if ( !*(int *)(v2 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(**(int **)(v2 + 1652) + 72))(*(int *)(v2 + 1652));
    v2 = *(int *)(v2 + 1736);
          }
    while ( v2 && v2 != *(int *)(v2 + 1736) );
        }
      }
    }
  }
    if ( *(double *)(a1 + 76) >= 0.300000011920929 )
    v3 = 0.300000011920929;
    else
    v3 = *(double *)(a1 + 76);
    *(double *)(a1 + 76) = v3;
    *(int *)(a1 + 48) = g_DDraw_ClipRect;
    result = DataGlobal_8A0794;
    *(__int64 *)(a1 + 52) = DataGlobal_8A0794;
    return result;
}
}

// 0x4B0410
float * JumpjetLocomotionClass::ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3)
{
{
    int v3;
    double v4;
    int v5;
    int v6;
    int v7;
    float v9[12];
    v3 = *((int*)(a1) + 11);
    if ( v3 )
  {
    v5 = *((int*)(a1) + 8);
    v6 = *((int*)(a1) + 10);
    if ( v5 != -1 )
    {
    if ( (int)g_CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)g_CurrentFrame - v5;
    }
    v4 = (double)(v3 - v6) / (double)(int)*((int*)(a1) + 11);
  }
    else
  {
    v4 = 1.0;
  }
    if ( v4 != 1.0 || (v7 = *((int*)(a1) + 2), fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}
}

// 0x4B04D0
int JumpjetLocomotionClass::DispatchVirtualCall(int * a1)
{
{
    int v1;
    int v2;
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(int *)*((int*)(a1) + 2) + 444))(*((int*)(a1) + 2));
    return (*(int (__stdcall **)(int *, int))(v1 + 124))(a1, *(unsigned char *)(v2 + 284));
}
}

// 0x4B0EF0
char JumpjetLocomotionClass::UpdateFacingDirection(int a1, int a2)
{
return FacingClass::Update((char *)(a1[2] + 904), &a2);
}

// 0x4B4820
int JumpjetLocomotionClass::StubReturnTwo(int a1)
{
return 2;
}

// 0x4B4870
int JumpjetLocomotionClass::StubReturnZero_1(int a1)
{
return 0;
}

// 0x4B4880
int JumpjetLocomotionClass::DispatchCheckState(TunnelLocomotionClass * aP0)
{
return JumpjetLocomotionClass::CheckState(aP0);
}

// 0x4B48D0
char JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass * aP0, int a2)
{
{
    char result;
    result = (char)aP0 + 60;
    if ( aP0->Dest[2] != *(int *)&DataGlobal_89E138.__pad_14B0[4520] || aP0->HeadToCoord[0] != *(int *)&DataGlobal_89E138.__pad_14B0[4524] || aP0->HeadToCoord[1] != *(int *)&DataGlobal_89E138.__pad_14B0[4528] )
  {
    return JumpjetLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2);
  }
    return result;
}
}

// 0x4B4BE0
int JumpjetLocomotionClass::SetByteField(int a1)
{
{
    *(char *)(a1 + 97) = 0;
    return a1;
}
}

// 0x4B4BF0
int JumpjetLocomotionClass::SetByteField_0(int a1)
{
{
    *(char *)(a1 + 97) = 1;
    return a1;
}
}

// 0x4B4C00
int JumpjetLocomotionClass::GetField_0x54(int a1)
{
return a1[21];
}

// 0x4B4C10
int JumpjetLocomotionClass::GetField_0x58(int a1)
{
return a1[22];
}

// 0x4B4C20
int JumpjetLocomotionClass::GetField_0x48(int a1)
{
return a1[18];
}

// 0x4B4C60
int JumpjetLocomotionClass::MissionStub6(int a1)
{
return 0;
}

// 0x4B4C70
void JumpjetLocomotionClass::Stub3(int a1)
{
  ;
}

// 0x4B4C80
char JumpjetLocomotionClass::MissionStub7(int a1)
{
return 0;
}

// 0x4B4C90
void JumpjetLocomotionClass::Stub4(int a1)
{
  ;
}

// 0x4B4CA0
void JumpjetLocomotionClass::Stub5(int a1)
{
  ;
}

// 0x4B4CD0
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer(int a1)
{
return a1[20] != 0;
}

// 0x4B4D90
int JumpjetLocomotionClass::GetField_0x78(int a1, const void * a2, int * a3)
{
return DriveLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// 0x4B4DA0
LONG JumpjetLocomotionClass::GetField_0x7C(int a1)
{
return DriveLocomotionClass::AddRef(a1 - 4);
}

// 0x4B4DB0
LONG JumpjetLocomotionClass::GetField_0x80(int a1)
{
return DriveLocomotionClass::Release((volatile LONG *)(a1 - 4));
}

// 0x4B4DC0
int JumpjetLocomotionClass::loc_4B4DC0(int a1, const void * a2, int * a3)
{
return DriveLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

// 0x4B4DD0
LONG JumpjetLocomotionClass::loc_4B4DD0(int a1)
{
return DriveLocomotionClass::AddRef(a1 - 24);
}

// 0x4B4DE0
LONG JumpjetLocomotionClass::loc_4B4DE0(int a1)
{
return DriveLocomotionClass::Release((volatile LONG *)(a1 - 24));
}

// 0x4B5B30
char JumpjetLocomotionClass::StubReturnTrue_1(int a1)
{
return 1;
}

// 0x4B5B40
unsigned int * JumpjetLocomotionClass::GetSpeedCoordinate(unsigned int * a1, unsigned int * a2)
{
unsigned int coordY = a1[8];
unsigned int coordZ = a1[9];
*a2 = a1[7];
a2[1] = coordY;
a2[2] = coordZ;
return a2;
}

// 0x4B63A0
void JumpjetLocomotionClass::Stub6(int a1)
{
  ;
}

// 0x4B63B0
int JumpjetLocomotionClass::StubReturnZero_3(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 20) )
    return -2147467259;
    *(int *)(a1 + 20) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x4B6400
int JumpjetLocomotionClass::StubReturnZero_4(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 20);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 20) = 0;
    return 0;
}
}

// 0x4B6440
bool JumpjetLocomotionClass::CheckBaseClassState(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) && *(int *)(a1 + 20);
}
}

// 0x4B64D0
int JumpjetLocomotionClass::SmallStub_4B64D0(int a1)
{
return 3;
}

// 0x4B64E0
int JumpjetLocomotionClass::LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 5;
    if ( *((int*)(a1) + 5) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x4B65F0
BOOL JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass * aP0)
{
{
    return aP0->__pad_18[0] != 0;
}
}

// 0x4B6610
int JumpjetLocomotionClass::Thunk_VtableDispatch4(int a1)
{
{
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
}
}

// 0x4B6620
void JumpjetLocomotionClass::Stub7(int a1, int a2)
{
  ;
}

// 0x4B6630
char JumpjetLocomotionClass::MissionStub8(int a1, int a2, int a3, int a4)
{
return 0;
}

// 0x4B6640
char JumpjetLocomotionClass::MissionStub9(int a1)
{
return 0;
}

// 0x4B6650
void JumpjetLocomotionClass::Stub8(int a1)
{
  ;
}

// 0x4B6660
void JumpjetLocomotionClass::Stub9(int a1)
{
  ;
}

// 0x4B6670
int JumpjetLocomotionClass::CheckState3(int a1)
{
return -1;
}

// 0x4B6680
int JumpjetLocomotionClass::CheckState4(int a1)
{
return -1;
}

// 0x4B6690
int JumpjetLocomotionClass::CheckState5(int a1)
{
return -1;
}

// 0x4B66C0
BOOL JumpjetLocomotionClass::ShortFunc_4B66C0(int a1)
{
return a1[5] != 0;
}

// 0x4B6740
int JumpjetLocomotionClass::SmallStub_4B6740(int a1, const void * a2, int * a3)
{
return DropPodLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// 0x4B6750
LONG JumpjetLocomotionClass::SmallStub_4B6750(int a1)
{
return DropPodLocomotionClass::AddRef(a1 - 4);
}

// 0x4B6760
LONG JumpjetLocomotionClass::SmallStub_4B6760(int a1)
{
return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 4));
}

// 0x4B6770
int JumpjetLocomotionClass::SmallStub_4B6770(int a1, const void * a2, int * a3)
{
return DropPodLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

// 0x4B6780
LONG JumpjetLocomotionClass::SmallStub_4B6780(int a1)
{
return DropPodLocomotionClass::AddRef(a1 - 24);
}

// 0x4B6790
LONG JumpjetLocomotionClass::SmallStub_4B6790(int a1)
{
return DropPodLocomotionClass::Release((volatile LONG *)(a1 - 24));
}

// 0x4CCA20
int JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1)
{
{
    int v2;
    v2 = StreamClass::ResetPosition(aP0, (int)a1);
    if ( !v2 )
  {
    if ( a1 && (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 2 && *(char *)(*((int*)(a1) + 433) + 3597) )
    {
    LOBYTE(aP0->RefCount) = 1;
    return 0;
    }
    LOBYTE(aP0->RefCount) = 0;
  }
    return v2;
}
}

// 0x4CCA90
BOOL JumpjetLocomotionClass::ComputeFloatExpression(int a1)
{
{
    return *(char *)(a1 + 48) || *(float *)(*(int *)(a1 + 8) + 744) > 0.0;
}
}

// 0x4CCAC0
bool JumpjetLocomotionClass::ComputeFloatExpression_0(int a1)
{
  return *(double *)(a1 + 68) != 0.0;
}

// 0x4CCAE0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 7);
    v4 = *((int*)(a1) + 8);
    v5 = a2;
    *a2 = *((int*)(a1) + 6);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_8B3C7C;
    v4 = DataGlobal_8B3C80;
    v5 = a2;
    *a2 = DataGlobal_8B3C78;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// 0x4CCB40
char JumpjetLocomotionClass::ProcessLocomotionStep(int a1)
{
{
    int v1;
    int *v2;
    char result;
    int v4;
    if ( !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && *(double *)(a1 + 60) >= 1.0 && !*(int *)(a1 + 52) )
  {
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    *(int *)(a1 + 52) = (*(int (__thiscall **)(int))(*(int *)(v1) + 188))(v1);
  }
    v2 = *(int **)(a1 + 8);
    if ( v2[27] > 0 && !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && (*(unsigned char (__thiscall **)(int *))(*v2 + 512))(v2) )
  {
    (*(void (__thiscall **)(int))(**(int **)(a1 + 8) + 492))(*(int *)(a1 + 8));
  }
    JumpjetLocomotionClass::ProcessRotation(a1 - 4);
    DamageArea::ApplyScatter(a1 - 4);
    result = (*(int (__stdcall **)(int))(*(int *)(a1) + 96))(a1);
    if ( result )
  {
    v4 = *(int *)(a1 + 8);
    if ( *(char *)(v4 + 144) )
    {
    if ( *(int *)(v4 + 108) > 0 && (*(int *)(a1 + 24) != DataGlobal_8B3C78 || *(int *)(a1 + 28) != DataGlobal_8B3C7C || *(int *)(a1 + 32) != DataGlobal_8B3C80) && !*(char *)(a1 + 77) && !*(char *)(a1 + 76) && (*(int (__thiscall **)(int))(*(int *)(v4) + 456))(v4) > 0 )
      {
    LandFootClassAtPosition( a1 - 4, *(int *)(a1 + 32), 1, *(float *)(a1 + 24), *(int *)(a1 + 28), *(int *)(a1 + 32));
      }
    if ( *(int *)(*(int *)(a1 + 8) + 108) > 0 )
    FootClass::ProcessDeployMission(a1 - 4);
    JumpjetLocomotionClass::IsMapCoordVisible((int *)(a1 - 4));
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
    }
    else
    {
    return 0;
    }
  }
    return result;
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

}
// 0x4CF830
unsigned int * JumpjetLocomotionClass::CalculateBobOffset(int a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int (__stdcall ***v5)(int, void *, int *);
    int v6;
    int v7;
    int v8;
    double v9;
    int *v10;
    int v11;
    bool v12;
    int v14;
    v2 = a1;
    v3 = 0;
    v4 = 0;
    v5 = *(int (__stdcall ****)(int, void *, int *))(a1 + 8);
    a1 = 0;
    if ( v5 )
  {
    v6 = (**v5)(v5, &DataGlobal_822410, &v14);
    if ( v6 >= 0 )
    {
    v7 = v14;
    Release3COM(&a1);
    v4 = v7;
    a1 = v7;
    }
    else
    {
    Release3COM(&a1);
    v4 = 0;
    a1 = 0;
    }
    if ( v6 < 0 && v6 != -2147467262 )
    WinAPI::Wrapper(v6);
  }
    v8 = 0;
    if ( v4 )
    v8 = (*(int (__stdcall **)(int))(*(int *)(v4) + 12))(v4);
    if ( !*(char *)((*(int (__thiscall **)(int))(**(int **)(v2 + 8) + 132))(*(int *)(v2 + 8)) + 3221) && !*(char *)(v2 + 77) && !*(char *)(v2 + 76) && (*(int (__thiscall **)(int))(**(int **)(v2 + 8) + 456))(*(int *)(v2 + 8)) > v8 )
  {
    v14 = (int)g_CurrentFrame % 20;
    v9 = Math::SinCos((double)((int)g_CurrentFrame % 20) * 0.3141592653589793);
    v3 = Math::RoundToInt(v9 * 1.5 + 0.5);
  }
    v10 = a2;
    *a2 = 0;
    v11 = a1;
    v12 = a1 == 0;
    v10[1] = v3;
    if ( !v12 )
    (*(void (__stdcall **)(int))(*(int *)(v11) + 8))(v11);
    return v10;
}
}

// 0x4CF940
unsigned int * JumpjetLocomotionClass::ShortFunc_4CF940(int a1, unsigned int * a2)
{
*a2 = 0;
a2[1] = 0;
return a2;
}

// 0x4CFB00
float * JumpjetLocomotionClass::ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3)
{
{
    int *v3;
    int v4;
    float v6;
    int v7;
    int v8[3];
    float v9[12];
    char v10[48];
    v3 = (int *)(*(int *)(a1 + 8) + 156);
    v8[0] = *v3;
    v8[1] = v3[1];
    v8[2] = v3[2];
    v4 = *((unsigned char *)Coord::To_Cell(&DataGlobal_87F7E8, v8) + 284);
    if ( *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3221) )
    v4 = 0;
    qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9));
    v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F) - 8)
    * -0.1963495408493621;
    Matrix2D::Rotate(v9, v6);
    if ( a3 && *a3 != -1 )
  {
    *a3 = 32 * (v4 + (*a3 << 6));
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((short *)(*(int *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F;
  }
    qmemcpy(a2, v9, 0x30u);
    return a2;
}
}

// 0x4CFC10
char JumpjetLocomotionClass::SynchronizeFacingDirection(int a1, int a2)
{
return FacingClass::Set_SyncLog((char *)(a1[2] + 928), &a2);
}

// 0x4CFD90
char JumpjetLocomotionClass::ShortFunc_4CFD90(int a1)
{
return StreamClass::GetDirty(a1);
}

// 0x4CFDA0
bool JumpjetLocomotionClass::DispatchVirtualCall_1(int a1)
{
{
    return *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3367) == 0;
}
}

// 0x4CFE20
long long JumpjetLocomotionClass::ComputeFloatExpression_1(int a1)
{
{
    int v1;
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8));
    return Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)(a1 + 68));
}
}

// 0x4CFE50
int JumpjetLocomotionClass::StubReturnZero_8(unsigned char * a1)
{
{
    if ( *((int*)(a1) + 77) )
    return 1;
    if ( *((int*)(a1) + 76) )
    return 0;
    return 3 - ((*(unsigned char (__stdcall **)(char *))(*(int *)(a1) + 16))(a1) != 0);
}
}

// 0x4D0400
BOOL JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(int a2)
{
if (a2)
    WinAPI::Wrapper(-2147467261);
return *(unsigned int *)this == 0;
}

// 0x4D0510
int JumpjetLocomotionClass::GetInterface(int a1, const void * a2, unsigned int * a3)
{
return LocomotionClass::QueryInterface(a1 - 4, a2, a3);
}

// 0x4D0520
LONG JumpjetLocomotionClass::GetInterface2(int a1)
{
return COM::AddRef(a1 - 4);
}

// 0x4D0530
LONG JumpjetLocomotionClass::Stub2(int a1)
{
return COM::ReleaseRef((volatile LONG *)(a1 - 4));
}

// 0x5142A0
float * JumpjetLocomotionClass::ComputeAudio3DRotation_0(int a1, float * a2, unsigned int * a3)
{
{
    int v3;
    float *v4;
    float v6[12];
    v3 = *(int *)(a1 + 8);
    if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    v4 = Audio3D::ComputeRotation(a1, v6, a3);
    qmemcpy(a2, v4, 0x30u);
    return a2;
}
}

// 0x514C30
BOOL JumpjetLocomotionClass::HasScoreDisplayChanged(unsigned int * a1)
{
{
    return *((int*)(a1) + 5) != g_ScoreDisplayState1 || *((int*)(a1) + 6) != g_ScoreDisplayState2 || *((int*)(a1) + 7) != g_ScoreDisplayState3 || *((int*)(a1) + 8) != g_ScoreDisplayState1 || *((int*)(a1) + 9) != g_ScoreDisplayState2 || *((int*)(a1) + 10) != g_ScoreDisplayState3;
}
}

// 0x514C80
BOOL JumpjetLocomotionClass::ComputeFloatExpression_2(int a1)
{
{
    return (*(unsigned char (__stdcall **)(int))(*(int *)(a1) + 16))(a1) && *(double *)(a1 + 68) != 0.0;
}
}

// 0x514CB0
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    if ( *((int*)(a1) + 5) == g_ScoreDisplayState1 && (v2 = g_ScoreDisplayState2, *((int*)(a1) + 6) == g_ScoreDisplayState2) && (v3 = g_ScoreDisplayState3, *((int*)(a1) + 7) == g_ScoreDisplayState3) )
  {
    *a2 = g_ScoreDisplayState1;
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
    else
  {
    v4 = *((int*)(a1) + 6);
    v5 = *((int*)(a1) + 7);
    *a2 = *((int*)(a1) + 5);
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return a2;
  }
}
}

// 0x514D10
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 8) == g_ScoreDisplayState1 && *((int*)(a1) + 9) == g_ScoreDisplayState2 && *((int*)(a1) + 10) == g_ScoreDisplayState3 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 9);
    v3 = *((int*)(a1) + 10);
    *a2 = *((int*)(a1) + 8);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x516320
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_516320(unsigned int * a1)
{
{
    int *result;
    result = a1;
    if ( *((int*)(a1) + 5) != *((int*)(a1) + 8) || *((int*)(a1) + 6) != *((int*)(a1) + 9) || *((int*)(a1) + 7) != *((int*)(a1) + 10) )
  {
    *((int*)(a1) + 5) = g_ScoreDisplayState1;
    *((int*)(a1) + 6) = g_ScoreDisplayState2;
    *((int*)(a1) + 7) = g_ScoreDisplayState3;
    result = (int *)*((int*)(a1) + 2);
    result[376] = -1;
  }
    return result;
}
}

// 0x516370
char JumpjetLocomotionClass::UpdateFacingDirection_0(int a1, int a2)
{
return FacingClass::Update((char *)(a1[2] + 904), &a2);
}

// 0x516CA0
char JumpjetLocomotionClass::IsBridgeBlocking(int a1)
{
{
    int Member;
    int *v3;
    int *v4;
    int *v5;
    int *v6;
    int v7;
    int v8;
    short v9;
    short v10;
    short v11;
    int v12[2];
    int v13;
    if ( Team::AllMembersValid(*(int **)(a1 + 8)) )
  {
    Member = Team::GetMember(*(int **)(a1 + 8), 0);
    if ( (*(int (__thiscall **)(int))(*(int *)(Member) + 44))(Member) == 6 )
    {
    if ( *(char *)(*(int *)(Team::GetMember(*(int **)(a1 + 8), 0) + 1312) + 5821) )
    return 0;
    }
  }
    v3 = (int *)(*(int *)(a1 + 8) + 156);
    v12[0] = *v3;
    v12[1] = v3[1];
    v13 = v3[2];
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v12);
    v5 = Cell::IsBridge(v4);
    if ( v5 && *(char *)(v5[328] + 5821) )
  {
    v6 = v5 + 39;
    v7 = v5[39];
    v8 = v6[1];
    v13 = v6[2];
    LOWORD(v12[0]) = v7 / 256;
    HIWORD(v12[0]) = v8 / 256;
    v11 = *(int *)(*(int *)(a1 + 8) + 156) / 256;
    v9 = v11 - LOWORD(v12[0]);
    v10 = *(int *)(*(int *)(a1 + 8) + 160) / 256 - HIWORD(v12[0]);
    if ( v11 == LOWORD(v12[0]) )
    {
    if ( v10 == 1 )
    return 0;
    }
    else if ( v9 == 2 )
    {
    if ( v10 == 1 )
    return 0;
    }
    else if ( v9 == 3 && v10 == 1 )
    {
    return 0;
    }
  }
    return 1;
}
}

// 0x516E10
char JumpjetLocomotionClass::TryMoveToAdjacentCell(unsigned int a1, unsigned int a2)
{
{
    unsigned int v2;
    short *v3;
    int *v4;
    unsigned int v5;
    short v6;
    int v7;
    void *v8;
    int v9;
    int GroundHeight;
    int *v11;
    char v13[4];
    int v14;
    int v15;
    v2 = a1;
    if ( !(*(unsigned char (__stdcall **)(unsigned int))(*(int *)(a1) + 96))(a1) )
    return 0;
    if ( *(char *)(v2 + 108) )
    return 0;
    v3 = (short *)(*(int (__thiscall **)(int, char *))(**(int **)(v2 + 8) + 440))(*(int *)(v2 + 8), v13);
    v4 = *(int **)(v2 + 8);
    v5 = (((a2 >> 12) + 1) >> 1) & 7;
    v6 = LOWORD(Direction_X_Offsets[v5]) + *v3;
    LOWORD(v5) = HIWORD(Direction_X_Offsets[v5]);
    LOWORD(a2) = v6;
    HIWORD(a2) = v3[1] + v5;
    a1 = a2;
    v7 = *v4;
    v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&a1);
    if ( (*(int (__thiscall **)(int *, void *, int, int, int, int))(v7 + 428))(v4, v8, -1, -1, 0, 1) )
    return 0;
    *(char *)(v2 + 108) = 1;
    if ( (*(unsigned char (__stdcall **)(unsigned int))(*(int *)(v2) + 16))(v2) )
  {
    *(int *)(*(int *)(v2 + 8) + 1504) = -1;
    if ( *(int *)(v2 + 32) != g_ScoreDisplayState1 || *(int *)(v2 + 36) != g_ScoreDisplayState2 || *(int *)(v2 + 40) != g_ScoreDisplayState3 )
    {
    (*(void (__thiscall **)(int, unsigned int))(**(int **)(v2 + 8) + 244))(*(int *)(v2 + 8), v2 + 32);
    }
    v9 = SHIWORD(a1) << 8;
    *(int *)(v2 + 32) = ((short)a1 << 8) + 128;
    *(int *)(v2 + 36) = v9 + 128;
    *(int *)(v2 + 40) = 0;
    GroundHeight = Cell::GetGroundHeight((int *)(v2 + 32));
    *(int *)(v2 + 40) = GroundHeight;
    v11 = (int *)(*(int *)(v2 + 8) + 156);
    v14 = *v11;
    v15 = v11[1];
    if ( v11[2] >= GroundHeight + 2 * DataGlobal_A8F1C0 + DataGlobal_A8F1C0 )
    *(int *)(v2 + 40) = DataGlobal_A8F1B4 + GroundHeight;
    (*(void (__thiscall **)(int, unsigned int))(**(int **)(v2 + 8) + 240))(*(int *)(v2 + 8), v2 + 32);
    return 1;
  }
    else
  {
    (*(void (__stdcall **)(unsigned int, int, int, int))(*(int *)(v2) + 68))( v2, ((short)a1 << 8) + 128, (SHIWORD(a1) << 8) + 128, 0);
    return 1;
  }
}
}

// 0x516FC0
char JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1)
{
{
    if ( !(*(unsigned char (__stdcall **)(HoverLocomotionClass *, HoverLocomotionClass *))(*(int *)aP0->__pad_0 + 104))( aP0, aP1) )
    return 0;
    LOBYTE(aP0->CurrentWobbles[1]) = 1;
    *(int *)&aP0->HoverLocomotionClass_field_bool_68 = Random::Range( (int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)0x14, (IUnknown *)0x1E);
    if ( Random::Range((int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 50 )
    *(int *)&aP0->HoverLocomotionClass_field_bool_68 = -*(int *)&aP0->HoverLocomotionClass_field_bool_68;
    return 1;
}
}

// 0x517100
int JumpjetLocomotionClass::SmallStub_517100(int a1)
{
return 2;
}

// 0x5171C0
int JumpjetLocomotionClass::DispatchVirtualCall_3(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// 0x517210
bool JumpjetLocomotionClass::IsPositionWithinThreshold(int a1, int a2, int a3, int a4)
{
{
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v4 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned short)(v6 / 256) == (unsigned short)(a2 / 256)
    && (short)v7 == (unsigned short)(a3 / 256)
    && (int)abs32(v5 - a4) <= DataGlobal_A8F1C0;
}
}

// 0x54AD30
int JumpjetLocomotionClass::InitMovementParams(int a1, int a2)
{
{
    int v2;
    int v3;
    int v4;
    short v6[12];
    v2 = a2;
    v3 = a1;
    *(int *)(v3 + 24) = *(int *)((*(int (__thiscall **)(int))(*(int *)(a2) + 132))(a2) + 3440);
    *(int *)(v3 + 28) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3444);
    *(int *)(v3 + 32) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3448);
    *(int *)(v3 + 36) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3452);
    v4 = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3456);
    if ( v4 <= 2 * DataGlobal_ABC5E8 )
    v4 = 2 * DataGlobal_ABC5E8;
    *(int *)(v3 + 40) = v4;
    *(int *)(v3 + 44) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3460);
    *(int *)(v3 + 48) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3464);
    *(int *)(v3 + 52) = *(int *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3472);
    *(char *)(v3 + 56) = *(char *)((*(int (__thiscall **)(int))(*(int *)(v2) + 132))(v2) + 3468);
    FrameSnapshot::InitMax(v6, *(int *)(v3 + 24));
    qmemcpy((void *)(v3 + 80), v6, 0x18u);
    LOWORD(a1) = 0x4000;
    FacingClass::Update((char *)(v3 + 80), &a1);
    LOWORD(a1) = 0x4000;
    FacingClass::Set_SyncLog((char *)(v3 + 80), &a1);
    return StreamClass::ResetPosition(v3, v2);
}
}

// 0x54AE50
char JumpjetLocomotionClass::SmallStub_54AE50(int a1)
{
return *(unsigned char *)(a1 + 72);
}

// 0x54AE60
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 16);
    v4 = *((int*)(a1) + 17);
    v5 = a2;
    *a2 = *((int*)(a1) + 15);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_ABC5AC;
    v4 = DataGlobal_ABC5B0;
    v5 = a2;
    *a2 = DataGlobal_ABC5A8;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// 0x54B6E0
char JumpjetLocomotionClass::SynchronizeFacingDirection_0(int a1, int a2)
{
{
    return FacingClass::Set_SyncLog((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x54B710
int JumpjetLocomotionClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1839125434;
  a2[1] = 298972959;
  a2[2] = 1610653612;
  a2[3] = -1252326136;
  return 0;
}

// 0x54B750
HRESULT JumpjetLocomotionClass::InitClass(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    int v4;
    LPVOID *v5;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *((int*)(a1) + 37) = 0;
    *a1 = (int)(unsigned int)vt_JumpjetLocomotionClass;
    a1[1] = (unsigned int)vt_JumpjetLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_JumpjetLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v4 = *((int*)(a1) + 37);
    v5 = (LPVOID *)(a1 + 37);
    if ( v4 )
    (*(void (__stdcall **)(int))(*(int *)(v4) + 8))(v4);
    *v5 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v5);
}
}

// 0x54B7E0
HRESULT JumpjetLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[37] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[37];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
}
}

// 0x54B8D0
int JumpjetLocomotionClass::ConvertCoordToCell_0(int a1)
{
{
    int v1;
    int v2;
    int *v3;
    int v5[3];
    v1 = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 456))(*(int *)(a1 + 8));
    v2 = *(int *)(a1 + 8);
    if ( !*(char *)(v2 + 140) )
  {
    v3 = (int *)(v2 + 156);
    v5[0] = *v3;
    v5[1] = v3[1];
    v5[2] = v3[2];
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, v5) + 80) & 0x100) != 0 && v1 >= DataGlobal_ABC5DC && !*(char *)(*(int *)(a1 + 8) + 141) )
    {
    v1 -= DataGlobal_ABC5DC;
    }
  }
    if ( !(*(unsigned char (__thiscall **)(int))(**(int **)(a1 + 8) + 84))(*(int *)(a1 + 8)) )
    return 2;
    if ( v1 )
    return (v1 >= *(int *)(a1 + 40)) + 3;
    return 2;
}
}

// 0x54D0D0
bool JumpjetLocomotionClass::CheckCompositeState(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 76);
    return v1 && v1 != 2;
}
}

// 0x54D820
int JumpjetLocomotionClass::GetFloorZSetContext()
{
{
    int *v2;
    int *v3;
    int v4;
    unsigned int v5;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v11;
    int v12;
    int v13;
    int v14;
    v2 = (int *)(this->LinkedTo + 156);
    v12 = *v2;
    v13 = v2[1];
    v14 = v2[2];
    v3 = Coord::To_Cell(&DataGlobal_87F7E8, &v12);
    v4 = JumpjetLocomotionClass::FindClosestOccupiableCell(v3);
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, &v12) + 80) & 0x100) != 0 )
    v4 += DataGlobal_ABC5DC;
    if ( *(double *)(this + 112) <= 0.0 )
    return v4;
    v5 = ((unsigned int)((*ProgressTimer::GetValue((short *)(this + 84), &v11) >> 12) + 1) >> 1) & 7;
    v6 = v12 + DataGlobal_89F6D8[2 * v5];
    v7 = DataGlobal_89F6DC[2 * v5];
    v12 = v6;
    v13 += v7;
    v8 = Coord::To_Cell(&DataGlobal_87F7E8, &v12);
    v9 = JumpjetLocomotionClass::FindClosestOccupiableCell(v8);
    if ( (*((int *)Coord::To_Cell(&DataGlobal_87F7E8, &v12) + 80) & 0x100) != 0 )
    v4 += DataGlobal_ABC5DC;
    if ( v9 <= v4 )
    return (v9 + v4) / 2;
    else
    return v9;
}
}

// 0x54D930
char JumpjetLocomotionClass::DispatchVirtualCall_4(int a1, int a2)
{
{
    int v2;
    int *v3;
    int v4;
    int v6[3];
    char v7[12];
    LOBYTE(v2) = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v7);
    v6[0] = *v3;
    v4 = v3[1];
    v6[1] = v4;
    v2 = v3[2];
    v6[2] = v2;
    if ( v6[0] != DataGlobal_ABC5A8 || v4 != DataGlobal_ABC5AC || v2 != DataGlobal_ABC5B0 )
    {
    if ( !*(int *)(a1 + 76) || (LOBYTE(v2) = *(char *)(a1 + 140), (char)v2) )
      {
    LOBYTE(v2) = (*(int (__thiscall **)(int, int *))(**(int **)(a1 + 8) + 244))(*(int *)(a1 + 8), v6);
    *(char *)(a1 + 140) = 0;
      }
    }
  }
    return v2;
}
}

// 0x54D9B0
unsigned int * JumpjetLocomotionClass::GetConditionedCoordinate(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    if ( *((int*)(a1) + 19) )
  {
    v5 = *((int*)(a1) + 16);
    v6 = *((int*)(a1) + 17);
    *a2 = *((int*)(a1) + 15);
    *((int*)(a2) + 1) = v5;
    *((int*)(a2) + 2) = v6;
    return a2;
  }
    else
  {
    v2 = *(int *)(*((int*)(a1) + 2) + 160);
    v3 = *(int *)(*((int*)(a1) + 2) + 164);
    *a2 = *(int *)(*((int*)(a1) + 2) + 156);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x54DA00
int JumpjetLocomotionClass::StubReturnZero_9(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 124) )
    return -2147467259;
    *(int *)(a1 + 124) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x54DA50
int JumpjetLocomotionClass::StubReturnZero_10(int a1, unsigned int * a2)
{
{
    int v3;
    int *v4;
    int v5;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 - 12);
    if ( v3 )
  {
    if ( *(char *)(v3 + 1709) || *(char *)(v3 + 1710) )
    {
    *(char *)(v3 + 1709) = 0;
    *(char *)(*(int *)(a1 - 12) + 1710) = 0;
    v4 = *(int **)(a1 - 12);
    if ( !*(char *)(v4[135] + 492) && *(char *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1516) )
    (*(void (__thiscall **)(int, int, int))(**(int **)(a1 - 12) + 488))(*(int *)(a1 - 12), 10, 0);
    }
    *(int *)(*(int *)(a1 - 12) + 1064) = 0;
    *(int *)(*(int *)(a1 - 12) + 1068) = 0;
  }
    v5 = *(int *)(a1 + 124);
    if ( !v5 )
    return 1;
    *a2 = v5;
    *(int *)(a1 + 124) = 0;
    return 0;
}
}

// 0x54DB00
bool JumpjetLocomotionClass::StubReturnTrue_2(int a1)
{
{
    int v1;
    bool result;
    result = 0;
    if ( !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) )
  {
    if ( *(int *)(a1 + 124) )
    {
    if ( !*(char *)(a1 + 121) )
      {
    v1 = *(int *)(a1 - 12);
    if ( !*(char *)(v1 + 1709) || *(char *)(v1 + 1710) )
    return 1;
      }
    }
  }
    return result;
}
}

// 0x54DB50
int JumpjetLocomotionClass::LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 31;
    if ( *((int*)(a1) + 31) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x54DF70
BOOL JumpjetLocomotionClass::ShortFunc_54DF70(int a1)
{
{
    return *(int *)(a1 + 124) != 0;
}
}

// 0x54DF90
int JumpjetLocomotionClass::CheckAttachStatus()
{
return 152;
}

// 0x54DFA0
JumpjetLocomotionClass * JumpjetLocomotionClass::ProcessAttach(char a2)
{
{
    int v3;
    *(void**)this = vt_JumpjetLocomotionClass;
    *(this + 1) = (int)(unsigned int)vt_JumpjetLocomotionClass;
    *(this + 6) = (int)&vt_JumpjetLocomotionClass;
    v3 = *(this + 37);
    if ( v3 )
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (JumpjetLocomotionClass *)this;
}
}

// 0x54DFF0
int JumpjetLocomotionClass::SmallStub_54DFF0(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x54E000
LONG JumpjetLocomotionClass::SmallStub_54E000(int a1)
{
{
    return JumpjetLocomotionClass::AddRef(a1 - 4);
}
}

// 0x54E010
LONG JumpjetLocomotionClass::SmallStub_54E010(int a1)
{
{
    return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x54E020
int JumpjetLocomotionClass::SmallStub_54E020(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x54E030
LONG JumpjetLocomotionClass::SmallStub_54E030(int a1)
{
{
    return JumpjetLocomotionClass::AddRef(a1 - 24);
}
}

// 0x54E040
LONG JumpjetLocomotionClass::SmallStub_54E040(int a1)
{
{
    return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}

// 0x54E890
namespace gamemd {
void JumpjetLocomotionClass_26::ClearBuffer()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->JumpjetLocomotionClass_26_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->JumpjetLocomotionClass_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->JumpjetLocomotionClass_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x54E8C0
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->JumpjetLocomotionClass_26_field_0xC )
    return (unsigned int)(a2 - this->JumpjetLocomotionClass_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x54E8E0
namespace gamemd {
int JumpjetLocomotionClass_26::Seek(int a2)
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass_26_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->q004 + 4 * a2); /*0x54e8ea*/
}
}
} // namespace gamemd

// 0x54E8F0
namespace gamemd {
char JumpjetLocomotionClass_26::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x54E930
namespace gamemd {
char JumpjetLocomotionClass_26::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->JumpjetLocomotionClass_26_field_0x4 )
      {
    v6 = this->JumpjetLocomotionClass_26_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->JumpjetLocomotionClass_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->JumpjetLocomotionClass_26_field_0x4 = 0;
        }
      }
    this->JumpjetLocomotionClass_26_field_0x4 = v4;
    this->JumpjetLocomotionClass_26_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ClearBuffer();
    return 1;
  }
}
}
} // namespace gamemd

// 0x54E9E0
namespace gamemd {
void JumpjetLocomotionClass_26::ddtor()
{
{
    if ( this->JumpjetLocomotionClass_26_field_0x4 && this->IsAllocated )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    this->JumpjetLocomotionClass_26_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->JumpjetLocomotionClass_26_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x54EA10
namespace gamemd {
int JumpjetLocomotionClass_26::Read(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->JumpjetLocomotionClass_26_field_0xC )
    return 0;
    v3 = this->JumpjetLocomotionClass_26_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x54EA50
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::Write(int a2)
{
{
    if ( (unsigned char)this->JumpjetLocomotionClass_26_field_0xC )
    return (unsigned int)(a2 - this->JumpjetLocomotionClass_26_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x54EA70
namespace gamemd {
char JumpjetLocomotionClass_26::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->JumpjetLocomotionClass_26_field_0x4 )
    {
    v5 = this->JumpjetLocomotionClass_26_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->JumpjetLocomotionClass_26_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->JumpjetLocomotionClass_26_field_0x4 = 0;
      }
    }
    this->JumpjetLocomotionClass_26_field_0x4 = v4;
    this->JumpjetLocomotionClass_26_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ClearBuffer();
  }
    v7 = this->JumpjetLocomotionClass_26_field_0x8;
    if ( v7 < this->JumpjetLocomotionClass_26_field_0x10 )
    this->JumpjetLocomotionClass_26_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x54EB50
namespace gamemd {
VectorClass * JumpjetLocomotionClass_26::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_KamikazeControl;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x54EBA0
namespace gamemd {
DynamicVector * JumpjetLocomotionClass_26::Constructor_VectorClass_KamikazeControl___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_KamikazeControl;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd

// 0x55A940
char JumpjetLocomotionClass::MissionStub(int a1)
{
return 0;
}

// 0x55ab70
{
return 0;
}

// 0x55AB70
char JumpjetLocomotionClass::MissionStub2(int a1, int a2)
{
{
    return 0;
}
}

// 0x55AB80
char JumpjetLocomotionClass::MissionStub3(int a1, int a2)
{
return 0;
}

// 0x55AB90
void JumpjetLocomotionClass::Stub10(int a1)
{
  ;
}

// 0x55ABA0
int JumpjetLocomotionClass::StubReturnFalse(int a1)
{
return 0;
}

// 0x55ABB0
int JumpjetLocomotionClass::CheckState(TunnelLocomotionClass * aP0)
{
return 2;
}

// 0x55ABC0
int JumpjetLocomotionClass::CheckState2(int a1, int a2)

// 0x55ABE0
char JumpjetLocomotionClass::MissionStub4(int a1)
{
return 1;
}

// 0x55ABE0
char JumpjetLocomotionClass::MissionStub4(int a1)
{
{
    return 1;
}
}

// 0x55ABF0
int JumpjetLocomotionClass::MissionStub5(int a1, int a2)
{
return 0;
}

// 0x55AC00
void JumpjetLocomotionClass::Stub11(int a1, int a2, int a3, int a4)
{
  ;
}

// 0x55AC10
void JumpjetLocomotionClass::Stub12(int a1, int a2, int a3, int a4, int a5)
{
  ;
}

// 0x55AC20
void JumpjetLocomotionClass::Stub13(int a1)
{
  ;
}

// 0x55AC30
void JumpjetLocomotionClass::Stub14(int a1, int a2)
{
  ;
}

// 0x55AC50
void JumpjetLocomotionClass::Stub15(int a1, int a2, int a3, int a4)
{
  ;
}

// 0x55AC60
char JumpjetLocomotionClass::StubReturnTrue_3(int a1)
{
return 1;
}

// 0x55AC70
unsigned int * JumpjetLocomotionClass::GetGlobalCoordinate(int a1, unsigned int * a2)
{
{
    int v3;
    int v4;
    v3 = DataGlobal_ABCC7C;
    v4 = DataGlobal_ABCC80;
    *a2 = DataGlobal_ABCC78;
    *((int*)(a2) + 1) = v3;
    *((int*)(a2) + 2) = v4;
    return a2;
}
}

// 0x55ACD0
char JumpjetLocomotionClass::StubReturnZero_11(int a1)
{
return 0;
}

// 0x55ACE0
void JumpjetLocomotionClass::Stub16(int a1, int a2)
{
  ;
}

// 0x55ACF0
int JumpjetLocomotionClass::MissionStub10(int a1)
{
return 0;
}

// 0x55AD00
int JumpjetLocomotionClass::MissionStub11(int a1)
{
return 0;
}

// 0x5AFF70
char JumpjetLocomotionClass::SmallStub_5AFF70(int a1)
{
{
    return *(char *)(a1 + 44);
}
}

// 0x5AFF80
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = a2;
    *a2 = *((int*)(a1) + 5);
  }
    else
  {
    result = a2;
    v3 = DataGlobal_ABEE14;
    v4 = DataGlobal_ABEE18;
    v5 = a2;
    *a2 = g_MatrixTransformState;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// 0x5AFFE0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 8) == g_MatrixTransformState && *((int*)(a1) + 9) == DataGlobal_ABEE14 && *((int*)(a1) + 10) == DataGlobal_ABEE18 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 9);
    v3 = *((int*)(a1) + 10);
    *a2 = *((int*)(a1) + 8);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x5B0060
int JumpjetLocomotionClass::ShortFunc_5B0060(int a1)
{
{
    BuildingClass::ProcessMission(a1 - 4, 1);
    return (*(int (__stdcall **)(int))(*(int *)(a1) + 16))(a1);
}
}

// 0x5B0080
int JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown * aP2, IUnknown * aP3)
{
{
    int result;
    IUnknown *v5;
    IUnknown *v6;
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)result )
  {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 896))(*(int *)(a1 + 8));
    if ( !(char)result )
    {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)result )
      {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)result )
        {
    v5 = aP2;
    v6 = aP3;
    *(int *)(a1 + 20) = aP1;
    *(int *)(a1 + 24) = v5;
    *(int *)(a1 + 28) = v6;
    result = (int)Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&aP1);
    if ( (*(int *)(result + 320) & 0x100) != 0 )
          {
    result = Coord::ScaleToScreenY((void *)0x3C);
    *(int *)(a1 + 28) += result;
          }
    *(char *)(a1 + 44) = 1;
        }
      }
    }
  }
    return result;
}
}

// 0x5B0120
int JumpjetLocomotionClass::SyncMatrixTransformState(int a1)
{
{
    int result;
    result = a1;
    *(int *)(a1 + 20) = g_MatrixTransformState;
    *(int *)(a1 + 24) = DataGlobal_ABEE14;
    *(int *)(a1 + 28) = DataGlobal_ABEE18;
    if ( *(int *)(a1 + 32) == g_MatrixTransformState && *(int *)(a1 + 36) == DataGlobal_ABEE14 && *(int *)(a1 + 40) == DataGlobal_ABEE18 )
  {
    *(char *)(a1 + 44) = 0;
  }
    return result;
}
}

// 0x5B0170
char JumpjetLocomotionClass::UpdateFacingDirection_1(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x5B01A0
int JumpjetLocomotionClass::InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4)
{
{
    *((int*)(a1) + 8) = a2;
    *((int*)(a1) + 9) = a3;
    *((int*)(a1) + 10) = a4;
    return a2;
}
}

// 0x5B19D0
int JumpjetLocomotionClass::SmallStub_5B19D0(int a1)
{
return 2;
}

// 0x5B19E0
bool JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->NeedsSaveOrLink != g_MatrixTransformState || *(__int64 *)&aP0->objectTypeFlags != *(__int64 *)(&g_MatrixTransformState + 1))
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// 0x5B1A50
int JumpjetLocomotionClass::DispatchVirtualCall_5(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// 0x5B1AA0
bool JumpjetLocomotionClass::IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4)
{
{
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v4 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned short)(v6 / 256) == (unsigned short)(a2 / 256)
    && (short)v7 == (unsigned short)(a3 / 256)
    && (int)abs32(v5 - a4) <= DataGlobal_ABEE50;
}
}

// 0x661F50
BOOL JumpjetLocomotionClass::HasFieldStateChanged(unsigned int * a1)
{
{
    return *((int*)(a1) + 5) != DataGlobal_B04E38 || *((int*)(a1) + 6) != DataGlobal_B04E3C || *((int*)(a1) + 7) != DataGlobal_B04E40;
}
}

// 0x661F90
bool JumpjetLocomotionClass::CheckCompositeState_0(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 60);
    return v1 >= 3 && v1 <= 5;
}
}

// 0x661FB0
unsigned int * JumpjetLocomotionClass::GetCoordinate_0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 6);
    v3 = *((int*)(a1) + 7);
    *a2 = *((int*)(a1) + 5);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// 0x6632E0
int JumpjetLocomotionClass::ComputeFloatExpression_3(int a1, int a2, int a3, int a4)
{
{
    int result;
    int v5;
    char *p_TiberiumExplosionDamage;
    bool v7;
    int v8;
    int v9;
    result = a1;
    v5 = *(int *)(*(int *)(a1 + 8) + 1732);
    if ( v5 == LODWORD(g_RulesClass_Instance->?) )
  {
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->?;
  }
    else
  {
    v7 = v5 == g_RulesClass_Instance->?[0];
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->?;
    if ( !v7 )
    p_TiberiumExplosionDamage = (char *)&g_RulesClass_Instance->? + 4;
  }
    if ( *(int *)(a1 + 20) == DataGlobal_B04E38 && *(int *)(a1 + 24) == DataGlobal_B04E3C && *(int *)(a1 + 28) == DataGlobal_B04E40 )
  {
    if ( *(int *)p_TiberiumExplosionDamage )
    {
    *(int *)(a1 + 60) = 1;
    v8 = *(int *)p_TiberiumExplosionDamage;
    }
    else
    {
    *(int *)(a1 + 60) = 2;
    v8 = *((int *)(p_TiberiumExplosionDamage) + 1);
    }
    *(int *)(a1 + 32) = g_CurrentFrame;
    *(int *)(a1 + 36) = v9;
    *(int *)(a1 + 40) = v8;
    *(int *)(a1 + 44) = v8;
    *(float *)(a1 + 80) = *((float *)(p_TiberiumExplosionDamage) + 2) * 1.570796326794897;
    *(int *)(a1 + 20) = a2;
    *(int *)(a1 + 24) = a3;
    *(int *)(a1 + 28) = a4;
    return a2;
  }
    return result;
}
}

// 0x663460
int JumpjetLocomotionClass::SmallStub_663460(int a1)
{
return 3;
}

// 0x69ED20
int JumpjetLocomotionClass::LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 20;
    if ( *((int*)(a1) + 20) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x69EFF0
int JumpjetLocomotionClass::StubReturnZero_12(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 80) )
    return -2147467259;
    *(int *)(a1 + 80) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x69F040
int JumpjetLocomotionClass::StubReturnZero_13(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 80);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 80) = 0;
    return 0;
}
}

// 0x69F080
bool JumpjetLocomotionClass::CheckPiggybackState_0(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 80)
    && *(char *)(a1 + 77)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// 0x69F250
unsigned int * JumpjetLocomotionClass::InitMovementState_0(unsigned int * a1, int a2)
{
{
    int v3;
    *((int*)(a1) + 7) = a2;
    *((int*)(a1) + 6) = a2;
    *((int*)(a1) + 8) = g_CurrentFrame;
    *((int*)(a1) + 9) = v3;
    *((int*)(a1) + 10) = 0;
    *((int*)(a1) + 11) = 0;
    return a1 + 8;
}
}

// 0x69F290
bool JumpjetLocomotionClass::StubReturnTrue_5(int a1)
{
{
    if ( *(int *)(a1 + 48) != g_OverlayTypeConfig || *(__int64 *)(a1 + 52) != DataGlobal_B077FC )
    return 1;
    return (*(int *)(a1 + 60) != g_OverlayTypeConfig || *(__int64 *)(a1 + 64) != DataGlobal_B077FC)
    && (*(int *)(a1 + 60) != *(int *)(*(int *)(a1 + 8) + 156) || *(int *)(a1 + 64) != *(int *)(*(int *)(a1 + 8) + 160));
}
}

// 0x69F330
bool JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass * aP0)
{
{
    if ( TimerClass::Active(*(int *)&aP0->__pad_0[8] + 904) )
    return 1;
    return (*(unsigned char (__stdcall **)(InfantryClass *))(*(int *)aP0->__pad_0 + 16))(aP0)
    && (aP0->ambientSoundController[0] != *(int *)&DataGlobal_B05488.__pad_14B0[3776] || aP0->ambientSoundController[1] != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || aP0->ambientSoundController[2] != *(int *)&DataGlobal_B05488.__pad_14B0[3784])
    && (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1336))(*(int *)&aP0->__pad_0[8]) > 0;
}
}

// 0x69F3A0
unsigned int * JumpjetLocomotionClass::GetCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 13);
    v3 = *((int*)(a1) + 14);
    *a2 = *((int*)(a1) + 12);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
}
}

// 0x69F3D0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    if ( *((int*)(a1) + 15) == g_OverlayTypeConfig && *((__int64 *)(a1) + 8) == DataGlobal_B077FC )
  {
    v4 = *((int*)(a1) + 2);
    v5 = v4 + 156;
    v6 = *(int *)(v4 + 156);
    v7 = *(int *)(v4 + 160);
    v8 = *(int *)(v5 + 8);
    *a2 = v6;
    *((int*)(a2) + 1) = v7;
    *((int*)(a2) + 2) = v8;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 16);
    v3 = *((int*)(a1) + 17);
    *a2 = *((int*)(a1) + 15);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x69F450
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
{
    int *result;
    unsigned int v5;
    IUnknown *v6;
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 892))(*(int *)(arg0 + 8));
    if ( !(char)result )
  {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 896))(*(int *)(arg0 + 8));
    if ( !(char)result )
    {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 468))(*(int *)(arg0 + 8));
    if ( !(char)result )
      {
    result = (int *)(*(int (__thiscall **)(int))(**(int **)(arg0 + 8) + 472))(*(int *)(arg0 + 8));
    if ( !(char)result )
        {
    result = a1;
    v5 = aP1_4;
    v6 = aP3;
    *(int *)(arg0 + 48) = a1;
    *(int *)(arg0 + 52) = v5;
    *(int *)(arg0 + 56) = v6;
    if ( result != *(int **)&DataGlobal_B05488.__pad_14B0[3776] || v5 != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || v6 != *(IUnknown **)&DataGlobal_B05488.__pad_14B0[3784] )
          {
    a1 = result;
    aP1_4 = v5;
    aP3 = v6;
    result = Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)&a1);
    if ( (result[80] & 0x100) != 0 )
            {
    result = (int *)(*(int *)&DataGlobal_B05488.__pad_14B0[3828] + *(int *)(arg0 + 56));
    *(int *)(arg0 + 56) = result;
            }
          }
        }
      }
    }
  }
    return result;
}
}

// 0x69F510
int JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(int a1)
{
{
    int v1;
    int v2;
    double v3;
    int result;
    if ( *(int *)(a1 + 60) != g_OverlayTypeConfig || *(__int64 *)(a1 + 64) != DataGlobal_B077FC )
  {
    if ( *(char *)((*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 132))(*(int *)(a1 + 8)) + 3220) )
    {
    v1 = *(int *)(a1 + 8);
    if ( !*(char *)(v1 + 1744) )
      {
    v2 = *(int *)(v1 + 1736);
    if ( v2 )
        {
    do
          {
    if ( !*(int *)(v2 + 1652) )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(**(int **)(v2 + 1652) + 72))(*(int *)(v2 + 1652));
    v2 = *(int *)(v2 + 1736);
          }
    while ( v2 && v2 != *(int *)(v2 + 1736) );
        }
      }
    }
  }
    if ( *(double *)(a1 + 76) >= 0.300000011920929 )
    v3 = 0.300000011920929;
    else
    v3 = *(double *)(a1 + 76);
    *(double *)(a1 + 76) = v3;
    *(int *)(a1 + 48) = g_OverlayTypeConfig;
    result = DataGlobal_B077FC;
    *(__int64 *)(a1 + 52) = DataGlobal_B077FC;
    return result;
}
}

// 0x69FB20
float * JumpjetLocomotionClass::ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3)
{
{
    int v3;
    double v4;
    int v5;
    int v6;
    int v7;
    float v9[12];
    v3 = *((int*)(a1) + 11);
    if ( v3 )
  {
    v5 = *((int*)(a1) + 8);
    v6 = *((int*)(a1) + 10);
    if ( v5 != -1 )
    {
    if ( (int)g_CurrentFrame - v5 >= v6 )
    v6 = 0;
    else
    v6 -= (int)g_CurrentFrame - v5;
    }
    v4 = (double)(v3 - v6) / (double)(int)*((int*)(a1) + 11);
  }
    else
  {
    v4 = 1.0;
  }
    if ( v4 != 1.0 || (v7 = *((int*)(a1) + 2), fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 )
  {
    if ( a3 )
    *a3 = -1;
  }
    qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u);
    return a2;
}
}

// 0x69FBE0
int JumpjetLocomotionClass::DispatchVirtualCall_6(int * a1)
{
{
    int v1;
    int v2;
    v1 = *a1;
    v2 = (*(int (__thiscall **)(int))(*(int *)*((int*)(a1) + 2) + 444))(*((int*)(a1) + 2));
    return (*(int (__stdcall **)(int *, int))(v1 + 124))(a1, *(unsigned char *)(v2 + 284));
}
}

// 0x6A05C0
char JumpjetLocomotionClass::UpdateFacingDirection_2(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x6A3E50
int JumpjetLocomotionClass::SmallStub_6A3E50(int a1)
{
return 2;
}

// 0x6A3EA0
int JumpjetLocomotionClass::StubReturnZero_14(int a1)
{
return 0;
}

// 0x6A3EB0
int JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0)
{
{
    return JumpjetLocomotionClass::CheckState(aP0);
}
}

// 0x6A3F00
char JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass * aP0, int a2)
{
{
    char result;
    result = (char)aP0 + 60;
    if ( aP0->Dest[2] != *(int *)&DataGlobal_B05488.__pad_14B0[3776] || aP0->HeadToCoord[0] != *(int *)&DataGlobal_B05488.__pad_14B0[3780] || aP0->HeadToCoord[1] != *(int *)&DataGlobal_B05488.__pad_14B0[3784] )
  {
    return WalkLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2);
  }
    return result;
}
}

// 0x6A4210
int JumpjetLocomotionClass::SetByteField_1(int a1)
{
{
    *(char *)(a1 + 97) = 0;
    return a1;
}
}

// 0x6A4220
int JumpjetLocomotionClass::SetByteField_2(int a1)
{
{
    *(char *)(a1 + 97) = 1;
    return a1;
}
}

// 0x6A4230
int JumpjetLocomotionClass::SmallStub_6A4230(int a1)
{
{
    return *(int *)(a1 + 84);
}
}

// 0x6A4240
int JumpjetLocomotionClass::SmallStub_6A4240(int a1)
{
{
    return *(int *)(a1 + 88);
}
}

// 0x6A4250
int JumpjetLocomotionClass::SmallStub_6A4250(int a1)
{
{
    return *(int *)(a1 + 72);
}
}

// 0x6A4280
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer_0(int a1)
{
{
    return *(int *)(a1 + 80) != 0;
}
}

// 0x6A4300
int JumpjetLocomotionClass::SmallStub_6A4300(int a1, const void * a2, int * a3)
{
{
    return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x6A4310
LONG JumpjetLocomotionClass::SmallStub_6A4310(int a1)
{
{
    return ShipLocomotionClass::AddRef(a1 - 4);
}
}

// 0x6A4320
LONG JumpjetLocomotionClass::SmallStub_6A4320(int a1)
{
{
    return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x6A4330
int JumpjetLocomotionClass::loc_6A4330(int a1, const void * a2, int * a3)
{
{
    return ShipLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x6A4340
LONG JumpjetLocomotionClass::loc_6A4340(int a1)
{
{
    return ShipLocomotionClass::AddRef(a1 - 24);
}
}

// 0x6A4350
LONG JumpjetLocomotionClass::loc_6A4350(int a1)
{
{
    return ShipLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}

// 0x718080
bool JumpjetLocomotionClass::ShortFunc_718080(int a1)
{
{
    return *(char *)(a1 + 48) == 1;
}
}

// 0x718090
bool JumpjetLocomotionClass::ShortFunc_718090()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall JumpjetLocomotionClass::sub_718090(_DWORD *this)
{
  return (*(unsigned __int8 (__stdcall **)(_DWORD *))(this->vtable2 + 16))(this + 1) == 0; /*0x71809e*/
}
}

// 0x7180A0
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = *((int*)(a1) + 8);
  }
    else
  {
    v3 = *(int *)(*((int*)(a1) + 2) + 156);
    v4 = *(int *)(*((int*)(a1) + 2) + 160);
    v5 = *(int *)(*((int*)(a1) + 2) + 164);
    result = a2;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return result;
}
}

// 0x718100
namespace gamemd {
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__userpurge JumpjetLocomotionClass::sub_718100@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6)
{
  _DWORD *result; // eax
  _BYTE *v7; // ecx
  _DWORD *v8; // eax
  int v9; // [esp+0h] [ebp-10h]
  int v10[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 892))(*(_DWORD *)(a3 + 8)); /*0x71810d*/
  if ( (_BYTE)result /*0x71814e*/
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 896))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result)
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 468))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result)
    || (result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 8) + 472))(*(_DWORD *)(a3 + 8)),
        (_BYTE)result) )
  {
    *(_DWORD *)(*(_DWORD *)(a3 + 8) + 1444) = 0; /*0x718213*/
  }
  else
  {
    v10[1] = a5; /*0x718160*/
    v7 = *(_BYTE **)(a3 + 8); /*0x718164*/
    v10[0] = a4; /*0x718167*/
    v10[2] = a6; /*0x71816b*/
    if ( v7[504] && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 15 ) /*0x718181*/
    {
      v8 = Coord::To_Cell(&MEMORY[0x87F7E8], v10); /*0x71818d*/
      Cell::ApplyDamage(v8, (int)&MEMORY[0xB0EBF8], 1, 1, 0); /*0x71819f*/
    }
    Factory::CalculateExitCell((_DWORD *)(a3 - 4), a1, a2, v10, v9, v10[0]); /*0x7181ac*/
    result = (_DWORD *)(a3 + 36); /*0x7181ba*/
    if ( *(_DWORD *)(a3 + 36) == MEMORY[0xB0EBF8] /*0x7181d9*/
      && *(_DWORD *)(a3 + 40) == MEMORY[0xB0EBFC]
      && *(_DWORD *)(a3 + 44) == MEMORY[0xB0EC00] )
    {
      return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a3 + 8) + 1152))( /*0x718202*/
                         *(_DWORD *)(a3 + 8),
                         0,
                         1);
    }
    else
    {
      *(_BYTE *)(a3 + 48) = 1; /*0x7181db*/
      *(_DWORD *)(a3 + 24) = *result; /*0x7181e4*/
      *(_DWORD *)(a3 + 28) = *(_DWORD *)(a3 + 40); /*0x7181e9*/
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(a3 + 44); /*0x7181ef*/
    }
  }
  return result; /*0x7181f2*/
}
}

// 0x718230
int JumpjetLocomotionClass::ResetMovementState(int a1)
{
{
    *(int *)(a1 + 24) = DataGlobal_B0EBF8;
    *(int *)(a1 + 28) = DataGlobal_B0EBFC;
    *(int *)(a1 + 32) = DataGlobal_B0EC00;
    *(char *)(a1 + 48) = 0;
    *(char *)(a1 + 50) = 0;
    return a1;
}
}

// 0x7192C0
char JumpjetLocomotionClass::UpdateFacingDirection_3(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x719C60
int JumpjetLocomotionClass::StubReturnZero_17(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1247291207;
  a2[1] = 298948665;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}

// 0x719CA0
HRESULT JumpjetLocomotionClass::InitMultiFieldArray_0(int * a1, int * pStm)
{
{
    IStream *v2;
    int v3;
    wchar_t *v4;
    int v5;
    LPVOID *v6;
    v2 = (IStream *)pStm;
    v3 = SwizzleManager::SaveLoad(a1, pStm);
    if ( v3 < 0 )
    return v3;
    if ( a1 )
  {
    *a1 = (int)(unsigned int)vt_LocomotionClass;
    *((int*)(a1) + 1) = (int)&vt_LocomotionClass;
    v4 = g_CurrentFrame;
    *((int*)(a1) + 17) = 0;
    *((int*)(a1) + 15) = (int)v4;
    *((int*)(a1) + 18) = 0;
    *a1 = (int)(unsigned int)vt_TeleportLocomotionClass;
    a1[1] = (unsigned int)vt_TeleportLocomotionClass;
    *((int*)(a1) + 6) = (int)&vt_TeleportLocomotionClass;
  }
    v2->__pad_0->Read(v2, &pStm, 1, 0);
    if ( !(char)pStm )
    return v3;
    v5 = *((int*)(a1) + 18);
    v6 = (LPVOID *)(a1 + 18);
    if ( v5 )
    (*(void (__stdcall **)(int))(*(int *)(v5) + 8))(v5);
    *v6 = 0;
    return OleLoadFromStream(v2, &IID_ILocomotion, v6);
}
}

// 0x719D40
HRESULT JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3)
{
{
    IStream *v3;
    int *v4;
    int IPersistStream;
    int v6;
    int (__stdcall ***v7)(int, void *, int **);
    int v8;
    int *v9;
    HRESULT v10;
    int v12;
    v3 = (IStream *)pPStm;
    v4 = a1;
    IPersistStream = LoadIPersistStream(a1, pPStm, a3);
    if ( IPersistStream < 0 )
    return IPersistStream;
    if ( !v4[18] )
  {
    v12 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 0;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v12 + 16))(v3, &a3, 1, 0);
    return IPersistStream;
  }
    v6 = *(int *)v3->__pad_0;
    LOBYTE(a3) = 1;
    (*(void (__stdcall **)(IStream *, int *, int, int))(v6 + 16))(v3, &a3, 1, 0);
    v7 = (int (__stdcall ***)(int, void *, int **))v4[18];
    pPStm = 0;
    if ( v7 )
  {
    v8 = (**v7)(v7, &DataGlobal_820270, &a1);
    if ( v8 >= 0 )
    {
    v9 = a1;
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    pPStm = v9;
    }
    else
    {
    Function::Method_4B4D60((int *)&pPStm);
    pPStm = 0;
    }
    if ( v8 < 0 && v8 != -2147467262 )
    WinAPI::Wrapper(v8);
  }
    v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3);
    if ( pPStm )
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm);
    return v10;
}
}

// 0x719E20
int JumpjetLocomotionClass::SmallStub_719E20(int a1)
{
return 2;
}

// 0x719E30
int JumpjetLocomotionClass::UpdateAltitude(int a1, const void * a2, int * a3)
{
{
    int result;
    int v4;
    result = LocomotionClass::QueryInterface(a1, a2, a3);
    if ( result == -2147467262 )
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) )
    {
    if ( a1 )
    v4 = a1 + 24;
    else
    v4 = 0;
    *a3 = v4;
    }
    if ( *a3 )
    {
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
    }
    else
    {
    return -2147467262;
    }
  }
    return result;
}
}

// 0x719E90
int JumpjetLocomotionClass::StubReturnZero_18(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 48) )
    return -2147467259;
    *(int *)(a1 + 48) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x719EE0
int JumpjetLocomotionClass::StubReturnZero_19(int a1, unsigned int * a2)
{
{
    int v3;
    int v4;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 - 12);
    if ( v3 )
  {
    *(int *)(v3 + 1064) = 0;
    *(int *)(*(int *)(a1 - 12) + 1068) = 0;
  }
    v4 = *(int *)(a1 + 48);
    if ( !v4 )
    return 1;
    *a2 = v4;
    *(int *)(a1 + 48) = 0;
    return 0;
}
}

// 0x719F30
bool JumpjetLocomotionClass::StubReturnTrue_7(int a1)
{
{
    int v1;
    bool result;
    result = 0;
    if ( !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20) )
  {
    if ( *(int *)(a1 + 48) )
    {
    if ( !*(char *)(a1 + 29) )
      {
    v1 = *(int *)(a1 - 12);
    if ( !*(char *)(v1 + 636) && !*(int *)(a1 + 32) && !*(char *)(v1 + 1709) )
    return 1;
      }
    }
  }
    return result;
}
}

// 0x719F80
int JumpjetLocomotionClass::LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 12;
    if ( *((int*)(a1) + 12) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x71A090
int JumpjetLocomotionClass::DispatchVirtualCall_7(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// 0x71A0E0
LONG JumpjetLocomotionClass::IUnknownAddRef(int a1)
{
{
    return COM::AddRef(a1);
}
}

// 0x71A0F0
LONG JumpjetLocomotionClass::IUnknownRelease(volatile LONG * a1)
{
{
    return COM::ReleaseRef(a1);
}
}

// 0x71A100
BOOL JumpjetLocomotionClass::ShortFunc_71A100(int a1)
{
{
    return *(int *)(a1 + 48) != 0;
}
}

// 0x71A120
int JumpjetLocomotionClass::SmallStub_71A120()
{
return 76;
}

// 0x71A130
TeleportLocomotionClass * JumpjetLocomotionClass::ConstructLocomotor(char a2)
{
{
    ILocomotion *v3;
    v3 = *(this + 18);
    if ( v3 )
    (*(void (__stdcall **)(ILocomotion *))(*(int *)(v3) + 8))(v3);
    LocomotionClass::Construct(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TeleportLocomotionClass *)this;
}
}

// 0x71A160
int JumpjetLocomotionClass::SmallStub_71A160(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}
}

// 0x71A170
LONG JumpjetLocomotionClass::SmallStub_71A170(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownAddRef(a1 - 4);
}
}

// 0x71A180
LONG JumpjetLocomotionClass::SmallStub_71A180(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 4));
}
}

// 0x71A190
int JumpjetLocomotionClass::SmallStub_71A190(int a1, const void * a2, int * a3)
{
{
    return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}
}

// 0x71A1A0
LONG JumpjetLocomotionClass::SmallStub_71A1A0(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownAddRef(a1 - 24);
}
}

// 0x71A1B0
LONG JumpjetLocomotionClass::SmallStub_71A1B0(int a1)
{
{
    return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 24));
}
}

// 0x728A50
bool JumpjetLocomotionClass::ShortFunc_728A50(int a1)
{
{
    return *(int *)(a1 + 20) != 0;
}
}

// 0x728A60
char JumpjetLocomotionClass::StubReturnZero_20(unsigned int * a1)
{
{
    char result;
    if ( !(*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
    return 0;
    result = 1;
    if ( *((int*)(a1) + 5) == 1 )
    return 0;
    return result;
}
}

// 0x728A90
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 6);
    v4 = *((int*)(a1) + 7);
    v5 = *((int*)(a1) + 8);
  }
    else
  {
    v3 = *(int *)(*((int*)(a1) + 2) + 156);
    v4 = *(int *)(*((int*)(a1) + 2) + 160);
    v5 = *(int *)(*((int*)(a1) + 2) + 164);
    result = a2;
  }
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return result;
}
}

// 0x728AF0
int JumpjetLocomotionClass::SyncMovementPosition(int a1, int a2, int a3, int a4)
{
{
    int result;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int *v10;
    int v11;
    int v12[3];
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)result )
  {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 896))(*(int *)(a1 + 8));
    if ( !(char)result )
    {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)result )
      {
    result = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)result )
        {
    v5 = *(int *)(a1 + 8);
    v6 = a3;
    v7 = a4;
    v8 = a2;
    v12[1] = a3;
    v12[0] = a2;
    v12[2] = a4;
    v9 = (*(int (__thiscall **)(int))(*(int *)(v5) + 136))(v5);
    v10 = (int *)(*(int (__thiscall **)(int, int *, int *))(*(int *)(v9) + 108))(v9, &a2, v12);
    *(int *)(a1 + 24) = *v10;
    *(int *)(a1 + 28) = v10[1];
    *(int *)(a1 + 32) = v10[2];
    if ( (v8 != DataGlobal_B0F910 || v6 != DataGlobal_B0F914 || v7 != DataGlobal_B0F918) && (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 456))(*(int *)(a1 + 8)) < 0 )
          {
    v11 = *(int *)(a1 + 20);
    if ( v11 != 3 && v11 != 5 && v11 != 1 && v11 != 6 && v11 != 2 )
            {
    (*(void (__thiscall **)(int, int))(**(int **)(a1 + 8) + 292))(*(int *)(a1 + 8), 0);
    *(int *)(a1 + 20) = 4;
            }
          }
    result = *(int *)(a1 + 20);
    if ( !result )
    *(int *)(a1 + 20) = 1;
        }
      }
    }
  }
    return result;
}
}

// 0x7291D0
int JumpjetLocomotionClass::StubReturnZero_21(int a1, char a2)
{
{
    if ( *(int *)(a1 + 20) == 4 )
    return (a2 != 0) + 4;
    else
    return 0;
}
}

// 0x72A020
int JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass * aP0)
{
{
    int RefCount;
    RefCount = aP0->RefCount;
    if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 )
    return 2;
    else
    return JumpjetLocomotionClass::CheckState(aP0);
}
}

// 0x72A060
bool JumpjetLocomotionClass::IsStateInRange(int a1)
{
{
    unsigned int v1;
    v1 = *(int *)(a1 + 20);
    return v1 < 2 || v1 == 7 || v1 == 2 || v1 == 6;
}
}

// 0x72A090
int JumpjetLocomotionClass::ConvertCoordToCell_3(int a2, void * a3)
{
{
    void *v3;
    void *v5;
    v5 = this;
    if ( g_ArmageddonMode )
    return 0;
    v5 = a3;
    v3 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v5);
    if ( Cell::IsBuildableAdvanced((int)v3) )
    return 0;
    else
    return 7;
}
}

// 0x72A0E0
char JumpjetLocomotionClass::UpdateFacingDirection_4(int a1, int a2)
{
{
    return FacingClass::Update((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x72A1C0
int JumpjetLocomotionClass::ShortFunc_72A1C0(int a1)
{
{
    int result;
    result = JumpjetLocomotionClass::MissionStub11(a1);
    if ( !result )
  {
    if ( *(int *)(a1 + 20) )
    return 7;
  }
    return result;
}
}

// 0x72A1E0
BOOL JumpjetLocomotionClass::ShortFunc_72A1E0(int a1)
{
{
    int v1;
    v1 = *(int *)(a1 + 20);
    return v1 == 5 || v1 == 6;
}
}

// 0x75AB30
char JumpjetLocomotionClass::SmallStub_75AB30(int a1)
{
{
    return *(char *)(a1 + 48);
}
}

// 0x75AB40
bool JumpjetLocomotionClass::ComputeFloatExpression_4(unsigned int * a1)
{
{
    return (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1)
    && *(double *)(*((int*)(a1) + 2) + 1400) > 0.0 && (*((int*)(a1) + 9) != g_AsyncMovieState || *((int*)(a1) + 10) != g_MovieFrameState1 || *((int*)(a1) + 11) != g_MovieFrameState2);
}
}

// 0x75ABA0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2)
{
{
    int *result;
    int v3;
    int v4;
    int *v5;
    if ( (*(unsigned char (__stdcall **)(int *))(*a1 + 16))(a1) )
  {
    result = a2;
    v3 = *((int*)(a1) + 7);
    v4 = *((int*)(a1) + 8);
    v5 = a2;
    *a2 = *((int*)(a1) + 6);
  }
    else
  {
    result = a2;
    v3 = g_MovieFrameState1;
    v4 = g_MovieFrameState2;
    v5 = a2;
    *a2 = g_AsyncMovieState;
  }
    v5[1] = v3;
    v5[2] = v4;
    return result;
}
}

// 0x75AC00
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    if ( *((int*)(a1) + 9) == g_AsyncMovieState && *((int*)(a1) + 10) == g_MovieFrameState1 && *((int*)(a1) + 11) == g_MovieFrameState2 )
  {
    v5 = *((int*)(a1) + 2);
    v6 = v5 + 156;
    v7 = *(int *)(v5 + 156);
    v8 = *(int *)(v5 + 160);
    v9 = *(int *)(v6 + 8);
    *a2 = v7;
    *((int*)(a2) + 1) = v8;
    *((int*)(a2) + 2) = v9;
    return a2;
  }
    else
  {
    v2 = *((int*)(a1) + 10);
    v3 = *((int*)(a1) + 11);
    *a2 = *((int*)(a1) + 9);
    *((int*)(a2) + 1) = v2;
    *((int*)(a2) + 2) = v3;
    return a2;
  }
}
}

// 0x75AC80
int JumpjetLocomotionClass::DrawVoxelAnimation(unsigned char * a1)
{
{
    *((int*)(a1) + 49) = 1;
    VoxelAnim::Draw((int)(a1 - 4), (int *)1);
    *((int*)(a1) + 49) = 0;
    return (*(int (__stdcall **)(char *))(*(int *)(a1) + 16))(a1);
}
}

// 0x75ACB0
char JumpjetLocomotionClass::ConvertCoordToCell_4(int a1, int a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v6;
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 892))(*(int *)(a1 + 8));
    if ( !(char)v4 )
  {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 468))(*(int *)(a1 + 8));
    if ( !(char)v4 )
    {
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 472))(*(int *)(a1 + 8));
    if ( !(char)v4 )
      {
    v4 = a2;
    v5 = a3;
    v6 = a4;
    *(int *)(a1 + 24) = a2;
    *(int *)(a1 + 28) = v5;
    *(int *)(a1 + 32) = v6;
    if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 )
        {
    if ( *(int *)(a1 + 36) == g_AsyncMovieState && *(int *)(a1 + 40) == g_MovieFrameState1 && *(int *)(a1 + 44) == g_MovieFrameState2 )
          {
    LOBYTE(v4) = *(char *)(a1 + 48);
    *(char *)(a1 + 48) = 0;
    if ( (char)v4 )
    LOBYTE(v4) = (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1356))(*(int *)(a1 + 8));
          }
        }
    else
        {
    a3 = v5;
    a2 = v4;
    a4 = v6;
    v4 = (int)Coord::To_Cell(&DataGlobal_87F7E8, &a2);
    if ( (*(int *)(v4 + 320) & 0x100) != 0 )
          {
    v4 = Coord::ScaleToScreenY((void *)0x3C);
    *(int *)(a1 + 32) += v4;
          }
    *(char *)(a1 + 48) = 1;
        }
      }
    }
  }
    return v4;
}
}

// 0x75ADA0
int JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass * aP0)
{
{
    FootClass *result;
    result = aP0;
    aP0->nextArrayIndex = g_AsyncMovieState.field_0;
    aP0->referenceCount = g_AsyncMovieState.field_4;
    aP0->NeedsSaveOrLink = (void *)g_AsyncMovieState.field_8;
    if ( aP0->objectTypeFlags == g_AsyncMovieState.field_0 && aP0->owningHouseIndex == g_AsyncMovieState.field_4 && aP0->fallRate == g_AsyncMovieState.field_8 )
  {
    LOBYTE(aP0->nextObject) = 0;
    BYTE2(aP0->nextObject) = 0;
    return (*(int (__thiscall **)(int))(**(int **)&aP0->__pad_0[8] + 1356))(*(int *)&aP0->__pad_0[8]);
  }
    return (int)result->__pad_0;
}
}

// 0x75AE00
char JumpjetLocomotionClass::SynchronizeFacingDirection_1(int a1, int a2)
{
{
    return FacingClass::Set_SyncLog((char *)(*(int *)(a1 + 8) + 904), &a2);
}
}

// 0x75AE30
int JumpjetLocomotionClass::DispatchVirtualCall_9(int a1, int a2, int a3, int a4)
{
{
    char v4;
    int result;
    int v6[3];
    v6[0] = a2;
    v4 = *(char *)(a1 + 48);
    v6[1] = a3;
    v6[2] = a4;
    Voxel::DrawHelper((int *)(a1 - 4), v6);
    result = g_AsyncMovieState;
    if ( *(int *)(a1 + 36) == g_AsyncMovieState && *(int *)(a1 + 40) == g_MovieFrameState1 && *(int *)(a1 + 44) == g_MovieFrameState2 && *(int *)(a1 + 24) == g_AsyncMovieState && *(int *)(a1 + 28) == g_MovieFrameState1 && *(int *)(a1 + 32) == g_MovieFrameState2 )
  {
    *(char *)(a1 + 48) = 0;
    if ( v4 )
    return (*(int (__thiscall **)(int))(**(int **)(a1 + 8) + 1356))(*(int *)(a1 + 8));
  }
    return result;
}
}

// 0x75C7E0
int JumpjetLocomotionClass::SmallStub_75C7E0(int a1)
{
return 2;
}

// 0x75C850
int JumpjetLocomotionClass::StubReturnZero_22(int a1, int a2)
{
{
    if ( !a2 )
    return -2147467261;
    if ( *(int *)(a1 + 32) )
    return -2147467259;
    *(int *)(a1 + 32) = a2;
    (*(void (__stdcall **)(int))(*(int *)(a2) + 4))(a2);
    return 0;
}
}

// 0x75C8A0
int JumpjetLocomotionClass::StubReturnZero_23(int a1, unsigned int * a2)
{
{
    int v3;
    if ( !a2 )
    return -2147467261;
    v3 = *(int *)(a1 + 32);
    if ( !v3 )
    return 1;
    *a2 = v3;
    *(int *)(a1 + 32) = 0;
    return 0;
}
}

// 0x75C8E0
bool JumpjetLocomotionClass::CheckBaseClassState_0(int a1)
{
{
    return !(*(unsigned char (__stdcall **)(int))(*(int *)(a1 - 20) + 16))(a1 - 20)
    && *(int *)(a1 + 32)
    && !*(char *)(a1 + 29)
    && !*(char *)(*(int *)(a1 - 12) + 1709);
}
}

// 0x75C920
int JumpjetLocomotionClass::LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2)
{
{
    int *v2;
    int *v4;
    int v5;
    int v6;
    int v7;
    int *v8;
    int *v9;
    v2 = a2;
    if ( !a2 )
    return -2147467261;
    v4 = a1 + 8;
    if ( *((int*)(a1) + 8) )
  {
    a1 = 0;
    v5 = StreamClass::Set2(&a1, v4);
    if ( v5 < 0 && v5 != -2147467262 )
    WinAPI::Wrapper(v5);
    if ( !a1 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*a1 + 12))(a1, v2);
    if ( a1 )
    {
    (*(void (__stdcall **)(int *))(*a1 + 8))(a1);
    return v6;
    }
  }
    else
  {
    a2 = 0;
    if ( a1 == (int *)24 )
    return -2147467259;
    v7 = (*(int (__stdcall **)(int *, void *, int **))*(a1 - 6))(a1 - 6, &DataGlobal_818858, &a1);
    if ( v7 >= 0 )
    {
    v9 = a1;
    ComPtr::Release_Alt((int *)&a2);
    v8 = v9;
    a2 = v9;
    }
    else
    {
    ComPtr::Release_Alt((int *)&a2);
    v8 = 0;
    a2 = 0;
    }
    if ( v7 < 0 && v7 != -2147467262 )
    WinAPI::Wrapper(v7);
    if ( !v8 )
    return -2147467259;
    v6 = (*(int (__stdcall **)(int *, int *))(*v8 + 12))(v8, v2);
    if ( a2 )
    (*(void (__stdcall **)(int *))(*a2 + 8))(a2);
  }
    return v6;
}
}

// 0x75CA30
int JumpjetLocomotionClass::DispatchVirtualCall_10(unsigned int * a1, int a2)
{
{
    int result;
    int *v3;
    int v4;
    int v5[3];
    char v6[12];
    result = a2;
    if ( !a2 )
  {
    v3 = (int *)(*(int (__stdcall **)(int *, char *))(*a1 + 24))(a1, v6);
    v5[0] = *v3;
    v5[1] = v3[1];
    v4 = *((int*)(a1) + 2);
    v5[2] = v3[2];
    return (*(int (__thiscall **)(int, int *))(*(int *)(v4) + 244))(v4, v5);
  }
    return result;
}
}

// 0x75CA80
bool JumpjetLocomotionClass::IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4)
{
{
    int *v4;
    int v5;
    int v6;
    int v7;
    char v9[12];
    v4 = (int *)(*(int (__stdcall **)(int, char *))(*(int *)(a1) + 24))(a1, v9);
    v5 = v4[2];
    v6 = *v4;
    v7 = v4[1] / 256;
    return (unsigned short)(v6 / 256) == (unsigned short)(a2 / 256)
    && (short)v7 == (unsigned short)(a3 / 256)
    && (int)abs32(v5 - a4) <= DataGlobal_B45C28;
}
}

// 0x75CB20
char JumpjetLocomotionClass::SmallStub_75CB20(int a1)
{
{
    return *(char *)(a1 + 50);
}
}

// 0x75CB30
unsigned int * JumpjetLocomotionClass::InitMultiFieldArray_1(unsigned int * a1)
{
{
    *((int*)(a1) + 6) = g_AsyncMovieState;
    *((int*)(a1) + 7) = g_MovieFrameState1;
    *((int*)(a1) + 8) = g_MovieFrameState2;
    *((int*)(a1) + 9) = g_AsyncMovieState;
    *((int*)(a1) + 10) = g_MovieFrameState1;
    *((int*)(a1) + 11) = g_MovieFrameState2;
    return a1 + 9;
}
}

// 0x75CBA0
BOOL JumpjetLocomotionClass::ShortFunc_75CBA0(int a1)
{
{
    return *(int *)(a1 + 32) != 0;
}
}

// 0x75CBC0
int JumpjetLocomotionClass::SetByteField_3(int a1)
{
{
    *(char *)(a1 + 50) = 0;
    return a1;
}
}

// 0x75CC30
int JumpjetLocomotionClass::SmallStub_75CC30(int a1, const void * a2, int * a3)
{
{
    return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x75CC40
LONG JumpjetLocomotionClass::SmallStub_75CC40(int a1)
{
{
    return WalkLocomotionClass::AddRef(a1 - 4);
}
}

// 0x75CC50
LONG JumpjetLocomotionClass::SmallStub_75CC50(int a1)
{
{
    return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x75CC60
int JumpjetLocomotionClass::SmallStub_75CC60(int a1, const void * a2, int * a3)
{
{
    return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x75CC70
LONG JumpjetLocomotionClass::SmallStub_75CC70(int a1)
{
{
    return WalkLocomotionClass::AddRef(a1 - 24);
}
}

// 0x75CC80
LONG JumpjetLocomotionClass::SmallStub_75CC80(int a1)
{
{
    return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}
