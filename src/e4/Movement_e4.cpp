// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x5B20F0
long long Movement::CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *v12; // ebx
  BuildingTypeClass *v13; // esi
  bool v14; // zf
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // edx
  double v20; // st7
  int v21; // eax
  double v22; // st7
  double v23; // st7
  unsigned int v24; // edx
  int eax10a; // eax
  int v26; // edi
  int v27; // eax
  IUnknown *v25; // eax
  int v29; // ecx
  int v30; // edx
  double v31; // st7
  __int64 result; // rax
  double v33; // st7
  int edx11; // edx
  int v35; // esi
  int v36; // eax
  IUnknown *v34; // eax
  int v38; // ecx
  int v39; // edx
  int *v40; // eax
  int v41; // ecx
  int v42; // edx
  IUnknown *v43; // eax
  int v44; // eax
  int *v45; // eax
  int v46; // ecx
  int esi11a; // esi
  int edx11c; // edx
  int v49; // eax
  IUnknown *v47; // eax
  BuildingTypeClass *v48; // esi
  double v52; // st7
  double v53; // st7
  double v54; // st7
  int v55; // edx
  double v56; // st7
  double v57; // st7
  double v58; // st7
  double v59; // st7
  int ecx20; // ecx
  int edi20a; // edi
  int v62; // eax
  IUnknown *v60; // eax
  IUnknown *v61; // eax
  int GroundHeight; // edi
  int v66; // eax
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  __int16 *eax47; // eax
  __int16 *eax47a; // eax
  IUnknown *v72; // [esp+0h] [ebp-A8h]
  _BYTE v73[12]; // [esp+0h] [ebp-A8h]
  __int128 v74; // [esp+0h] [ebp-A8h]
  _BYTE v75[12]; // [esp+4h] [ebp-A4h]
  _BYTE v76[12]; // [esp+4h] [ebp-A4h]
  BuildingTypeClass *v70; // [esp+Ch] [ebp-9Ch]
  BuildingTypeClass *v71; // [esp+20h] [ebp-88h] BYREF
  BuildingTypeClass *v79; // [esp+24h] [ebp-84h] BYREF
  double v80[3]; // [esp+28h] [ebp-80h] BYREF
  BuildingTypeClass *v81; // [esp+44h] [ebp-64h] BYREF
  double v82[2]; // [esp+48h] [ebp-60h] BYREF
  IUnknown *v83[2]; // [esp+58h] [ebp-50h] BYREF
  AbstractClass aP1; // [esp+60h] [ebp-48h] BYREF
  int v85; // [esp+84h] [ebp-24h]
  double v86[3]; // [esp+90h] [ebp-18h] BYREF

  int * v10 = v10; /*0x5b2102*/
  BuildingTypeClass *v9 = (BuildingTypeClass *)v9; /*0x5b2104*/
  v14 = aP0->field_0 == (_DWORD)*(&g_MatrixTransformState + 64); /*0x5b210e*/
  v81 = (double *)v9; /*0x5b2110*/
  if ( v14 && *(_QWORD *)&aP0->field_4 == *(_QWORD *)(&g_MatrixTransformState + 65) ) /*0x5b2124*/
  {
    Math::Hypotenuse2D((double *)v9); /*0x5b213c*/
  double v11; // st7
    *(double *)&v75[4] = v11; /*0x5b214a*/
    *(_DWORD *)v75 = v13->abstractFlags; /*0x5b214d*/
    v15 = Math::CalcAngle((AbstractClass *)v13->uniqueId, *(double *)v75); /*0x5b214f*/
    LOWORD(v81) = Math::RoundToInt((v15 - 1.570796326794897) * -10430.06004058427); /*0x5b216b*/
    v71 = (BuildingTypeClass *)v81; /*0x5b217e*/
    LOWORD(v79) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp(&v71, (IUnknown *)&v79, (IUnknown *)a1) ) /*0x5b2189*/
    {
      LOWORD(v71) = (_WORD)v79; /*0x5b2197*/
    }
    else if ( SLOWORD(Math::Sub16(&v79, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b21b5*/
    {
      LOWORD(v71) = *(_WORD *)a1 + (_WORD)v71; /*0x5b21c4*/
    }
    else
    {
      LOWORD(v71) = (_WORD)v71 - *(_WORD *)a1; /*0x5b21ba*/
    }
    v81 = (double *)((__int16)*Vector::ToFacingMath((double *)v13->vtable0, v83) - 0x3FFF); /*0x5b21de*/
    v16 = (double)(int)v81 * -0.00009587672516830327; /*0x5b21e8*/
    *(double *)v83 = v16; /*0x5b21ee*/
    Vector3::Magnitude((double *)v13->vtable0); /*0x5b21f2*/
    v82[0] = v16; /*0x5b21f7*/
    if ( *(double *)v83 != 0.0 ) /*0x5b220a*/
    {
      v17 = Math::ArcTan2(v83[0]); /*0x5b2216*/
      v72 = v83[0]; /*0x5b2222*/
      *(double *)v13->vtable0 = *(double *)v13->vtable0 / v17; /*0x5b2223*/
      *(double *)&v13->vtable0[8] = *(double *)&v13->vtable0[8] / Math::ArcTan2(v72); /*0x5b2230*/
    }
    v81 = (double *)((__int16)v71 - 0x3FFF); /*0x5b2241*/
    v18 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(int)v81 * -0.00009587672516830327)); /*0x5b2252*/
    v19 = (__int16)v71; /*0x5b2259*/
    *(double *)v13->vtable0 = v18 * *(double *)v13->vtable0; /*0x5b225e*/
    v81 = (double *)(v19 - 0x3FFF); /*0x5b2266*/
    v20 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(v19 - 0x3FFF) * -0.00009587672516830327)); /*0x5b2277*/
    v21 = (__int16)v71; /*0x5b227f*/
    *(double *)&v13->vtable0[8] = v20 * *(double *)&v13->vtable0[8]; /*0x5b2284*/
    v81 = (double *)(v21 - 0x3FFF); /*0x5b228c*/
    v22 = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64((double)(v21 - 0x3FFF) * -0.00009587672516830327)); /*0x5b229d*/
    v23 = v22 * v82[0]; /*0x5b22a2*/
    v24 = *(_DWORD *)v13->vtable0; /*0x5b22ab*/
    *(double *)&v13->uniqueId = v23; /*0x5b22ad*/
    *(_QWORD *)&aP1.nextArrayIndex = __PAIR64__(*(_DWORD *)&v13->vtable0[4], v24); /*0x5b22b3*/
    eax10a = *(_DWORD *)&v13->vtable0[12]; /*0x5b22c2*/
    aP1.NeedsSaveOrLink = *(void **)&v13->vtable0[8]; /*0x5b22c5*/
    v85 = eax10a; /*0x5b22c9*/
    v26 = Math::RoundToInt(v23); /*0x5b22d6*/
    aP1.referenceCount = Math::RoundToInt(v23); /*0x5b22dd*/
    v27 = Math::RoundToInt(v23); /*0x5b22e1*/
    v25 = Coord::Subtract( /*0x5b22ff*/
            &aP1.nextArrayIndex,
            (IUnknown *)(*v12 + v26),
            (IUnknown *)(aP1.referenceCount + v12[1]),
            (IUnknown *)(v27 + v12[2]));
    v29 = v25->field_4; /*0x5b2308*/
    v30 = v25->field_8; /*0x5b230b*/
    *v12 = v25->field_0; /*0x5b230e*/
    v12[1] = v29; /*0x5b2310*/
    v12[2] = v30; /*0x5b2313*/
    v31 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x5b233a*/
                                        *(double *)&v13->vtable0[8] * *(double *)&v13->vtable0[8]
                                      + *(double *)v13->vtable0 * *(double *)v13->vtable0
                                      + *(double *)&v13->uniqueId * *(double *)&v13->uniqueId));
    return Math::RoundToInt(v31); /*0x5b234d*/
  }
  v33 = v9->uniqueId; /*0x5b2352*/
  *(_QWORD *)&aP1.nextArrayIndex = *(_QWORD *)v9; /*0x5b2357*/
  edx11 = v9->vtable4; /*0x5b2369*/
  aP1.NeedsSaveOrLink = *(void **)&v13->vtable0[8]; /*0x5b236c*/
  v85 = edx11; /*0x5b2370*/
  v35 = Math::RoundToInt(v33); /*0x5b237d*/
  aP1.referenceCount = Math::RoundToInt(v33); /*0x5b2384*/
  v36 = Math::RoundToInt(v33); /*0x5b2388*/
  v34 = Coord::Subtract( /*0x5b23a6*/
          &aP1,
          (IUnknown *)(*v12 + v35),
          (IUnknown *)(v12[1] + aP1.referenceCount),
          (IUnknown *)(v12[2] + v36));
  v38 = v34->field_4; /*0x5b23b2*/
  v39 = v34->field_8; /*0x5b23b5*/
  *v12 = v34->field_0; /*0x5b23b8*/
  v12[1] = v38; /*0x5b23be*/
  v12[2] = v39; /*0x5b23c4*/
  v40 = Vector3::Subtract(v12, (IUnknown *)&aP1, aP0); /*0x5b23c7*/
  Coord::Length(v40); /*0x5b23ce*/
  v41 = aP0->field_0; /*0x5b23d3*/
  v42 = aP0->field_4; /*0x5b23d5*/
  v83[0] = v43; /*0x5b23d8*/
  v44 = *v12; /*0x5b23dc*/
  *(_QWORD *)&v82[0] = __PAIR64__(v42, v41); /*0x5b23de*/
  *(_QWORD *)&v80[0] = __PAIR64__(v12[1], v44); /*0x5b23e9*/
  v45 = Coord2D::Sub(v80, &aP1, (IUnknown *)v82); /*0x5b23ff*/
  Vector::TwoDMagnitudeMath(v45); /*0x5b2406*/
  v46 = aP0->field_8; /*0x5b240b*/
  esi11a = v12[2]; /*0x5b240e*/
  edx11c = aP0->field_4; /*0x5b2411*/
  LODWORD(v82[0]) = v49; /*0x5b2414*/
  v47 = Coord::Subtract( /*0x5b242c*/
          &aP1,
          (IUnknown *)(aP0->field_0 - *v12),
          (IUnknown *)(edx11c - v12[1]),
          (IUnknown *)(v46 - esi11a));
  aP1.nextArrayIndex = v47->field_0; /*0x5b2433*/
  aP1.referenceCount = v47->field_4; /*0x5b243a*/
  aP1.NeedsSaveOrLink = (void *)v47->field_8; /*0x5b2449*/
  *(double *)aP1[0] = (double)aP1.nextArrayIndex; /*0x5b2454*/
  v80[0] = *(double *)aP1[0]; /*0x5b2464*/
  *(double *)&aP1[8] = (double)aP1.referenceCount; /*0x5b246c*/
  v80[2] = (double)(int)aP1.NeedsSaveOrLink; /*0x5b247c*/
  v80[1] = *(double *)&aP1[8]; /*0x5b2489*/
  qmemcpy(v86, v80, sizeof(v86)); /*0x5b248d*/
  v48 = (BuildingTypeClass *)v81; /*0x5b248f*/
  *(_DWORD *)&v73[8] = *(_DWORD *)v81; /*0x5b249c*/
  *(double *)v73 = -v81[1]; /*0x5b24a2*/
  v52 = Math::CalcAngle(*(AbstractClass **)v73, *(double *)&v73[4]); /*0x5b24a5*/
  LOWORD(v81) = Math::RoundToInt((v52 - 1.570796326794897) * -10430.06004058427); /*0x5b24c5*/
  *((double *)&v74 + 1) = v86[0]; /*0x5b24dd*/
  v79 = v81; /*0x5b24e1*/
  *(double *)&v74 = -v86[1]; /*0x5b24e7*/
  v53 = (Math::CalcAngle((AbstractClass *)v74, *(double *)((char *)&v74 + 4)) - 1.570796326794897) * -10430.06004058427; /*0x5b24f8*/
  LOWORD(v80[0]) = Math::RoundToInt(v53); /*0x5b2510*/
  if ( Math::Abs16Cmp(&v79, (IUnknown *)v80, (IUnknown *)a1) ) /*0x5b2515*/
  {
    LOWORD(v79) = LOWORD(v80[0]); /*0x5b2523*/
  }
  else if ( SLOWORD(Math::Sub16(v80, (BuildingTypeClass *)&v81, (IUnknown *)&v79)->field_0) >= 0 ) /*0x5b2541*/
  {
    LOWORD(v79) = *(_WORD *)a1 + (_WORD)v79; /*0x5b2550*/
  }
  else
  {
    LOWORD(v79) = (_WORD)v79 - *(_WORD *)a1; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero((double *)v48->vtable0); /*0x5b2557*/
  Function::Method_41C430((double *)v48->vtable0); /*0x5b255e*/
  v80[0] = v53; /*0x5b2568*/
  v81 = (double *)((__int16)v79 - 0x3FFF); /*0x5b2575*/
  v54 = Math::ArcTan2((IUnknown *)COERCE_UNSIGNED_INT64((double)(int)v81 * -0.00009587672516830327)); /*0x5b2586*/
  v55 = (__int16)v79; /*0x5b258f*/
  *(double *)v48->vtable0 = v54 * v80[0]; /*0x5b2594*/
  v81 = (double *)(v55 - 0x3FFF); /*0x5b259c*/
  v56 = Math::SinCos((IUnknown *)COERCE_UNSIGNED_INT64((double)(v55 - 0x3FFF) * -0.00009587672516830327)); /*0x5b25ad*/
  v57 = -(v56 * v80[0]); /*0x5b25bb*/
  *(double *)&v48->vtable0[8] = v57; /*0x5b25bd*/
  Math::Hypotenuse2D((double *)v48->vtable0); /*0x5b25c0*/
  *(double *)&v76[4] = v57; /*0x5b25ce*/
  *(_DWORD *)v76 = v48->abstractFlags; /*0x5b25d1*/
  v58 = Math::CalcAngle((AbstractClass *)v48->uniqueId, *(double *)v76); /*0x5b25d3*/
  LOWORD(v81) = Math::RoundToInt((v58 - 1.570796326794897) * -10430.06004058427); /*0x5b25ec*/
  v71 = (BuildingTypeClass *)v81; /*0x5b25fa*/
  if ( LOBYTE(a3)
    || !BYTE4(a3) && SLODWORD(v82[0]) <= ((_BYTE)aP3 != 0 ? 6 : 3) << 8
    || (unsigned __int8)(((*a1 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !(_BYTE)aP4 ) /*0x5b28a1*/
    {
      LOWORD(v83[0]) = 256; /*0x5b28b6*/
      eax47 = (__int16 *)Movement::Check(a1, &v81, v83); /*0x5b28bd*/
      v70 = (BuildingTypeClass *)Movement::DivideAndStoreScaled(eax47, (int *)v82, 2); /*0x5b28cd*/
      eax47a = Vector::ToFacingMath(v86, v80); /*0x5b28d6*/
      Movement::CompareAbsCoords((__int16 *)&v71, eax47a, (__int16 *)v70->vtable0); /*0x5b28e0*/
    }
    goto LABEL_48; /*0x5b28e0*/
  }
  v59 = *(double *)&v48->uniqueId; /*0x5b2640*/
  *(_QWORD *)aP1[0] = *(_QWORD *)v48->vtable0; /*0x5b2645*/
  ecx20 = *(_DWORD *)&v48->vtable0[12]; /*0x5b2657*/
  *(_DWORD *)&aP1[8] = *(_DWORD *)&v48->vtable0[8]; /*0x5b265a*/
  *(_DWORD *)&aP1[12] = ecx20; /*0x5b265e*/
  edi20a = Math::RoundToInt(v59); /*0x5b266b*/
  *(_DWORD *)&aP1[4] = Math::RoundToInt(v59); /*0x5b2672*/
  v62 = Math::RoundToInt(v59); /*0x5b2676*/
  v60 = Coord::Subtract( /*0x5b2695*/
          v82,
          (IUnknown *)(6 * edi20a),
          (IUnknown *)(6 * *(_DWORD *)&aP1[4]),
          (IUnknown *)(6 * v62));
  v61 = Coord::Subtract( /*0x5b26b9*/
          v80,
          (IUnknown *)(*v12 + v60->field_0),
          (IUnknown *)(v12[1] + v60->field_4),
          (IUnknown *)(v12[2] + v60->field_8));
  *(_DWORD *)aP1[0] = v61->field_0; /*0x5b26c0*/
  *(_DWORD *)&aP1[4] = v61->field_4; /*0x5b26cc*/
  *(_DWORD *)&aP1[8] = v61->field_8; /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight((IUnknown *)&aP1); /*0x5b26eb*/
  if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&aP1) + 80) & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += (int)*(&g_MatrixTransformState + 77); /*0x5b26fd*/
  v66 = (int)v83[0] / 256; /*0x5b2713*/
  if ( BYTE4(a3) || (_BYTE)aP3 ) /*0x5b271f*/
  {
    v66 = 10; /*0x5b272d*/
  }
  else if ( v66 >= 5 ) /*0x5b2724*/
  {
    v66 = 5; /*0x5b2726*/
  }
  if ( !(_BYTE)aP4 ) /*0x5b2737*/
  {
    v67 = v12[2]; /*0x5b2744*/
    v68 = v67 - (_DWORD)*(&g_MatrixTransformState + 80) * v66 - GroundHeight; /*0x5b274b*/
    if ( v68 >= -20 ) /*0x5b2750*/
    {
      if ( v68 <= 20 ) /*0x5b275a*/
        goto LABEL_33; /*0x5b275a*/
      v69 = v67 - 18; /*0x5b275c*/
    }
    else
    {
      v69 = v67 + 18; /*0x5b2752*/
    }
    v12[2] = v69; /*0x5b275f*/
LABEL_33:
    if ( v68 >= (int)*(&g_MatrixTransformState + 80) / -2 ) /*0x5b2773*/
    {
      if ( v68 <= (int)*(&g_MatrixTransformState + 80) / 2 ) /*0x5b27fa*/
      {
        LOWORD(v82[0]) = 0x4000; /*0x5b2875*/
        LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords((__int16 *)&v71, (__int16 *)v82, (__int16 *)v83); /*0x5b289a*/
      }
      else
      {
        LOWORD(v81) = 18432; /*0x5b27ff*/
        LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b2812*/
        *(IUnknown **)&v80[0] = v83[0]; /*0x5b281f*/
        if ( Math::Abs16Cmp(&v71, (IUnknown *)&v81, (IUnknown *)v80) ) /*0x5b2829*/
        {
          LOWORD(v71) = (_WORD)v81; /*0x5b2837*/
        }
        else if ( SLOWORD(Math::Sub16(&v81, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b2858*/
        {
          LOWORD(v71) = LOWORD(v80[0]) + (_WORD)v71; /*0x5b286b*/
        }
        else
        {
          LOWORD(v71) = (_WORD)v71 - LOWORD(v80[0]); /*0x5b285f*/
        }
      }
    }
    else
    {
      LOWORD(v80[0]) = 0x2000; /*0x5b2778*/
      LOWORD(v83[0]) = *(__int16 *)a1 / 2; /*0x5b278b*/
      v81 = (double *)&v83[0]->field_0; /*0x5b2798*/
      if ( Math::Abs16Cmp(&v71, (IUnknown *)v80, (IUnknown *)&v81) ) /*0x5b27a2*/
      {
        LOWORD(v71) = LOWORD(v80[0]); /*0x5b27b0*/
      }
      else if ( SLOWORD(Math::Sub16(v80, (BuildingTypeClass *)v83, (IUnknown *)&v71)->field_0) >= 0 ) /*0x5b27d1*/
      {
        LOWORD(v71) = (_WORD)v81 + (_WORD)v71; /*0x5b27e7*/
      }
      else
      {
        LOWORD(v71) = (_WORD)v71 - (_WORD)v81; /*0x5b27d8*/
      }
    }
  }
LABEL_48:
  Movement::UpdateLocomotion((double *)v48->vtable0, (IUnknown *)&v71); /*0x5b28e5*/
  if ( BYTE4(a3) ) /*0x5b28f6*/
    aP1.NeedsSaveOrLink = 0; /*0x5b28f8*/
  else
    aP1.NeedsSaveOrLink = (void *)((int)aP1.NeedsSaveOrLink / 4); /*0x5b290f*/
  Coord::Length(&aP1.nextArrayIndex); /*0x5b2917*/
  return result; /*0x5b2347*/
}
}

// 0x5B2930
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3)
{
{
    LOWORD(a3) = *(void**)(this) + *a3;
    *a2 = a3;
    return a2;
}
}

// 0x5B2970
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{
{
    LOWORD(a3) = *(void**)this / a3;
    *a2 = a3;
    return a2;
}
}
