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

// 0x4AF610
int JumpjetLocomotionClass::LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4AF610(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x4af611*/
  if ( !a2 ) /*0x4af618*/
    return -2147467261; /*0x4af621*/
  v4 = a1 + 20; /*0x4af62b*/
  if ( a1[20] ) /*0x4af628*/
  {
    a1 = 0; /*0x4af634*/
    v5 = StreamClass::Set2(&a1, v4); /*0x4af645*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4af653*/
      WinAPI::Wrapper(v5); /*0x4af656*/
    if ( !a1 ) /*0x4af661*/
      return -2147467259; /*0x4af66a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x4af674*/
    if ( a1 ) /*0x4af67c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x4af685*/
      return v6; /*0x4af68c*/
    }
  }
  else
  {
    a2 = 0; /*0x4af692*/
    if ( a1 == (_DWORD *)24 ) /*0x4af69c*/
      return -2147467259; /*0x4af69c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x4af6ad*/
    if ( v7 >= 0 ) /*0x4af6b1*/
    {
      v9 = a1; /*0x4af6c5*/
      ComPtr::Release_Alt((int *)&a2); /*0x4af6cd*/
      v8 = v9; /*0x4af6d2*/
      a2 = v9; /*0x4af6d5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x4af6b7*/
      v8 = 0; /*0x4af6bc*/
      a2 = 0; /*0x4af6be*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4af6e3*/
      WinAPI::Wrapper(v7); /*0x4af6e6*/
    if ( !v8 ) /*0x4af6f1*/
      return -2147467259; /*0x4af6fa*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x4af704*/
    if ( a2 ) /*0x4af70c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x4af711*/
  }
  return v6; /*0x4af61a*/
}
}

// 0x4AF8E0
int JumpjetLocomotionClass::StubReturnZero(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4AF8E0(int a1, int a2)
{
  if ( !a2 ) /*0x4af8e6*/
    return -2147467261; /*0x4af8e8*/
  if ( *(_DWORD *)(a1 + 80) ) /*0x4af8f4*/
    return -2147467259; /*0x4af91b*/
  *(_DWORD *)(a1 + 80) = a2; /*0x4af902*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4af908*/
  return 0; /*0x4af8ed*/
}
}

// 0x4AF930
int JumpjetLocomotionClass::StubReturnZero_0(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4AF930(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4af936*/
    return -2147467261; /*0x4af938*/
  v3 = *(_DWORD *)(a1 + 80); /*0x4af944*/
  if ( !v3 ) /*0x4af949*/
    return 1; /*0x4af959*/
  *a2 = v3; /*0x4af94b*/
  *(_DWORD *)(a1 + 80) = 0; /*0x4af94d*/
  return 0; /*0x4af93d*/
}
}

// 0x4AF970
bool JumpjetLocomotionClass::CheckPiggybackState(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_4AF970(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x4af9a0*/
      && *(_DWORD *)(a1 + 80)
      && *(_BYTE *)(a1 + 77)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}
}

// 0x4AFB40
unsigned int * JumpjetLocomotionClass::InitMovementState(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_4AFB40(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1[7] = a2; /*0x4afb4d*/
  a1[6] = a2; /*0x4afb50*/
  a1[8] = MEMORY[0xA8ED84]; /*0x4afb5f*/
  a1[9] = v3; /*0x4afb65*/
  a1[10] = 0; /*0x4afb68*/
  a1[11] = 0; /*0x4afb6b*/
  return a1 + 8; /*0x4afb6e*/
}
}

// 0x4AFB80
bool JumpjetLocomotionClass::StubReturnTrue(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_4AFB80(int a1)
{
  if ( *(_DWORD *)(a1 + 48) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 52) != MEMORY[0x8A0794] ) /*0x4afba1*/
    return 1; /*0x4afbb1*/
  return (*(_DWORD *)(a1 + 60) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 64) != MEMORY[0x8A0794]) /*0x4afc00*/
      && (*(_DWORD *)(a1 + 60) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160));
}
}

// 0x4AFC20
bool JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x4afc2e*/
    return 1; /*0x4afc37*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x4afc79*/
      && (aP0->ambientSoundController[0] != *(_DWORD *)&stru_89E138.__pad_14B0[4520]
       || aP0->ambientSoundController[1] != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
       || aP0->ambientSoundController[2] != *(_DWORD *)&stru_89E138.__pad_14B0[4528])
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
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
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_4AFCC0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( a1[15] == MEMORY[0x8A0790] && *((_QWORD *)a1 + 8) == MEMORY[0x8A0794] ) /*0x4afcde*/
  {
    v4 = a1[2]; /*0x4afd0b*/
    v5 = v4 + 156; /*0x4afd14*/
    v6 = *(_DWORD *)(v4 + 156); /*0x4afd16*/
    v7 = *(_DWORD *)(v4 + 160); /*0x4afd18*/
    v8 = *(_DWORD *)(v5 + 8); /*0x4afd1b*/
    *a2 = v6; /*0x4afd24*/
    a2[1] = v7; /*0x4afd26*/
    a2[2] = v8; /*0x4afd29*/
    return a2; /*0x4afd1e*/
  }
  else
  {
    v2 = a1[16]; /*0x4afcf4*/
    v3 = a1[17]; /*0x4afcf7*/
    *a2 = a1[15]; /*0x4afcfc*/
    a2[1] = v2; /*0x4afcfe*/
    a2[2] = v3; /*0x4afd01*/
    return a2; /*0x4afd04*/
  }
}
}

// 0x4AFD40
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell(int arg0, _DWORD *a1, unsigned int aP1_4, IUnknown *aP3)
{
  _DWORD *result; // eax
  unsigned int v5; // ecx
  IUnknown *v6; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 892))(*(_DWORD *)(arg0 + 8)); /*0x4afd4b*/
  if ( !(_BYTE)result ) /*0x4afd53*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 896))(*(_DWORD *)(arg0 + 8)); /*0x4afd5e*/
    if ( !(_BYTE)result ) /*0x4afd66*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 468))(*(_DWORD *)(arg0 + 8)); /*0x4afd71*/
      if ( !(_BYTE)result ) /*0x4afd79*/
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 472))(*(_DWORD *)(arg0 + 8)); /*0x4afd80*/
        if ( !(_BYTE)result ) /*0x4afd88*/
        {
          result = a1; /*0x4afd8a*/
          v5 = aP1_4; /*0x4afd8e*/
          v6 = aP3; /*0x4afd92*/
          *(_DWORD *)(arg0 + 48) = a1; /*0x4afd99*/
          *(_DWORD *)(arg0 + 52) = v5; /*0x4afd9c*/
          *(_DWORD *)(arg0 + 56) = v6; /*0x4afd9f*/
          if ( result != *(_DWORD **)&stru_89E138.__pad_14B0[4520] /*0x4afdba*/
            || v5 != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
            || v6 != *(IUnknown **)&stru_89E138.__pad_14B0[4528] )
          {
            a1 = result; /*0x4afdbc*/
            aP1_4 = v5; /*0x4afdc4*/
            aP3 = v6; /*0x4afdce*/
            result = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1); /*0x4afdd2*/
            if ( (result[80] & 0x100) != 0 ) /*0x4afde0*/
            {
              result = (_DWORD *)(*(_DWORD *)&stru_89E138.__pad_14B0[4572] + *(_DWORD *)(arg0 + 56)); /*0x4afdeb*/
              *(_DWORD *)(arg0 + 56) = result; /*0x4afded*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4afdf0*/
}
}

// 0x4AFE00
int JumpjetLocomotionClass::CheckWindowsErrorWrapper(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4AFE00(int a1)
{
  int v1; // eax
  int v2; // esi
  double v3; // st7
  int result; // eax

  if ( *(_DWORD *)(a1 + 60) != MEMORY[0x8A0790] || *(_QWORD *)(a1 + 64) != MEMORY[0x8A0794] ) /*0x4afe1d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3220) ) /*0x4afe36*/
    {
      v1 = *(_DWORD *)(a1 + 8); /*0x4afe40*/
      if ( !*(_BYTE *)(v1 + 1744) ) /*0x4afe43*/
      {
        v2 = *(_DWORD *)(v1 + 1736); /*0x4afe4d*/
        if ( v2 ) /*0x4afe55*/
        {
          do /*0x4afe87*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x4afe57*/
              WinAPI::Wrapper(-2147467261); /*0x4afe66*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 72))(*(_DWORD *)(v2 + 1652)); /*0x4afe74*/
            v2 = *(_DWORD *)(v2 + 1736); /*0x4afe77*/
          }
          while ( v2 && v2 != *(_DWORD *)(v2 + 1736) ); /*0x4afe87*/
        }
      }
    }
  }
  if ( *(double *)(a1 + 76) >= 0.300000011920929 ) /*0x4afe97*/
    v3 = 0.300000011920929; /*0x4afe9e*/
  else
    v3 = *(double *)(a1 + 76); /*0x4afe99*/
  *(double *)(a1 + 76) = v3; /*0x4afea4*/
  *(_DWORD *)(a1 + 48) = MEMORY[0x8A0790]; /*0x4afeb0*/
  result = MEMORY[0x8A0794]; /*0x4afeb2*/
  *(_QWORD *)(a1 + 52) = MEMORY[0x8A0794]; /*0x4afeb7*/
  return result; /*0x4afec3*/
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

// 0x4B0410
float * JumpjetLocomotionClass::ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_4B0410(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1[11]; /*0x4b0419*/
  if ( v3 ) /*0x4b0422*/
  {
    v5 = a1[8]; /*0x4b042c*/
    v6 = a1[10]; /*0x4b042f*/
    if ( v5 != -1 ) /*0x4b0435*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x4b0441*/
        v6 = 0; /*0x4b0447*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x4b0443*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x4b0453*/
  }
  else
  {
    v4 = 1.0; /*0x4b0424*/
  }
  if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 ) /*0x4b0493*/
  {
    if ( a3 ) /*0x4b0497*/
      *a3 = -1; /*0x4b0499*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u); /*0x4b04b8*/
  return a2; /*0x4b04ba*/
}
}

// 0x4B04D0
int JumpjetLocomotionClass::DispatchVirtualCall(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B04D0(int *a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *a1; /*0x4b04d9*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[2] + 444))(a1[2]); /*0x4b04dd*/
  return (*(int (__stdcall **)(int *, _DWORD))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284)); /*0x4b04f0*/
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

// 0x4B4880
int JumpjetLocomotionClass::DispatchCheckState(TunnelLocomotionClass * aP0)
{
return JumpjetLocomotionClass::CheckState(aP0);
}

// 0x4B48D0
char JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass *aP0, int a2)
{
  char result; // al

  result = (_BYTE)aP0 + 60; /*0x4b48de*/
  if ( aP0->Dest[2] != *(_DWORD *)&stru_89E138.__pad_14B0[4520] /*0x4b48fd*/
    || aP0->HeadToCoord[0] != *(_DWORD *)&stru_89E138.__pad_14B0[4524]
    || aP0->HeadToCoord[1] != *(_DWORD *)&stru_89E138.__pad_14B0[4528] )
  {
    return JumpjetLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2); /*0x4b4908*/
  }
  return result; /*0x4b490d*/
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

// 0x4B4BE0
int JumpjetLocomotionClass::SetByteField(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B4BE0(int a1)
{
  *(_BYTE *)(a1 + 97) = 0; /*0x4b4be4*/
  return a1; /*0x4b4be8*/
}
}

// 0x4B4BF0
int JumpjetLocomotionClass::SetByteField_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B4BF0(int a1)
{
  *(_BYTE *)(a1 + 97) = 1; /*0x4b4bf4*/
  return a1; /*0x4b4bf8*/
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

// 0x4B63B0
int JumpjetLocomotionClass::StubReturnZero_3(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B63B0(int a1, int a2)
{
  if ( !a2 ) /*0x4b63b6*/
    return -2147467261; /*0x4b63b8*/
  if ( *(_DWORD *)(a1 + 20) ) /*0x4b63c4*/
    return -2147467259; /*0x4b63eb*/
  *(_DWORD *)(a1 + 20) = a2; /*0x4b63d2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x4b63d8*/
  return 0; /*0x4b63bd*/
}
}

// 0x4B6400
int JumpjetLocomotionClass::StubReturnZero_4(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B6400(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4b6406*/
    return -2147467261; /*0x4b6408*/
  v3 = *(_DWORD *)(a1 + 20); /*0x4b6414*/
  if ( !v3 ) /*0x4b6419*/
    return 1; /*0x4b6429*/
  *a2 = v3; /*0x4b641b*/
  *(_DWORD *)(a1 + 20) = 0; /*0x4b641d*/
  return 0; /*0x4b640d*/
}
}

// 0x4B6440
bool JumpjetLocomotionClass::CheckBaseClassState(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_4B6440(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) && *(_DWORD *)(a1 + 20); /*0x4b645c*/
}
}

// 0x4B64E0
int JumpjetLocomotionClass::LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B64E0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x4b64e1*/
  if ( !a2 ) /*0x4b64e8*/
    return -2147467261; /*0x4b64f1*/
  v4 = a1 + 5; /*0x4b64fb*/
  if ( a1[5] ) /*0x4b64f8*/
  {
    a1 = 0; /*0x4b6504*/
    v5 = StreamClass::Set2(&a1, v4); /*0x4b6515*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4b6523*/
      WinAPI::Wrapper(v5); /*0x4b6526*/
    if ( !a1 ) /*0x4b6531*/
      return -2147467259; /*0x4b653a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x4b6544*/
    if ( a1 ) /*0x4b654c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x4b6555*/
      return v6; /*0x4b655c*/
    }
  }
  else
  {
    a2 = 0; /*0x4b6562*/
    if ( a1 == (_DWORD *)24 ) /*0x4b656c*/
      return -2147467259; /*0x4b656c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x4b657d*/
    if ( v7 >= 0 ) /*0x4b6581*/
    {
      v9 = a1; /*0x4b6595*/
      ComPtr::Release_Alt((int *)&a2); /*0x4b659d*/
      v8 = v9; /*0x4b65a2*/
      a2 = v9; /*0x4b65a5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x4b6587*/
      v8 = 0; /*0x4b658c*/
      a2 = 0; /*0x4b658e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4b65b3*/
      WinAPI::Wrapper(v7); /*0x4b65b6*/
    if ( !v8 ) /*0x4b65c1*/
      return -2147467259; /*0x4b65ca*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x4b65d4*/
    if ( a2 ) /*0x4b65dc*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x4b65e1*/
  }
  return v6; /*0x4b64ea*/
}
}

// 0x4B65F0
BOOL JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass *aP0)
{
  return aP0->__pad_18[0] != 0; /*0x4b65fe*/
}
}

// 0x4B6610
int JumpjetLocomotionClass::Thunk_VtableDispatch4(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4B6610(int a1)
{
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4b661a*/
}
}

// 0x4B6650
void JumpjetLocomotionClass::Stub8(int a1)
{
  ;
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

// 0x4CCA20
int JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass * aP0, unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::StubReturnZero_7(LocomotionClass *aP0, _DWORD *a1)
{
  int v2; // esi

  v2 = StreamClass::ResetPosition(aP0, (int)a1); /*0x4cca32*/
  if ( !v2 ) /*0x4cca36*/
  {
    if ( a1 && (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 2 && *(_BYTE *)(a1[433] + 3597) ) /*0x4cca4e*/
    {
      LOBYTE(aP0->RefCount) = 1; /*0x4cca5b*/
      return 0; /*0x4cca61*/
    }
    LOBYTE(aP0->RefCount) = 0; /*0x4cca64*/
  }
  return v2; /*0x4cca5a*/
}
}

// 0x4CCA90
BOOL JumpjetLocomotionClass::ComputeFloatExpression(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_4CCA90(int a1)
{
  return *(_BYTE *)(a1 + 48) || *(float *)(*(_DWORD *)(a1 + 8) + 744) > 0.0; /*0x4ccab3*/
}
}

// 0x4CCAE0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_4CCAE0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x4ccae9*/
  {
    result = a2; /*0x4ccaf0*/
    v3 = a1[7]; /*0x4ccaf7*/
    v4 = a1[8]; /*0x4ccafa*/
    v5 = a2; /*0x4ccafd*/
    *a2 = a1[6]; /*0x4ccaff*/
  }
  else
  {
    result = a2; /*0x4ccb0c*/
    v3 = MEMORY[0x8B3C7C]; /*0x4ccb16*/
    v4 = MEMORY[0x8B3C80]; /*0x4ccb1c*/
    v5 = a2; /*0x4ccb22*/
    *a2 = MEMORY[0x8B3C78]; /*0x4ccb24*/
  }
  v5[1] = v3; /*0x4ccb01*/
  v5[2] = v4; /*0x4ccb04*/
  return result; /*0x4ccb07*/
}
}

// 0x4CCB40
char JumpjetLocomotionClass::ProcessLocomotionStep(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_4CCB40(int a1)
{
  int v1; // eax
  int *v2; // ecx
  char result; // al
  int v4; // ecx

  if ( !*(_BYTE *)(a1 + 77) && !*(_BYTE *)(a1 + 76) && *(double *)(a1 + 60) >= 1.0 && !*(_DWORD *)(a1 + 52) ) /*0x4ccb65*/
  {
    v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)); /*0x4ccb71*/
    *(_DWORD *)(a1 + 52) = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 188))(v1); /*0x4ccb81*/
  }
  v2 = *(int **)(a1 + 8); /*0x4ccb84*/
  if ( v2[27] > 0 /*0x4ccb9e*/
    && !*(_BYTE *)(a1 + 77)
    && !*(_BYTE *)(a1 + 76)
    && (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 512))(v2) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 492))(*(_DWORD *)(a1 + 8)); /*0x4ccbad*/
  }
  JumpjetLocomotionClass::ProcessRotation(a1 - 4); /*0x4ccbb8*/
  DamageArea::ApplyScatter(a1 - 4); /*0x4ccbbf*/
  result = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x4ccbc7*/
  if ( result ) /*0x4ccbcc*/
  {
    v4 = *(_DWORD *)(a1 + 8); /*0x4ccbd4*/
    if ( *(_BYTE *)(v4 + 144) ) /*0x4ccbd7*/
    {
      if ( *(int *)(v4 + 108) > 0 /*0x4ccc2d*/
        && (*(_DWORD *)(a1 + 24) != MEMORY[0x8B3C78]
         || *(_DWORD *)(a1 + 28) != MEMORY[0x8B3C7C]
         || *(_DWORD *)(a1 + 32) != MEMORY[0x8B3C80])
        && !*(_BYTE *)(a1 + 77)
        && !*(_BYTE *)(a1 + 76)
        && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 456))(v4) > 0 )
      {
        LandFootClassAtPosition( /*0x4ccc49*/
          a1 - 4,
          *(_DWORD *)(a1 + 32),
          1,
          *(float *)(a1 + 24),
          *(_DWORD *)(a1 + 28),
          *(_DWORD *)(a1 + 32));
      }
      if ( *(int *)(*(_DWORD *)(a1 + 8) + 108) > 0 ) /*0x4ccc56*/
        FootClass::ProcessDeployMission(a1 - 4); /*0x4ccc5a*/
      JumpjetLocomotionClass::IsMapCoordVisible((_DWORD *)(a1 - 4)); /*0x4ccc61*/
      return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x4ccc69*/
    }
    else
    {
      return 0; /*0x4ccbe1*/
    }
  }
  return result; /*0x4ccbce*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4CD510(_DWORD *this)
{
  _DWORD *v2; // eax
  bool v3; // al
  _BYTE *v4; // ecx
  int i; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // eax
  _DWORD v10[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = (_DWORD *)(*(this + 3) + 156); /*0x4cd519*/
  v10[0] = *v2; /*0x4cd520*/
  v10[1] = v2[1]; /*0x4cd52c*/
  v10[2] = v2[2]; /*0x4cd538*/
  v3 = IsCoordVisibleMap(&MEMORY[0x87F7E8], v10); /*0x4cd53c*/
  v4 = (_BYTE *)*(this + 3); /*0x4cd541*/
  if ( v3 ) /*0x4cd546*/
  {
    v4[981] = 1; /*0x4cd5f0*/
    return 0; /*0x4cd5f0*/
  }
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 388))(v4) != 4 ) /*0x4cd557*/
    return 0; /*0x4cd5f7*/
  for ( i = *(this + 3); *(_DWORD *)(i + 280); i = *(this + 3) ) /*0x4cd566*/
  {
    v6 = (_DWORD *)LinkedList::Pop((_DWORD *)(i + 276)); /*0x4cd57c*/
    if ( sub_413CD0((int)v6) ) /*0x4cd580*/
      *(_BYTE *)(v6[135] + 505) = 1; /*0x4cd58f*/
    v7 = v6[373]; /*0x4cd595*/
    if ( v7 ) /*0x4cd59d*/
      *(_BYTE *)(v7 + 130) = 1; /*0x4cd59f*/
    if ( v6 ) /*0x4cd5a7*/
      (*(void (__thiscall **)(_DWORD *, int))(*v6 + 32))(v6, 1); /*0x4cd5ae*/
  }
  v8 = *(_DWORD *)(*(this + 3) + 1492); /*0x4cd5c2*/
  if ( v8 ) /*0x4cd5ca*/
    *(_BYTE *)(v8 + 130) = 1; /*0x4cd5cc*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 928))(*(this + 3)); /*0x4cd5d7*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 248))(*(this + 3)); /*0x4cd5e2*/
  return 1; /*0x4cd5eb*/
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
                 + ((unsigned __int16)this->CurrentState.Players << 8);
      FacingClass::Set_SyncLog((char *)(this->LinkedTo + 904), &v7); /*0x4ce605*/
      v2 = this->CurrentState.Players; /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      this->CurrentState.Players = v4; /*0x4ce624*/
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

// 0x4CF830
unsigned int * JumpjetLocomotionClass::CalculateBobOffset(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_4CF830(int a1, _DWORD *a2)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ecx
  int (__stdcall ***v5)(_DWORD, void *, int *); // eax
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  double v9; // st7
  _DWORD *v10; // esi
  int v11; // eax
  bool v12; // zf
  int v14; // [esp+18h] [ebp-4h] BYREF

  v2 = a1; /*0x4cf834*/
  v3 = 0; /*0x4cf838*/
  v4 = 0; /*0x4cf83a*/
  v5 = *(int (__stdcall ****)(_DWORD, void *, int *))(a1 + 8); /*0x4cf83c*/
  a1 = 0; /*0x4cf83f*/
  if ( v5 ) /*0x4cf845*/
  {
    v6 = (**v5)(v5, &unk_822410, &v14); /*0x4cf856*/
    if ( v6 >= 0 ) /*0x4cf85a*/
    {
      v7 = v14; /*0x4cf86e*/
      Release3COM(&a1); /*0x4cf876*/
      v4 = v7; /*0x4cf87b*/
      a1 = v7; /*0x4cf87e*/
    }
    else
    {
      Release3COM(&a1); /*0x4cf860*/
      v4 = 0; /*0x4cf865*/
      a1 = 0; /*0x4cf867*/
    }
    if ( v6 < 0 && v6 != -2147467262 ) /*0x4cf88c*/
      WinAPI::Wrapper(v6); /*0x4cf88f*/
  }
  v8 = 0; /*0x4cf898*/
  if ( v4 ) /*0x4cf89c*/
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 12))(v4); /*0x4cf8a4*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 132))(*(_DWORD *)(v2 + 8)) + 3221) /*0x4cf8d6*/
    && !*(_BYTE *)(v2 + 77)
    && !*(_BYTE *)(v2 + 76)
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 8) + 456))(*(_DWORD *)(v2 + 8)) > v8 )
  {
    v14 = (int)MEMORY[0xA8ED84] % 20; /*0x4cf8e8*/
    v9 = Math::SinCos((double)((int)MEMORY[0xA8ED84] % 20) * 0.3141592653589793); /*0x4cf8f9*/
    v3 = Math::RoundToInt(v9 * 1.5 + 0.5); /*0x4cf912*/
  }
  v10 = a2; /*0x4cf914*/
  *a2 = 0; /*0x4cf91a*/
  v11 = a1; /*0x4cf91c*/
  v12 = a1 == 0; /*0x4cf920*/
  v10[1] = v3; /*0x4cf922*/
  if ( !v12 ) /*0x4cf925*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x4cf92a*/
  return v10; /*0x4cf92f*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_4CFB00(int a1, float *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int v4; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  v3 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x4cfb0e*/
  v8[0] = *v3; /*0x4cfb15*/
  v8[1] = v3[1]; /*0x4cfb21*/
  v8[2] = v3[2]; /*0x4cfb2d*/
  v4 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], v8) + 284); /*0x4cfb43*/
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3221) ) /*0x4cfb4b*/
    v4 = 0; /*0x4cfb55*/
  qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9)); /*0x4cfb6d*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) /*0x4cfba3*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x4cfba6*/
  if ( a3 && *a3 != -1 ) /*0x4cfbbb*/
  {
    *a3 = 32 * (v4 + (*a3 << 6)); /*0x4cfbc5*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 928), &v7) >> 10) + 1) >> 1) & 0x1F; /*0x4cfbe9*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x4cfbfd*/
  return a2; /*0x4cfbff*/
}
}

// 0x4CFC10
char JumpjetLocomotionClass::SynchronizeFacingDirection(int a1, int a2)
{
return FacingClass::Set_SyncLog((char *)(a1[2] + 928), &a2);
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

// 0x4CFD90
char JumpjetLocomotionClass::ShortFunc_4CFD90(int a1)
{
return StreamClass::GetDirty(a1);
}

// 0x4CFDA0
bool JumpjetLocomotionClass::DispatchVirtualCall_1(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_4CFDA0(int a1)
{
  return *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3367) == 0; /*0x4cfdbe*/
}
}

// 0x4CFE20
long long JumpjetLocomotionClass::ComputeFloatExpression_1(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __stdcall JumpjetLocomotionClass::sub_4CFE20(int a1)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)); /*0x4cfe2a*/
  return Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)(a1 + 68)); /*0x4cfe3e*/
}
}

// 0x4CFE50
int JumpjetLocomotionClass::StubReturnZero_8(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_4CFE50(_BYTE *a1)
{
  if ( a1[77] ) /*0x4cfe54*/
    return 1; /*0x4cfe5b*/
  if ( a1[76] ) /*0x4cfe63*/
    return 0; /*0x4cfe6a*/
  return 3 - ((*(unsigned __int8 (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1) != 0); /*0x4cfe60*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_5142A0(int a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  float *v4; // esi
  float v6[12]; // [esp+8h] [ebp-30h] BYREF

  v3 = *(_DWORD *)(a1 + 8); /*0x5142a7*/
  if ( fabs(*(float *)(v3 + 808)) >= 0.005 || fabs(*(float *)(v3 + 812)) >= 0.005 ) /*0x5142d8*/
  {
    if ( a3 ) /*0x5142dc*/
      *a3 = -1; /*0x5142de*/
  }
  v4 = Audio3D::ComputeRotation(a1, v6, a3); /*0x5142f0*/
  qmemcpy(a2, v4, 0x30u); /*0x5142fd*/
  return a2; /*0x5142ff*/
}
}

// 0x514C30
BOOL JumpjetLocomotionClass::HasScoreDisplayChanged(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_514C30(_DWORD *a1)
{
  return a1[5] != MEMORY[0xA8F180] /*0x514c6a*/
      || a1[6] != MEMORY[0xA8F184]
      || a1[7] != MEMORY[0xA8F188]
      || a1[8] != MEMORY[0xA8F180]
      || a1[9] != MEMORY[0xA8F184]
      || a1[10] != MEMORY[0xA8F188];
}
}

// 0x514C80
BOOL JumpjetLocomotionClass::ComputeFloatExpression_2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_514C80(int a1)
{
  return (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1) && *(double *)(a1 + 68) != 0.0; /*0x514ca4*/
}
}

// 0x514CB0
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_514CB0(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // edx
  int v5; // eax

  if ( a1[5] == MEMORY[0xA8F180] /*0x514cd9*/
    && (v2 = MEMORY[0xA8F184], a1[6] == MEMORY[0xA8F184])
    && (v3 = MEMORY[0xA8F188], a1[7] == MEMORY[0xA8F188]) )
  {
    *a2 = MEMORY[0xA8F180]; /*0x514cff*/
    a2[1] = v2; /*0x514d01*/
    a2[2] = v3; /*0x514d04*/
    return a2; /*0x514cf9*/
  }
  else
  {
    v4 = a1[6]; /*0x514ce2*/
    v5 = a1[7]; /*0x514ce5*/
    *a2 = a1[5]; /*0x514cea*/
    a2[1] = v4; /*0x514cec*/
    a2[2] = v5; /*0x514cef*/
    return a2; /*0x514cf2*/
  }
}
}

// 0x514D10
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_514D10(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( a1[8] == MEMORY[0xA8F180] && a1[9] == MEMORY[0xA8F184] && a1[10] == MEMORY[0xA8F188] ) /*0x514d3b*/
  {
    v5 = a1[2]; /*0x514d5b*/
    v6 = v5 + 156; /*0x514d64*/
    v7 = *(_DWORD *)(v5 + 156); /*0x514d66*/
    v8 = *(_DWORD *)(v5 + 160); /*0x514d68*/
    v9 = *(_DWORD *)(v6 + 8); /*0x514d6b*/
    *a2 = v7; /*0x514d74*/
    a2[1] = v8; /*0x514d76*/
    a2[2] = v9; /*0x514d79*/
    return a2; /*0x514d6e*/
  }
  else
  {
    v2 = a1[9]; /*0x514d44*/
    v3 = a1[10]; /*0x514d47*/
    *a2 = a1[8]; /*0x514d4c*/
    a2[1] = v2; /*0x514d4e*/
    a2[2] = v3; /*0x514d51*/
    return a2; /*0x514d54*/
  }
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

// 0x516320
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_516320(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_516320(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1; /*0x516320*/
  if ( a1[5] != a1[8] || a1[6] != a1[9] || a1[7] != a1[10] ) /*0x516340*/
  {
    a1[5] = MEMORY[0xA8F180]; /*0x516348*/
    a1[6] = MEMORY[0xA8F184]; /*0x516351*/
    a1[7] = MEMORY[0xA8F188]; /*0x51635a*/
    result = (_DWORD *)a1[2]; /*0x51635d*/
    result[376] = -1; /*0x516360*/
  }
  return result; /*0x51636a*/
}
}

// 0x516370
char JumpjetLocomotionClass::UpdateFacingDirection_0(int a1, int a2)
{
return FacingClass::Update((char *)(a1[2] + 904), &a2);
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

// 0x516CA0
char JumpjetLocomotionClass::IsBridgeBlocking(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_516CA0(int a1)
{
  int Member; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  __int16 v9; // ax
  __int16 v10; // cx
  __int16 v11; // [esp+4h] [ebp-18h]
  _DWORD v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  if ( Team::AllMembersValid(*(int **)(a1 + 8)) ) /*0x516cab*/
  {
    Member = Team::GetMember(*(_DWORD **)(a1 + 8), 0); /*0x516cb9*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x516cc8*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(Team::GetMember(*(_DWORD **)(a1 + 8), 0) + 1312) + 5821) ) /*0x516cda*/
        return 0; /*0x516cea*/
    }
  }
  v3 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x516cf0*/
  v12[0] = *v3; /*0x516cf8*/
  v12[1] = v3[1]; /*0x516d04*/
  v13 = v3[2]; /*0x516d0b*/
  v4 = Coord::To_Cell(&MEMORY[0x87F7E8], v12); /*0x516d14*/
  v5 = Cell::IsBridge(v4); /*0x516d1b*/
  if ( v5 && *(_BYTE *)(v5[328] + 5821) ) /*0x516d2e*/
  {
    v6 = v5 + 39; /*0x516d41*/
    v7 = v5[39]; /*0x516d43*/
    v8 = v6[1]; /*0x516d45*/
    v13 = v6[2]; /*0x516d4b*/
    LOWORD(v12[0]) = v7 / 256; /*0x516d5b*/
    HIWORD(v12[0]) = v8 / 256; /*0x516d6e*/
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156) / 256; /*0x516d99*/
    v9 = v11 - LOWORD(v12[0]); /*0x516db9*/
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160) / 256 - HIWORD(v12[0]); /*0x516dbf*/
    if ( v11 == LOWORD(v12[0]) ) /*0x516dc4*/
    {
      if ( v10 == 1 ) /*0x516dca*/
        return 0; /*0x516dd2*/
    }
    else if ( v9 == 2 ) /*0x516dd9*/
    {
      if ( v10 == 1 ) /*0x516ddf*/
        return 0; /*0x516de7*/
    }
    else if ( v9 == 3 && v10 == 1 ) /*0x516df4*/
    {
      return 0; /*0x516dfc*/
    }
  }
  return 1; /*0x516ce6*/
}
}

// 0x516E10
char JumpjetLocomotionClass::TryMoveToAdjacentCell(unsigned int a1, unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_516E10(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // esi
  _WORD *v3; // eax
  int *v4; // edi
  unsigned int v5; // ecx
  __int16 v6; // dx
  int v7; // ebx
  void *v8; // eax
  int v9; // ecx
  int GroundHeight; // eax
  int *v11; // ecx
  _BYTE v13[4]; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v2 = a1; /*0x516e15*/
  if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(*(_DWORD *)a1 + 96))(a1) ) /*0x516e1d*/
    return 0; /*0x516e1d*/
  if ( *(_BYTE *)(v2 + 108) ) /*0x516e28*/
    return 0; /*0x516e28*/
  v3 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v2 + 8) + 440))(*(_DWORD *)(v2 + 8), v13); /*0x516e3d*/
  v4 = *(int **)(v2 + 8); /*0x516e46*/
  v5 = (((a2 >> 12) + 1) >> 1) & 7; /*0x516e57*/
  v6 = LOWORD(MEMORY[0x89F688][v5]) + *v3; /*0x516e5e*/
  LOWORD(v5) = HIWORD(MEMORY[0x89F688][v5]); /*0x516e6d*/
  LOWORD(a2) = v6; /*0x516e71*/
  HIWORD(a2) = v3[1] + v5; /*0x516e7f*/
  a1 = a2; /*0x516e88*/
  v7 = *v4; /*0x516e8c*/
  v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x516e93*/
  if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v7 + 428))(v4, v8, -1, -1, 0, 1) ) /*0x516e9b*/
    return 0; /*0x516fb5*/
  *(_BYTE *)(v2 + 108) = 1; /*0x516ea9*/
  if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(*(_DWORD *)v2 + 16))(v2) ) /*0x516eb0*/
  {
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 1504) = -1; /*0x516ec1*/
    if ( *(_DWORD *)(v2 + 32) != MEMORY[0xA8F180] /*0x516eeb*/
      || *(_DWORD *)(v2 + 36) != MEMORY[0xA8F184]
      || *(_DWORD *)(v2 + 40) != MEMORY[0xA8F188] )
    {
      (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v2 + 8) + 244))(*(_DWORD *)(v2 + 8), v2 + 32); /*0x516ef3*/
    }
    v9 = SHIWORD(a1) << 8; /*0x516f0d*/
    *(_DWORD *)(v2 + 32) = ((__int16)a1 << 8) + 128; /*0x516f10*/
    *(_DWORD *)(v2 + 36) = v9 + 128; /*0x516f1b*/
    *(_DWORD *)(v2 + 40) = 0; /*0x516f23*/
    GroundHeight = Cell::GetGroundHeight((_DWORD *)(v2 + 32)); /*0x516f26*/
    *(_DWORD *)(v2 + 40) = GroundHeight; /*0x516f2b*/
    v11 = (int *)(*(_DWORD *)(v2 + 8) + 156); /*0x516f31*/
    v14 = *v11; /*0x516f39*/
    v15 = v11[1]; /*0x516f40*/
    if ( v11[2] >= GroundHeight + 2 * MEMORY[0xA8F1C0] + MEMORY[0xA8F1C0] ) /*0x516f54*/
      *(_DWORD *)(v2 + 40) = MEMORY[0xA8F1B4] + GroundHeight; /*0x516f5e*/
    (*(void (__thiscall **)(_DWORD, unsigned int))(**(_DWORD **)(v2 + 8) + 240))(*(_DWORD *)(v2 + 8), v2 + 32); /*0x516f67*/
    return 1; /*0x516f6d*/
  }
  else
  {
    (*(void (__stdcall **)(unsigned int, int, int, _DWORD))(*(_DWORD *)v2 + 68))( /*0x516fa5*/
      v2,
      ((__int16)a1 << 8) + 128,
      (SHIWORD(a1) << 8) + 128,
      0);
    return 1; /*0x516fa8*/
  }
}
}

// 0x516FC0
char JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass *aP0, HoverLocomotionClass *aP1)
{
  if ( !(*(unsigned __int8 (__stdcall **)(HoverLocomotionClass *, HoverLocomotionClass *))(*(_DWORD *)aP0->__pad_0 + 104))( /*0x516fcd*/
          aP0,
          aP1) )
    return 0; /*0x517017*/
  LOBYTE(aP0->CurrentWobbles[1]) = 1; /*0x516fd4*/
  *(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516fed*/
                                                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                                          (IUnknown *)0x14,
                                                          (IUnknown *)0x1E);
  if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 50 ) /*0x517007*/
    *(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68 = -*(_DWORD *)&aP0->HoverLocomotionClass_field_bool_68; /*0x51700e*/
  return 1; /*0x517013*/
}
}

// 0x5171C0
int JumpjetLocomotionClass::DispatchVirtualCall_3(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_5171C0(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5171c0*/
  if ( !a2 ) /*0x5171c9*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x5171d8*/
    v5[0] = *v3; /*0x5171dd*/
    v5[1] = v3[1]; /*0x5171e4*/
    v4 = a1[2]; /*0x5171eb*/
    v5[2] = v3[2]; /*0x5171ee*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x5171f9*/
  }
  return result; /*0x517200*/
}
}

// 0x517210
bool JumpjetLocomotionClass::IsPositionWithinThreshold(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_517210(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v9); /*0x517223*/
  v5 = v4[2]; /*0x51722b*/
  v6 = *v4; /*0x517257*/
  v7 = v4[1] / 256; /*0x51726d*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x517291*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= MEMORY[0xA8F1C0];
}
}

// 0x54AD30
int JumpjetLocomotionClass::InitMovementParams(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54AD30(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // eax
  _WORD v6[12]; // [esp+10h] [ebp-18h] BYREF

  v2 = a2; /*0x54ad34*/
  v3 = a1; /*0x54ad39*/
  *(_DWORD *)(v3 + 24) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3440); /*0x54ad4f*/
  *(_DWORD *)(v3 + 28) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3444); /*0x54ad64*/
  *(_DWORD *)(v3 + 32) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3448); /*0x54ad77*/
  *(_DWORD *)(v3 + 36) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3452); /*0x54ad8a*/
  v4 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3456); /*0x54ad9b*/
  if ( v4 <= 2 * dword_ABC5E8 ) /*0x54ada5*/
    v4 = 2 * dword_ABC5E8; /*0x54ada7*/
  *(_DWORD *)(v3 + 40) = v4; /*0x54ada9*/
  *(_DWORD *)(v3 + 44) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3460); /*0x54adbe*/
  *(_DWORD *)(v3 + 48) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3464); /*0x54add1*/
  *(_DWORD *)(v3 + 52) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3472); /*0x54ade4*/
  *(_BYTE *)(v3 + 56) = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3468); /*0x54adf5*/
  FrameSnapshot::InitMax(v6, *(_DWORD *)(v3 + 24)); /*0x54ae00*/
  qmemcpy((void *)(v3 + 80), v6, 0x18u); /*0x54ae13*/
  LOWORD(a1) = 0x4000; /*0x54ae21*/
  FacingClass::Update((char *)(v3 + 80), &a1); /*0x54ae26*/
  LOWORD(a1) = 0x4000; /*0x54ae33*/
  FacingClass::Set_SyncLog((char *)(v3 + 80), &a1); /*0x54ae38*/
  return StreamClass::ResetPosition(v3, v2); /*0x54ae44*/
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
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_54AE60(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x54ae69*/
  {
    result = a2; /*0x54ae70*/
    v3 = a1[16]; /*0x54ae77*/
    v4 = a1[17]; /*0x54ae7a*/
    v5 = a2; /*0x54ae7d*/
    *a2 = a1[15]; /*0x54ae7f*/
  }
  else
  {
    result = a2; /*0x54ae8c*/
    v3 = dword_ABC5AC; /*0x54ae96*/
    v4 = dword_ABC5B0; /*0x54ae9c*/
    v5 = a2; /*0x54aea2*/
    *a2 = dword_ABC5A8; /*0x54aea4*/
  }
  v5[1] = v3; /*0x54ae81*/
  v5[2] = v4; /*0x54ae84*/
  return result; /*0x54ae87*/
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

// 0x54B6E0
char JumpjetLocomotionClass::SynchronizeFacingDirection_0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_54B6E0(int a1, int a2)
{
  return FacingClass::Set_SyncLog((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x54b6ff*/
}
}

// 0x54B750
HRESULT JumpjetLocomotionClass::InitClass(int * a1, int * pStm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall JumpjetLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x54b757*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x54b762*/
  if ( v3 < 0 ) /*0x54b766*/
    return v3; /*0x54b766*/
  if ( a1 ) /*0x54b76a*/
  {
    a1[37] = 0; /*0x54b76c*/
    *a1 = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b776*/
    a1[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b77c*/
    a1[6] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b783*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x54b796*/
  if ( !(_BYTE)pStm ) /*0x54b79f*/
    return v3; /*0x54b7d1*/
  v4 = a1[37]; /*0x54b7a1*/
  v5 = (LPVOID *)(a1 + 37); /*0x54b7a7*/
  if ( v4 ) /*0x54b7af*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x54b7b4*/
  *v5 = 0; /*0x54b7be*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x54b7ca*/
}
}

// 0x54B7E0
HRESULT JumpjetLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall JumpjetLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x54b7e6*/
  v4 = a1; /*0x54b7eb*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x54b7f7*/
  if ( IPersistStream < 0 ) /*0x54b7fb*/
    return IPersistStream; /*0x54b7fb*/
  if ( !v4[37] ) /*0x54b809*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x54b8a9*/
    LOBYTE(a3) = 0; /*0x54b8b5*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x54b8ba*/
    return IPersistStream; /*0x54b8be*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x54b80f*/
  LOBYTE(a3) = 1; /*0x54b81b*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x54b820*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[37]; /*0x54b823*/
  pPStm = 0; /*0x54b829*/
  if ( v7 ) /*0x54b833*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x54b844*/
    if ( v8 >= 0 ) /*0x54b848*/
    {
      v9 = a1; /*0x54b861*/
      if ( pPStm ) /*0x54b867*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b86c*/
      pPStm = v9; /*0x54b86f*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x54b84e*/
      pPStm = 0; /*0x54b853*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x54b87d*/
      WinAPI::Wrapper(v8); /*0x54b880*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x54b891*/
  if ( pPStm ) /*0x54b899*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b89e*/
  return v10; /*0x54b8a3*/
}
}

// 0x54B8D0
int JumpjetLocomotionClass::ConvertCoordToCell_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54B8D0(int a1)
{
  int v1; // edi
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)); /*0x54b8e4*/
  v2 = *(_DWORD *)(a1 + 8); /*0x54b8e6*/
  if ( !*(_BYTE *)(v2 + 140) ) /*0x54b8e9*/
  {
    v3 = (_DWORD *)(v2 + 156); /*0x54b8f3*/
    v5[0] = *v3; /*0x54b8fa*/
    v5[1] = v3[1]; /*0x54b906*/
    v5[2] = v3[2]; /*0x54b912*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v5) + 80) & 0x100) != 0 /*0x54b932*/
      && v1 >= dword_ABC5DC
      && !*(_BYTE *)(*(_DWORD *)(a1 + 8) + 141) )
    {
      v1 -= dword_ABC5DC; /*0x54b93c*/
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 84))(*(_DWORD *)(a1 + 8)) ) /*0x54b943*/
    return 2; /*0x54b94b*/
  if ( v1 ) /*0x54b959*/
    return (v1 >= *(_DWORD *)(a1 + 40)) + 3; /*0x54b973*/
  return 2; /*0x54b94a*/
}
}

// 0x54D0D0
bool JumpjetLocomotionClass::CheckCompositeState(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_54D0D0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 76); /*0x54d0d4*/
  return v1 && v1 != 2; /*0x54d0e2*/
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

  v3 = *(this + 3); /*0x54d6d0*/
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

// 0x54D820
int JumpjetLocomotionClass::GetFloorZSetContext()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass::GetFloorZSetContext(int this)
{
  int *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // esi
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v2 = (int *)(this->LinkedTo + 156); /*0x54d82a*/
  v12 = *v2; /*0x54d831*/
  v13 = v2[1]; /*0x54d83d*/
  v14 = v2[2]; /*0x54d849*/
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x54d84d*/
  v4 = JumpjetLocomotionClass::FindClosestOccupiableCell(v3); /*0x54d863*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d873*/
    v4 += dword_ABC5DC; /*0x54d875*/
  if ( *(double *)(this + 112) <= 0.0 ) /*0x54d889*/
    return v4; /*0x54d926*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 84), &v11) >> 12) + 1) >> 1) & 7; /*0x54d8ac*/
  v6 = v12 + MEMORY[0x89F6D8][2 * v5]; /*0x54d8bd*/
  v7 = MEMORY[0x89F6DC][2 * v5]; /*0x54d8bf*/
  v12 = v6; /*0x54d8c2*/
  v13 += v7; /*0x54d8d4*/
  v8 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x54d8de*/
  v9 = JumpjetLocomotionClass::FindClosestOccupiableCell(v8); /*0x54d8ea*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d904*/
    v4 += dword_ABC5DC; /*0x54d906*/
  if ( v9 <= v4 ) /*0x54d90e*/
    return (v9 + v4) / 2; /*0x54d920*/
  else
    return v9; /*0x54d910*/
}
}

// 0x54D930
char JumpjetLocomotionClass::DispatchVirtualCall_4(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_54D930(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-Ch] BYREF

  LOBYTE(v2) = a2; /*0x54d930*/
  if ( !a2 ) /*0x54d93a*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v7); /*0x54d949*/
    v6[0] = *v3; /*0x54d954*/
    v4 = v3[1]; /*0x54d958*/
    v6[1] = v4; /*0x54d95b*/
    v2 = v3[2]; /*0x54d95f*/
    v6[2] = v2; /*0x54d964*/
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 ) /*0x54d979*/
    {
      if ( !*(_DWORD *)(a1 + 76) || (LOBYTE(v2) = *(_BYTE *)(a1 + 140), (_BYTE)v2) ) /*0x54d98a*/
      {
        LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), v6); /*0x54d996*/
        *(_BYTE *)(a1 + 140) = 0; /*0x54d99c*/
      }
    }
  }
  return v2; /*0x54d9a3*/
}
}

// 0x54D9B0
unsigned int * JumpjetLocomotionClass::GetConditionedCoordinate(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_54D9B0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // edx
  int v6; // eax

  if ( a1[19] ) /*0x54d9b6*/
  {
    v5 = a1[16]; /*0x54d9e7*/
    v6 = a1[17]; /*0x54d9ea*/
    *a2 = a1[15]; /*0x54d9ef*/
    a2[1] = v5; /*0x54d9f1*/
    a2[2] = v6; /*0x54d9f4*/
    return a2; /*0x54d9f7*/
  }
  else
  {
    v2 = *(_DWORD *)(a1[2] + 160); /*0x54d9c7*/
    v3 = *(_DWORD *)(a1[2] + 164); /*0x54d9ca*/
    *a2 = *(_DWORD *)(a1[2] + 156); /*0x54d9d3*/
    a2[1] = v2; /*0x54d9d5*/
    a2[2] = v3; /*0x54d9d8*/
    return a2; /*0x54d9cd*/
  }
}
}

// 0x54DA00
int JumpjetLocomotionClass::StubReturnZero_9(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54DA00(int a1, int a2)
{
  if ( !a2 ) /*0x54da06*/
    return -2147467261; /*0x54da08*/
  if ( *(_DWORD *)(a1 + 124) ) /*0x54da14*/
    return -2147467259; /*0x54da3b*/
  *(_DWORD *)(a1 + 124) = a2; /*0x54da22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54da28*/
  return 0; /*0x54da0d*/
}
}

// 0x54DA50
int JumpjetLocomotionClass::StubReturnZero_10(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54DA50(int a1, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax

  if ( !a2 ) /*0x54da5b*/
    return -2147467261; /*0x54da5f*/
  v3 = *(_DWORD *)(a1 - 12); /*0x54da6c*/
  if ( v3 ) /*0x54da71*/
  {
    if ( *(_BYTE *)(v3 + 1709) || *(_BYTE *)(v3 + 1710) ) /*0x54da7b*/
    {
      *(_BYTE *)(v3 + 1709) = 0; /*0x54da83*/
      *(_BYTE *)(*(_DWORD *)(a1 - 12) + 1710) = 0; /*0x54da8c*/
      v4 = *(_DWORD **)(a1 - 12); /*0x54da92*/
      if ( !*(_BYTE *)(v4[135] + 492) && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1516) ) /*0x54daab*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 - 12) + 488))(*(_DWORD *)(a1 - 12), 10, 0); /*0x54dabb*/
    }
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1064) = 0; /*0x54dac4*/
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1068) = 0; /*0x54dacd*/
  }
  v5 = *(_DWORD *)(a1 + 124); /*0x54dad3*/
  if ( !v5 ) /*0x54dad8*/
    return 1; /*0x54dae9*/
  *a2 = v5; /*0x54dada*/
  *(_DWORD *)(a1 + 124) = 0; /*0x54dadc*/
  return 0; /*0x54da5d*/
}
}

// 0x54DB00
bool JumpjetLocomotionClass::StubReturnTrue_2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_54DB00(int a1)
{
  int v1; // esi
  bool result; // al

  result = 0; /*0x54db3e*/
  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) ) /*0x54db0c*/
  {
    if ( *(_DWORD *)(a1 + 124) ) /*0x54db13*/
    {
      if ( !*(_BYTE *)(a1 + 121) ) /*0x54db1a*/
      {
        v1 = *(_DWORD *)(a1 - 12); /*0x54db21*/
        if ( !*(_BYTE *)(v1 + 1709) || *(_BYTE *)(v1 + 1710) ) /*0x54db2e*/
          return 1; /*0x54db11*/
      }
    }
  }
  return result; /*0x54db3a*/
}
}

// 0x54DB50
int JumpjetLocomotionClass::LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54DB50(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x54db51*/
  if ( !a2 ) /*0x54db58*/
    return -2147467261; /*0x54db61*/
  v4 = a1 + 31; /*0x54db6b*/
  if ( a1[31] ) /*0x54db68*/
  {
    a1 = 0; /*0x54db74*/
    v5 = StreamClass::Set2(&a1, v4); /*0x54db85*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x54db93*/
      WinAPI::Wrapper(v5); /*0x54db96*/
    if ( !a1 ) /*0x54dba1*/
      return -2147467259; /*0x54dbaa*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x54dbb4*/
    if ( a1 ) /*0x54dbbc*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x54dbc5*/
      return v6; /*0x54dbcc*/
    }
  }
  else
  {
    a2 = 0; /*0x54dbd2*/
    if ( a1 == (_DWORD *)24 ) /*0x54dbdc*/
      return -2147467259; /*0x54dbdc*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x54dbed*/
    if ( v7 >= 0 ) /*0x54dbf1*/
    {
      v9 = a1; /*0x54dc05*/
      ComPtr::Release_Alt((int *)&a2); /*0x54dc0d*/
      v8 = v9; /*0x54dc12*/
      a2 = v9; /*0x54dc15*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x54dbf7*/
      v8 = 0; /*0x54dbfc*/
      a2 = 0; /*0x54dbfe*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x54dc23*/
      WinAPI::Wrapper(v7); /*0x54dc26*/
    if ( !v8 ) /*0x54dc31*/
      return -2147467259; /*0x54dc3a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x54dc44*/
    if ( a2 ) /*0x54dc4c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x54dc51*/
  }
  return v6; /*0x54db5a*/
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

// 0x54DF70
BOOL JumpjetLocomotionClass::ShortFunc_54DF70(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_54DF70(int a1)
{
  return *(_DWORD *)(a1 + 124) != 0; /*0x54df7e*/
}
}

// 0x54DFA0
JumpjetLocomotionClass * JumpjetLocomotionClass::ProcessAttach(int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
JumpjetLocomotionClass *__thiscall JumpjetLocomotionClass::ProcessAttach(int *Block, char a2)
{
  int v3; // eax

  *Block = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa3*/
  *(Block + 1) = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa9*/
  *(Block + 6) = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfb0*/
  v3 = *(Block + 37); /*0x54dfb7*/
  if ( v3 ) /*0x54dfbf*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x54dfc4*/
  LocomotionClass::Construct(Block); /*0x54dfc9*/
  if ( (a2 & 1) != 0 ) /*0x54dfd3*/
    __3_YAXPAX_Z(Block); /*0x54dfd6*/
  return (JumpjetLocomotionClass *)Block; /*0x54dfe0*/
}
}

// 0x54DFF0
int JumpjetLocomotionClass::SmallStub_54DFF0(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54DFF0(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x54E000
LONG JumpjetLocomotionClass::SmallStub_54E000(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_54E000(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 4);
}
}

// 0x54E010
LONG JumpjetLocomotionClass::SmallStub_54E010(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_54E010(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x54E020
int JumpjetLocomotionClass::SmallStub_54E020(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_54E020(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x54E030
LONG JumpjetLocomotionClass::SmallStub_54E030(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_54E030(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 24);
}
}

// 0x54E040
LONG JumpjetLocomotionClass::SmallStub_54E040(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_54E040(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
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
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_55AC70(int a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi

  v3 = dword_ABCC7C; /*0x55ac7a*/
  v4 = dword_ABCC80; /*0x55ac81*/
  *a2 = dword_ABCC78; /*0x55ac8a*/
  a2[1] = v3; /*0x55ac8c*/
  a2[2] = v4; /*0x55ac8f*/
  return a2; /*0x55ac92*/
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

  v4 = *(this + 61); /*0x586ac8*/
  v5 = SLOWORD(aP2->field_0); /*0x586acf*/
  v6 = SHIWORD(aP2->field_0); /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - *(this + 63); /*0x586b05*/
  v9 = v5 + v6 - v4 - *(this + 64); /*0x586b0d*/
  aP2a = *(this + 65) / 2; /*0x586b2d*/
  v10 = *(this + 66) / 2; /*0x586b36*/
  if ( (int)abs32(v8 - aP2a) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = *(this + 66); /*0x586b98*/
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
      v8 = *(this + 65) - 1; /*0x586b6c*/
    else
      v8 = *(this + 65); /*0x586b75*/
    v11 = v9; /*0x586b6f*/
  }
  else
  {
    v8 = a4 != 0; /*0x586b58*/
    v11 = v9; /*0x586b5a*/
  }
  v12 = *(this + 64) + v11; /*0x586bb1*/
  v13 = v8 + *(this + 63); /*0x586bb3*/
  LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  aP1->field_0 = v16; /*0x586bdc*/
  return &aP1->field_0; /*0x586bb5*/
}
}

// 0x5AFF70
char JumpjetLocomotionClass::SmallStub_5AFF70(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_5AFF70(int a1)
{
  return *(_BYTE *)(a1 + 44); /*0x5aff77*/
}
}

// 0x5AFF80
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_5AFF80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x5aff89*/
  {
    result = a2; /*0x5aff90*/
    v3 = a1[6]; /*0x5aff97*/
    v4 = a1[7]; /*0x5aff9a*/
    v5 = a2; /*0x5aff9d*/
    *a2 = a1[5]; /*0x5aff9f*/
  }
  else
  {
    result = a2; /*0x5affac*/
    v3 = MEMORY[0xABEE14]; /*0x5affb6*/
    v4 = MEMORY[0xABEE18]; /*0x5affbc*/
    v5 = a2; /*0x5affc2*/
    *a2 = g_MatrixTransformState; /*0x5affc4*/
  }
  v5[1] = v3; /*0x5affa1*/
  v5[2] = v4; /*0x5affa4*/
  return result; /*0x5affa7*/
}
}

// 0x5AFFE0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_5AFFE0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( a1[8] == g_MatrixTransformState && a1[9] == MEMORY[0xABEE14] && a1[10] == MEMORY[0xABEE18] ) /*0x5b000b*/
  {
    v5 = a1[2]; /*0x5b002b*/
    v6 = v5 + 156; /*0x5b0034*/
    v7 = *(_DWORD *)(v5 + 156); /*0x5b0036*/
    v8 = *(_DWORD *)(v5 + 160); /*0x5b0038*/
    v9 = *(_DWORD *)(v6 + 8); /*0x5b003b*/
    *a2 = v7; /*0x5b0044*/
    a2[1] = v8; /*0x5b0046*/
    a2[2] = v9; /*0x5b0049*/
    return a2; /*0x5b003e*/
  }
  else
  {
    v2 = a1[9]; /*0x5b0014*/
    v3 = a1[10]; /*0x5b0017*/
    *a2 = a1[8]; /*0x5b001c*/
    a2[1] = v2; /*0x5b001e*/
    a2[2] = v3; /*0x5b0021*/
    return a2; /*0x5b0024*/
  }
}
}

// 0x5B0060
int JumpjetLocomotionClass::ShortFunc_5B0060(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_5B0060(int a1)
{
  BuildingClass::ProcessMission(a1 - 4, 1); /*0x5b006a*/
  return (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1); /*0x5b0075*/
}
}

// 0x5B0080
int JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown * aP2, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown *aP2, IUnknown *aP3)
{
  int result; // eax
  IUnknown *v5; // ecx
  IUnknown *v6; // edx

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x5b008a*/
  if ( !(_BYTE)result ) /*0x5b0092*/
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 896))(*(_DWORD *)(a1 + 8)); /*0x5b0099*/
    if ( !(_BYTE)result ) /*0x5b00a1*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x5b00a8*/
      if ( !(_BYTE)result ) /*0x5b00b0*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x5b00b7*/
        if ( !(_BYTE)result ) /*0x5b00bf*/
        {
          v5 = aP2; /*0x5b00c5*/
          v6 = aP3; /*0x5b00ca*/
          *(_DWORD *)(a1 + 20) = aP1; /*0x5b00dd*/
          *(_DWORD *)(a1 + 24) = v5; /*0x5b00e4*/
          *(_DWORD *)(a1 + 28) = v6; /*0x5b00ec*/
          result = (int)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&aP1); /*0x5b00ef*/
          if ( (*(_DWORD *)(result + 320) & 0x100) != 0 ) /*0x5b00fe*/
          {
            result = Coord::ScaleToScreenY((void *)0x3C); /*0x5b0105*/
            *(_DWORD *)(a1 + 28) += result; /*0x5b010a*/
          }
          *(_BYTE *)(a1 + 44) = 1; /*0x5b010d*/
        }
      }
    }
  }
  return result; /*0x5b0111*/
}
}

// 0x5B0120
int JumpjetLocomotionClass::SyncMatrixTransformState(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_5B0120(int a1)
{
  int result; // eax

  result = a1; /*0x5b0120*/
  *(_DWORD *)(a1 + 20) = g_MatrixTransformState; /*0x5b012d*/
  *(_DWORD *)(a1 + 24) = MEMORY[0xABEE14]; /*0x5b0136*/
  *(_DWORD *)(a1 + 28) = MEMORY[0xABEE18]; /*0x5b013f*/
  if ( *(_DWORD *)(a1 + 32) == g_MatrixTransformState /*0x5b0165*/
    && *(_DWORD *)(a1 + 36) == MEMORY[0xABEE14]
    && *(_DWORD *)(a1 + 40) == MEMORY[0xABEE18] )
  {
    *(_BYTE *)(a1 + 44) = 0; /*0x5b0167*/
  }
  return result; /*0x5b016b*/
}
}

// 0x5B0170
char JumpjetLocomotionClass::UpdateFacingDirection_1(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_5B0170(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x5b018f*/
}
}

// 0x5B01A0
int JumpjetLocomotionClass::InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_5B01A0(_DWORD *a1, int a2, int a3, int a4)
{
  a1[8] = a2; /*0x5b01b4*/
  a1[9] = a3; /*0x5b01b6*/
  a1[10] = a4; /*0x5b01b9*/
  return a2; /*0x5b01bc*/
}
}

// 0x5B19E0
bool JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x5b19ee*/
    return 1; /*0x5b19f7*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x5b1a39*/
      && (aP0->NeedsSaveOrLink != g_MatrixTransformState
       || *(_QWORD *)&aP0->objectTypeFlags != *(_QWORD *)(&g_MatrixTransformState + 1))
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
}
}

// 0x5B1A50
int JumpjetLocomotionClass::DispatchVirtualCall_5(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_5B1A50(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5b1a50*/
  if ( !a2 ) /*0x5b1a59*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x5b1a68*/
    v5[0] = *v3; /*0x5b1a6d*/
    v5[1] = v3[1]; /*0x5b1a74*/
    v4 = a1[2]; /*0x5b1a7b*/
    v5[2] = v3[2]; /*0x5b1a7e*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x5b1a89*/
  }
  return result; /*0x5b1a90*/
}
}

// 0x5B1AA0
bool JumpjetLocomotionClass::IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_5B1AA0(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v9); /*0x5b1ab3*/
  v5 = v4[2]; /*0x5b1abb*/
  v6 = *v4; /*0x5b1ae7*/
  v7 = v4[1] / 256; /*0x5b1afd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x5b1b21*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= MEMORY[0xABEE50];
}
}

// 0x661F50
BOOL JumpjetLocomotionClass::HasFieldStateChanged(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_661F50(_DWORD *a1)
{
  return a1[5] != dword_B04E38 || a1[6] != dword_B04E3C || a1[7] != dword_B04E40; /*0x661f7d*/
}
}

// 0x661F90
bool JumpjetLocomotionClass::CheckCompositeState_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_661F90(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 60); /*0x661f94*/
  return v1 >= 3 && v1 <= 5; /*0x661fa3*/
}
}

// 0x661FB0
unsigned int * JumpjetLocomotionClass::GetCoordinate_0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_661FB0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[6]; /*0x661fbd*/
  v3 = a1[7]; /*0x661fc0*/
  *a2 = a1[5]; /*0x661fc5*/
  a2[1] = v2; /*0x661fc7*/
  a2[2] = v3; /*0x661fca*/
  return a2; /*0x661fcf*/
}
}

// 0x6632E0
int JumpjetLocomotionClass::ComputeFloatExpression_3(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6632E0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // edx
  char *p_TiberiumExplosionDamage; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch]

  result = a1; /*0x6632e0*/
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 1732); /*0x6632ec*/
  if ( v5 == LODWORD(MEMORY[0x8871E0]->?) ) /*0x6632fe*/
  {
    p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->?; /*0x663300*/
  }
  else
  {
    v7 = v5 == MEMORY[0x8871E0]->?[0]; /*0x66330e*/
    p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->?; /*0x663310*/
    if ( !v7 ) /*0x663316*/
      p_TiberiumExplosionDamage = (char *)&MEMORY[0x8871E0]->? + 4; /*0x663318*/
  }
  if ( *(_DWORD *)(a1 + 20) == dword_B04E38 /*0x66334a*/
    && *(_DWORD *)(a1 + 24) == dword_B04E3C
    && *(_DWORD *)(a1 + 28) == dword_B04E40 )
  {
    if ( *(_DWORD *)p_TiberiumExplosionDamage ) /*0x66334c*/
    {
      *(_DWORD *)(a1 + 60) = 1; /*0x663353*/
      v8 = *(_DWORD *)p_TiberiumExplosionDamage; /*0x663360*/
    }
    else
    {
      *(_DWORD *)(a1 + 60) = 2; /*0x66336e*/
      v8 = *((_DWORD *)p_TiberiumExplosionDamage + 1); /*0x66337b*/
    }
    *(_DWORD *)(a1 + 32) = MEMORY[0xA8ED84]; /*0x663365*/
    *(_DWORD *)(a1 + 36) = v9; /*0x663388*/
    *(_DWORD *)(a1 + 40) = v8; /*0x66338b*/
    *(_DWORD *)(a1 + 44) = v8; /*0x66338e*/
    *(float *)(a1 + 80) = *((float *)p_TiberiumExplosionDamage + 2) * 1.570796326794897; /*0x6633a3*/
    *(_DWORD *)(a1 + 20) = a2; /*0x6633aa*/
    *(_DWORD *)(a1 + 24) = a3; /*0x6633ac*/
    *(_DWORD *)(a1 + 28) = a4; /*0x6633af*/
    return a2; /*0x6633a6*/
  }
  return result; /*0x6633b2*/
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

// 0x69ED20
int JumpjetLocomotionClass::LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_69ED20(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x69ed21*/
  if ( !a2 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  v4 = a1 + 20; /*0x69ed3b*/
  if ( a1[20] ) /*0x69ed38*/
  {
    a1 = 0; /*0x69ed44*/
    v5 = StreamClass::Set2(&a1, v4); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !a1 ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x69ed84*/
    if ( a1 ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    a2 = 0; /*0x69eda2*/
    if ( a1 == (_DWORD *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x69edbd*/
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = a1; /*0x69edd5*/
      ComPtr::Release_Alt((int *)&a2); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      a2 = v9; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      a2 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x69ee14*/
    if ( a2 ) /*0x69ee1c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}
}

// 0x69EFF0
int JumpjetLocomotionClass::StubReturnZero_12(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_69EFF0(int a1, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(_DWORD *)(a1 + 80) ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(_DWORD *)(a1 + 80) = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}
}

// 0x69F040
int JumpjetLocomotionClass::StubReturnZero_13(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_69F040(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(_DWORD *)(a1 + 80); /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(_DWORD *)(a1 + 80) = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}
}

// 0x69F080
bool JumpjetLocomotionClass::CheckPiggybackState_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_69F080(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x69f0b0*/
      && *(_DWORD *)(a1 + 80)
      && *(_BYTE *)(a1 + 77)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}
}

// 0x69F250
unsigned int * JumpjetLocomotionClass::InitMovementState_0(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F250(_DWORD *a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1[7] = a2; /*0x69f25d*/
  a1[6] = a2; /*0x69f260*/
  a1[8] = MEMORY[0xA8ED84]; /*0x69f26f*/
  a1[9] = v3; /*0x69f275*/
  a1[10] = 0; /*0x69f278*/
  a1[11] = 0; /*0x69f27b*/
  return a1 + 8; /*0x69f27e*/
}
}

// 0x69F290
bool JumpjetLocomotionClass::StubReturnTrue_5(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_69F290(int a1)
{
  if ( *(_DWORD *)(a1 + 48) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 52) != MEMORY[0xB077FC] ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(_DWORD *)(a1 + 60) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 64) != MEMORY[0xB077FC]) /*0x69f310*/
      && (*(_DWORD *)(a1 + 60) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 156)
       || *(_DWORD *)(a1 + 64) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 160));
}
}

// 0x69F330
bool JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass *aP0)
{
  if ( TimerClass::Active(*(_DWORD *)&aP0->__pad_0[8] + 904) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(unsigned __int8 (__stdcall **)(InfantryClass *))(*(_DWORD *)aP0->__pad_0 + 16))(aP0) /*0x69f389*/
      && (aP0->ambientSoundController[0] != *(_DWORD *)&stru_B05488.__pad_14B0[3776]
       || aP0->ambientSoundController[1] != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
       || aP0->ambientSoundController[2] != *(_DWORD *)&stru_B05488.__pad_14B0[3784])
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1336))(*(_DWORD *)&aP0->__pad_0[8]) > 0;
}
}

// 0x69F3A0
unsigned int * JumpjetLocomotionClass::GetCoordinate_1(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3A0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = a1[13]; /*0x69f3ad*/
  v3 = a1[14]; /*0x69f3b0*/
  *a2 = a1[12]; /*0x69f3b5*/
  a2[1] = v2; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}
}

// 0x69F3D0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_69F3D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( a1[15] == MEMORY[0xB077F8] && *((_QWORD *)a1 + 8) == MEMORY[0xB077FC] ) /*0x69f3ee*/
  {
    v4 = a1[2]; /*0x69f41b*/
    v5 = v4 + 156; /*0x69f424*/
    v6 = *(_DWORD *)(v4 + 156); /*0x69f426*/
    v7 = *(_DWORD *)(v4 + 160); /*0x69f428*/
    v8 = *(_DWORD *)(v5 + 8); /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = a1[16]; /*0x69f404*/
    v3 = a1[17]; /*0x69f407*/
    *a2 = a1[15]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}
}

// 0x69F450
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, _DWORD *a1, unsigned int aP1_4, IUnknown *aP3)
{
  _DWORD *result; // eax
  unsigned int v5; // ecx
  IUnknown *v6; // edx

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 892))(*(_DWORD *)(arg0 + 8)); /*0x69f45b*/
  if ( !(_BYTE)result ) /*0x69f463*/
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 896))(*(_DWORD *)(arg0 + 8)); /*0x69f46e*/
    if ( !(_BYTE)result ) /*0x69f476*/
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 468))(*(_DWORD *)(arg0 + 8)); /*0x69f481*/
      if ( !(_BYTE)result ) /*0x69f489*/
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(arg0 + 8) + 472))(*(_DWORD *)(arg0 + 8)); /*0x69f490*/
        if ( !(_BYTE)result ) /*0x69f498*/
        {
          result = a1; /*0x69f49a*/
          v5 = aP1_4; /*0x69f49e*/
          v6 = aP3; /*0x69f4a2*/
          *(_DWORD *)(arg0 + 48) = a1; /*0x69f4a9*/
          *(_DWORD *)(arg0 + 52) = v5; /*0x69f4ac*/
          *(_DWORD *)(arg0 + 56) = v6; /*0x69f4af*/
          if ( result != *(_DWORD **)&stru_B05488.__pad_14B0[3776] /*0x69f4ca*/
            || v5 != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
            || v6 != *(IUnknown **)&stru_B05488.__pad_14B0[3784] )
          {
            a1 = result; /*0x69f4cc*/
            aP1_4 = v5; /*0x69f4d4*/
            aP3 = v6; /*0x69f4de*/
            result = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (_DWORD *)(*(_DWORD *)&stru_B05488.__pad_14B0[3828] + *(_DWORD *)(arg0 + 56)); /*0x69f4fb*/
              *(_DWORD *)(arg0 + 56) = result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}
}

// 0x69F510
int JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_69F510(int a1)
{
  int v1; // eax
  int v2; // esi
  double v3; // st7
  int result; // eax

  if ( *(_DWORD *)(a1 + 60) != MEMORY[0xB077F8] || *(_QWORD *)(a1 + 64) != MEMORY[0xB077FC] ) /*0x69f52d*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3220) ) /*0x69f546*/
    {
      v1 = *(_DWORD *)(a1 + 8); /*0x69f550*/
      if ( !*(_BYTE *)(v1 + 1744) ) /*0x69f553*/
      {
        v2 = *(_DWORD *)(v1 + 1736); /*0x69f55d*/
        if ( v2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 72))(*(_DWORD *)(v2 + 1652)); /*0x69f584*/
            v2 = *(_DWORD *)(v2 + 1736); /*0x69f587*/
          }
          while ( v2 && v2 != *(_DWORD *)(v2 + 1736) ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)(a1 + 76) >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)(a1 + 76); /*0x69f5a9*/
  *(double *)(a1 + 76) = v3; /*0x69f5b4*/
  *(_DWORD *)(a1 + 48) = MEMORY[0xB077F8]; /*0x69f5c0*/
  result = MEMORY[0xB077FC]; /*0x69f5c2*/
  *(_QWORD *)(a1 + 52) = MEMORY[0xB077FC]; /*0x69f5c7*/
  return result; /*0x69f5d3*/
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

// 0x69FB20
float * JumpjetLocomotionClass::ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__stdcall JumpjetLocomotionClass::sub_69FB20(_DWORD *a1, float *a2, _DWORD *a3)
{
  int v3; // edi
  double v4; // st7
  int v5; // edx
  int v6; // eax
  int v7; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1[11]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    v5 = a1[8]; /*0x69fb3c*/
    v6 = a1[10]; /*0x69fb3f*/
    if ( v5 != -1 ) /*0x69fb45*/
    {
      if ( (int)MEMORY[0xA8ED84] - v5 >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= (int)MEMORY[0xA8ED84] - v5; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)(int)a1[11]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (v7 = a1[2], fabs(*(float *)(v7 + 808)) >= 0.005) || fabs(*(float *)(v7 + 812)) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((int)a1, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}
}

// 0x69FBE0
int JumpjetLocomotionClass::DispatchVirtualCall_6(int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_69FBE0(int *a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *a1; /*0x69fbe9*/
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[2] + 444))(a1[2]); /*0x69fbed*/
  return (*(int (__stdcall **)(int *, _DWORD))(v1 + 124))(a1, *(unsigned __int8 *)(v2 + 284)); /*0x69fc00*/
}
}

// 0x6A05C0
char JumpjetLocomotionClass::UpdateFacingDirection_2(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_6A05C0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x6a05df*/
}
}

// 0x6A3EB0
int JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass *aP0)
{
  return JumpjetLocomotionClass::CheckState(aP0); /*0x6a3eba*/
}
}

// 0x6A3F00
char JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass *aP0, int a2)
{
  char result; // al

  result = (_BYTE)aP0 + 60; /*0x6a3f0e*/
  if ( aP0->Dest[2] != *(_DWORD *)&stru_B05488.__pad_14B0[3776] /*0x6a3f2d*/
    || aP0->HeadToCoord[0] != *(_DWORD *)&stru_B05488.__pad_14B0[3780]
    || aP0->HeadToCoord[1] != *(_DWORD *)&stru_B05488.__pad_14B0[3784] )
  {
    return WalkLocomotion::MoveTo((int)&aP0[-1].Piggybackee, (IUnknown *)&aP0->Dest[2], a2); /*0x6a3f38*/
  }
  return result; /*0x6a3f3d*/
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

// 0x6A4210
int JumpjetLocomotionClass::SetByteField_1(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4210(int a1)
{
  *(_BYTE *)(a1 + 97) = 0; /*0x6a4214*/
  return a1; /*0x6a4218*/
}
}

// 0x6A4220
int JumpjetLocomotionClass::SetByteField_2(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4220(int a1)
{
  *(_BYTE *)(a1 + 97) = 1; /*0x6a4224*/
  return a1; /*0x6a4228*/
}
}

// 0x6A4230
int JumpjetLocomotionClass::SmallStub_6A4230(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4230(int a1)
{
  return *(_DWORD *)(a1 + 84); /*0x6a4237*/
}
}

// 0x6A4240
int JumpjetLocomotionClass::SmallStub_6A4240(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4240(int a1)
{
  return *(_DWORD *)(a1 + 88); /*0x6a4247*/
}
}

// 0x6A4250
int JumpjetLocomotionClass::SmallStub_6A4250(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4250(int a1)
{
  return *(_DWORD *)(a1 + 72); /*0x6a4257*/
}
}

// 0x6A4280
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_6A4280(int a1)
{
  return *(_DWORD *)(a1 + 80) != 0; /*0x6a428e*/
}
}

// 0x6A4300
int JumpjetLocomotionClass::SmallStub_6A4300(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_6A4300(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x6A4310
LONG JumpjetLocomotionClass::SmallStub_6A4310(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_6A4310(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 4);
}
}

// 0x6A4320
LONG JumpjetLocomotionClass::SmallStub_6A4320(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_6A4320(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x6A4330
int JumpjetLocomotionClass::loc_6A4330(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::loc_6A4330(int a1, const void *a2, int *a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x6A4340
LONG JumpjetLocomotionClass::loc_6A4340(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::loc_6A4340(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 24);
}
}

// 0x6A4350
LONG JumpjetLocomotionClass::loc_6A4350(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::loc_6A4350(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 24));
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
  v2 = *(this + 173); /*0x709497*/
  v3 = *this; /*0x70949e*/
  *(this + 319) = MEMORY[0xA8ED84]; /*0x7094a9*/
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (__thiscall **)(_DWORD *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( *(this + 173) != v2 ) /*0x7094c6*/
      *((_BYTE *)this + 1292) = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}
}

// 0x718080
bool JumpjetLocomotionClass::ShortFunc_718080(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_718080(int a1)
{
  return *(_BYTE *)(a1 + 48) == 1; /*0x71808b*/
}
}

// 0x718090
bool JumpjetLocomotionClass::ShortFunc_718090()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall JumpjetLocomotionClass::sub_718090(_DWORD *this)
{
  return (*(unsigned __int8 (__stdcall **)(_DWORD *))(*(this + 1) + 16))(this + 1) == 0; /*0x71809e*/
}
}

// 0x7180A0
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_7180A0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x7180a9*/
  {
    result = a2; /*0x7180b0*/
    v3 = a1[6]; /*0x7180b4*/
    v4 = a1[7]; /*0x7180b7*/
    v5 = a1[8]; /*0x7180ba*/
  }
  else
  {
    v3 = *(_DWORD *)(a1[2] + 156); /*0x7180d7*/
    v4 = *(_DWORD *)(a1[2] + 160); /*0x7180d9*/
    v5 = *(_DWORD *)(a1[2] + 164); /*0x7180dc*/
    result = a2; /*0x7180df*/
  }
  *a2 = v3; /*0x7180bf*/
  a2[1] = v4; /*0x7180c1*/
  a2[2] = v5; /*0x7180c4*/
  return result; /*0x7180c7*/
}
}

// 0x718100
namespace gamemd {
int JumpjetLocomotionClass_ProcessFactoryExit()
{
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
} // namespace gamemd

// 0x718230
int JumpjetLocomotionClass::ResetMovementState(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_718230(int a1)
{
  *(_DWORD *)(a1 + 24) = MEMORY[0xB0EBF8]; /*0x71823d*/
  *(_DWORD *)(a1 + 28) = MEMORY[0xB0EBFC]; /*0x718246*/
  *(_DWORD *)(a1 + 32) = MEMORY[0xB0EC00]; /*0x71824f*/
  *(_BYTE *)(a1 + 48) = 0; /*0x718254*/
  *(_BYTE *)(a1 + 50) = 0; /*0x718257*/
  return a1; /*0x71825a*/
}
}

// 0x7192C0
char JumpjetLocomotionClass::UpdateFacingDirection_3(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_7192C0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x7192df*/
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

// 0x719CA0
HRESULT JumpjetLocomotionClass::InitMultiFieldArray_0(int * a1, int * pStm)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall JumpjetLocomotionClass::sub_719CA0(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebp
  wchar_t *v4; // eax
  int v5; // eax
  LPVOID *v6; // esi

  v2 = (IStream *)pStm; /*0x719ca7*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x719cb2*/
  if ( v3 < 0 ) /*0x719cb6*/
    return v3; /*0x719cb6*/
  if ( a1 ) /*0x719cba*/
  {
    *a1 = (int)&LocomotionClass::`vftable'; /*0x719cbc*/
    a1[1] = (int)&LocomotionClass::`vftable'; /*0x719cc2*/
    v4 = MEMORY[0xA8ED84]; /*0x719cc9*/
    a1[17] = 0; /*0x719cce*/
    a1[15] = (int)v4; /*0x719cd5*/
    a1[18] = 0; /*0x719cd8*/
    *a1 = (int)&TeleportLocomotionClass::`vftable'; /*0x719cdf*/
    a1[1] = (int)&TeleportLocomotionClass::`vftable'; /*0x719ce5*/
    a1[6] = (int)&TeleportLocomotionClass::`vftable'; /*0x719cec*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x719cff*/
  if ( !(_BYTE)pStm ) /*0x719d08*/
    return v3; /*0x719d34*/
  v5 = a1[18]; /*0x719d0a*/
  v6 = (LPVOID *)(a1 + 18); /*0x719d0d*/
  if ( v5 ) /*0x719d12*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x719d17*/
  *v6 = 0; /*0x719d21*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v6); /*0x719d2d*/
}
}

// 0x719D40
HRESULT JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HRESULT __stdcall JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x719d46*/
  v4 = a1; /*0x719d4b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x719d57*/
  if ( IPersistStream < 0 ) /*0x719d5b*/
    return IPersistStream; /*0x719d5b*/
  if ( !v4[18] ) /*0x719d66*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x719e03*/
    LOBYTE(a3) = 0; /*0x719e0f*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x719e14*/
    return IPersistStream; /*0x719e18*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x719d6c*/
  LOBYTE(a3) = 1; /*0x719d78*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x719d7d*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[18]; /*0x719d80*/
  pPStm = 0; /*0x719d83*/
  if ( v7 ) /*0x719d8d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x719d9e*/
    if ( v8 >= 0 ) /*0x719da2*/
    {
      v9 = a1; /*0x719dbb*/
      if ( pPStm ) /*0x719dc1*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x719dc6*/
      pPStm = v9; /*0x719dc9*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x719da8*/
      pPStm = 0; /*0x719dad*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x719dd7*/
      WinAPI::Wrapper(v8); /*0x719dda*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x719deb*/
  if ( pPStm ) /*0x719df3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x719df8*/
  return v10; /*0x719dfd*/
}
}

// 0x719E30
int JumpjetLocomotionClass::UpdateAltitude(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_719E30(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x719e42*/
  if ( result == -2147467262 ) /*0x719e4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x719e5b*/
    {
      if ( a1 ) /*0x719e62*/
        v4 = a1 + 24; /*0x719e64*/
      else
        v4 = 0; /*0x719e69*/
      *a3 = v4; /*0x719e6b*/
    }
    if ( *a3 ) /*0x719e6e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x719e82*/
      return 0; /*0x719e85*/
    }
    else
    {
      return -2147467262; /*0x719e76*/
    }
  }
  return result; /*0x719e74*/
}
}

// 0x719E90
int JumpjetLocomotionClass::StubReturnZero_18(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_719E90(int a1, int a2)
{
  if ( !a2 ) /*0x719e96*/
    return -2147467261; /*0x719e98*/
  if ( *(_DWORD *)(a1 + 48) ) /*0x719ea4*/
    return -2147467259; /*0x719ecb*/
  *(_DWORD *)(a1 + 48) = a2; /*0x719eb2*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x719eb8*/
  return 0; /*0x719e9d*/
}
}

// 0x719EE0
int JumpjetLocomotionClass::StubReturnZero_19(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_719EE0(int a1, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx

  if ( !a2 ) /*0x719ee9*/
    return -2147467261; /*0x719eeb*/
  v3 = *(_DWORD *)(a1 - 12); /*0x719ef8*/
  if ( v3 ) /*0x719efd*/
  {
    *(_DWORD *)(v3 + 1064) = 0; /*0x719eff*/
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1068) = 0; /*0x719f08*/
  }
  v4 = *(_DWORD *)(a1 + 48); /*0x719f0e*/
  if ( !v4 ) /*0x719f13*/
    return 1; /*0x719f20*/
  *a2 = v4; /*0x719f15*/
  *(_DWORD *)(a1 + 48) = 0; /*0x719f17*/
  return 0; /*0x719ef0*/
}
}

// 0x719F30
bool JumpjetLocomotionClass::StubReturnTrue_7(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_719F30(int a1)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x719f75*/
  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) ) /*0x719f3c*/
  {
    if ( *(_DWORD *)(a1 + 48) ) /*0x719f43*/
    {
      if ( !*(_BYTE *)(a1 + 29) ) /*0x719f4a*/
      {
        v1 = *(_DWORD *)(a1 - 12); /*0x719f51*/
        if ( !*(_BYTE *)(v1 + 636) && !*(_DWORD *)(a1 + 32) && !*(_BYTE *)(v1 + 1709) ) /*0x719f65*/
          return 1; /*0x719f41*/
      }
    }
  }
  return result; /*0x719f71*/
}
}

// 0x719F80
int JumpjetLocomotionClass::LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_719F80(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x719f81*/
  if ( !a2 ) /*0x719f88*/
    return -2147467261; /*0x719f91*/
  v4 = a1 + 12; /*0x719f9b*/
  if ( a1[12] ) /*0x719f98*/
  {
    a1 = 0; /*0x719fa4*/
    v5 = StreamClass::Set2(&a1, v4); /*0x719fb5*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x719fc3*/
      WinAPI::Wrapper(v5); /*0x719fc6*/
    if ( !a1 ) /*0x719fd1*/
      return -2147467259; /*0x719fda*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x719fe4*/
    if ( a1 ) /*0x719fec*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x719ff5*/
      return v6; /*0x719ffc*/
    }
  }
  else
  {
    a2 = 0; /*0x71a002*/
    if ( a1 == (_DWORD *)24 ) /*0x71a00c*/
      return -2147467259; /*0x71a00c*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x71a01d*/
    if ( v7 >= 0 ) /*0x71a021*/
    {
      v9 = a1; /*0x71a035*/
      ComPtr::Release_Alt((int *)&a2); /*0x71a03d*/
      v8 = v9; /*0x71a042*/
      a2 = v9; /*0x71a045*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x71a027*/
      v8 = 0; /*0x71a02c*/
      a2 = 0; /*0x71a02e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x71a053*/
      WinAPI::Wrapper(v7); /*0x71a056*/
    if ( !v8 ) /*0x71a061*/
      return -2147467259; /*0x71a06a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x71a074*/
    if ( a2 ) /*0x71a07c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x71a081*/
  }
  return v6; /*0x719f8a*/
}
}

// 0x71A090
int JumpjetLocomotionClass::DispatchVirtualCall_7(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_71A090(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x71a090*/
  if ( !a2 ) /*0x71a099*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x71a0a8*/
    v5[0] = *v3; /*0x71a0ad*/
    v5[1] = v3[1]; /*0x71a0b4*/
    v4 = a1[2]; /*0x71a0bb*/
    v5[2] = v3[2]; /*0x71a0be*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x71a0c9*/
  }
  return result; /*0x71a0d0*/
}
}

// 0x71A0E0
LONG JumpjetLocomotionClass::IUnknownAddRef(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A0E0(int a1)
{
  return COM::AddRef(a1); /*0x71a0ea*/
}
}

// 0x71A0F0
LONG JumpjetLocomotionClass::IUnknownRelease(volatile LONG * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A0F0(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x71a0fa*/
}
}

// 0x71A100
BOOL JumpjetLocomotionClass::ShortFunc_71A100(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_71A100(int a1)
{
  return *(_DWORD *)(a1 + 48) != 0; /*0x71a10e*/
}
}

// 0x71A130
TeleportLocomotionClass * JumpjetLocomotionClass::ConstructLocomotor(ILocomotion ** Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
TeleportLocomotionClass *__thiscall JumpjetLocomotionClass::ConstructLocomotor(ILocomotion **Block, char a2)
{
  ILocomotion *v3; // eax

  v3 = *(Block + 18); /*0x71a133*/
  if ( v3 ) /*0x71a138*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)v3 + 8))(v3); /*0x71a13d*/
  LocomotionClass::Construct(Block); /*0x71a142*/
  if ( (a2 & 1) != 0 ) /*0x71a14c*/
    __3_YAXPAX_Z(Block); /*0x71a14f*/
  return (TeleportLocomotionClass *)Block; /*0x71a159*/
}
}

// 0x71A160
int JumpjetLocomotionClass::SmallStub_71A160(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_71A160(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}
}

// 0x71A170
LONG JumpjetLocomotionClass::SmallStub_71A170(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A170(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 4);
}
}

// 0x71A180
LONG JumpjetLocomotionClass::SmallStub_71A180(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A180(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 4));
}
}

// 0x71A190
int JumpjetLocomotionClass::SmallStub_71A190(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_71A190(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}
}

// 0x71A1A0
LONG JumpjetLocomotionClass::SmallStub_71A1A0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A1A0(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 24);
}
}

// 0x71A1B0
LONG JumpjetLocomotionClass::SmallStub_71A1B0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_71A1B0(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 24));
}
}

// 0x728A50
bool JumpjetLocomotionClass::ShortFunc_728A50(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_728A50(int a1)
{
  return *(_DWORD *)(a1 + 20) != 0; /*0x728a5c*/
}
}

// 0x728A60
char JumpjetLocomotionClass::StubReturnZero_20(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_728A60(_DWORD *a1)
{
  char result; // al

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x728a68*/
    return 0; /*0x728a68*/
  result = 1; /*0x728a72*/
  if ( a1[5] == 1 ) /*0x728a79*/
    return 0; /*0x728a7b*/
  return result; /*0x728a7d*/
}
}

// 0x728A90
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_728A90(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // esi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x728a99*/
  {
    result = a2; /*0x728aa0*/
    v3 = a1[6]; /*0x728aa4*/
    v4 = a1[7]; /*0x728aa7*/
    v5 = a1[8]; /*0x728aaa*/
  }
  else
  {
    v3 = *(_DWORD *)(a1[2] + 156); /*0x728ac7*/
    v4 = *(_DWORD *)(a1[2] + 160); /*0x728ac9*/
    v5 = *(_DWORD *)(a1[2] + 164); /*0x728acc*/
    result = a2; /*0x728acf*/
  }
  *a2 = v3; /*0x728aaf*/
  a2[1] = v4; /*0x728ab1*/
  a2[2] = v5; /*0x728ab4*/
  return result; /*0x728ab7*/
}
}

// 0x728AF0
int JumpjetLocomotionClass::SyncMovementPosition(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_728AF0(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD v12[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x728afd*/
  if ( !(_BYTE)result ) /*0x728b05*/
  {
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 896))(*(_DWORD *)(a1 + 8)); /*0x728b10*/
    if ( !(_BYTE)result ) /*0x728b18*/
    {
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x728b23*/
      if ( !(_BYTE)result ) /*0x728b2b*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x728b36*/
        if ( !(_BYTE)result ) /*0x728b3e*/
        {
          v5 = *(_DWORD *)(a1 + 8); /*0x728b44*/
          v6 = a3; /*0x728b48*/
          v7 = a4; /*0x728b4d*/
          v8 = a2; /*0x728b52*/
          v12[1] = a3; /*0x728b56*/
          v12[0] = a2; /*0x728b5a*/
          v12[2] = a4; /*0x728b5e*/
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 136))(v5); /*0x728b64*/
          v10 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)v9 + 108))(v9, &a2, v12); /*0x728b78*/
          *(_DWORD *)(a1 + 24) = *v10; /*0x728b80*/
          *(_DWORD *)(a1 + 28) = v10[1]; /*0x728b86*/
          *(_DWORD *)(a1 + 32) = v10[2]; /*0x728b8c*/
          if ( (v8 != MEMORY[0xB0F910] || v6 != MEMORY[0xB0F914] || v7 != MEMORY[0xB0F918]) /*0x728bb5*/
            && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) < 0 )
          {
            v11 = *(_DWORD *)(a1 + 20); /*0x728bb7*/
            if ( v11 != 3 && v11 != 5 && v11 != 1 && v11 != 6 && v11 != 2 ) /*0x728bd1*/
            {
              (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 0); /*0x728bda*/
              *(_DWORD *)(a1 + 20) = 4; /*0x728be0*/
            }
          }
          result = *(_DWORD *)(a1 + 20); /*0x728be7*/
          if ( !result ) /*0x728bef*/
            *(_DWORD *)(a1 + 20) = 1; /*0x728bf1*/
        }
      }
    }
  }
  return result; /*0x728bf8*/
}
}

// 0x7291D0
int JumpjetLocomotionClass::StubReturnZero_21(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_7291D0(int a1, char a2)
{
  if ( *(_DWORD *)(a1 + 20) == 4 ) /*0x7291d8*/
    return (a2 != 0) + 4; /*0x7291e5*/
  else
    return 0; /*0x7291eb*/
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

// 0x72A020
int JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass *aP0)
{
  int RefCount; // eax

  RefCount = aP0->RefCount; /*0x72a024*/
  if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 ) /*0x72a03e*/
    return 2; /*0x72a049*/
  else
    return JumpjetLocomotionClass::CheckState(aP0); /*0x72a041*/
}
}

// 0x72A060
bool JumpjetLocomotionClass::IsStateInRange(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_72A060(int a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 20); /*0x72a064*/
  return v1 < 2 || v1 == 7 || v1 == 2 || v1 == 6; /*0x72a081*/
}
}

// 0x72A090
int JumpjetLocomotionClass::ConvertCoordToCell_3(int a2, void * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass::sub_72A090(void *this, int a2, void *a3)
{
  void *v3; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x72a090*/
  if ( MEMORY[0xA8ED6B] ) /*0x72a098*/
    return 0; /*0x72a098*/
  v5 = a3; /*0x72a0b3*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x72a0b8*/
  if ( Cell::IsBuildableAdvanced((int)v3) ) /*0x72a0bf*/
    return 0; /*0x72a0d1*/
  else
    return 7; /*0x72a0c8*/
}
}

// 0x72A0E0
char JumpjetLocomotionClass::UpdateFacingDirection_4(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_72A0E0(int a1, int a2)
{
  return FacingClass::Update((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x72a0ff*/
}
}

// 0x72A1A0
int JumpjetLocomotionClass::ShortFunc_72A1A0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_72A1A0(int a1)
{
  return *(_DWORD *)(a1 + 20) != 4 ? 2 : 0;
}
}

// 0x72A1C0
int JumpjetLocomotionClass::ShortFunc_72A1C0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_72A1C0(int a1)
{
  int result; // eax

  result = JumpjetLocomotionClass::MissionStub11(a1); /*0x72a1c6*/
  if ( !result ) /*0x72a1cd*/
  {
    if ( *(_DWORD *)(a1 + 20) ) /*0x72a1cf*/
      return 7; /*0x72a1d6*/
  }
  return result; /*0x72a1db*/
}
}

// 0x72A1E0
BOOL JumpjetLocomotionClass::ShortFunc_72A1E0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_72A1E0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 20); /*0x72a1e4*/
  return v1 == 5 || v1 == 6; /*0x72a1f3*/
}
}

// 0x75AB30
char JumpjetLocomotionClass::SmallStub_75AB30(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_75AB30(int a1)
{
  return *(_BYTE *)(a1 + 48); /*0x75ab37*/
}
}

// 0x75AB40
bool JumpjetLocomotionClass::ComputeFloatExpression_4(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_75AB40(_DWORD *a1)
{
  return (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) /*0x75ab8c*/
      && *(double *)(a1[2] + 1400) > 0.0
      && (a1[9] != g_AsyncMovieState || a1[10] != MEMORY[0xB45BEC] || a1[11] != MEMORY[0xB45BF0]);
}
}

// 0x75ABA0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_75ABA0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x75aba9*/
  {
    result = a2; /*0x75abb0*/
    v3 = a1[7]; /*0x75abb7*/
    v4 = a1[8]; /*0x75abba*/
    v5 = a2; /*0x75abbd*/
    *a2 = a1[6]; /*0x75abbf*/
  }
  else
  {
    result = a2; /*0x75abcc*/
    v3 = MEMORY[0xB45BEC]; /*0x75abd6*/
    v4 = MEMORY[0xB45BF0]; /*0x75abdc*/
    v5 = a2; /*0x75abe2*/
    *a2 = g_AsyncMovieState; /*0x75abe4*/
  }
  v5[1] = v3; /*0x75abc1*/
  v5[2] = v4; /*0x75abc4*/
  return result; /*0x75abc7*/
}
}

// 0x75AC00
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_75AC00(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( a1[9] == g_AsyncMovieState && a1[10] == MEMORY[0xB45BEC] && a1[11] == MEMORY[0xB45BF0] ) /*0x75ac2b*/
  {
    v5 = a1[2]; /*0x75ac4b*/
    v6 = v5 + 156; /*0x75ac54*/
    v7 = *(_DWORD *)(v5 + 156); /*0x75ac56*/
    v8 = *(_DWORD *)(v5 + 160); /*0x75ac58*/
    v9 = *(_DWORD *)(v6 + 8); /*0x75ac5b*/
    *a2 = v7; /*0x75ac64*/
    a2[1] = v8; /*0x75ac66*/
    a2[2] = v9; /*0x75ac69*/
    return a2; /*0x75ac5e*/
  }
  else
  {
    v2 = a1[10]; /*0x75ac34*/
    v3 = a1[11]; /*0x75ac37*/
    *a2 = a1[9]; /*0x75ac3c*/
    a2[1] = v2; /*0x75ac3e*/
    a2[2] = v3; /*0x75ac41*/
    return a2; /*0x75ac44*/
  }
}
}

// 0x75AC80
int JumpjetLocomotionClass::DrawVoxelAnimation(unsigned char * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75AC80(_BYTE *a1)
{
  a1[49] = 1; /*0x75ac8a*/
  VoxelAnim::Draw((int)(a1 - 4), (_DWORD *)1); /*0x75ac8e*/
  a1[49] = 0; /*0x75ac93*/
  return (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1); /*0x75ac9d*/
}
}

// 0x75ACB0
char JumpjetLocomotionClass::ConvertCoordToCell_4(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_75ACB0(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 892))(*(_DWORD *)(a1 + 8)); /*0x75acbd*/
  if ( !(_BYTE)v4 ) /*0x75acc5*/
  {
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 468))(*(_DWORD *)(a1 + 8)); /*0x75acd0*/
    if ( !(_BYTE)v4 ) /*0x75acd8*/
    {
      LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 472))(*(_DWORD *)(a1 + 8)); /*0x75ace3*/
      if ( !(_BYTE)v4 ) /*0x75aceb*/
      {
        v4 = a2; /*0x75acf1*/
        v5 = a3; /*0x75acf5*/
        v6 = a4; /*0x75acf9*/
        *(_DWORD *)(a1 + 24) = a2; /*0x75ad00*/
        *(_DWORD *)(a1 + 28) = v5; /*0x75ad03*/
        *(_DWORD *)(a1 + 32) = v6; /*0x75ad06*/
        if ( v4 == g_AsyncMovieState && v5 == MEMORY[0xB45BEC] && v6 == MEMORY[0xB45BF0] ) /*0x75ad25*/
        {
          if ( *(_DWORD *)(a1 + 36) == g_AsyncMovieState /*0x75ad72*/
            && *(_DWORD *)(a1 + 40) == MEMORY[0xB45BEC]
            && *(_DWORD *)(a1 + 44) == MEMORY[0xB45BF0] )
          {
            LOBYTE(v4) = *(_BYTE *)(a1 + 48); /*0x75ad74*/
            *(_BYTE *)(a1 + 48) = 0; /*0x75ad77*/
            if ( (_BYTE)v4 ) /*0x75ad7d*/
              LOBYTE(v4) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1356))(*(_DWORD *)(a1 + 8)); /*0x75ad84*/
          }
        }
        else
        {
          a3 = v5; /*0x75ad27*/
          a2 = v4; /*0x75ad35*/
          a4 = v6; /*0x75ad39*/
          v4 = (int)Coord::To_Cell(&MEMORY[0x87F7E8], &a2); /*0x75ad3d*/
          if ( (*(_DWORD *)(v4 + 320) & 0x100) != 0 ) /*0x75ad4b*/
          {
            v4 = Coord::ScaleToScreenY((void *)0x3C); /*0x75ad52*/
            *(_DWORD *)(a1 + 32) += v4; /*0x75ad57*/
          }
          *(_BYTE *)(a1 + 48) = 1; /*0x75ad5a*/
        }
      }
    }
  }
  return v4; /*0x75ad5e*/
}
}

// 0x75ADA0
int JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass * aP0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass *aP0)
{
  FootClass *result; // eax

  result = aP0; /*0x75ada0*/
  aP0->nextArrayIndex = g_AsyncMovieState.field_0; /*0x75adad*/
  aP0->referenceCount = g_AsyncMovieState.field_4; /*0x75adb6*/
  aP0->NeedsSaveOrLink = (void *)g_AsyncMovieState.field_8; /*0x75adbf*/
  if ( aP0->objectTypeFlags == g_AsyncMovieState.field_0 /*0x75ade5*/
    && aP0->owningHouseIndex == g_AsyncMovieState.field_4
    && aP0->fallRate == g_AsyncMovieState.field_8 )
  {
    LOBYTE(aP0->nextObject) = 0; /*0x75ade9*/
    BYTE2(aP0->nextObject) = 0; /*0x75adec*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->__pad_0[8] + 1356))(*(_DWORD *)&aP0->__pad_0[8]); /*0x75adf6*/
  }
  return (int)result->__pad_0; /*0x75adfc*/
}
}

// 0x75AE00
char JumpjetLocomotionClass::SynchronizeFacingDirection_1(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_75AE00(int a1, int a2)
{
  return FacingClass::Set_SyncLog((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x75ae1f*/
}
}

// 0x75AE30
int JumpjetLocomotionClass::DispatchVirtualCall_9(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75AE30(int a1, int a2, int a3, int a4)
{
  char v4; // bl
  int result; // eax
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = a2; /*0x75ae45*/
  v4 = *(_BYTE *)(a1 + 48); /*0x75ae4d*/
  v6[1] = a3; /*0x75ae51*/
  v6[2] = a4; /*0x75ae59*/
  Voxel::DrawHelper((_DWORD *)(a1 - 4), v6); /*0x75ae5d*/
  result = g_AsyncMovieState; /*0x75ae62*/
  if ( *(_DWORD *)(a1 + 36) == g_AsyncMovieState /*0x75ae95*/
    && *(_DWORD *)(a1 + 40) == MEMORY[0xB45BEC]
    && *(_DWORD *)(a1 + 44) == MEMORY[0xB45BF0]
    && *(_DWORD *)(a1 + 24) == g_AsyncMovieState
    && *(_DWORD *)(a1 + 28) == MEMORY[0xB45BEC]
    && *(_DWORD *)(a1 + 32) == MEMORY[0xB45BF0] )
  {
    *(_BYTE *)(a1 + 48) = 0; /*0x75ae99*/
    if ( v4 ) /*0x75ae9d*/
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1356))(*(_DWORD *)(a1 + 8)); /*0x75aea4*/
  }
  return result; /*0x75aeaa*/
}
}

// 0x75C850
int JumpjetLocomotionClass::StubReturnZero_22(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75C850(int a1, int a2)
{
  if ( !a2 ) /*0x75c856*/
    return -2147467261; /*0x75c858*/
  if ( *(_DWORD *)(a1 + 32) ) /*0x75c864*/
    return -2147467259; /*0x75c88b*/
  *(_DWORD *)(a1 + 32) = a2; /*0x75c872*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75c878*/
  return 0; /*0x75c85d*/
}
}

// 0x75C8A0
int JumpjetLocomotionClass::StubReturnZero_23(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75C8A0(int a1, _DWORD *a2)
{
  int v3; // eax

  if ( !a2 ) /*0x75c8a6*/
    return -2147467261; /*0x75c8a8*/
  v3 = *(_DWORD *)(a1 + 32); /*0x75c8b4*/
  if ( !v3 ) /*0x75c8b9*/
    return 1; /*0x75c8c9*/
  *a2 = v3; /*0x75c8bb*/
  *(_DWORD *)(a1 + 32) = 0; /*0x75c8bd*/
  return 0; /*0x75c8ad*/
}
}

// 0x75C8E0
bool JumpjetLocomotionClass::CheckBaseClassState_0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_75C8E0(int a1)
{
  return !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) /*0x75c910*/
      && *(_DWORD *)(a1 + 32)
      && !*(_BYTE *)(a1 + 29)
      && !*(_BYTE *)(*(_DWORD *)(a1 - 12) + 1709);
}
}

// 0x75C920
int JumpjetLocomotionClass::LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75C920(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x75c921*/
  if ( !a2 ) /*0x75c928*/
    return -2147467261; /*0x75c931*/
  v4 = a1 + 8; /*0x75c93b*/
  if ( a1[8] ) /*0x75c938*/
  {
    a1 = 0; /*0x75c944*/
    v5 = StreamClass::Set2(&a1, v4); /*0x75c955*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x75c963*/
      WinAPI::Wrapper(v5); /*0x75c966*/
    if ( !a1 ) /*0x75c971*/
      return -2147467259; /*0x75c97a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x75c984*/
    if ( a1 ) /*0x75c98c*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x75c995*/
      return v6; /*0x75c99c*/
    }
  }
  else
  {
    a2 = 0; /*0x75c9a2*/
    if ( a1 == (_DWORD *)24 ) /*0x75c9ac*/
      return -2147467259; /*0x75c9ac*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x75c9bd*/
    if ( v7 >= 0 ) /*0x75c9c1*/
    {
      v9 = a1; /*0x75c9d5*/
      ComPtr::Release_Alt((int *)&a2); /*0x75c9dd*/
      v8 = v9; /*0x75c9e2*/
      a2 = v9; /*0x75c9e5*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x75c9c7*/
      v8 = 0; /*0x75c9cc*/
      a2 = 0; /*0x75c9ce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x75c9f3*/
      WinAPI::Wrapper(v7); /*0x75c9f6*/
    if ( !v8 ) /*0x75ca01*/
      return -2147467259; /*0x75ca0a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x75ca14*/
    if ( a2 ) /*0x75ca1c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x75ca21*/
  }
  return v6; /*0x75c92a*/
}
}

// 0x75CA30
int JumpjetLocomotionClass::DispatchVirtualCall_10(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75CA30(_DWORD *a1, int a2)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD v5[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x75ca30*/
  if ( !a2 ) /*0x75ca39*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(_DWORD *, _BYTE *))(*a1 + 24))(a1, v6); /*0x75ca48*/
    v5[0] = *v3; /*0x75ca4d*/
    v5[1] = v3[1]; /*0x75ca54*/
    v4 = a1[2]; /*0x75ca5b*/
    v5[2] = v3[2]; /*0x75ca5e*/
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 244))(v4, v5); /*0x75ca69*/
  }
  return result; /*0x75ca70*/
}
}

// 0x75CA80
bool JumpjetLocomotionClass::IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall JumpjetLocomotionClass::sub_75CA80(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  _BYTE v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v9); /*0x75ca93*/
  v5 = v4[2]; /*0x75ca9b*/
  v6 = *v4; /*0x75cac7*/
  v7 = v4[1] / 256; /*0x75cadd*/
  return (unsigned __int16)(v6 / 256) == (unsigned __int16)(a2 / 256) /*0x75cb01*/
      && (_WORD)v7 == (unsigned __int16)(a3 / 256)
      && (int)abs32(v5 - a4) <= MEMORY[0xB45C28];
}
}

// 0x75CB20
char JumpjetLocomotionClass::SmallStub_75CB20(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall JumpjetLocomotionClass::sub_75CB20(int a1)
{
  return *(_BYTE *)(a1 + 50); /*0x75cb27*/
}
}

// 0x75CB30
unsigned int * JumpjetLocomotionClass::InitMultiFieldArray_1(unsigned int * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__stdcall JumpjetLocomotionClass::sub_75CB30(_DWORD *a1)
{
  a1[6] = g_AsyncMovieState; /*0x75cb40*/
  a1[7] = MEMORY[0xB45BEC]; /*0x75cb48*/
  a1[8] = MEMORY[0xB45BF0]; /*0x75cb51*/
  a1[9] = g_AsyncMovieState; /*0x75cb5a*/
  a1[10] = MEMORY[0xB45BEC]; /*0x75cb62*/
  a1[11] = MEMORY[0xB45BF0]; /*0x75cb6b*/
  return a1 + 9; /*0x75cb6e*/
}
}

// 0x75CBA0
BOOL JumpjetLocomotionClass::ShortFunc_75CBA0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __stdcall JumpjetLocomotionClass::sub_75CBA0(int a1)
{
  return *(_DWORD *)(a1 + 32) != 0; /*0x75cbae*/
}
}

// 0x75CBC0
int JumpjetLocomotionClass::SetByteField_3(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75CBC0(int a1)
{
  *(_BYTE *)(a1 + 50) = 0; /*0x75cbc4*/
  return a1; /*0x75cbc8*/
}
}

// 0x75CC30
int JumpjetLocomotionClass::SmallStub_75CC30(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75CC30(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
}

// 0x75CC40
LONG JumpjetLocomotionClass::SmallStub_75CC40(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_75CC40(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 4);
}
}

// 0x75CC50
LONG JumpjetLocomotionClass::SmallStub_75CC50(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_75CC50(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
}

// 0x75CC60
int JumpjetLocomotionClass::SmallStub_75CC60(int a1, const void * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall JumpjetLocomotionClass::sub_75CC60(int a1, const void *a2, int *a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
}

// 0x75CC70
LONG JumpjetLocomotionClass::SmallStub_75CC70(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_75CC70(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 24);
}
}

// 0x75CC80
LONG JumpjetLocomotionClass::SmallStub_75CC80(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __stdcall JumpjetLocomotionClass::sub_75CC80(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
}

// 0x54E890
namespace gamemd {
void JumpjetLocomotionClass_26::ClearBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall JumpjetLocomotionClass_26_::sub_54E890(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x54e896*/
  this->JumpjetLocomotionClass_26_field_0x10 = 0; /*0x54e899*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x54e8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54e8a6*/
    this->JumpjetLocomotionClass_26_field_0x4 = 0; /*0x54e8ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54e8b1*/
  this->JumpjetLocomotionClass_26_field_0x8 = 0; /*0x54e8b4*/
}
}
} // namespace gamemd

// 0x54E8C0
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::PointerToIndex(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall JumpjetLocomotionClass_26_::sub_54E8C0(int this, int a2)
{
  if ( (unsigned char)this->JumpjetLocomotionClass_26_field_0xC ) /*0x54e8c0*/
    return (unsigned int)(a2 - this->JumpjetLocomotionClass_26_field_0x4) >> 2; /*0x54e8d5*/
  else
    return 0; /*0x54e8c7*/
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
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x54e8ea*/
}
}
} // namespace gamemd

// 0x54E8F0
namespace gamemd {
char JumpjetLocomotionClass_26::AddRef(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotionClass_26_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x54e8f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x54e8fd*/
  {
    v3 = 0; /*0x54e8ff*/
    if ( v2 <= 0 ) /*0x54e903*/
      return 1; /*0x54e923*/
    v4 = (_DWORD *)*(this + 1); /*0x54e905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54e90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54e914*/
    {
      ++v3; /*0x54e916*/
      ++v4; /*0x54e917*/
      if ( v3 >= v2 ) /*0x54e91c*/
        return 1; /*0x54e91c*/
    }
  }
  return 0; /*0x54e91e*/
}
}
} // namespace gamemd

// 0x54E930
namespace gamemd {
char JumpjetLocomotionClass_26::Release(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotionClass_26_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x54e93c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x54e946*/
    if ( a3 ) /*0x54e94c*/
      v4 = a3; /*0x54e962*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54e95e*/
    *((_BYTE *)this + 12) = 1; /*0x54e966*/
    if ( v4 ) /*0x54e96a*/
    {
      if ( this->JumpjetLocomotionClass_26_field_0x4 ) /*0x54e975*/
      {
        v6 = this->JumpjetLocomotionClass_26_field_0x8; /*0x54e97c*/
        if ( a2 < v6 ) /*0x54e981*/
          v6 = a2; /*0x54e983*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->JumpjetLocomotionClass_26_field_0x4 + 4 * i - 4) ) /*0x54e989*/
          ++i; /*0x54e98e*/
        if ( *((_BYTE *)this + 13) ) /*0x54e99b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x54e9a6*/
          this->JumpjetLocomotionClass_26_field_0x4 = 0; /*0x54e9ae*/
        }
      }
      this->JumpjetLocomotionClass_26_field_0x4 = v4; /*0x54e9b7*/
      this->JumpjetLocomotionClass_26_field_0x8 = a2; /*0x54e9bf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x54e9c2*/
      return 1; /*0x54e9c8*/
    }
    else
    {
      return 0; /*0x54e96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x54e9d2*/
    return 1; /*0x54e9d8*/
  }
}
}
} // namespace gamemd

// 0x54E9E0
namespace gamemd {
void JumpjetLocomotionClass_26::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall JumpjetLocomotionClass_26_::_vt03(int this)
{
  if ( this->JumpjetLocomotionClass_26_field_0x4 && *(_BYTE *)(this + 13) ) /*0x54e9ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x54e9f3*/
    this->JumpjetLocomotionClass_26_field_0x4 = 0; /*0x54e9fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54e9fe*/
  this->JumpjetLocomotionClass_26_field_0x8 = 0; /*0x54ea01*/
}
}
} // namespace gamemd

// 0x54EA10
namespace gamemd {
int JumpjetLocomotionClass_26::Read(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall JumpjetLocomotionClass_26_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !(unsigned char)this->JumpjetLocomotionClass_26_field_0xC ) /*0x54ea10*/
    return 0; /*0x54ea18*/
  v3 = this->JumpjetLocomotionClass_26_field_0x8; /*0x54ea1e*/
  result = 0; /*0x54ea21*/
  if ( v3 <= 0 ) /*0x54ea25*/
    return -1; /*0x54ea3c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x54ea2b*/
  {
    if ( ++result >= v3 ) /*0x54ea3a*/
      return -1; /*0x54ea3a*/
  }
  return result; /*0x54ea1a*/
}
}
} // namespace gamemd

// 0x54EA50
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::Write(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall JumpjetLocomotionClass_26_::_vt05(int this, int a2)
{
  if ( (unsigned char)this->JumpjetLocomotionClass_26_field_0xC ) /*0x54ea50*/
    return (unsigned int)(a2 - this->JumpjetLocomotionClass_26_field_0x4) >> 2; /*0x54ea65*/
  else
    return 0; /*0x54ea57*/
}
}
} // namespace gamemd

// 0x54EA70
namespace gamemd {
char JumpjetLocomotionClass_26::SetCapacity(int a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall JumpjetLocomotionClass_26_::sub_54EA70(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54ea7c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x54ea82*/
    if ( a3 ) /*0x54ea88*/
      v4 = a3; /*0x54ea9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54ea9a*/
    *((_BYTE *)this + 12) = 1; /*0x54eaa2*/
    if ( !v4 ) /*0x54eaa6*/
      return 0; /*0x54eb1a*/
    if ( this->JumpjetLocomotionClass_26_field_0x4 ) /*0x54eaa8*/
    {
      v5 = this->JumpjetLocomotionClass_26_field_0x8; /*0x54eaaf*/
      if ( a2 < v5 ) /*0x54eab4*/
        v5 = a2; /*0x54eab6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->JumpjetLocomotionClass_26_field_0x4 + 4 * i - 4) ) /*0x54eabc*/
        ++i; /*0x54eac1*/
      if ( *((_BYTE *)this + 13) ) /*0x54eace*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x54ead9*/
        this->JumpjetLocomotionClass_26_field_0x4 = 0; /*0x54eae1*/
      }
    }
    this->JumpjetLocomotionClass_26_field_0x4 = v4; /*0x54eaea*/
    this->JumpjetLocomotionClass_26_field_0x8 = a2; /*0x54eaf2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x54eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x54eafe*/
  }
  v7 = this->JumpjetLocomotionClass_26_field_0x8; /*0x54eb01*/
  if ( v7 < this->JumpjetLocomotionClass_26_field_0x10 ) /*0x54eb09*/
    this->JumpjetLocomotionClass_26_field_0x10 = v7; /*0x54eb0b*/
  return 1; /*0x54eb0e*/
}
}
} // namespace gamemd

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

  v2 = *(this + 4); /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( v2 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= v2 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}
}
} // namespace gamemd

// 0x54EB50
namespace gamemd {
VectorClass * JumpjetLocomotionClass_26::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__thiscall JumpjetLocomotionClass_26_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54eb53*/
  *Block = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eb56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54eb60*/
  {
    __3_YAXPAX_Z(v3); /*0x54eb68*/
    *(Block + 1) = 0; /*0x54eb70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54eb7b*/
  *(Block + 2) = 0; /*0x54eb81*/
  if ( (a2 & 1) != 0 ) /*0x54eb88*/
    __3_YAXPAX_Z(Block); /*0x54eb8b*/
  return (VectorClass *)Block; /*0x54eb95*/
}
}
} // namespace gamemd

// 0x54EBA0
namespace gamemd {
int JumpjetLocomotionClass_26_Constructor_VectorClass_KamikazeControl___()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall JumpjetLocomotionClass_26_::Constructor_VectorClass_KamikazeControl___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54eba3*/
  *Block = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54ebb0*/
  {
    __3_YAXPAX_Z(v3); /*0x54ebb8*/
    *(Block + 1) = 0; /*0x54ebc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54ebcb*/
  *(Block + 2) = 0; /*0x54ebd1*/
  if ( (a2 & 1) != 0 ) /*0x54ebd8*/
    __3_YAXPAX_Z(Block); /*0x54ebdb*/
  return (DynamicVector *)Block; /*0x54ebe5*/
}
}
} // namespace gamemd

// 0x4B4870
int JumpjetLocomotionClass::StubReturnZero_1(int a1)
{
return 0;
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

// 0x4B5B30
char JumpjetLocomotionClass::StubReturnTrue_1(int a1)
{
return 1;
}

// 0x4B63A0
void JumpjetLocomotionClass::Stub6(int a1)
{
  ;
}

// 0x4B64D0
int JumpjetLocomotionClass::SmallStub_4B64D0(int a1)
{
return 3;
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

// 0x4CCAC0
bool JumpjetLocomotionClass::ComputeFloatExpression_0(int a1)
{
  return *(double *)(a1 + 68) != 0.0;
}

// 0x517100
int JumpjetLocomotionClass::SmallStub_517100(int a1)
{
return 2;
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

// 0x54DF90
int JumpjetLocomotionClass::CheckAttachStatus()
{
return 152;
}

// 0x55A940
char JumpjetLocomotionClass::MissionStub(int a1)
{
return 0;
}

// 0x55AB70
char JumpjetLocomotionClass::MissionStub2(int a1, int a2)
{
return 0;
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
// 0x55ab70
{
return 0;
}

// 0x55ABE0
char JumpjetLocomotionClass::MissionStub4(int a1)
{
return 1;
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

// 0x5B19D0
int JumpjetLocomotionClass::SmallStub_5B19D0(int a1)
{
return 2;
}

// 0x663460
int JumpjetLocomotionClass::SmallStub_663460(int a1)
{
return 3;
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

// 0x719E20
int JumpjetLocomotionClass::SmallStub_719E20(int a1)
{
return 2;
}

// 0x71A120
int JumpjetLocomotionClass::SmallStub_71A120()
{
return 76;
}

// 0x75C7E0
int JumpjetLocomotionClass::SmallStub_75C7E0(int a1)
{
return 2;
}
