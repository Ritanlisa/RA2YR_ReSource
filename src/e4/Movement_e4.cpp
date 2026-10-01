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
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Bounds_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Vector3_e4.hpp"

// 0x5B20F0
namespace gamemd {
void Movement::CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9)
{

  unsigned int * v11;
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
  void * v37;
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
  unsigned int *v61; // eax
  double *v62; // eax
  int GroundHeight; // edi
  int v64; // eax
  unsigned int v65; // edx
  int v66; // ecx
  unsigned int v67; // edx
  Movement *v68; // eax
  int *v69; // eax
  int16_t *v70; // eax
  double v71; // [esp+0h] [ebp-A8h]
  double v72; // [esp+0h] [ebp-A8h]
  double v73; // [esp+0h] [ebp-A8h]
  double v74; // [esp+8h] [ebp-A0h]
  double v75; // [esp+8h] [ebp-A0h]
  double v76; // [esp+8h] [ebp-A0h]
  double v77; // [esp+8h] [ebp-A0h]
  uint64_t v78; // [esp+8h] [ebp-A0h]
  double v79; // [esp+8h] [ebp-A0h]
  double v80; // [esp+8h] [ebp-A0h]
  double v81; // [esp+8h] [ebp-A0h]
  double v82; // [esp+8h] [ebp-A0h]
  int16_t *v83; // [esp+Ch] [ebp-9Ch]
  unsigned short *v84; // [esp+10h] [ebp-98h]
  Movement v85; // [esp+20h] [ebp-88h] BYREF
  int v86; // [esp+24h] [ebp-84h] BYREF
  unsigned char v87[24]; // [esp+28h] [ebp-80h] BYREF
  Math v88; // [esp+44h] [ebp-64h] BYREF
  double v89; // [esp+58h] [ebp-50h] BYREF
  double v90; // [esp+60h] [ebp-48h] BYREF
  double v91; // [esp+68h] [ebp-40h]
  double v92; // [esp+78h] [ebp-30h] BYREF
  unsigned int v93[4]; // [esp+80h] [ebp-28h]
  double v94[3]; // [esp+90h] [ebp-18h] BYREF

  _ESI = (unsigned int)(a1);
  v11 = (unsigned int)((unsigned int)(*aP3 == (void *)g_MissionQueueFrame.localVariables[291]));
  *(unsigned int *)v88.__pad_0 = (unsigned int)(a1); /*0x5b2110*/
  if ( v11 /*0x5b2134*/
    && aP3[1] == (void *)g_MissionQueueFrame.localVariables[292]
    && aP3[2] == (void *)g_MissionQueueFrame.localVariables[293] )
  {
    Math::Hypotenuse2D((int *)a1); /*0x5b213c*/
    __asm { fstp [esp+0A0h+var_A0]; double } /*0x5b214a*/
    Math::CalcAngle(_ESI[2], v74); /*0x5b214f*/
    __asm { fsub ds:dbl_7E2820 } /*0x5b2154*/
    __asm { fmul ds:dbl_7E2818 }
    *(unsigned short *)v88.__pad_0 = Math::RoundToInt(a3); /*0x5b216b*/
    v85.Movement_field_00 = *(unsigned int *)v88.__pad_0; /*0x5b217e*/
    LOWORD(v86) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp((Math *)&v85, &v86, aP4) ) /*0x5b2189*/
    {
      LOWORD(v85.Movement_field_00) = v86; /*0x5b2197*/
    }
    else if ( *(int16_t *)Math::Sub16((Math *)&v86, &v89, &v85) >= 0 ) /*0x5b21b5*/
    {
      LOWORD(v85.Movement_field_00) += *aP4; /*0x5b21c4*/
    }
    else
    {
      LOWORD(v85.Movement_field_00) -= *aP4; /*0x5b21ba*/
    }
    *(unsigned int *)v88.__pad_0 = *(int16_t *)Vector::ToFacingMath((int *)&v89, v84) - 0x3FFF; /*0x5b21de*/
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
      v13 = HIDWORD(v89); /*0x5b220c*/
      Math::ArcTan2(v89); /*0x5b2216*/
      __asm { fdivr qword ptr [esi] } /*0x5b221b*/
      v71 = COERCE_DOUBLE(__PAIR64__(v13, LODWORD(v89))); /*0x5b2222*/
      __asm { fstp qword ptr [esi] } /*0x5b2223*/
      *_ESI = _RT1; /*0x5b2223*/
      Math::ArcTan2(v71); /*0x5b2225*/
      __asm { fdivr qword ptr [esi+8] } /*0x5b222a*/
      __asm { fstp qword ptr [esi+8] }
      _ESI[1] = _RT1; /*0x5b2230*/
    }
    *(unsigned int *)v88.__pad_0 = SLOWORD(v85.Movement_field_00) - 0x3FFF; /*0x5b2241*/
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
    *(unsigned int *)v88.__pad_0 = Movement_field_00_low - 0x3FFF; /*0x5b2266*/
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
    *(unsigned int *)v88.__pad_0 = v18 - 0x3FFF; /*0x5b228c*/
    __asm /*0x5b2290*/
    {
      fild dword ptr [esp+0A0h+var_64.__pad_0]
      fmul ds:dbl_7E2810
      fstp [esp+0A0h+var_A0]; double
    }
    Math::SinCos(v77); /*0x5b229d*/
    __asm { fmul qword ptr [esp+0A0h+var_64.field_4] } /*0x5b22a2*/
    v20 = *(unsigned int *)_ESI; /*0x5b22ab*/
    __asm { fst qword ptr [esi+10h] } /*0x5b22ad*/
    _ESI[2] = _RT1; /*0x5b22ad*/
    *(unsigned long long *)&v92 = __PAIR64__(*((unsigned int *)_ESI + 1), v20); /*0x5b22b3*/
    __asm { fld [esp+98h+var_30] } /*0x5b22be*/
    v22 = *((unsigned int *)_ESI + 3); /*0x5b22c2*/
    v93[0] = *((unsigned int *)_ESI + 2); /*0x5b22c5*/
    v93[1] = v22; /*0x5b22c9*/
    LOWORD(v23) = Math::RoundToInt(a3); /*0x5b22cd*/
    __asm { fld qword ptr [esp+98h+var_28] } /*0x5b22d2*/
    v24 = v23; /*0x5b22d6*/
    LOWORD(v25) = Math::RoundToInt(a3); /*0x5b22d8*/
    HIDWORD(v92) = v25; /*0x5b22dd*/
    LOWORD(v26) = Math::RoundToInt(a3); /*0x5b22e1*/
    v78 = __PAIR64__(v26 + a2->Vector3_field_0x08, HIDWORD(v92) + a2->Vector3_field_0x04); /*0x5b22f9*/
    v27 = Coord::Subtract((Coord *)&v92, *(unsigned int *)a2->__pad_0 + v24, v78, SHIDWORD(v78)); /*0x5b22ff*/
    v28 = v27[1]; /*0x5b2308*/
    v29 = v27[2]; /*0x5b230b*/
    *(unsigned int *)a2->__pad_0 = *v27; /*0x5b230e*/
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
      fmul st, st(4, void * a1, void * a2)
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
    LOWORD(result, unsigned int a2) = Math::RoundToInt(a3); /*0x5b2342*/
    return result; /*0x5b234d*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2352*/
  v92 = *a1; /*0x5b2357*/
  __asm { fld [esp+98h+var_30] } /*0x5b2365*/
  v31 = *((unsigned int *)a1 + 3); /*0x5b2369*/
  v93[0] = *((unsigned int *)_ESI + 2); /*0x5b236c*/
  v93[1] = v31; /*0x5b2370*/
  LOWORD(v32) = Math::RoundToInt(a3); /*0x5b2374*/
  __asm { fld qword ptr [esp+98h+var_28] } /*0x5b2379*/
  v33 = v32; /*0x5b237d*/
  LOWORD(v34) = Math::RoundToInt(a3); /*0x5b237f*/
  HIDWORD(v92) = v34; /*0x5b2384*/
  LOWORD(v35) = Math::RoundToInt(a3); /*0x5b2388*/
  v36 = Coord::Subtract( /*0x5b23a6*/
          (Coord *)&v90,
          *(unsigned int *)a2->__pad_0 + v33,
          a2->Vector3_field_0x04 + HIDWORD(v92),
          a2->Vector3_field_0x08 + v35);
  v37 = (void *)((unsigned int)((void *)(v36[1])));
  v38 = v36[2]; /*0x5b23b5*/
  *(unsigned int *)a2->__pad_0 = *v36; /*0x5b23b8*/
  a2->Vector3_field_0x04 = v37; /*0x5b23be*/
  a2->Vector3_field_0x08 = v38; /*0x5b23c4*/
  v39 = Vector3::Subtract(a2, (int *)&v90, aP3); /*0x5b23c7*/
  v40 = Coord::Length((Coord *)v39); /*0x5b23ce*/
  v41 = (void *)(*aP3); /*0x5b23d3*/
  v42 = (void *)(aP3[1]); /*0x5b23d5*/
  LODWORD(v89) = v40; /*0x5b23d8*/
  v43 = *(unsigned int *)a2->__pad_0; /*0x5b23dc*/
  v88.field_4 = (unsigned int)(v41); /*0x5b23de*/
  Vector3_field_0x04 = a2->Vector3_field_0x04; /*0x5b23e2*/
  v88.field_8 = (unsigned int)(v42); /*0x5b23e5*/
  *(unsigned int *)v87 = v43; /*0x5b23e9*/
  *(unsigned int *)&v87[4] = Vector3_field_0x04; /*0x5b23f5*/
  v45 = Coord2D::Sub((Coord2D *)v87, (int *)&v90, &v88.field_4); /*0x5b23ff*/
  v46 = Vector::TwoDMagnitudeMath(v45); /*0x5b2406*/
  v47 = (unsigned int)aP3[2]; /*0x5b240b*/
  Vector3_field_0x08 = a2->Vector3_field_0x08; /*0x5b240e*/
  v49 = (unsigned int)aP3[1]; /*0x5b2411*/
  v88.field_4 = v50; /*0x5b2414*/
  v51 = (double *)Coord::Subtract( /*0x5b242c*/
                    (Coord *)&v90,
                    (int)*aP3 - *(unsigned int *)a2->__pad_0,
                    v49 - a2->Vector3_field_0x04,
                    v47 - Vector3_field_0x08);
  v92 = *v51; /*0x5b2433*/
  __asm { fild dword ptr [esp+98h+var_30] } /*0x5b243e*/
  v93[0] = *((unsigned int *)v51 + 2); /*0x5b2449*/
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
  _ESI = *(unsigned int *)v88.__pad_0; /*0x5b248f*/
  __asm { fld qword ptr [esi+8] } /*0x5b2498*/
  __asm
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v72, **(double **)v88.__pad_0); /*0x5b24a5*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24aa*/
  __asm { fmul ds:dbl_7E2818 }
  *(unsigned short *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b24c5*/
  __asm { fld [esp+98h+var_10] } /*0x5b24d5*/
  v86 = *(unsigned int *)v88.__pad_0; /*0x5b24e1*/
  __asm /*0x5b24e5*/
  {
    fchs
    fstp [esp+0A8h+var_A8]; double
  }
  Math::CalcAngle(v73, v94[0]); /*0x5b24ea*/
  __asm { fsub ds:dbl_7E2820 } /*0x5b24ef*/
  __asm { fmul ds:dbl_7E2818 }
  *(unsigned short *)v87 = Math::RoundToInt(v46); /*0x5b2510*/
  if ( Math::Abs16Cmp((Math *)&v86, v87, aP4) ) /*0x5b2515*/
  {
    LOWORD(v86) = *(unsigned short *)v87; /*0x5b2523*/
  }
  else if ( *(int16_t *)Math::Sub16((Math *)v87, &v88, &v86) >= 0 ) /*0x5b2541*/
  {
    LOWORD(v86) = *aP4 + v86; /*0x5b2550*/
  }
  else
  {
    LOWORD(v86) = v86 - *aP4; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((int *)_ESI); /*0x5b2557*/
  Function::41C430((double *)_ESI); /*0x5b255e*/
  __asm { fstp qword ptr [esp+98h+var_88.field_8] } /*0x5b2568*/
  *(unsigned int *)v88.__pad_0 = (int16_t)v86 - 0x3FFF; /*0x5b2575*/
  __asm /*0x5b2579*/
  {
    fild dword ptr [esp+0A0h+var_64.__pad_0]
    fmul ds:dbl_7E2810
    fstp [esp+0A0h+var_A0]; double
  }
  Math::ArcTan2(v80); /*0x5b2586*/
  __asm { fmul qword ptr [esp+0A0h+var_88.field_8] } /*0x5b258b*/
  v53 = (int16_t)v86; /*0x5b258f*/
  __asm { fstp qword ptr [esi] } /*0x5b2594*/
  *(double *)_ESI = _RT1; /*0x5b2594*/
  *(unsigned int *)v88.__pad_0 = v53 - 0x3FFF; /*0x5b259c*/
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
  *(unsigned short *)v88.__pad_0 = Math::RoundToInt(v46); /*0x5b25ec*/
  v85.Movement_field_00 = *(unsigned int *)v88.__pad_0; /*0x5b25fa*/
  if ( aP5
    || !a7 && (int)v88.field_4 <= (a8 != 0 ? 6 : 3) << 8
    || (uint8_t)((unsigned int)((*(unsigned int *)aP4 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !a9 ) /*0x5b28a1*/
    {
      LOWORD(v89) = 256; /*0x5b28b6*/
      v68 = (Movement *)Movement::Check((Movement *)aP4, &v88, &v89); /*0x5b28bd*/
      v69 = Movement::DivideAndStoreScaled(v68, (int *)&v88.field_4, 2); /*0x5b28c4*/
      v70 = (int16_t *)Vector::ToFacingMath((int *)v87, v69); /*0x5b28d6*/
      Movement::CompareAbsCoords(&v85, v70, v83); /*0x5b28e0*/
    }
    goto LABEL_49; /*0x5b28e0*/
  }
  __asm { fld qword ptr [esi+10h] } /*0x5b2640*/
  v90 = *(double *)_ESI; /*0x5b2645*/
  __asm { fld qword ptr [esp+98h+var_48] } /*0x5b2653*/
  v56 = *(unsigned int *)(_ESI + 12); /*0x5b2657*/
  LODWORD(v91) = *(unsigned int *)(_ESI + 8); /*0x5b265a*/
  HIDWORD(v91) = v56; /*0x5b265e*/
  LOWORD(v57) = Math::RoundToInt(v46); /*0x5b2662*/
  __asm { fld [esp+98h+var_40] } /*0x5b2667*/
  v58 = v57; /*0x5b266b*/
  LOWORD(v59) = Math::RoundToInt(v46); /*0x5b266d*/
  HIDWORD(v90) = v59; /*0x5b2672*/
  LOWORD(v60) = Math::RoundToInt(v46); /*0x5b2676*/
  v61 = Coord::Subtract((Coord *)&v88.field_4, 6 * v58, 6 * HIDWORD(v90), 6 * v60); /*0x5b2695*/
  v62 = (double *)Coord::Subtract( /*0x5b26b9*/
                    (Coord *)v87,
                    *(unsigned int *)a2->__pad_0 + *v61,
                    a2->Vector3_field_0x04 + v61[1],
                    a2->Vector3_field_0x08 + v61[2]);
  v90 = *v62; /*0x5b26c0*/
  LODWORD(v91) = *((unsigned int *)v62 + 2); /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight(&v90); /*0x5b26eb*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v90)->flags[0] & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += g_MissionQueueFrame.localVariables[304]; /*0x5b26fd*/
  v64 = SLODWORD(v89) / 256; /*0x5b2713*/
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
        LOWORD(v88.field_4) = 0x4000; /*0x5b2875*/
        LOWORD(v89) = *aP4 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords(&v85, (int16_t *)&v88.field_4, (int16_t *)&v89); /*0x5b289a*/
      }
      else
      {
        *(unsigned short *)v88.__pad_0 = 18432; /*0x5b27ff*/
        LOWORD(v89) = *aP4 / 2; /*0x5b2812*/
        *(unsigned int *)v87 = LODWORD(v89); /*0x5b281f*/
        if ( Math::Abs16Cmp((Math *)&v85, &v88, (int16_t *)v87) ) /*0x5b2829*/
        {
          LOWORD(v85.Movement_field_00) = *(unsigned short *)v88.__pad_0; /*0x5b2837*/
        }
        else if ( *(int16_t *)Math::Sub16(&v88, &v89, &v85) >= 0 ) /*0x5b2858*/
        {
          LOWORD(v85.Movement_field_00) += *(unsigned short *)v87; /*0x5b286b*/
        }
        else
        {
          LOWORD(v85.Movement_field_00) -= *(unsigned short *)v87; /*0x5b285f*/
        }
      }
    }
    else
    {
      *(unsigned short *)v87 = 0x2000; /*0x5b2778*/
      LOWORD(v89) = *aP4 / 2; /*0x5b278b*/
      *(unsigned int *)v88.__pad_0 = LODWORD(v89); /*0x5b2798*/
      if ( Math::Abs16Cmp((Math *)&v85, v87, (int16_t *)v88.__pad_0) ) /*0x5b27a2*/
      {
        LOWORD(v85.Movement_field_00) = *(unsigned short *)v87; /*0x5b27b0*/
      }
      else if ( *(int16_t *)Math::Sub16((Math *)v87, &v89, &v85) >= 0 ) /*0x5b27d1*/
      {
        LOWORD(v85.Movement_field_00) += *(unsigned short *)v88.__pad_0; /*0x5b27e7*/
      }
      else
      {
        LOWORD(v85.Movement_field_00) -= *(unsigned short *)v88.__pad_0; /*0x5b27d8*/
      }
    }
  }
LABEL_49:
  Movement::UpdateLocomotion((double *)_ESI, (int16_t *)&v85); /*0x5b28e5*/
  if ( a7 ) /*0x5b28f6*/
    v93[0] = 0; /*0x5b28f8*/
  else
    v93[0] = (signed int)v93[0] / 4; /*0x5b290f*/
  return Coord::Length((Coord *)&v92); /*0x5b2347*/

}
} // namespace gamemd
// 0x5B2930
namespace gamemd {
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3, void *a3_2)
{

  LOWORD(a3) = LOWORD(this->Movement_field_00) + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/

}
} // namespace gamemd
// 0x5B2970
namespace gamemd {
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{

  LOWORD(a3) = SLOWORD(this->Movement_field_00) / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/

}
} // namespace gamemd