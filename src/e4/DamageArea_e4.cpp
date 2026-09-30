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
    unsigned int v7 = 0;  /* G37 hoist */
  int result; // eax
  void **v17; // esi
  void *VersusMultiplier; // eax
  int (__stdcall ***v74)(unsigned int, void *, double *); // eax
  double v101; // [esp+50h] [ebp-50h] BYREF
  double v102; // [esp+58h] [ebp-48h] BYREF
  int v103; // [esp+64h] [ebp-3Ch] BYREF
  double v104; // [esp+68h] [ebp-38h] BYREF
  int v105; // [esp+70h] [ebp-30h]
  double v106; // [esp+78h] [ebp-28h] BYREF
  int v107; // [esp+80h] [ebp-20h]
  double v108; // [esp+88h] [ebp-18h] BYREF
  unsigned int v109; // [esp+90h] [ebp-10h]
  int v2; // edi
  v2 = *(unsigned int *)(*(int (**)(unsigned int, double *))(*(unsigned int *)(this->q00C) + 440))(
                    this->q00C,
                    &v106);
  unsigned int * v3 = (unsigned int *)(this->q00C + 1376);
  v103 = v2;
  if ( v2 != *v3 && this->q004->vt_slot_128() )
    Coord::ToGridIndex((char *)g_CellClassManager, this->q00C, *(unsigned int *)((unsigned int *))(this->q00C + 1376), v2);
  if ( (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 388))(this->q00C) == 7
    && this->u8_5C )
  {
    this->u8_5C = 0;
  }
  unsigned int * v4 =
  if ( this->q004->vt_slot_96()
    && *(unsigned int *)(this->q00C + 108)
    || !(*(int (**)(unsigned int))(*this->q00C + 456))(this->q00C) )
  {
  int v54; // ebx
    unsigned int v20 =
    if ( v20[27] > 0 )
    {
      if ( ((unsigned int *)(v20))[361] )
      {
        if ( (*(int (**)(int *))(*(unsigned int *)(v20) + 388))(v20) == 5 )
        {
          unsigned int v21 =
          if ( v21[45] == -1 && !this->u8_18 )
            (*(void (**)(unsigned int *, int, unsigned int))(*v21 + 488))(v21, 2, 0);
        }
      }
    }
LABEL_34:
    result = (*(int (__stdcall **)(int))(this->u32_20)&this->u32_10;
    if ( !(unsigned char)result )
      return result;
    int v22 = (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 132))(this->q00C);
    int v23 = this->q00C;
    v103 = v22;
    char v99 = *(unsigned char *)(v22 + 3221);
    (*(void (**)(int, unsigned int))(*(unsigned int *)v23 + 292))(v23, 0);
    int v24 = this->q00C;
    v108 = *(double *)(v24 + 156);
    v109 = *(unsigned int *)(v24 + 164);
    int v25 = *ProgressTimer::GetValue((unsigned short *)((unsigned int)(v24)+ 904), &v106);
    IDA_LODWORD(v101) = (*(int (__stdcall **)(int))(this->q250)&this->u32_10;
    if ( IDA_SLODWORD(v101) > 0 )
    {
      int v26 = v109;
      v104 = (double)((int16_t)v25 - 0x3FFF) * -0.00009587672516830327;
      unsigned int v27 = IDA_HIDWORD(v104);
      unsigned int v28 = IDA_LODWORD(v104);
      v102 = (double)IDA_SHIDWORD(v108);
      v101 = (double)IDA_SLODWORD(v101);
      double v29 = Math::SinCos(v104);
      IDA_LODWORD(v102) = Math::RoundToInt(v102 - v29 * v101);
      double v30 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v27, v28)));
      int v31 = Math::RoundToInt(v30 * v101 + (double)IDA_SLODWORD(v108));
      Coord::Subtract(&v104, v31, IDA_SLODWORD(v102), v26);
      v109 = v105;
      v108 = v104;
      IDA_LODWORD(v102) = *(unsigned int *)CellStruct::Set(&v104, IDA_SLODWORD(v104) / 256, IDA_SHIDWORD(v104) / 256);
      LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (int16_t *)&v102);
    }
    IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256;
    IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (int16_t *)&v102)
      || !(*(uint8_t (**)(unsigned int))(*(unsigned int *)(this->q00C) + 1244))(this->q00C) )
    {
      goto LABEL_50;
    }
    int v32 = this->q00C;
    if ( v32 && (*(int (**)(int))(*(unsigned int *)v32 + 44))(v32) == 2 )
    {
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v11 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
    unsigned int v36 = 0;  /* G37 hoist */
      int v33 = this->q00C;
      int v34 = v33 ? ((*(int (**)(unsigned int))(*(unsigned int *)v33 + 44))(this->q00C) == 2 ? v33 : 0) : 0;
      if ( *(unsigned char *)(*(unsigned int *)(v34 + 1732) + 3595) )
        goto LABEL_50;
    }
    IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256;
    IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
    IDA_LODWORD(v101) = IDA_LODWORD(v102);
  int v35; // eax
    v35 = (int16_t)*(unsigned int *)DamageArea::CalcScatterOffset(&v106, &v101) >= g_AircraftTrackerPool / 2
        ? IDA_LODWORD(v108) - 128
        : IDA_LODWORD(v108) + 128;
    IDA_LODWORD(v108) = v35;
    IDA_LOWORD(v102) = v35 / 256;
    IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
    if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (int16_t *)&v102)
  int *v36; // eax
  int v110; // [esp+94h] [ebp-Ch] BYREF
      || (v36 = RandomCoordScatter(&v110, (int *)&v108, 64, 0),
          v108 = *(double *)v36,
          v109 = v36[2],
          IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256,
          IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256,
          LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (int16_t *)&v102)) )
    {
LABEL_50:
      (*(void (**)(unsigned int, double *))(*(unsigned int *)(this->q00C) + 436))(this->q00C, &v108);
    }
    int v37 = this->q00C;
    IDA_LODWORD(v101) = 0;
    int v38 = (*(int (**)(int))(*(unsigned int *)v37 + 456))(v37);
    int v39 = this->q00C;
    if ( !*(unsigned char *)(v39 + 140) && v38 >= (int)(DataGlobal_8B3CAC) )
    {
      int v40 = v39 + 156;
      v106 = *(double *)v40;
      v107 = *(unsigned int *)(v40 + 8);
      if ( (*((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v106) + 80) & 0x100) != 0 )
      {
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = (unsigned int)(0);
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
    unsigned int v112 = 0;  /* G37 hoist */
        v38 -= DataGlobal_8B3CAC;
        IDA_LODWORD(v101) = DataGlobal_8B3CAC;
      }
    }
    int v41 = this->q070;
    void * v42 =
    int v112 = this->u32_24;
    unsigned int * v43 = (unsigned int *)(this->q00C + 156);
    int v44 = *(unsigned int *)(this->q00C + 160);
    IDA_LODWORD(v106) = v41 - *v43;
    int v45 = (unsigned int)(v43[2]);
    IDA_HIDWORD(v106) = (unsigned int)(v42)- v44;
    v112 = v45;
    double v46 = Math::Sqrt((double)((unsigned int)(v42)- v44) * (double)((unsigned int)(v42)- v44) + (double)IDA_SLODWORD(v106) * (double)IDA_SLODWORD(v106));
    IDA_LODWORD(v102) = Math::RoundToInt(v46);
  int v47; // eax
    if ( v38 >= this->u32_38 || (v47 = this->q00C, *(int *)(v47 + 108) <= 0) )
    {
      v54 = IDA_LODWORD(v101);
    }
    else
    {
  int v52; // eax
      bool v48 = 0;
      int v100 = 0;
      if ( v47 )
      {
  int v50; // eax
        int v49 = (**(int (__stdcall ***)(int, void *, double *))v47)(v47, &unk_822410, &v104);
        if ( v49 >= 0 )
        {
          IDA_LODWORD(v106) = IDA_LODWORD(v104);
          v50 = IDA_LODWORD(v104);
        }
        else
        {
          v50 = 0;
        }
        v100 = v50;
        if ( v49 < 0 && v49 != -2147467262 )
          WinAPI::Wrapper(v49);
        if ( v50 )
          v48 = (*(int (__stdcall **)(int))(*(unsigned int *)v50 + 20))(v50) != 0;
      }
      int v51 = this->u32_38;
      if ( v99 )
      {
        v52 = v51 - v38;
        if ( v52 > 16 )
          v52 = 16;
      }
      else
      {
        v52 = v51 - v38;
        int v53 = v48 ? 10 : 20;
        if ( v53 < v52 )
          v52 = v53;
      }
      v54 = IDA_LODWORD(v101);
      (*(void (**)(unsigned int, int))(*(unsigned int *)(this->q00C) + 460))(
        this->q00C,
        IDA_LODWORD(v101) + v38 + v52);
      *(unsigned char *)(this->q00C + 140) = 0;
      if ( v100 )
        (*(void (__stdcall **)(int))(*(unsigned int *)v100 + 8))(v100);
    }
    int v55 = this->u32_38;
    if ( v38 <= v55 && *(unsigned int *)(this->q00C + 108) )
    {
  void * v97;
LABEL_114:
      unsigned int v73 =
      if ( v73[27] > 0
        && !this->u8_51
        && (!this->q050 || (*(int (**)(int *))(*v73 + 456))(v73) >= this->u32_38 / 2)
        && (this->q070 != DataGlobal_8B3C78
         || this->q008 != DataGlobal_8B3C7C
         || this->u32_24 != DataGlobal_8B3C80) )
      {
        v74 = *(int (__stdcall ****)(unsigned int, void *, double *))(&this->u32_42);
        int v75 = 0;
        if ( v74 )
        {
          int v76 = (**v74)(v74, &unk_822410, &v106);
          v75 = v76 < 0 ? 0 : IDA_LODWORD(v106);
          if ( v76 < 0 && v76 != -2147467262 )
            WinAPI::Wrapper(v76);
        }
        if ( (uint8_t)DamageArea::CheckOccupancyEligibility(this) )
        {
          if ( *(unsigned char *)((*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 132))(this->q00C) + 3367) )
          {
            if ( this->q050 || !*(unsigned int *)(this->q00C + 692) )
            {
              this->q100 = 0;
              this->u32_44 = 0;
            }
            else
            {
              this->q100 = 0;
              this->u32_44 = 1072693248;
            }
          }
          else
          {
            double v77 = (double)IDA_SLODWORD(v102);
            double v78 = v77 / (double)*(int *)(v103 + 760);
            if ( v78 > 1.0 )
              v78 = 1.0;
            this->q100 = v78;
            if ( v78 < 0.1 )
            {
              if ( IDA_SLODWORD(v102) <= 85 )
              {
                double v79 = *(double *)(&this->u32_1C2) * 0.5;
                this->q100 = 0;
                this->u32_44 = 0;
                *(double *)(&this->u32_1C2) = v79;
              }
              else
              {
                this->q100 = -1717986918;
                this->u32_44 = 1069128089;
              }
            }
            if ( v77 < *(double *)(&this->u32_1C2) )
              *(double *)(&this->u32_1C2) = v77;
            if ( this->q100 == 0.0 && *(double *)(&this->u32_1C2) == 0.0 && IDA_SLODWORD(v102) > 0 )
            {
              this->u64_48 = -1717986918;
              this->u32_4C = 1068079513;
            }
          }
        }
        else
        {
          this->q100 = 0;
          this->u32_44 = 1072693248;
        }
        if ( v75 )
          (*(void (__stdcall **)(int))(*(unsigned int *)v75 + 8))(v75);
      }
      if ( v99 )
      {
        if ( *(int *)(this->q00C + 108) > 0 && *(double *)(&this->u32_1C2) > 0.0 && !this->q050 )
        {
          IDA_LODWORD(v106) = *(unsigned int *)(v103 + 760);
          if ( IDA_SLODWORD(v102) < IDA_SLODWORD(v106) )
          {
    unsigned int v81 = 0;  /* G37 hoist */
  double v86; // st7
            unsigned int v80 =
            int v81 = *v80;
            v106 = 1.0 - ((double)IDA_SLODWORD(v102) - (double)IDA_SLODWORD(v106) * 0.6) / ((double)IDA_SLODWORD(v106) * 0.4);
            double v82 = *(unsigned int *)((double *))((*(int (**)(int *))(v81 + 132))(v80) + 944);
            int v83 = *(unsigned int *)(v80);
            v104 = v82;
            int v84 = (*(int (**)(int *))(v83 + 132))(v80);
            int v85 = this->q00C;
            if ( v106 * *(double *)(v84 + 944) <= v104 )
            {
              int v87 = (*(int (**)(int))(*(unsigned int *)v85 + 132))(v85);
              v86 = v106 * *(double *)(v87 + 944);
            }
            else
            {
              v86 = *(double *)((*(int (**)(int))(*(unsigned int *)v85 + 132))(v85) + 944);
            }
            *(float *)(this->q00C + 744) = v86;
          }
        }
      }
      if ( !this->u8_5C )
      {
        unsigned int v88 =
        if ( v88[27] > 0 && !this->u8_51 && !this->q050 )
        {
          int v89 = this->q070 / 256;
          int v90 = this->q008 / 256;
          unsigned short * v91 = (unsigned short *)(*(int (**)(int *, double *))(*(unsigned int *)(v88) + 440))(v88, &v106);
          if ( (unsigned short)v89 == *v91 && (unsigned short)v90 == v91[1] && this->q100 == 0.0 )
          {
            int v92 = this->q00C;
            if ( !*(unsigned int *)(v92 + 692) || !*(unsigned int *)(v92 + 764) )
              LocomotionClass::CheckBridgeBlock();
          }
        }
      }
      unsigned int v93 =
      if ( v93[27] <= 0 )
        return (*(int (**)(int *, int))(*v93 + 292))(v93, 1);
      double v95 = *(double *)(&this->u32_1C2);
  char v96; // c0
      if ( v96 )
      {
        v97 = (void *)(v95 + 0.1);
        if ( v97 >= (void *)(this->q100) )
void * v97 = (void *)(this->q100);
      }
      else
      {
        if ( v95 <= this->q100 )
          return (*(int (**)(int *, int))(*(unsigned int *)(v93) + 292))(v93, 1);
        v97 = (double)((void *)(*(double *)(&this->u32_1C2) - 0.1));
        if ( v97 <= (void *)(this->q100) )
          goto LABEL_171;
      }
      *(double *)(&this->u32_1C2) = v97;
      return (*(int (**)(int *, int))(*(unsigned int *)(v93) + 292))(v93, 1);
    }
    int v56 = v38 - v55;
    if ( v99 )
    {
      if ( !this->u8_51 )
      {
        int v59 = (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 132))(this->q00C);
        if ( this->u32_38 == (*(int (**)(int))(*(unsigned int *)v59 + 188))(v59) )
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
      int v57 = v56 / 20 + 10;
      int v58 = v57;
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
    int v60 = this->q00C;
    int v61 = v38 - v56;
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
        (*(void (**)(unsigned int, int))(*(unsigned int *)(this->q00C) + 460))(this->q00C, v54 + v61);
        unsigned int v62 =
        if ( v62[27] > 0
          && (this->q070 != DataGlobal_8B3C78
           || this->q008 != DataGlobal_8B3C7C
           || this->u32_24 != DataGlobal_8B3C80)
          && ((*(int (**)(int *))(*v62 + 388))(v62) != 7
  int v63; // ecx
           || (v63 = *(unsigned int *)(this->q00C + 1444)) == 0
           || (*(int (**)(int))(*(unsigned int *)v63 + 44))(v63) != 6
           || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(this->q00C + 1444) + 1312) + 5835)) )
        {
    unsigned int v65 = 0;  /* G37 hoist */
          void * v64 =
          unsigned int * v65 = (unsigned int *)(this->q00C + 156);
          v110 = ((int16_t)(this->q070 / 256) << 8) + 128;
          IDA_LODWORD(v106) = *(unsigned int *)(v65);
          int v111 = ((int16_t)((unsigned int)(v64)/ 256) << 8) + 128;
          IDA_HIDWORD(v106) = ((unsigned int *)(v65))[1];
          v101 = (double)IDA_SLODWORD(v106);
          int v66 = ((unsigned int *)(v65))[2];
          v104 = (double)IDA_SHIDWORD(v106);
          double v67 = Math::CalcAngle(v104 - (double)v111, (double)v110 - v101);
          v106 = (double)((int16_t)Math::RoundToInt((v67 - 1.570796326794897) * -10430.06004058427) - 0x3FFF)
               * -0.00009587672516830327;
          unsigned int v68 = IDA_HIDWORD(v106);
          unsigned int v69 = IDA_LODWORD(v106);
          double v70 = Math::SinCos(v106);
          IDA_LODWORD(v106) = Math::RoundToInt(v104 - v70 * 5.0);
          double v71 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v68, v69)));
          v110 = Math::RoundToInt(v71 * 5.0 + v101);
          v111 = IDA_LODWORD(v106);
          int v72 = this->q00C;
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
  int v5 = this->q00C;
  int v6 = this->u32_58;
  if ( *(unsigned int *)(v5 + 108) )
    int v7 = v6 + 3;
  else
    v7 = v6 + 1;
  int v8 = v5 + 156;
  this->u32_58 = v7;
  v108 = *(double *)v8;
  int v9 = this->u32_58;
  v105 = *(unsigned int *)(v8 + 8);
  v104 = v108;
  v109 = v105 - v9;
  Cell::GetGroundHeight(&v108);
  Coord::To_Cell(&DataGlobal_87F7E8, &v108);
  IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256;
  IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
  v103 = IDA_LODWORD(v102);
  if ( LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (int16_t *)&v103) )
  {
    RemoveTarget(this->q00C);
    (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)(this->q00C) + 292))(this->q00C, 0);
    (*(void (**)(unsigned int, double *))(*(unsigned int *)(this->q00C) + 436))(this->q00C, &v108);
    (*(void (**)(unsigned int, int))(*(unsigned int *)(this->q00C) + 292))(this->q00C, 1);
    Targeting::Readd(this->q00C);
  }
  if ( (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 456))(this->q00C) > 0 )
    goto LABEL_34;
  GadgetGrid::RemoveItem(g_CellClassManager, this->q00C);
  (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)(this->q00C) + 460))(this->q00C, 0);
  unsigned int v10 =
  int v11 = v10[27];
  if ( !v11 )
  {
  int v14; // eax
    IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256;
    IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
    v103 = IDA_LODWORD(v102);
    TechnoClass::ComputeCombatDamage(v10, 0);
    unsigned int * v12 = (unsigned int *)(CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v103));
    int v13 = *(unsigned int *)(this->q00C);
    if ( v12[59] == 2 )
    {
      v14 = *(unsigned int *)((*(int (**)(void))(v13 + 132))() + 1340);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((unsigned int *)g_RulesClass_Instance + 128);
    }
    else
    {
      v14 = *(unsigned int *)((*(int (**)(void))(v13 + 132))() + 1344);
      if ( v14 != -1 )
        goto LABEL_23;
      v14 = *((unsigned int *)g_RulesClass_Instance + 129);
    }
    if ( v14 == -1 )
      return (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 248))(this->q00C);
LABEL_23:
    int v15 = this->q00C + 156;
    v106 = *(double *)v15;
    v107 = *(unsigned int *)(v15 + 8);
    StartAudioControllerAt(v14, (int)&v106, 0);
    return (*(int (**)(unsigned int))(*(unsigned int *)(this->q00C) + 248))(this->q00C);
  }
  (*(void (__stdcall **)(int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)(v10) + 364))(
    v10 + 27,
    0,
    *((unsigned int *)g_RulesClass_Instance + 1002),
    0,
    1,
    1,
    0);
  IDA_LOWORD(v102) = IDA_SLODWORD(v108) / 256;
  IDA_WORD1(v102) = IDA_SHIDWORD(v108) / 256;
  IDA_LODWORD(v101) = IDA_LODWORD(v102);
  v17 = (void *)operator new(0x1C8u);
  if ( v17 )
  {
    int v18 = *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v101) + 59);
    int64_t v98 = v109;
    IDA_LODWORD(v98) = Return::HRESULT_Fail(IDA_SLODWORD(v108), IDA_SHIDWORD(v108), v109);
    VersusMultiplier = (void *)GetWarheadVersusMultiplier(v11, *((unsigned int *)g_RulesClass_Instance + 1002), v18, &v104);
    AnimClass::ctor(v17, VersusMultiplier, (int *)&v108, 0, 1, (void *)0x2600, (void *)v98, SBYTE4(v98));
  }
  CreateSmokeEffectAt(v11, *((unsigned int *)g_RulesClass_Instance + 1002), IDA_SLODWORD(v108), IDA_SHIDWORD(v108), v109, 0, 0);
  return PlaySoundEffectAt(&v108, v11, 0, *((unsigned int *)g_RulesClass_Instance + 1002), 1, 0);
}
} // namespace gamemd

// 0x4D0180
namespace gamemd {
int DamageArea::CheckOccupancyEligibility()
{
  unsigned int *v2; // esi
  int (__stdcall ***v3)(unsigned int, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = (unsigned int *)this->u32_C; /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
        if ( (*(int (**)(unsigned int))(*v2 + 44))(*((unsigned int *)this + 48)) == 2 )
    {
      if ( (*(int (__stdcall **)(unsigned int *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
    if ( *((unsigned char *)this + 324) || !*((unsigned char *)this + 368) )
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(unsigned char *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = (int (__stdcall ***)(unsigned int, void *, int *))this->u32_C; /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v9 = v9; /*0x4d021c*/
        Release3COM((ObjectClass *)&v8); /*0x4d0224*/
        v4 = v9; /*0x4d0229*/
        v8 = v9; /*0x4d022c*/
      }
      else
      {
        Release3COM((ObjectClass *)&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(unsigned int *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(unsigned int *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
        if ( !*(unsigned int *)(*((unsigned int *)this + 48) + 764) )
    {
  LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4d02a4*/
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
  int16_t v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+20h] [ebp+8h]

    v3 = *((unsigned int *)this + 244);
    v4 = *((unsigned int *)this + 252);
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
    v7 = *((unsigned int *)this + 256);
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  IDA_LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  IDA_HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *v11 = v11; /*0x5656c2*/
  return v11; /*0x5656bf*/
}
} // namespace gamemd