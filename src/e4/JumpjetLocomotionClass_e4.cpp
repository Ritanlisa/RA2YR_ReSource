// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotionClass_26_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DropPodLocomotionClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/IsometricTileTypeClass_e4.hpp"
#include "e4/classes/LCWPipe_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x439B00
namespace gamemd {
void* JumpjetLocomotionClass::Update2(void * a1, void * a2)
{
    unsigned int v58 = 0;  /* G37 hoist */
    unsigned int v58 = 0;  /* G37 hoist */
    unsigned int v58 = 0;  /* G37 hoist */
  double *v2; // esi
  double v3; // st7
  float *v4; // ebp
  char *v5; // ebx
  double v6; // st6
  float v7; // edx
  double v8; // st6
  float v9; // eax
  int v10; // eax
  float v11; // ecx
  int *v12; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  IUnknown * v17;
  Cell *v18; // edi
  double v19; // st7
  unsigned int *v20; // eax
  int v21; // ebx
  int Byte284; // eax
  float *v23; // eax
  double v24; // st7
  float v25; // edx
  int v26; // eax
  Triple *v27; // eax
  double *v28; // edi
  char *v29; // esi
  float v30; // edx
  Triple v31; // eax
  int *v32; // eax
  int v33; // eax
  int v34; // eax
  int *v35; // eax
  int v36; // eax
  int v37; // eax
  int level; // esi
  float v39; // ecx
  float v40; // edx
  CellClass * v42;
  unsigned int v43;
  CellClass *v44; // eax
  int v45; // eax
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  double v49; // st7
  int result; // eax
  int v53; // [esp+0h] [ebp-148h]
  int *v58; // [esp+4h] [ebp-144h]
  int *v61; // [esp+8h] [ebp-140h]
  int *v62; // [esp+8h] [ebp-140h]
  float v63; // [esp+8h] [ebp-140h]
  float *v64; // [esp+8h] [ebp-140h]
  float v65; // [esp+Ch] [ebp-13Ch]
  bool v66; // [esp+19h] [ebp-12Fh]
  char v67; // [esp+1Ah] [ebp-12Eh]
  char v68; // [esp+1Bh] [ebp-12Dh]
  float v69; // [esp+1Ch] [ebp-12Ch]
  float v70; // [esp+1Ch] [ebp-12Ch]
  float v71; // [esp+1Ch] [ebp-12Ch]
  Triple v72[2]; // [esp+20h] [ebp-128h] BYREF
  float v73; // [esp+28h] [ebp-120h]
  int v75; // [esp+30h] [ebp-118h]
  int GroundHeight; // [esp+34h] [ebp-114h]
  float v77; // [esp+38h] [ebp-110h]
  CellClass * v80;
  Coord3D v83; // [esp+50h] [ebp-F8h] BYREF
  Coord3D v84; // [esp+5Ch] [ebp-ECh] BYREF
  int v85[2]; // [esp+6Ch] [ebp-DCh] BYREF
  int v86[4]; // [esp+78h] [ebp-D0h] BYREF
  float v87[12]; // [esp+88h] [ebp-C0h] BYREF
  float v88[12]; // [esp+B8h] [ebp-90h] BYREF
  float v89[12]; // [esp+E8h] [ebp-60h] BYREF
  char v90[48]; // [esp+118h] [ebp-30h] BYREF

  v2 = this; /*0x439b09*/
  v3 = *(unsigned int *)&this->Owner; /*0x439b17*/
  v4 = (float *)(this + 3); /*0x439b1a*/
  *(double *)v72[0].__tail_0 = v3; /*0x439b22*/
  v6 = this->Accel; /*0x439b28*/
  v7 = this->Speed; /*0x439b2b*/
  v77 = *(unsigned int *)&this->vtable3; /*0x439b2e*/
  v8 = v6 - this->vtable2; /*0x439b32*/
  v9 = this->Climb; /*0x439b35*/
  v5 = (char *)&this->u32_90; /*0x439b1d*/
  v7 = v7; /*0x439b3a*/
  v9 = v9; /*0x439b3e*/
  v80 = this->Crash; /*0x439b44*/
  v10 = this->Height; /*0x439b4a*/
  v85[0] = *(unsigned int *)this; /*0x439b4d*/
  v10 = v10; /*0x439b51*/
  v11 = this->Accel; /*0x439b58*/
  v85[1] = this->vtable2; /*0x439b5b*/
  *((float *)v5 + 2) = v8; /*0x439b5f*/
  v11 = v11; /*0x439b62*/
  if ( v3 > 0.0 ) /*0x439b71*/
  {
    JumpjetLocomotionClass::ComputeVectorLengthMetric_0((float *)v5); /*0x439b75*/
    if ( v3 > *(double *)v72[0].__tail_0 ) /*0x439b83*/
    {
      *(float *)&v61 = v3 / v3; /*0x439b8c*/
      Coord::Scale(v61, v65); /*0x439b8f*/
    }
  }
  IDA_LOWORD(v12) = Math::RoundToInt(v4[2]); /*0x439b9c*/
  v12 = v12; /*0x439ba4*/
  IDA_LOWORD(v13) = Math::RoundToInt(v4[1]); /*0x439ba5*/
  v13 = v13; /*0x439bad*/
  IDA_LOWORD(v14) = Math::RoundToInt(*v4); /*0x439bae*/
  Coord3D::Set(&v84, v14, v13, (int)v12); /*0x439bb8*/
  Vector3::AddAssign((int *)v5, a2); /*0x439bc0*/
  IDA_LOWORD(v15) = Math::RoundToInt(v4[2]); /*0x439bc8*/
  v15 = v15; /*0x439bd0*/
  IDA_LOWORD(v16) = Math::RoundToInt(v4[1]); /*0x439bd1*/
  v16 = v16; /*0x439bd9*/
  IDA_LOWORD(v17) = Math::RoundToInt(*v4); /*0x439bda*/
  Coord3D::Set(&v83, v17, v16, (int)v15); /*0x439be4*/
  GroundHeight = Cell::GetGroundHeight(&v83); /*0x439bfe*/
  v75 = dword_89C76C + GroundHeight; /*0x439c09*/
  v18 = (Cell *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439c17*/
  v68 = 0; /*0x439c19*/
  v67 = 0; /*0x439c1e*/
  if ( ((int)v18->Cell_field_0x140 & 0x100) != 0 /*0x439c46*/
    || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->flags[0] & 0x100) != 0 )
  {
    if ( v83.Coord3D_field_0x08 < v75 ) /*0x439c56*/
    {
      if ( v84.Coord3D_field_0x08 >= v75 ) /*0x439c65*/
        v68 = 1; /*0x439c67*/
    }
    else if ( v84.Coord3D_field_0x08 < v75 ) /*0x439c5a*/
    {
      v67 = 1; /*0x439c5c*/
    }
  }
  v66 = 0; /*0x439c70*/
  if ( !v68 && !v67 ) /*0x439c83*/
  {
    v19 = (double)GroundHeight; /*0x439c89*/
    if ( v19 <= v4[2] && v4[2] - 150.0 < v19 ) /*0x439ca9*/
    {
      v20 = Cell::IsBridge(v18); /*0x439cad*/
      v72[0] = (Triple)v20; /*0x439cb4*/
      if ( !v20 ) /*0x439cb8*/
      {
        if ( !(uint8_t)BuildingPlacement::ValidateType((BuildingPlacement *)v18, -1, -1) ) /*0x439cc0*/
        {
          v66 = 0; /*0x439cc9*/
          goto LABEL_24; /*0x439ccd*/
        }
        v20 = (unsigned int *)v72[0]; /*0x439ccf*/
      }
      v66 = 1; /*0x439cd5*/
      if ( v20 ) /*0x439cda*/
      {
        if ( *(unsigned char *)(v20[328] + 5823) ) /*0x439ce2*/
          v66 = v20[390] < 8; /*0x439cf5*/
        if ( (*(uint8_t (**)(unsigned int *))(*v20 + 128))(v20) ) /*0x439cfe*/
          v66 = 0; /*0x439d08*/
      }
    }
  }
  LABEL_24:
  *(float *)v72 = (float)GroundHeight; /*0x439d11*/
  if ( v4[2] < (double)*(unsigned int *)v72 ) /*0x439d29*/
  {
    if ( !v68 ) /*0x439d4a*/
    {
      if ( !v67 ) /*0x439d5b*/
      {
  LABEL_33:
        if ( (double)(GroundHeight - 100) < v4[2] ) /*0x439d88*/
          v4[2] = *(float *)v72; /*0x439d8e*/
        goto LABEL_35; /*0x439d8e*/
      }
      goto LABEL_32; /*0x439d5b*/
    }
  LABEL_30:
    v4[2] = (float)v75; /*0x439d4c*/
    goto LABEL_35; /*0x439d53*/
  }
  if ( v68 ) /*0x439d2d*/
    goto LABEL_30; /*0x439d2d*/
  if ( !v67 ) /*0x439d35*/
  {
    if ( !v66 ) /*0x439d3d*/
    {
      v21 = 0; /*0x439d3f*/
      goto LABEL_43; /*0x439d43*/
    }
    goto LABEL_33; /*0x439d3d*/
  }
  LABEL_32:
  v4[2] = (float)(v75 - 20); /*0x439d5d*/
  LABEL_35:
  Byte284 = CellClass::GetByte284(&v83); /*0x439d91*/
  qmemcpy(v88, CopyAudioData(v90, Byte284), sizeof(v88)); /*0x439dc4*/
  v23 = InvertMatrix3x3Signs(v89, v88); /*0x439dcd*/
  v24 = *((float *)v5 + 1); /*0x439dd2*/
  v25 = *(float *)v5; /*0x439de3*/
  qmemcpy(v87, v23, sizeof(v87)); /*0x439de5*/
  *(float *)&v53 = -v24; /*0x439df2*/
  Triple::Set(v72, IDA_SLODWORD(v25), v53, *((unsigned int *)v5 + 2)); /*0x439df6*/
  v26 = Matrix3x3::TransformPoint(v86, (float *)v72, (float *)v62); /*0x439e0c*/
  v72[0] = *(Triple *)v26; /*0x439e17*/
  v72[1] = *(Triple *)(v26 + 4); /*0x439e1e*/
  *(float *)&v58 = *(double *)v85; /*0x439e2a*/
  v73 = *(float *)(v26 + 8); /*0x439e2d*/
  Coord::Scale(v58, v63); /*0x439e31*/
  v73 = -v73; /*0x439e46*/
  v27 = (Triple *)Matrix3x3::TransformPoint(v85, (float *)v72, v64); /*0x439e51*/
  v28 = this; /*0x439e58*/
  v72[0] = *v27; /*0x439e5c*/
  v29 = &this->Climb; /*0x439e65*/
  v72[1] = v27[1]; /*0x439e68*/
  v30 = *(float *)&v27[2]; /*0x439e6c*/
  v31 = v72[0]; /*0x439e6f*/
  v73 = v30; /*0x439e79*/
  *((float *)v5 + 1) = -*(float *)&v72[1]; /*0x439e7f*/
  *((float *)v5 + 2) = v30; /*0x439e82*/
  *(Triple *)v5 = v31; /*0x439e87*/
  v69 = -*(float *)Function::645D00(v29, 0); /*0x439e92*/
  *(float *)Function::645D00(v29, 0) = v69; /*0x439ea5*/
  v70 = -*(float *)Function::645D00(v29, 1); /*0x439eb2*/
  *(float *)Function::645D00(v29, 1) = v70; /*0x439ec5*/
  v71 = -*(float *)Function::645D00(v29, 2); /*0x439ed2*/
  *(float *)Function::645D00(v29, 2) = v71; /*0x439ee3*/
  IDA_LOWORD(v32) = Math::RoundToInt(*((float *)v28 + 8)); /*0x439ee8*/
  v32 = v32; /*0x439ef0*/
  IDA_LOWORD(v33) = Math::RoundToInt(*((float *)v28 + 7)); /*0x439ef1*/
  v33 = v33; /*0x439ef9*/
  IDA_LOWORD(v34) = Math::RoundToInt(*v4); /*0x439efa*/
  Coord::Subtract((Coord *)&v83, v34, v33, (int)v32); /*0x439f04*/
  IDA_LOWORD(v35) = Math::RoundToInt(v9); /*0x439f0d*/
  v35 = v35; /*0x439f16*/
  IDA_LOWORD(v36) = Math::RoundToInt(v7); /*0x439f17*/
  v36 = v36; /*0x439f20*/
  IDA_LOWORD(v37) = Math::RoundToInt(v77); /*0x439f21*/
  Coord::Subtract((Coord *)&v84, v37, v36, (int)v35); /*0x439f2b*/
  level = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v84)->level; /*0x439f3f*/
  if ( Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83)->level - level >= 2 /*0x439fb1*/
    && (v11 < -0.0002 && *((float *)v28 + 8) > (double)v9 || v11 >= -0.0003 && v11 + v9 + 1.0 < *((float *)v28 + 8)) )
  {
    v39 = (gamemd::CellClass *)(v7);
    v40 = (gamemd::CellClass *)(v9);
    *v4 = (gamemd::CellClass *)(v77);
    v4[1] = (gamemd::CellClass *)(v39);
    v80 = (gamemd::CellClass *)((int)((gamemd::CellClass *)(v80)));
    v4[2] = (gamemd::CellClass *)(v40);
    v42 = (gamemd::CellClass *)((unsigned int)((int)((gamemd::CellClass *)(v10))));
    *(unsigned int *)v5 = v80; /*0x439fd6*/
    v43 = v11; /*0x439fd8*/
    *((unsigned int *)v5 + 1) = v42; /*0x439fdc*/
    *((float *)v5 + 2) = v43; /*0x439fe4*/
    v44 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v83); /*0x439ff1*/
    v45 = JumpjetLocomotionClass::AdjustClimbFacing((JumpjetLocomotionClass *)v44, &v84); /*0x439ff8*/
    if ( v45 != -1 ) /*0x43a000*/
    {
      qmemcpy(v87, Locomotor_Update((char *)v89, v45), sizeof(v87)); /*0x43a01f*/
      v46 = TransformMatrix3x4Point((float *)v86, v87, (float *)v5); /*0x43a02c*/
      *(float *)v5 = *v46; /*0x43a035*/
      *((float *)v5 + 1) = v46[1]; /*0x43a03a*/
      *((float *)v5 + 2) = v46[2]; /*0x43a040*/
      v47 = *this; /*0x43a047*/
      *(float *)v5 = v47 * *(float *)v5; /*0x43a04d*/
      *((float *)v5 + 1) = v47 * *((float *)v5 + 1); /*0x43a054*/
      *((float *)v5 + 2) = v47 * *((float *)v5 + 2); /*0x43a05a*/
    }
  }
  v2 = this; /*0x43a05d*/
  v21 = 1; /*0x43a061*/
  LABEL_43:
  v48 = QuaternionMathMultiply((float *)v86, (float *)v2 + 12, (float *)v2 + 16); /*0x43a066*/
  Float4::Copy((float *)v2 + 12, &v84, v48); /*0x43a080*/
  v49 = JumpjetLocomotionClass::ComputeVectorLengthMetric((JumpjetLocomotionClass *)v2); /*0x43a087*/
  result = 2; /*0x43a098*/
  if ( v49 >= 2.5 ) /*0x43a09d*/
    return v21; /*0x43a09f*/
  return result; /*0x43a0a1*/
}
} // namespace gamemd
// 0x43A130
namespace gamemd {
void JumpjetLocomotionClass::ComputeVectorLengthMetric_0()
{
  Math::Sqrt(*this * *this + (unsigned int)(this->vtable2)* (unsigned int)(this->vtable2)+ (unsigned int)(this->Owner)* this->Owner); /*0x43a154*/
}
} // namespace gamemd
// 0x4848B0
namespace gamemd {
int JumpjetLocomotionClass::AdjustClimbFacing(unsigned int * a2)
{
  unsigned int *v2; // ebx
  int smudgeTypeIndex; // ebp
  int Crash_low; // eax
  int Crash_high; // esi
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
  int16_t v20[2]; // [esp+14h] [ebp-Ch] BYREF

  a2 = a2; /*0x4848b4*/
  smudgeTypeIndex = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->smudgeTypeIndex; /*0x4848c8*/
  Crash_low = SLOWORD(this->Crash); /*0x4848cb*/
  Crash_high = IDA_SHIWORD(this->Crash); /*0x4848cf*/
  smudgeTypeIndex = smudgeTypeIndex; /*0x4848d3*/
  v7 = Crash_high - IDA_SHIWORD(smudgeTypeIndex); /*0x4848de*/
  v8 = Crash_low - (int16_t)smudgeTypeIndex; /*0x4848e6*/
  v9 = Crash_low == (int16_t)smudgeTypeIndex; /*0x4848ec*/
  result = dword_81CD5C[Crash_low + 3 * v7 - (int16_t)smudgeTypeIndex]; /*0x4848ee*/
  result = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      IDA_LOWORD(a2) = smudgeTypeIndex + v8; /*0x484916*/
      IDA_HIWORD(a2) = IDA_HIWORD(smudgeTypeIndex); /*0x48491b*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level + 2; /*0x484944*/
      IDA_LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) >= v11; /*0x484959*/
      v20[0] = smudgeTypeIndex; /*0x484960*/
      v20[1] = IDA_HIWORD(smudgeTypeIndex) + v7; /*0x484965*/
      v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      IDA_LOWORD(a2) = smudgeTypeIndex + v7; /*0x4849ab*/
      IDA_HIWORD(a2) = IDA_HIWORD(smudgeTypeIndex); /*0x4849b0*/
      v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level + 2; /*0x4849d3*/
      IDA_LOBYTE(a2) = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) >= v16; /*0x4849ee*/
      v20[0] = smudgeTypeIndex; /*0x4849f5*/
      v20[1] = IDA_HIWORD(smudgeTypeIndex) + v8; /*0x4849fa*/
      v17 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a2)->level + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20) + 283); /*0x484a2b*/
      v15 = __OFSUB__(v18, v17); /*0x484a32*/
      v14 = v18 - v17 < 0; /*0x484a32*/
    }
    if ( (unsigned char)a2 ) /*0x484a3d*/
    {
      if ( v14 != v15 ) /*0x484a38*/
        return ((unsigned char)result - 1) & 7; /*0x484a4e*/
      else
    }
    else
    {
      result = result; /*0x484a59*/
      if ( v14 == v15 ) /*0x484a38*/
        return result + 1; /*0x484a62*/
    }
  }
  return result; /*0x484a47*/
}
} // namespace gamemd
// 0x485080
namespace gamemd {
AbstractClass * * JumpjetLocomotionClass::FindClosestOccupiableCell()
{
  int inited; // ebp
  int v3; // esi
  int *v5; // eax
  AbstractClass ** v6;
  AbstractClass ** v7;
  unsigned char v8[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (gamemd::AbstractClass **)((int)(128));
  v7 = (gamemd::AbstractClass **)((int)(128));
  inited = (int)(Isometric::InitTables((int)this, &v6));
  if ( byte_A8E9A0 && (v3 = this->q039) != 0 ) /*0x4850b6*/
  {
    while ( (*(int (**)(int))(*(unsigned int *)v3 + 44))(v3) != 6 ) /*0x4850c2*/
    {
      v3 = *(unsigned int *)(v3 + 48); /*0x4850c4*/
      if ( !v3 ) /*0x4850c9*/
        goto LABEL_5; /*0x4850c9*/
    }
    v5 = (int *)((gamemd::AbstractClass **)((int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)(v3 + 1312) + 124))(*(unsigned int *)(v3 + 1312), v8)));
    v6 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(*v5)));
    v7 = (gamemd::AbstractClass **)(v5[1]);
    return (gamemd::AbstractClass **)(v5[2] + inited);
  }
  else
  {
  LABEL_5: v6 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(0)));
    v7 = (gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(0)));
    if ( Object::FindClosestObjectCell((Object *)this, &v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}
} // namespace gamemd
// 0x4AFF60
namespace gamemd {
void * JumpjetLocomotionClass::ComputeVoxelTransform(unsigned int * a1, float * a2, unsigned int * a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  unsigned char v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = a1->Accel; /*0x4aff72*/
  if ( Accel == 0.0 ) /*0x4aff7b*/
  {
    v7 = 1.0; /*0x4aff7d*/
  }
  else
  {
    Climb = a1->Climb; /*0x4aff85*/
    Height = a1->Height; /*0x4aff88*/
    if ( Climb != NAN ) /*0x4aff8e*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Climb) >= Height ) /*0x4aff9a*/
        Height = 0; /*0x4affa0*/
      else
        Height -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Climb); /*0x4aff9c*/
    }
    v7 = (double)(IDA_LODWORD(Accel) - Height) / (double)IDA_SLODWORD(a1->Accel); /*0x4affac*/
  }
  if ( v7 == 1.0 ) /*0x4affbb*/
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x4affbd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x4affe8*/
    {
      if ( a3 && *a3 != -1 ) /*0x4b02bf*/
      {
        v31 = *a3 << 6; /*0x4b02c1*/
        *a3 = v31; /*0x4b02c4*/
        *a3 = v31 + a1->TurnRate; /*0x4b02cb*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)a1, v60, a3); /*0x4b02d7*/
      Transform::Copy(v59, Transform); /*0x4b02e4*/
      Matrix3x4::Identity(&v55); /*0x4b02ed*/
      v33 = a1->Accel; /*0x4b02f2*/
      if ( v33 == 0.0 ) /*0x4b02fb*/
        goto LABEL_48; /*0x4b02fb*/
      v34 = a1->Climb; /*0x4b0301*/
      v35 = a1->Height; /*0x4b0304*/
      if ( v34 != NAN ) /*0x4b0310*/
      {
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v34) >= v35 ) /*0x4b0318*/
          v35 = 0; /*0x4b031e*/
        else
          v35 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v34); /*0x4b031a*/
      }
      if ( (double)(IDA_LODWORD(v33) - v35) / (double)IDA_SLODWORD(a1->Accel) >= 1.0 ) /*0x4b0339*/
      {
  LABEL_48:
        TurnRate = a1->TurnRate; /*0x4b0390*/
        if ( !TurnRate ) /*0x4b0395*/
        {
  LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x4b03c9*/
          v46 = (float *)v59; /*0x4b03cb*/
          v29 = (float *)v58; /*0x4b03cc*/
          v30 = (float *)v62; /*0x4b03d3*/
          goto LABEL_52; /*0x4b03d3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x4b03a0*/
      }
      else
      {
        v36 = a1->Accel; /*0x4b033b*/
        if ( v36 == 0.0 ) /*0x4b0344*/
        {
          v37 = 1.0; /*0x4b0346*/
        }
        else
        {
          v38 = a1->Climb; /*0x4b034e*/
          v39 = a1->Height; /*0x4b0351*/
          if ( v38 != NAN ) /*0x4b0357*/
          {
            if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v38) >= v39 ) /*0x4b035f*/
              v39 = 0; /*0x4b0365*/
            else
              v39 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v38); /*0x4b0361*/
          }
          v37 = (double)(IDA_LODWORD(v36) - v39) / (double)IDA_SLODWORD(a1->Accel); /*0x4b0371*/
        }
        v40 = InterpolateVoxelAnimPose(v63, a1->Speed, a1->TurnRate, v37); /*0x4b0389*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x4b03b0*/
      goto LABEL_51; /*0x4b03b0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x4afff2*/
  Matrix3x4::Identity(&v57); /*0x4afffe*/
  v11 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 864); /*0x4b0011*/
  v49 = v11; /*0x4b0019*/
  v51 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 872); /*0x4b002f*/
  Math::ArcTan2(*(float *)&a1->?->?); /*0x4b003c*/
  v47 = v3; /*0x4b0044*/
  Math::SinCos(*(float *)&a1->?->?); /*0x4b0051*/
  v53 = v4; /*0x4b0059*/
  Math::ArcTan2(*(float *)&a1->?->?); /*0x4b0066*/
  v48 = v5; /*0x4b006e*/
  Math::SinCos(*(float *)&a1->?->?); /*0x4b007b*/
  IDA_LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x4b0095*/
  v54 = v12; /*0x4b00a2*/
  IDA_LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x4b00a6*/
  IDA_LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x4b00b7*/
  v15 = v14; /*0x4b00c4*/
  v52 = v14; /*0x4b00c6*/
  IDA_LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x4b00ca*/
  IDA_LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x4b00db*/
  v18 = *(unsigned int *)&a1->Owner; /*0x4b00e0*/
  v50 = v17; /*0x4b00e5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x4b00fa*/
    v52 = -v15; /*0x4b00fe*/
  if ( *(float *)&v18->? > 0.0 ) /*0x4b0113*/
    v50 = -v17; /*0x4b0117*/
  v43 = (float)v54; /*0x4b0124*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x4b0127*/
  v44 = (float)v52; /*0x4b0138*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x4b013b*/
  v45 = (float)v50; /*0x4b014c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x4b014f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&a1->?->?); /*0x4b0165*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&a1->?->?); /*0x4b017b*/
  if ( a3 ) /*0x4b0185*/
    *a3 = -1; /*0x4b0187*/
  v19 = Turret::GetTransform((LocomotionClass *)a1, v65, a3); /*0x4b0197*/
  Transform::Copy(v58, v19); /*0x4b01a4*/
  Matrix3x4::Identity(&v55); /*0x4b01ad*/
  v20 = a1->Accel; /*0x4b01b2*/
  p_Climb = (Timeout *)&a1->Climb; /*0x4b01b5*/
  if ( v20 != 0.0 ) /*0x4b01be*/
  {
    v22 = *p_Climb; /*0x4b01c0*/
    v23 = a1->Height; /*0x4b01c2*/
    if ( *p_Climb != -1 ) /*0x4b01c8*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - *(unsigned int *)&v22 >= v23 ) /*0x4b01d4*/
        v23 = 0; /*0x4b01da*/
      else
        v23 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - *(unsigned int *)&v22; /*0x4b01d6*/
    }
    if ( (double)(IDA_LODWORD(v20) - v23) / (double)IDA_SLODWORD(a1->Accel) < 1.0 ) /*0x4b01f5*/
    {
      if ( IDA_LODWORD(a1->Accel) ) /*0x4b01f7*/
      {
        v25 = a1->Accel; /*0x4b0206*/
        v24 = (double)(IDA_LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)IDA_SLODWORD(v25); /*0x4b021c*/
      }
      else
      {
        v24 = 1.0; /*0x4b01fe*/
      }
      v26 = InterpolateVoxelAnimPose(v64, a1->Speed, a1->TurnRate, v24); /*0x4b0234*/
      goto LABEL_29; /*0x4b0239*/
    }
  }
  v27 = a1->TurnRate; /*0x4b023b*/
  if ( v27 ) /*0x4b0240*/
  {
    v26 = CopyAudioData(v62, v27); /*0x4b024b*/
  LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x4b025b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x4b0274*/
  v46 = (float *)&v57; /*0x4b0284*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x4b0292*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x4b02a5*/
  v30 = v60; /*0x4b02a7*/
  LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x4b03da*/
  qmemcpy(a2, &v56, 0x30u); /*0x4b03fa*/
  return a2; /*0x4b03fc*/
}
} // namespace gamemd
// 0x4B0C40
namespace gamemd {
int JumpjetLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  int64_t v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  int64_t v13; // [esp+14h] [ebp-8h]

  a1->MovementSpeed[1] = a2; /*0x4b0c53*/
  a1->TrackNumber = 0; /*0x4b0c56*/
  v4 = g_DDraw_ClipRect; /*0x4b0c5d*/
  if ( a3 != g_DDraw_ClipRect || a4 != qword_8A0794 ) /*0x4b0c70*/
  {
    v5 = (char *)a1 - 4; /*0x4b0c88*/
    v13 = a4; /*0x4b0c8f*/
    v6 = &a1->Dest[2]; /*0x4b0c93*/
    v12 = a3; /*0x4b0c9a*/
    if ( *v6 != g_DDraw_ClipRect || IDA___PAIR64__(a1->HeadToCoord[1], a1->HeadToCoord[0]) != qword_8A0794 ) /*0x4b0ca5*/
    {
      *v6 = g_DDraw_ClipRect; /*0x4b0cb6*/
      a1->HeadToCoord[0] = qword_8A0794; /*0x4b0cbd*/
      v7 = IDA_HIDWORD(qword_8A0794); /*0x4b0cc0*/
      v5[99] = 0; /*0x4b0cc6*/
      a1->HeadToCoord[1] = v7; /*0x4b0cca*/
      v4 = g_DDraw_ClipRect; /*0x4b0ccd*/
    }
    if ( IDA___PAIR64__(a4, a3) != IDA___PAIR64__(qword_8A0794, v4) /*0x4b0cee*/
      || (IDA_LOBYTE(v4) = IDA_BYTE4(qword_8A0794), IDA_HIDWORD(a4) != IDA_HIDWORD(qword_8A0794)) )
    {
      v8 = v13; /*0x4b0cf4*/
      v5[99] = 1; /*0x4b0cfa*/
      *v6 = a3; /*0x4b0cfe*/
      *(unsigned long long *)a1->HeadToCoord = v8; /*0x4b0d00*/
      v11 = *((unsigned int *)v5 + 3); /*0x4b0d0d*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x4b0d14*/
      if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(unsigned char *)(*((unsigned int *)v5 + 3) + 129) ) /*0x4b0d27*/
      {
        IDA_LOBYTE(v4) = *(unsigned char *)(*((unsigned int *)v5 + 3) + 144); /*0x4b0d6d*/
        if ( (unsigned char)v4 ) /*0x4b0d75*/
        {
          IDA_LOBYTE(v4) = g_DDraw_ClipRect; /*0x4b0d77*/
          *v6 = g_DDraw_ClipRect; /*0x4b0d7c*/
          *(unsigned long long *)a1->HeadToCoord = qword_8A0794; /*0x4b0d84*/
          v5[99] = 0; /*0x4b0d90*/
        }
      }
      else
      {
        JumpjetLocomotion::MoveTo((int)a1 - 4, &v12, 1); /*0x4b0d3a*/
        IDA_LOBYTE(v4) = (unsigned char)a1 + 48; /*0x4b0d3f*/
        a1->SlopeTimer[3] = a3; /*0x4b0d4a*/
        *(unsigned long long *)a1->Dest = a4; /*0x4b0d4c*/
        a1->SpeedAccum = 0; /*0x4b0d52*/
        a1->MovementSpeed[0] = 1072693248; /*0x4b0d59*/
      }
    }
  }
  return v4; /*0x4b0d60*/
}
} // namespace gamemd
// 0x4B4920
namespace gamemd {
int JumpjetLocomotionClass::IsAtDestination(int a1, int a2, int a3, int a4)
{
  DriveLocomotionClass *v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x4b4925*/
  v5 = (int *)(*(int (__stdcall **)(DriveLocomotionClass *, unsigned int *))(*(unsigned int *)a1->LocomotionClass + 24))( /*0x4b4932*/
                a1,
                v21);
  v6 = *v5; /*0x4b4935*/
  v7 = v5[1]; /*0x4b4937*/
  v8 = v5[2]; /*0x4b4940*/
  v23 = v6; /*0x4b4945*/
  v24 = v7; /*0x4b4949*/
  v25 = v8; /*0x4b494d*/
  if ( v6 == g_DDraw_ClipRect && IDA___PAIR64__(v8, v7) == qword_8A0794 ) /*0x4b4959*/
    return 0; /*0x4b4959*/
  if ( !IDA_LOBYTE(v4->TrackIndex) ) /*0x4b4967*/
  {
    v9 = v4->MovementSpeed[1]; /*0x4b4972*/
    if ( v9 != -1 ) /*0x4b4978*/
    {
      v10 = byte_7E7B28[12 * v9]; /*0x4b4981*/
      if ( v10 ) /*0x4b498b*/
      {
        v11 = 4 * v10; /*0x4b4991*/
        v12 = dword_7E7A34[v11]; /*0x4b4994*/
        if ( v12 > -1 ) /*0x4b49a3*/
        {
          v13 = dword_7E7A28[v11] + 12 * v12; /*0x4b49ac*/
          a1 = *(DriveLocomotionClass **)(v13 + 8); /*0x4b49b2*/
          if ( v4->TrackNumber < v12 ) /*0x4b49bb*/
          {
            v14 = *(unsigned int *)(v13 + 4); /*0x4b49c3*/
            v20[0] = *(unsigned int *)v13; /*0x4b49c6*/
            v20[1] = v14; /*0x4b49cf*/
            v15 = JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&a1); /*0x4b49e1*/
            v16 = *v15; /*0x4b49e6*/
            v17 = v15[1]; /*0x4b49e8*/
            location = v4->?->?; /*0x4b49ee*/
            v21[0] = *location; /*0x4b49f5*/
            v21[1] = location[1]; /*0x4b49fc*/
            v22 = location[2]; /*0x4b4a03*/
            if ( (uint16_t)(v16 / 256) == (uint16_t)(a2 / 256) /*0x4b4a6b*/
              && (uint16_t)(v17 / 256) == (uint16_t)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_8A07D0 )
            {
              return 1; /*0x4b4a75*/
            }
          }
        }
      }
    }
  }
  return (uint16_t)(v23 / 256) == (uint16_t)(a2 / 256) /*0x4b4aee*/
      && (uint16_t)(v24 / 256) == (uint16_t)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_8A07D0;
}
} // namespace gamemd
// 0x4B4B00
namespace gamemd {
int JumpjetLocomotionClass::StubReturnZero_2(unsigned int a1)
{
  DriveLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int16_t v5; // bx
  int TrackNumber; // edx
  int16_t v7; // dx
  char v8; // al

  v1 = a1; /*0x4b4b02*/
  v2 = a1->?->pathDirections[0]; /*0x4b4b09*/
  if ( v2 < -1 || v2 > 8 ) /*0x4b4b1b*/
    return 0; /*0x4b4b1b*/
  v3 = 12 * a1->MovementSpeed[1] + 8289064; /*0x4b4b2c*/
  v4 = IDA_LOBYTE(a1->TrackIndex)
     ? (char)algn_7E7B29[12 * a1->MovementSpeed[1]]
     : byte_7E7B28[12 * a1->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x4b4b43*/
    return 0; /*0x4b4b43*/
  if ( v2 == -1 ) /*0x4b4b4c*/
    return 0; /*0x4b4b4c*/
  IDA_LOBYTE(v5) = 0; /*0x4b4b53*/
  IDA_HIBYTE(v5) = algn_7E7B29[12 * a1->MovementSpeed[1] + 3]; /*0x4b4b55*/
  IDA_LOWORD(a1) = v5; /*0x4b4b58*/
  if ( (((((unsigned int)a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x4b4b78*/
    return 0; /*0x4b4b78*/
  TrackNumber = v1->TrackNumber; /*0x4b4b7a*/
  if ( dword_7E7A2C[4 * v4] == TrackNumber /*0x4b4bc1*/
    && TrackNumber
    && (IDA_LOBYTE(v7) = 0,
        IDA_HIBYTE(v7) = *(unsigned char *)(v3 + 4),
        IDA_LOWORD(a1) = v7,
        (v8 = byte_7E7B28[96 * (((((unsigned int)a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7E7A30[4 * v8] )
  {
    return 1; /*0x4b4bcc*/
  }
  else
  {
    return 0; /*0x4b4bd3*/
  }
}
} // namespace gamemd
// 0x4B6040
namespace gamemd {
void ** JumpjetLocomotionClass::UpdateMovementPosition(unsigned int * a1, double VeteranCombat_low, int a3)
{
  double v3; // st7
  DropPodLocomotionClass *v4; // edi
  void **result; // eax
  int v7; // edx
  int v9; // eax
  int v11; // eax
  char v12; // al
  FootClass *Owner; // ecx
  FootClass *v14; // ecx
  double v15; // [esp-Ch] [ebp-28h]
  char *p_IsOutOfMap; // [esp-8h] [ebp-24h]
  double v17; // [esp-8h] [ebp-24h]
  int v19[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a1; /*0x4b604b*/
  result = *(void ***)&a1->IsOutOfMap; /*0x4b604f*/
  _ESI = &a1->IsOutOfMap; /*0x4b6052*/
  if ( result == (void **)dword_8A0820 ) /*0x4b6057*/
  {
    result = (void **)dword_8A0824; /*0x4b6060*/
    if ( a1->DestinationCoords[0] == dword_8A0824 ) /*0x4b6067*/
    {
      result = (void **)dword_8A0828; /*0x4b6070*/
      if ( a1->DestinationCoords[1] == dword_8A0828 ) /*0x4b6077*/
      {
        v7 = a3; /*0x4b6086*/
        p_IsOutOfMap = &a1->IsOutOfMap; /*0x4b608c*/
        *(double *)_ESI = VeteranCombat_low; /*0x4b608d*/
        *((unsigned int *)_ESI + 2) = v7; /*0x4b6097*/
        v4->DestinationCoords[1] = Cell::GetGroundHeight(p_IsOutOfMap); /*0x4b609f*/
        v19[0] = *(unsigned int *)_ESI; /*0x4b60a6*/
        v19[1] = *((unsigned int *)_ESI + 1); /*0x4b60ad*/
        _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b60b4*/
        v19[2] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1448) + *((unsigned int *)_ESI + 2); /*0x4b60c3*/
        __asm { fild dword ptr [eax+5A8h] } /*0x4b60cd*/
        v15 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b60da*/
        __asm { fstp [esp+28h+VeteranCombat_low] } /*0x4b60db*/
        Math::Sin(v15); /*0x4b60df*/
        __asm { fdivr [esp+28h+VeteranCombat_low] } /*0x4b60e4*/
        __asm { fiadd [esp+20h+var_C] }
        IDA_LOWORD(v9) = Math::RoundToInt(v3); /*0x4b60ef*/
        v19[0] = v9; /*0x4b60f4*/
        if ( !(uint8_t)IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v19) ) /*0x4b6102*/
        {
          v4->__pad_18[0] = 1; /*0x4b610c*/
          _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4b6110*/
          __asm { fild dword ptr [esi] } /*0x4b6115*/
          v17 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1456); /*0x4b6124*/
          __asm /*0x4b6125*/
          {
            fstp [esp+24h+var_14]
            fild dword ptr [eax+5A8h]
            fstp [esp+24h+VeteranCombat_low]
          }
          Math::Sin(v17); /*0x4b6133*/
          __asm { fdivr [esp+24h+VeteranCombat_low] } /*0x4b6138*/
          __asm { fsubr [esp+1Ch+var_14] }
          IDA_LOWORD(v11) = Math::RoundToInt(v3); /*0x4b6143*/
          v19[0] = v11; /*0x4b6148*/
        }
        (*((void (**)(FootClass *, int *))v4->?->TechnoClass + 109))(v4->?, v19); /*0x4b6156*/
        v12 = (*((int (**)(FootClass *, int *, int))v4->?->TechnoClass + 54))(v4->?, v19, 128); /*0x4b616b*/
        Owner = v4->?; /*0x4b6171*/
        if ( v12 ) /*0x4b6176*/
        {
          (*((void (**)(FootClass *, int *))Owner->TechnoClass + 109))(Owner, v19); /*0x4b617f*/
          v14 = v4->?; /*0x4b6185*/
          IDA_LOWORD(a1) = 0x8000; /*0x4b6193*/
          FacingClass::Set_SyncLog((char *)v14->?, &a1); /*0x4b619a*/
          result = (void **)RA2_OPNEW(0x1C8u); /*0x4b61a4*/
          if ( result ) /*0x4b61ae*/
// 0x421ea0
            return AnimClass::ctor( /*0x4b61d1*/
                     (AnimClass *)result,
                     *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 852),
                     v19,
                     0,
                     1,
                     (void *)0x600,
                     0,
                     0);
        }
        else
        {
          return (*((void **(**)(FootClass *, int *, int))Owner->TechnoClass + 54))(Owner, v19, 128); /*0x4b61ea*/
        }
      }
    }
  }
  return result; /*0x4b61d6*/
}
} // namespace gamemd
// 0x4C94B0
namespace gamemd {
int JumpjetLocomotionClass::StubReturnZero_5()
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(*(unsigned short *)&this->RefCount) <= 0 ) /*0x4c94b6*/
    return 0; /*0x4c94b6*/
  Owner = *(unsigned int *)&this->Owner; /*0x4c94b8*/
  v2 = *(unsigned int *)&this->Powered; /*0x4c94bb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c94c1*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)Owner >= v2 ) /*0x4c94cd*/
      return 0; /*0x4c94cd*/
    v2 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)Owner; /*0x4c94cf*/
  }
  if ( v2 ) /*0x4c94d3*/
    return (int16_t)(IDA_LOWORD(this->LocomotionClass[0]) - IDA_LOWORD(this->LocomotionClass[1])) > 0; /*0x4c94e7*/
  return 0; /*0x4c94d8*/
}
} // namespace gamemd
// 0x4C94F0
namespace gamemd {
int JumpjetLocomotionClass::StubReturnZero_6()
{
  FootClass *Owner; // esi
  int v2; // eax

  if ( SLOWORD(*(unsigned short *)&this->RefCount) <= 0 ) /*0x4c94f6*/
    return 0; /*0x4c94f6*/
  Owner = *(unsigned int *)&this->Owner; /*0x4c94f8*/
  v2 = *(unsigned int *)&this->Powered; /*0x4c94fb*/
  if ( Owner != (FootClass *)-1 ) /*0x4c9501*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)Owner >= v2 ) /*0x4c950d*/
      return 0; /*0x4c950d*/
    v2 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)Owner; /*0x4c950f*/
  }
  if ( v2 ) /*0x4c9513*/
    return (int16_t)(IDA_LOWORD(this->LocomotionClass[0]) - IDA_LOWORD(this->LocomotionClass[1])) < 0; /*0x4c9525*/
  return 0; /*0x4c9518*/
}
} // namespace gamemd
// 0x4CCC80
namespace gamemd {
Coord * * JumpjetLocomotionClass::UpdateFootLocomotion(int a1, int a2, int a3, int a4)
{
  FlyLocomotionClass *v4; // ebx
  int v5; // ebp
  FlyLocomotionClass *v6; // eax
  FootClass **p_Owner; // edi
  int v8; // edx
  int v9; // eax
  int v10; // esi
  bool v11; // zf
  int v12; // eax
  int *location; // eax
  FootClass *v14; // ecx
  int v15; // esi
  int GroundHeight; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // esi
  char v20; // al
  FootClass *Owner; // ecx
  FootClass *v22; // ecx
  int v23; // eax
  unsigned int v25[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a1; /*0x4ccc84*/
  v5 = a2; /*0x4ccc89*/
  if ( (uint16_t)(a2 / 256) != (uint16_t)(*(unsigned int *)&a1->AirportBound / 256) /*0x4ccce0*/
    || (uint16_t)(a3 / 256) != (uint16_t)(a1->MovingDestination[0] / 256)
    || (IDA_LOBYTE(v6) = a1->IsLanding, !(unsigned char)v6) )
  {
    p_Owner = &a1->?; /*0x4ccce9*/
    IDA_LOBYTE(v6) = (*((int (**)(FootClass *))a1->?->TechnoClass + 223))(a1->?); /*0x4cccee*/
    if ( !(unsigned char)v6 ) /*0x4cccf6*/
    {
      IDA_LOBYTE(v6) = (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 224))(*p_Owner); /*0x4ccd00*/
      if ( !(unsigned char)v6 ) /*0x4ccd08*/
      {
        IDA_LOBYTE(v6) = (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 117))(*p_Owner); /*0x4ccd12*/
        if ( !(unsigned char)v6 ) /*0x4ccd1a*/
        {
          IDA_LOBYTE(v6) = (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 118))(*p_Owner); /*0x4ccd24*/
          if ( !(unsigned char)v6 ) /*0x4ccd2c*/
          {
            IDA_LOBYTE(v6) = (*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)v4->LocomotionClass + 96))(v4); /*0x4ccd35*/
            if ( (unsigned char)v6 ) /*0x4ccd3a*/
            {
              v8 = a3; /*0x4ccd45*/
              v9 = a4; /*0x4ccd4b*/
              if ( v5 == dword_8B3C78 && a3 == dword_8B3C7C && a4 == dword_8B3C80 ) /*0x4ccd67*/
              {
                v10 = 0; /*0x4ccd6f*/
                v11 = *p_Owner == 0; /*0x4ccd71*/
                a1 = 0; /*0x4ccd73*/
                if ( !v11 ) /*0x4ccd77*/
                {
                  v12 = ComPtr::ReleaseAndSet((ComPtr *)&a1, &v4->u32_20); /*0x4ccd7e*/
                  if ( v12 < 0 && v12 != -2147467262 ) /*0x4ccd8c*/
                    WinAPI::Wrapper(v12); /*0x4ccd8f*/
                  if ( a1 ) /*0x4ccd9a*/
                    v10 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 12))(a1); /*0x4ccda2*/
                }
                if ( (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v10 /*0x4ccdb9*/
                  && !v4->IsTakingOff
                  || v4->IsLanding )
                {
                  *(unsigned int *)&v4->AirportBound = dword_8B3C78; /*0x4ccde8*/
                  v4->MovingDestination[0] = dword_8B3C7C; /*0x4ccdf1*/
                  v4->MovingDestination[1] = dword_8B3C80; /*0x4ccdf9*/
                }
                else
                {
                  location = (*p_Owner)->?; /*0x4ccdc2*/
                  *(unsigned int *)&v4->AirportBound = *location; /*0x4ccdc9*/
                  v4->MovingDestination[0] = location[1]; /*0x4ccdd2*/
                  v4->MovingDestination[1] = location[2]; /*0x4ccdd8*/
                  LocomotionClass::CheckBridgeBlock((LocomotionClass *)&v4[-1].IsElevating); /*0x4ccddb*/
                }
                v6 = a1; /*0x4ccdfc*/
                IDA_LOBYTE(v4->FlyLocomotionClass_field_58) = 0; /*0x4cce00*/
                if ( v6 ) /*0x4cce06*/
                  IDA_LOBYTE(v6) = (*(char (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 8))(v6); /*0x4cce0f*/
              }
              else
              {
                *(unsigned int *)&v4->AirportBound = v5; /*0x4cce1c*/
                v4->MovingDestination[0] = v8; /*0x4cce1f*/
                v4->MovingDestination[1] = v9; /*0x4cce22*/
                v14 = *p_Owner; /*0x4cce25*/
                if ( (*p_Owner)->? && v14->? ) /*0x4cce31*/
                {
                  v25[0] = v5; /*0x4cce3b*/
                  v25[1] = v8; /*0x4cce3f*/
                  v25[2] = v9; /*0x4cce43*/
                  v15 = (*((int (**)(FootClass *))v14->TechnoClass + 33))(v14); /*0x4cce4f*/
                  GroundHeight = Cell::GetGroundHeight(v25); /*0x4cce64*/
                  v4->MovingDestination[1] = (*(int (**)(int))(*(unsigned int *)v15 + 188))(v15) + GroundHeight; /*0x4cce6e*/
                }
                v17 = 0; /*0x4cce73*/
                v11 = *p_Owner == 0; /*0x4cce75*/
                a2 = 0; /*0x4cce77*/
                if ( !v11 ) /*0x4cce7b*/
                {
                  v18 = ComPtr::ReleaseAndSet((ComPtr *)&a2, &v4->u32_20); /*0x4cce82*/
                  if ( v18 < 0 && v18 != -2147467262 ) /*0x4cce90*/
                    WinAPI::Wrapper(v18); /*0x4cce93*/
                  v17 = a2; /*0x4cce98*/
                }
                v19 = 0; /*0x4cce9c*/
                if ( v17 ) /*0x4ccea0*/
                  v19 = (*(int (__stdcall **)(int))(*(unsigned int *)v17 + 12))(v17); /*0x4ccea8*/
                IDA_LOBYTE(v4->XYZ2[2]) = 1; /*0x4cceaa*/
                if ( (*p_Owner)->? > 0 /*0x4ccecf*/
                  && !v4->IsTakingOff
                  && (v4->IsLanding
                   || (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 114))(*p_Owner) <= v19) )
                {
                  TechnoClass::GetData((TechnoClass *)&v4[-1].IsElevating); /*0x4cced4*/
                }
                if ( v4->MovingDestination[1] <= Cell::GetGroundHeight(&v4->AirportBound) + 120 ) /*0x4cceef*/
                {
                  Owner = *(unsigned int *)&v4->Owner; /*0x4ccef8*/
                  if ( Owner->? && Owner->? ) /*0x4ccf08*/
                  {
                    v20 = 1; /*0x4ccf12*/
                  }
                  else
                  {
                    v22 = v4->?; /*0x4ccf16*/
                    a1 = 0; /*0x4ccf18*/
                    if ( v22 ) /*0x4ccf22*/
                    {
                      v23 = ComPtr::ReleaseAndSet((ComPtr *)&a1, &v4->u32_20); /*0x4ccf29*/
                      if ( v23 < 0 && v23 != -2147467262 ) /*0x4ccf37*/
                        WinAPI::Wrapper(v23); /*0x4ccf3a*/
                    }
                    if ( JumpjetLocomotionClass::CheckWindowsErrorWrapper_0((JumpjetLocomotionClass *)&a1, 0) ) /*0x4ccf45*/
                      goto LABEL_54; /*0x4ccf45*/
                    if ( !a1 ) /*0x4ccf54*/
                      WinAPI::Wrapper(-2147467261); /*0x4ccf5b*/
                    if ( !(*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 32))(a1) ) /*0x4ccf67*/
                    {
  LABEL_54:
                      Release3COM((ObjectClass *)&a1); /*0x4ccf7f*/
                      v20 = 0; /*0x4ccf84*/
                    }
                    else
                    {
                      Release3COM((ObjectClass *)&a1); /*0x4ccf72*/
                      v20 = 1; /*0x4ccf77*/
                    }
                  }
                }
                else
                {
                  v20 = 1; /*0x4ccef1*/
                }
                IDA_LOBYTE(v4->FlyLocomotionClass_field_58) = v20; /*0x4ccf86*/
                if ( (*((int (**)(FootClass *))(*p_Owner)->TechnoClass + 11))(*p_Owner) == 2 /*0x4ccf9d*/
                  && !*((unsigned char *)(*p_Owner)[1].? + 3594) )
                {
                  IDA_LOBYTE(v4->FlyLocomotionClass_field_58) = 1; /*0x4ccfa7*/
                }
                IDA_LOBYTE(v6) = a2; /*0x4ccfab*/
                if ( a2 ) /*0x4ccfb1*/
                  IDA_LOBYTE(v6) = (*(char (__stdcall **)(int))(*(unsigned int *)a2 + 8))(a2); /*0x4ccfb6*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v6; /*0x4cce12*/
}
} // namespace gamemd
// 0x4CCFD0
namespace gamemd {
TechnoClass * * JumpjetLocomotionClass::ComputeMoveToPosition(int a1)
{
  FlyLocomotionClass *v1; // esi
  char result; // al
  FootClass *Owner; // ecx
  int v4; // eax
  int v5; // edi
  TechnoClass *v6; // edi
  void *ClosestPlacementCell; // eax
  void *v8; // eax
  int v9; // eax
  void (**vtable0)(FootClass *, CellClass *, int); // edi
  CellClass *v11; // eax
  char (**v12)(FootClass *, CellClass *, int); // edi
  CellClass *v13; // eax
  int *v14; // ecx
  char *p_AirportBound; // esi
  int v16; // [esp+8h] [ebp-18h] BYREF
  int16_t v17[2]; // [esp+Ch] [ebp-14h] BYREF
  int v18; // [esp+10h] [ebp-10h] BYREF
  unsigned int v19[2]; // [esp+14h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-4h]

  v1 = a1; /*0x4ccfd4*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1); /*0x4ccfdc*/
  if ( result ) /*0x4ccfe1*/
  {
    Owner = *(unsigned int *)&v1->Owner; /*0x4ccfe7*/
    v4 = Owner->?[0]; /*0x4ccff0*/
    v5 = *(unsigned int *)&Owner->vtable2; /*0x4ccff6*/
    GroundHeight = *(unsigned int *)&Owner->NeedsSaveOrLink; /*0x4ccffc*/
    IDA_LOWORD(a1) = v4 / 256; /*0x4cd00c*/
    IDA_HIWORD(a1) = v5 / 256; /*0x4cd01f*/
    if ( !Owner->? /*0x4cd050*/
      && !(uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (int16_t *)&a1, 1)
      && !(*((uint8_t (**)(FootClass *))v1->?->TechnoClass + 311))(v1->?) )
    {
      a1 = (FlyLocomotionClass *)*JumpjetLocomotionClass::ClampToCellBounds( /*0x4cd072*/
                                      (JumpjetLocomotionClass *)&stru_87F5F0.__pad_58[416],
                                      v17,
                                      (int16_t *)&a1,
                                      1);
    }
    v6 = (TechnoClass *)v1->Owner; /*0x4cd076*/
    if ( v6 && (*((int (**)(FootClass *))v6->RadioClass + 11))(*(unsigned short *)&v1->u32_20) == 2 ) /*0x4cd08b*/
    {
      if ( a1 == (FlyLocomotionClass *)dword_8B3C58 ) /*0x4cd09d*/
      {
        (*((void (__stdcall **)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))v1->?->TechnoClass + 91))( /*0x4cd0cd*/
          &v1->?->?,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
  LABEL_21:
        result = dword_8B3C78; /*0x4cd273*/
        p_AirportBound = &v1->AirportBound; /*0x4cd278*/
        *(unsigned int *)p_AirportBound = dword_8B3C78; /*0x4cd27b*/
        *((unsigned int *)p_AirportBound + 1) = dword_8B3C7C; /*0x4cd283*/
        *((unsigned int *)p_AirportBound + 2) = dword_8B3C80; /*0x4cd28c*/
        return result; /*0x4cd28c*/
      }
      if ( (*((int (**)(FootClass *))v1->?->TechnoClass + 97))(v1->?) == 1 ) /*0x4cd0e6*/
      {
        ClosestPlacementCell = TechnoClass::FindClosestPlacementCell(v6); /*0x4cd0ea*/
      }
      else
      {
        v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a1); /*0x4cd10f*/
        ClosestPlacementCell = InfantryClass::FindNearbyCell((InfantryClass *)v6, (int)v8); /*0x4cd117*/
      }
      return (*((char (**)(FootClass *, void *, int))v1->?->TechnoClass + 288))( /*0x4cd0f7*/
               v1->?,
               ClosestPlacementCell,
               1);
    }
    else
    {
      v16 = 0; /*0x4cd161*/
      v9 = *LayerClass::Pathfinding_Find( /*0x4cd174*/
              &stru_87F5F0.__pad_58[416],
              (int)&v16,
              &v18,
              (int16_t *)&a1,
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
              (int16_t *)&v16,
              0,
              0);
      *(unsigned int *)v17 = v9; /*0x4cd17d*/
      if ( v9 == dword_8B3C58 ) /*0x4cd186*/
      {
        v14 = (int *)v1->Owner; /*0x4cd246*/
        result = (unsigned char)v14 + 108; /*0x4cd24c*/
        if ( v14[27] <= 0 ) /*0x4cd251*/
          return result; /*0x4cd251*/
        (*(void (__stdcall **)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*v14 + 364))( /*0x4cd26d*/
          v14 + 27,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          1,
          1,
          0);
        goto LABEL_21; /*0x4cd26d*/
      }
      GroundHeight = 0; /*0x4cd1a9*/
      v19[1] = (IDA_SHIWORD(v9) << 8) + 128; /*0x4cd1b6*/
      v19[0] = ((int16_t)v9 << 8) + 128; /*0x4cd1c0*/
      GroundHeight = Cell::GetGroundHeight(v19); /*0x4cd1ce*/
      if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17) + 80) & 0x100) != 0 ) /*0x4cd1e5*/
        GroundHeight += dword_8B3CAC; /*0x4cd1f3*/
      vtable0 = (void (**)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd201*/
      v11 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd208*/
      vtable0[288](v1->?, v11, 1); /*0x4cd211*/
      result = v1->IsLanding; /*0x4cd217*/
      if ( !result ) /*0x4cd21c*/
      {
        v12 = (char (**)(FootClass *, CellClass *, int))v1->?->TechnoClass; /*0x4cd228*/
        v13 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v19); /*0x4cd22f*/
        return v12[288](v1->Owner, v13, 1); /*0x4cd238*/
      }
    }
  }
  return result; /*0x4cd0fd*/
}
} // namespace gamemd
// 0x4CE5A0
namespace gamemd {
BuildingClass * * JumpjetLocomotionClass::ProcessRotation()
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  FootClass *LinkedTo; // ecx
  CellClass *v6; // eax
  int v7; // [esp+4h] [ebp-14h] BYREF
  int v8; // [esp+8h] [ebp-10h] BYREF
  unsigned int v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( this->__pad_50[3] && this->?->? > 0 ) /*0x4ce5b9*/
  {
    if ( (*(uint8_t (__stdcall **)(int *))(this->LocomotionClass[1] + 96))(&this->LocomotionClass[1]) ) /*0x4ce5c6*/
    {
      LinkedTo = *(unsigned int *)&this->LinkedTo; /*0x4ce636*/
      this->__pad_50[3] = 0; /*0x4ce639*/
      LinkedTo = (FootClass *)((char *)LinkedTo + 156); /*0x4ce63d*/
      v9[0] = LinkedTo->TechnoClass; /*0x4ce645*/
      v9[1] = LinkedTo->?; /*0x4ce651*/
      v9[2] = LinkedTo->?; /*0x4ce658*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v9); /*0x4ce661*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v6); /*0x4ce668*/
    }
    else
    {
      IDA_LOWORD(v7) = *ProgressTimer::GetValue((ProgressTimer *)*(unsigned short *)&this->vtable3->?, &v8) /*0x4ce5ee*/
                 + ((uint16_t)*(unsigned int *)&this->__pad_50[4] << 8);
      FacingClass::Set_SyncLog((char *)this->?->?, &v7); /*0x4ce605*/
      v2 = *(unsigned int *)&this->__pad_50[4]; /*0x4ce60a*/
      v3 = abs32(v2); /*0x4ce612*/
      if ( v3 >= 1 ) /*0x4ce617*/
        v3 = 1; /*0x4ce619*/
      if ( v2 >= 0 ) /*0x4ce620*/
        v4 = v2 - v3; /*0x4ce62c*/
      else
        v4 = v3 + v2; /*0x4ce622*/
      *(unsigned int *)&this->__pad_50[4] = v4; /*0x4ce624*/
    }
  }
}
} // namespace gamemd
// 0x4CF610
namespace gamemd {
void * JumpjetLocomotionClass::ComputeRotationMatrix(int a1, float * a2, signed int a3)
{
  int *v3; // edi
  JumpjetLocomotionClass *v4; // esi
  FootClass *Owner; // ecx
  int v6; // eax
  int v7; // eax
  double v8; // st7
  int v9; // eax
  float *result; // eax
  float v11; // [esp+0h] [ebp-3Ch]
  float v12; // [esp+0h] [ebp-3Ch]
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+0h] [ebp-3Ch]
  Matrix3x4 v15; // [esp+Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(&v15); /*0x4cf619*/
  v3 = (int *)a3; /*0x4cf61e*/
  v4 = a1; /*0x4cf622*/
  if ( a3 ) /*0x4cf628*/
    *v3 |= 8 * (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)a1->?->?, &a3) >> 10) + 1) >> 1) & 0x1F); /*0x4cf64f*/
  a3 = (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)*(unsigned int *)&v4->q03C->?, &a1) >> 10) + 1) >> 1) & 0x1F) - 8; /*0x4cf677*/
  v11 = (double)a3 * -0.1963495408493621; /*0x4cf685*/
  Matrix2D::Rotate(v15.m_Data, v11); /*0x4cf688*/
  if ( (*((int (**)(FootClass *))v4->?->TechnoClass + 114))(v4->?) > 0 ) /*0x4cf69a*/
  {
    Owner = *(unsigned int *)&v4->Owner; /*0x4cf6a0*/
    if ( *(unsigned int *)&Owner->q425 ) /*0x4cf6a3*/
    {
      Matrix3x3::RotateX(v15.m_Data, *(float *)&Owner->?); /*0x4cf6b8*/
      if ( *(double *)&v4->DestinationCoords[1] <= *(double *)((*((int (**)(FootClass *))v4->?->TechnoClass /*0x4cf6d6*/
                                                                + 33))(v4->?)
                                                             + 936) )
      {
        Matrix3D::RotateZ(v15.m_Data, *(float *)&v4->?->?); /*0x4cf706*/
      }
      else
      {
        v12 = *(float *)&v4->q03C->? /*0x4cf6f3*/
            + *(double *)((*((int (**)(FootClass *))*(unsigned int *)&v4->q03C->TechnoClass + 33))(*(unsigned int *)&v4->q03C) + 944);
        Matrix3D::RotateZ(v15.m_Data, v12); /*0x4cf6f6*/
      }
      if ( v3 ) /*0x4cf70d*/
        *v3 = -1; /*0x4cf713*/
    }
    else if ( *(double *)&v4->DestinationCoords[1] > *(double *)((*((int (**)(FootClass *))Owner->TechnoClass /*0x4cf734*/
                                                                  + 33))(Owner)
                                                               + 936) )
    {
      if ( *(double *)((*((int (**)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 944) != 0.0 ) /*0x4cf756*/
      {
        if ( v3 ) /*0x4cf75a*/
        {
          v6 = *v3; /*0x4cf75c*/
          IDA_LOBYTE(v6) = *v3 | 4; /*0x4cf75e*/
          *v3 = v6; /*0x4cf760*/
        }
        v13 = *(double *)((*((int (**)(FootClass *))*(unsigned int *)&v4->q03C->TechnoClass + 33))(*(unsigned int *)&v4->q03C) + 944); /*0x4cf778*/
        Matrix3D::RotateZ(v15.m_Data, v13); /*0x4cf77b*/
      }
      if ( *(double *)((*((int (**)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928) != 0.0 ) /*0x4cf79c*/
      {
        if ( JumpjetLocomotionClass::StubReturnZero_5((JumpjetLocomotionClass *)v4->Owner->?) ) /*0x4cf7a7*/
        {
          if ( v3 ) /*0x4cf7b2*/
          {
            v7 = *v3; /*0x4cf7b4*/
            IDA_LOBYTE(v7) = *v3 | 1; /*0x4cf7b6*/
            *v3 = v7; /*0x4cf7b8*/
          }
          v8 = *(double *)((*((int (**)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7c5*/
        }
        else
        {
          if ( !JumpjetLocomotionClass::StubReturnZero_6((JumpjetLocomotionClass *)v4->?->?) ) /*0x4cf7dd*/
            goto LABEL_25; /*0x4cf7dd*/
          if ( v3 ) /*0x4cf7e1*/
          {
            v9 = *v3; /*0x4cf7e3*/
            IDA_LOBYTE(v9) = *v3 | 2; /*0x4cf7e5*/
            *v3 = v9; /*0x4cf7e7*/
          }
          v8 = -*(double *)((*((int (**)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 928); /*0x4cf7fa*/
        }
        v14 = v8; /*0x4cf801*/
        Matrix3x3::RotateX(v15.m_Data, v14); /*0x4cf804*/
      }
    }
  }
  LABEL_25:
  result = a2; /*0x4cf809*/
  qmemcpy(a2, &v15, 0x30u); /*0x4cf818*/
  return result; /*0x4cf81a*/
}
} // namespace gamemd
// 0x4CFCF0
namespace gamemd {
int JumpjetLocomotionClass::DispatchVirtualCall_0(int a1)
{
  return (*((int (**)(FootClass *))a1->?->TechnoClass + 114))(a1->?) > 0 ? 4 : 2;
}
} // namespace gamemd
// 0x4CFD20
namespace gamemd {
int JumpjetLocomotionClass::ClearLocomotionDirty(unsigned char * a1)
{
  if ( (*(uint8_t (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) ) /*0x4cfd28*/
  {
    a1->__pad_4F[0] = 1; /*0x4cfd2f*/
    *(unsigned int *)&a1->__pad_4F[1] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 20, 30); /*0x4cfd48*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x4cfd63*/
      *(unsigned int *)&a1->__pad_4F[1] = -*(unsigned int *)&a1->__pad_4F[1]; /*0x4cfd6a*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 72))(a1); /*0x4cfd70*/
    a1->FlyLocomotionClass_field_54 = 0; /*0x4cfd73*/
  }
// 0x55a910
  return StreamClass::ClearDirty((IUnknown *)a1); /*0x4cfd80*/
}
} // namespace gamemd
// 0x514D90
namespace gamemd {
unsigned int * JumpjetLocomotionClass::SetMovementTarget(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // ebx
  HoverLocomotionClass *v6; // esi
  int v7; // ebp
  int *p_RefCount; // edi
  int *v9; // eax
  unsigned int *result; // eax
  int v11; // edi
  MovementAI *v12; // esi
  int v13; // edi
  MovementAI *p_HoverLocomotionClass_field_bool_70; // esi
  int v15; // edi
  int v16; // ebx
  unsigned short *v17; // eax
  bool v18; // bl
  int m_State; // ecx
  unsigned int v20[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = a4; /*0x514d93*/
  v5 = a2; /*0x514d99*/
  v6 = a1; /*0x514d9e*/
  v7 = a3; /*0x514da2*/
  p_RefCount = &a1->?; /*0x514da7*/
  v9 = &a1->?; /*0x514daa*/
  a1->? = a2; /*0x514dac*/
  v9[1] = v7; /*0x514dae*/
  v9[2] = v4; /*0x514db1*/
  result = (unsigned int *)(*((int (**)(FootClass *))v6->?->TechnoClass + 224))(v6->?); /*0x514db9*/
  if ( !(unsigned char)result ) /*0x514dc1*/
  {
    if ( (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 96))(v6) /*0x514de4*/
      && (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 100))(v6)
// 0x53a130
      && HouseClass::IonSensitivesShouldBeOffline() )
    {
      (*(void (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 92))(v6); /*0x514df0*/
    }
    v6->Dest[1] = Cell::GetGroundHeight(p_RefCount); /*0x514e02*/
    v11 = a4; /*0x514e05*/
    v20[0] = v5; /*0x514e0f*/
    v20[1] = v7; /*0x514e13*/
    v20[2] = a4; /*0x514e17*/
    result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v20); /*0x514e1b*/
    if ( (result[80] & 0x100) != 0 ) /*0x514e29*/
    {
      result = (unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1488) + v6->Dest[1]); /*0x514e34*/
      v6->Dest[1] = (int)result; /*0x514e36*/
    }
    if ( v5 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514e4f*/
      || v7 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
      || v11 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444) )
    {
      result = (unsigned int *)(*(int (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 96))(v6); /*0x514e58*/
      if ( (unsigned char)result ) /*0x514e5d*/
      {
        if ( (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v6->LocomotionClass + 128))(v6) ) /*0x514e66*/
        {
          result = *(unsigned int **)&(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x514ea1*/
          if ( v6->Dest[2] == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514ecd*/
            && v6->HeadToCoord[0] == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
            && v6->HeadToCoord[1] == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444) )
          {
            v13 = v6->Dest[2]; /*0x514ed3*/
            p_HoverLocomotionClass_field_bool_70 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514ed6*/
            v18 = 1; /*0x514f28*/
            if ( v13 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514ee5*/
              || p_HoverLocomotionClass_field_bool_70[1].m_State != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
              || p_HoverLocomotionClass_field_bool_70[1].MovementAI_field_10 != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444) )
            {
              v15 = p_HoverLocomotionClass_field_bool_70[1].m_Target[2] / 256; /*0x514f0d*/
              v16 = p_HoverLocomotionClass_field_bool_70[1].m_State / 256; /*0x514f10*/
              v17 = (unsigned short *)(*(int (**)(int, HoverLocomotionClass **))(*(unsigned int *)p_HoverLocomotionClass_field_bool_70->m_State /*0x514f13*/
                                                                                 + 440))(
                               p_HoverLocomotionClass_field_bool_70->m_State,
                               &a1);
              if ( *v17 != (unsigned short)v15 || v17[1] != (unsigned short)v16 ) /*0x514f22*/
                v18 = 0; /*0x514ee5*/
            }
            m_State = p_HoverLocomotionClass_field_bool_70->m_State; /*0x514f2a*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_10 = 0; /*0x514f2d*/
            p_HoverLocomotionClass_field_bool_70[2].MovementAI_field_14 = 1072693248; /*0x514f34*/
            (*(void (**)(int, unsigned int, int))(*(unsigned int *)m_State + 1348))(m_State, 0, 1072693248); /*0x514f44*/
            result = (unsigned int *)MovementAI::StepFootClass(p_HoverLocomotionClass_field_bool_70, 0); /*0x514f4e*/
            if ( v18 ) /*0x514f55*/
              return (unsigned int *)MovementAI::MainFootClass(p_HoverLocomotionClass_field_bool_70, 1); /*0x514f5b*/
          }
        }
        else
        {
          (*((void (**)(FootClass *, unsigned int, int))v6->?->TechnoClass + 337))(v6->?, 0, 1072693248); /*0x514e7c*/
          v12 = (MovementAI *)&v6[-1].HoverLocomotionClass_field_bool_70; /*0x514e82*/
          MovementAI::StepFootClass(v12, 0); /*0x514e89*/
          return (unsigned int *)MovementAI::MainFootClass(v12, 1); /*0x514e92*/
        }
      }
    }
  }
  return result; /*0x514e97*/
}
} // namespace gamemd
// 0x516BF0
namespace gamemd {
int JumpjetLocomotionClass::ClearLocomotionDirty_0(unsigned char * a1)
{
  int currentMission; // eax

  if ( (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 96))(a1) ) /*0x516bf8*/
  {
    currentMission = a1->?->?; /*0x516c02*/
    if ( currentMission ) /*0x516c0a*/
    {
      if ( currentMission != 7 ) /*0x516c0f*/
      {
        IDA_LOBYTE(a1->CurrentWobbles[1]) = 1; /*0x516c11*/
        *(unsigned int *)&a1->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516c2a*/
                                                                 (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                                 20,
                                                                 30);
        if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x516c44*/
          *(unsigned int *)&a1->HoverLocomotionClass_field_bool_68 = -*(unsigned int *)&a1->HoverLocomotionClass_field_bool_68; /*0x516c4b*/
      }
    }
  }
  if ( (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) ) /*0x516c51*/
    (*(void (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 72))(a1); /*0x516c5b*/
// 0x55a910
  return StreamClass::ClearDirty((IUnknown *)a1); /*0x516c64*/
}
} // namespace gamemd
// 0x516C70
namespace gamemd {
int JumpjetLocomotionClass::DispatchVirtualCall_2(int a1)
{
  return (uint8_t)StreamClass::GetDirty((IUnknown *)a1) /*0x516c90*/
      || (*((int (**)(FootClass *))a1->?->TechnoClass + 114))(a1->?) > 0;
}
} // namespace gamemd
// 0x54AEC0
namespace gamemd {
Coord * * JumpjetLocomotionClass::DispatchLocomotion(unsigned int * a1)
{
  double v1; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  FootClass *Owner; // ecx
  int v7; // eax
  int *v8; // eax
  int v9; // edi
  FootClass *v10; // ecx
  int v11; // ebx
  int (**vtable0)(FootClass *, int *); // edx
  unsigned int *v13; // eax
  void *v14; // eax
  int *v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  FootClass *v19; // eax
  int *location; // eax
  int *v21; // edx
  FootClass *v22; // eax
  int *v23; // eax
  int v24; // eax
  ObjectClass *v26; // [esp+28h] [ebp-24h]
  int16_t v27[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v28; // [esp+30h] [ebp-1Ch]
  int v29; // [esp+34h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  unsigned char v32[12]; // [esp+40h] [ebp-Ch] BYREF
  JumpjetLocomotionClass *thisa; // [esp+50h] [ebp+4h]

  v3 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 116))(a1); /*0x54aecb*/
  v4 = a1->LocomotionClass[0]; /*0x54aece*/
  v28 = v3; /*0x54aed1*/
  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(v4 + 16))(a1) /*0x54aedf*/
    || (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 128))(a1) )
  {
    JumpjetLocomotion::UpdateFacing((JumpjetLocomotion *)((char *)a1 - 4)); /*0x54aef0*/
    if ( !a1->?->? ) /*0x54af00*/
      return 0; /*0x54af00*/
    if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x54af0c*/
    {
      v5 = *(unsigned int *)&a1->IsMoving; /*0x54af15*/
      if ( v5 ) /*0x54af1a*/
      {
        if ( v5 != 5 ) /*0x54af1f*/
          (*((void (**)(FootClass *, unsigned int))a1->?->TechnoClass + 247))(a1->?, 0); /*0x54af28*/
      }
    }
    Owner = *(unsigned int *)&a1->Owner; /*0x54af2e*/
    if ( *(unsigned int *)&Owner->q425 ) /*0x54af33*/
    {
      v7 = *(unsigned int *)&a1->IsMoving; /*0x54af41*/
      if ( v7 != 5 && v7 != 6 && (*((int (**)(FootClass *))Owner->TechnoClass + 114))(Owner) > 0 ) /*0x54af60*/
      {
        v8 = (int *)(*((int (**)(FootClass *, int *))*(unsigned short *)&a1->ptr_48->TechnoClass + 18))(*(unsigned short *)&a1->ptr_48, &v29); /*0x54af71*/
        v9 = *v8; /*0x54af74*/
        v10 = *(unsigned int *)&a1->Owner; /*0x54af76*/
        v11 = v8[1]; /*0x54af79*/
        vtable0 = (int (**)(FootClass *, int *))v10->TechnoClass; /*0x54af7c*/
        v31 = v8[2]; /*0x54af81*/
        v13 = (unsigned int *)vtable0[18](v10, &v29); /*0x54af8a*/
        IDA_LOWORD(thisa) = *v13 / 256; /*0x54af9d*/
        IDA_HIWORD(thisa) = v13[1] / 256; /*0x54afb5*/
        *(unsigned int *)v27 = thisa; /*0x54afbe*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27); /*0x54afc8*/
        v15 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v14 + 72))(v14, v32); /*0x54afdc*/
        v16 = *v15; /*0x54afde*/
        v17 = v15[1]; /*0x54afe8*/
        v18 = v15[2]; /*0x54afeb*/
        if ( !a1->?->isAttackedByLocomotor || v9 == v16 && v11 == v17 ) /*0x54aff6*/
        {
          *(unsigned int *)&a1->__pad_74[8] = -5; /*0x54b006*/
          *(unsigned int *)&a1->IsMoving = 5; /*0x54b00d*/
          if ( (*((int (**)(FootClass *))a1->Owner->TechnoClass + 11))(a1->Owner) == 15 ) /*0x54b01f*/
            (*((void (**)(FootClass *, int, unsigned int, unsigned int))a1->Owner->TechnoClass + 342))(a1->Owner, 34, 0, 0); /*0x54b02c*/
        }
        else
        {
          *(unsigned int *)&a1->__pad_39[3] = v16; /*0x54affb*/
          a1->DestinationCoords[0] = v17; /*0x54affe*/
          a1->DestinationCoords[1] = v18; /*0x54b001*/
        }
      }
    }
    switch ( *(unsigned int *)&a1->IsMoving ) /*0x54b03c*/
    {
      case 0: /*0x54b03c*/
        HouseClass::Set((HouseClass *)((char *)a1 - 4)); /*0x54b046*/
        break; /*0x54b04b*/
      case 1: /*0x54b03c*/
        UpdateFootMovement(v26, v1); /*0x54b050*/
        break; /*0x54b055*/
      case 2: /*0x54b03c*/
        UpdateFootMoveToState(v26, v1); /*0x54b05a*/
        break; /*0x54b05f*/
      case 3: /*0x54b03c*/
        MovementClass::CalcSpeed((MovementClass *)v26, v1); /*0x54b064*/
        break; /*0x54b069*/
      case 4: /*0x54b03c*/
        BuildingPlacement::ProcessBuildingPlacementAction((BuildingPlacement *)((char *)a1 - 4)); /*0x54b06e*/
        break; /*0x54b073*/
      case 5: /*0x54b03c*/
        JumpjetLocomotion::Land((JumpjetLocomotion *)((char *)a1 - 4)); /*0x54b078*/
        break; /*0x54b078*/
      default:
        break;
    }
    v19 = *(unsigned int *)&a1->Owner; /*0x54b07d*/
    if ( *(unsigned int *)&v19->isSelected ) /*0x54b080*/
    {
      if ( (Object *)v19->owner != dword_A83D4C ) /*0x54b09c*/
      {
        location = v19->?; /*0x54b09e*/
        v29 = *location; /*0x54b0a5*/
        v30 = location[1]; /*0x54b0ac*/
        v31 = location[2]; /*0x54b0bd*/
        if ( (uint8_t)Cell::IsPassable(&v29) /*0x54b0fe*/
          || ((int)dword_A8B230->vtable0 & 0x1000) != 0
          && (v21 = a1->?->?, v29 = *v21, v30 = v21[1], v31 = v21[2], (uint8_t)Game::Stub3((int)&v29)) )
        {
          (*((void (**)(FootClass *))a1->?->TechnoClass + 84))(a1->?); /*0x54b10c*/
        }
      }
    }
    v22 = *(unsigned int *)&a1->Owner; /*0x54b112*/
    if ( !v22->owner && (Object *)v22->owner != dword_A83D4C ) /*0x54b12d*/
    {
      v23 = v22->?; /*0x54b12f*/
      v29 = *v23; /*0x54b136*/
      v30 = v23[1]; /*0x54b13d*/
      v31 = v23[2]; /*0x54b14e*/
      if ( !(uint8_t)Cell::IsPassable(&v29) ) /*0x54b152*/
        (*((void (**)(FootClass *, Object *))a1->?->TechnoClass + 102))(a1->?, dword_A83D4C); /*0x54b166*/
    }
  }
  if ( a1->u32_90->? ) /*0x54b16f*/
  {
    v24 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 116))(a1); /*0x54b17c*/
    if ( v24 != v28 ) /*0x54b183*/
      Targeting::Readd(&a1->Owner->TechnoClass); /*0x54b18e*/
  }
  return 0; /*0x54b195*/
}
} // namespace gamemd
// 0x54B1C0
namespace gamemd {
int JumpjetLocomotionClass::SmoothObjectPlacement(int a1, int a2, int a3, int a4)
{
  JumpjetLocomotionClass *v4; // esi
  int v5; // edi
  int v6; // ebp
  int result; // eax
  JumpjetLocomotionClass **v8; // eax
  unsigned int v9; // edx
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  FootClass *Owner; // ecx
  FootClass *v15; // ecx
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a1; /*0x54b1cc*/
  if ( (*(unsigned int *)&a1->__pad_39[3] != dword_ABC5A8 /*0x54b1fe*/
     || a1->DestinationCoords[0] != dword_ABC5AC
     || a1->DestinationCoords[1] != dword_ABC5B0)
    && *(unsigned int *)&a1->IsMoving
    && a1->__pad_89[3] )
  {
    (*((void (**)(FootClass *, char *))a1->?->TechnoClass + 61))(a1->?, &a1->__pad_39[3]); /*0x54b20e*/
    v4->__pad_89[3] = 0; /*0x54b214*/
  }
  v5 = a2; /*0x54b21e*/
  v6 = a3; /*0x54b222*/
  result = a4; /*0x54b22b*/
  *(unsigned int *)&v4->__pad_39[3] = a2; /*0x54b22f*/
  v4->DestinationCoords[0] = v6; /*0x54b231*/
  v4->DestinationCoords[1] = result; /*0x54b234*/
  if ( v5 == dword_ABC5A8 && v6 == dword_ABC5AC && result == dword_ABC5B0 ) /*0x54b24f*/
  {
    IDA_LOBYTE(v4->DestinationCoords[2]) = 0; /*0x54b4c1*/
  }
  else
  {
    if ( (*((int (**)(FootClass *))v4->?->TechnoClass + 11))(v4->?) != 1 || *((unsigned char *)v4->?[1].? + 3434) ) /*0x54b26b*/
    {
      v17[2] = a4; /*0x54b2e4*/
      IDA_LOWORD(a1) = v5 / 256; /*0x54b2fd*/
      a2 = 0; /*0x54b30b*/
      IDA_HIWORD(a1) = v6 / 256; /*0x54b31a*/
      v17[0] = v5; /*0x54b33d*/
      v17[1] = v6; /*0x54b341*/
      v9 = (unsigned int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17)->flags[0] >> 8; /*0x54b358*/
      IDA_LOBYTE(v9) = v9 & 1; /*0x54b35b*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b36f*/
                                        &stru_87F5F0.__pad_58[416],
                                        v9,
                                        &v16,
                                        (int16_t *)&a1,
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
                                        (int16_t *)&a2,
                                        0,
                                        0);
    }
    else
    {
      IDA_LOWORD(a1) = v5 / 256; /*0x54b28c*/
      a2 = 0; /*0x54b29a*/
      IDA_HIWORD(a1) = v6 / 256; /*0x54b2a9*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b2d9*/
                                        &stru_87F5F0.__pad_58[416],
                                        (int)&v16,
                                        &v16,
                                        (int16_t *)&a1,
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
                                        (int16_t *)&a2,
                                        0,
                                        0);
    }
    a1 = *v8; /*0x54b37d*/
    a2 = ((int16_t)a1 << 8) + 128; /*0x54b393*/
    a3 = (IDA_SHIWORD(a1) << 8) + 128; /*0x54b3a4*/
    a4 = 0; /*0x54b3a8*/
    v10 = JumpjetLocomotionClass::ProcessLanding((JumpjetLocomotionClass *)((char *)v4 - 4), v17, &a2); /*0x54b3b0*/
    v11 = *v10; /*0x54b3b5*/
    v12 = v10[1]; /*0x54b3b7*/
    v13 = v10[2]; /*0x54b3ba*/
    result = dword_ABC5A8; /*0x54b3bd*/
    if ( v11 != dword_ABC5A8 || v12 != dword_ABC5AC || v13 != dword_ABC5B0 ) /*0x54b3d4*/
    {
      if ( (*((int (**)(FootClass *))*(unsigned int *)&v4->q03C->TechnoClass + 11))(*(unsigned int *)&v4->q03C) != 1 /*0x54b413*/
        || !*(unsigned char *)((*((int (**)(FootClass *))*(unsigned int *)&v4->q03C->TechnoClass + 33))(*(unsigned int *)&v4->q03C) + 3434)
        && (Owner = v4->q03C, Owner->? != 7)
        && (*((int (**)(FootClass *))Owner->TechnoClass + 97))(Owner) != 7 )
      {
        *(unsigned int *)&v4->__pad_39[3] = v11; /*0x54b418*/
        v4->DestinationCoords[0] = v12; /*0x54b41b*/
        v4->DestinationCoords[1] = v13; /*0x54b41e*/
      }
      v15 = *(unsigned int *)&v4->Owner; /*0x54b421*/
      if ( v15->? != 7 && (*((int (**)(FootClass *))v15->TechnoClass + 97))(v15) != 7 ) /*0x54b438*/
        v4->?->movementDestination = (AbstractClass *)Coord::To_Cell( /*0x54b44b*/
                                                        (Coord *)&stru_87F5F0.__pad_58[416],
                                                        &v4->__pad_39[3]);
      IDA_LOBYTE(v4->DestinationCoords[2]) = 1; /*0x54b451*/
      result = *(unsigned int *)&v4->IsMoving; /*0x54b455*/
      if ( result == 4 ) /*0x54b45b*/
      {
        *(unsigned int *)&v4->IsMoving = 1; /*0x54b45d*/
        *(unsigned int *)&v4->__pad_74[8] = v4->Height; /*0x54b467*/
        v4->?->? = 0; /*0x54b46d*/
        result = (*((int (**)(FootClass *))v4->?->TechnoClass + 97))(v4->?); /*0x54b479*/
        if ( result == 16 ) /*0x54b482*/
        {
          (*((void (**)(FootClass *, int, int))v4->?->TechnoClass + 122))(v4->?, 5, 1); /*0x54b48d*/
          v4->?->? = 1; /*0x54b496*/
          result = (*((int (**)(FootClass *))v4->?->TechnoClass + 128))(v4->?); /*0x54b4a2*/
          if ( (unsigned char)result ) /*0x54b4aa*/
            return (*((int (**)(FootClass *))v4->?->TechnoClass + 123))(v4->?); /*0x54b4b1*/
        }
      }
    }
  }
  return result; /*0x54b4b7*/
}
} // namespace gamemd
// 0x54B4D0
namespace gamemd {
Coord * * JumpjetLocomotionClass::MoveToDestination(int a1)
{
  int result; // eax
  JumpjetLocomotionClass *v2; // edi
  char *v3; // ebp
  FootClass *Owner; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // [esp-2Ch] [ebp-50h]
  int16_t v11[2]; // [esp+Ch] [ebp-18h] BYREF
  JumpjetLocomotionClass *v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  result = dword_A8E7AC; /*0x54b4d0*/
  if ( !dword_A8E7AC ) /*0x54b4dd*/
  {
    v2 = a1; /*0x54b4e3*/
    result = IDA_LOBYTE(a1->DestinationCoords[2]); /*0x54b4e7*/
    if ( (unsigned char)result ) /*0x54b4ec*/
    {
      v3 = &a1->__pad_39[3]; /*0x54b4fb*/
      if ( (*(unsigned int *)&a1->__pad_39[3] != dword_ABC5A8 /*0x54b521*/
         || a1->DestinationCoords[0] != dword_ABC5AC
         || a1->DestinationCoords[1] != dword_ABC5B0)
        && *(unsigned int *)&a1->IsMoving
        && a1->__pad_89[3] )
      {
        (*((void (**)(FootClass *, char *))a1->?->TechnoClass + 61))(a1->?, &a1->__pad_39[3]); /*0x54b531*/
        v2->__pad_89[3] = 0; /*0x54b537*/
      }
      Owner = *(unsigned int *)&v2->Owner; /*0x54b541*/
      v5 = Owner->?[0]; /*0x54b54f*/
      v6 = *(unsigned int *)&Owner->vtable2; /*0x54b551*/
      GroundHeight = Owner->?[2]; /*0x54b557*/
      IDA_LOWORD(a1) = v5 / 256; /*0x54b567*/
      IDA_HIWORD(a1) = v6 / 256; /*0x54b57e*/
      v12 = a1; /*0x54b587*/
      a1 = 0; /*0x54b59b*/
      v10 = *(unsigned int *)((*((int (**)(FootClass *))Owner->TechnoClass + 33))(Owner) + 1460); /*0x54b5be*/
      v7 = (*((int (**)(FootClass *))Owner->TechnoClass + 33))(Owner); /*0x54b5c3*/
      v8 = *LayerClass::Pathfinding_Find( /*0x54b5e4*/
              &stru_87F5F0.__pad_58[416],
              (int)&v13,
              &v13,
              (int16_t *)&v12,
              *(unsigned int *)(v7 + 1660),
              -1,
              v10,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (int16_t *)&a1,
              0,
              0);
      *(unsigned int *)v11 = v8; /*0x54b5ed*/
      if ( v8 == dword_ABC588 ) /*0x54b5f6*/
      {
        v9 = (int *)v2->Owner; /*0x54b68f*/
        result = (int)(v9 + 27); /*0x54b695*/
        if ( v9[27] > 0 ) /*0x54b69a*/
        {
          (*(void (__stdcall **)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*v9 + 364))( /*0x54b6b6*/
            v9 + 27,
            0,
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          result = dword_ABC5A8; /*0x54b6bc*/
          *(unsigned int *)v3 = dword_ABC5A8; /*0x54b6c1*/
          v2->DestinationCoords[0] = dword_ABC5AC; /*0x54b6ca*/
          v2->DestinationCoords[1] = dword_ABC5B0; /*0x54b6d3*/
        }
      }
      else
      {
        v14 = ((int16_t)v8 << 8) + 128; /*0x54b61e*/
        v15 = (IDA_SHIWORD(v8) << 8) + 128; /*0x54b626*/
        GroundHeight = 0; /*0x54b630*/
        GroundHeight = Cell::GetGroundHeight(&v14); /*0x54b643*/
        if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x100) != 0 ) /*0x54b655*/
          GroundHeight += dword_ABC5DC; /*0x54b663*/
        return (*(int (__stdcall **)(JumpjetLocomotionClass *, int, int, int))(v2->LocomotionClass[0] + 68))( /*0x54b683*/
                 v2,
                 v14,
                 v15,
                 GroundHeight);
      }
    }
  }
  return result; /*0x54b686*/
}
} // namespace gamemd
// 0x54D6D0
namespace gamemd {
void* * JumpjetLocomotionClass::ProcessLanding(int * v6, unsigned int * a3)
{
  FootClass *LinkedTo; // ecx
  CellClass *v4; // eax
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

  LinkedTo = *(unsigned int *)&this->LinkedTo; /*0x54d6d0*/
  if ( LinkedTo && (*((int (**)(FootClass *))LinkedTo->TechnoClass + 11))(LinkedTo) == 1 ) /*0x54d6e7*/
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a3); /*0x54d6f7*/
    v5 = (int *)(*(int (**)(CellClass *, int *))(v4->mapCoords[0] + 72))(v4, v15); /*0x54d705*/
    v6 = dword_ABC5A8; /*0x54d70a*/
    v12 = *v5; /*0x54d712*/
    v7 = v5[1]; /*0x54d718*/
    v13 = v7; /*0x54d71b*/
    v8 = v5[2]; /*0x54d71f*/
    GroundHeight = v8; /*0x54d722*/
    if ( v12 != dword_ABC5A8 || v7 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d736*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d74b*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d767*/
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
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d7ee*/
      {
        v8 = dword_ABC5DC + GroundHeight; /*0x54d7f9*/
        goto LABEL_14; /*0x54d7fb*/
      }
      goto LABEL_13; /*0x54d7ee*/
    }
  }
  LABEL_14:
  *v6 = v6; /*0x54d801*/
  v6[1] = v13; /*0x54d811*/
  v6[2] = v8; /*0x54d815*/
  return v6; /*0x54d805*/
}
} // namespace gamemd
// 0x54DCC0
namespace gamemd {
void * JumpjetLocomotionClass::ComputeMovementTransform(signed int a1, float * a2, unsigned int * a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  FootClass *v6; // ecx
  long double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  FootClass *Owner; // ecx
  float *Transform; // eax
  float *v16; // eax
  float *v17; // esi
  float *v19; // esi
  float v20; // [esp+4h] [ebp-144h]
  float v21; // [esp+4h] [ebp-144h]
  float v22; // [esp+4h] [ebp-144h]
  float v23; // [esp+14h] [ebp-134h]
  int v24; // [esp+14h] [ebp-134h]
  int v26; // [esp+18h] [ebp-130h]
  Matrix3x4 v31; // [esp+28h] [ebp-120h] BYREF
  Matrix3x4 v32; // [esp+58h] [ebp-F0h] BYREF
  Transform v33[12]; // [esp+88h] [ebp-C0h] BYREF
  float v34[12]; // [esp+B8h] [ebp-90h] BYREF
  float v35[12]; // [esp+E8h] [ebp-60h] BYREF
  float v36[12]; // [esp+118h] [ebp-30h] BYREF

  if ( *(unsigned char *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 3362) /*0x54dd13*/
    && ((v6 = a1->?, fabs(*(float *)&v6->?) >= 0.005) || fabs(*(float *)&v6->?) >= 0.005) )
  {
    if ( a3 ) /*0x54dd23*/
      *a3 = -1; /*0x54dd25*/
    Matrix3x4::Identity(&v32); /*0x54dd2f*/
    Matrix3x4::Identity(&v31); /*0x54dd38*/
    v7 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 864); /*0x54dd4b*/
    v7 = v7; /*0x54dd53*/
    v23 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 872); /*0x54dd69*/
    Math::ArcTan2(*(float *)&a1->?->?); /*0x54dd76*/
    v3 = v3; /*0x54dd7e*/
    Math::SinCos(*(float *)&a1->?->?); /*0x54dd8b*/
    v4 = v4; /*0x54dd93*/
    Math::ArcTan2(*(float *)&a1->?->?); /*0x54dda0*/
    v5 = v5; /*0x54dda8*/
    Math::SinCos(*(float *)&a1->?->?); /*0x54ddb5*/
    IDA_LOWORD(v8) = Math::RoundToInt(fabs(v7) * v7 + fabs(v4) * v23); /*0x54ddcf*/
    v8 = v8; /*0x54dddc*/
    IDA_LOWORD(v9) = Math::RoundToInt(v3 * v23); /*0x54dde0*/
    IDA_LOWORD(v10) = Math::RoundToInt(v23 - (double)v9); /*0x54ddf1*/
    v10 = v10; /*0x54ddfe*/
    v24 = v10; /*0x54de00*/
    IDA_LOWORD(v12) = Math::RoundToInt(v5 * v7); /*0x54de04*/
    IDA_LOWORD(v13) = Math::RoundToInt(v7 - (double)v12); /*0x54de15*/
    Owner = a1->u32_8; /*0x54de1a*/
    v26 = v13; /*0x54de1f*/
    if ( *(float *)&Owner->? < 0.0 ) /*0x54de34*/
      v24 = -v10; /*0x54de38*/
    if ( *(float *)&Owner->? > 0.0 ) /*0x54de4d*/
      v26 = -v13; /*0x54de51*/
    v20 = (float)v8; /*0x54de5e*/
    Matrix3x3::ApplyCol1(v32.m_Data, v20); /*0x54de61*/
    v21 = (float)v24; /*0x54de6f*/
    Matrix3x4::Translate(v31.m_Data, v21); /*0x54de72*/
    v22 = (float)v26; /*0x54de80*/
    Matrix3x3::ApplyCol0(v31.m_Data, v22); /*0x54de83*/
    Matrix3x3::RotateX(v31.m_Data, *(float *)&a1->?->?); /*0x54de96*/
    Matrix3D::RotateZ(v31.m_Data, *(float *)&a1->?->?); /*0x54dea9*/
    Transform = Turret::GetTransform((LocomotionClass *)a1, v35, a3); /*0x54deb8*/
    Transform::Copy(v33, Transform); /*0x54dec5*/
    v16 = MultiplyMatrix3x4(v36, (float *)v32.m_Data, (float *)&v33[0].Transform_field_00); /*0x54dee2*/
    v17 = MultiplyMatrix3x4(v34, v16, (float *)v31.m_Data); /*0x54def5*/
    qmemcpy(a2, v17, 0x30u); /*0x54df06*/
    return a2; /*0x54defc*/
  }
  else
  {
    v19 = Turret::GetTransform((LocomotionClass *)a1, v34, a3); /*0x54df29*/
    qmemcpy(a2, v19, 0x30u); /*0x54df39*/
    return a2; /*0x54df30*/
  }
}
} // namespace gamemd
// 0x586AC0
namespace gamemd {
unsigned int * JumpjetLocomotionClass::ClampToCellBounds(MouseClass * aP1, IUnknown * aP2, char a4)
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
  int v15; // [esp+24h] [ebp+8h]
  int v16; // [esp+28h] [ebp+Ch]

  v4 = *(unsigned int *)&this->q0F4; /*0x586ac8*/
  v5 = *aP2; /*0x586acf*/
  v6 = aP2[1]; /*0x586ad4*/
  if ( (v4 & 1) != 0 ) /*0x586ae1*/
    v7 = v5 - v6 + 1; /*0x586ae5*/
  else
    v7 = v5 - v6; /*0x586ae8*/
  v8 = v4 / 2 + (v7 >> 1) - this->q0FC; /*0x586b05*/
  v9 = v5 + v6 - v4 - this->q100; /*0x586b0d*/
  v15 = this->q104 / 2; /*0x586b2d*/
  v10 = this->q108 / 2; /*0x586b36*/
  if ( (int)abs32(v8 - v15) >= (int)abs32(v9 - v10) ) /*0x586b45*/
  {
    if ( v9 >= v10 ) /*0x586b83*/
    {
      v11 = this->q108; /*0x586b98*/
      if ( a4 ) /*0x586b9e*/
        --v11; /*0x586ba0*/
    }
    else
    {
      v11 = a4 != 0; /*0x586b8d*/
    }
  }
  else if ( v8 >= v15 ) /*0x586b4b*/
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
  v12 = this->q100 + v11; /*0x586bb1*/
  v13 = v8 + this->q0FC; /*0x586bb3*/
  IDA_LOWORD(v16) = v13 + ((v12 + 1) >> 1); /*0x586bc7*/
  IDA_HIWORD(v16) = v4 + (v12 >> 1) - v13; /*0x586bcf*/
  *aP1 = v16; /*0x586bdc*/
  return aP1; /*0x586bb5*/
}
} // namespace gamemd
// 0x663470
namespace gamemd {
void * JumpjetLocomotionClass::ComputePitchYaw(signed int a1, float * a2, int * a3)
{
  int *v4; // edi
  void *vtable1; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  float *result; // eax
  float v10; // [esp+0h] [ebp-40h]
  float v11; // [esp+0h] [ebp-40h]
  int v12; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v13; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(&v13); /*0x663479*/
  a1 = a1; /*0x66347e*/
  a1 = (JumpjetLocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)a1->?->?, &v12) >> 10) /*0x6634a3*/
                                                   + 1) >> 1)
                                   & 0x1F)
                                  - 8);
  v10 = (double)(int)a1 * -0.1963495408493621; /*0x6634b6*/
  Matrix2D::Rotate(v13.m_Data, v10); /*0x6634b9*/
  v4 = a3; /*0x6634c7*/
  if ( *(float *)v3->__pad_50 == 0.0 ) /*0x6634d0*/
  {
  LABEL_13:
    if ( v4 ) /*0x663565*/
      *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->?->?, &a1) >> 10) + 1) >> 1) & 0x1F; /*0x663589*/
    goto LABEL_15; /*0x663589*/
  }
  v11 = -*(float *)v3->__pad_50; /*0x6634e0*/
  Matrix3D::RotateZ(v13.m_Data, v11); /*0x6634e3*/
  vtable1 = v3->?[1].?; /*0x6634f0*/
  if ( vtable1 == *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6634fe*/
  {
    v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663500*/
  }
  else if ( vtable1 == *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x66350d*/
  {
    v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x66350f*/
  }
  else
  {
    v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663516*/
  }
  *(float *)&a1 = *(float *)(v6 + 12) * 1.570796326794897; /*0x663526*/
  if ( v4 ) /*0x66352a*/
  {
    if ( *(float *)(v6 + 8) * 1.570796326794897 == *(float *)v3->__pad_50 ) /*0x66353d*/
    {
      v7 = *v4; /*0x66353f*/
      IDA_LOBYTE(v7) = *v4 | 0x20; /*0x663541*/
      *v4 = v7; /*0x663543*/
    }
    else if ( *(float *)v3->__pad_50 == *(float *)&a1 ) /*0x663553*/
    {
      v8 = *v4; /*0x663555*/
      IDA_LOBYTE(v8) = *v4 | 0x40; /*0x663557*/
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
  qmemcpy(a2, &v13, 0x30u); /*0x66359a*/
  return result; /*0x66359c*/
}
} // namespace gamemd
// 0x69F670
namespace gamemd {
void * JumpjetLocomotionClass::ComputeVoxelTransform2(unsigned int * a1, float * a2, unsigned int * a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  float Accel; // edi
  double v7; // st7
  float Climb; // edx
  int Height; // eax
  FootClass *Owner; // ecx
  long double v11; // st7
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  FootClass *v18; // ecx
  float *v19; // eax
  float v20; // ebx
  Timeout *p_Climb; // ecx
  Timeout v22; // edi
  int v23; // eax
  double v24; // st7
  float v25; // edi
  const void *v26; // eax
  int v27; // esi
  float *v28; // eax
  float *v29; // edx
  float *v30; // ecx
  int v31; // ecx
  float *Transform; // eax
  float v33; // ebx
  float v34; // edx
  int v35; // eax
  float v36; // edx
  double v37; // st7
  float v38; // ecx
  int v39; // eax
  const void *v40; // eax
  int TurnRate; // esi
  float v43; // [esp+4h] [ebp-234h]
  float v44; // [esp+4h] [ebp-234h]
  float v45; // [esp+4h] [ebp-234h]
  float *v46; // [esp+4h] [ebp-234h]
  float v47; // [esp+14h] [ebp-224h]
  float v48; // [esp+18h] [ebp-220h]
  float v49; // [esp+1Ch] [ebp-21Ch]
  int v50; // [esp+1Ch] [ebp-21Ch]
  float v51; // [esp+20h] [ebp-218h]
  int v52; // [esp+20h] [ebp-218h]
  float v53; // [esp+24h] [ebp-214h]
  int v54; // [esp+24h] [ebp-214h]
  Matrix3x4 v55; // [esp+28h] [ebp-210h] BYREF
  Matrix3x4 v56; // [esp+58h] [ebp-1E0h] BYREF
  Matrix3x4 v57; // [esp+88h] [ebp-1B0h] BYREF
  Transform v58[12]; // [esp+B8h] [ebp-180h] BYREF
  Transform v59[12]; // [esp+E8h] [ebp-150h] BYREF
  float v60[12]; // [esp+118h] [ebp-120h] BYREF
  float v61[12]; // [esp+148h] [ebp-F0h] BYREF
  char v62[48]; // [esp+178h] [ebp-C0h] BYREF
  float v63[12]; // [esp+1A8h] [ebp-90h] BYREF
  unsigned char v64[48]; // [esp+1D8h] [ebp-60h] BYREF
  float v65[12]; // [esp+208h] [ebp-30h] BYREF

  Accel = a1->Accel; /*0x69f682*/
  if ( Accel == 0.0 ) /*0x69f68b*/
  {
    v7 = 1.0; /*0x69f68d*/
  }
  else
  {
    Climb = a1->Climb; /*0x69f695*/
    Height = a1->Height; /*0x69f698*/
    if ( Climb != NAN ) /*0x69f69e*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Climb) >= Height ) /*0x69f6aa*/
        Height = 0; /*0x69f6b0*/
      else
        Height -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Climb); /*0x69f6ac*/
    }
    v7 = (double)(IDA_LODWORD(Accel) - Height) / (double)IDA_SLODWORD(a1->Accel); /*0x69f6bc*/
  }
  if ( v7 == 1.0 ) /*0x69f6cb*/
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x69f6cd*/
    if ( fabs(*(float *)&Owner->?) < 0.005 && fabs(*(float *)&Owner->?) < 0.005 ) /*0x69f6f8*/
    {
      if ( a3 && *a3 != -1 ) /*0x69f9cf*/
      {
        v31 = *a3 << 6; /*0x69f9d1*/
        *a3 = v31; /*0x69f9d4*/
        *a3 = v31 + a1->TurnRate; /*0x69f9db*/
      }
      Transform = Turret::GetTransform((LocomotionClass *)a1, v60, a3); /*0x69f9e7*/
      Transform::Copy(v59, Transform); /*0x69f9f4*/
      Matrix3x4::Identity(&v55); /*0x69f9fd*/
      v33 = a1->Accel; /*0x69fa02*/
      if ( v33 == 0.0 ) /*0x69fa0b*/
        goto LABEL_48; /*0x69fa0b*/
      v34 = a1->Climb; /*0x69fa11*/
      v35 = a1->Height; /*0x69fa14*/
      if ( v34 != NAN ) /*0x69fa20*/
      {
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v34) >= v35 ) /*0x69fa28*/
          v35 = 0; /*0x69fa2e*/
        else
          v35 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v34); /*0x69fa2a*/
      }
      if ( (double)(IDA_LODWORD(v33) - v35) / (double)IDA_SLODWORD(a1->Accel) >= 1.0 ) /*0x69fa49*/
      {
  LABEL_48:
        TurnRate = a1->TurnRate; /*0x69faa0*/
        if ( !TurnRate ) /*0x69faa5*/
        {
  LABEL_51:
          qmemcpy(v58, &v55, sizeof(v58)); /*0x69fad9*/
          v46 = (float *)v59; /*0x69fadb*/
          v29 = (float *)v58; /*0x69fadc*/
          v30 = (float *)v62; /*0x69fae3*/
          goto LABEL_52; /*0x69fae3*/
        }
        v40 = CopyAudioData((char *)v61, TurnRate); /*0x69fab0*/
      }
      else
      {
        v36 = a1->Accel; /*0x69fa4b*/
        if ( v36 == 0.0 ) /*0x69fa54*/
        {
          v37 = 1.0; /*0x69fa56*/
        }
        else
        {
          v38 = a1->Climb; /*0x69fa5e*/
          v39 = a1->Height; /*0x69fa61*/
          if ( v38 != NAN ) /*0x69fa67*/
          {
            if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v38) >= v39 ) /*0x69fa6f*/
              v39 = 0; /*0x69fa75*/
            else
              v39 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v38); /*0x69fa71*/
          }
          v37 = (double)(IDA_LODWORD(v36) - v39) / (double)IDA_SLODWORD(a1->Accel); /*0x69fa81*/
        }
        v40 = InterpolateVoxelAnimPose(v63, a1->Speed, a1->TurnRate, v37); /*0x69fa99*/
      }
      qmemcpy(&v55, v40, sizeof(v55)); /*0x69fac0*/
      goto LABEL_51; /*0x69fac0*/
    }
  }
  Matrix3x4::Identity(&v56); /*0x69f702*/
  Matrix3x4::Identity(&v57); /*0x69f70e*/
  v11 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 864); /*0x69f721*/
  v49 = v11; /*0x69f729*/
  v51 = *(double *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 872); /*0x69f73f*/
  Math::ArcTan2(*(float *)&a1->?->?); /*0x69f74c*/
  v47 = v3; /*0x69f754*/
  Math::SinCos(*(float *)&a1->?->?); /*0x69f761*/
  v53 = v4; /*0x69f769*/
  Math::ArcTan2(*(float *)&a1->?->?); /*0x69f776*/
  v48 = v5; /*0x69f77e*/
  Math::SinCos(*(float *)&a1->?->?); /*0x69f78b*/
  IDA_LOWORD(v12) = Math::RoundToInt(fabs(v11) * v49 + fabs(v53) * v51); /*0x69f7a5*/
  v54 = v12; /*0x69f7b2*/
  IDA_LOWORD(v13) = Math::RoundToInt(v47 * v51); /*0x69f7b6*/
  IDA_LOWORD(v14) = Math::RoundToInt(v51 - (double)v13); /*0x69f7c7*/
  v15 = v14; /*0x69f7d4*/
  v52 = v14; /*0x69f7d6*/
  IDA_LOWORD(v16) = Math::RoundToInt(v48 * v49); /*0x69f7da*/
  IDA_LOWORD(v17) = Math::RoundToInt(v49 - (double)v16); /*0x69f7eb*/
  v18 = *(unsigned int *)&a1->Owner; /*0x69f7f0*/
  v50 = v17; /*0x69f7f5*/
  if ( *(float *)&v18->? < 0.0 ) /*0x69f80a*/
    v52 = -v15; /*0x69f80e*/
  if ( *(float *)&v18->? > 0.0 ) /*0x69f823*/
    v50 = -v17; /*0x69f827*/
  v43 = (float)v54; /*0x69f834*/
  Matrix3x3::ApplyCol1(v56.m_Data, v43); /*0x69f837*/
  v44 = (float)v52; /*0x69f848*/
  Matrix3x4::Translate(v57.m_Data, v44); /*0x69f84b*/
  v45 = (float)v50; /*0x69f85c*/
  Matrix3x3::ApplyCol0(v57.m_Data, v45); /*0x69f85f*/
  Matrix3x3::RotateX(v57.m_Data, *(float *)&a1->?->?); /*0x69f875*/
  Matrix3D::RotateZ(v57.m_Data, *(float *)&a1->?->?); /*0x69f88b*/
  if ( a3 ) /*0x69f895*/
    *a3 = -1; /*0x69f897*/
  v19 = Turret::GetTransform((LocomotionClass *)a1, v65, a3); /*0x69f8a7*/
  Transform::Copy(v58, v19); /*0x69f8b4*/
  Matrix3x4::Identity(&v55); /*0x69f8bd*/
  v20 = a1->Accel; /*0x69f8c2*/
  p_Climb = (Timeout *)&a1->Climb; /*0x69f8c5*/
  if ( v20 != 0.0 ) /*0x69f8ce*/
  {
    v22 = *p_Climb; /*0x69f8d0*/
    v23 = a1->Height; /*0x69f8d2*/
    if ( *p_Climb != -1 ) /*0x69f8d8*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - *(unsigned int *)&v22 >= v23 ) /*0x69f8e4*/
        v23 = 0; /*0x69f8ea*/
      else
        v23 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - *(unsigned int *)&v22; /*0x69f8e6*/
    }
    if ( (double)(IDA_LODWORD(v20) - v23) / (double)IDA_SLODWORD(a1->Accel) < 1.0 ) /*0x69f905*/
    {
      if ( IDA_LODWORD(a1->Accel) ) /*0x69f907*/
      {
        v25 = a1->Accel; /*0x69f916*/
        v24 = (double)(IDA_LODWORD(v25) - Timeout::GetRemaining(p_Climb)) / (double)IDA_SLODWORD(v25); /*0x69f92c*/
      }
      else
      {
        v24 = 1.0; /*0x69f90e*/
      }
      v26 = InterpolateVoxelAnimPose(v64, a1->Speed, a1->TurnRate, v24); /*0x69f944*/
      goto LABEL_29; /*0x69f949*/
    }
  }
  v27 = a1->TurnRate; /*0x69f94b*/
  if ( v27 ) /*0x69f950*/
  {
    v26 = CopyAudioData(v62, v27); /*0x69f95b*/
  LABEL_29:
    qmemcpy(&v55, v26, sizeof(v55)); /*0x69f96b*/
  }
  qmemcpy(v59, &v55, sizeof(v59)); /*0x69f984*/
  v46 = (float *)&v57; /*0x69f994*/
  v28 = MultiplyMatrix3x4(v61, (float *)v56.m_Data, (float *)&v59[0].Transform_field_00); /*0x69f9a2*/
  v29 = MultiplyMatrix3x4(v63, v28, (float *)&v58[0].Transform_field_00); /*0x69f9b5*/
  v30 = v60; /*0x69f9b7*/
  LABEL_52:
  qmemcpy(&v56, MultiplyMatrix3x4(v30, v29, v46), sizeof(v56)); /*0x69faea*/
  qmemcpy(a2, &v56, 0x30u); /*0x69fb0a*/
  return a2; /*0x69fb0c*/
}
} // namespace gamemd
// 0x6A4130
namespace gamemd {
int JumpjetLocomotionClass::StubReturnZero_15(unsigned int a1)
{
  ShipLocomotionClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int16_t v5; // bx
  int TrackNumber; // edx
  int16_t v7; // dx
  char v8; // al

  v1 = a1; /*0x6a4132*/
  v2 = a1->?->pathDirections[0]; /*0x6a4139*/
  if ( v2 < -1 || v2 > 8 ) /*0x6a414b*/
    return 0; /*0x6a414b*/
  v3 = 12 * a1->MovementSpeed[1] + 8333888; /*0x6a415c*/
  v4 = IDA_LOBYTE(a1->TrackIndex)
     ? (char)algn_7F2A41[12 * a1->MovementSpeed[1]]
     : byte_7F2A40[12 * a1->MovementSpeed[1]];
  if ( v2 == 8 ) /*0x6a4173*/
    return 0; /*0x6a4173*/
  if ( v2 == -1 ) /*0x6a417c*/
    return 0; /*0x6a417c*/
  IDA_LOBYTE(v5) = 0; /*0x6a4183*/
  IDA_HIBYTE(v5) = algn_7F2A41[12 * a1->MovementSpeed[1] + 3]; /*0x6a4185*/
  IDA_LOWORD(a1) = v5; /*0x6a4188*/
  if ( (((((unsigned int)a1 >> 12) + 1) >> 1) & 7) == v2 ) /*0x6a41a8*/
    return 0; /*0x6a41a8*/
  TrackNumber = v1->TrackNumber; /*0x6a41aa*/
  if ( dword_7F2964[4 * v4] == TrackNumber /*0x6a41f1*/
    && TrackNumber
    && (IDA_LOBYTE(v7) = 0,
        IDA_HIBYTE(v7) = *(unsigned char *)(v3 + 4),
        IDA_LOWORD(a1) = v7,
        (v8 = byte_7F2A40[96 * (((((unsigned int)a1 >> 12) + 1) >> 1) & 7) + 12 * v2]) != 0)
    && dword_7F2968[4 * v8] )
  {
    return 1; /*0x6a41fc*/
  }
  else
  {
    return 0; /*0x6a4203*/
  }
}
} // namespace gamemd
// 0x709480
namespace gamemd {
int JumpjetLocomotionClass::StubReturnZero_16()
{
  int v2; // ebx
  int v3; // edi
  int v4; // eax
  char result; // al
  unsigned char v6[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !FootClass::CanEnterCell((int)this, 0) ) /*0x709489*/
    return 0; /*0x7094d5*/
  v2 = this->u32_2B4; /*0x709497*/
  v3 = this->LocomotionClass[0]; /*0x70949e*/
  this->u32_4FC = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x7094a9*/
  v4 = (*(int (**)(JumpjetLocomotionClass *, unsigned char *, int))(v3 + 72))(this, v6, 1); /*0x7094af*/
  result = (*(int (**)(JumpjetLocomotionClass *, int))(v3 + 924))(this, v4); /*0x7094b5*/
  if ( result ) /*0x7094be*/
  {
    if ( this->u32_2B4 != v2 ) /*0x7094c6*/
      this->u32_50C = 1; /*0x7094c8*/
  }
  return result; /*0x7094cf*/
}
} // namespace gamemd
// 0x719BF0
namespace gamemd {
int JumpjetLocomotionClass::SetCoordinateField(unsigned int * a1)
{
  int v1; // edx
  int result; // eax
  FootClass *LinkedTo; // ecx

  v1 = a1->Timer[0]; /*0x719bf5*/
  result = a1->Timer[2]; /*0x719bf8*/
  if ( v1 == -1 ) /*0x719bfe*/
  {
  LABEL_4:
    if ( result ) /*0x719c10*/
      return result; /*0x719c10*/
    goto LABEL_5; /*0x719c10*/
  }
  if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v1 < result ) /*0x719c0a*/
  {
    result -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v1; /*0x719c0c*/
    goto LABEL_4; /*0x719c0c*/
  }
  LABEL_5:
  a1->LinkedTo->? = 0; /*0x719c12*/
  LinkedTo = *(unsigned int *)&a1->LinkedTo; /*0x719c1c*/
  if ( !LinkedTo->q2B4 ) /*0x719c1f*/
  {
    Mission::GetMissionDelay((Mission *)LinkedTo); /*0x719c29*/
    if ( !JumpjetLocomotionClass::StubReturnZero_16((JumpjetLocomotionClass *)a1->?) ) /*0x719c31*/
      (*((void (**)(FootClass *, unsigned int, int))a1->?->TechnoClass + 289))(a1->?, 0, 1); /*0x719c43*/
  }
  result = a1->State; /*0x719c49*/
  if ( result > 0 ) /*0x719c4e*/
    a1->State = ++result; /*0x719c51*/
  return result; /*0x719c54*/
}
} // namespace gamemd
// 0x729B40
namespace gamemd {
void* * JumpjetLocomotionClass::ComputeTurretTransform(unsigned int * a1, void * a2, int * a3)
{
  int RefCount; // eax
  int *location; // eax
  int slopeIndex; // ebx
  float *v6; // eax
  float *v7; // eax
  float *v8; // esi
  void *result; // eax
  float *v10; // eax
  float Crash; // edx
  float Accel; // eax
  double v13; // st7
  float v14; // edx
  float v15; // eax
  double v16; // st7
  float v17; // edx
  float v18; // eax
  float *Transform; // eax
  int v20; // esi
  float v21; // [esp+0h] [ebp-14Ch]
  double v22; // [esp+14h] [ebp-138h] BYREF
  int v23; // [esp+1Ch] [ebp-130h]
  float Wobbles; // [esp+28h] [ebp-124h]
  Matrix3x4 v25; // [esp+2Ch] [ebp-120h] BYREF
  Transform v26[12]; // [esp+5Ch] [ebp-F0h] BYREF
  Transform v27[12]; // [esp+8Ch] [ebp-C0h] BYREF
  float v28[12]; // [esp+BCh] [ebp-90h] BYREF
  char v29[48]; // [esp+ECh] [ebp-60h] BYREF
  float v30[12]; // [esp+11Ch] [ebp-30h] BYREF

  RefCount = *(unsigned int *)&a1->RefCount; /*0x729b52*/
  if ( RefCount ) /*0x729b57*/
  {
    switch ( RefCount ) /*0x729c61*/
    {
      case 2: /*0x729c61*/
        if ( a3 ) /*0x729c94*/
          *a3 = -1; /*0x729c96*/
        *(float *)&v22 = a1->Wobbles; /*0x729ca1*/
        if ( IDA_LODWORD(v22) ) /*0x729ca5*/
        {
          Crash = a1->Crash; /*0x729cbc*/
          Accel = a1->Accel; /*0x729cbf*/
          if ( Crash != NAN ) /*0x729cc5*/
          {
            if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Crash) >= IDA_SLODWORD(Accel) ) /*0x729cd1*/
              Accel = 0.0; /*0x729cd7*/
            else
              IDA_LODWORD(Accel) -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(Crash); /*0x729cd3*/
          }
          IDA_LODWORD(Wobbles) = IDA_LODWORD(v22) - IDA_LODWORD(Accel); /*0x729cdb*/
          v22 = (double)(IDA_LODWORD(v22) - IDA_LODWORD(Accel)) / (double)IDA_SLODWORD(v22) * 1.570796326794897; /*0x729ced*/
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
        Wobbles = a1->Wobbles; /*0x729d05*/
        if ( Wobbles == 0.0 ) /*0x729d09*/
        {
          v13 = 1.0; /*0x729d0b*/
        }
        else
        {
          v14 = a1->Crash; /*0x729d13*/
          v15 = a1->Accel; /*0x729d16*/
          if ( v14 != NAN ) /*0x729d1c*/
          {
            if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v14) >= IDA_SLODWORD(v15) ) /*0x729d28*/
              v15 = 0.0; /*0x729d2e*/
            else
              IDA_LODWORD(v15) -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v14); /*0x729d2a*/
          }
          v13 = (double)(IDA_LODWORD(Wobbles) - IDA_LODWORD(v15)) / (double)IDA_SLODWORD(Wobbles); /*0x729d3a*/
        }
        v22 = (1.0 - v13) * -1.570796326794897; /*0x729d4c*/
        break; /*0x729d52*/
      case 7: /*0x729c61*/
        if ( a3 ) /*0x729d56*/
          *a3 = -1; /*0x729d58*/
        Wobbles = a1->Wobbles; /*0x729d63*/
        if ( Wobbles == 0.0 ) /*0x729d67*/
        {
          v16 = 1.0; /*0x729d69*/
        }
        else
        {
          v17 = a1->Crash; /*0x729d71*/
          v18 = a1->Accel; /*0x729d74*/
          if ( v17 != NAN ) /*0x729d7a*/
          {
            if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v17) >= IDA_SLODWORD(v18) ) /*0x729d86*/
              v18 = 0.0; /*0x729d8c*/
            else
              IDA_LODWORD(v18) -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - IDA_LODWORD(v17); /*0x729d88*/
          }
          v16 = (double)(IDA_LODWORD(Wobbles) - IDA_LODWORD(v18)) / (double)IDA_SLODWORD(Wobbles); /*0x729d98*/
        }
        v22 = (1.0 - v16) * 1.570796326794897; /*0x729daa*/
        break; /*0x729db0*/
      default:
        v22 = 0.0; /*0x729db2*/
        break; /*0x729db2*/
    }
    Transform = Turret::GetTransform((LocomotionClass *)a1, v28, a3); /*0x729dcc*/
    Transform::Copy(v27, Transform); /*0x729dd9*/
    if ( a3 && *a3 != -1 ) /*0x729de7*/
    {
      v20 = *a3; /*0x729de2*/
      *a3 = (v20 << 8) | Math::RoundToInt(v22 * 32.0) & 0x3F; /*0x729e00*/
    }
    v21 = v22; /*0x729e0e*/
    Matrix3D::RotateZ(&v27[0].Transform_field_00, v21); /*0x729e11*/
    qmemcpy(a2, v27, 0x30u); /*0x729e27*/
    return a2; /*0x729e16*/
  }
  else
  {
    location = a1->Owner->?; /*0x729b60*/
    v22 = *(double *)location; /*0x729b67*/
    v23 = location[2]; /*0x729b7f*/
    slopeIndex = (uint8_t)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v22)->slopeIndex; /*0x729b8d*/
    if ( a3 && *a3 != -1 ) /*0x729b9c*/
      *a3 = slopeIndex + (*a3 << 6); /*0x729ba3*/
    Matrix3x4::Identity(&v25); /*0x729ba9*/
    if ( slopeIndex ) /*0x729bb1*/
    {
      v6 = Turret::GetTransform((LocomotionClass *)a1, v30, a3); /*0x729bbc*/
      Transform::Copy(v26, v6); /*0x729bc6*/
      v7 = (float *)CopyAudioData(v29, slopeIndex); /*0x729bd9*/
      v8 = MultiplyMatrix3x4(v28, v7, (float *)&v26[0].Transform_field_00); /*0x729bf1*/
      result = a2; /*0x729bf3*/
      qmemcpy(&v25, v8, sizeof(v25)); /*0x729bfa*/
    }
    else
    {
      v10 = Turret::GetTransform((LocomotionClass *)a1, v28, a3); /*0x729c1b*/
      Transform::Copy(v26, v10); /*0x729c25*/
      result = a2; /*0x729c2a*/
      qmemcpy(&v25, v26, sizeof(v25)); /*0x729c3a*/
    }
    qmemcpy(a2, &v25, 0x30u); /*0x729c07*/
  }
  return result; /*0x729c09*/
}
} // namespace gamemd
// 0x729E50
namespace gamemd {
int JumpjetLocomotionClass::ComputeBounceHeight(int a1)
{
  int *location; // eax
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
  unsigned int v15[2]; // [esp+28h] [ebp-Ch] BYREF
  int GroundHeight; // [esp+30h] [ebp-4h]
  TunnelLocomotionClass *thisa; // [esp+38h] [ebp+4h]

  location = a1->?->?; /*0x729e5d*/
  v15[0] = *location; /*0x729e64*/
  v15[1] = location[1]; /*0x729e76*/
  GroundHeight = location[2]; /*0x729e82*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v11); /*0x729e86*/
  GroundHeight = Cell::GetGroundHeight(v15); /*0x729eaa*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v15, &v13); /*0x729eae*/
  v3 = a1->CurrentState[6]; /*0x729eb7*/
  v10 = v3; /*0x729ebe*/
  v4 = v12 - v14; /*0x729ec2*/
  thisa = (TunnelLocomotionClass *)(v12 - v14); /*0x729ec6*/
  if ( v3 ) /*0x729eca*/
  {
    v5 = a1->CurrentState[3]; /*0x729eda*/
    v6 = a1->CurrentState[5]; /*0x729edd*/
    if ( v5 != -1 ) /*0x729ee3*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v5 >= v6 ) /*0x729eef*/
        v6 = 0; /*0x729ef5*/
      else
        v6 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v5; /*0x729ef1*/
    }
    v9 = (double)(v3 - v6) / (double)v10; /*0x729f05*/
  }
  else
  {
    v9 = 1.0; /*0x729ecc*/
  }
  v7 = (uint8_t)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)a1->q014->?, &v10) >> 7) + 1) >> 1); /*0x729f2a*/
  switch ( a1->? ) /*0x729f39*/
  {
    case 2: /*0x729f39*/
      if ( v9 > 0.4 && !IDA_LOBYTE(a1->CurrentState[7]) ) /*0x729f85*/
        IDA_LOBYTE(a1->CurrentState[7]) = 1; /*0x729f8c*/
      if ( v7 <= 70 || v7 >= 140 ) /*0x729f9b*/
        IDA_LOWORD(result) = Math::RoundToInt((double)dword_844A9C * v9 + (double)(int)thisa); /*0x729fbc*/
      else
        result = dword_844A9C + v4; /*0x729fa3*/
      break; /*0x729fab*/
    case 3: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729fd2*/
      break; /*0x729fdb*/
    case 4: /*0x729f39*/
      result = dword_844A9C + v4; /*0x729f46*/
      break; /*0x729f4f*/
    case 5: /*0x729f39*/
      result = v4 + dword_844A98; /*0x729fe3*/
      break; /*0x729feb*/
    case 6: /*0x729f39*/
      IDA_LOWORD(result) = Math::RoundToInt((1.0 - v9) * (double)dword_844A98 + (double)(int)thisa); /*0x729f66*/
      break; /*0x729f71*/
    default:
      result = JumpjetLocomotionClass::StubReturnFalse((LocomotionClass *)a1); /*0x729fef*/
      break; /*0x729fef*/
  }
  return result; /*0x729f49*/
}
} // namespace gamemd
// 0x72A1A0
namespace gamemd {
int JumpjetLocomotionClass::ShortFunc_72A1A0(int a1)
{
  return a1->? != 4 ? 2 : 0;
}
} // namespace gamemd
// 0x54EB20
namespace gamemd {
int JumpjetLocomotionClass_26::FindItem(unsigned int * a2)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->q010; /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( m_10 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= m_10 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}
// 0x439A10
double JumpjetLocomotionClass::ComputeVectorLengthMetric()
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
  unsigned int v14[3]; // [esp+20h] [ebp-Ch] BYREF

  v2 = Math::RoundToInt(this->vtable3); /*0x439a1a*/
  v3 = this->Speed; /*0x439a1f*/
  v14[0] = v2; /*0x439a22*/
  v4 = Math::RoundToInt(v3); /*0x439a26*/
  v5 = this->Climb; /*0x439a2b*/
  v14[1] = v4; /*0x439a2e*/
  v14[2] = Math::RoundToInt(v5); /*0x439a37*/
  GroundHeight = Cell::GetGroundHeight(v14); /*0x439a45*/
  v7 = Math::RoundToInt(this->Climb - (double)GroundHeight); /*0x439a5e*/
  v10 = v7; /*0x439a66*/
  if ( (*((unsigned int *)Coord::To_Cell(&MapClass_Instance, v14) + 80) & 0x100) != 0 && v7 >= dword_89C76C ) /*0x439a81*/
    v10 = v7 - dword_89C76C; /*0x439a85*/
  v11 = Math::RoundToInt(this->Crash); /*0x439a94*/
  v12 = Math::RoundToInt(this->Height); /*0x439aa1*/
  v13 = Math::RoundToInt((double)v10 * this->Owner + this->Accel); /*0x439ab8*/
  v8 = Math::Sqrt((double)v13 * (double)v13 + (double)v11 * (double)v11 + (double)v12 * (double)v12); /*0x439adc*/
  return (double)(int)Math::RoundToInt(v8); /*0x439af2*/
}
}
// 0x4AF610
int JumpjetLocomotionClass::LoadLocomotionFromStream(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x4af611*/
  if ( !a2 ) /*0x4af618*/
    return -2147467261; /*0x4af621*/
  pad_50 = a1->__pad_50; /*0x4af62b*/
  if ( *(unsigned int *)a1->__pad_50 ) /*0x4af628*/
  {
    a1 = 0; /*0x4af634*/
    v5 = StreamClass::Set2((StreamClass *)&a1, pad_50); /*0x4af645*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4af653*/
      WinAPI::Wrapper(v5); /*0x4af656*/
    if ( !a1 ) /*0x4af661*/
      return -2147467259; /*0x4af66a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x4af674*/
    if ( a1 ) /*0x4af67c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x4af685*/
      return v6; /*0x4af68c*/
    }
  }
  else
  {
    a2 = 0; /*0x4af692*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x4af69c*/
      return -2147467259; /*0x4af69c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x4af6ad*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x4af6b1*/
    {
      v9 = a1; /*0x4af6c5*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x4af6cd*/
      v8 = v9; /*0x4af6d2*/
      a2 = v9->LocomotionClass; /*0x4af6d5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x4af6b7*/
      v8 = 0; /*0x4af6bc*/
      a2 = 0; /*0x4af6be*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4af6e3*/
      WinAPI::Wrapper(v7); /*0x4af6e6*/
    if ( !v8 ) /*0x4af6f1*/
      return -2147467259; /*0x4af6fa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4af704*/
    if ( a2 ) /*0x4af70c*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x4af711*/
  }
  return v6; /*0x4af61a*/
}
// 0x4AF8E0
int JumpjetLocomotionClass::StubReturnZero(int a1, int a2)
{
  if ( !a2 ) /*0x4af8e6*/
    return -2147467261; /*0x4af8e8*/
  if ( *(unsigned int *)a1->__pad_50 ) /*0x4af8f4*/
    return -2147467259; /*0x4af91b*/
  *(unsigned int *)a1->__pad_50 = a2; /*0x4af902*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x4af908*/
  return 0; /*0x4af8ed*/
}
// 0x4AF930
int JumpjetLocomotionClass::StubReturnZero_0(int a1, unsigned int * a2)
{
  int v3; // eax

  if ( !a2 ) /*0x4af936*/
    return -2147467261; /*0x4af938*/
  v3 = *(unsigned int *)a1->__pad_50; /*0x4af944*/
  if ( !v3 ) /*0x4af949*/
    return 1; /*0x4af959*/
  *a2 = v3; /*0x4af94b*/
  *(unsigned int *)a1->__pad_50 = 0; /*0x4af94d*/
  return 0; /*0x4af93d*/
}
// 0x4AF970
bool JumpjetLocomotionClass::CheckPiggybackState(int a1)
{
  return !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x4af9a0*/
      && *(unsigned int *)a1->__pad_50
      && a1->unknown_4D
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);
}
// 0x4AFB40
unsigned int * JumpjetLocomotionClass::InitMovementState(unsigned int * a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1->CurrentRamp = a2; /*0x4afb4d*/
  *(unsigned int *)a1->__pad_18 = a2; /*0x4afb50*/
  a1->PreviousRamp = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x4afb5f*/
  a1->SlopeTimer[0] = v3; /*0x4afb65*/
  a1->SlopeTimer[1] = 0; /*0x4afb68*/
  a1->SlopeTimer[2] = 0; /*0x4afb6b*/
  return &a1->PreviousRamp; /*0x4afb6e*/
}
// 0x4AFB80
bool JumpjetLocomotionClass::StubReturnTrue(int a1)
{
  if ( IDA_LODWORD(a1->Wobbles) != g_DDraw_ClipRect || *(unsigned long long *)&a1->Deviation != qword_8A0794 ) /*0x4afba1*/
    return 1; /*0x4afbb1*/
  return (*(unsigned int *)&a1->__pad_39[3] != g_DDraw_ClipRect || *(unsigned long long *)a1->DestinationCoords != qword_8A0794) /*0x4afc00*/
      && (*(unsigned int *)&a1->__pad_39[3] != a1->?->?[0] || a1->DestinationCoords[0] != a1->?->?[1]);
}
// 0x4AFC20
bool JumpjetLocomotionClass::StubReturnTrue_0(InfantryClass * aP0)
{
  if ( (uint8_t)TimerClass::Active((int)aP0->?->?) ) /*0x4afc2e*/
    return 1; /*0x4afc37*/
  return (*(uint8_t (__stdcall **)(DriveLocomotionClass *))(*(unsigned int *)aP0->LocomotionClass + 16))(aP0) /*0x4afc79*/
      && (aP0->Dest[2] != g_DDraw_ClipRect || *(unsigned long long *)aP0->HeadToCoord != qword_8A0794)
      && (*((int (**)(FootClass *))aP0->?->TechnoClass + 334))(aP0->?) > 0;
}
// 0x4AFC90
unsigned int * JumpjetLocomotionClass::GetCoordinate(unsigned int * a1, unsigned int * a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = a1->Deviation; /*0x4afc9d*/
  v3 = ((unsigned int)(a1->NoWobbles)); /*0x4afca0*/
  *a2 = IDA_LODWORD(a1->Wobbles); /*0x4afca5*/
  a2[1] = Deviation; /*0x4afca7*/
  a2[2] = v3; /*0x4afcaa*/
  return a2; /*0x4afcaf*/
}
// 0x4AFCC0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate(unsigned int * a1, unsigned int * a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(unsigned int *)&a1->__pad_39[3] == g_DDraw_ClipRect && *(unsigned long long *)a1->DestinationCoords == qword_8A0794 ) /*0x4afcde*/
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x4afd0b*/
    location = *(unsigned int *)&Owner->vtable3; /*0x4afd14*/
    v6 = *(unsigned int *)&Owner->vtable3; /*0x4afd16*/
    v7 = *(unsigned int *)&Owner->vtable2; /*0x4afd18*/
    v8 = location[2]; /*0x4afd1b*/
    *a2 = v6; /*0x4afd24*/
    a2[1] = v7; /*0x4afd26*/
    a2[2] = v8; /*0x4afd29*/
    return a2; /*0x4afd1e*/
  }
  else
  {
    v2 = a1->DestinationCoords[0]; /*0x4afcf4*/
    v3 = a1->DestinationCoords[1]; /*0x4afcf7*/
    *a2 = *(unsigned int *)&a1->__pad_39[3]; /*0x4afcfc*/
    a2[1] = v2; /*0x4afcfe*/
    a2[2] = v3; /*0x4afd01*/
    return a2; /*0x4afd04*/
  }
}
// 0x4AFD40
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
  unsigned int *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 223))(arg0->?); /*0x4afd4b*/
  if ( !(unsigned char)result ) /*0x4afd53*/
  {
    result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 224))(arg0->?); /*0x4afd5e*/
    if ( !(unsigned char)result ) /*0x4afd66*/
    {
      result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 117))(arg0->?); /*0x4afd71*/
      if ( !(unsigned char)result ) /*0x4afd79*/
      {
        result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 118))(arg0->?); /*0x4afd80*/
        if ( !(unsigned char)result ) /*0x4afd88*/
        {
          result = a1; /*0x4afd8a*/
          v5 = aP1_4; /*0x4afd8e*/
          v6 = aP3; /*0x4afd92*/
          arg0->SlopeTimer[3] = (int)a1; /*0x4afd99*/
          arg0->Dest[0] = v5; /*0x4afd9c*/
          arg0->Dest[1] = v6; /*0x4afd9f*/
          if ( result != (unsigned int *)g_DDraw_ClipRect || IDA___PAIR64__(v6, v5) != qword_8A0794 ) /*0x4afdb2*/
          {
            a1 = result; /*0x4afdbc*/
            aP1_4 = v5; /*0x4afdc4*/
            aP3 = v6; /*0x4afdce*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a1); /*0x4afdd2*/
            if ( (result[80] & 0x100) != 0 ) /*0x4afde0*/
            {
              result = (unsigned int *)(dword_8A07C4 + arg0->Dest[1]); /*0x4afdeb*/
              arg0->Dest[1] = (int)result; /*0x4afded*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4afdf0*/
}
// 0x4AFE00
int JumpjetLocomotionClass::CheckWindowsErrorWrapper(int result)
{
  FootClass *Owner; // eax
  unsigned int *vtable2; // esi
  double v3; // st7
  int result; // eax

  if ( result->Dest[2] != g_DDraw_ClipRect || *(unsigned long long *)result->HeadToCoord != qword_8A0794 ) /*0x4afe1d*/
  {
    if ( *(unsigned char *)((*((int (**)(FootClass *))result->?->TechnoClass + 33))(result->?) + 3220) ) /*0x4afe36*/
    {
      Owner = result->?; /*0x4afe40*/
      if ( !IDA_LOBYTE(Owner[1].?) ) /*0x4afe43*/
      {
        vtable2 = Owner[1].?; /*0x4afe4d*/
        if ( vtable2 ) /*0x4afe55*/
        {
          do /*0x4afe87*/
          {
            if ( !vtable2[413] ) /*0x4afe57*/
              WinAPI::Wrapper(-2147467261); /*0x4afe66*/
            (*(void (__stdcall **)(unsigned int))(*(unsigned int *)vtable2[413] + 72))(vtable2[413]); /*0x4afe74*/
            vtable2 = (unsigned int *)vtable2[434]; /*0x4afe77*/
          }
          while ( vtable2 && vtable2 != (unsigned int *)vtable2[434] ); /*0x4afe87*/
        }
      }
    }
  }
  if ( *(double *)&result->SpeedAccum >= 0.300000011920929 ) /*0x4afe97*/
    v3 = 0.300000011920929; /*0x4afe9e*/
  else
    v3 = *(double *)&result->SpeedAccum; /*0x4afe99*/
  *(double *)&result->SpeedAccum = v3; /*0x4afea4*/
  result->SlopeTimer[3] = g_DDraw_ClipRect; /*0x4afeb0*/
  result = qword_8A0794; /*0x4afeb2*/
  *(unsigned long long *)result->Dest = qword_8A0794; /*0x4afeb7*/
  return result; /*0x4afec3*/
}
// 0x4B0410
float * JumpjetLocomotionClass::ComputeAudio3DRotation(unsigned int * a1, float * a2, unsigned int * a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1->SlopeTimer[2]; /*0x4b0419*/
  if ( v3 ) /*0x4b0422*/
  {
    PreviousRamp = a1->PreviousRamp; /*0x4b042c*/
    v6 = a1->SlopeTimer[1]; /*0x4b042f*/
    if ( PreviousRamp != -1 ) /*0x4b0435*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - PreviousRamp >= v6 ) /*0x4b0441*/
        v6 = 0; /*0x4b0447*/
      else
        v6 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - PreviousRamp; /*0x4b0443*/
    }
    v4 = (double)(v3 - v6) / (double)a1->SlopeTimer[2]; /*0x4b0453*/
  }
  else
  {
    v4 = 1.0; /*0x4b0424*/
  }
  if ( v4 != 1.0 || (Owner = a1->?, fabs(*(float *)&Owner->auxParticles1) >= 0.005) || fabs(*(float *)&Owner->auxParticles1) >= 0.005 ) /*0x4b0493*/
  {
    if ( a3 ) /*0x4b0497*/
      *a3 = -1; /*0x4b0499*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)a1, v9, a3), 0x30u); /*0x4b04b8*/
  return a2; /*0x4b04ba*/
}
// 0x4B04D0
int JumpjetLocomotionClass::DispatchVirtualCall(int * a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *(unsigned int *)a1->LocomotionClass; /*0x4b04d9*/
  v2 = (*((int (**)(FootClass *))a1->?->TechnoClass + 111))(a1->?); /*0x4b04dd*/
  return (*(int (__stdcall **)(DriveLocomotionClass *, unsigned int))(v1 + 124))(a1, *(uint8_t *)(v2 + 284)); /*0x4b04f0*/
}
// 0x4B0EF0
char JumpjetLocomotionClass::UpdateFacingDirection(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x4b0f0f*/
}
// 0x4B4820
int JumpjetLocomotionClass::StubReturnTwo(int a1)
{
  return 2; /*0x4b4825*/
}
// 0x4B4870
int JumpjetLocomotionClass::StubReturnZero_1(int a1)
{
  return 0; /*0x4b4872*/
}
// 0x4B4880
int JumpjetLocomotionClass::DispatchCheckState(TunnelLocomotionClass * aP0)
{
// 0x55abb0
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)aP0); /*0x4b488a*/
}
// 0x4B48D0
char JumpjetLocomotionClass::MoveToChecked(DriveLocomotionClass * aP0, int a2)
{
  char result; // al

  result = (unsigned char)aP0 + 60; /*0x4b48de*/
  if ( aP0->Dest[2] != g_DDraw_ClipRect || *(unsigned long long *)aP0->HeadToCoord != qword_8A0794 ) /*0x4b48f0*/
// 0x4b0ad0
    return JumpjetLocomotion::MoveTo((int)aP0 - 4, &aP0->Dest[2], a2); /*0x4b4908*/
  return result; /*0x4b490d*/
}
// 0x4B4BE0
int JumpjetLocomotionClass::SetByteField(int a1)
{
  a1->IsTurretLockedDown = 0; /*0x4b4be4*/
  return (int)a1->LocomotionClass; /*0x4b4be8*/
}
// 0x4B4BF0
int JumpjetLocomotionClass::SetByteField_0(int a1)
{
  a1->IsTurretLockedDown = 1; /*0x4b4bf4*/
  return (int)a1->LocomotionClass; /*0x4b4bf8*/
}
// 0x4B4C00
int JumpjetLocomotionClass::GetField_0x54(int a1)
{
  return a1->MovementSpeed[1]; /*0x4b4c07*/
}
// 0x4B4C10
int JumpjetLocomotionClass::GetField_0x58(int a1)
{
  return a1->TrackNumber; /*0x4b4c17*/
}
// 0x4B4C20
int JumpjetLocomotionClass::GetField_0x48(int a1)
{
  return a1->HeadToCoord[2]; /*0x4b4c27*/
}
// 0x4B4C60
int JumpjetLocomotionClass::MissionStub6(int a1)
{
  return 0; /*0x4b4c62*/
}
// 0x4B4C70
void JumpjetLocomotionClass::Stub3(int a1)
{
  ; /*0x4b4c70*/
}
// 0x4B4C80
char JumpjetLocomotionClass::MissionStub7(int a1)
{
  return 0; /*0x4b4c82*/
}
// 0x4B4C90
void JumpjetLocomotionClass::Stub4(int a1)
{
  ; /*0x4b4c90*/
}
// 0x4B4CA0
void JumpjetLocomotionClass::Stub5(int a1)
{
  ; /*0x4b4ca0*/
}
// 0x4B4CD0
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer(int a1)
{
  return *(unsigned int *)(a1 + 80) != 0; /*0x4b4cde*/
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
  return 1; /*0x4b5b32*/
}
// 0x4B5B40
unsigned int * JumpjetLocomotionClass::GetSpeedCoordinate(unsigned int * a1, unsigned int * a2)
{
  float Climb; // edx
  float Crash; // eax

  Climb = a1->Climb; /*0x4b5b4d*/
  Crash = a1->Crash; /*0x4b5b50*/
  *a2 = a1->Speed; /*0x4b5b55*/
  *((float *)a2 + 1) = Climb; /*0x4b5b57*/
  *((float *)a2 + 2) = Crash; /*0x4b5b5a*/
  return a2; /*0x4b5b5f*/
}
// 0x4B63A0
void JumpjetLocomotionClass::Stub6(int a1)
{
  ; /*0x4b63a0*/
}
// 0x4B63B0
int JumpjetLocomotionClass::StubReturnZero_3(int a1, int a2)
{
  if ( !a2 ) /*0x4b63b6*/
    return -2147467261; /*0x4b63b8*/
  if ( a1->? ) /*0x4b63c4*/
    return -2147467259; /*0x4b63eb*/
  a1->? = a2; /*0x4b63d2*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x4b63d8*/
  return 0; /*0x4b63bd*/
}
// 0x4B6400
int JumpjetLocomotionClass::StubReturnZero_4(int a1, unsigned int * a2)
{
  int RefCount; // eax

  if ( !a2 ) /*0x4b6406*/
    return -2147467261; /*0x4b6408*/
  RefCount = a1->?; /*0x4b6414*/
  if ( !RefCount ) /*0x4b6419*/
    return 1; /*0x4b6429*/
  *a2 = RefCount; /*0x4b641b*/
  a1->? = 0; /*0x4b641d*/
  return 0; /*0x4b640d*/
}
// 0x4B6440
bool JumpjetLocomotionClass::CheckBaseClassState(int a1)
{
  return !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) && a1->?; /*0x4b645c*/
}
// 0x4B64D0
int JumpjetLocomotionClass::SmallStub_4B64D0(int a1)
{
  return 3; /*0x4b64d5*/
}
// 0x4B64E0
int JumpjetLocomotionClass::LoadLocomotionFromStream_0(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  int *p_RefCount; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x4b64e1*/
  if ( !a2 ) /*0x4b64e8*/
    return -2147467261; /*0x4b64f1*/
  p_RefCount = &a1->?; /*0x4b64fb*/
  if ( a1->RefCount ) /*0x4b64f8*/
  {
    a1 = 0; /*0x4b6504*/
    v5 = StreamClass::Set2((StreamClass *)&a1, p_RefCount); /*0x4b6515*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x4b6523*/
      WinAPI::Wrapper(v5); /*0x4b6526*/
    if ( !a1 ) /*0x4b6531*/
      return -2147467259; /*0x4b653a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x4b6544*/
    if ( a1 ) /*0x4b654c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x4b6555*/
      return v6; /*0x4b655c*/
    }
  }
  else
  {
    a2 = 0; /*0x4b6562*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x4b656c*/
      return -2147467259; /*0x4b656c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x4b657d*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x4b6581*/
    {
      v9 = a1; /*0x4b6595*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x4b659d*/
      v8 = v9; /*0x4b65a2*/
      a2 = v9->LocomotionClass; /*0x4b65a5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x4b6587*/
      v8 = 0; /*0x4b658c*/
      a2 = 0; /*0x4b658e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4b65b3*/
      WinAPI::Wrapper(v7); /*0x4b65b6*/
    if ( !v8 ) /*0x4b65c1*/
      return -2147467259; /*0x4b65ca*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x4b65d4*/
    if ( a2 ) /*0x4b65dc*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x4b65e1*/
  }
  return v6; /*0x4b64ea*/
}
// 0x4B65F0
BOOL JumpjetLocomotionClass::ShortFunc_4B65F0(DropPodLocomotionClass * aP0)
{
  return aP0->__pad_18[0] != 0; /*0x4b65fe*/
}
// 0x4B6610
int JumpjetLocomotionClass::Thunk_VtableDispatch4(int a1)
{
  return (*(int (__stdcall **)(LocomotionClass *))(*(unsigned int *)a1->ILocomotion + 16))(a1); /*0x4b661a*/
}
// 0x4B6620
void JumpjetLocomotionClass::Stub7(int a1, int a2)
{
  ; /*0x4b6620*/
}
// 0x4B6630
char JumpjetLocomotionClass::MissionStub8(int a1, int a2, int a3, int a4)
{
  return 0; /*0x4b6632*/
}
// 0x4B6640
char JumpjetLocomotionClass::MissionStub9(int a1)
{
  return 0; /*0x4b6642*/
}
// 0x4B6650
void JumpjetLocomotionClass::Stub8(int a1)
{
  ; /*0x4b6650*/
}
// 0x4B6660
void JumpjetLocomotionClass::Stub9(int a1)
{
  ; /*0x4b6660*/
}
// 0x4B6670
int JumpjetLocomotionClass::CheckState3(int a1)
{
  return -1; /*0x4b6673*/
}
// 0x4B6680
int JumpjetLocomotionClass::CheckState4(int a1)
{
  return -1; /*0x4b6683*/
}
// 0x4B6690
int JumpjetLocomotionClass::CheckState5(int a1)
{
  return -1; /*0x4b6693*/
}
// 0x4B66C0
BOOL JumpjetLocomotionClass::ShortFunc_4B66C0(int a1)
{
  return *(unsigned int *)(a1 + 20) != 0; /*0x4b66ce*/
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
  int v2; // esi

  v2 = StreamClass::ResetPosition((LocomotionClass *)aP0, (int)a1); /*0x4cca32*/
  if ( !v2 ) /*0x4cca36*/
  {
    if ( a1 && (*(int (**)(unsigned int *))(*a1 + 44))(a1) == 2 && *(unsigned char *)(a1[433] + 3597) ) /*0x4cca4e*/
    {
      aP0->u8_14 = 1; /*0x4cca5b*/
      return 0; /*0x4cca61*/
    }
    IDA_LOBYTE(aP0->?) = 0; /*0x4cca64*/
  }
  return v2; /*0x4cca5a*/
}
// 0x4CCA90
BOOL JumpjetLocomotionClass::ComputeFloatExpression(int a1)
{
  return IDA_LOBYTE(a1->Wobbles) || a1->?->? > 0.0; /*0x4ccab3*/
}
// 0x4CCAC0
bool JumpjetLocomotionClass::ComputeFloatExpression_0(int a1)
{
  return *(double *)a1->CurrentSpeed != 0.0; /*0x4ccad6*/
}
// 0x4CCAE0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x4ccae9*/
  {
    result = a2; /*0x4ccaf0*/
    Speed = a1->Speed; /*0x4ccaf7*/
    Climb = a1->Climb; /*0x4ccafa*/
    v5 = (float *)a2; /*0x4ccafd*/
    *a2 = a1->TurnRate; /*0x4ccaff*/
  }
  else
  {
    result = a2; /*0x4ccb0c*/
    Speed = dword_8B3C7C; /*0x4ccb16*/
    Climb = *(float *)&dword_8B3C80; /*0x4ccb1c*/
    v5 = (float *)a2; /*0x4ccb22*/
    *a2 = dword_8B3C78; /*0x4ccb24*/
  }
  *((unsigned int *)v5 + 1) = Speed; /*0x4ccb01*/
  v5[2] = Climb; /*0x4ccb04*/
  return result; /*0x4ccb07*/
}
// 0x4CCB40
char JumpjetLocomotionClass::ProcessLocomotionStep(int a1)
{
  int v1; // eax
  FootClass *Owner; // ecx
  char result; // al
  FootClass *v4; // ecx

  if ( !a1->IsLanding && !a1->IsTakingOff && *(double *)a1->TargetSpeed >= 1.0 && !*(unsigned int *)&a1->HasMoveOrder ) /*0x4ccb65*/
  {
    v1 = (*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?); /*0x4ccb71*/
    *(unsigned int *)&a1->HasMoveOrder = (*(int (**)(int))(*(unsigned int *)v1 + 188))(v1); /*0x4ccb81*/
  }
  Owner = a1->?; /*0x4ccb84*/
  if ( *(unsigned short *)&Owner->reloadTimer > 0 /*0x4ccb9e*/
    && !a1->IsLanding
    && !a1->IsTakingOff
    && (*((uint8_t (**)(FootClass *))Owner->TechnoClass + 128))(Owner) )
  {
    (*((void (**)(FootClass *))a1->?->TechnoClass + 123))(a1->?); /*0x4ccbad*/
  }
  JumpjetLocomotionClass::ProcessRotation((JumpjetLocomotionClass *)((char *)a1 - 4)); /*0x4ccbb8*/
  DamageArea::ApplyScatter((DamageArea *)a1 - 1); /*0x4ccbbf*/
  result = (*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 96))(a1); /*0x4ccbc7*/
  if ( result ) /*0x4ccbcc*/
  {
    v4 = a1->?; /*0x4ccbd4*/
    if ( v4->isAliveFlag ) /*0x4ccbd7*/
    {
      if ( v4->? > 0 /*0x4ccc2d*/
        && (*(unsigned int *)&a1->AirportBound != dword_8B3C78
         || a1->MovingDestination[0] != dword_8B3C7C
         || a1->MovingDestination[1] != dword_8B3C80)
        && !a1->IsLanding
        && !a1->IsTakingOff
        && (*((int (**)(FootClass *))v4->TechnoClass + 114))(v4) > 0 )
      {
        LandFootClassAtPosition( /*0x4ccc49*/
          (int)a1 - 4,
          a1->MovingDestination[1],
          1,
          *(float *)&a1->AirportBound,
          a1->MovingDestination[0],
          a1->MovingDestination[1]);
      }
      if ( a1->?->? > 0 ) /*0x4ccc56*/
        FootClass::ProcessDeployMission((FootClass *)((char *)a1 - 4)); /*0x4ccc5a*/
      JumpjetLocomotionClass::IsMapCoordVisible((JumpjetLocomotionClass *)((char *)a1 - 4)); /*0x4ccc61*/
      return (*(char (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1); /*0x4ccc69*/
    }
    else
    {
      return 0; /*0x4ccbe1*/
    }
  }
  return result; /*0x4ccbce*/
}
// 0x4CD510
char JumpjetLocomotionClass::IsMapCoordVisible()
{
  int *location; // eax
  char v3; // al
  FootClass *LinkedTo; // ecx
  LinkedList *i; // eax
  unsigned int *v6; // esi
  int v7; // eax
  TeamClass *team; // eax
  unsigned int v10[3]; // [esp+4h] [ebp-Ch] BYREF

  location = this->LinkedTo->?; /*0x4cd519*/
  v10[0] = *location; /*0x4cd520*/
  v10[1] = location[1]; /*0x4cd52c*/
  v10[2] = location[2]; /*0x4cd538*/
  v3 = IsCoordVisibleMap((ObjectClass *)&stru_87F5F0.__pad_58[416], v10); /*0x4cd53c*/
  LinkedTo = *(unsigned int *)&this->LinkedTo; /*0x4cd541*/
  if ( v3 ) /*0x4cd546*/
  {
    LinkedTo->? = 1; /*0x4cd5f0*/
    return 0; /*0x4cd5f0*/
  }
  if ( (*((int (**)(FootClass *))LinkedTo->TechnoClass + 97))(LinkedTo) != 4 ) /*0x4cd557*/
    return 0; /*0x4cd5f7*/
  for ( i = (LinkedList *)this->?; i[23].Tail[0]; i = (LinkedList *)this->? ) /*0x4cd566*/
  {
    v6 = (unsigned int *)LinkedList::Pop(i + 23); /*0x4cd57c*/
    if ( sub_413CD0((int)v6) ) /*0x4cd580*/
      *(unsigned char *)(v6[135] + 505) = 1; /*0x4cd58f*/
    v7 = v6[373]; /*0x4cd595*/
    if ( v7 ) /*0x4cd59d*/
      *(unsigned char *)(v7 + 130) = 1; /*0x4cd59f*/
    if ( v6 ) /*0x4cd5a7*/
      (*(void (**)(unsigned int *, int))(*v6 + 32))(v6, 1); /*0x4cd5ae*/
  }
  team = this->?->team; /*0x4cd5c2*/
  if ( team ) /*0x4cd5ca*/
    team->unknown82 = 1; /*0x4cd5cc*/
  (*((void (**)(FootClass *))this->?->TechnoClass + 232))(this->?); /*0x4cd5d7*/
  (*((void (**)(FootClass *))this->?->TechnoClass + 62))(this->?); /*0x4cd5e2*/
  return 1; /*0x4cd5eb*/
}
// 0x4CF830
unsigned int * JumpjetLocomotionClass::CalculateBobOffset(int a1, unsigned int * a2)
{
  double v2; // st7
  FlyLocomotionClass *v3; // edi
  int v4; // ebp
  FlyLocomotionClass *v5; // ecx
  FootClass *Owner; // eax
  int v7; // esi
  FlyLocomotionClass *v8; // ebx
  int v9; // esi
  int v10; // eax
  unsigned int *v11; // esi
  FlyLocomotionClass *v12; // eax
  bool v13; // zf
  double v15; // [esp+4h] [ebp-18h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = a1; /*0x4cf834*/
  v4 = 0; /*0x4cf838*/
  v5 = 0; /*0x4cf83a*/
  Owner = a1->?; /*0x4cf83c*/
  a1 = 0; /*0x4cf83f*/
  if ( Owner ) /*0x4cf845*/
  {
    v7 = (*(int (__stdcall **)(FootClass *, void *, int *))Owner->TechnoClass)(Owner, &unk_822410, &v16); /*0x4cf856*/
    if ( v7 >= 0 ) /*0x4cf85a*/
    {
      v8 = (FlyLocomotionClass *)v16; /*0x4cf86e*/
      Release3COM((ObjectClass *)&a1); /*0x4cf876*/
      v5 = v8; /*0x4cf87b*/
      a1 = v8; /*0x4cf87e*/
    }
    else
    {
      Release3COM((ObjectClass *)&a1); /*0x4cf860*/
      v5 = 0; /*0x4cf865*/
      a1 = 0; /*0x4cf867*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x4cf88c*/
      WinAPI::Wrapper(v7); /*0x4cf88f*/
  }
  v9 = 0; /*0x4cf898*/
  if ( v5 ) /*0x4cf89c*/
    v9 = (*(int (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)v5->LocomotionClass + 12))(v5); /*0x4cf8a4*/
  if ( !*(unsigned char *)((*((int (**)(FootClass *))v3->?->TechnoClass + 33))(v3->?) + 3221) /*0x4cf8d6*/
    && !v3->IsLanding
    && !v3->IsTakingOff
    && (*((int (**)(FootClass *))v3->?->TechnoClass + 114))(v3->?) > v9 )
  {
    v16 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) % 20; /*0x4cf8e8*/
    __asm /*0x4cf8ec*/
    {
      fild [esp+18h+var_4]
      fmul ds:dbl_7E8AF0
      fstp [esp+18h+var_1C+4]; double
    }
    Math::SinCos(v15); /*0x4cf8f9*/
    __asm { fmul ds:dbl_7E48F0 } /*0x4cf8fe*/
    __asm { fadd ds:dbl_7E1738 }
    IDA_LOWORD(v10) = Math::RoundToInt(v2); /*0x4cf90d*/
    v4 = v10; /*0x4cf912*/
  }
  v11 = a2; /*0x4cf914*/
  *a2 = 0; /*0x4cf91a*/
  v12 = a1; /*0x4cf91c*/
  v13 = a1 == 0; /*0x4cf920*/
  v11[1] = v4; /*0x4cf922*/
  if ( !v13 ) /*0x4cf925*/
    (*(void (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)v12->LocomotionClass + 8))(v12); /*0x4cf92a*/
  return v11; /*0x4cf92f*/
}
// 0x4CF940
unsigned int * JumpjetLocomotionClass::ShortFunc_4CF940(int a1, unsigned int * a2)
{
  *a2 = 0; /*0x4cf948*/
  a2[1] = 0; /*0x4cf94a*/
  return a2; /*0x4cf94d*/
}
// 0x4CFB00
float * JumpjetLocomotionClass::ComputeVoxelMatrix(int a1, float * a2, unsigned int * a3)
{
  int *location; // eax
  int slopeIndex; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  unsigned int v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  location = a1->?->?; /*0x4cfb0e*/
  v8[0] = *location; /*0x4cfb15*/
  v8[1] = location[1]; /*0x4cfb21*/
  v8[2] = location[2]; /*0x4cfb2d*/
  slopeIndex = (uint8_t)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x4cfb43*/
  if ( *(unsigned char *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 3221) ) /*0x4cfb4b*/
    slopeIndex = 0; /*0x4cfb55*/
  qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x4cfb6d*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)a1->?->?, &v7) >> 10) + 1) >> 1) /*0x4cfba3*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x4cfba6*/
  if ( a3 && *a3 != -1 ) /*0x4cfbbb*/
  {
    *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x4cfbc5*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)a1->?->?, &v7) >> 10) + 1) >> 1) & 0x1F; /*0x4cfbe9*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x4cfbfd*/
  return a2; /*0x4cfbff*/
}
// 0x4CFC10
char JumpjetLocomotionClass::SynchronizeFacingDirection(int a1, int a2)
{
// 0x4c9300
  return FacingClass::Set_SyncLog((char *)a1->?->?, &a2); /*0x4cfc2f*/
}
// 0x4CFD90
char JumpjetLocomotionClass::ShortFunc_4CFD90(int a1)
{
// 0x55a930
  return StreamClass::GetDirty((IUnknown *)a1); /*0x4cfd9a*/
}
// 0x4CFDA0
bool JumpjetLocomotionClass::DispatchVirtualCall_1(int a1)
{
  return *(unsigned char *)((*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?) + 3367) == 0; /*0x4cfdbe*/
}
// 0x4CFE20
long long JumpjetLocomotionClass::ComputeFloatExpression_1(int a1)
{
  int v1; // eax
  int64_t result; // rax
  int v3; // kr00_4

  v1 = (*((int (**)(FootClass *))a1->?->TechnoClass + 33))(a1->?); /*0x4cfe2a*/
  v3 = Math::RoundToInt((double)*(int *)(v1 + 1656) * *(double *)a1->CurrentSpeed); /*0x4cfe39*/
  IDA_WORD2(result) = IDA_HIWORD(v3); /*0x4cfe39*/
  IDA_LOWORD(result) = v3; /*0x4cfe39*/
  return result; /*0x4cfe3e*/
}
// 0x4CFE50
int JumpjetLocomotionClass::StubReturnZero_8(unsigned char * a1)
{
  if ( a1->IsLanding ) /*0x4cfe54*/
    return 1; /*0x4cfe5b*/
  if ( a1->IsTakingOff ) /*0x4cfe63*/
    return 0; /*0x4cfe6a*/
  return 3 /*0x4cfe60*/
       - ((*(uint8_t (__stdcall **)(FlyLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) != 0);
}
// 0x4D0400
BOOL JumpjetLocomotionClass::CheckWindowsErrorWrapper_0(int a2)
{
  if ( a2 ) /*0x4d0409*/
    WinAPI::Wrapper(-2147467261); /*0x4d0410*/
  return this->LocomotionClass[0] == 0; /*0x4d041e*/
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
  FootClass *Owner; // ecx
  float *v4; // esi
  float v6[12]; // [esp+8h] [ebp-30h] BYREF

  Owner = a1->?; /*0x5142a7*/
  if ( fabs(*(float *)&Owner->auxParticles1) >= 0.005 || fabs(*(float *)&Owner->auxParticles1) >= 0.005 ) /*0x5142d8*/
  {
    if ( a3 ) /*0x5142dc*/
      *a3 = -1; /*0x5142de*/
  }
  v4 = Audio3D::ComputeRotation((IUnknown *)a1, v6, a3); /*0x5142f0*/
  qmemcpy(a2, v4, 0x30u); /*0x5142fd*/
  return a2; /*0x5142ff*/
}
// 0x514C30
BOOL JumpjetLocomotionClass::HasScoreDisplayChanged(unsigned int * a1)
{
  return a1->? != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514c6a*/
      || a1->TurnRate != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
      || a1->Speed != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444)
      || IDA_LODWORD(a1->Climb) != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436)
      || IDA_LODWORD(a1->Crash) != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
      || a1->Height != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444);
}
// 0x514C80
BOOL JumpjetLocomotionClass::ComputeFloatExpression_2(int a1)
{
  return (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) /*0x514ca4*/
      && *(double *)&a1->LocomotionFacing[5] != 0.0;
}
// 0x514CB0
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514CB0(unsigned int * a1, unsigned int * a2)
{
  int v2; // ecx
  int v3; // edx
  int TurnRate; // edx
  int Speed; // eax

  if ( a1->? == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514cd9*/
    && (v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440), a1->TurnRate == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440))
    && (v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444), a1->Speed == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444)) )
  {
    *a2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x514cff*/
    a2[1] = v2; /*0x514d01*/
    a2[2] = v3; /*0x514d04*/
    return a2; /*0x514cf9*/
  }
  else
  {
    TurnRate = a1->TurnRate; /*0x514ce2*/
    Speed = a1->Speed; /*0x514ce5*/
    *a2 = a1->?; /*0x514cea*/
    a2[1] = TurnRate; /*0x514cec*/
    a2[2] = Speed; /*0x514cef*/
    return a2; /*0x514cf2*/
  }
}
// 0x514D10
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_514D10(unsigned int * a1, unsigned int * a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( IDA_LODWORD(a1->Climb) == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x514d3b*/
    && IDA_LODWORD(a1->Crash) == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
    && a1->Height == *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444) )
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x514d5b*/
    location = *(unsigned int *)&Owner->vtable3; /*0x514d64*/
    v7 = *(unsigned int *)&Owner->vtable3; /*0x514d66*/
    v8 = *(unsigned int *)&Owner->vtable2; /*0x514d68*/
    v9 = location[2]; /*0x514d6b*/
    *a2 = v7; /*0x514d74*/
    a2[1] = v8; /*0x514d76*/
    a2[2] = v9; /*0x514d79*/
    return a2; /*0x514d6e*/
  }
  else
  {
    Crash = a1->Crash; /*0x514d44*/
    Height = a1->Height; /*0x514d47*/
    *a2 = IDA_LODWORD(a1->Climb); /*0x514d4c*/
    *((float *)a2 + 1) = Crash; /*0x514d4e*/
    a2[2] = Height; /*0x514d51*/
    return a2; /*0x514d54*/
  }
}
// 0x516320
unsigned int * JumpjetLocomotionClass::HasScoreDisplayChanged_516320(unsigned int * a1)
{
  unsigned int *result; // eax

  result = a1->LocomotionClass; /*0x516320*/
  if ( a1->? != a1->Dest[2] || a1->Dest[0] != a1->HeadToCoord[0] || a1->Dest[1] != a1->HeadToCoord[1] ) /*0x516340*/
  {
    a1->RefCount = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436); /*0x516348*/
    a1->Dest[0] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440); /*0x516351*/
    a1->Dest[1] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444); /*0x51635a*/
    result = &a1->Owner->TechnoClass; /*0x51635d*/
    result[376] = -1; /*0x516360*/
  }
  return result; /*0x51636a*/
}
// 0x516370
char JumpjetLocomotionClass::UpdateFacingDirection_0(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x51638f*/
}
// 0x516CA0
char JumpjetLocomotionClass::IsBridgeBlocking(int a1)
{
  int Member; // eax
  int *location; // ecx
  CellClass *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // edx
  int v7; // eax
  int v8; // ecx
  int16_t v9; // ax
  int16_t v10; // cx
  int16_t v11; // [esp+4h] [ebp-18h]
  unsigned int v12[2]; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+18h] [ebp-4h]

  if ( (uint8_t)Team::AllMembersValid((Team *)a1->?) ) /*0x516cab*/
  {
    Member = Team::GetMember((Team *)a1->?, 0); /*0x516cb9*/
    if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x516cc8*/
    {
      if ( *(unsigned char *)(*(unsigned int *)(Team::GetMember((Team *)a1->?, 0) + 1312) + 5821) ) /*0x516cda*/
        return 0; /*0x516cea*/
    }
  }
  location = a1->?->?; /*0x516cf0*/
  v12[0] = *location; /*0x516cf8*/
  v12[1] = location[1]; /*0x516d04*/
  v13 = location[2]; /*0x516d0b*/
  v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v12); /*0x516d14*/
  v5 = Cell::IsBridge((Cell *)v4); /*0x516d1b*/
  if ( v5 && *(unsigned char *)(v5[328] + 5821) ) /*0x516d2e*/
  {
    v6 = v5 + 39; /*0x516d41*/
    v7 = v5[39]; /*0x516d43*/
    v8 = v6[1]; /*0x516d45*/
    v13 = v6[2]; /*0x516d4b*/
    IDA_LOWORD(v12[0]) = v7 / 256; /*0x516d5b*/
    IDA_HIWORD(v12[0]) = v8 / 256; /*0x516d6e*/
    v11 = a1->?->?[0] / 256; /*0x516d99*/
    v9 = v11 - IDA_LOWORD(v12[0]); /*0x516db9*/
    v10 = a1->?->?[1] / 256 - IDA_HIWORD(v12[0]); /*0x516dbf*/
    if ( v11 == IDA_LOWORD(v12[0]) ) /*0x516dc4*/
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
// 0x516E10
char JumpjetLocomotionClass::TryMoveToAdjacentCell(unsigned int a1, unsigned int a2)
{
  HoverLocomotionClass *v2; // esi
  unsigned short *v3; // eax
  FootClass *Owner; // edi
  unsigned int v5; // ecx
  int16_t v6; // dx
  int (**vtable0)(FootClass *, void *, int, int, unsigned int, int); // ebx
  void *v8; // eax
  int v9; // ecx
  int GroundHeight; // eax
  int *location; // ecx
  unsigned char v13[4]; // [esp+20h] [ebp-10h] BYREF
  int v14; // [esp+24h] [ebp-Ch]
  int v15; // [esp+28h] [ebp-8h]

  v2 = a1; /*0x516e15*/
  if ( !(*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 96))(a1) ) /*0x516e1d*/
    return 0; /*0x516e1d*/
  if ( IDA_LOBYTE(v2->HoverLocomotionClass_field_6C) ) /*0x516e28*/
    return 0; /*0x516e28*/
  v3 = (unsigned short *)(*((int (**)(FootClass *, unsigned char *))v2->?->TechnoClass + 110))(v2->?, v13); /*0x516e3d*/
  Owner = *(unsigned int *)&v2->q008; /*0x516e46*/
  v5 = (((a2 >> 12) + 1) >> 1) & 7; /*0x516e57*/
  v6 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + *v3; /*0x516e5e*/
  IDA_LOWORD(v5) = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x516e6d*/
  IDA_LOWORD(a2) = v6; /*0x516e71*/
  IDA_HIWORD(a2) = v3[1] + v5; /*0x516e7f*/
  a1 = (HoverLocomotionClass *)a2; /*0x516e88*/
  vtable0 = (int (**)(FootClass *, void *, int, int, unsigned int, int))Owner->TechnoClass; /*0x516e8c*/
  v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a1); /*0x516e93*/
  if ( vtable0[107](Owner, v8, -1, -1, 0, 1) ) /*0x516e9b*/
    return 0; /*0x516fb5*/
  IDA_LOBYTE(v2->HoverLocomotionClass_field_6C) = 1; /*0x516ea9*/
  if ( (*(uint8_t (__stdcall **)(HoverLocomotionClass *))(*(unsigned int *)v2->LocomotionClass + 16))(v2) ) /*0x516eb0*/
  {
    v2->?->pathDirections[0] = -1; /*0x516ec1*/
    if ( v2->Dest[2] != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1436) /*0x516eeb*/
      || v2->HeadToCoord[0] != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1440)
      || v2->HeadToCoord[1] != *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1444) )
    {
      (*((void (**)(FootClass *, int *))v2->?->TechnoClass + 61))(v2->?, &v2->Dest[2]); /*0x516ef3*/
    }
    v9 = IDA_SHIWORD(a1) << 8; /*0x516f0d*/
    v2->Dest[2] = ((int16_t)a1 << 8) + 128; /*0x516f10*/
    v2->HeadToCoord[0] = v9 + 128; /*0x516f1b*/
    v2->HeadToCoord[1] = 0; /*0x516f23*/
    GroundHeight = Cell::GetGroundHeight(&v2->Dest[2]); /*0x516f26*/
    v2->HeadToCoord[1] = GroundHeight; /*0x516f2b*/
    location = v2->?->?; /*0x516f31*/
    v14 = *location; /*0x516f39*/
    v15 = location[1]; /*0x516f40*/
    if ( location[2] >= GroundHeight + 2 * *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1500) + *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1500) ) /*0x516f54*/
      v2->HeadToCoord[1] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 1488) + GroundHeight; /*0x516f5e*/
    (*((void (**)(FootClass *, int *))v2->?->TechnoClass + 60))(v2->?, &v2->Dest[2]); /*0x516f67*/
    return 1; /*0x516f6d*/
  }
  else
  {
    (*(void (__stdcall **)(HoverLocomotionClass *, int, int, unsigned int))(*(unsigned int *)v2->LocomotionClass + 68))( /*0x516fa5*/
      v2,
      ((int16_t)a1 << 8) + 128,
      (IDA_SHIWORD(a1) << 8) + 128,
      0);
    return 1; /*0x516fa8*/
  }
}
// 0x516FC0
char JumpjetLocomotionClass::RandomizeLocomotionParam(HoverLocomotionClass * aP0, HoverLocomotionClass * aP1)
{
  if ( !(*(uint8_t (__stdcall **)(HoverLocomotionClass *, int))(*(unsigned int *)aP0->LocomotionClass + 104))( /*0x516fcd*/
          aP0,
          aP1) )
    return 0; /*0x517017*/
  IDA_LOBYTE(aP0->CurrentWobbles[1]) = 1; /*0x516fd4*/
  *(unsigned int *)&aP0->HoverLocomotionClass_field_bool_68 = Random::Range( /*0x516fed*/
                                                           (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                                           20,
                                                           30);
  if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 50 ) /*0x517007*/
    *(unsigned int *)&aP0->HoverLocomotionClass_field_bool_68 = -*(unsigned int *)&aP0->HoverLocomotionClass_field_bool_68; /*0x51700e*/
  return 1; /*0x517013*/
}
// 0x517100
int JumpjetLocomotionClass::SmallStub_517100(int a1)
{
  return 2; /*0x517105*/
}
// 0x5171C0
int JumpjetLocomotionClass::DispatchVirtualCall_3(unsigned int * a1, int a2)
{
  int result; // eax
  unsigned int *v3; // eax
  FootClass *Owner; // ecx
  unsigned int v5[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5171c0*/
  if ( !a2 ) /*0x5171c9*/
  {
    v3 = (unsigned int *)(*(int (__stdcall **)(HoverLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))( /*0x5171d8*/
                     a1,
                     v6);
    v5[0] = *v3; /*0x5171dd*/
    v5[1] = v3[1]; /*0x5171e4*/
    Owner = *(unsigned int *)&a1->Owner; /*0x5171eb*/
    v5[2] = v3[2]; /*0x5171ee*/
    return (*((int (**)(FootClass *, unsigned int *))Owner->TechnoClass + 61))(Owner, v5); /*0x5171f9*/
  }
  return result; /*0x517200*/
}
// 0x517210
bool JumpjetLocomotionClass::IsPositionWithinThreshold(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  unsigned char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(HoverLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))(a1, v9); /*0x517223*/
  v5 = v4[2]; /*0x51722b*/
  v6 = *v4; /*0x517257*/
  v7 = v4[1] / 256; /*0x51726d*/
  return (uint16_t)(v6 / 256) == (uint16_t)(a2 / 256) /*0x517291*/
      && (unsigned short)v7 == (uint16_t)(a3 / 256)
      && (int)abs32(v5 - a4) <= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 1500);
}
// 0x54AD30
int JumpjetLocomotionClass::InitMovementParams(int a1, int a2)
{
  int v2; // ebx
  JumpjetLocomotionClass *v3; // ebp
  int v4; // eax
  FrameSnapshot v6[3]; // [esp+10h] [ebp-18h] BYREF

  v2 = a2; /*0x54ad34*/
  v3 = a1; /*0x54ad39*/
  v3->TurnRate = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)a2 + 132))(a2) + 3440); /*0x54ad4f*/
  v3->Speed = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3444); /*0x54ad64*/
  v3->Climb = *(float *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3448); /*0x54ad77*/
  v3->Crash = *(float *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3452); /*0x54ad8a*/
  v4 = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3456); /*0x54ad9b*/
  if ( v4 <= 2 * dword_ABC5E8 ) /*0x54ada5*/
    v4 = 2 * dword_ABC5E8; /*0x54ada7*/
  v3->Height = v4; /*0x54ada9*/
  v3->Accel = *(float *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3460); /*0x54adbe*/
  v3->Wobbles = *(float *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3464); /*0x54add1*/
  v3->Deviation = *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3472); /*0x54ade4*/
  v3->NoWobbles = *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v2 + 132))(v2) + 3468); /*0x54adf5*/
  FrameSnapshot::InitMax(v6, v3->TurnRate); /*0x54ae00*/
  qmemcpy(v3->__pad_50, v6, 0x18u); /*0x54ae13*/
  IDA_LOWORD(a1) = 0x4000; /*0x54ae21*/
  FacingClass::Update(v3->__pad_50, &a1); /*0x54ae26*/
  IDA_LOWORD(a1) = 0x4000; /*0x54ae33*/
  FacingClass::Set_SyncLog(v3->__pad_50, &a1); /*0x54ae38*/
// 0x55a710
  return StreamClass::ResetPosition((LocomotionClass *)v3, v2); /*0x54ae44*/
}
// 0x54AE50
char JumpjetLocomotionClass::SmallStub_54AE50(int a1)
{
  return a1->DestinationCoords[2]; /*0x54ae57*/
}
// 0x54AE60
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_0(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int v3; // edx
  int v4; // esi
  unsigned int *v5; // edi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x54ae69*/
  {
    result = a2; /*0x54ae70*/
    v3 = a1->DestinationCoords[0]; /*0x54ae77*/
    v4 = a1->DestinationCoords[1]; /*0x54ae7a*/
    v5 = a2; /*0x54ae7d*/
    *a2 = *(unsigned int *)&a1->__pad_39[3]; /*0x54ae7f*/
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
// 0x54B6E0
char JumpjetLocomotionClass::SynchronizeFacingDirection_0(int a1, int a2)
{
// 0x4c9300
  return FacingClass::Set_SyncLog((char *)a1->?->?, &a2); /*0x54b6ff*/
}
// 0x54B710
int JumpjetLocomotionClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x54b716*/
    return -2147467261; /*0x54b718*/
  *(IID *)a2 = g_CLSID_JumpjetLocomotion; /*0x54b726*/
  a2[3] = unk_7E9ACC; /*0x54b740*/
  return 0; /*0x54b71d*/
}
// 0x54B750
HRESULT JumpjetLocomotionClass::InitClass(int * a1, int * pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x54b757*/
  v3 = SwizzleManager::SaveLoad(a1->LocomotionClass, pStm); /*0x54b762*/
  if ( v3 < 0 ) /*0x54b766*/
    return v3; /*0x54b766*/
  if ( a1 ) /*0x54b76a*/
  {
    a1->Piggybackee = 0; /*0x54b76c*/
    a1->LocomotionClass[0] = (int)&JumpjetLocomotionClass_vftable; /*0x54b776*/
    a1->LocomotionClass[1] = (int)&JumpjetLocomotionClass_vftable; /*0x54b77c*/
    a1->TurnRate = (int)&JumpjetLocomotionClass_vftable; /*0x54b783*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x54b796*/
  if ( !(unsigned char)pStm ) /*0x54b79f*/
    return v3; /*0x54b7d1*/
  Piggybackee = *(unsigned int *)&a1->Piggybackee; /*0x54b7a1*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x54b7a7*/
  if ( Piggybackee ) /*0x54b7af*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x54b7b4*/
  *p_Piggybackee = 0; /*0x54b7be*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x54b7ca*/
}
// 0x54B7E0
HRESULT JumpjetLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  JumpjetLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  JumpjetLocomotionClass *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x54b7e6*/
  v4 = a1; /*0x54b7eb*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x54b7f7*/
  if ( IPersistStream < 0 ) /*0x54b7fb*/
    return IPersistStream; /*0x54b7fb*/
  if ( !v4->Piggybackee ) /*0x54b809*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x54b8a9*/
    IDA_LOBYTE(a3) = 0; /*0x54b8b5*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x54b8ba*/
    return IPersistStream; /*0x54b8be*/
  }
  v6 = *(unsigned int *)v3->__pad_0; /*0x54b80f*/
  IDA_LOBYTE(a3) = 1; /*0x54b81b*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x54b820*/
  Piggybackee = *(unsigned int *)&v4->Piggybackee; /*0x54b823*/
  pPStm = 0; /*0x54b829*/
  if ( Piggybackee ) /*0x54b833*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, JumpjetLocomotionClass **))Piggybackee)( /*0x54b844*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x54b848*/
    {
      v9 = a1; /*0x54b861*/
      if ( pPStm ) /*0x54b867*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b86c*/
      pPStm = (int *)v9; /*0x54b86f*/
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
// 0x54B8D0
int JumpjetLocomotionClass::ConvertCoordToCell_0(int a1)
{
  int v1; // edi
  FootClass *Owner; // eax
  int *location; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (*((int (**)(FootClass *))a1->?->TechnoClass + 114))(a1->?); /*0x54b8e4*/
  Owner = a1->?; /*0x54b8e6*/
  if ( !*(unsigned int *)&Owner->onBridge ) /*0x54b8e9*/
  {
    location = Owner->?; /*0x54b8f3*/
    v5[0] = *location; /*0x54b8fa*/
    v5[1] = location[1]; /*0x54b906*/
    v5[2] = location[2]; /*0x54b912*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5)->flags[0] & 0x100) != 0 /*0x54b932*/
      && v1 >= dword_ABC5DC
      && !a1->?->? )
    {
      v1 -= dword_ABC5DC; /*0x54b93c*/
    }
  }
  if ( !(*((uint8_t (**)(FootClass *))a1->?->TechnoClass + 21))(a1->?) ) /*0x54b943*/
    return 2; /*0x54b94b*/
  if ( v1 ) /*0x54b959*/
    return (v1 >= a1->Height) + 3; /*0x54b973*/
  return 2; /*0x54b94a*/
}
// 0x54D0D0
bool JumpjetLocomotionClass::CheckCompositeState(int a1)
{
  int v1; // eax

  v1 = *(unsigned int *)&a1->IsMoving; /*0x54d0d4*/
  return v1 && v1 != 2; /*0x54d0e2*/
}
// 0x54D820
int JumpjetLocomotionClass::GetFloorZSetContext()
{
  int *location; // eax
  CellClass *v3; // eax
  int ClosestOccupiableCell; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int v9; // esi
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  location = this->LinkedTo->?; /*0x54d82a*/
  v12 = *location; /*0x54d831*/
  v13 = location[1]; /*0x54d83d*/
  v14 = location[2]; /*0x54d849*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d84d*/
  ClosestOccupiableCell = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v3); /*0x54d863*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d873*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d875*/
  if ( *(double *)&this->CurrentHeight <= 0.0 ) /*0x54d889*/
    return ClosestOccupiableCell; /*0x54d926*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)&this->__pad_50[4], &v11) >> 12) + 1) >> 1) & 7; /*0x54d8ac*/
  v6 = v12 + g_DDrawSurfaceManager.scenario[2 * v5 + 102]; /*0x54d8bd*/
  v7 = g_DDrawSurfaceManager.scenario[2 * v5 + 103]; /*0x54d8bf*/
  v12 = v6; /*0x54d8c2*/
  v13 += v7; /*0x54d8d4*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d8de*/
  v9 = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v8); /*0x54d8ea*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d904*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d906*/
  if ( v9 <= ClosestOccupiableCell ) /*0x54d90e*/
    return (v9 + ClosestOccupiableCell) / 2; /*0x54d920*/
  else
    return v9; /*0x54d910*/
}
// 0x54D930
char JumpjetLocomotionClass::DispatchVirtualCall_4(int a1, int a2)
{
  int v2; // eax
  unsigned int *v3; // eax
  int v4; // edx
  unsigned int v6[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v7[12]; // [esp+14h] [ebp-Ch] BYREF

  IDA_LOBYTE(v2) = a2; /*0x54d930*/
  if ( !a2 ) /*0x54d93a*/
  {
    v3 = (unsigned int *)(*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned char *))(a1->LocomotionClass[0] + 24))(a1, v7); /*0x54d949*/
    v6[0] = *v3; /*0x54d954*/
    v4 = v3[1]; /*0x54d958*/
    v6[1] = v4; /*0x54d95b*/
    v2 = v3[2]; /*0x54d95f*/
    v6[2] = v2; /*0x54d964*/
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 ) /*0x54d979*/
    {
      if ( !*(unsigned int *)&a1->IsMoving || (IDA_LOBYTE(v2) = a1->__pad_89[3], (unsigned char)v2) ) /*0x54d98a*/
      {
        IDA_LOBYTE(v2) = (*((int (**)(FootClass *, unsigned int *))a1->?->TechnoClass + 61))(a1->?, v6); /*0x54d996*/
        a1->__pad_89[3] = 0; /*0x54d99c*/
      }
    }
  }
  return v2; /*0x54d9a3*/
}
// 0x54D9B0
unsigned int * JumpjetLocomotionClass::GetConditionedCoordinate(unsigned int * a1, unsigned int * a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // edx
  int v6; // eax

  if ( *(unsigned int *)&a1->IsMoving ) /*0x54d9b6*/
  {
    v5 = a1->DestinationCoords[0]; /*0x54d9e7*/
    v6 = a1->DestinationCoords[1]; /*0x54d9ea*/
    *a2 = *(unsigned int *)&a1->__pad_39[3]; /*0x54d9ef*/
    a2[1] = v5; /*0x54d9f1*/
    a2[2] = v6; /*0x54d9f4*/
    return a2; /*0x54d9f7*/
  }
  else
  {
    v2 = a1->vtable2->?[1]; /*0x54d9c7*/
    v3 = a1->Owner->?[2]; /*0x54d9ca*/
    *a2 = a1->?->?[0]; /*0x54d9d3*/
    a2[1] = v2; /*0x54d9d5*/
    a2[2] = v3; /*0x54d9d8*/
    return a2; /*0x54d9cd*/
  }
}
// 0x54DA00
int JumpjetLocomotionClass::StubReturnZero_9(int a1, int a2)
{
  if ( !a2 ) /*0x54da06*/
    return -2147467261; /*0x54da08*/
  if ( *(unsigned int *)&a1->__pad_74[8] ) /*0x54da14*/
    return -2147467259; /*0x54da3b*/
  *(unsigned int *)&a1->__pad_74[8] = a2; /*0x54da22*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x54da28*/
  return 0; /*0x54da0d*/
}
// 0x54DA50
int JumpjetLocomotionClass::StubReturnZero_10(int a1, unsigned int * a2)
{
  int v3; // eax
  unsigned int *v4; // ecx
  int v5; // eax

  if ( !a2 ) /*0x54da5b*/
    return -2147467261; /*0x54da5f*/
  v3 = *((unsigned int *)a1 - 3); /*0x54da6c*/
  if ( v3 ) /*0x54da71*/
  {
    if ( *(unsigned char *)(v3 + 1709) || *(unsigned char *)(v3 + 1710) ) /*0x54da7b*/
    {
      *(unsigned char *)(v3 + 1709) = 0; /*0x54da83*/
      *(unsigned char *)(*((unsigned int *)a1 - 3) + 1710) = 0; /*0x54da8c*/
      v4 = (unsigned int *)*((unsigned int *)a1 - 3); /*0x54da92*/
      if ( !*(unsigned char *)(v4[135] + 492) && *(unsigned char *)((*(int (**)(unsigned int *))(*v4 + 132))(v4) + 1516) ) /*0x54daab*/
        (*(void (**)(unsigned int, int, unsigned int))(**((unsigned int **)a1 - 3) + 488))(*((unsigned int *)a1 - 3), 10, 0); /*0x54dabb*/
    }
    *(unsigned int *)(*((unsigned int *)a1 - 3) + 1064) = 0; /*0x54dac4*/
    *(unsigned int *)(*((unsigned int *)a1 - 3) + 1068) = 0; /*0x54dacd*/
  }
  v5 = *(unsigned int *)&a1->__pad_74[8]; /*0x54dad3*/
  if ( !v5 ) /*0x54dad8*/
    return 1; /*0x54dae9*/
  *a2 = v5; /*0x54dada*/
  *(unsigned int *)&a1->__pad_74[8] = 0; /*0x54dadc*/
  return 0; /*0x54da5d*/
}
// 0x54DB00
bool JumpjetLocomotionClass::StubReturnTrue_2(int a1)
{
  int v1; // esi
  bool result; // al

  result = 0; /*0x54db3e*/
  if ( !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) ) /*0x54db0c*/
  {
    if ( *(unsigned int *)&a1->__pad_74[8] ) /*0x54db13*/
    {
      if ( !a1->__pad_74[5] ) /*0x54db1a*/
      {
        v1 = *((unsigned int *)a1 - 3); /*0x54db21*/
        if ( !*(unsigned char *)(v1 + 1709) || *(unsigned char *)(v1 + 1710) ) /*0x54db2e*/
          return 1; /*0x54db11*/
      }
    }
  }
  return result; /*0x54db3a*/
}
// 0x54DB50
int JumpjetLocomotionClass::LoadLocomotionFromStream_1(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x54db51*/
  if ( !a2 ) /*0x54db58*/
    return -2147467261; /*0x54db61*/
  v4 = &a1->__pad_74[8]; /*0x54db6b*/
  if ( *(unsigned int *)&a1->__pad_74[8] ) /*0x54db68*/
  {
    a1 = 0; /*0x54db74*/
    v5 = StreamClass::Set2((StreamClass *)&a1, v4); /*0x54db85*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x54db93*/
      WinAPI::Wrapper(v5); /*0x54db96*/
    if ( !a1 ) /*0x54dba1*/
      return -2147467259; /*0x54dbaa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x54dbb4*/
    if ( a1 ) /*0x54dbbc*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x54dbc5*/
      return v6; /*0x54dbcc*/
    }
  }
  else
  {
    a2 = 0; /*0x54dbd2*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x54dbdc*/
      return -2147467259; /*0x54dbdc*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x54dbed*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x54dbf1*/
    {
      v9 = a1; /*0x54dc05*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x54dc0d*/
      v8 = v9; /*0x54dc12*/
      a2 = v9->LocomotionClass; /*0x54dc15*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x54dbf7*/
      v8 = 0; /*0x54dbfc*/
      a2 = 0; /*0x54dbfe*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x54dc23*/
      WinAPI::Wrapper(v7); /*0x54dc26*/
    if ( !v8 ) /*0x54dc31*/
      return -2147467259; /*0x54dc3a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x54dc44*/
    if ( a2 ) /*0x54dc4c*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x54dc51*/
  }
  return v6; /*0x54db5a*/
}
// 0x54DF70
BOOL JumpjetLocomotionClass::ShortFunc_54DF70(int a1)
{
  return *(unsigned int *)(a1 + 124) != 0; /*0x54df7e*/
}
// 0x54DF90
int JumpjetLocomotionClass::CheckAttachStatus()
{
  return 152; /*0x54df95*/
}
// 0x54DFA0
JumpjetLocomotionClass * JumpjetLocomotionClass::ProcessAttach(char a2)
{
  ILocomotion *Piggybackee; // eax

  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass_vftable; /*0x54dfa3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass_vftable; /*0x54dfa9*/
  this->TurnRate = (int)&JumpjetLocomotionClass_vftable; /*0x54dfb0*/
  Piggybackee = *(unsigned int *)&this->Piggybackee; /*0x54dfb7*/
  if ( Piggybackee ) /*0x54dfbf*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x54dfc4*/
  LocomotionClass::Construct(); /*0x54dfc9*/
  if ( (a2 & 1) != 0 ) /*0x54dfd3*/
    RA2_OPDEL(); /*0x54dfd6*/
  return this->LocomotionClass; /*0x54dfe0*/
}
// 0x54DFF0
int JumpjetLocomotionClass::SmallStub_54DFF0(int a1, const void * a2, int * a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
// 0x54E000
LONG JumpjetLocomotionClass::SmallStub_54E000(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 4);
}
// 0x54E010
LONG JumpjetLocomotionClass::SmallStub_54E010(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
// 0x54E020
int JumpjetLocomotionClass::SmallStub_54E020(int a1, const void * a2, int * a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
// 0x54E030
LONG JumpjetLocomotionClass::SmallStub_54E030(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 24);
}
// 0x54E040
LONG JumpjetLocomotionClass::SmallStub_54E040(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 24));
}
// 0x54E890
namespace gamemd {
void JumpjetLocomotionClass_26::ClearBuffer()
{
  void *v2; // eax

  v2 = *(void **)&this->q004; /*0x54e896*/
  this->q010 = 0; /*0x54e899*/
  if ( v2 && this->IsAllocated ) /*0x54e8a0*/
  {
    RA2_OPDEL(v2); /*0x54e8a6*/
    *(unsigned int *)&this->q004 = 0; /*0x54e8ae*/
  }
  this->IsAllocated = 0; /*0x54e8b1*/
  this->q008 = 0; /*0x54e8b4*/
}
} // namespace gamemd

// 0x54E8C0
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::PointerToIndex(int a2)
{
  if ( this->q00C ) /*0x54e8c0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x54e8d5*/
  else
    return 0; /*0x54e8c7*/
}
} // namespace gamemd

// 0x54E8E0
namespace gamemd {
int JumpjetLocomotionClass_26::Seek(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * a2); /*0x54e8ea*/
}
}
// 0x54E8F0
namespace gamemd {
char JumpjetLocomotionClass_26::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->q008; /*0x54e8f2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x54e8fd*/
  {
    v3 = 0; /*0x54e8ff*/
    if ( m_8 <= 0 ) /*0x54e903*/
      return 1; /*0x54e923*/
    v4 = *(unsigned int **)&this->q004; /*0x54e905*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x54e90b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x54e914*/
    {
      ++v3; /*0x54e916*/
      ++v4; /*0x54e917*/
      if ( v3 >= m_8 ) /*0x54e91c*/
        return 1; /*0x54e91c*/
    }
  }
  return 0; /*0x54e91e*/
}
} // namespace gamemd

// 0x54E930
namespace gamemd {
char JumpjetLocomotionClass_26::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54e93c*/
  {
    this->q00C = 0; /*0x54e946*/
    if ( a3 ) /*0x54e94c*/
      v4 = a3; /*0x54e962*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54e95e*/
    this->q00C = 1; /*0x54e966*/
    if ( v4 ) /*0x54e96a*/
    {
      if ( *(unsigned int *)&this->q004 ) /*0x54e975*/
      {
        m_8 = this->q008; /*0x54e97c*/
        if ( a2 < m_8 ) /*0x54e981*/
          m_8 = a2; /*0x54e983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x54e989*/
          ++i; /*0x54e98e*/
        if ( this->IsAllocated ) /*0x54e99b*/
        {
          RA2_OPDEL(*(void **)&this->q004); /*0x54e9a6*/
          *(unsigned int *)&this->q004 = 0; /*0x54e9ae*/
        }
      }
      *(void **)&this->q004 = v4; /*0x54e9b7*/
      this->q008 = a2; /*0x54e9bf*/
      this->IsAllocated = a3 == 0; /*0x54e9c2*/
      return 1; /*0x54e9c8*/
    }
    else
    {
      return 0; /*0x54e96f*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAUKamikazeControl *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x54e9d2*/
    return 1; /*0x54e9d8*/
  }
}
} // namespace gamemd

// 0x54E9E0
namespace gamemd {
void JumpjetLocomotionClass_26::ddtor()
{
  if ( *(unsigned int *)&this->IsAllocated && this->IsAllocated ) /*0x54e9ed*/
  {
    RA2_OPDEL(*(void **)&this->q004); /*0x54e9f3*/
    *(unsigned int *)&this->q004 = 0; /*0x54e9fb*/
  }
  this->IsAllocated = 0; /*0x54e9fe*/
  this->q008 = 0; /*0x54ea01*/
}
} // namespace gamemd

// 0x54EA10
namespace gamemd {
int JumpjetLocomotionClass_26::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !this->q00C ) /*0x54ea10*/
    return 0; /*0x54ea18*/
  m_8 = this->q008; /*0x54ea1e*/
  result = 0; /*0x54ea21*/
  if ( m_8 <= 0 ) /*0x54ea25*/
    return -1; /*0x54ea3c*/
  for ( i = *(unsigned int **)&this->q004; *i != *a2; ++i ) /*0x54ea2b*/
  {
    if ( ++result >= m_8 ) /*0x54ea3a*/
      return -1; /*0x54ea3a*/
  }
  return result; /*0x54ea1a*/
}
} // namespace gamemd

// 0x54EA50
namespace gamemd {
unsigned int JumpjetLocomotionClass_26::Write(int a2)
{
  if ( this->q00C ) /*0x54ea50*/
    return (unsigned int)(a2 - *(unsigned int *)&this->q004) >> 2; /*0x54ea65*/
  else
    return 0; /*0x54ea57*/
}
} // namespace gamemd

// 0x54EA70
namespace gamemd {
char JumpjetLocomotionClass_26::SetCapacity(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54ea7c*/
  {
    this->q00C = 0; /*0x54ea82*/
    if ( a3 ) /*0x54ea88*/
      v4 = a3; /*0x54ea9e*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x54ea9a*/
    this->q00C = 1; /*0x54eaa2*/
    if ( !v4 ) /*0x54eaa6*/
      return 0; /*0x54eb1a*/
    if ( *(unsigned int *)&this->q004 ) /*0x54eaa8*/
    {
      m_8 = this->q008; /*0x54eaaf*/
      if ( a2 < m_8 ) /*0x54eab4*/
        m_8 = a2; /*0x54eab6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->q004 + 4 * i - 4) ) /*0x54eabc*/
        ++i; /*0x54eac1*/
      if ( this->IsAllocated ) /*0x54eace*/
      {
        RA2_OPDEL(*(void **)&this->q004); /*0x54ead9*/
        *(unsigned int *)&this->q004 = 0; /*0x54eae1*/
      }
    }
    *(void **)&this->q004 = v4; /*0x54eaea*/
    this->q008 = a2; /*0x54eaf2*/
    this->IsAllocated = a3 == 0; /*0x54eaf5*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUKamikazeControl *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x54eafe*/
  }
  v7 = this->q008; /*0x54eb01*/
  if ( v7 < this->q010 ) /*0x54eb09*/
    this->q010 = v7; /*0x54eb0b*/
  return 1; /*0x54eb0e*/
}
} // namespace gamemd

// 0x54EB50
namespace gamemd {
VectorClass_flat * JumpjetLocomotionClass_26::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->q004; /*0x54eb53*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_KamikazeControl___vftable; /*0x54eb56*/
  if ( v3 && this->IsAllocated ) /*0x54eb60*/
  {
    RA2_OPDEL(v3); /*0x54eb68*/
    *(unsigned int *)&this->q004 = 0; /*0x54eb70*/
  }
  this->IsAllocated = 0; /*0x54eb7b*/
  *(unsigned short *)&this->q008 = 0; /*0x54eb81*/
  if ( (a2 & 1) != 0 ) /*0x54eb88*/
    RA2_OPDEL(); /*0x54eb8b*/
  return this; /*0x54eb95*/
}
} // namespace gamemd

// 0x54EBA0
namespace gamemd {
DynamicVector * JumpjetLocomotionClass_26::Constructor_VectorClass_KamikazeControl___(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->q004; /*0x54eba3*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_KamikazeControl___vftable; /*0x54eba6*/
  if ( v3 && this->IsAllocated ) /*0x54ebb0*/
  {
    RA2_OPDEL(v3); /*0x54ebb8*/
    *(unsigned int *)&this->q004 = 0; /*0x54ebc0*/
  }
  this->IsAllocated = 0; /*0x54ebcb*/
  *(unsigned short *)&this->q008 = 0; /*0x54ebd1*/
  if ( (a2 & 1) != 0 ) /*0x54ebd8*/
    RA2_OPDEL(); /*0x54ebdb*/
  return this; /*0x54ebe5*/
}
} // namespace gamemd

// 0x55A940
char JumpjetLocomotionClass::MissionStub(int a1)
{
  return 0; /*0x55a942*/
}
// 0x55ab70
{
return 0;
}

// 0x55AB70
char JumpjetLocomotionClass::MissionStub2(int a1, int a2)
{
  return 0; /*0x55ab72*/
}
// 0x55AB80
char JumpjetLocomotionClass::MissionStub3(int a1, int a2)
{
  return 0; /*0x55ab82*/
}
// 0x55AB90
void JumpjetLocomotionClass::Stub10(int a1)
{
  ; /*0x55ab90*/
}
// 0x55ABA0
int JumpjetLocomotionClass::StubReturnFalse(int a1)
{
  return 0; /*0x55aba2*/
}
// 0x55ABB0
int JumpjetLocomotionClass::CheckState(TunnelLocomotionClass * aP0)
{
  return 2; /*0x55abb5*/
}
// 0x55ABC0
int JumpjetLocomotionClass::CheckState2(int a1, int a2)
{
  return 0; /*0x55abc2*/
}
// 0x55ABE0
char JumpjetLocomotionClass::MissionStub4(int a1)
{
  return 1; /*0x55abe2*/
}
// 0x55ABF0
int JumpjetLocomotionClass::MissionStub5(int a1, int a2)
{
  return 0; /*0x55abf2*/
}
// 0x55AC00
void JumpjetLocomotionClass::Stub11(int a1, int a2, int a3, int a4)
{
  ; /*0x55ac00*/
}
// 0x55AC10
void JumpjetLocomotionClass::Stub12(int a1, int a2, int a3, int a4, int a5)
{
  ; /*0x55ac10*/
}
// 0x55AC20
void JumpjetLocomotionClass::Stub13(int a1)
{
  ; /*0x55ac20*/
}
// 0x55AC30
void JumpjetLocomotionClass::Stub14(int a1, int a2)
{
  ; /*0x55ac30*/
}
// 0x55AC50
void JumpjetLocomotionClass::Stub15(int a1, int a2, int a3, int a4)
{
  ; /*0x55ac50*/
}
// 0x55AC60
char JumpjetLocomotionClass::StubReturnTrue_3(int a1)
{
  return 1; /*0x55ac62*/
}
// 0x55AC70
unsigned int * JumpjetLocomotionClass::GetGlobalCoordinate(int a1, unsigned int * a2)
{
  int v3; // edx
  int v4; // esi

  v3 = *(unsigned int *)&g_MissionQueueFrame.waypoints[82]; /*0x55ac7a*/
  v4 = *(unsigned int *)&g_MissionQueueFrame.waypoints[86]; /*0x55ac81*/
  *a2 = *(unsigned int *)&g_MissionQueueFrame.waypoints[78]; /*0x55ac8a*/
  a2[1] = v3; /*0x55ac8c*/
  a2[2] = v4; /*0x55ac8f*/
  return a2; /*0x55ac92*/
}
// 0x55ACD0
char JumpjetLocomotionClass::StubReturnZero_11(int a1)
{
  return 0; /*0x55acd2*/
}
// 0x55ACE0
void JumpjetLocomotionClass::Stub16(int a1, int a2)
{
  ; /*0x55ace0*/
}
// 0x55ACF0
int JumpjetLocomotionClass::MissionStub10(int a1)
{
  return 0; /*0x55acf2*/
}
// 0x55AD00
int JumpjetLocomotionClass::MissionStub11(int a1)
{
  return 0; /*0x55ad02*/
}
// 0x5AFF70
char JumpjetLocomotionClass::SmallStub_5AFF70(int a1)
{
  return IDA_LOBYTE(a1->Accel); /*0x5aff77*/
}
// 0x5AFF80
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int TurnRate; // edx
  int Speed; // esi
  unsigned int *v5; // edi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x5aff89*/
  {
    result = a2; /*0x5aff90*/
    TurnRate = a1->TurnRate; /*0x5aff97*/
    Speed = a1->Speed; /*0x5aff9a*/
    v5 = a2; /*0x5aff9d*/
    *a2 = a1->?; /*0x5aff9f*/
  }
  else
  {
    result = a2; /*0x5affac*/
    TurnRate = g_MissionQueueFrame.localVariables[228]; /*0x5affb6*/
    Speed = g_MissionQueueFrame.localVariables[229]; /*0x5affbc*/
    v5 = a2; /*0x5affc2*/
    *a2 = g_MissionQueueFrame.localVariables[227]; /*0x5affc4*/
  }
  v5[1] = TurnRate; /*0x5affa1*/
  v5[2] = Speed; /*0x5affa4*/
  return result; /*0x5affa7*/
}
// 0x5AFFE0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2)
{
  float Crash; // edx
  int Height; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( IDA_LODWORD(a1->Climb) == g_MissionQueueFrame.localVariables[227] /*0x5b000b*/
    && IDA_LODWORD(a1->Crash) == g_MissionQueueFrame.localVariables[228]
    && a1->Height == g_MissionQueueFrame.localVariables[229] )
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x5b002b*/
    location = *(unsigned int *)&Owner->vtable3; /*0x5b0034*/
    v7 = *(unsigned int *)&Owner->vtable3; /*0x5b0036*/
    v8 = *(unsigned int *)&Owner->vtable2; /*0x5b0038*/
    v9 = location[2]; /*0x5b003b*/
    *a2 = v7; /*0x5b0044*/
    a2[1] = v8; /*0x5b0046*/
    a2[2] = v9; /*0x5b0049*/
    return a2; /*0x5b003e*/
  }
  else
  {
    Crash = a1->Crash; /*0x5b0014*/
    Height = a1->Height; /*0x5b0017*/
    *a2 = IDA_LODWORD(a1->Climb); /*0x5b001c*/
    *((float *)a2 + 1) = Crash; /*0x5b001e*/
    a2[2] = Height; /*0x5b0021*/
    return a2; /*0x5b0024*/
  }
}
// 0x5B0060
int JumpjetLocomotionClass::ShortFunc_5B0060(int a1)
{
  BuildingClass::ProcessMission((int)a1 - 4, 1); /*0x5b006a*/
  return (*(int (__stdcall **)(MechLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1); /*0x5b0075*/
}
// 0x5B0080
int JumpjetLocomotionClass::ConvertCoordToCell_1(int a1, int aP1, IUnknown * aP2, IUnknown * aP3)
{
  int result; // eax
  int v5; // ecx
  int v6; // edx

  result = (*((int (**)(FootClass *))a1->?->TechnoClass + 223))(a1->?); /*0x5b008a*/
  if ( !(unsigned char)result ) /*0x5b0092*/
  {
    result = (*((int (**)(FootClass *))a1->?->TechnoClass + 224))(a1->?); /*0x5b0099*/
    if ( !(unsigned char)result ) /*0x5b00a1*/
    {
      result = (*((int (**)(FootClass *))a1->?->TechnoClass + 117))(a1->?); /*0x5b00a8*/
      if ( !(unsigned char)result ) /*0x5b00b0*/
      {
        result = (*((int (**)(FootClass *))a1->?->TechnoClass + 118))(a1->?); /*0x5b00b7*/
        if ( !(unsigned char)result ) /*0x5b00bf*/
        {
          v5 = aP2; /*0x5b00c5*/
          v6 = aP3; /*0x5b00ca*/
          a1->? = aP1; /*0x5b00dd*/
          a1->MovingDestination[0] = v5; /*0x5b00e4*/
          a1->MovingDestination[1] = v6; /*0x5b00ec*/
          result = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &aP1); /*0x5b00ef*/
          if ( (*(unsigned int *)(result + 320) & 0x100) != 0 ) /*0x5b00fe*/
          {
            result = Coord::ScaleToScreenY((Coord *)0x3C); /*0x5b0105*/
            a1->MovingDestination[1] += result; /*0x5b010a*/
          }
          IDA_LOBYTE(a1->HeadToCoord[2]) = 1; /*0x5b010d*/
        }
      }
    }
  }
  return result; /*0x5b0111*/
}
// 0x5B0120
int JumpjetLocomotionClass::SyncMatrixTransformState(int a1)
{
  int result; // eax

  result = (int)a1; /*0x5b0120*/
  a1->? = g_MissionQueueFrame.localVariables[227]; /*0x5b012d*/
  a1->MovingDestination[0] = g_MissionQueueFrame.localVariables[228]; /*0x5b0136*/
  a1->MovingDestination[1] = g_MissionQueueFrame.localVariables[229]; /*0x5b013f*/
  if ( a1->MovingDestination[2] == g_MissionQueueFrame.localVariables[227] /*0x5b0165*/
    && a1->HeadToCoord[0] == g_MissionQueueFrame.localVariables[228]
    && a1->HeadToCoord[1] == g_MissionQueueFrame.localVariables[229] )
  {
    IDA_LOBYTE(a1->HeadToCoord[2]) = 0; /*0x5b0167*/
  }
  return result; /*0x5b016b*/
}
// 0x5B0170
char JumpjetLocomotionClass::UpdateFacingDirection_1(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x5b018f*/
}
// 0x5B01A0
int JumpjetLocomotionClass::InitMultiFieldArray(unsigned int * a1, int a2, int a3, int a4)
{
  a1->MovingDestination[2] = a2; /*0x5b01b4*/
  a1->HeadToCoord[0] = a3; /*0x5b01b6*/
  a1->HeadToCoord[1] = a4; /*0x5b01b9*/
  return a2; /*0x5b01bc*/
}
// 0x5B19D0
int JumpjetLocomotionClass::SmallStub_5B19D0(int a1)
{
  return 2; /*0x5b19d5*/
}
// 0x5B19E0
bool JumpjetLocomotionClass::StubReturnTrue_4(InfantryClass * aP0)
{
  if ( (uint8_t)TimerClass::Active((int)aP0->?->?) ) /*0x5b19ee*/
    return 1; /*0x5b19f7*/
  return (*(uint8_t (__stdcall **)(MechLocomotionClass *))(*(unsigned int *)aP0->LocomotionClass + 16))(aP0) /*0x5b1a39*/
      && (aP0->MovingDestination[2] != g_MissionQueueFrame.localVariables[227]
       || aP0->HeadToCoord[0] != g_MissionQueueFrame.localVariables[228]
       || aP0->HeadToCoord[1] != g_MissionQueueFrame.localVariables[229])
      && (*((int (**)(FootClass *))aP0->?->TechnoClass + 334))(aP0->?) > 0;
}
// 0x5B1A50
int JumpjetLocomotionClass::DispatchVirtualCall_5(unsigned int * a1, int a2)
{
  int result; // eax
  unsigned int *v3; // eax
  FootClass *Owner; // ecx
  unsigned int v5[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x5b1a50*/
  if ( !a2 ) /*0x5b1a59*/
  {
    v3 = (unsigned int *)(*(int (__stdcall **)(MechLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))( /*0x5b1a68*/
                     a1,
                     v6);
    v5[0] = *v3; /*0x5b1a6d*/
    v5[1] = v3[1]; /*0x5b1a74*/
    Owner = *(unsigned int *)&a1->Owner; /*0x5b1a7b*/
    v5[2] = v3[2]; /*0x5b1a7e*/
    return (*((int (**)(FootClass *, unsigned int *))Owner->TechnoClass + 61))(Owner, v5); /*0x5b1a89*/
  }
  return result; /*0x5b1a90*/
}
// 0x5B1AA0
bool JumpjetLocomotionClass::IsPositionWithinThreshold_0(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  unsigned char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(MechLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))(a1, v9); /*0x5b1ab3*/
  v5 = v4[2]; /*0x5b1abb*/
  v6 = *v4; /*0x5b1ae7*/
  v7 = v4[1] / 256; /*0x5b1afd*/
  return (uint16_t)(v6 / 256) == (uint16_t)(a2 / 256) /*0x5b1b21*/
      && (unsigned short)v7 == (uint16_t)(a3 / 256)
      && (int)abs32(v5 - a4) <= g_MissionQueueFrame.localVariables[243];
}
// 0x661F50
BOOL JumpjetLocomotionClass::HasFieldStateChanged(unsigned int * a1)
{
  return a1->? != dword_B04E38 || a1->TurnRate != dword_B04E3C || a1->Speed != dword_B04E40; /*0x661f7d*/
}
// 0x661F90
bool JumpjetLocomotionClass::CheckCompositeState_0(int a1)
{
  int v1; // eax

  v1 = a1->TrailerTimer[2]; /*0x661f94*/
  return v1 >= 3 && v1 <= 5; /*0x661fa3*/
}
// 0x661FB0
unsigned int * JumpjetLocomotionClass::GetCoordinate_0(unsigned int * a1, unsigned int * a2)
{
  int TurnRate; // edx
  int Speed; // eax

  TurnRate = a1->TurnRate; /*0x661fbd*/
  Speed = a1->Speed; /*0x661fc0*/
  *a2 = a1->?; /*0x661fc5*/
  a2[1] = TurnRate; /*0x661fc7*/
  a2[2] = Speed; /*0x661fca*/
  return a2; /*0x661fcf*/
}
// 0x6632E0
int JumpjetLocomotionClass::ComputeFloatExpression_3(int a1, int a2, int a3, int a4)
{
  int result; // eax
  void *vtable1; // edx
  int v6; // edx
  bool v7; // zf
  int v8; // esi
  int v9; // [esp+Ch] [ebp-Ch]

  result = (int)a1; /*0x6632e0*/
  vtable1 = a1->?[1].?; /*0x6632ec*/
  if ( vtable1 == *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6632fe*/
  {
    v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1200; /*0x663300*/
  }
  else
  {
    v7 = vtable1 == *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352); /*0x66330e*/
    v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1304; /*0x663310*/
    if ( !v7 ) /*0x663316*/
      v6 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1252; /*0x663318*/
  }
  if ( a1->? == dword_B04E38 /*0x66334a*/
    && a1->MovingDestination[0] == dword_B04E3C
    && a1->MovingDestination[1] == dword_B04E40 )
  {
    if ( *(unsigned int *)v6 ) /*0x66334c*/
    {
      a1->TrailerTimer[2] = 1; /*0x663353*/
      v8 = *(unsigned int *)v6; /*0x663360*/
    }
    else
    {
      a1->TrailerTimer[2] = 2; /*0x66336e*/
      v8 = *(unsigned int *)(v6 + 4); /*0x66337b*/
    }
    a1->MovingDestination[2] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x663365*/
    a1->MissionTimer[0] = v9; /*0x663388*/
    a1->MissionTimer[1] = v8; /*0x66338b*/
    a1->MissionTimer[2] = v8; /*0x66338e*/
    *(float *)&a1->RocketLocomotionClass_field_bool_4C = *(float *)(v6 + 8) * 1.570796326794897; /*0x6633a3*/
    a1->? = a2; /*0x6633aa*/
    a1->MovingDestination[0] = a3; /*0x6633ac*/
    a1->MovingDestination[1] = a4; /*0x6633af*/
    return a2; /*0x6633a6*/
  }
  return result; /*0x6633b2*/
}
// 0x663460
int JumpjetLocomotionClass::SmallStub_663460(int a1)
{
  return 3; /*0x663465*/
}
// 0x69ED20
int JumpjetLocomotionClass::LoadLocomotionFromStream_2(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  char *pad_50; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x69ed21*/
  if ( !a2 ) /*0x69ed28*/
    return -2147467261; /*0x69ed31*/
  pad_50 = a1->__pad_50; /*0x69ed3b*/
  if ( *(unsigned int *)a1->__pad_50 ) /*0x69ed38*/
  {
    a1 = 0; /*0x69ed44*/
    v5 = StreamClass::Set2((StreamClass *)&a1, pad_50); /*0x69ed55*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x69ed63*/
      WinAPI::Wrapper(v5); /*0x69ed66*/
    if ( !a1 ) /*0x69ed71*/
      return -2147467259; /*0x69ed7a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x69ed84*/
    if ( a1 ) /*0x69ed8c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x69ed95*/
      return v6; /*0x69ed9c*/
    }
  }
  else
  {
    a2 = 0; /*0x69eda2*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x69edac*/
      return -2147467259; /*0x69edac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x69edbd*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x69edc1*/
    {
      v9 = a1; /*0x69edd5*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x69eddd*/
      v8 = v9; /*0x69ede2*/
      a2 = v9->LocomotionClass; /*0x69ede5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x69edc7*/
      v8 = 0; /*0x69edcc*/
      a2 = 0; /*0x69edce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x69edf3*/
      WinAPI::Wrapper(v7); /*0x69edf6*/
    if ( !v8 ) /*0x69ee01*/
      return -2147467259; /*0x69ee0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x69ee14*/
    if ( a2 ) /*0x69ee1c*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x69ee21*/
  }
  return v6; /*0x69ed2a*/
}
// 0x69EFF0
int JumpjetLocomotionClass::StubReturnZero_12(int a1, int a2)
{
  if ( !a2 ) /*0x69eff6*/
    return -2147467261; /*0x69eff8*/
  if ( *(unsigned int *)a1->__pad_50 ) /*0x69f004*/
    return -2147467259; /*0x69f02b*/
  *(unsigned int *)a1->__pad_50 = a2; /*0x69f012*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x69f018*/
  return 0; /*0x69effd*/
}
// 0x69F040
int JumpjetLocomotionClass::StubReturnZero_13(int a1, unsigned int * a2)
{
  int v3; // eax

  if ( !a2 ) /*0x69f046*/
    return -2147467261; /*0x69f048*/
  v3 = *(unsigned int *)a1->__pad_50; /*0x69f054*/
  if ( !v3 ) /*0x69f059*/
    return 1; /*0x69f069*/
  *a2 = v3; /*0x69f05b*/
  *(unsigned int *)a1->__pad_50 = 0; /*0x69f05d*/
  return 0; /*0x69f04d*/
}
// 0x69F080
bool JumpjetLocomotionClass::CheckPiggybackState_0(int a1)
{
  return !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x69f0b0*/
      && *(unsigned int *)a1->__pad_50
      && a1->unknown_4D
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);
}
// 0x69F250
unsigned int * JumpjetLocomotionClass::InitMovementState_0(unsigned int * a1, int a2)
{
  int v3; // [esp+8h] [ebp-Ch]

  a1->CurrentRamp = a2; /*0x69f25d*/
  *(unsigned int *)a1->__pad_18 = a2; /*0x69f260*/
  a1->PreviousRamp = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x69f26f*/
  a1->SlopeTimer[0] = v3; /*0x69f275*/
  a1->SlopeTimer[1] = 0; /*0x69f278*/
  a1->SlopeTimer[2] = 0; /*0x69f27b*/
  return &a1->PreviousRamp; /*0x69f27e*/
}
// 0x69F290
bool JumpjetLocomotionClass::StubReturnTrue_5(int a1)
{
  if ( IDA_LODWORD(a1->Wobbles) != g_OverlayTypeConfig || *(unsigned long long *)&a1->Deviation != qword_B077FC ) /*0x69f2b1*/
    return 1; /*0x69f2c1*/
  return (*(unsigned int *)&a1->__pad_39[3] != g_OverlayTypeConfig || *(unsigned long long *)a1->DestinationCoords != qword_B077FC) /*0x69f310*/
      && (*(unsigned int *)&a1->__pad_39[3] != a1->?->?[0] || a1->DestinationCoords[0] != a1->?->?[1]);
}
// 0x69F330
bool JumpjetLocomotionClass::StubReturnTrue_6(InfantryClass * aP0)
{
  if ( (uint8_t)TimerClass::Active((int)aP0->?->?) ) /*0x69f33e*/
    return 1; /*0x69f347*/
  return (*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)aP0->LocomotionClass + 16))(aP0) /*0x69f389*/
      && (aP0->Dest[2] != g_OverlayTypeConfig || *(unsigned long long *)aP0->HeadToCoord != qword_B077FC)
      && (*((int (**)(FootClass *))aP0->?->TechnoClass + 334))(aP0->?) > 0;
}
// 0x69F3A0
unsigned int * JumpjetLocomotionClass::GetCoordinate_1(unsigned int * a1, unsigned int * a2)
{
  int Deviation; // edx
  int v3; // eax

  Deviation = a1->Deviation; /*0x69f3ad*/
  v3 = ((unsigned int)(a1->NoWobbles)); /*0x69f3b0*/
  *a2 = IDA_LODWORD(a1->Wobbles); /*0x69f3b5*/
  a2[1] = Deviation; /*0x69f3b7*/
  a2[2] = v3; /*0x69f3ba*/
  return a2; /*0x69f3bf*/
}
// 0x69F3D0
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_1(unsigned int * a1, unsigned int * a2)
{
  int v2; // edx
  int v3; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *(unsigned int *)&a1->__pad_39[3] == g_OverlayTypeConfig && *(unsigned long long *)a1->DestinationCoords == qword_B077FC ) /*0x69f3ee*/
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x69f41b*/
    location = *(unsigned int *)&Owner->vtable3; /*0x69f424*/
    v6 = *(unsigned int *)&Owner->vtable3; /*0x69f426*/
    v7 = *(unsigned int *)&Owner->vtable2; /*0x69f428*/
    v8 = location[2]; /*0x69f42b*/
    *a2 = v6; /*0x69f434*/
    a2[1] = v7; /*0x69f436*/
    a2[2] = v8; /*0x69f439*/
    return a2; /*0x69f42e*/
  }
  else
  {
    v2 = a1->DestinationCoords[0]; /*0x69f404*/
    v3 = a1->DestinationCoords[1]; /*0x69f407*/
    *a2 = *(unsigned int *)&a1->__pad_39[3]; /*0x69f40c*/
    a2[1] = v2; /*0x69f40e*/
    a2[2] = v3; /*0x69f411*/
    return a2; /*0x69f414*/
  }
}
// 0x69F450
unsigned int * JumpjetLocomotionClass::ConvertCoordToCell_2(int arg0, unsigned int * a1, unsigned int aP1_4, IUnknown * aP3)
{
  unsigned int *result; // eax
  int v5; // ecx
  int v6; // edx

  result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 223))(arg0->?); /*0x69f45b*/
  if ( !(unsigned char)result ) /*0x69f463*/
  {
    result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 224))(arg0->?); /*0x69f46e*/
    if ( !(unsigned char)result ) /*0x69f476*/
    {
      result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 117))(arg0->?); /*0x69f481*/
      if ( !(unsigned char)result ) /*0x69f489*/
      {
        result = (unsigned int *)(*((int (**)(FootClass *))arg0->?->TechnoClass + 118))(arg0->?); /*0x69f490*/
        if ( !(unsigned char)result ) /*0x69f498*/
        {
          result = a1; /*0x69f49a*/
          v5 = aP1_4; /*0x69f49e*/
          v6 = aP3; /*0x69f4a2*/
          arg0->SlopeTimer[3] = (int)a1; /*0x69f4a9*/
          arg0->Dest[0] = v5; /*0x69f4ac*/
          arg0->Dest[1] = v6; /*0x69f4af*/
          if ( result != (unsigned int *)g_OverlayTypeConfig || IDA___PAIR64__(v6, v5) != qword_B077FC ) /*0x69f4c2*/
          {
            a1 = result; /*0x69f4cc*/
            aP1_4 = v5; /*0x69f4d4*/
            aP3 = v6; /*0x69f4de*/
            result = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a1); /*0x69f4e2*/
            if ( (result[80] & 0x100) != 0 ) /*0x69f4f0*/
            {
              result = (unsigned int *)(dword_B0782C + arg0->Dest[1]); /*0x69f4fb*/
              arg0->Dest[1] = (int)result; /*0x69f4fd*/
            }
          }
        }
      }
    }
  }
  return result; /*0x69f500*/
}
// 0x69F510
int JumpjetLocomotionClass::CheckWindowsErrorWrapper_1(int result)
{
  FootClass *Owner; // eax
  unsigned int *vtable2; // esi
  double v3; // st7
  int result; // eax

  if ( result->Dest[2] != g_OverlayTypeConfig || *(unsigned long long *)result->HeadToCoord != qword_B077FC ) /*0x69f52d*/
  {
    if ( *(unsigned char *)((*((int (**)(FootClass *))result->?->TechnoClass + 33))(result->?) + 3220) ) /*0x69f546*/
    {
      Owner = result->?; /*0x69f550*/
      if ( !IDA_LOBYTE(Owner[1].?) ) /*0x69f553*/
      {
        vtable2 = Owner[1].?; /*0x69f55d*/
        if ( vtable2 ) /*0x69f565*/
        {
          do /*0x69f597*/
          {
            if ( !vtable2[413] ) /*0x69f567*/
              WinAPI::Wrapper(-2147467261); /*0x69f576*/
            (*(void (__stdcall **)(unsigned int))(*(unsigned int *)vtable2[413] + 72))(vtable2[413]); /*0x69f584*/
            vtable2 = (unsigned int *)vtable2[434]; /*0x69f587*/
          }
          while ( vtable2 && vtable2 != (unsigned int *)vtable2[434] ); /*0x69f597*/
        }
      }
    }
  }
  if ( *(double *)&result->SpeedAccum >= 0.300000011920929 ) /*0x69f5a7*/
    v3 = 0.300000011920929; /*0x69f5ae*/
  else
    v3 = *(double *)&result->SpeedAccum; /*0x69f5a9*/
  *(double *)&result->SpeedAccum = v3; /*0x69f5b4*/
  result->SlopeTimer[3] = g_OverlayTypeConfig; /*0x69f5c0*/
  result = qword_B077FC; /*0x69f5c2*/
  *(unsigned long long *)result->Dest = qword_B077FC; /*0x69f5c7*/
  return result; /*0x69f5d3*/
}
// 0x69FB20
float * JumpjetLocomotionClass::ComputeAudio3DRotation_1(unsigned int * a1, float * a2, unsigned int * a3)
{
  int v3; // edi
  double v4; // st7
  int PreviousRamp; // edx
  int v6; // eax
  FootClass *Owner; // edx
  float v9[12]; // [esp+Ch] [ebp-30h] BYREF

  v3 = a1->SlopeTimer[2]; /*0x69fb29*/
  if ( v3 ) /*0x69fb32*/
  {
    PreviousRamp = a1->PreviousRamp; /*0x69fb3c*/
    v6 = a1->SlopeTimer[1]; /*0x69fb3f*/
    if ( PreviousRamp != -1 ) /*0x69fb45*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - PreviousRamp >= v6 ) /*0x69fb51*/
        v6 = 0; /*0x69fb57*/
      else
        v6 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - PreviousRamp; /*0x69fb53*/
    }
    v4 = (double)(v3 - v6) / (double)a1->SlopeTimer[2]; /*0x69fb63*/
  }
  else
  {
    v4 = 1.0; /*0x69fb34*/
  }
  if ( v4 != 1.0 || (Owner = a1->?, fabs(*(float *)&Owner->auxParticles1) >= 0.005) || fabs(*(float *)&Owner->auxParticles1) >= 0.005 ) /*0x69fba3*/
  {
    if ( a3 ) /*0x69fba7*/
      *a3 = -1; /*0x69fba9*/
  }
  qmemcpy(a2, Audio3D::ComputeRotation((IUnknown *)a1, v9, a3), 0x30u); /*0x69fbc8*/
  return a2; /*0x69fbca*/
}
// 0x69FBE0
int JumpjetLocomotionClass::DispatchVirtualCall_6(int * a1)
{
  int v1; // edi
  int v2; // eax

  v1 = *(unsigned int *)a1->LocomotionClass; /*0x69fbe9*/
  v2 = (*((int (**)(FootClass *))a1->?->TechnoClass + 111))(a1->?); /*0x69fbed*/
  return (*(int (__stdcall **)(ShipLocomotionClass *, unsigned int))(v1 + 124))(a1, *(uint8_t *)(v2 + 284)); /*0x69fc00*/
}
// 0x6A05C0
char JumpjetLocomotionClass::UpdateFacingDirection_2(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x6a05df*/
}
// 0x6A3E50
int JumpjetLocomotionClass::SmallStub_6A3E50(int a1)
{
  return 2; /*0x6a3e55*/
}
// 0x6A3EA0
int JumpjetLocomotionClass::StubReturnZero_14(int a1)
{
  return 0; /*0x6a3ea2*/
}
// 0x6A3EB0
int JumpjetLocomotionClass::DispatchCheckState_6A3EB0(TunnelLocomotionClass * aP0)
{
// 0x55abb0
  return JumpjetLocomotionClass::CheckState((LocomotionClass *)aP0); /*0x6a3eba*/
}
// 0x6A3F00
char JumpjetLocomotionClass::MoveToChecked_0(ShipLocomotionClass * aP0, int a2)
{
  char result; // al

  result = (unsigned char)aP0 + 60; /*0x6a3f0e*/
  if ( aP0->Dest[2] != g_OverlayTypeConfig || *(unsigned long long *)aP0->HeadToCoord != qword_B077FC ) /*0x6a3f20*/
// 0x6a01a0
    return WalkLocomotion::MoveTo((int)aP0 - 4, &aP0->Dest[2], a2); /*0x6a3f38*/
  return result; /*0x6a3f3d*/
}
// 0x6A4210
int JumpjetLocomotionClass::SetByteField_1(int a1)
{
  a1->IsTurretLockedDown = 0; /*0x6a4214*/
  return (int)a1->LocomotionClass; /*0x6a4218*/
}
// 0x6A4220
int JumpjetLocomotionClass::SetByteField_2(int a1)
{
  a1->IsTurretLockedDown = 1; /*0x6a4224*/
  return (int)a1->LocomotionClass; /*0x6a4228*/
}
// 0x6A4230
int JumpjetLocomotionClass::SmallStub_6A4230(int a1)
{
  return a1->MovementSpeed[1]; /*0x6a4237*/
}
// 0x6A4240
int JumpjetLocomotionClass::SmallStub_6A4240(int a1)
{
  return a1->TrackNumber; /*0x6a4247*/
}
// 0x6A4250
int JumpjetLocomotionClass::SmallStub_6A4250(int a1)
{
  return a1->HeadToCoord[2]; /*0x6a4257*/
}
// 0x6A4280
BOOL JumpjetLocomotionClass::GetLinkedLocomotorPointer_0(int a1)
{
  return *(unsigned int *)(a1 + 80) != 0; /*0x6a428e*/
}
// 0x6A4300
int JumpjetLocomotionClass::SmallStub_6A4300(int a1, const void * a2, int * a3)
{
  return ShipLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
// 0x6A4310
LONG JumpjetLocomotionClass::SmallStub_6A4310(int a1)
{
  return ShipLocomotionClass::AddRef(a1 - 4);
}
// 0x6A4320
LONG JumpjetLocomotionClass::SmallStub_6A4320(int a1)
{
  return ShipLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
// 0x6A4330
int JumpjetLocomotionClass::loc_6A4330(int a1, const void * a2, int * a3)
{
    return ShipLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}

// 0x6A4340
LONG JumpjetLocomotionClass::loc_6A4340(int a1)
{
    return ShipLocomotionClass::AddRef(a1 - 24);
}

// 0x6A4350
LONG JumpjetLocomotionClass::loc_6A4350(int a1)
{
    return ShipLocomotionClass::Release((volatile LONG *)(a1 - 24));
}

// 0x718080
bool JumpjetLocomotionClass::ShortFunc_718080(int a1)
{
  return IDA_LOBYTE(a1->Wobbles) == 1; /*0x71808b*/
}
// 0x718090
int JumpjetLocomotionClass::ShortFunc_718090()
{
  int result; // eax

  result = (*(int (__stdcall **)(char *))(*(unsigned int *)&this->LocomotionClass[4] + 16))(&this->LocomotionClass[4]); /*0x718096*/
  IDA_LOBYTE(result) = (unsigned char)result == 0; /*0x71809b*/
  return result; /*0x71809e*/
}
// 0x7180A0
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x7180a9*/
  {
    result = a2; /*0x7180b0*/
    TurnRate = a1->TurnRate; /*0x7180b4*/
    Speed = a1->Speed; /*0x7180b7*/
    Climb = a1->Climb; /*0x7180ba*/
  }
  else
  {
    TurnRate = a1->Owner->?[0]; /*0x7180d7*/
    Speed = a1->vtable2->?[1]; /*0x7180d9*/
    Climb = *(float *)&a1->Owner->?[2]; /*0x7180dc*/
    result = a2; /*0x7180df*/
  }
  *a2 = TurnRate; /*0x7180bf*/
  a2[1] = Speed; /*0x7180c1*/
  *((float *)a2 + 2) = Climb; /*0x7180c4*/
  return result; /*0x7180c7*/
}
// 0x718100
namespace gamemd {
{
  unsigned int *result; // eax

  result = (unsigned int *)(*(int (**)(unsigned int))(**(unsigned int **)(a3 + 8) + 892))(*(unsigned int *)(a3 + 8)); /*0x71810d*/
  {
    int v6; // ebx
    unsigned int *result; // eax
    FootClass *Owner; // ecx
    CellClass *v9; // eax
    int *v10; // [esp+0h] [ebp-10h]
    int v11; // [esp+4h] [ebp-Ch] BYREF
    char v12[4]; // [esp+8h] [ebp-8h]
    int v13; // [esp+Ch] [ebp-4h]

    result = (unsigned int *)(*((int (**)(FootClass *))this->?->TechnoClass + 223))(this->?); /*0x71810d*/
    if ( (unsigned char)result /*0x71814e*/
      || (result = (unsigned int *)(*((int (**)(FootClass *))this->?->TechnoClass + 224))(this->?), (unsigned char)result)
      || (result = (unsigned int *)(*((int (**)(FootClass *))this->?->TechnoClass + 117))(this->?), (unsigned char)result)
      || (result = (unsigned int *)(*((int (**)(FootClass *))this->?->TechnoClass + 118))(this->?), (unsigned char)result) )
    {
      this->?->movementDestination = 0; /*0x718213*/
    }
    else
    {
      *(unsigned int *)v12 = a4; /*0x718160*/
      Owner = this->?; /*0x718164*/
      v11 = a3; /*0x718167*/
      v13 = a5; /*0x71816b*/
      if ( Owner->uniqueId && (*((int (**)(FootClass *))Owner->TechnoClass + 11))(Owner) == 15 ) /*0x718181*/
      {
        v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v11); /*0x71818d*/
        Cell::ApplyDamage((Cell *)v9, (int)&g_BuildingLoadQueue_Array.?, 1, 1, 0); /*0x71819f*/
      }
      Factory::CalculateExitCell((Factory *)&v11, v6, a2, v10, v11, v12[0]); /*0x7181ac*/
      result = &this->MovingDestination[2]; /*0x7181ba*/
      if ( this->MovingDestination[2] == g_BuildingLoadQueue_Array.? /*0x7181d9*/
        && this->LastCoords[0] == *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))
        && this->LastCoords[1] == *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) )
      {
        return (*((unsigned int *(**)(FootClass *, unsigned int, int))this->?->TechnoClass + 288))(this->?, 0, 1); /*0x718202*/
      }
      else
      {
        IDA_LOBYTE(this->LastCoords[2]) = 1; /*0x7181db*/
        *(unsigned int *)this->__pad_18 = *result; /*0x7181e4*/
        this->MovingDestination[0] = this->LastCoords[0]; /*0x7181e9*/
        this->MovingDestination[1] = this->LastCoords[1]; /*0x7181ef*/
      }
    }
    return result; /*0x7181f2*/
  }
  else
  {
  int v10[3]; // [esp+4h] [ebp-Ch] BYREF
    v10[1] = a5; /*0x718160*/
    unsigned char * v7 = *(unsigned char **)(a3 + 8); /*0x718164*/
    v10[0] = a4; /*0x718167*/
    v10[2] = a6; /*0x71816b*/
    if ( v7[504] && (*(int (**)(unsigned char *))(*(unsigned int *)v7 + 44))(v7) == 15 ) /*0x718181*/
    {
      unsigned int * v8 = Coord::To_Cell(&DataGlobal_87F7E8, v10); /*0x71818d*/
      Cell::ApplyDamage(v8, (int)&DataGlobal_B0EBF8, 1, 1, 0); /*0x71819f*/
    }
  int v9; // [esp+0h] [ebp-10h]
    Factory::CalculateExitCell((unsigned int *)(a3 - 4), a1, a2, v10, v9, v10[0]); /*0x7181ac*/
    result = (unsigned int *)(a3 + 36); /*0x7181ba*/
    if ( *(unsigned int *)(a3 + 36) == DataGlobal_B0EBF8 /*0x7181d9*/
      && *(unsigned int *)(a3 + 40) == DataGlobal_B0EBFC
      && *(unsigned int *)(a3 + 44) == DataGlobal_B0EC00 )
    {
      return (unsigned int *)(*(int (**)(unsigned int, unsigned int, int))(**(unsigned int **)(a3 + 8) + 1152))( /*0x718202*/
                         *(unsigned int *)(a3 + 8),
                         0,
                         1);
    }
    else
    {
      *(unsigned char *)(a3 + 48) = 1; /*0x7181db*/
      *(unsigned int *)(a3 + 24) = *result; /*0x7181e4*/
      *(unsigned int *)(a3 + 28) = *(unsigned int *)(a3 + 40); /*0x7181e9*/
      *(unsigned int *)(a3 + 32) = *(unsigned int *)(a3 + 44); /*0x7181ef*/
    }
  }
  return result; /*0x7181f2*/
}
}

// 0x718230
int JumpjetLocomotionClass::ResetMovementState(int a1)
{
  *(unsigned int *)a1->__pad_18 = g_BuildingLoadQueue_Array.?; /*0x71823d*/
  a1->MovingDestination[0] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x718246*/
  a1->MovingDestination[1] = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)); /*0x71824f*/
  IDA_LOBYTE(a1->LastCoords[2]) = 0; /*0x718254*/
  IDA_BYTE2(a1->LastCoords[2]) = 0; /*0x718257*/
  return (int)a1->LocomotionClass; /*0x71825a*/
}
// 0x7192C0
char JumpjetLocomotionClass::UpdateFacingDirection_3(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x7192df*/
}
// 0x719C60
int JumpjetLocomotionClass::StubReturnZero_17(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x719c66*/
    return -2147467261; /*0x719c68*/
  *(IID *)a2 = g_CLSID_HoverLocomotion; /*0x719c76*/
  a2[3] = unk_7E9A9C; /*0x719c90*/
  return 0; /*0x719c6d*/
}
// 0x719CA0
HRESULT JumpjetLocomotionClass::InitMultiFieldArray_0(int * a1, int * pStm)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // eax
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x719ca7*/
  v3 = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, pStm); /*0x719cb2*/
  if ( v3 < 0 ) /*0x719cb6*/
    return v3; /*0x719cb6*/
  if ( a1 ) /*0x719cba*/
  {
    *(unsigned int *)a1->LocomotionClass = (void*)&LocomotionClass_vftable; /*0x719cbc*/
    *(unsigned int *)&a1->LocomotionClass[4] = (void*)&LocomotionClass_vftable; /*0x719cc2*/
    v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x719cc9*/
    a1->Timer[2] = 0; /*0x719cce*/
    a1->Timer[0] = v4; /*0x719cd5*/
    a1->Piggybackee = 0; /*0x719cd8*/
    *(unsigned int *)a1->LocomotionClass = (void*)&TeleportLocomotionClass_vftable; /*0x719cdf*/
    *(unsigned int *)&a1->LocomotionClass[4] = (void*)&TeleportLocomotionClass_vftable; /*0x719ce5*/
    *(unsigned int *)a1->__pad_18 = (void*)&TeleportLocomotionClass_vftable; /*0x719cec*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x719cff*/
  if ( !(unsigned char)pStm ) /*0x719d08*/
    return v3; /*0x719d34*/
  Piggybackee = *(unsigned int *)&a1->Piggybackee; /*0x719d0a*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x719d0d*/
  if ( Piggybackee ) /*0x719d12*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x719d17*/
  *p_Piggybackee = 0; /*0x719d21*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x719d2d*/
}
// 0x719D40
HRESULT JumpjetLocomotionClass::CheckWindowsErrorWrapper_2(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  TeleportLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x719d46*/
  v4 = a1; /*0x719d4b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x719d57*/
  if ( IPersistStream < 0 ) /*0x719d5b*/
    return IPersistStream; /*0x719d5b*/
  if ( !v4->Piggybackee ) /*0x719d66*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x719e03*/
    IDA_LOBYTE(a3) = 0; /*0x719e0f*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x719e14*/
    return IPersistStream; /*0x719e18*/
  }
  v6 = *(unsigned int *)v3->__pad_0; /*0x719d6c*/
  IDA_LOBYTE(a3) = 1; /*0x719d78*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x719d7d*/
  Piggybackee = *(unsigned int *)&v4->Piggybackee; /*0x719d80*/
  pPStm = 0; /*0x719d83*/
  if ( Piggybackee ) /*0x719d8d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, TeleportLocomotionClass **))Piggybackee)( /*0x719d9e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x719da2*/
    {
      v9 = (int *)a1; /*0x719dbb*/
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
// 0x719E20
int JumpjetLocomotionClass::SmallStub_719E20(int a1)
{
  return 2; /*0x719e25*/
}
// 0x719E30
int JumpjetLocomotionClass::UpdateAltitude(int a1, const void * a2, int * a3)
{
  int result; // eax
  char *pad_18; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)a1, a2, a3); /*0x719e42*/
  if ( result == -2147467262 ) /*0x719e4c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x719e5b*/
    {
      if ( a1 ) /*0x719e62*/
        pad_18 = a1->__pad_18; /*0x719e64*/
      else
        pad_18 = 0; /*0x719e69*/
      *a3 = (int)pad_18; /*0x719e6b*/
    }
    if ( *a3 ) /*0x719e6e*/
    {
      (*(void (__stdcall **)(TeleportLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 4))(a1); /*0x719e82*/
      return 0; /*0x719e85*/
    }
    else
    {
      return -2147467262; /*0x719e76*/
    }
  }
  return result; /*0x719e74*/
}
// 0x719E90
int JumpjetLocomotionClass::StubReturnZero_18(int a1, int a2)
{
  if ( !a2 ) /*0x719e96*/
    return -2147467261; /*0x719e98*/
  if ( IDA_LODWORD(a1->Wobbles) ) /*0x719ea4*/
    return -2147467259; /*0x719ecb*/
  IDA_LODWORD(a1->Wobbles) = a2; /*0x719eb2*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x719eb8*/
  return 0; /*0x719e9d*/
}
// 0x719EE0
int JumpjetLocomotionClass::StubReturnZero_19(int a1, unsigned int * a2)
{
  int v3; // ecx
  float Wobbles; // ecx

  if ( !a2 ) /*0x719ee9*/
    return -2147467261; /*0x719eeb*/
  v3 = *((unsigned int *)a1 - 3); /*0x719ef8*/
  if ( v3 ) /*0x719efd*/
  {
    *(unsigned int *)(v3 + 1064) = 0; /*0x719eff*/
    *(unsigned int *)(*((unsigned int *)a1 - 3) + 1068) = 0; /*0x719f08*/
  }
  Wobbles = a1->Wobbles; /*0x719f0e*/
  if ( Wobbles == 0.0 ) /*0x719f13*/
    return 1; /*0x719f20*/
  *(float *)a2 = Wobbles; /*0x719f15*/
  a1->Wobbles = 0.0; /*0x719f17*/
  return 0; /*0x719ef0*/
}
// 0x719F30
bool JumpjetLocomotionClass::StubReturnTrue_7(int a1)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x719f75*/
  if ( !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) ) /*0x719f3c*/
  {
    if ( IDA_LODWORD(a1->Wobbles) ) /*0x719f43*/
    {
      if ( !IDA_BYTE1(a1->Speed) ) /*0x719f4a*/
      {
        v1 = *((unsigned int *)a1 - 3); /*0x719f51*/
        if ( !*(unsigned char *)(v1 + 636) && !IDA_LODWORD(a1->Climb) && !*(unsigned char *)(v1 + 1709) ) /*0x719f65*/
          return 1; /*0x719f41*/
      }
    }
  }
  return result; /*0x719f71*/
}
// 0x719F80
int JumpjetLocomotionClass::LoadLocomotionFromStream_3(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  float *p_Wobbles; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x719f81*/
  if ( !a2 ) /*0x719f88*/
    return -2147467261; /*0x719f91*/
  p_Wobbles = &a1->Wobbles; /*0x719f9b*/
  if ( IDA_LODWORD(a1->Wobbles) ) /*0x719f98*/
  {
    a1 = 0; /*0x719fa4*/
    v5 = StreamClass::Set2((StreamClass *)&a1, p_Wobbles); /*0x719fb5*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x719fc3*/
      WinAPI::Wrapper(v5); /*0x719fc6*/
    if ( !a1 ) /*0x719fd1*/
      return -2147467259; /*0x719fda*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x719fe4*/
    if ( a1 ) /*0x719fec*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x719ff5*/
      return v6; /*0x719ffc*/
    }
  }
  else
  {
    a2 = 0; /*0x71a002*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x71a00c*/
      return -2147467259; /*0x71a00c*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x71a01d*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x71a021*/
    {
      v9 = a1; /*0x71a035*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x71a03d*/
      v8 = v9; /*0x71a042*/
      a2 = v9->LocomotionClass; /*0x71a045*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x71a027*/
      v8 = 0; /*0x71a02c*/
      a2 = 0; /*0x71a02e*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x71a053*/
      WinAPI::Wrapper(v7); /*0x71a056*/
    if ( !v8 ) /*0x71a061*/
      return -2147467259; /*0x71a06a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x71a074*/
    if ( a2 ) /*0x71a07c*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x71a081*/
  }
  return v6; /*0x719f8a*/
}
// 0x71A090
int JumpjetLocomotionClass::DispatchVirtualCall_7(unsigned int * a1, int a2)
{
  int result; // eax
  unsigned int *v3; // eax
  FootClass *Owner; // ecx
  unsigned int v5[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x71a090*/
  if ( !a2 ) /*0x71a099*/
  {
    v3 = (unsigned int *)(*(int (__stdcall **)(TeleportLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))( /*0x71a0a8*/
                     a1,
                     v6);
    v5[0] = *v3; /*0x71a0ad*/
    v5[1] = v3[1]; /*0x71a0b4*/
    Owner = *(unsigned int *)&a1->Owner; /*0x71a0bb*/
    v5[2] = v3[2]; /*0x71a0be*/
    return (*((int (**)(FootClass *, unsigned int *))Owner->TechnoClass + 61))(Owner, v5); /*0x71a0c9*/
  }
  return result; /*0x71a0d0*/
}
// 0x71A0E0
LONG JumpjetLocomotionClass::IUnknownAddRef(int a1)
{
// 0x55a950
  return COM::AddRef((LocomotionClass *)a1); /*0x71a0ea*/
}
// 0x71A0F0
LONG JumpjetLocomotionClass::IUnknownRelease(volatile LONG * a1)
{
// 0x55a970
  return COM::ReleaseRef((LocomotionClass *)a1); /*0x71a0fa*/
}
// 0x71A100
BOOL JumpjetLocomotionClass::ShortFunc_71A100(int a1)
{
  return *(unsigned int *)(a1 + 48) != 0; /*0x71a10e*/
}
// 0x71A120
int JumpjetLocomotionClass::SmallStub_71A120()
{
  return 76; /*0x71a125*/
}
// 0x71A130
TeleportLocomotionClass * JumpjetLocomotionClass::ConstructLocomotor(char a2)
{
  ILocomotion *Piggybackee; // eax

  Piggybackee = *(unsigned int *)&this->Piggybackee; /*0x71a133*/
  if ( Piggybackee ) /*0x71a138*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x71a13d*/
  LocomotionClass::Construct(); /*0x71a142*/
  if ( (a2 & 1) != 0 ) /*0x71a14c*/
    RA2_OPDEL(); /*0x71a14f*/
  return this->LocomotionClass; /*0x71a159*/
}
// 0x71A160
int JumpjetLocomotionClass::SmallStub_71A160(int a1, const void * a2, int * a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 4, a2, a3);
}
// 0x71A170
LONG JumpjetLocomotionClass::SmallStub_71A170(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 4);
}
// 0x71A180
LONG JumpjetLocomotionClass::SmallStub_71A180(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 4));
}
// 0x71A190
int JumpjetLocomotionClass::SmallStub_71A190(int a1, const void * a2, int * a3)
{
  return JumpjetLocomotionClass::UpdateAltitude(a1 - 24, a2, a3);
}
// 0x71A1A0
LONG JumpjetLocomotionClass::SmallStub_71A1A0(int a1)
{
  return JumpjetLocomotionClass::IUnknownAddRef(a1 - 24);
}
// 0x71A1B0
LONG JumpjetLocomotionClass::SmallStub_71A1B0(int a1)
{
  return JumpjetLocomotionClass::IUnknownRelease((volatile LONG *)(a1 - 24));
}
// 0x728A50
bool JumpjetLocomotionClass::ShortFunc_728A50(int a1)
{
  return a1->? != 0; /*0x728a5c*/
}
// 0x728A60
char JumpjetLocomotionClass::StubReturnZero_20(unsigned int * a1)
{
  char result; // al

  if ( !(*(uint8_t (__stdcall **)(TunnelLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) ) /*0x728a68*/
    return 0; /*0x728a68*/
  result = 1; /*0x728a72*/
  if ( a1->RefCount == 1 ) /*0x728a79*/
    return 0; /*0x728a7b*/
  return result; /*0x728a7d*/
}
// 0x728A90
unsigned int * JumpjetLocomotionClass::GetCoordinateConditional_0(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int TurnRate; // ecx
  int Speed; // edx
  float Climb; // esi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x728a99*/
  {
    result = a2; /*0x728aa0*/
    TurnRate = a1->TurnRate; /*0x728aa4*/
    Speed = a1->Speed; /*0x728aa7*/
    Climb = a1->Climb; /*0x728aaa*/
  }
  else
  {
    TurnRate = a1->Owner->?[0]; /*0x728ac7*/
    Speed = a1->vtable2->?[1]; /*0x728ac9*/
    Climb = *(float *)&a1->Owner->?[2]; /*0x728acc*/
    result = a2; /*0x728acf*/
  }
  *a2 = TurnRate; /*0x728aaf*/
  a2[1] = Speed; /*0x728ab1*/
  *((float *)a2 + 2) = Climb; /*0x728ab4*/
  return result; /*0x728ab7*/
}
// 0x728AF0
int JumpjetLocomotionClass::SyncMovementPosition(int a1, int a2, int a3, int a4)
{
  int result; // eax
  FootClass *Owner; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // eax
  int *v10; // eax
  int RefCount; // eax
  unsigned int v12[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*((int (**)(FootClass *))a1->?->TechnoClass + 223))(a1->?); /*0x728afd*/
  if ( !(unsigned char)result ) /*0x728b05*/
  {
    result = (*((int (**)(FootClass *))a1->?->TechnoClass + 224))(a1->?); /*0x728b10*/
    if ( !(unsigned char)result ) /*0x728b18*/
    {
      result = (*((int (**)(FootClass *))a1->?->TechnoClass + 117))(a1->?); /*0x728b23*/
      if ( !(unsigned char)result ) /*0x728b2b*/
      {
        result = (*((int (**)(FootClass *))a1->?->TechnoClass + 118))(a1->?); /*0x728b36*/
        if ( !(unsigned char)result ) /*0x728b3e*/
        {
          Owner = a1->?; /*0x728b44*/
          v6 = a3; /*0x728b48*/
          v7 = a4; /*0x728b4d*/
          v8 = a2; /*0x728b52*/
          v12[1] = a3; /*0x728b56*/
          v12[0] = a2; /*0x728b5a*/
          v12[2] = a4; /*0x728b5e*/
          v9 = (*((int (**)(FootClass *))Owner->TechnoClass + 34))(Owner); /*0x728b64*/
          v10 = (int *)(*(int (**)(int, int *, unsigned int *))(*(unsigned int *)v9 + 108))(v9, &a2, v12); /*0x728b78*/
          a1->CurrentState[0] = *v10; /*0x728b80*/
          a1->CurrentState[1] = v10[1]; /*0x728b86*/
          a1->CurrentState[2] = v10[2]; /*0x728b8c*/
          if ( (v8 != *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[352] /*0x728bb5*/
             || v6 != *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[356]
             || v7 != *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[360])
            && (*((int (**)(FootClass *))a1->?->TechnoClass + 114))(a1->?) < 0 )
          {
            RefCount = a1->?; /*0x728bb7*/
            if ( RefCount != 3 && RefCount != 5 && RefCount != 1 && RefCount != 6 && RefCount != 2 ) /*0x728bd1*/
            {
              (*((void (**)(FootClass *, unsigned int))a1->?->TechnoClass + 73))(a1->?, 0); /*0x728bda*/
              a1->? = 4; /*0x728be0*/
            }
          }
          result = a1->?; /*0x728be7*/
          if ( !result ) /*0x728bef*/
            a1->? = 1; /*0x728bf1*/
        }
      }
    }
  }
  return result; /*0x728bf8*/
}
// 0x7291D0
int JumpjetLocomotionClass::StubReturnZero_21(int a1, char a2)
{
  if ( a1->? == 4 ) /*0x7291d8*/
    return (a2 != 0) + 4; /*0x7291e5*/
  else
    return 0; /*0x7291eb*/
}
// 0x72A020
int JumpjetLocomotionClass::CheckStateWithOverride(TunnelLocomotionClass * aP0)
{
  int RefCount; // eax

  RefCount = *(unsigned int *)&aP0->RefCount; /*0x72a024*/
  if ( RefCount == 3 || RefCount == 2 || RefCount == 7 || RefCount == 6 || RefCount == 5 ) /*0x72a03e*/
    return 2; /*0x72a049*/
  else
// 0x55abb0
    return JumpjetLocomotionClass::CheckState((LocomotionClass *)aP0); /*0x72a041*/
}
// 0x72A060
bool JumpjetLocomotionClass::IsStateInRange(int a1)
{
  unsigned int RefCount; // eax

  RefCount = a1->?; /*0x72a064*/
  return RefCount < 2 || RefCount == 7 || RefCount == 2 || RefCount == 6; /*0x72a081*/
}
// 0x72A090
int JumpjetLocomotionClass::ConvertCoordToCell_3(int a2, void * a3)
{
  Cell *v3; // eax
  void *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = this; /*0x72a090*/
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 391)) ) /*0x72a098*/
    return 0; /*0x72a098*/
  v5 = a3; /*0x72a0b3*/
  v3 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&v5); /*0x72a0b8*/
  if ( (uint8_t)Cell::IsBuildableAdvanced(v3) ) /*0x72a0bf*/
    return 0; /*0x72a0d1*/
  else
    return 7; /*0x72a0c8*/
}
// 0x72A0E0
char JumpjetLocomotionClass::UpdateFacingDirection_4(int a1, int a2)
{
// 0x4c9220
  return FacingClass::Update((char *)a1->?->?, &a2); /*0x72a0ff*/
}
// 0x72A1C0
int JumpjetLocomotionClass::ShortFunc_72A1C0(int a1)
{
  int result; // eax

  result = JumpjetLocomotionClass::MissionStub11((IUnknown *)a1); /*0x72a1c6*/
  if ( !result ) /*0x72a1cd*/
  {
    if ( a1->? ) /*0x72a1cf*/
      return 7; /*0x72a1d6*/
  }
  return result; /*0x72a1db*/
}
// 0x72A1E0
BOOL JumpjetLocomotionClass::ShortFunc_72A1E0(int a1)
{
  int RefCount; // eax

  RefCount = a1->?; /*0x72a1e4*/
  return RefCount == 5 || RefCount == 6; /*0x72a1f3*/
}
// 0x75AB30
char JumpjetLocomotionClass::SmallStub_75AB30(int a1)
{
  return IDA_LOBYTE(a1->Wobbles); /*0x75ab37*/
}
// 0x75AB40
bool JumpjetLocomotionClass::ComputeFloatExpression_4(unsigned int * a1)
{
  return (*(uint8_t (__stdcall **)(WalkLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1) /*0x75ab8c*/
      && *(double *)a1->?->currentSpeed_percentage > 0.0
      && (a1->Dest[2] != g_AsyncMovieState
       || a1->HeadToCoord[0] != g_MovieFrameState1
       || a1->HeadToCoord[1] != g_MovieFrameState2);
}
// 0x75ABA0
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_2(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int Speed; // edx
  float Climb; // esi
  float *v5; // edi

  if ( (*(uint8_t (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 16))(a1) ) /*0x75aba9*/
  {
    result = a2; /*0x75abb0*/
    Speed = a1->Speed; /*0x75abb7*/
    Climb = a1->Climb; /*0x75abba*/
    v5 = (float *)a2; /*0x75abbd*/
    *a2 = a1->TurnRate; /*0x75abbf*/
  }
  else
  {
    result = a2; /*0x75abcc*/
    Speed = g_MovieFrameState1; /*0x75abd6*/
    Climb = *(float *)&g_MovieFrameState2; /*0x75abdc*/
    v5 = (float *)a2; /*0x75abe2*/
    *a2 = g_AsyncMovieState; /*0x75abe4*/
  }
  *((unsigned int *)v5 + 1) = Speed; /*0x75abc1*/
  v5[2] = Climb; /*0x75abc4*/
  return result; /*0x75abc7*/
}
// 0x75AC00
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_2(unsigned int * a1, unsigned int * a2)
{
  int Height; // edx
  float Accel; // eax
  FootClass *Owner; // edx
  int *location; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // esi

  if ( IDA_LODWORD(a1->Crash) == g_AsyncMovieState /*0x75ac2b*/
    && a1->Height == g_MovieFrameState1
    && IDA_LODWORD(a1->Accel) == g_MovieFrameState2 )
  {
    Owner = *(unsigned int *)&a1->Owner; /*0x75ac4b*/
    location = *(unsigned int *)&Owner->vtable3; /*0x75ac54*/
    v7 = *(unsigned int *)&Owner->vtable3; /*0x75ac56*/
    v8 = *(unsigned int *)&Owner->vtable2; /*0x75ac58*/
    v9 = location[2]; /*0x75ac5b*/
    *a2 = v7; /*0x75ac64*/
    a2[1] = v8; /*0x75ac66*/
    a2[2] = v9; /*0x75ac69*/
    return a2; /*0x75ac5e*/
  }
  else
  {
    Height = a1->Height; /*0x75ac34*/
    Accel = a1->Accel; /*0x75ac37*/
    *a2 = IDA_LODWORD(a1->Crash); /*0x75ac3c*/
    a2[1] = Height; /*0x75ac3e*/
    *((float *)a2 + 2) = Accel; /*0x75ac41*/
    return a2; /*0x75ac44*/
  }
}
// 0x75AC80
int JumpjetLocomotionClass::DrawVoxelAnimation(unsigned char * a1)
{
  IDA_BYTE1(a1->HeadToCoord[2]) = 1; /*0x75ac8a*/
  VoxelAnim::Draw((int)a1 - 4, (unsigned int *)1); /*0x75ac8e*/
  IDA_BYTE1(a1->HeadToCoord[2]) = 0; /*0x75ac93*/
  return (*(int (__stdcall **)(WalkLocomotionClass *))(*(unsigned int *)a1->LocomotionClass + 16))(a1); /*0x75ac9d*/
}
// 0x75ACB0
char JumpjetLocomotionClass::ConvertCoordToCell_4(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  IDA_LOBYTE(v4) = (*((int (**)(FootClass *))a1->?->TechnoClass + 223))(a1->?); /*0x75acbd*/
  if ( !(unsigned char)v4 ) /*0x75acc5*/
  {
    IDA_LOBYTE(v4) = (*((int (**)(FootClass *))a1->?->TechnoClass + 117))(a1->?); /*0x75acd0*/
    if ( !(unsigned char)v4 ) /*0x75acd8*/
    {
      IDA_LOBYTE(v4) = (*((int (**)(FootClass *))a1->?->TechnoClass + 118))(a1->?); /*0x75ace3*/
      if ( !(unsigned char)v4 ) /*0x75aceb*/
      {
        v4 = a2; /*0x75acf1*/
        v5 = a3; /*0x75acf5*/
        v6 = a4; /*0x75acf9*/
        *(unsigned int *)a1->__pad_18 = a2; /*0x75ad00*/
        a1->Dest[0] = v5; /*0x75ad03*/
        a1->Dest[1] = v6; /*0x75ad06*/
        if ( v4 == g_AsyncMovieState && v5 == g_MovieFrameState1 && v6 == g_MovieFrameState2 ) /*0x75ad25*/
        {
          if ( a1->Dest[2] == g_AsyncMovieState /*0x75ad72*/
            && a1->HeadToCoord[0] == g_MovieFrameState1
            && a1->HeadToCoord[1] == g_MovieFrameState2 )
          {
            IDA_LOBYTE(v4) = a1->HeadToCoord[2]; /*0x75ad74*/
            IDA_LOBYTE(a1->HeadToCoord[2]) = 0; /*0x75ad77*/
            if ( (unsigned char)v4 ) /*0x75ad7d*/
              IDA_LOBYTE(v4) = (*((char (**)(FootClass *))a1->?->TechnoClass + 339))(a1->?); /*0x75ad84*/
          }
        }
        else
        {
          a3 = v5; /*0x75ad27*/
          a2 = v4; /*0x75ad35*/
          a4 = v6; /*0x75ad39*/
          v4 = (int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &a2); /*0x75ad3d*/
          if ( (*(unsigned int *)(v4 + 320) & 0x100) != 0 ) /*0x75ad4b*/
          {
            v4 = Coord::ScaleToScreenY((Coord *)0x3C); /*0x75ad52*/
            a1->Dest[1] += v4; /*0x75ad57*/
          }
          IDA_LOBYTE(a1->HeadToCoord[2]) = 1; /*0x75ad5a*/
        }
      }
    }
  }
  return v4; /*0x75ad5e*/
}
// 0x75ADA0
int JumpjetLocomotionClass::DispatchVirtualCall_8(FootClass * aP0)
{
  int result; // eax

  result = (int)aP0; /*0x75ada0*/
  *(unsigned int *)aP0->__pad_18 = g_AsyncMovieState; /*0x75adad*/
  aP0->Dest[0] = g_MovieFrameState1; /*0x75adb6*/
  aP0->Dest[1] = g_MovieFrameState2; /*0x75adbf*/
  if ( aP0->Dest[2] == g_AsyncMovieState /*0x75ade5*/
    && aP0->HeadToCoord[0] == g_MovieFrameState1
    && aP0->HeadToCoord[1] == g_MovieFrameState2 )
  {
    IDA_LOBYTE(aP0->HeadToCoord[2]) = 0; /*0x75ade9*/
    IDA_BYTE2(aP0->HeadToCoord[2]) = 0; /*0x75adec*/
    return (*((int (**)(FootClass *))*(unsigned short *)&aP0->q54C->TechnoClass + 339))(*(unsigned short *)&aP0->q54C); /*0x75adf6*/
  }
  return result; /*0x75adfc*/
}
// 0x75AE00
char JumpjetLocomotionClass::SynchronizeFacingDirection_1(int a1, int a2)
{
// 0x4c9300
  return FacingClass::Set_SyncLog((char *)a1->?->?, &a2); /*0x75ae1f*/
}
// 0x75AE30
int JumpjetLocomotionClass::DispatchVirtualCall_9(int a1, int a2, int a3, int a4)
{
  char v4; // bl
  int result; // eax
  unsigned int v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  v6[0] = a2; /*0x75ae45*/
  v4 = a1->HeadToCoord[2]; /*0x75ae4d*/
  v6[1] = a3; /*0x75ae51*/
  v6[2] = a4; /*0x75ae59*/
  Voxel::DrawHelper((Voxel *)((char *)a1 - 4), v6); /*0x75ae5d*/
  result = g_AsyncMovieState; /*0x75ae62*/
  if ( a1->Dest[2] == g_AsyncMovieState /*0x75ae95*/
    && a1->HeadToCoord[0] == g_MovieFrameState1
    && a1->HeadToCoord[1] == g_MovieFrameState2
    && *(unsigned int *)a1->__pad_18 == g_AsyncMovieState
    && a1->Dest[0] == g_MovieFrameState1
    && a1->Dest[1] == g_MovieFrameState2 )
  {
    IDA_LOBYTE(a1->HeadToCoord[2]) = 0; /*0x75ae99*/
    if ( v4 ) /*0x75ae9d*/
      return (*((int (**)(FootClass *))a1->?->TechnoClass + 339))(a1->?); /*0x75aea4*/
  }
  return result; /*0x75aeaa*/
}
// 0x75C7E0
int JumpjetLocomotionClass::SmallStub_75C7E0(int a1)
{
  return 2; /*0x75c7e5*/
}
// 0x75C850
int JumpjetLocomotionClass::StubReturnZero_22(int a1, int a2)
{
  if ( !a2 ) /*0x75c856*/
    return -2147467261; /*0x75c858*/
  if ( IDA_LODWORD(a1->Climb) ) /*0x75c864*/
    return -2147467259; /*0x75c88b*/
  IDA_LODWORD(a1->Climb) = a2; /*0x75c872*/
  (*(void (__stdcall **)(int))(*(unsigned int *)a2 + 4))(a2); /*0x75c878*/
  return 0; /*0x75c85d*/
}
// 0x75C8A0
int JumpjetLocomotionClass::StubReturnZero_23(int a1, unsigned int * a2)
{
  float Climb; // eax

  if ( !a2 ) /*0x75c8a6*/
    return -2147467261; /*0x75c8a8*/
  Climb = a1->Climb; /*0x75c8b4*/
  if ( Climb == 0.0 ) /*0x75c8b9*/
    return 1; /*0x75c8c9*/
  *(float *)a2 = Climb; /*0x75c8bb*/
  a1->Climb = 0.0; /*0x75c8bd*/
  return 0; /*0x75c8ad*/
}
// 0x75C8E0
bool JumpjetLocomotionClass::CheckBaseClassState_0(int a1)
{
  return !(*(uint8_t (__stdcall **)(char *))(*((unsigned int *)a1 - 5) + 16))((char *)a1 - 20) /*0x75c910*/
      && IDA_LODWORD(a1->Climb)
      && !IDA_BYTE1(a1->Speed)
      && !*(unsigned char *)(*((unsigned int *)a1 - 3) + 1709);
}
// 0x75C920
int JumpjetLocomotionClass::LoadLocomotionFromStream_4(unsigned int * a1, unsigned int * a2)
{
  unsigned int *v2; // ebp
  float *p_Climb; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = a2; /*0x75c921*/
  if ( !a2 ) /*0x75c928*/
    return -2147467261; /*0x75c931*/
  p_Climb = &a1->Climb; /*0x75c93b*/
  if ( IDA_LODWORD(a1->Climb) ) /*0x75c938*/
  {
    a1 = 0; /*0x75c944*/
    v5 = StreamClass::Set2((StreamClass *)&a1, p_Climb); /*0x75c955*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x75c963*/
      WinAPI::Wrapper(v5); /*0x75c966*/
    if ( !a1 ) /*0x75c971*/
      return -2147467259; /*0x75c97a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(a1->LocomotionClass[0] + 12))(a1, v2); /*0x75c984*/
    if ( a1 ) /*0x75c98c*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(a1->LocomotionClass[0] + 8))(a1); /*0x75c995*/
      return v6; /*0x75c99c*/
    }
  }
  else
  {
    a2 = 0; /*0x75c9a2*/
    if ( a1 == (JumpjetLocomotionClass *)24 ) /*0x75c9ac*/
      return -2147467259; /*0x75c9ac*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))a1 - 6))( /*0x75c9bd*/
           (char *)a1 - 24,
           &unk_818858,
           &a1);
    if ( v7 >= 0 ) /*0x75c9c1*/
    {
      v9 = a1; /*0x75c9d5*/
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x75c9dd*/
      v8 = v9; /*0x75c9e2*/
      a2 = v9->LocomotionClass; /*0x75c9e5*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&a2); /*0x75c9c7*/
      v8 = 0; /*0x75c9cc*/
      a2 = 0; /*0x75c9ce*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x75c9f3*/
      WinAPI::Wrapper(v7); /*0x75c9f6*/
    if ( !v8 ) /*0x75ca01*/
      return -2147467259; /*0x75ca0a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, unsigned int *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x75ca14*/
    if ( a2 ) /*0x75ca1c*/
      (*(void (__stdcall **)(unsigned int *))(*a2 + 8))(a2); /*0x75ca21*/
  }
  return v6; /*0x75c92a*/
}
// 0x75CA30
int JumpjetLocomotionClass::DispatchVirtualCall_10(unsigned int * a1, int a2)
{
  int result; // eax
  unsigned int *v3; // eax
  FootClass *Owner; // ecx
  unsigned int v5[3]; // [esp+8h] [ebp-18h] BYREF
  unsigned char v6[12]; // [esp+14h] [ebp-Ch] BYREF

  result = a2; /*0x75ca30*/
  if ( !a2 ) /*0x75ca39*/
  {
    v3 = (unsigned int *)(*(int (__stdcall **)(WalkLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))( /*0x75ca48*/
                     a1,
                     v6);
    v5[0] = *v3; /*0x75ca4d*/
    v5[1] = v3[1]; /*0x75ca54*/
    Owner = *(unsigned int *)&a1->Owner; /*0x75ca5b*/
    v5[2] = v3[2]; /*0x75ca5e*/
    return (*((int (**)(FootClass *, unsigned int *))Owner->TechnoClass + 61))(Owner, v5); /*0x75ca69*/
  }
  return result; /*0x75ca70*/
}
// 0x75CA80
bool JumpjetLocomotionClass::IsPositionWithinThreshold_1(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v5; // ebp
  int v6; // kr04_4
  int v7; // eax
  unsigned char v9[12]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (int *)(*(int (__stdcall **)(WalkLocomotionClass *, unsigned char *))(*(unsigned int *)a1->LocomotionClass + 24))(a1, v9); /*0x75ca93*/
  v5 = v4[2]; /*0x75ca9b*/
  v6 = *v4; /*0x75cac7*/
  v7 = v4[1] / 256; /*0x75cadd*/
  return (uint16_t)(v6 / 256) == (uint16_t)(a2 / 256) /*0x75cb01*/
      && (unsigned short)v7 == (uint16_t)(a3 / 256)
      && (int)abs32(v5 - a4) <= dword_B45C28;
}
// 0x75CB20
char JumpjetLocomotionClass::SmallStub_75CB20(int a1)
{
  return IDA_BYTE2(a1->HeadToCoord[2]); /*0x75cb27*/
}
// 0x75CB30
unsigned int * JumpjetLocomotionClass::InitMultiFieldArray_1(unsigned int * a1)
{
  *(unsigned int *)a1->__pad_18 = g_AsyncMovieState; /*0x75cb40*/
  a1->Dest[0] = g_MovieFrameState1; /*0x75cb48*/
  a1->Dest[1] = g_MovieFrameState2; /*0x75cb51*/
  a1->Dest[2] = g_AsyncMovieState; /*0x75cb5a*/
  a1->HeadToCoord[0] = g_MovieFrameState1; /*0x75cb62*/
  a1->HeadToCoord[1] = g_MovieFrameState2; /*0x75cb6b*/
  return &a1->Dest[2]; /*0x75cb6e*/
}
// 0x75CBA0
BOOL JumpjetLocomotionClass::ShortFunc_75CBA0(int a1)
{
  return *(unsigned int *)(a1 + 32) != 0; /*0x75cbae*/
}
// 0x75CBC0
int JumpjetLocomotionClass::SetByteField_3(int a1)
{
  IDA_BYTE2(a1->HeadToCoord[2]) = 0; /*0x75cbc4*/
  return (int)a1->LocomotionClass; /*0x75cbc8*/
}
// 0x75CC30
int JumpjetLocomotionClass::SmallStub_75CC30(int a1, const void * a2, int * a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}
// 0x75CC40
LONG JumpjetLocomotionClass::SmallStub_75CC40(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 4);
}
// 0x75CC50
LONG JumpjetLocomotionClass::SmallStub_75CC50(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 4));
}
// 0x75CC60
int JumpjetLocomotionClass::SmallStub_75CC60(int a1, const void * a2, int * a3)
{
  return WalkLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}
// 0x75CC70
LONG JumpjetLocomotionClass::SmallStub_75CC70(int a1)
{
  return WalkLocomotionClass::AddRef(a1 - 24);
}
// 0x75CC80
LONG JumpjetLocomotionClass::SmallStub_75CC80(int a1)
{
  return WalkLocomotionClass::Release((volatile LONG *)(a1 - 24));
}