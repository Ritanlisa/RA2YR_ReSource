// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/DeleteCommandClass_28_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x4CD600
namespace gamemd {
int DamageArea::ApplyScatter()
{

  int v2; // edi
  unsigned int *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int *v10; // ecx
  int v11; // edi
  unsigned int *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int result; // eax
  void **v17; // esi
  int v18; // ebx
  void *VersusMultiplier; // eax
  int *v20; // ecx
  unsigned int *v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // edi
  unsigned int v27; // ebx
  unsigned int v28; // ebp
  double v29; // st7
  double v30; // st7
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int *v36; // eax
  int v37; // ecx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  unsigned int *v43; // ebp
  int v44; // ebx
  int v45; // ebp
  double v46; // st7
  int v47; // eax
  bool v48; // bl
  int v49; // ebp
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ebx
  int v54; // ebx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // eax
  int v60; // eax
  int v61; // edi
  int *v62; // ecx
  int v63; // ecx
  int v64; // kr44_4
  unsigned int *v65; // eax
  int v66; // edi
  double v67; // st7
  unsigned int v68; // ebp
  unsigned int v69; // ebx
  double v70; // st7
  double v71; // st7
  int v72; // ecx
  int *v73; // ecx
  int (***v74)(unsigned int, void *, double *); // eax
  int v75; // edi
  int v76; // eax
  double v77; // st7
  double v78; // st6
  double v79; // st6
  int *v80; // edi
  int v81; // edx
  double v82; // st7
  int v83; // eax
  int v84; // eax
  int v85; // ecx
  double v86; // st7
  int v87; // eax
  int *v88; // ecx
  int v89; // edi
  int v90; // ebx
  unsigned short *v91; // eax
  int v92; // eax
  int *v93; // ecx
  double v95; // st7
  char v96; // c0
  double v97; // st7
  __int64 v98; // [esp+30h] [ebp-70h]
  char v99; // [esp+4Bh] [ebp-55h]
  int v100; // [esp+4Ch] [ebp-54h]
  double v101; // [esp+50h] [ebp-50h] BYREF
  double v102; // [esp+58h] [ebp-48h] BYREF
  int v103; // [esp+64h] [ebp-3Ch] BYREF
  double v104; // [esp+68h] [ebp-38h] BYREF
  int v105; // [esp+70h] [ebp-30h]
  double v106; // [esp+78h] [ebp-28h] BYREF
  int v107; // [esp+80h] [ebp-20h]
  double v108; // [esp+88h] [ebp-18h] BYREF
  unsigned int v109; // [esp+90h] [ebp-10h]
  int v110; // [esp+94h] [ebp-Ch] BYREF
  int v111; // [esp+98h] [ebp-8h]
  int v112; // [esp+9Ch] [ebp-4h]

  v2 = *(unsigned int *)(*(int (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 440))(
                    *((unsigned int *)this + 3),
                    &v106);
  v3 = (unsigned int *)(*((unsigned int *)this + 3) + 1376);
  v103 = v2;
  if ( v2 != *v3 && (*(unsigned __int8 (**)(int))(*((unsigned int *)this + 1) + 128))((char *)this + 4) )
    Coord::ToGridIndex((char *)MEMORY[0x887888], *((unsigned int *)this + 3), *(unsigned int *)(*((unsigned int *)this + 3) + 1376), v2);
  if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 388))(*((unsigned int *)this + 3)) == 7
    && *((unsigned char *)this + 92) )
  {
    *((unsigned char *)this + 92) = 0;
  }
  v4 = (char *)this + 4;
  if ( (*(unsigned __int8 (**)(int))(*((unsigned int *)this + 1) + 96))((char *)this + 4)
    && *(unsigned int *)(*((unsigned int *)this + 3) + 108)
    || !(*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)) )
  {
    v20 = *(int **)((char *)this + 12);
    if ( v20[27] > 0 )
    {
      if ( v20[361] )
      {
        if ( (*(int (**)(int *))(*v20 + 388))(v20) == 5 )
        {
          v21 = *(unsigned int **)((char *)this + 12);
          if ( v21[45] == -1 && !*((unsigned char *)this + 24) )
            (*(void (**)(unsigned int *, int, unsigned int))(*v21 + 488))(v21, 2, 0);
        }
      }
    }
LABEL_34:
    result = (*(int (**)(int))(*(unsigned int *)v4 + 16))((char *)this + 4);
    if ( !(unsigned char)result )
      return result;
    v22 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3));
    v23 = *((unsigned int *)this + 3);
    v103 = v22;
    v99 = *(unsigned char *)(v22 + 3221);
    (*(void (**)(int, unsigned int))(*(unsigned int *)v23 + 292))(v23, 0);
    v24 = *((unsigned int *)this + 3);
    v108 = *(double *)(v24 + 156);
    v109 = *(unsigned int *)(v24 + 164);
    v25 = *ProgressTimer::GetValue((unsigned short *)(v24 + 904), &v106);
    LODWORD(v101) = (*(int (**)(int))(*(unsigned int *)v4 + 132))((char *)this + 4);
    if ( SLODWORD(v101) > 0 )
    {
      v26 = v109;
      v104 = (double)((__int16)v25 - 0x3FFF) * -0.00009587672516830327;
      v27 = HIDWORD(v104);
      v28 = LODWORD(v104);
      v102 = (double)SHIDWORD(v108);
      v101 = (double)SLODWORD(v101);
      v29 = Math::SinCos(v104);
      LODWORD(v102) = Math::RoundToInt(v102 - v29 * v101);
      v30 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v27, v28)));
      v31 = Math::RoundToInt(v30 * v101 + (double)SLODWORD(v108));
      Coord::Subtract(&v104, v31, SLODWORD(v102), v26);
      v109 = v105;
      v108 = v104;
      LODWORD(v102) = *(unsigned int *)CellStruct::Set(&v104, SLODWORD(v104) / 256, SHIDWORD(v104) / 256);
      LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102);
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || !(*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 1244))(*((unsigned int *)this + 3)) )
    {
      goto LABEL_50;
    }
    v32 = *((unsigned int *)this + 3);
    if ( v32 && (*(int (**)(int))(*(unsigned int *)v32 + 44))(v32) == 2 )
    {
      v33 = *((unsigned int *)this + 3);
      v34 = v33 ? ((*(int (**)(unsigned int))(*(unsigned int *)v33 + 44))(*((unsigned int *)this + 3)) == 2 ? v33 : 0) : 0;
      if ( *(unsigned char *)(*(unsigned int *)(v34 + 1732) + 3595) )
        goto LABEL_50;
    }
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    LODWORD(v101) = LODWORD(v102);
    v35 = (__int16)*(unsigned int *)DamageArea::CalcScatterOffset(&v106, &v101) >= MEMORY[0x87F914] / 2
        ? LODWORD(v108) - 128
        : LODWORD(v108) + 128;
    LODWORD(v108) = v35;
    LOWORD(v102) = v35 / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)
      || (v36 = RandomCoordScatter(&v110, (int *)&v108, 64, 0),
          v108 = *(double *)v36,
          v109 = v36[2],
          LOWORD(v102) = SLODWORD(v108) / 256,
          WORD1(v102) = SHIDWORD(v108) / 256,
          LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v102)) )
    {
LABEL_50:
      (*(void (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &v108);
    }
    v37 = *((unsigned int *)this + 3);
    LODWORD(v101) = 0;
    v38 = (*(int (**)(int))(*(unsigned int *)v37 + 456))(v37);
    v39 = *((unsigned int *)this + 3);
    if ( !*(unsigned char *)(v39 + 140) && v38 >= MEMORY[0x8B3CAC] )
    {
      v40 = v39 + 156;
      v106 = *(double *)v40;
      v107 = *(unsigned int *)(v40 + 8);
      if ( (*((unsigned int *)Coord::To_Cell(&MEMORY[0x87F7E8], &v106) + 80) & 0x100) != 0 )
      {
        v38 -= MEMORY[0x8B3CAC];
        LODWORD(v101) = MEMORY[0x8B3CAC];
      }
    }
    v41 = *((unsigned int *)this + 7);
    v42 = *((unsigned int *)this + 8);
    v112 = *((unsigned int *)this + 9);
    v43 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
    v44 = *(unsigned int *)(*((unsigned int *)this + 3) + 160);
    LODWORD(v106) = v41 - *v43;
    v45 = v43[2];
    HIDWORD(v106) = v42 - v44;
    v112 = v45;
    v46 = Math::Sqrt((double)(v42 - v44) * (double)(v42 - v44) + (double)SLODWORD(v106) * (double)SLODWORD(v106));
    LODWORD(v102) = Math::RoundToInt(v46);
    if ( v38 >= *((unsigned int *)this + 14) || (v47 = *((unsigned int *)this + 3), *(int *)(v47 + 108) <= 0) )
    {
      v54 = LODWORD(v101);
    }
    else
    {
      v48 = 0;
      v100 = 0;
      if ( v47 )
      {
        v49 = (**(int (***)(int, void *, double *))v47)(v47, &unk_822410, &v104);
        if ( v49 >= 0 )
        {
          LODWORD(v106) = LODWORD(v104);
          v50 = LODWORD(v104);
        }
        else
        {
          v50 = 0;
        }
        v100 = v50;
        if ( v49 < 0 && v49 != -2147467262 )
          WinAPI::Wrapper(v49);
        if ( v50 )
          v48 = (*(int (**)(int))(*(unsigned int *)v50 + 20))(v50) != 0;
      }
      v51 = *((unsigned int *)this + 14);
      if ( v99 )
      {
        v52 = v51 - v38;
        if ( v52 > 16 )
          v52 = 16;
      }
      else
      {
        v52 = v51 - v38;
        v53 = v48 ? 10 : 20;
        if ( v53 < v52 )
          v52 = v53;
      }
      v54 = LODWORD(v101);
      (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 460))(
        *((unsigned int *)this + 3),
        LODWORD(v101) + v38 + v52);
      *(unsigned char *)(*((unsigned int *)this + 3) + 140) = 0;
      if ( v100 )
        (*(void (**)(int))(*(unsigned int *)v100 + 8))(v100);
    }
    v55 = *((unsigned int *)this + 14);
    if ( v38 <= v55 && *(unsigned int *)(*((unsigned int *)this + 3) + 108) )
    {
LABEL_114:
      v73 = *(int **)((char *)this + 12);
      if ( v73[27] > 0
        && !*((unsigned char *)this + 81)
        && (!*((unsigned char *)this + 80) || (*(int (**)(int *))(*v73 + 456))(v73) >= *((unsigned int *)this + 14) / 2)
        && (*((unsigned int *)this + 7) != MEMORY[0x8B3C78]
         || *((unsigned int *)this + 8) != MEMORY[0x8B3C7C]
         || *((unsigned int *)this + 9) != MEMORY[0x8B3C80]) )
      {
        v74 = *(int (****)(unsigned int, void *, double *))((char *)this + 12);
        v75 = 0;
        if ( v74 )
        {
          v76 = (**v74)(v74, &unk_822410, &v106);
          v75 = v76 < 0 ? 0 : LODWORD(v106);
          if ( v76 < 0 && v76 != -2147467262 )
            WinAPI::Wrapper(v76);
        }
        if ( (unsigned __int8)DamageArea::CheckOccupancyEligibility(this) )
        {
          if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3)) + 3367) )
          {
            if ( *((unsigned char *)this + 80) || !*(unsigned int *)(*((unsigned int *)this + 3) + 692) )
            {
              *((unsigned int *)this + 16) = 0;
              *((unsigned int *)this + 17) = 0;
            }
            else
            {
              *((unsigned int *)this + 16) = 0;
              *((unsigned int *)this + 17) = 1072693248;
            }
          }
          else
          {
            v77 = (double)SLODWORD(v102);
            v78 = v77 / (double)*(int *)(v103 + 760);
            if ( v78 > 1.0 )
              v78 = 1.0;
            *(double *)((char *)this + 64) = v78;
            if ( v78 < 0.1 )
            {
              if ( SLODWORD(v102) <= 85 )
              {
                v79 = *(double *)((char *)this + 72) * 0.5;
                *((unsigned int *)this + 16) = 0;
                *((unsigned int *)this + 17) = 0;
                *(double *)((char *)this + 72) = v79;
              }
              else
              {
                *((unsigned int *)this + 16) = -1717986918;
                *((unsigned int *)this + 17) = 1069128089;
              }
            }
            if ( v77 < *(double *)((char *)this + 72) )
              *(double *)((char *)this + 72) = v77;
            if ( *(double *)((char *)this + 64) == 0.0 && *(double *)((char *)this + 72) == 0.0 && SLODWORD(v102) > 0 )
            {
              *((unsigned int *)this + 18) = -1717986918;
              *((unsigned int *)this + 19) = 1068079513;
            }
          }
        }
        else
        {
          *((unsigned int *)this + 16) = 0;
          *((unsigned int *)this + 17) = 1072693248;
        }
        if ( v75 )
          (*(void (**)(int))(*(unsigned int *)v75 + 8))(v75);
      }
      if ( v99 )
      {
        if ( *(int *)(*((unsigned int *)this + 3) + 108) > 0 && *(double *)((char *)this + 72) > 0.0 && !*((unsigned char *)this + 80) )
        {
          LODWORD(v106) = *(unsigned int *)(v103 + 760);
          if ( SLODWORD(v102) < SLODWORD(v106) )
          {
            v80 = *(int **)((char *)this + 12);
            v81 = *v80;
            v106 = 1.0 - ((double)SLODWORD(v102) - (double)SLODWORD(v106) * 0.6) / ((double)SLODWORD(v106) * 0.4);
            v82 = *(double *)((*(int (**)(int *))(v81 + 132))(v80) + 944);
            v83 = *v80;
            v104 = v82;
            v84 = (*(int (**)(int *))(v83 + 132))(v80);
            v85 = *((unsigned int *)this + 3);
            if ( v106 * *(double *)(v84 + 944) <= v104 )
            {
              v87 = (*(int (**)(int))(*(unsigned int *)v85 + 132))(v85);
              v86 = v106 * *(double *)(v87 + 944);
            }
            else
            {
              v86 = *(double *)((*(int (**)(int))(*(unsigned int *)v85 + 132))(v85) + 944);
            }
            *(float *)(*((unsigned int *)this + 3) + 744) = v86;
          }
        }
      }
      if ( !*((unsigned char *)this + 92) )
      {
        v88 = *(int **)((char *)this + 12);
        if ( v88[27] > 0 && !*((unsigned char *)this + 81) && !*((unsigned char *)this + 80) )
        {
          v89 = *((unsigned int *)this + 7) / 256;
          v90 = *((unsigned int *)this + 8) / 256;
          v91 = (unsigned short *)(*(int (**)(int *, double *))(*v88 + 440))(v88, &v106);
          if ( (unsigned short)v89 == *v91 && (unsigned short)v90 == v91[1] && *(double *)((char *)this + 64) == 0.0 )
          {
            v92 = *((unsigned int *)this + 3);
            if ( !*(unsigned int *)(v92 + 692) || !*(unsigned int *)(v92 + 764) )
              LocomotionClass::CheckBridgeBlock(this);
          }
        }
      }
      v93 = *(int **)((char *)this + 12);
      if ( v93[27] <= 0 )
        return (*(int (**)(int *, int))(*v93 + 292))(v93, 1);
      v95 = *(double *)((char *)this + 72);
      if ( v96 )
      {
        v97 = v95 + 0.1;
        if ( v97 >= *(double *)((char *)this + 64) )
LABEL_171:
          v97 = *(double *)((char *)this + 64);
      }
      else
      {
        if ( v95 <= *(double *)((char *)this + 64) )
          return (*(int (**)(int *, int))(*v93 + 292))(v93, 1);
        v97 = *(double *)((char *)this + 72) - 0.1;
        if ( v97 <= *(double *)((char *)this + 64) )
          goto LABEL_171;
      }
      *(double *)((char *)this + 72) = v97;
      return (*(int (**)(int *, int))(*v93 + 292))(v93, 1);
    }
    v56 = v38 - v55;
    if ( v99 )
    {
      if ( !*((unsigned char *)this + 81) )
      {
        v59 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 132))(*((unsigned int *)this + 3));
        if ( *((unsigned int *)this + 14) == (*(int (**)(int))(*(unsigned int *)v59 + 188))(v59) )
        {
          if ( v38 > 16 )
          {
            v56 = 16;
            goto LABEL_97;
          }
        }
        else if ( v38 > 6 )
        {
          v56 = 6;
          goto LABEL_97;
        }
        v56 = v38;
        goto LABEL_97;
      }
      v57 = v56 / 20 + 10;
      v58 = v57;
      if ( v57 >= 48 )
        v58 = 48;
      if ( v58 < v56 )
      {
        if ( v57 >= 48 )
          v56 = 48;
        else
          v56 = v56 / 20 + 10;
      }
    }
    else
    {
      if ( v56 / 20 < v56 )
        v56 /= 20;
      if ( v56 < 50 )
      {
        if ( v56 <= 20 )
          v56 = 20;
      }
      else
      {
        v56 = 50;
      }
    }
LABEL_97:
    v60 = *((unsigned int *)this + 3);
    v61 = v38 - v56;
    if ( !*(unsigned int *)(v60 + 108) && v61 <= 1 )
    {
      v61 = 1;
      goto LABEL_105;
    }
    if ( v61 >= 0 )
    {
      if ( v61 )
      {
LABEL_105:
        (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), v54 + v61);
        v62 = *(int **)((char *)this + 12);
        if ( v62[27] > 0
          && (*((unsigned int *)this + 7) != MEMORY[0x8B3C78]
           || *((unsigned int *)this + 8) != MEMORY[0x8B3C7C]
           || *((unsigned int *)this + 9) != MEMORY[0x8B3C80])
          && ((*(int (**)(int *))(*v62 + 388))(v62) != 7
           || (v63 = *(unsigned int *)(*((unsigned int *)this + 3) + 1444)) == 0
           || (*(int (**)(int))(*(unsigned int *)v63 + 44))(v63) != 6
           || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 3) + 1444) + 1312) + 5835)) )
        {
          v64 = *((unsigned int *)this + 8);
          v65 = (unsigned int *)(*((unsigned int *)this + 3) + 156);
          v110 = ((__int16)(*((unsigned int *)this + 7) / 256) << 8) + 128;
          LODWORD(v106) = *v65;
          v111 = ((__int16)(v64 / 256) << 8) + 128;
          HIDWORD(v106) = v65[1];
          v101 = (double)SLODWORD(v106);
          v66 = v65[2];
          v104 = (double)SHIDWORD(v106);
          v67 = Math::CalcAngle(v104 - (double)v111, (double)v110 - v101);
          v106 = (double)((__int16)Math::RoundToInt((v67 - 1.570796326794897) * -10430.06004058427) - 0x3FFF)
               * -0.00009587672516830327;
          v68 = HIDWORD(v106);
          v69 = LODWORD(v106);
          v70 = Math::SinCos(v106);
          LODWORD(v106) = Math::RoundToInt(v104 - v70 * 5.0);
          v71 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v68, v69)));
          v110 = Math::RoundToInt(v71 * 5.0 + v101);
          v111 = LODWORD(v106);
          v72 = *((unsigned int *)this + 3);
          v112 = v66;
          (*(void (**)(int, int *))(*(unsigned int *)v72 + 436))(v72, &v110);
        }
        goto LABEL_114;
      }
    }
    else
    {
      v61 = 0;
    }
    if ( v54 > 0 )
    {
      *(unsigned char *)(v60 + 140) = 1;
      v54 = 0;
    }
    goto LABEL_105;
  }
  v5 = *((unsigned int *)this + 3);
  v6 = *((unsigned int *)this + 22);
  if ( *(unsigned int *)(v5 + 108) )
    v7 = v6 + 3;
  else
    v7 = v6 + 1;
  v8 = v5 + 156;
  *((unsigned int *)this + 22) = v7;
  v108 = *(double *)v8;
  v9 = *((unsigned int *)this + 22);
  v105 = *(unsigned int *)(v8 + 8);
  v104 = v108;
  v109 = v105 - v9;
  Cell::GetGroundHeight(&v108);
  Coord::To_Cell(&MEMORY[0x87F7E8], &v108);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  v103 = LODWORD(v102);
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v103) )
  {
    RemoveTarget(*((unsigned int *)this + 3));
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 0);
    (*(void (**)(unsigned int, double *))(**(unsigned int **)((char *)this + 12) + 436))(*((unsigned int *)this + 3), &v108);
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 12) + 292))(*((unsigned int *)this + 3), 1);
    Targeting::Readd(*(unsigned int **)((char *)this + 12));
  }
  if ( (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 456))(*((unsigned int *)this + 3)) > 0 )
    goto LABEL_34;
  GadgetGrid::RemoveItem(MEMORY[0x887888], *((unsigned int *)this + 3));
  (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 12) + 460))(*((unsigned int *)this + 3), 0);
  v10 = *(int **)((char *)this + 12);
  v11 = v10[27];
  if ( !v11 )
  {
    LOWORD(v102) = SLODWORD(v108) / 256;
    WORD1(v102) = SHIDWORD(v108) / 256;
    v103 = LODWORD(v102);
    TechnoClass::ComputeCombatDamage(v10, 0);
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v103);
    v13 = **(unsigned int **)((char *)this + 12);
    if ( v12[59] == 2 )
    {
      v14 = *(unsigned int *)((*(int (**)(void))(v13 + 132))() + 1340);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((unsigned int *)MEMORY[0x8871E0] + 128);
    }
    else
    {
      v14 = *(unsigned int *)((*(int (**)(void))(v13 + 132))() + 1344);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((unsigned int *)MEMORY[0x8871E0] + 129);
    }
    if ( v14 == -1 )
      return (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 248))(*((unsigned int *)this + 3));
LABEL_23:
    v15 = *((unsigned int *)this + 3) + 156;
    v106 = *(double *)v15;
    v107 = *(unsigned int *)(v15 + 8);
    StartAudioControllerAt(v14, (int)&v106, 0);
    return (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 248))(*((unsigned int *)this + 3));
  }
  (*(void (**)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*v10 + 364))(
    v10 + 27,
    0,
    *((unsigned int *)MEMORY[0x8871E0] + 1002),
    0,
    1,
    1,
    0);
  LOWORD(v102) = SLODWORD(v108) / 256;
  WORD1(v102) = SHIDWORD(v108) / 256;
  LODWORD(v101) = LODWORD(v102);
  v17 = (void **)__2_YAPAXI_Z(0x1C8u);
  if ( v17 )
  {
    v18 = *((unsigned int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v101) + 59);
    v98 = v109;
    LODWORD(v98) = Return::HRESULT_Fail(SLODWORD(v108), SHIDWORD(v108), v109);
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(v11, *((unsigned int *)MEMORY[0x8871E0] + 1002), v18, &v104);
    AnimClass::ctor(v17, VersusMultiplier, (int *)&v108, 0, 1, (void *)0x2600, (void *)v98, SBYTE4(v98));
  }
  CreateSmokeEffectAt(v11, *((unsigned int *)MEMORY[0x8871E0] + 1002), SLODWORD(v108), SHIDWORD(v108), v109, 0, 0);
  return PlaySoundEffectAt(&v108, v11, 0, *((unsigned int *)MEMORY[0x8871E0] + 1002), 1, 0);

}
} // namespace gamemd

// 0x4D0180
namespace gamemd {
int DamageArea::CheckOccupancyEligibility()
{

  unsigned int *v2; // esi
  int (***v3)(unsigned int, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(unsigned int **)((char *)this + 12); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (**)(unsigned int))(*v2 + 44))(*((unsigned int *)this + 3)) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (**)(unsigned int *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *((unsigned char *)this + 81) || !*((unsigned char *)this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(unsigned char *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = *(int (****)(unsigned int, void *, int *))((char *)this + 12); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM(&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM(&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (**)(int))(*(unsigned int *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (**)(int))(*(unsigned int *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(unsigned int *)(*((unsigned int *)this + 3) + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/

}
} // namespace gamemd
// 0x565660
namespace gamemd {
unsigned int * DamageArea::CalcScatterOffset(unsigned int * v11, short * a3)
{

  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+20h] [ebp+8h]

  v3 = *((unsigned int *)this + 61); /*0x565668*/
  v4 = *((unsigned int *)this + 63); /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = *((unsigned int *)this + 64); /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *v11 = v11; /*0x5656c2*/
  return v11; /*0x5656bf*/

}
} // namespace gamemd