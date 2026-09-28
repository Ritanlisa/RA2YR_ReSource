// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Movement_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"

// 0x5B20F0
namespace gamemd {
long long Movement::CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9, void * a2, void * a4, void * a5, void * a6)
{
  bool v11; // zf
  unsigned int v13; // edi
  int Movement_field_00_low; // edx
  int v18; // eax
  int v20; // edx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // edx
  int result; // eax
  unsigned int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int *v39; // eax
  int v40; // eax
  void *v41; // ecx
  void *v42; // edx
  int v43; // eax
  unsigned int Vector3_field_0x04; // ecx
  int *v45; // eax
  double v46; // st7
  unsigned int v47; // ecx
  unsigned int Vector3_field_0x08; // esi
  unsigned int v49; // edx
  void *v50; // eax
  double *v51; // eax
  int v53; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // edi
  int v59; // eax
  int v60; // eax
  _DWORD *v61; // eax
  double *v62; // eax
  int GroundHeight; // edi
  int v64; // eax
  unsigned int v65; // edx
  int v66; // ecx
  unsigned int v67; // edx
  Movement *v68; // eax
  int *v69; // eax
  __int16 *v70; // eax
  double v71; // [esp+0h] [ebp-A8h]
  double v72; // [esp+0h] [ebp-A8h]
  double v73; // [esp+0h] [ebp-A8h]
  double v74; // [esp+8h] [ebp-A0h]
  double v75; // [esp+8h] [ebp-A0h]
  double v76; // [esp+8h] [ebp-A0h]
  double v77; // [esp+8h] [ebp-A0h]
  unsigned __int64 v78; // [esp+8h] [ebp-A0h]
  double v79; // [esp+8h] [ebp-A0h]
  double v80; // [esp+8h] [ebp-A0h]
  double v81; // [esp+8h] [ebp-A0h]
  double v82; // [esp+8h] [ebp-A0h]
  __int16 *v83; // [esp+Ch] [ebp-9Ch]
  _WORD *v84; // [esp+10h] [ebp-98h]
  Movement v85; // [esp+20h] [ebp-88h] BYREF
  int v86; // [esp+24h] [ebp-84h] BYREF
  _BYTE v87[24]; // [esp+28h] [ebp-80h] BYREF
  Math v88; // [esp+44h] [ebp-64h] BYREF
  double v89; // [esp+58h] [ebp-50h] BYREF
  double v90; // [esp+60h] [ebp-48h] BYREF
  double v91; // [esp+68h] [ebp-40h]
  double v92; // [esp+78h] [ebp-30h] BYREF
  unsigned int v93[4]; // [esp+80h] [ebp-28h]
  double v94[3]; // [esp+90h] [ebp-18h] BYREF

  _ESI = a1; /*0x5b2104*/
  v11 = *a4 == (void *)g_MissionQueueFrame.localVariables[291]; /*0x5b210e*/
  *(_DWORD *)v88.__pad_0 = a1; /*0x5b2110*/
  if ( v11 /*0x5b2134*/
    && a4[1] == (void *)g_MissionQueueFrame.localVariables[292]
    && a4[2] == (void *)g_MissionQueueFrame.localVariables[293] )
  {
    Math::Hypotenuse2D((int *)a1); /*0x5b213c*/
    __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b214a*/
    Math::CalcAngle(_ESI[2], v74); /*0x5b214f*/
    __asm { fsub ds:dbl_7E2820 } /*0x5b2154*/
    __asm { fmul ds:dbl_7E2818 }
    *(_WORD *)v88.__pad_0 = Math::RoundToInt(a3); /*0x5b216b*/
    v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b217e*/
    IDA_LOWORD(v86) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp((Math *)&v85, &v86, a5) ) /*0x5b2189*/
    {
      IDA_LOWORD(v85.Movement_field_00) = v86; /*0x5b2197*/
    }
    else if ( *(__int16 *)Math::Sub16((Math *)&v86, &v89, &v85) >= 0 ) /*0x5b21b5*/
    {
      IDA_LOWORD(v85.Movement_field_00) += *a5; /*0x5b21c4*/
    }
    else
    {
      IDA_LOWORD(v85.Movement_field_00) -= *a5; /*0x5b21ba*/
    }
    *(_DWORD *)v88.__pad_0 = *(__int16 *)Vector::ToFacingMath((int *)&v89, v84) - 0x3FFF; /*0x5b21de*/
    __asm /*0x5b21e4*/
    {
      fild dword ptr [esp+98h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp qword ptr [esp+98h+var_50]
    }
    Vector3::Magnitude((int *)_ESI); /*0x5b21f2*/
    __asm /*0x5b21f7*/
    {
      fstp qword ptr [esp+98h+var_64.field_4]
      fld qword ptr [esp+98h+var_50]
      fcomp ds:dbl_7E2800
      fnstsw ax
    }
    if ( (_AX & 0x4000) == 0 ) /*0x5b220a*/
    {
      v13 = IDA_HIDWORD(v89); /*0x5b220c*/
      Math::ArcTan2(v89); /*0x5b2216*/
      __asm { fdivr qword ptr [esi] } /*0x5b221b*/
      v71 = COERCE_DOUBLE(IDA___PAIR64__(v13, IDA_LODWORD(v89))); /*0x5b2222*/
      __asm { fstp qword ptr [esi] } /*0x5b2223*/
      *_ESI = _RT1; /*0x5b2223*/
      Math::ArcTan2(v71); /*0x5b2225*/
      __asm { fdivr qword ptr [esi+8] } /*0x5b222a*/
      __asm { fstp qword ptr [esi+8] }
      _ESI[1] = _RT1; /*0x5b2230*/
    }
    *(_DWORD *)v88.__pad_0 = SLOWORD(v85.Movement_field_00) - 0x3FFF; /*0x5b2241*/
    __asm /*0x5b2245*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v75); /*0x5b2252*/
    __asm { fmul qword ptr [esi] } /*0x5b2257*/
    Movement_field_00_low = SLOWORD(v85.Movement_field_00); /*0x5b2259*/
    __asm { fstp qword ptr [esi] } /*0x5b225e*/
    *_ESI = _RT1; /*0x5b225e*/
    *(_DWORD *)v88.__pad_0 = Movement_field_00_low - 0x3FFF; /*0x5b2266*/
    __asm /*0x5b226a*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::ArcTan2(v76); /*0x5b2277*/
    __asm { fmul qword ptr [esi+8] } /*0x5b227c*/
    v18 = SLOWORD(v85.Movement_field_00); /*0x5b227f*/
    __asm { fstp qword ptr [esi+8] } /*0x5b2284*/
    _ESI[1] = _RT1; /*0x5b2284*/
    *(_DWORD *)v88.__pad_0 = v18 - 0x3FFF; /*0x5b228c*/
    __asm /*0x5b2290*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::SinCos(v77); /*0x5b229d*/
    __asm { fmul qword ptr [esp+0A0h+var_64.field_4] } /*0x5b22a2*/
    v20 = *(_DWORD *)_ESI; /*0x5b22ab*/
    __asm { fst qword ptr [esi+10h] } /*0x5b22ad*/
    _ESI[2] = _RT1; /*0x5b22ad*/
    *(_QWORD *)&v92 = IDA___PAIR64__(*((_DWORD *)_ESI + 1), v20); /*0x5b22b3*/
    __asm { fld [esp+98h+var_30] } /*0x5b22be*/
    v22 = *((_DWORD *)_ESI + 3); /*0x5b22c2*/
    v93[0] = *((_DWORD *)_ESI + 2); /*0x5b22c5*/
    v93[1] = v22; /*0x5b22c9*/
    IDA_LOWORD(v23) = Math::RoundToInt(a3); /*0x5b22cd*/
    __asm { fld qword ptr [esp+98h+var_28] } /*0x5b22d2*/
    v24 = v23; /*0x5b22d6*/
    IDA_LOWORD(v25) = Math::RoundToInt(a3); /*0x5b22d8*/
    IDA_HIDWORD(v92) = v25; /*0x5b22dd*/
    IDA_LOWORD(v26) = Math::RoundToInt(a3); /*0x5b22e1*/
    v78 = IDA___PAIR64__(v26 + a2->Vector3_field_0x08, IDA_HIDWORD(v92) + a2->Vector3_field_0x04); /*0x5b22f9*/
    v27 = Coord::Subtract((Coord *)&v92, *(_DWORD *)a2->__pad_0 + v24, v78, IDA_SHIDWORD(v78)); /*0x5b22ff*/
    v28 = v27[1]; /*0x5b2308*/
    v29 = v27[2]; /*0x5b230b*/
    *(_DWORD *)a2->__pad_0 = *v27; /*0x5b230e*/
    a2->Vector3_field_0x04 = v28; /*0x5b2310*/
    a2->Vector3_field_0x08 = v29; /*0x5b2313*/
    __asm /*0x5b2316*/
    {
      fld qword ptr [esi+10h]
      fld qword ptr [esi+8]
      fld qword ptr [esi]
      fld st(1)
      fmul st, st(2)
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fld st(3)
      fmul st, st(4)
      faddp st(1), st
    }
    __asm
    {
      fstp [esp+0A0h+var_A0]; double
      fstp st
      fstp st
      fstp st
    }
    Math::Sqrt(v79); /*0x5b233a*/
    IDA_LOWORD(result) = Math::RoundToInt(a3); /*0x5b2342*/
    return result; /*0x5b234d*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2352*/
  v92 = *a1; /*0x5b2357*/
  __asm { fld [esp+98h+var_30] } /*0x5b2365*/
  v31 = *((_DWORD *)a1 + 3); /*0x5b2369*/
  v93[0] = *((_DWORD *)_ESI + 2); /*0x5b236c*/
  v93[1] = v31; /*0x5b2370*/
  IDA_LOWORD(v32) = Math::RoundToInt(a3); /*0x5b2374*/
  __asm { fld qword ptr [esp+98h+var_28] } /*0x5b2379*/
  v33 = v32; /*0x5b237d*/
  IDA_LOWORD(v34) = Math::RoundToInt(a3); /*0x5b237f*/
  IDA_HIDWORD(v92) = v34; /*0x5b2384*/
  IDA_LOWORD(v35) = Math::RoundToInt(a3); /*0x5b2388*/
  v36 = Coord::Subtract( /*0x5b23a6*/
          (Coord *)&v90,
          *(_DWORD *)a2->__pad_0 + v33,
          a2->Vector3_field_0x04 + IDA_HIDWORD(v92),
          a2->Vector3_field_0x08 + v35);
  v37 = v36[1]; /*0x5b23b2*/
  v38 = v36[2]; /*0x5b23b5*/
  *(_DWORD *)a2->__pad_0 = *v36; /*0x5b23b8*/
  a2->Vector3_field_0x04 = v37; /*0x5b23be*/
  a2->Vector3_field_0x08 = v38; /*0x5b23c4*/
  v39 = Vector3::Subtract(a2, (int *)&v90, a4); /*0x5b23c7*/
  v40 = Coord::Length((Coord *)v39); /*0x5b23ce*/
  v41 = *a4; /*0x5b23d3*/
  v42 = a4[1]; /*0x5b23d5*/
  IDA_LODWORD(v89) = v40; /*0x5b23d8*/
  v43 = *(_DWORD *)a2->__pad_0; /*0x5b23dc*/
  v88.field_4 = v41; /*0x5b23de*/
  Vector3_field_0x04 = a2->Vector3_field_0x04; /*0x5b23e2*/
  v88.field_8 = v42; /*0x5b23e5*/
  *(_DWORD *)v87 = v43; /*0x5b23e9*/
  *(_DWORD *)&v87[4] = Vector3_field_0x04; /*0x5b23f5*/
  v45 = Coord2D::Sub((Coord2D *)v87, (int *)&v90, &v88.field_4); /*0x5b23ff*/
  v46 = Vector::TwoDMagnitudeMath(v45); /*0x5b2406*/
  v47 = (unsigned int)a4[2]; /*0x5b240b*/
  Vector3_field_0x08 = a2->Vector3_field_0x08; /*0x5b240e*/
  v49 = (unsigned int)a4[1]; /*0x5b2411*/
  v88.field_4 = v50; /*0x5b2414*/
  v51 = (double *)Coord::Subtract( /*0x5b242c*/
                    (Coord *)&v90,
                    (int)*a4 - *(_DWORD *)a2->__pad_0,
                    v49 - a2->Vector3_field_0x04,
                    v47 - Vector3_field_0x08);
  v92 = *v51; /*0x5b2433*/
  __asm { fild dword ptr [esp+98h+var_30] } /*0x5b243e*/
  v93[0] = *((_DWORD *)v51 + 2); /*0x5b2449*/
  __asm /*0x5b2454*/
  {
    fstp qword ptr [esp+98h+var_48]
    fild dword ptr [esp+98h+var_30+4]
  }
  *(double *)v87 = v90; /*0x5b2464*/
  __asm { fstp [esp+98h+var_40] } /*0x5b246c*/
  __asm
  {
    fild [esp+98h+var_28]
    fstp [esp+98h+var_70]
  }
  *(double *)&v87[8] = v91; /*0x5b2489*/
  qmemcpy(v94, v87, sizeof(v94)); /*0x5b248d*/
  _ESI = *(_DWORD *)v88.__pad_0; /*0x5b248f*/
  __asm { fld qword ptr [esi+8] } /*0x5b2498*/
  __asm
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v72, **(double **)v88.__pad_0); /*0x5b24a5*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24aa*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b24c5*/
  __asm { fld [esp+98h+var_10] } /*0x5b24d5*/
  v86 = *(_DWORD *)v88.__pad_0; /*0x5b24e1*/
  __asm /*0x5b24e5*/
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v73, v94[0]); /*0x5b24ea*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24ef*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v87 = Math::RoundToInt(v46); /*0x5b2510*/
  if ( Math::Abs16Cmp((Math *)&v86, v87, a5) ) /*0x5b2515*/
  {
    IDA_LOWORD(v86) = *(_WORD *)v87; /*0x5b2523*/
  }
  else if ( *(__int16 *)Math::Sub16((Math *)v87, &v88, &v86) >= 0 ) /*0x5b2541*/
  {
    IDA_LOWORD(v86) = *a5 + v86; /*0x5b2550*/
  }
  else
  {
    IDA_LOWORD(v86) = v86 - *a5; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((int *)_ESI); /*0x5b2557*/
  Function::41C430((double *)_ESI); /*0x5b255e*/
  __asm { fstp qword ptr [esp+98h+var_88.field_8] } /*0x5b2568*/
  *(_DWORD *)v88.__pad_0 = (__int16)v86 - 0x3FFF; /*0x5b2575*/
  __asm /*0x5b2579*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::ArcTan2(v80); /*0x5b2586*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b258b*/
  v53 = (__int16)v86; /*0x5b258f*/
  __asm { fstp qword ptr [esi] } /*0x5b2594*/
  *(double *)_ESI = _RT1; /*0x5b2594*/
  *(_DWORD *)v88.__pad_0 = v53 - 0x3FFF; /*0x5b259c*/
  __asm /*0x5b25a0*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::SinCos(v81); /*0x5b25ad*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b25b2*/
  __asm
  {
    fchs
    fstp qword ptr [esi+8]
  }
  *(double *)(_ESI + 8) = _RT1; /*0x5b25bd*/
  Math::Hypotenuse2D((int *)_ESI); /*0x5b25c0*/
  __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b25ce*/
  Math::CalcAngle(*(double *)(_ESI + 16), v82); /*0x5b25d3*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b25d8*/
  __asm { fmul ds:dbl_7E2818 }
  *(_WORD *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b25ec*/
  v85.Movement_field_00 = *(_DWORD *)v88.__pad_0; /*0x5b25fa*/
  if ( a6
    || !a7 && (int)v88.field_4 <= (a8 != 0 ? 6 : 3) << 8
    || (unsigned __int8)((unsigned int)((*(_DWORD *)a5 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !a9 ) /*0x5b28a1*/
    {
      IDA_LOWORD(v89) = 256; /*0x5b28b6*/
      v68 = (Movement *)Movement::Check((Movement *)a5, &v88, &v89); /*0x5b28bd*/
      v69 = Movement::DivideAndStoreScaled(v68, (int *)&v88.field_4, 2); /*0x5b28c4*/
      v70 = (__int16 *)Vector::ToFacingMath((int *)v87, v69); /*0x5b28d6*/
      Movement::CompareAbsCoords(&v85, v70, v83); /*0x5b28e0*/
    }
    goto LABEL_49; /*0x5b28e0*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2640*/
  v90 = *(double *)_ESI; /*0x5b2645*/
  __asm { fld qword ptr [esp+98h+var_48] } /*0x5b2653*/
  v56 = *(_DWORD *)(_ESI + 12); /*0x5b2657*/
  IDA_LODWORD(v91) = *(_DWORD *)(_ESI + 8); /*0x5b265a*/
  IDA_HIDWORD(v91) = v56; /*0x5b265e*/
  IDA_LOWORD(v57) = Math::RoundToInt(v46); /*0x5b2662*/
  __asm { fld [esp+98h+var_40] } /*0x5b2667*/
  v58 = v57; /*0x5b266b*/
  IDA_LOWORD(v59) = Math::RoundToInt(v46); /*0x5b266d*/
  IDA_HIDWORD(v90) = v59; /*0x5b2672*/
  IDA_LOWORD(v60) = Math::RoundToInt(v46); /*0x5b2676*/
  v61 = Coord::Subtract((Coord *)&v88.field_4, 6 * v58, 6 * IDA_HIDWORD(v90), 6 * v60); /*0x5b2695*/
  v62 = (double *)Coord::Subtract( /*0x5b26b9*/
                    (Coord *)v87,
                    *(_DWORD *)a2->__pad_0 + *v61,
                    a2->Vector3_field_0x04 + v61[1],
                    a2->Vector3_field_0x08 + v61[2]);
  v90 = *v62; /*0x5b26c0*/
  IDA_LODWORD(v91) = *((_DWORD *)v62 + 2); /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight(&v90); /*0x5b26eb*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v90)->flags[0] & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += g_MissionQueueFrame.localVariables[304]; /*0x5b26fd*/
  v64 = IDA_SLODWORD(v89) / 256; /*0x5b2713*/
  if ( a7 || a8 ) /*0x5b271f*/
  {
    v64 = 10; /*0x5b272d*/
  }
  else if ( v64 >= 5 ) /*0x5b2724*/
  {
    v64 = 5; /*0x5b2726*/
  }
  if ( !a9 ) /*0x5b2737*/
  {
    v65 = a2->Vector3_field_0x08; /*0x5b2744*/
    v66 = v65 - g_MissionQueueFrame.localVariables[307] * v64 - GroundHeight; /*0x5b274b*/
    if ( v66 >= -20 ) /*0x5b2750*/
    {
      if ( v66 <= 20 ) /*0x5b275a*/
        goto LABEL_34; /*0x5b275a*/
      v67 = v65 - 18; /*0x5b275c*/
    }
    else
    {
      v67 = v65 + 18; /*0x5b2752*/
    }
    a2->Vector3_field_0x08 = v67; /*0x5b275f*/
  LABEL_34:
    if ( v66 >= g_MissionQueueFrame.localVariables[307] / -2 ) /*0x5b2773*/
    {
      if ( v66 <= g_MissionQueueFrame.localVariables[307] / 2 ) /*0x5b27fa*/
      {
        IDA_LOWORD(v88.field_4) = 0x4000; /*0x5b2875*/
        IDA_LOWORD(v89) = *a5 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords(&v85, (__int16 *)&v88.field_4, (__int16 *)&v89); /*0x5b289a*/
      }
      else
      {
        *(_WORD *)v88.__pad_0 = 18432; /*0x5b27ff*/
        IDA_LOWORD(v89) = *a5 / 2; /*0x5b2812*/
        *(_DWORD *)v87 = IDA_LODWORD(v89); /*0x5b281f*/
        if ( Math::Abs16Cmp((Math *)&v85, &v88, (__int16 *)v87) ) /*0x5b2829*/
        {
          IDA_LOWORD(v85.Movement_field_00) = *(_WORD *)v88.__pad_0; /*0x5b2837*/
        }
        else if ( *(__int16 *)Math::Sub16(&v88, &v89, &v85) >= 0 ) /*0x5b2858*/
        {
          IDA_LOWORD(v85.Movement_field_00) += *(_WORD *)v87; /*0x5b286b*/
        }
        else
        {
          IDA_LOWORD(v85.Movement_field_00) -= *(_WORD *)v87; /*0x5b285f*/
        }
      }
    }
    else
    {
      *(_WORD *)v87 = 0x2000; /*0x5b2778*/
      IDA_LOWORD(v89) = *a5 / 2; /*0x5b278b*/
      *(_DWORD *)v88.__pad_0 = IDA_LODWORD(v89); /*0x5b2798*/
      if ( Math::Abs16Cmp((Math *)&v85, v87, (__int16 *)v88.__pad_0) ) /*0x5b27a2*/
      {
        IDA_LOWORD(v85.Movement_field_00) = *(_WORD *)v87; /*0x5b27b0*/
      }
      else if ( *(__int16 *)Math::Sub16((Math *)v87, &v89, &v85) >= 0 ) /*0x5b27d1*/
      {
        IDA_LOWORD(v85.Movement_field_00) += *(_WORD *)v88.__pad_0; /*0x5b27e7*/
      }
      else
      {
        IDA_LOWORD(v85.Movement_field_00) -= *(_WORD *)v88.__pad_0; /*0x5b27d8*/
      }
    }
  }
  LABEL_49:
  Movement::UpdateLocomotion((double *)_ESI, (__int16 *)&v85); /*0x5b28e5*/
  if ( a7 ) /*0x5b28f6*/
    v93[0] = 0; /*0x5b28f8*/
  else
    v93[0] = (signed int)v93[0] / 4; /*0x5b290f*/
  return Coord::Length((Coord *)&v92); /*0x5b2347*/
}
} // namespace gamemd
// 0x5B2930
namespace gamemd {
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3)
{
  IDA_LOWORD(a3) = IDA_LOWORD(this->Movement_field_00) + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/
}
} // namespace gamemd
// 0x5B2970
namespace gamemd {
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{
  IDA_LOWORD(a3) = SLOWORD(this->Movement_field_00) / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/
}
} // namespace gamemd