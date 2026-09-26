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

// 0x5B20F0
namespace gamemd {
long long Movement::CalcVelocity(IUnknown * aP0, unsigned int * a1, double a3, IUnknown * aP3, IUnknown * aP4, IUnknown * aP5, char a7, char a8, char a9)
{
  bool v11; // zf
  double v12; // st7
  double v13; // st7
  unsigned int v14; // edi
  double v15; // st7
  double v16; // st7
  int v17; // edx
  double v18; // st7
  int v19; // eax
  double v20; // st7
  double v21; // st7
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // edi
  unsigned int *v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  double v28; // st7
  double v30; // st7
  unsigned int v31; // edx
  int v32; // esi
  int v33; // eax
  unsigned int *v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  int *v37; // eax
  int v38; // eax
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // eax
  int *v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // esi
  unsigned int v45; // edx
  int v46; // eax
  double *v47; // eax
  double *v48; // esi
  double v49; // st7
  double v50; // st7
  double v51; // st7
  int v52; // edx
  double v53; // st7
  double v54; // st7
  double v55; // st7
  double v56; // st7
  int v57; // ecx
  int v58; // edi
  int v59; // eax
  _DWORD *v60; // eax
  double *v61; // eax
  int GroundHeight; // edi
  int v63; // eax
  unsigned int v64; // edx
  int v65; // ecx
  unsigned int v66; // edx
  _WORD *v67; // eax
  double v68; // [esp+0h] [ebp-A8h]
  unsigned __int64 v69; // [esp+8h] [ebp-A0h]
  int v70; // [esp+Ch] [ebp-9Ch]
  double *v71; // [esp+20h] [ebp-88h] BYREF
  double *v72; // [esp+24h] [ebp-84h] BYREF
  double v73[3]; // [esp+28h] [ebp-80h] BYREF
  double *v74; // [esp+44h] [ebp-64h] BYREF
  double v75[2]; // [esp+48h] [ebp-60h] BYREF
  unsigned int v76;
  double v77; // [esp+60h] [ebp-48h] BYREF
  double v78; // [esp+68h] [ebp-40h]
  double v79; // [esp+78h] [ebp-30h] BYREF
  int v80; // [esp+80h] [ebp-28h]
  unsigned int v81; // [esp+84h] [ebp-24h]
  double v82[3]; // [esp+90h] [ebp-18h] BYREF

  v11 = *a4 == dword_ABEF10; /*0x5b210e*/
  v74 = a1; /*0x5b2110*/
  if ( v11 && a4[1] == dword_ABEF14 && a4[2] == dword_ABEF18 ) /*0x5b2134*/
  {
    Math::Hypotenuse2D(a1); /*0x5b213c*/
    v12 = Math::CalcAngle(a1[2], a3); /*0x5b214f*/
    IDA_LOWORD(v74) = Math::RoundToInt((v12 - 1.570796326794897) * -10430.06004058427); /*0x5b216b*/
    v71 = v74; /*0x5b217e*/
    IDA_LOWORD(v72) = 0x2000; /*0x5b2182*/
    if ( Math::Abs16Cmp(&v71, &v72, a5) ) /*0x5b2189*/
    {
      IDA_LOWORD(v71, unsigned int a5) = (_WORD)v72; /*0x5b2197*/
    }
    else if ( *(__int16 *)Math::Sub16(&v72, &v76, &v71) >= 0 ) /*0x5b21b5*/
    {
      IDA_LOWORD(v71, unsigned int a5) = *a5 + (_WORD)v71; /*0x5b21c4*/
    }
    else
    {
      IDA_LOWORD(v71) = (_WORD)v71 - *a5; /*0x5b21ba*/
    }
    v74 = (double *)((__int16)*Vector::ToFacingMath(a1, &v76) - 0x3FFF); /*0x5b21de*/
    v13 = (double)(int)v74 * -0.00009587672516830327; /*0x5b21e8*/
    v76 = v13; /*0x5b21ee*/
    Vector3::Magnitude(a1); /*0x5b21f2*/
    v75[0] = v13; /*0x5b21f7*/
    if ( v76 != 0.0 ) /*0x5b220a*/
    {
      v14 = IDA_HIDWORD(v76); /*0x5b220c*/
      v15 = Math::ArcTan2(v76); /*0x5b2216*/
      v68 = COERCE_DOUBLE(IDA___PAIR64__(v14, IDA_LODWORD(v76))); /*0x5b2222*/
      *a1 = *a1 / v15; /*0x5b2223*/
      a1[1] = a1[1] / Math::ArcTan2(v68, unsigned int a2); /*0x5b2230*/
    }
    v74 = (double *)((__int16)v71 - 0x3FFF); /*0x5b2241*/
    v16 = Math::ArcTan2((double)(int)v74 * -0.00009587672516830327); /*0x5b2252*/
    v17 = (__int16)v71; /*0x5b2259*/
    *a1 = v16 * *a1; /*0x5b225e*/
    v74 = (double *)(v17 - 0x3FFF); /*0x5b2266*/
    v18 = Math::ArcTan2((double)(v17 - 0x3FFF) * -0.00009587672516830327); /*0x5b2277*/
    v19 = (__int16)v71; /*0x5b227f*/
    a1[1] = v18 * a1[1]; /*0x5b2284*/
    v74 = (double *)(v19 - 0x3FFF); /*0x5b228c*/
    v20 = Math::SinCos((double)(v19 - 0x3FFF) * -0.00009587672516830327); /*0x5b229d*/
    v21 = v20 * v75[0]; /*0x5b22a2*/
    v22 = *(_DWORD *)a1; /*0x5b22ab*/
    a1[2] = v21; /*0x5b22ad*/
    *(_QWORD *)&v79 = IDA___PAIR64__(*((_DWORD *)a1 + 1), v22); /*0x5b22b3*/
    v23 = *((_DWORD *)a1 + 3); /*0x5b22c2*/
    v80 = *((_DWORD *)a1 + 2); /*0x5b22c5*/
    v81 = v23; /*0x5b22c9*/
    v24 = Math::RoundToInt(v21); /*0x5b22d6*/
    IDA_HIDWORD(v79) = Math::RoundToInt(v21); /*0x5b22dd*/
    v69 = IDA___PAIR64__((unsigned int)Math::RoundToInt(v21) + a2[2], IDA_HIDWORD(v79) + a2[1]); /*0x5b22f9*/
    v25 = Coord::Subtract(&v79, *a2 + v24, v69, IDA_SHIDWORD(v69)); /*0x5b22ff*/
    v26 = v25[1]; /*0x5b2308*/
    v27 = v25[2]; /*0x5b230b*/
    *a2 = *v25; /*0x5b230e*/
    a2[1] = v26; /*0x5b2310*/
    a2[2] = v27; /*0x5b2313*/
    v28 = Math::Sqrt(a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2]); /*0x5b233a*/
    return Math::RoundToInt(v28, unsigned int a2, unsigned int a4, unsigned int a5); /*0x5b234d*/
  }
  v30 = a1[2]; /*0x5b2352*/
  v79 = *a1; /*0x5b2357*/
  v31 = *((_DWORD *)a1 + 3); /*0x5b2369*/
  v80 = *((_DWORD *)a1 + 2); /*0x5b236c*/
  v81 = v31; /*0x5b2370*/
  v32 = Math::RoundToInt(v30); /*0x5b237d*/
  IDA_HIDWORD(v79) = Math::RoundToInt(v30); /*0x5b2384*/
  v33 = Math::RoundToInt(v30); /*0x5b2388*/
  v34 = Coord::Subtract(&v77, *a2 + v32, a2[1] + IDA_HIDWORD(v79), a2[2] + v33); /*0x5b23a6*/
  v35 = v34[1]; /*0x5b23b2*/
  v36 = v34[2]; /*0x5b23b5*/
  *a2 = *v34; /*0x5b23b8*/
  a2[1] = v35; /*0x5b23be*/
  a2[2] = v36; /*0x5b23c4*/
  v37 = Vector3::Subtract(a2, (int *)&v77, a4); /*0x5b23c7*/
  v38 = Coord::Length(v37); /*0x5b23ce*/
  v39 = *a4; /*0x5b23d3*/
  v40 = a4[1]; /*0x5b23d5*/
  IDA_LODWORD(v76) = v38; /*0x5b23d8*/
  v41 = *a2; /*0x5b23dc*/
  *(_QWORD *)&v75[0] = IDA___PAIR64__(v40, v39); /*0x5b23de*/
  *(_QWORD *)&v73[0] = IDA___PAIR64__(a2[1], v41); /*0x5b23e9*/
  v42 = Coord2D::Sub(v73, (int *)&v77, v75); /*0x5b23ff*/
  Vector::2DMagnitudeMath(v42); /*0x5b2406*/
  v43 = a4[2]; /*0x5b240b*/
  v44 = a2[2]; /*0x5b240e*/
  v45 = a4[1]; /*0x5b2411*/
  IDA_LODWORD(v75[0]) = v46; /*0x5b2414*/
  v47 = (double *)Coord::Subtract(&v77, *a4 - *a2, v45 - a2[1], v43 - v44); /*0x5b242c*/
  v79 = *v47; /*0x5b2433*/
  v80 = *((_DWORD *)v47 + 2); /*0x5b2449*/
  v77 = (double)IDA_SLODWORD(v79); /*0x5b2454*/
  v73[0] = v77; /*0x5b2464*/
  v78 = (double)IDA_SHIDWORD(v79); /*0x5b246c*/
  v73[2] = (double)v80; /*0x5b247c*/
  v73[1] = v78; /*0x5b2489*/
  qmemcpy(v82, v73, sizeof(v82)); /*0x5b248d*/
  v48 = v74; /*0x5b248f*/
  v49 = Math::CalcAngle(-v74[1], *v74); /*0x5b24a5*/
  IDA_LOWORD(v74) = Math::RoundToInt((v49 - 1.570796326794897) * -10430.06004058427); /*0x5b24c5*/
  v72 = v74; /*0x5b24e1*/
  v50 = (Math::CalcAngle(-v82[1], v82[0]) - 1.570796326794897) * -10430.06004058427; /*0x5b24f8*/
  IDA_LOWORD(v73[0]) = Math::RoundToInt(v50); /*0x5b2510*/
  if ( Math::Abs16Cmp(&v72, v73, a5) ) /*0x5b2515*/
  {
    IDA_LOWORD(v72, unsigned int a5) = IDA_LOWORD(v73[0]); /*0x5b2523*/
  }
  else if ( *(__int16 *)Math::Sub16(v73, &v74, &v72) >= 0 ) /*0x5b2541*/
  {
    IDA_LOWORD(v72, unsigned int a5) = *a5 + (_WORD)v72; /*0x5b2550*/
  }
  else
  {
    IDA_LOWORD(v72, unsigned int a6, unsigned int a5) = (_WORD)v72 - *a5; /*0x5b2546*/
  }
  Vector2::NormalizeNonZero(v48); /*0x5b2557*/
  Function::41C430(v48); /*0x5b255e*/
  v73[0] = v50; /*0x5b2568*/
  v74 = (double *)((__int16)v72 - 0x3FFF); /*0x5b2575*/
  v51 = Math::ArcTan2((double)(int)v74 * -0.00009587672516830327); /*0x5b2586*/
  v52 = (__int16)v72; /*0x5b258f*/
  *v48 = v51 * v73[0]; /*0x5b2594*/
  v74 = (double *)(v52 - 0x3FFF); /*0x5b259c*/
  v53 = Math::SinCos((double)(v52 - 0x3FFF) * -0.00009587672516830327); /*0x5b25ad*/
  v54 = -(v53 * v73[0]); /*0x5b25bb*/
  v48[1] = v54; /*0x5b25bd*/
  Math::Hypotenuse2D(v48); /*0x5b25c0*/
  v55 = Math::CalcAngle(v48[2], v54); /*0x5b25d3*/
  IDA_LOWORD(v74) = Math::RoundToInt((v55 - 1.570796326794897) * -10430.06004058427); /*0x5b25ec*/
  v71 = v74; /*0x5b25fa*/
  if ( a6
    || !a7 && IDA_SLODWORD(v75[0]) <= (a8 != 0 ? 6 : 3) << 8
    || (unsigned __int8)((unsigned int)((*(_DWORD *)a5 >> 7) + 1) >> 1) <= 1u )
  {
    if ( !a9 ) /*0x5b28a1*/
    {
      IDA_LOWORD(v76) = 256; /*0x5b28b6*/
      Movement::Check(&v74, &v76); /*0x5b28bd*/
      v70 = Movement::DivideAndStoreScaled(v75, 2); /*0x5b28cd*/
      v67 = Vector::ToFacingMath(v82, v73); /*0x5b28d6*/
      Movement::CompareAbsCoords(v67, v70, unsigned int a2); /*0x5b28e0*/
    }
    goto LABEL_49; /*0x5b28e0*/
  }
  v56 = v48[2]; /*0x5b2640*/
  v77 = *v48; /*0x5b2645*/
  v57 = *((_DWORD *)v48 + 3); /*0x5b2657*/
  IDA_LODWORD(v78) = *((_DWORD *)v48 + 2); /*0x5b265a*/
  IDA_HIDWORD(v78) = v57; /*0x5b265e*/
  v58 = Math::RoundToInt(v56); /*0x5b266b*/
  IDA_HIDWORD(v77) = Math::RoundToInt(v56); /*0x5b2672*/
  v59 = Math::RoundToInt(v56); /*0x5b2676*/
  v60 = Coord::Subtract(v75, 6 * v58, 6 * IDA_HIDWORD(v77), 6 * v59); /*0x5b2695*/
  v61 = (double *)Coord::Subtract(v73, *a2 + *v60, a2[1] + v60[1], a2[2] + v60[2]); /*0x5b26b9*/
  v77 = *v61; /*0x5b26c0*/
  IDA_LODWORD(v78) = *((_DWORD *)v61 + 2); /*0x5b26d8*/
  GroundHeight = Cell::GetGroundHeight(&v77); /*0x5b26eb*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v77) + 80) & 0x100) != 0 ) /*0x5b26fb*/
    GroundHeight += dword_ABEF44; /*0x5b26fd*/
  v63 = IDA_SLODWORD(v76) / 256; /*0x5b2713*/
  if ( a7 || a8 ) /*0x5b271f*/
  {
    v63 = 10; /*0x5b272d*/
  }
  else if ( v63 >= 5 ) /*0x5b2724*/
  {
    v63 = 5; /*0x5b2726*/
  }
  if ( !a9 ) /*0x5b2737*/
  {
    v64 = a2[2]; /*0x5b2744*/
    v65 = v64 - dword_ABEF50 * v63 - GroundHeight; /*0x5b274b*/
    if ( v65 >= -20 ) /*0x5b2750*/
    {
      if ( v65 <= 20 ) /*0x5b275a*/
        goto LABEL_34; /*0x5b275a*/
      v66 = v64 - 18; /*0x5b275c*/
    }
    else
    {
      v66 = v64 + 18; /*0x5b2752*/
    }
    a2[2] = v66; /*0x5b275f*/
  LABEL_34:
    if ( v65 >= dword_ABEF50 / -2 ) /*0x5b2773*/
    {
      if ( v65 <= dword_ABEF50 / 2 ) /*0x5b27fa*/
      {
        IDA_LOWORD(v75[0]) = 0x4000; /*0x5b2875*/
        IDA_LOWORD(v76) = *a5 / 2; /*0x5b2888*/
        Movement::CompareAbsCoords(v75, &v76, unsigned int a5); /*0x5b289a*/
      }
      else
      {
        IDA_LOWORD(v74) = 18432; /*0x5b27ff*/
        IDA_LOWORD(v76) = *a5 / 2; /*0x5b2812*/
        IDA_LODWORD(v73[0]) = IDA_LODWORD(v76); /*0x5b281f*/
        if ( Math::Abs16Cmp(&v71, &v74, (__int16 *)v73) ) /*0x5b2829*/
        {
          IDA_LOWORD(v71) = (_WORD)v74; /*0x5b2837*/
        }
        else if ( *(__int16 *)Math::Sub16(&v74, &v76, &v71) >= 0 ) /*0x5b2858*/
        {
          IDA_LOWORD(v71) = IDA_LOWORD(v73[0]) + (_WORD)v71; /*0x5b286b*/
        }
        else
        {
          IDA_LOWORD(v71, unsigned int a5) = (_WORD)v71 - IDA_LOWORD(v73[0]); /*0x5b285f*/
        }
      }
    }
    else
    {
      IDA_LOWORD(v73[0]) = 0x2000; /*0x5b2778*/
      IDA_LOWORD(v76) = *a5 / 2; /*0x5b278b*/
      v74 = (double *)IDA_LODWORD(v76); /*0x5b2798*/
      if ( Math::Abs16Cmp(&v71, v73, (__int16 *)&v74) ) /*0x5b27a2*/
      {
        IDA_LOWORD(v71) = IDA_LOWORD(v73[0]); /*0x5b27b0*/
      }
      else if ( *(__int16 *)Math::Sub16(v73, &v76, &v71) >= 0 ) /*0x5b27d1*/
      {
        IDA_LOWORD(v71) = (_WORD)v74 + (_WORD)v71; /*0x5b27e7*/
      }
      else
      {
        IDA_LOWORD(v71) = (_WORD)v71 - (_WORD)v74; /*0x5b27d8*/
      }
    }
  }
  LABEL_49:
  Movement::UpdateLocomotion(&v71); /*0x5b28e5*/
  if ( a7 ) /*0x5b28f6*/
    v80 = 0; /*0x5b28f8*/
  else
    v80 /= 4; /*0x5b290f*/
  return Coord::Length((int *)&v79); /*0x5b2347*/
}
} // namespace gamemd
// 0x5B2930
namespace gamemd {
unsigned int * Movement::Check(unsigned int * a2, unsigned short * a3)
{
  IDA_LOWORD(a3) = *this + *a3; /*0x5b293e*/
  *a2 = a3; /*0x5b2947*/
  return a2; /*0x5b2949*/
}
} // namespace gamemd
// 0x5B2970
namespace gamemd {
int * Movement::DivideAndStoreScaled(int * a2, int a3)
{
  IDA_LOWORD(a3) = *this / a3; /*0x5b2978*/
  *a2 = a3; /*0x5b2985*/
  return a2; /*0x5b2987*/
}
} // namespace gamemd