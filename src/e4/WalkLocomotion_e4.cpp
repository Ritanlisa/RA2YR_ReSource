// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x6A01A0
namespace gamemd {
AbstractClass * * WalkLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
  unsigned int *v3; // edx
  void * v5;
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int * v15;
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = (unsigned char)(aP1);
  if ( *aP1 != g_OverlayTypeConfig || aP1[1] != (unsigned int)qword_B077FC || (v5 = aP1[2], v5 != IDA_HIDWORD(qword_B077FC)) ) /*0x6a01ce*/
  {
    IDA_LOBYTE(v5) = this->ptr_60; /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(unsigned char)v5 ) /*0x6a01dd*/
    {
      v5 = (void *)((int)(this->q058));
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( this->q05C < v5 ) /*0x6a022c*/
            {
              v10 = (void *)(v9[1]);
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords((WalkLocomotion *)this, &v19, v18, &aP3); /*0x6a0250*/
              v11 = *(unsigned int *)v5; /*0x6a0255*/
              v12 = *(unsigned int *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->q0042) + 464))(this->q00C); /*0x6a0263*/
                v14 = this->q00C; /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(unsigned int *)v14 + 244))(v14, &v19); /*0x6a027f*/
                IDA_LOBYTE(v5) = (*(char (__thiscall **)(unsigned int, unsigned int *))(**(unsigned int **)(&this->q0042) + 244))( /*0x6a028f*/
                               this->q00C,
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (int)((unsigned int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->q0042) + 464))(this->q00C)));
                v16 = (int)(this->q00C);
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(unsigned int *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = (unsigned int *)(aP1);
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        IDA_LOBYTE(v5) = (*(char (__thiscall **)(unsigned int, unsigned int *))(**(unsigned int **)(&this->q0042) + 240))( /*0x6a02fe*/
                       this->q00C,
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(char (__thiscall **)(unsigned int, unsigned int *))(**(unsigned int **)(&this->q0042) + 244))( /*0x6a02de*/
                     this->q00C,
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}
// 0x6A05F0
namespace gamemd {
int WalkLocomotion::ProcessCollision(char a2)
{
  MouseClass *v13; // ecx
  MouseClass *v21; // ecx
  MouseClass *v27; // ecx
  TechnoClass *v32; // eax
  MouseClass *v36; // eax
  ObjectClass *Coords; // eax
  int GroundHeight; // esi
  int16_t v48; // cx
  IUnknown *v50; // esi
  MouseClass *v52; // ecx
  MouseClass *v62; // ecx
  IUnknown *v66; // esi
  IUnknown *v67; // ebx
  MouseClass *v70; // edi
  TechnoClass *v71; // esi
  TechnoClass *v72; // eax
  TechnoClass *v73; // esi
  TechnoClass *nextObject; // ebx
  MouseClass *v77; // ecx
  MouseClass *v81; // eax
  int16_t v83; // cx
  MouseClass *v85; // ecx
  int16_t v87; // dx
  MouseClass *v90; // ecx
  TechnoClass *v96; // edx
  IUnknown *v99; // eax
  TechnoClass *v102; // eax
  MouseClass *v103; // ecx
  MouseClass *v104; // eax
  TechnoClass *v106; // edx
  unsigned int *eax134; // eax
  MouseClass *v111; // edx
  int ecx137; // ecx
  TechnoClass *v113; // edi
  bool cc140; // cc
  IUnknown *v117; // eax
  int eax144; // eax
  MouseClass *v120; // edi
  int ebx145; // ebx
  MouseClass *v126; // ecx
  MouseClass *v127; // ebx
  char al148; // al
  TechnoClass *v131; // eax
  MouseClass *v132; // eax
  int64_t rax156; // rax
  MouseClass *v139; // ecx
  int esi178a; // esi
  TechnoClass *v154; // ebx
  IUnknown *v155; // esi
  int *eax178d; // eax
  TechnoClass *v158; // edx
  IUnknown *v159; // edi
  IUnknown *v161; // eax
  unsigned int edx178; // edx
  TechnoClass *v163; // ebx
  void *eax184; // eax
  MouseClass *v166; // ecx
  int fallRate; // ecx
  IUnknown *v171; // eax
  int uniqueId; // [esp+20h] [ebp-104h]
  int LandHeight; // [esp+24h] [ebp-100h]
  AbstractClass *v176; // [esp+2Ch] [ebp-F8h]
  ObjectClass *aP4; // [esp+44h] [ebp-E0h] BYREF
  unsigned char v182[12]; // [esp+48h] [ebp-DCh] BYREF
  void * varD0;
  IUnknown *v183; // [esp+5Ch] [ebp-C8h]
  ObjectClass aP3; // [esp+60h] [ebp-C4h] BYREF
  if ( (!this->u8_63 || this->WalkLocomotion_field_0x58 == -1) && *(unsigned int *)(this->q00C + 1504) != 8
    || this->u8_62
    && !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3233) )
  {
    this->u32_4C = 0;
    return 0;
  }
  int v3 = (*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C);
  int v4 = *this->q00C;
  if ( *(unsigned char *)(v3 + 3517) )
  {
    bool v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(unsigned char *)(*(unsigned int *)(this->q00C + 1732) + 3596);
    if ( this->q058 < 64 && v5 )
    {
      *(unsigned int *)v182 = this->ptr_34;
      *(unsigned int *)&v182[4] = this->u32_38;
      *(unsigned int *)&v182[8] = this->u32_3C;
  int v6; // esi
      v6 = (*((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v182) + 80) & 0x100) != 0
         ? g_OverlayTypeConfig.field_34
         : 0;
      int v7 = v6 + Cell::GetGroundHeight(v182);
      unsigned int * v8 = (unsigned int *)(this->q00C + 156);
      *(unsigned int *)&v182[8] = v7;
      int v9 = v8[1];
      aP3.lastLayer = *v8 - *(unsigned int *)v182;
      int v10 = v8[2];
      *(unsigned int *)&aP3.isInLogic = v9 - *(unsigned int *)&v182[4];
      aP3.location[0] = v10 - v7;
  double v11; // st7
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(unsigned int *)&v182[4]) * (double)(v9 - *(unsigned int *)&v182[4])
            + (double)aP3.lastLayer * (double)aP3.lastLayer);
      int v12 = Math::RoundToInt(v11);
      v13 = (gamemd::MouseClass *)(this->q00C);
      int v14 = v12;
      char v15 = 0;
      int v16 = *(unsigned int *)&v13->__pad_1D4[936];
      IDA_LODWORD(varD0) = *(unsigned int *)&v13->__pad_1D4[932];
      int v17 = v13->field_0;
      IDA_HIDWORD(varD0) = v16;
      int v18 = (*(int (__thiscall **)(MouseClass *))(v17 + 132))(v13);
      if ( v14 >= *(unsigned int *)(v18 + 760) )
      {
        if ( *(unsigned char *)(this->q00C + 973) )
        {
          double v20 = varD0 - (double)*(int *)(v18 + 1656) * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varD0 = (void *)(v20);
          else
            varD0 = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        double v19 = varD0 - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varD0 = (void *)(v19);
        else
          varD0 = 0.300000011920929;
      }
      v21 = (gamemd::MouseClass *)(this->q00C);
      if ( v21->__pad_1D4[1249] )
      {
        if ( this->q140 >= 0.2 )
          double v22 = 0.2;
        else
          v22 = this->q140;
        varD0 = v22;
        int v23 = IDA_HIDWORD(varD0);
        this->q140 = v22;
        (*(void (__stdcall **)(unsigned int, int))(v21->field_0 + 1348))(IDA_LODWORD(varD0), v23);
      }
      else
      {
        if ( !v15 )
        {
  void * v24;
          if ( *(double *)&v21->__pad_1D4[932] >= this->q140 )
          {
            if ( *(double *)&v21->__pad_1D4[932] <= this->q140 )
              goto LABEL_37;
            v24 = *(double *)&v21->__pad_1D4[932] - (double)*(int *)(v18 + 1656) * *(double *)(v18 + 768);
            if ( this->q140 > v24 )
              v24 = (void *)(this->q140);
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21->__pad_1D4[932];
            if ( this->q140 < v24 )
              v24 = (void *)(this->q140);
          }
          varD0 = v24;
          (*(void (__stdcall **)(unsigned int, unsigned int))(v21->field_0 + 1348))(
            IDA_LODWORD(v24),
            IDA_HIDWORD(*(uint64_t *)&v24));
          goto LABEL_37;
        }
        (*(void (__stdcall **)(unsigned int, unsigned int))(v21->field_0 + 1348))(IDA_LODWORD(varD0), IDA_HIDWORD(varD0));
      }
LABEL_37:
      if ( (*(int (__thiscall **)(unsigned int))(*this->q00C + 44))(this->q00C) == 1 )
      {
        unsigned int * v25 = *(unsigned int **)(this->q00C + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (__thiscall **)(unsigned int *, unsigned int, unsigned int))(*v25 + 1348))(
              v25,
              *(unsigned int *)(this->q00C + 1400),
              *(unsigned int *)(this->q00C + 1404));
            v25 = (unsigned int *)v25[434];
          }
          while ( v25 && v25 != (unsigned int *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (__stdcall **)(unsigned int, unsigned int))(v4 + 1348))(this->q140, this->u32_54);
  }
  int v26 = (*(int (__thiscall **)(unsigned int))(*this->q00C + 1336))(this->q00C);
  v27 = (gamemd::MouseClass *)(this->q00C);
  int v28 = a2 == 0 ? v26 : 0;
  int v29 = *(unsigned int *)&v27->__pad_1D4[1036];
  int v30 = this->u32_4C + v28;
  *(unsigned int *)&aP3[4] = v30;
  aP3.uniqueId = (void *)(v29);
  if ( v29 == 8 && this->WalkLocomotion_field_0x58 == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, unsigned int))(v27->field_0 + 292))(v27, 0);
    int * v31 = (int *)(&this->u32_184);
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig.field_0
      || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
      || this->q048 != g_OverlayTypeConfig.field_8 )
    {
      *v31 = g_OverlayTypeConfig.field_0;
      this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
      v32 = (TechnoClass *)g_OverlayTypeConfig.field_8;
      this->u8_63 = 0;
      this->q048 = (unsigned char)(v32);
    }
    int v33 = *(int16_t *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 444))(this->q00C) + 278);
    if ( v33 >= 0 && v33 < *(int *)&g_CellDirectionOffsets[84664] )
    {
      int v34 = *(unsigned int *)(*(unsigned int *)&g_CellDirectionOffsets[84652] + 4 * v33);
      aP4 = *(ObjectClass **)(v34 + 40);
      int v35 = IDA_SHIWORD(aP4) << 8;
      *v31 = ((int16_t)aP4 << 8) + 128;
      v36 = (gamemd::MouseClass *)(this->q00C);
      this->WalkLocomotion_field_0x44 = v35 + 128;
      this->q048 = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(unsigned int *)(this->q00C + 1596) = -1;
      *(unsigned char *)(this->q00C + 1668) = v33;
      *(unsigned char *)(this->q00C + 1669) = 0;
      int v37 = *(unsigned int *)(v34 + 48) & 7;
      aP4 = *(ObjectClass **)(v34 + 36);
      *(unsigned short *)&aP3[8] = *((unsigned short *)&Direction_X_Offsets.field_0 + 2 * v37) + (unsigned short)aP4;
      *(unsigned short *)&aP3[10] = IDA_HIWORD(aP4) + *((unsigned short *)&DataGlobal_89F68A + 2 * v37);
      aP4 = *(ObjectClass **)&aP3[8];
      unsigned int * v38 = (unsigned int *)(CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&aP4));
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&aP3.attachedBomb);
      unsigned int * v40 = (unsigned int *)(this->q00C + 1384);
      *v40 = *(unsigned int *)Coords->__pad_0;
      v40[1] = *(unsigned int *)&Coords->__pad_0[4];
      v40[2] = *(unsigned int *)&Coords->__pad_0[8];
      int v41 = this->q00C + 156;
      aP3.nextArrayIndex = (void *)(*(unsigned int *)v41);
      aP3.referenceCount = (void *)(*(unsigned int *)(v41 + 4));
      aP3.NeedsSaveOrLink = *(void **)(v41 + 8);
      GroundHeight = Cell::GetGroundHeight(&aP3.nextArrayIndex);
      aP4 = *(ObjectClass **)(v34 + 40);
      int v43 = *(unsigned int *)(v34 + 448);
      aP3.referenceCount = (void *)((IDA_SHIWORD(aP4) << 8) + 128);
      aP3.nextArrayIndex = (void *)(((int16_t)aP4 << 8) + 128);
      aP3.NeedsSaveOrLink = 0;
      *(unsigned int *)(this->q00C + 1392) = GroundHeight
                                                 + (Cell::GetGroundHeight(&aP3.nextArrayIndex) - GroundHeight) / v43;
      this->u8_63 = 1;
      this->WalkLocomotion_field_0x58 = -1;
      return 0;
    }
    *(unsigned int *)(this->q00C + 1504) = -1;
    this->WalkLocomotion_field_0x58 = -1;
    *v31 = g_OverlayTypeConfig.field_0;
    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
    this->q048 = g_OverlayTypeConfig.field_8;
    if ( *v31 != g_OverlayTypeConfig.field_0
      || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
      || this->q048 != g_OverlayTypeConfig.field_8 )
    {
      *v31 = g_OverlayTypeConfig.field_0;
      this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
      this->q048 = g_OverlayTypeConfig.field_8;
      this->u8_63 = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_141;
  unsigned int v45 =
  ObjectClass * v46 = (unsigned int)((unsigned int)((unsigned int)((unsigned int)(*(unsigned int *)&aP3.bombVisible = v45))));
  if ( v46 )
    int v47 = v45[1];
  else
    v47 = *v45;
  aP3.objectTypeFlags = 16 * v47;
  *(unsigned int *)&aP3[8] = dword_7F2960[4 * v47];
  if ( v29 < -1 || v29 > 8 )
  {
    *(unsigned int *)&v27->__pad_1D4[1036] = -1;
    return 0;
  }
  bool v178 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    IDA_LOBYTE(v48) = 0;
    IDA_HIBYTE(v48) = v45[4];
    IDA_LOWORD(aP4) = v48;
    v178 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    int v49 = this->q05C;
    v50 = *(IUnknown **)&aP3[8];
    *(unsigned int *)&aP3[4] -= 7;
    int v51 = *(unsigned int *)(*(unsigned int *)&aP3[8] + 12 * v49 + 4);
    aP3.health = *(unsigned int *)(*(unsigned int *)&aP3[8] + 12 * v49);
    aP3.estimatedHealth = v51;
    if ( !aP3.health && !v51 && v49 )
      break;
    if ( (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 192))(this->q00C) )
    {
      v52 = (gamemd::MouseClass *)(this->q00C);
  unsigned int v186[4]; // [esp+10Ch] [ebp-18h] BYREF
      v186[0] = *(unsigned int *)&v52->__pad_74[40];
      v186[1] = *(unsigned int *)&v52->__pad_74[44];
      v186[2] = *(unsigned int *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, unsigned int *))(v52->field_0 + 244))(v52, v186);
      *(unsigned char *)(this->q00C + 1718) = 0;
      *(unsigned char *)(this->q00C + 1719) = 0;
    }
    int v53 = this->q05C;
    if ( v53 )
    {
      int v54 = *((unsigned int *)v50 + 3 * v53 - 1);
      char * v55 = (char *)v50 + 12 * v53;
      aP3.abstractFlags = v54;
      int v56 = *((unsigned int *)v55 - 2);
      int v57 = *((unsigned int *)v55 - 3);
      aP3.customSound_controller[1] = v56;
      aP3.customSound_controller[0] = v57;
  unsigned int *v58; // eax
      v58 = WalkLocomotion::TransformCoords(
              (unsigned int *)this,
              (ObjectClass *)&aP3.visibilityFlags,
              (IUnknown *)aP3.customSound_controller,
              (ObjectClass *)&aP3.abstractFlags);
      int v59 = v58[1];
      IDA_LOWORD(aP3.customSound_controller[4]) = *v58 / 256;
      IDA_HIWORD(aP3.customSound_controller[4]) = v59 / 256;
      aP3.customSound_controller[3] = aP3.customSound_controller[4];
    }
    else
    {
      aP3.customSound_controller[3] = *(unsigned int *)(*(int (__thiscall **)(unsigned int, double *))(*this->q00C + 440))(
                                                   this->q00C,
                                                   &varD0);
    }
    aP3.abstractFlags = *(unsigned int *)(*(unsigned int *)&aP3[8] + 12 * this->q05C + 8);
  int *v60; // eax
    v60 = WalkLocomotion::TransformCoords(
            (unsigned int *)this,
            (ObjectClass *)&aP3.lastLayer,
            (IUnknown *)&aP3.health,
            (ObjectClass *)&aP3.abstractFlags);
    int v61 = v60[1];
    aP3.nextArrayIndex = *v60;
    aP3.NeedsSaveOrLink = 0;
    v62 = this->q00C;
    aP3.referenceCount = v61;
    int v63 = v61;
    int v64 = *(unsigned int *)&v62->__pad_74[40];
    int v65 = *(unsigned int *)&v62->__pad_74[44];
    *(unsigned short *)&aP3.isOnMap = aP3.nextArrayIndex / 256;
    int v187 = v65;
    int v188 = *(unsigned int *)&v62->__pad_74[48];
    *(unsigned short *)&aP3.alignmentPadding75[1] = v63 / 256;
    aP3.nextObject = *(void **)&aP3.isOnMap;
    if ( *(unsigned short *)&aP3.isOnMap != (uint16_t)(v64 / 256)
      || (uint16_t)(v63 / 256) != (uint16_t)(v187 / 256) )
    {
      (*(void (__thiscall **)(MouseClass *, unsigned int))(v62->field_0 + 292))(v62, 0);
      (*(void (__thiscall **)(unsigned int, int *))(*this->q00C + 436))(
        this->q00C,
        &aP3.nextArrayIndex);
      v66 = (IUnknown *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&aP3.customSound_controller[3]);
      v67 = (IUnknown *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&aP3.nextObject);
      int v68 = SHIBYTE(v67->field_118);
      int v69 = SHIBYTE(v66->field_118) - 4;
      *(unsigned int *)&aP3[12] = v67;
      if ( v68 != v69 )
        goto LABEL_78;
      if ( (v67->field_140 & 0x100) == 0 )
        goto LABEL_79;
      *(unsigned char *)(this->q00C + 140) = 1;
LABEL_78:
      if ( (v67->field_140 & 0x100) == 0 )
      {
LABEL_79:
        if ( (v66->field_140 & 0x100) != 0 )
          *(unsigned char *)(this->q00C + 140) = 0;
      }
      if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220) )
      {
        v70 = this->q00C;
        if ( !v70->__pad_1D4[1276] )
        {
          if ( v70->__pad_74[24]
            || (aP3.attachedBomb = *(void **)&v70->__pad_74[40],
                aP3.ambientSoundController[0] = *(unsigned int *)&v70->__pad_74[44],
                v71 = *(TechnoClass **)&v70->__pad_74[48],
                aP3.parachute = *(void **)&v70->__pad_74[40],
                *(unsigned int *)&aP3.onBridge = *(unsigned int *)&v70->__pad_74[44],
                *(unsigned int *)&aP3.isAliveFlag = *(unsigned int *)&v70->__pad_74[48],
                (int)v71 >= g_OverlayTypeConfig.field_34 + Cell::GetGroundHeight(&aP3.parachute)) )
          {
            v72 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&aP3.nextObject) + 58);
          }
          else
          {
            v72 = (TechnoClass *)*((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&aP3.nextObject) + 57);
          }
          v73 = v72;
          if ( v72 )
          {
            do
            {
              nextObject = (TechnoClass *)v73->nextObject;
              if ( !ObjectClass::IsCrushable(v73, this->q00C) )
              {
                int v75 = *(unsigned int *)v73->__pad_0;
                aP3.attachedTag = (void *)10000;
                (*(void (__thiscall **)(TechnoClass *, void **, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v75 + 364))(
                  v73,
                  &aP3.attachedTag,
                  0,
                  *(unsigned int *)(*(unsigned int *)&DataGlobal_87F8E4[30972] + 4008),
                  0,
                  1,
                  1,
                  0);
                int v76 = v70->field_0;
                aP3.attachedTag = (void *)20;
                (*(void (__thiscall **)(MouseClass *, void **, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v76 + 364))(
                  v70,
                  &aP3.attachedTag,
                  0,
                  *(unsigned int *)(*(unsigned int *)&DataGlobal_87F8E4[30972] + 4008),
                  0,
                  1,
                  0,
                  0);
              }
              v73 = nextObject;
            }
            while ( nextObject );
            v67 = *(IUnknown **)&aP3[12];
          }
        }
      }
      v77 = this->q00C;
      if ( !v77->__pad_74[28] )
        return 0;
      (*(void (__thiscall **)(MouseClass *, int))(v77->field_0 + 292))(v77, 1);
      int v78 = v67->field_44;
      if ( v78 != -1 )
      {
        int v79 = *(unsigned int *)&g_BuildingTypeClass_Array->__pad_0[4 * v78];
        if ( this->u8_64 )
        {
          if ( (*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C)
                         + 3368)
             || TechnoClass::HasVoiceResponse(this->q00C, 17))
            && !*(unsigned int *)(v79 + 660) )
          {
            *(unsigned char *)(this->q00C + 1717) = 1;
            if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C)
                          + 3371) )
              *(unsigned int *)(this->q00C + 820) = -1130113270;
          }
        }
      }
      goto LABEL_101;
    }
    char v80 = v62->__pad_74[0];
    v62->__pad_74[0] = 0;
    (*(void (__thiscall **)(unsigned int, int *))(*this->q00C + 436))(
      this->q00C,
      &aP3.nextArrayIndex);
    *(unsigned char *)(this->q00C + 116) = v80;
LABEL_101:
    v81 = this->q00C;
    if ( !v81->__pad_74[28] )
      return 0;
    char v82 = v81->__pad_74[0];
    v81->__pad_74[0] = 0;
    (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
    IDA_LOBYTE(v83) = 0;
    *(unsigned char *)(this->q00C + 116) = v82;
    IDA_HIBYTE(v83) = aP3.abstractFlags;
    IDA_LOWORD(aP3.owningHouseIndex) = v83;
    FacingClass::Set_SyncLog((char *)(this->q00C + 904), &aP3.owningHouseIndex);
    int v84 = this->q05C;
    if ( v84 && *(int *)((char *)dword_7F296C + aP3.objectTypeFlags) == v84 )
    {
      v85 = this->q00C;
      aP3.location[1] = *(unsigned int *)&v85->__pad_74[40];
      aP3.location[2] = *(unsigned int *)&v85->__pad_74[44];
      aP3.lineTrailer = *(void **)&v85->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, int *))(v85->field_0 + 244))(v85, &aP3.location[1]);
    }
    if ( aP3.uniqueId != 8 && aP3.uniqueId != -1 && v178 )
    {
      int v86 = this->q05C;
      if ( *(int *)((char *)dword_7F2964 + aP3.objectTypeFlags) == v86 )
      {
        if ( v86 )
        {
          IDA_LOBYTE(v87) = 0;
          IDA_HIBYTE(v87) = *(unsigned char *)(*(unsigned int *)&aP3.bombVisible + 4);
          IDA_LOWORD(aP3.fallRate) = v87;
          *(unsigned int *)&aP3[12] = aP3.uniqueId + 8 * (((((unsigned int)aP3.fallRate >> 12) + 1) >> 1) & 7);
          char * v88 = (char *)(12 * *(unsigned int *)&aP3[12] + 8333888);
          char v89 = byte_7F2A40[12 * *(unsigned int *)&aP3[12]];
          if ( v89 )
          {
            if ( dword_7F2968[4 * v89] )
            {
              v90 = this->q00C;
              int * v91 = (int *)(&this->u32_184);
              int v92 = *(unsigned int *)&v90->__pad_1D4[936];
              aP3.ambientSoundController[2] = *(unsigned int *)&v90->__pad_1D4[932];
              int v93 = aP3.uniqueId & 7;
              aP3.ambientSoundController[3] = v92;
              int v94 = *(unsigned int *)&g_CellDirectionOffsets[72][8 * v93] + this->WalkLocomotion_field_0x40;
              int v95 = this->WalkLocomotion_field_0x44 + *(unsigned int *)&g_CellDirectionOffsets[72][8 * v93 + 4];
              v96 = this->q048;
              *(unsigned int *)v182 = v94;
              *(unsigned int *)&v182[8] = v96;
              *(unsigned int *)&v182[4] = v95;
              IDA_LOWORD(aP3.customSound) = v94 / 256;
              IDA_HIWORD(aP3.customSound) = v95 / 256;
              *(unsigned int *)aP3[0] = aP3.customSound;
              int v97 = v90->field_0;
              LandHeight = ObjectClass::GetLandHeight(v90);
              uniqueId = aP3.uniqueId;
              void * v98 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)aP3[0]);
              switch ( (*(int (__thiscall **)(unsigned int, void *, int, int, unsigned int, int))(v97 + 428))(
                         this->q00C,
                         v98,
                         uniqueId,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (__thiscall **)(unsigned int))(*this->q00C + 44))(this->q00C) == 1
                    && !*(unsigned char *)(*(unsigned int *)(this->q00C + 1732) + 3596) )
                  {
                    break;
                  }
                  v99 = *(IUnknown **)&aP3[12];
                  this->ptr_60 = 0;
                  this->WalkLocomotion_field_0x58 = v99;
                  *(unsigned int *)&aP3.bombVisible = v88;
                  int v100 = 4 * *v88;
                  aP3.objectTypeFlags = v100 * 4;
                  v178 = 0;
                  this->q05C = dword_7F2968[v100] - 1;
                  bool v101 = *v91 == g_OverlayTypeConfig.field_0;
                  *(unsigned int *)&aP3[8] = dword_7F2960[v100];
                  if ( !v101
                    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
                    || this->q048 != g_OverlayTypeConfig.field_8 )
                  {
                    *v91 = g_OverlayTypeConfig.field_0;
                    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                    v102 = (TechnoClass *)g_OverlayTypeConfig.field_8;
                    this->u8_63 = 0;
                    this->q048 = v102;
                  }
                  v103 = this->q00C;
                  this->u8_63 = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v103->field_0 + 396))(v103, 2);
                  v104 = this->q00C;
                  this->u8_63 = 0;
                  if ( !v104->__pad_74[28] || v104->__pad_74[13] || v104->__pad_74[25] )
                    return 0;
                  int v105 = g_OverlayTypeConfig.field_0;
                  if ( *v91 != g_OverlayTypeConfig.field_0
                    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
                    || this->q048 != g_OverlayTypeConfig.field_8 )
                  {
                    *v91 = g_OverlayTypeConfig.field_0;
                    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                    v106 = (TechnoClass *)g_OverlayTypeConfig.field_8;
                    this->u8_63 = 0;
                    this->q048 = v106;
                    v105 = g_OverlayTypeConfig.field_0;
                  }
                  int v107 = *(unsigned int *)v182;
                  int v108 = *(unsigned int *)&v182[4];
                  v101 = *(unsigned int *)v182 == v105;
                  int v109 = *(unsigned int *)&v182[8];
                  if ( !v101
                    || *(unsigned int *)&v182[4] != g_OverlayTypeConfig.field_4
                    || *(unsigned int *)&v182[8] != g_OverlayTypeConfig.field_8 )
                  {
                    v176 = (AbstractClass *)v104;
                    this->u8_63 = 1;
                    *v91 = v107;
                    this->WalkLocomotion_field_0x44 = v108;
                    this->q048 = v109;
                    unsigned int * v110 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v182);
                    if ( !CrateClass::ProcessPickup(v110, v176) || *(unsigned char *)(this->q00C + 129) )
                    {
                      if ( *(unsigned char *)(this->q00C + 144) )
                      {
                        *v91 = g_OverlayTypeConfig.field_0;
                        this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
                        this->q048 = g_OverlayTypeConfig.field_8;
                        this->u8_63 = 0;
                      }
                    }
                    else
                    {
                      WalkLocomotion::MoveTo((IUnknown *)v182, 1);
                      (*(void (__thiscall **)(unsigned int, int, int))(*this->q00C + 1348))(
                        this->q00C,
                        aP3.ambientSoundController[2],
                        aP3.ambientSoundController[3]);
                      qmemcpy(
                        (void *)(this->q00C + 1504),
                        (const void *)(this->q00C + 1508),
                        0x5Cu);
                      *(unsigned int *)(this->q00C + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax134 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v182);
                  CellClass::DamageAllObjects(eax134);
                  break;
                case 3:
                  IDA_LOWORD(aP3.spawnStatus) = *(unsigned int *)v182 / 256;
                  v111 = this->q00C;
                  IDA_HIWORD(aP3.spawnStatus) = *(unsigned int *)&v182[4] / 256;
                  *(unsigned int *)&aP3[12] = aP3.spawnStatus;
                  Cell::IsPassableAllied((int)v111, (int16_t *)&aP3[12]);
                  break;
                case 6:
                  if ( (*((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v182) + 80) & 0x100) == 0
                    || (ecx137 = this->q00C + 156,
                        aP3.attachedBomb = *(void **)ecx137,
                        aP3.ambientSoundController[0] = *(unsigned int *)(ecx137 + 4),
                        v113 = *(TechnoClass **)(ecx137 + 8),
  int v115; // ecx
                        v115 = *((char *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v182) + 283),
                        IDA_LOBYTE(aP4) = 1,
                        (int)abs32((int)v113 / g_OverlayTypeConfig.field_40 - v115) <= 2) )
                  {
                    IDA_LOBYTE(aP4) = 0;
                  }
                  unsigned int * v116 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)(&this->u32_184));
                  Cell::ApplyDamage(v116, &g_OverlayTypeConfig, 1, 1, (IUnknown *)aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc140 = *(unsigned int *)&aP3[4] <= 7;
    ++this->q05C;
    if ( cc140 )
      goto LABEL_141;
  }
  v120 = this->q00C;
  int * v122 = (int *)(&this->u32_184);
  int v123 = *(unsigned int *)&v120->__pad_74[40];
  int v124 = *(unsigned int *)&v120->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v120->__pad_74[48];
  *(unsigned int *)aP3[0] = abs32(this->WalkLocomotion_field_0x44 - v124) + abs32(this->WalkLocomotion_field_0x40 - v123);
  int v125 = Math::RoundToInt((1.0 - (double)*(int *)aP3[0] * 0.09090909090909091) * 7.0);
  ebx145 = *(unsigned int *)&aP3[4];
  v120->__pad_1D4[1250] = 1;
  v126 = this->q00C;
  *(unsigned int *)&aP3[4] = v125 + ebx145;
  v126->__pad_1D4[1251] = 0;
  v127 = this->q00C;
  int v129 = *(unsigned int *)&v127->__pad_74[40];
  int v130 = *(unsigned int *)&v127->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v127->__pad_74[48];
  *(unsigned short *)&aP3[2] = v130 / 256;
  if ( (uint16_t)(v129 / 256) == (uint16_t)(this->WalkLocomotion_field_0x40 / 256)
    && *(unsigned short *)&aP3[2] == (uint16_t)(this->WalkLocomotion_field_0x44 / 256) )
  {
    al148 = v127->__pad_74[0];
    v127->__pad_74[0] = 0;
    char v179 = al148;
    (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 436))(this->q00C, &this->u32_184);
    (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
    *(unsigned char *)(this->q00C + 116) = v179;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, unsigned int))(v127->field_0 + 292))(v127, 0);
    (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 436))(this->q00C, &this->u32_184);
    (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 460))(this->q00C, 0);
    (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 292))(this->q00C, 1);
  }
  if ( *v122 != g_OverlayTypeConfig.field_0
    || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
    || this->q048 != g_OverlayTypeConfig.field_8 )
  {
    *v122 = g_OverlayTypeConfig.field_0;
    this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
    v131 = (TechnoClass *)g_OverlayTypeConfig.field_8;
    this->u8_63 = 0;
    this->q048 = v131;
  }
  v132 = this->q00C;
  this->WalkLocomotion_field_0x58 = -1;
  this->q05C = 0;
  char v180 = 0;
  int v134 = *(unsigned int *)&v132->__pad_1D4[976];
  if ( v134 )
  {
  unsigned int *v135; // eax
    v135 = (unsigned int *)(*(int (__thiscall **)(int, void **, MouseClass *))(*(unsigned int *)v134 + 76))(
                       v134,
                       &aP3.attachedBomb,
                       v132);
    int v136 = *v135 / 256;
    int v137 = v135[1] / 256;
  unsigned short *v138; // eax
    v138 = (unsigned short *)(*(int (__thiscall **)(unsigned int, double *))(*this->q00C + 440))(
                      this->q00C,
                      &varD0);
    if ( *v138 == (unsigned short)v136 && v138[1] == (unsigned short)v137 )
    {
      rax156 = *(unsigned int *)((*(int (__stdcall **)(void **, unsigned int))(*this->q00C + 76))(
                             &aP3.attachedBomb,
                             this->q00C)
                         + 8)
             - this->u32_3C;
      if ( (int)((IDA_HIDWORD(rax156) ^ rax156) - IDA_HIDWORD(rax156)) < 2 * g_OverlayTypeConfig.field_40 )
      {
        v180 = 1;
        this->ptr_34 = g_OverlayTypeConfig.field_0;
        this->u32_38 = g_OverlayTypeConfig.field_4;
        this->u32_3C = g_OverlayTypeConfig.field_8;
        if ( *v122 != g_OverlayTypeConfig.field_0
          || this->WalkLocomotion_field_0x44 != g_OverlayTypeConfig.field_4
          || this->q048 != g_OverlayTypeConfig.field_8 )
        {
          *v122 = g_OverlayTypeConfig.field_0;
          this->WalkLocomotion_field_0x44 = g_OverlayTypeConfig.field_4;
          this->q048 = g_OverlayTypeConfig.field_8;
          this->u8_63 = 0;
        }
        this->u8_63 = 0;
      }
    }
  }
  (*(void (__thiscall **)(unsigned int, int))(*this->q00C + 396))(this->q00C, 2);
  v139 = this->q00C;
  if ( !v139->__pad_74[28] || v139->__pad_74[13] || v139->__pad_74[25] )
    return 1;
  if ( v180 )
  {
    FootClass::ClearPathIndex(v139);
    *(unsigned int *)(this->q00C + 1504) = -1;
    if ( (*(int (__thiscall **)(unsigned int))(*this->q00C + 388))(this->q00C) == 2 )
    {
      if ( (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
             this->q00C,
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 1284))(this->q00C) )
    return 1;
  if ( !*(unsigned char *)(this->q00C + 144) )
    return 0;
LABEL_141:
  cc140 = *(unsigned int *)&aP3[4] <= 0;
  this->u32_4C = *(unsigned int *)&aP3[4];
  if ( cc140 )
    return 0;
  v117 = this->q058;
  if ( (int)v117 <= -1 )
    return 0;
  unsigned char * v119 = (unsigned char *)(12 * (unsigned int)v117 + 8333888);
  eax144 = this->ptr_60 ? (char)v119[1] : (char)*v119;
  int v141 = this->q05C;
  int v142 = dword_7F2960[4 * eax144];
  int v143 = *(unsigned int *)(v142 + 12 * v141);
  int v144 = v142 + 12 * v141;
  int v145 = *(unsigned int *)(v144 + 4);
  aP3.health = v143;
  aP3.estimatedHealth = v145;
  if ( !v143 && !v145 && v141 )
    return 0;
  int * v146 = (int *)(this->q00C + 156);
  aP3.customSound_controller[0] = *v146;
  aP3.customSound_controller[1] = v146[1];
  aP3.customSound_controller[2] = v146[2];
  *(unsigned int *)aP3[0] = *(unsigned int *)(v144 + 8);
  int v147 = *v146;
  int v148 = v146[1];
  aP3.ambientSoundController[1] = v146[2];
  int * v149 = WalkLocomotion::TransformCoords((unsigned int *)this, (ObjectClass *)&aP3.lastLayer, (IUnknown *)&aP3.health, &aP3);
  int v150 = *v149;
  int v151 = v149[1] - v148;
  int v152 = this->q00C + 156;
  aP3.visibilityFlags = v150 - v147;
  *(unsigned int *)&aP3.needsRedraw = v151;
  *(unsigned int *)&aP3.hasParachute = 0;
  int v153 = *(unsigned int *)v152 + v150 - v147;
  esi178a = *(unsigned int *)(v152 + 4);
  v154 = *(TechnoClass **)(v152 + 8);
  aP3.ambientSoundController[3] = esi178a + v151;
  aP3.ambientSoundController[2] = v153;
  aP3.ambientSoundController[4] = (int)v154;
  v155 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP3.ambientSoundController[2]);
  double v157 = (double)this->u32_4C * 0.1428571428571428;
  memset(&aP3.location[1], 0, 12);
  float v177 = v157;
  eax178d = Color::RGBFromFloat(&aP3.attachedBomb, (IUnknown *)&aP3.visibilityFlags, v177);
  aP3.visibilityFlags = *eax178d;
  *(unsigned int *)&aP3.needsRedraw = eax178d[1];
  v158 = (TechnoClass *)eax178d[2];
  IDA_LODWORD(varD0) = aP3.customSound_controller[0] + aP3.visibilityFlags;
  *(unsigned int *)&aP3.hasParachute = v158;
  IDA_HIDWORD(varD0) = aP3.customSound_controller[1] + *(unsigned int *)&aP3.needsRedraw;
  v183 = (IUnknown *)&v158->__pad_0[aP3.customSound_controller[2]];
  v159 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)aP3.customSound_controller);
  aP3.fallRate = (int)v159;
  v161 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&varD0);
  int v162 = this->q00C + 156;
  *(unsigned int *)v182 = *(unsigned int *)v162;
  edx178 = *(unsigned int *)(v162 + 4);
  *(unsigned int *)&v182[4] = edx178;
  v163 = *(TechnoClass **)(v162 + 8);
  *(unsigned int *)&v182[8] = v163;
  uint64_t v165 = IDA___PAIR64__(edx178, *(unsigned int *)v182);
  if ( v161 == v155 || v161 == v159 )
  {
    v165 = *(unsigned long long *)&varD0;
    v163 = (TechnoClass *)v183;
    *(double *)v182 = varD0;
LABEL_183:
    *(unsigned int *)&v182[8] = v163;
  }
  else if ( this->u32_4C > 3 )
  {
    v163 = (TechnoClass *)aP3.ambientSoundController[4];
    *(unsigned int *)v182 = aP3.ambientSoundController[2];
    *(unsigned int *)&v182[4] = aP3.ambientSoundController[3];
    v165 = *(unsigned long long *)&aP3.ambientSoundController[2];
    goto LABEL_183;
  }
  *(unsigned long long *)&aP3.parachute = v165;
  *(unsigned int *)&aP3.isAliveFlag = v163;
  eax184 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP3.parachute);
  v166 = this->q00C;
  aP3.owningHouseIndex = (int)eax184;
  int v168 = *(unsigned int *)&v166->__pad_74[40];
  int v169 = *(unsigned int *)&v166->__pad_74[44];
  aP3.ambientSoundController[1] = *(unsigned int *)&v166->__pad_74[48];
  int v170 = v169 / 256;
  if ( (uint16_t)(*(unsigned int *)v182 / 256) == (uint16_t)(v168 / 256)
    && (uint16_t)(*(unsigned int *)&v182[4] / 256) == (unsigned short)v170 )
  {
    char v173 = v166->__pad_74[0];
    v166->__pad_74[0] = 0;
    (*(void (__thiscall **)(unsigned int, unsigned char *))(*this->q00C + 436))(this->q00C, v182);
    *(unsigned char *)(this->q00C + 116) = v173;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, unsigned int))(v166->field_0 + 292))(v166, 0);
    (*(void (__thiscall **)(unsigned int, unsigned char *))(*this->q00C + 436))(this->q00C, v182);
    fallRate = aP3.fallRate;
    v171 = (IUnknown *)aP3.owningHouseIndex;
    if ( *(char *)(aP3.owningHouseIndex + 283) != *(char *)(aP3.fallRate + 283) - 4 )
      goto LABEL_189;
    if ( (*(unsigned int *)(aP3.owningHouseIndex + 320) & 0x100) == 0 )
      goto LABEL_190;
    *(unsigned char *)(this->q00C + 140) = 1;
LABEL_189:
    if ( (v171->field_140 & 0x100) == 0 )
    {
LABEL_190:
      if ( (*(unsigned int *)(fallRate + 320) & 0x100) != 0 )
        *(unsigned char *)(this->q00C + 140) = 0;
    }
    (*(void (__thiscall **)(int, int))(*this->q00C + 292))(fallRate, 1);
    return 0;
  }
}
} // namespace gamemd

// 0x6A1C80
namespace gamemd {
int WalkLocomotion::Update(unsigned char * a2, int a3, int a4)
{
  char result; // al
  wchar_t *v16; // edi
  wchar_t **v18; // esi
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  unsigned int *Value; // edi
  int GroundHeight; // eax
  int ClosestObject; // eax
  int16_t v60; // cx
  unsigned int *v75; // ecx
  int *v78; // eax
  int v79; // edx
  int v80; // eax
  char *v81; // eax
  int v82; // ecx
  int v83; // edi
  unsigned int *v84; // eax
  unsigned int *v85; // eax
  int v86; // ecx
  int v87; // edx
  unsigned int *v88; // eax
  int v89; // ecx
  unsigned int *v90; // esi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // esi
  unsigned int *v110; // edx
  wchar_t *v111; // eax
  wchar_t *v127; // esi
  wchar_t *v128; // eax
  wchar_t *v129; // ecx
  wchar_t **v130; // edx
  int Object; // eax
  unsigned int *v140; // eax
  int *Coords; // eax
  int v142; // esi
  unsigned int *v143; // edx
  int v144; // edi
  bool v145; // cc
  double v146; // st7
  double v148; // st7
  uint8_t v149; // c0
  uint8_t v150; // c3
  int v152; // ecx
  unsigned int *v153; // ecx
  unsigned int v154; // esi
  unsigned int *NeighbourContent; // eax
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  int *v195; // esi
  int v196; // edx
  int v197; // eax
  int v199; // ecx
  int v200; // edx
  bool v201; // zf
  int v202; // eax
  int v204; // ecx
  int LandHeight; // [esp+74h] [ebp-68h]
  int v213; // [esp+80h] [ebp-5Ch]
  char v214; // [esp+93h] [ebp-49h]
  int v215; // [esp+94h] [ebp-48h] BYREF
  double v216; // [esp+98h] [ebp-44h] BYREF
  int v217; // [esp+A0h] [ebp-3Ch]
  int v218; // [esp+A4h] [ebp-38h] BYREF
  int v219; // [esp+A8h] [ebp-34h] BYREF
  unsigned int *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  unsigned int *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]
  int v5 = this->q004;
  unsigned int v6 = *(unsigned int *)(this->q00C + 1504);
  v215 = &this->u32_10;
  if ( !(*(uint8_t (__stdcall **)(int))(v5 + 16))&this->u32_10 && v6 == -1 )
  {
    this->u8_61 = 0;
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
      || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
      || this->q048 != DataGlobal_00B07800 )
    {
      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
      this->q048 = DataGlobal_00B07800;
      this->u8_63 = 0;
    }
    if ( (*(int (__thiscall **)(unsigned int))(*this->q00C + 388))(this->q00C) == 2 )
    {
      int v7 = (*(int (__thiscall **)(int, unsigned int, int))(*this->q00C + 1156))(v7, 0, 1);
  char v8; // al
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( this->ptr_34 == g_OverlayTypeConfig
    && this->u32_38 == DataGlobal_B077FC
    && this->u32_3C == DataGlobal_00B07800 )
  {
    return 0;
  }
  if ( *(unsigned int *)(this->q00C + 720) && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 468))(this->q00C)
    || (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 472))(this->q00C) )
  {
    return 0;
  }
  if ( (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 892))(this->q00C)
    || (*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 896))(this->q00C) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    int v10 = *(unsigned int *)(this->q00C + 1444);
    if ( v10 && (*(int (__thiscall **)(int))(*(unsigned int *)v10 + 44))(v10) == 1
  int v11; // ecx
      || (v11 = *(unsigned int *)(this->q00C + 1444)) != 0
      && (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 44))(v11) == 15 )
    {
  unsigned int *v12; // eax
      v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int **))(*this->q00C + 72))(
                        this->q00C,
                        &v226);
  unsigned int *v13; // eax
      v13 = Coord::Subtract(
              &v216,
              *v12 - this->ptr_34,
              v12[1] - this->u32_38,
              v12[2] - this->u32_3C);
      v220 = (unsigned int *)*v13;
      v221 = v13[1];
      v222 = v13[2];
      int v14 = (int)Coord::Length((int *)&v220) / 256;
      if ( v14 < 24 )
      {
        *(unsigned int *)(this->q00C + 4 * v14 + 1504) = -1;
        v6 = *(unsigned int *)(this->q00C + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  int v15 = this->q00C;
  v16 = g_CurrentFrame;
  int v17 = *(unsigned int *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  int v19 = *(unsigned int *)(v15 + 1608);
  if ( v17 != -1 )
  {
    if ( (int)g_CurrentFrame - v17 >= v19 )
      goto LABEL_31;
    v19 -= (int)g_CurrentFrame - v17;
  }
  if ( v19 )
    return 0;
LABEL_31:
  v20 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
  v21 = v227;
  *v18 = v16;
  unsigned int * v22 = (unsigned int *)(&this->u32_142);
  v18[1] = v21;
  v18[2] = v20;
  int v23 = this->q00C;
  IDA_LOWORD(v216) = this->ptr_34 / 256;
  IDA_WORD1(v216) = this->u32_38 / 256;
  char v24 = FootClass::MovementStep(v23, (int)v16, IDA_SLODWORD(v216), 0, 0, v213);
  unsigned int * v25 = this->q00C;
  if ( !v24 )
  {
    if ( !v25 )
    {
      *a2 = 1;
      return 0;
    }
    if ( !(*(uint8_t (__thiscall **)(unsigned int *, int))(*v25 + 716))(v25, &this->u32_142) )
    {
  int v26; // ecx
      (*(void (__thiscall **)(int, unsigned int, int))(*this->q00C + 1152))(v26, 0, 1);
      return 0;
    }
    if ( *v22 == g_OverlayTypeConfig
      && this->u32_38 == DataGlobal_B077FC
      && this->u32_3C == DataGlobal_00B07800 )
    {
      return 0;
    }
    if ( !(uint8_t)FootClass::ClearSomeVector2(this->q00C)
  unsigned int *v27; // eax
      && (v27 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int **))(*this->q00C + 72))(
                            this->q00C,
                            &v226),
  unsigned int *v28; // eax
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - this->u32_38, v27[2] - this->u32_3C),
          v220 = (unsigned int *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((unsigned int *)g_RulesClass_Instance + 1478))
      && ((*(int (__thiscall **)(unsigned int))(*this->q00C + 388))(this->q00C) == 2
       || (*(int (__thiscall **)(unsigned int))(*this->q00C + 388))(this->q00C) == 11) )
    {
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
        || this->q048 != DataGlobal_00B07800 )
      {
        this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
        this->q048 = DataGlobal_00B07800;
        this->u8_63 = 0;
      }
      unsigned int * v29 = this->q00C;
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
               this->q00C,
               0,
               1) )
        {
          return 1;
        }
      }
      else
      {
        (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v29 + 1152))(v29, 0, 1);
      }
      if ( !*(unsigned char *)(this->q00C + 144) )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((unsigned short *)(this->q00C + 904), &a3);
  unsigned int *v31; // esi
      v31 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int **))(*this->q00C + 72))(
                        this->q00C,
                        &v226);
      int v32 = v31[1];
      unsigned int v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      IDA_LOWORD(a2) = IDA_LOWORD(Direction_X_Offsets[v33]) + *v31 / 256;
      IDA_HIWORD(a2) = v32 / 256 + IDA_HIWORD(Direction_X_Offsets[v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (int16_t *)&a4, 1) )
      {
        unsigned int * v34 = ProgressTimer::GetValue((unsigned short *)(this->q00C + 904), &a2);
        unsigned char * v35 = this->q00C;
        int v36 = *(unsigned int *)v35;
        unsigned int v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        void * v38 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&a4);
  int v39; // eax
        v39 = (*(int (__thiscall **)(unsigned int, void *, unsigned int, int, unsigned int, int))(v36 + 428))(
                this->q00C,
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          int v40 = this->q00C;
          a2 = (unsigned char *)a4;
          Cell::IsPassableAllied(v40, (int16_t *)&a2);
        }
        else if ( v39 == 6 )
        {
          unsigned int * v41 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&a4);
          unsigned int * v42 = (unsigned int *)(this->q00C + 156);
          v226 = (unsigned int *)*v42;
          int v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          IDA_LODWORD(v216) = ((int16_t)a4 << 8) + 128;
          IDA_HIDWORD(v216) = (IDA_SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * DataGlobal_B07838, 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(*(unsigned int **)(this->q00C + 540), ClosestObject)
              && !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C)
                           + 3220) )
            {
  unsigned int *v46; // eax
              v46 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int **))(*this->q00C + 72))(
                                this->q00C,
                                &v226);
  unsigned int *v47; // eax
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - this->u32_38,
                      v46[2] - this->u32_3C);
              v220 = (unsigned int *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((unsigned int *)g_RulesClass_Instance + 1478)
                && !Team::AllMembersValid(this->q00C) )
              {
                unsigned int * v48 = (unsigned int *)(this->q00C + 156);
                v226 = (unsigned int *)*v48;
                v227 = (wchar_t *)v48[1];
                int64_t v49 = this->u32_3C - v48[2];
                if ( (int)((IDA_HIDWORD(v49) ^ v49) - IDA_HIDWORD(v49)) < 2 * DataGlobal_B07838 )
                {
                  v220 = (unsigned int *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) != 10 )
                  {
                    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
                      || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
                      || this->q048 != DataGlobal_00B07800 )
                    {
                      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
                      this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
                      this->q048 = DataGlobal_00B07800;
                      this->u8_63 = 0;
                    }
                    unsigned int * v50 = this->q00C;
                    if ( !v50[358] )
                    {
                      (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v50 + 1152))(v50, 0, 1);
                      return 0;
                    }
                    FootClass::ClearPathIndex(v50);
                    return (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
                             this->q00C,
                             0,
                             1) != 0;
                  }
                }
              }
              if ( (v41[80] & 0x100) == 0
  unsigned int *v51; // ecx
                || (v51 = this->q00C,
                    IDA_LOBYTE(a2) = 1,
                    v51 += 39,
                    v226 = (unsigned int *)*v51,
                    v227 = (wchar_t *)v51[1],
  int64_t v52; // rax
                    v52 = v51[2] / DataGlobal_B07838 - *((char *)v41 + 283),
                    (int)((IDA_HIDWORD(v52) ^ v52) - IDA_HIDWORD(v52)) <= 2) )
              {
                IDA_LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&g_OverlayTypeConfig, 1, 1, (char)a2);
            }
          }
        }
      }
      unsigned int * v53 = this->q00C;
      int v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
          || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
          || this->q048 != DataGlobal_00B07800 )
        {
          this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
          this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
          this->q048 = DataGlobal_00B07800;
          this->u8_63 = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
                 this->q00C,
                 0,
                 1) )
          {
            return 1;
          }
        }
        else
        {
          (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v53 + 1152))(v53, 0, 1);
        }
        int v55 = this->q00C;
        if ( !*(unsigned char *)(v55 + 144) )
          return 0;
        if ( *(unsigned char *)(v55 + 1674) )
          PlayVocClass(*((unsigned int *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        *(unsigned char *)(this->q00C + 1674) = 0;
      }
      else
      {
        v53[403] = v54 - 1;
      }
    }
    if ( !(*(uint8_t (__stdcall **)(int))(this->u32_20)(v215) )
    {
      unsigned int * v56 = this->q00C;
      if ( v56[173] )
      {
        if ( !(*(uint8_t (__thiscall **)(unsigned int *, unsigned int))(*v56 + 940))(v56, v56[173]) )
        {
          *(unsigned char *)(this->q00C + 1672) = 1;
          if ( *(unsigned int *)(this->q00C + 1492) )
            TeamClass::WakeUpAllMembers();
          (*(void (__thiscall **)(unsigned int, unsigned int))(*this->q00C + 968))(this->q00C, 0);
        }
      }
    }
    if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
      || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
      || this->q048 != DataGlobal_00B07800 )
    {
      this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
      this->q048 = DataGlobal_00B07800;
      this->u8_63 = 0;
    }
    this->WalkLocomotion_field_0x58 = -1;
    this->u8_61 = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  unsigned int * v57 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, unsigned int **))(*v25 + 72))(v25, &v226);
  int v58 = v57[1];
  int v59 = *(unsigned int *)(this->q00C + 1504) & 7;
  v60 = IDA_HIWORD(Direction_X_Offsets[v59]);
  IDA_LOWORD(v216) = *v57 / 256 + IDA_LOWORD(Direction_X_Offsets[v59]);
  IDA_WORD1(v216) = v58 / 256 + v60;
  v218 = IDA_LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (int16_t *)&v218, 1) )
  {
    unsigned char * v61 = this->q00C;
    int v62 = *(unsigned int *)v61;
    int v207 = ObjectClass::GetLandHeight(v61);
    int v205 = *(unsigned int *)(this->q00C + 1504);
    void * v63 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v218);
  int v64; // eax
    v64 = (*(int (__thiscall **)(unsigned int, void *, int, int, unsigned int, int))(v62 + 428))(
            this->q00C,
            v63,
            v205,
            v207,
            0,
            1);
    if ( v64 == 3 )
    {
      int v65 = this->q00C;
      v219 = v218;
      Cell::IsPassableAllied(v65, (int16_t *)&v219);
    }
    else if ( v64 == 6 )
    {
      unsigned int * v66 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v218);
      unsigned int * v67 = (unsigned int *)(this->q00C + 156);
      IDA_LODWORD(v216) = ((int16_t)v218 << 8) + 128;
      IDA_HIDWORD(v216) = (IDA_SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (unsigned int *)*v67;
      v227 = (wchar_t *)v67[1];
      int v68 = v67[2];
      v220 = 0;
      v221 = 0;
      int v69 = Cell::GetGroundHeight(&v216);
      int v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * DataGlobal_B07838, 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(*(unsigned int **)(this->q00C + 540), v70)
          && !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220) )
        {
  unsigned int *v71; // eax
          v71 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int **))(*this->q00C + 72))(
                            this->q00C,
                            &v226);
          unsigned int * v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - this->u32_38, v71[2] - this->u32_3C);
          v220 = (unsigned int *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((unsigned int *)g_RulesClass_Instance + 1478)
            && !Team::AllMembersValid(this->q00C) )
          {
            unsigned int * v73 = (unsigned int *)(this->q00C + 156);
            v226 = (unsigned int *)*v73;
            v227 = (wchar_t *)v73[1];
            int64_t v74 = this->u32_3C - v73[2];
            if ( (int)((IDA_HIDWORD(v74) ^ v74) - IDA_HIDWORD(v74)) < 2 * DataGlobal_B07838 )
            {
              v220 = (unsigned int *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) != 10 )
              {
                if ( this->WalkLocomotion_field_0x40 == g_OverlayTypeConfig
                  && this->WalkLocomotion_field_0x44 == DataGlobal_B077FC
                  && this->q048 == DataGlobal_00B07800 )
                {
                  goto LABEL_118;
                }
                this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
                this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
                this->q048 = DataGlobal_00B07800;
                goto LABEL_117;
              }
            }
          }
          if ( (v66[80] & 0x100) == 0
  unsigned int *v76; // ecx
            || (v76 = this->q00C,
                IDA_LOBYTE(v216) = 1,
                v76 += 39,
                v226 = (unsigned int *)*v76,
                v227 = (wchar_t *)v76[1],
  int64_t v77; // rax
                v77 = v76[2] / DataGlobal_B07838 - *((char *)v66 + 283),
                (int)((IDA_HIDWORD(v77) ^ v77) - IDA_HIDWORD(v77)) <= 2) )
          {
            IDA_LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&g_OverlayTypeConfig, 1, 1, IDA_SLOBYTE(v216));
        }
      }
    }
  }
  *(unsigned int *)(this->q00C + 1612) = 10;
  v6 = *(unsigned int *)(this->q00C + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          *(unsigned int *)(this->q00C + 156) + DataGlobal_89F6D8[2 * (v6 & 7)],
          *(unsigned int *)(this->q00C + 160) + DataGlobal_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(this->q00C + 164));
  v223 = *v78;
  v224 = v78[1];
  v79 = v78[2];
  v80 = this->q00C + 156;
  v225 = v79;
  v220 = *(unsigned int **)v80;
  v221 = *(unsigned int *)(v80 + 4);
  v222 = *(unsigned int *)(v80 + 8);
  v81 = (char *)Coord::To_Cell(&DataGlobal_87F7E8, &v220);
  v82 = this->q00C;
  v83 = v81[283] + (*(unsigned char *)(v82 + 140) != 0 ? 4 : 0);
  v84 = Coord::Subtract(
          &v226,
          *(unsigned int *)(v82 + 156) + DataGlobal_89F6D8[2 * (v6 & 7)],
          *(unsigned int *)(v82 + 160) + DataGlobal_89F6DC[2 * (v6 & 7)],
          *(unsigned int *)(v82 + 164));
  v220 = (unsigned int *)*v84;
  v221 = v84[1];
  v222 = v84[2];
  v85 = Coord::To_Cell(&DataGlobal_87F7E8, &v220);
  v86 = this->q00C;
  if ( *(unsigned char *)(v86 + 140) != ((v85[80] >> 8) & 1) )
    *(unsigned char *)(v86 + 1675) = 1;
  if ( !(*(uint8_t (__thiscall **)(unsigned int))(*this->q00C + 668))(this->q00C) )
    return 1;
  IDA_LOWORD(v216) = v223 / 256;
  v87 = this->q00C;
  IDA_WORD1(v216) = v224 / 256;
  v219 = IDA_LODWORD(v216);
  if ( !Cell::IsPassableAllied(v87, (int16_t *)&v219) )
    return 1;
  if ( abs16(*(unsigned short *)ProgressTimer::GetValue((unsigned short *)(this->q00C + 904), &v220) - ((unsigned short)v6 << 13)) )
  {
    IDA_LOWORD(a4) = (unsigned short)v6 << 13;
    (*(void (__stdcall **)(int, int))(this->q05C)(v215, a4);
    return 1;
  }
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  v215 = IDA_LODWORD(v216);
  v88 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
  v89 = this->q00C;
  v90 = v88;
  v220 = v88;
  v214 = 0;
  (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)v89 + 292))(v89, 0);
  v91 = (*(int (__thiscall **)(unsigned int, unsigned int *, unsigned int, int, unsigned int, int))(*this->q00C + 428))(
          this->q00C,
          v90,
          v6,
          v83,
          0,
          1);
  v92 = this->q00C;
  IDA_LODWORD(v216) = v91;
  (*(void (__thiscall **)(int, int))(*(unsigned int *)v92 + 292))(v92, 1);
  if ( IDA_SLODWORD(v216) < 7
    && *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220)
    || (IDA_LODWORD(v216) == 5 || IDA_LODWORD(v216) == 4)
    && *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3368)
    && !v90[17] )
  {
    IDA_LODWORD(v216) = 0;
  }
  v93 = v90[17];
  v94 = IDA_LODWORD(v216);
  if ( v93 != -1 && !IDA_LODWORD(v216) && *(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array + v93) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v93 != -1 )
  {
    if ( !IDA_LODWORD(v216) )
    {
      if ( !*(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array + v93) + 680)
        || *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( IDA_LODWORD(v216) )
  {
    v94 = IDA_LODWORD(v216);
LABEL_153:
    if ( v94 == 3 )
    {
      int v96 = this->q00C;
      a4 = v215;
      Cell::IsPassableAllied(v96, (int16_t *)&a4);
      goto LABEL_155;
    }
    if ( v94 == 6 )
    {
      if ( !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220) )
      {
        unsigned int * v109 = this->q00C;
        if ( (unsigned char)a3 )
        {
          v109[376] = -1;
          v110 = (unsigned int *)(this->q00C + 1600);
          *v110 = g_CurrentFrame;
          v111 = v227;
          goto LABEL_327;
        }
        unsigned int * v112 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, unsigned int **))(*v109 + 72))(v109, &v226);
  unsigned int *v113; // eax
        v113 = Coord::Subtract(
                 &v229,
                 *v112 - this->ptr_34,
                 v112[1] - this->u32_38,
                 v112[2] - this->u32_3C);
        v220 = (unsigned int *)*v113;
        int v114 = v113[1];
        int v115 = v113[2];
        v221 = v114;
        v222 = v115;
  double v116; // st7
        v116 = Math::Sqrt((double)v115 * (double)v115 + (double)v114 * (double)v114 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v116) >= *((unsigned int *)g_RulesClass_Instance + 1478)
  unsigned int *v117; // ecx
          || (v117 = (unsigned int *)(this->q00C + 156),
              v226 = (unsigned int *)*v117,
              v227 = (wchar_t *)v117[1],
  int64_t v118; // rax
              v118 = this->u32_3C - v117[2],
              (int)((IDA_HIDWORD(v118) ^ v118) - IDA_HIDWORD(v118)) >= 2 * DataGlobal_B07838)
          || (v220 = (unsigned int *)*v117,
              v221 = v117[1],
              v222 = v117[2],
              *((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) == 10) )
        {
          if ( (*((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 80) & 0x100) == 0
  unsigned int *v120; // edx
            || (v120 = (unsigned int *)(this->q00C + 156),
                v226 = (unsigned int *)*v120,
                v227 = (wchar_t *)v120[1],
  int v121; // esi
                v121 = v120[2],
  int v122; // ecx
                v122 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 283),
                IDA_LOBYTE(a4) = 1,
                (int)abs32(v121 / DataGlobal_B07838 - v122) <= 2) )
          {
            IDA_LOBYTE(a4) = 0;
          }
          char v210 = a4;
          unsigned int * v123 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
          Cell::ApplyDamage(v123, (int)&g_OverlayTypeConfig, 1, 1, v210);
        }
        else
        {
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
            || this->q048 != DataGlobal_00B07800 )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
            this->q048 = DataGlobal_00B07800;
            this->u8_63 = 0;
          }
          unsigned int * v119 = this->q00C;
          if ( v119[358] )
          {
            FootClass::ClearPathIndex(v119);
            if ( (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
                   this->q00C,
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v119 + 1152))(v119, 0, 1);
          }
        }
      }
LABEL_155:
      unsigned int * v97 = (unsigned int *)(&this->u32_184);
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
        || this->q048 != DataGlobal_00B07800 )
      {
        *v97 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
        int v98 = DataGlobal_00B07800;
        this->u8_63 = 0;
        this->q048 = v98;
      }
      if ( IDA_LODWORD(v216) == 2 )
      {
        int v99 = this->q00C;
        if ( !*(unsigned char *)(v99 + 1719) )
        {
          *(unsigned char *)(v99 + 1719) = 1;
          unsigned int * v100 = (unsigned int *)(this->q00C + 1640);
          int v101 = *((unsigned int *)g_RulesClass_Instance + 1498);
          *v100 = g_CurrentFrame;
          v100[1] = v230;
          v100[2] = v101;
        }
        int v102 = this->q00C;
        int v103 = (int)g_CurrentFrame;
        int v104 = *(unsigned int *)(v102 + 1600);
        int v105 = *(unsigned int *)(v102 + 1608);
        if ( v104 != -1 )
        {
          if ( (int)g_CurrentFrame - v104 >= v105 )
            goto LABEL_166;
          v105 -= (int)g_CurrentFrame - v104;
        }
        if ( !v105 )
        {
  char v108; // bl
LABEL_166:
          if ( *(unsigned char *)(v102 + 1719) )
          {
            int v106 = *(unsigned int *)(v102 + 1640);
            int v107 = *(unsigned int *)(v102 + 1648);
            if ( v106 != -1 )
            {
              v103 = (int)g_CurrentFrame - v106;
              if ( (int)g_CurrentFrame - v106 >= v107 )
              {
LABEL_171:
                v108 = 1;
LABEL_199:
                IDA_LOWORD(a4) = this->ptr_34 / 256;
                IDA_HIWORD(a4) = this->u32_38 / 256;
                char v125 = FootClass::MovementStep(v102, v103, a4, 0, (v108 != 0) + 1, v213);
                int v126 = this->q00C;
                if ( !v126 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v125 || (*(uint8_t (__thiscall **)(int, int))(*(unsigned int *)v126 + 716))(v126, &this->u32_142) )
                {
                  v127 = g_CurrentFrame;
                  v128 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
                  v129 = v230;
                  v130 = (wchar_t **)(this->q00C + 1600);
                  *v130 = v127;
                  v130[1] = v129;
                  v130[2] = v128;
                  return 1;
                }
                v75 = this->q00C;
LABEL_204:
                (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v107 -= v103;
            }
            if ( !v107 )
              goto LABEL_171;
          }
          v108 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( IDA_LODWORD(v216) != 5 && IDA_LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(unsigned char *)(this->q00C + 1674) )
          PlayVocClass(*((unsigned int *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(unsigned char)a3 )
      {
        v220 = 0;
        v221 = 0;
        unsigned int * v131 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
        if ( Object::FindObjectCell(v131, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          unsigned int * v132 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
          Object = Object::FindObjectCell(v132, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(*(unsigned int **)(this->q00C + 540), Object) )
          {
            int * v134 = this->q00C;
            v220 = 0;
            v221 = 0;
            int v135 = *v134;
            unsigned int * v136 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
            int v137 = Object::FindObjectCell(v136, &v220, 0);
            (*(void (__thiscall **)(unsigned int, int, int, unsigned int))(v135 + 500))(this->q00C, 1, v137, 0);
          }
        }
        else if ( *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 17) != -1
               && *(unsigned char *)(*((unsigned int *)g_BuildingTypeClass_Array
                             + *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 17))
                           + 680) )
        {
          int v138 = *this->q00C;
          void * v139 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
          (*(void (__thiscall **)(unsigned int, int, void *, unsigned int))(v138 + 500))(this->q00C, 1, v139, 0);
        }
LABEL_219:
        if ( IDA_LODWORD(v216) != 7 )
        {
          *(unsigned char *)(this->q00C + 1674) = 0;
          this->WalkLocomotion_field_0x58 = -1;
          return 1;
        }
        if ( (unsigned char)a3 )
        {
          *(unsigned int *)(this->q00C + 1504) = -1;
          v110 = (unsigned int *)(this->q00C + 1600);
          *v110 = g_CurrentFrame;
          v111 = v230;
          goto LABEL_327;
        }
        if ( *v97 != g_OverlayTypeConfig
          || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
          || this->q048 != DataGlobal_00B07800 )
        {
          *v97 = g_OverlayTypeConfig;
          this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
          this->q048 = DataGlobal_00B07800;
          goto LABEL_117;
        }
LABEL_118:
        v75 = this->q00C;
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_333;
      }
      *(unsigned int *)(this->q00C + 1504) = -1;
      v110 = (unsigned int *)(this->q00C + 1600);
      *v110 = g_CurrentFrame;
      v111 = v230;
LABEL_327:
      v110[1] = v111;
      v110[2] = 0;
      return WalkLocomotion::Update(a2, 0, 0);
    }
    if ( v94 != 1 )
      goto LABEL_155;
    unsigned int * v124 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
    CellClass::DamageAllObjects(v124);
    if ( (unsigned char)a3 )
    {
      unsigned char * v208 = a2;
      *(unsigned int *)(this->q00C + 1504) = -1;
      return WalkLocomotion::Update(v208, 0, 0);
    }
    if ( this->WalkLocomotion_field_0x40 == g_OverlayTypeConfig
      && this->WalkLocomotion_field_0x44 == DataGlobal_B077FC
      && this->q048 == DataGlobal_00B07800 )
    {
      goto LABEL_118;
    }
    this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
    this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
    this->q048 = DataGlobal_00B07800;
LABEL_117:
    this->u8_63 = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v83 - *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 283)) >= 2 )
  {
    v219 = v83;
    v95 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 283);
    v95 = *((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 59);
  }
  v216 = DataGlobal_89EA40[9 * v95
                        + *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C)
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v140 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
  Coords = CellClass::GetCoords(v140, &v229);
  v142 = Cell::GetGroundHeight(Coords);
  v143 = (unsigned int *)(this->q00C + 156);
  v226 = (unsigned int *)*v143;
  v227 = (wchar_t *)v143[1];
  v228 = v143[2];
  v144 = Cell::GetGroundHeight(&v226);
  v145 = v142 < v144;
  if ( v142 > v144 )
  {
    if ( (*(int (__thiscall **)(unsigned int))(*this->q00C + 44))(this->q00C) == 1 )
    {
      if ( *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 1660) == 1 )
        v146 = v216 * *((double *)g_RulesClass_Instance + 237);
      else
        v146 = v216 * *((double *)g_RulesClass_Instance + 239);
LABEL_241:
      v216 = v146;
      goto LABEL_242;
    }
    v145 = v142 < v144;
  }
  if ( v145 && (*(int (__thiscall **)(unsigned int))(*this->q00C + 44))(this->q00C) == 1 )
  {
    if ( *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 1660) == 1 )
      v146 = v216 * *((double *)g_RulesClass_Instance + 238);
    else
      v146 = v216 * *((double *)g_RulesClass_Instance + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(this->q00C);
  v148 = v216;
  if ( v149 | v150 )
  {
    v148 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( this->q058 >= 64 )
  {
    double * v151 = this->q00C;
    if ( v148 != v151[175] )
      (*(void (__thiscall **)(double *, unsigned int, unsigned int))(*(unsigned int *)v151 + 1348))(v151, IDA_LODWORD(v216), IDA_HIDWORD(v216));
  }
  else
  {
    this->q140 = v148;
  }
  v152 = this->q00C;
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  (*(void (__thiscall **)(int, double *, int))(*(unsigned int *)v152 + 1332))(v152, &v216, 1);
  v153 = this->q00C;
  v154 = v153[377];
  if ( v154 == -1 )
  {
    unsigned int * v155 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, int *))(*v153 + 72))(v153, &v229);
    int v156 = this->u32_38;
    int v157 = *v155 - this->ptr_34;
    int v158 = v155[1];
    int v159 = v155[2];
    IDA_LODWORD(v216) = v157;
    int v160 = this->u32_3C;
    IDA_HIDWORD(v216) = v158 - v156;
    v217 = v159 - v160;
  double v161; // st7
    v161 = Math::Sqrt(
             (double)(v159 - v160) * (double)(v159 - v160)
           + (double)(v158 - v156) * (double)(v158 - v156)
           + (double)IDA_SLODWORD(v216) * (double)IDA_SLODWORD(v216));
    if ( (int)Math::RoundToInt(v161) <= 512 )
    {
LABEL_262:
      v154 = v6;
      goto LABEL_263;
    }
    char v162 = *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220);
    int v163 = this->q00C;
    IDA_LOWORD(v216) = this->ptr_34 / 256;
    IDA_WORD1(v216) = this->u32_38 / 256;
    result = FootClass::MovementStep(v163, v156, IDA_SLODWORD(v216), v162 != 0, 0, v213);
    if ( !result )
    {
      int v164 = this->q00C;
      if ( !v164 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(uint8_t (__thiscall **)(int, int))(*(unsigned int *)v164 + 716))(v164, &this->u32_142) )
        (*(void (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1152))(this->q00C, 0, 1);
    }
    v154 = *(unsigned int *)(this->q00C + 1508);
  }
  if ( v154 == 8 )
    v154 = v6;
  if ( v154 == -1 || (unsigned char)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v154 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v154)) != 0
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((unsigned int *)g_BuildingTypeClass_Array + v166), *(unsigned char *)(v167 + 557))
     || *(unsigned char *)(v167 + 680)
     && *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 1460) == 12)
    || v214 )
  {
    v154 = v6;
    this->u8_64 = 1;
  }
  else
  {
    this->u8_64 = 0;
  }
  v168 = v154 + 8 * v6;
  this->ptr_60 = 0;
  this->WalkLocomotion_field_0x58 = v168;
  if ( !byte_7F2A40[12 * v168] )
    this->WalkLocomotion_field_0x58 = 9 * v6;
  if ( (dword_7F2A48[3 * this->WalkLocomotion_field_0x58] & 8) != 0 )
  {
  int v171; // esi
    int v211 = this->q00C;
    unsigned int * v169 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
  int v170; // eax
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = this->q00C, *(unsigned char *)(v170 + 129)) )
    {
      int * v172 = this->q00C;
      if ( !*((unsigned char *)v172 + 144) )
        return 0;
      int v173 = v154 & 7;
      int v174 = v224 + DataGlobal_89F6DC[2 * v173];
      v223 += DataGlobal_89F6D8[2 * v173];
      v224 = v174;
      IDA_LOWORD(a4) = v223 / 256;
      IDA_HIWORD(a4) = v174 / 256;
      int v209 = v219;
      v215 = a4;
      int v175 = *v172;
      void * v176 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
      v171 = (*(int (__thiscall **)(unsigned int, void *, unsigned int, int, unsigned int, int))(v175 + 428))(
               this->q00C,
               v176,
               v154,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*this->q00C + 132))(this->q00C) + 3368)
        && !*((unsigned int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215) + 17) )
      {
        v171 = 0;
      }
    }
    else
    {
      v171 = 7;
      if ( !*(unsigned char *)(v170 + 144) )
        return 0;
    }
    v75 = this->q00C;
    if ( !*((unsigned char *)v75 + 144) )
      return 0;
    if ( v171 )
    {
      int v177 = a3;
      switch ( v171 )
      {
        case 3:
          a4 = v215;
          Cell::IsPassableAllied((int)v75, (int16_t *)&a4);
          goto LABEL_291;
        case 2:
          return WalkLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_291;
          unsigned int * v178 = this->q00C;
          if ( (unsigned char)v177 )
          {
            v178[376] = -1;
            v110 = (unsigned int *)(this->q00C + 1600);
            *v110 = g_CurrentFrame;
            v111 = v230;
            goto LABEL_327;
          }
          unsigned int * v179 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, int *))(*v178 + 72))(v178, &v229);
          int v180 = this->u32_38;
          unsigned int * v181 = (unsigned int *)(*v179 - this->ptr_34);
          int v182 = v179[1];
          int v183 = v179[2];
          v220 = v181;
          int v184 = v183 - this->u32_3C;
          v221 = v182 - v180;
          v222 = v184;
  double v185; // st7
          v185 = Math::Sqrt(
                   (double)(int)v181 * (double)(int)v181
                 + (double)v184 * (double)v184
                 + (double)(v182 - v180) * (double)(v182 - v180));
          if ( (int)Math::RoundToInt(v185) >= *((unsigned int *)g_RulesClass_Instance + 1478)
  unsigned int *v186; // ecx
            || (v186 = (unsigned int *)(this->q00C + 156),
                v226 = (unsigned int *)*v186,
                v227 = (wchar_t *)v186[1],
  int64_t v187; // rax
                v187 = this->u32_3C - v186[2],
                (int)((IDA_HIDWORD(v187) ^ v187) - IDA_HIDWORD(v187)) >= 2 * DataGlobal_B07838)
            || (v226 = (unsigned int *)*v186,
                v227 = (wchar_t *)v186[1],
                v228 = v186[2],
                *((unsigned int *)Coord::To_Cell(&DataGlobal_87F7E8, &v226) + 59) == 10) )
          {
            unsigned int * v189 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
            if ( (v189[80] & 0x100) == 0
  unsigned int *v190; // edx
              || (v190 = this->q00C,
                  IDA_LOBYTE(a4) = 1,
                  v190 += 39,
  int v191; // edi
                  v191 = *((char *)v189 + 283),
                  v226 = (unsigned int *)*v190,
                  v227 = (wchar_t *)v190[1],
  int64_t v192; // rax
                  v192 = v190[2] / DataGlobal_B07838 - v191,
                  (int)((IDA_HIDWORD(v192) ^ v192) - IDA_HIDWORD(v192)) <= 2) )
            {
              IDA_LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&g_OverlayTypeConfig, 1, 1, a4);
LABEL_291:
            *(unsigned int *)(this->q00C + 1504) = -1;
            this->WalkLocomotion_field_0x58 = -1;
            v223 = g_OverlayTypeConfig;
            v224 = DataGlobal_B077FC;
            v225 = DataGlobal_00B07800;
            if ( v171 == 5 || v171 == 4 )
              return WalkLocomotion::Update(a2, v177, 1);
            goto LABEL_336;
          }
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
            || this->q048 != DataGlobal_00B07800 )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
            this->q048 = DataGlobal_00B07800;
            this->u8_63 = 0;
          }
          unsigned int * v188 = this->q00C;
          if ( !v188[358] )
          {
            (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_291;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
                  this->q00C,
                  0,
                  1) )
            goto LABEL_291;
          return 1;
        case 1:
          unsigned int * v193 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (int16_t *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (unsigned char)a3 )
          {
            unsigned char * v194 = a2;
            *(unsigned int *)(this->q00C + 1504) = -1;
            return WalkLocomotion::Update(v194, 0, 0);
          }
          if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
            || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
            || this->q048 != DataGlobal_00B07800 )
          {
            this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
            this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
            this->q048 = DataGlobal_00B07800;
            this->u8_63 = 0;
          }
          v75 = this->q00C;
          if ( v75[358] )
            goto LABEL_333;
LABEL_119:
          (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_291;
      if ( (unsigned char)a3 )
      {
        v75[376] = -1;
        v110 = (unsigned int *)(this->q00C + 1600);
        *v110 = g_CurrentFrame;
        v111 = v230;
        goto LABEL_327;
      }
      if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
        || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
        || this->q048 != DataGlobal_00B07800 )
      {
        this->WalkLocomotion_field_0x40 = g_OverlayTypeConfig;
        this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
        this->q048 = DataGlobal_00B07800;
        this->u8_63 = 0;
      }
      if ( v75[358] )
      {
LABEL_333:
        FootClass::ClearPathIndex(v75);
        return (*(int (__thiscall **)(unsigned int, unsigned int, int))(*this->q00C + 1156))(
                 this->q00C,
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(unsigned int *)(this->q00C + 1592) = -1;
    *(unsigned char *)(this->q00C + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(this->q00C + 1504), (const void *)(this->q00C + 1508), 0x5Cu);
  }
LABEL_336:
  v195 = (int *)(&this->u32_184);
  *(unsigned int *)(this->q00C + 1596) = -1;
  IDA_LOWORD(a4) = v223 / 256;
  v196 = this->q00C;
  IDA_HIWORD(a4) = v224 / 256;
  *(unsigned int *)(v196 + 1368) = a4;
  *(unsigned char *)(this->q00C + 1674) = 0;
  this->q05C = 0;
  v197 = g_OverlayTypeConfig;
  if ( this->WalkLocomotion_field_0x40 != g_OverlayTypeConfig
    || this->WalkLocomotion_field_0x44 != DataGlobal_B077FC
    || this->q048 != DataGlobal_00B07800 )
  {
    *v195 = g_OverlayTypeConfig;
    this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
    int v198 = DataGlobal_00B07800;
    this->u8_63 = 0;
    this->q048 = v198;
    v197 = g_OverlayTypeConfig;
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != DataGlobal_B077FC || v225 != DataGlobal_00B07800 )
  {
    this->u8_63 = 1;
    *v195 = v199;
    this->WalkLocomotion_field_0x44 = v202;
    this->q048 = v200;
    int v212 = this->q00C;
    unsigned int * v203 = Coord::To_Cell(&DataGlobal_87F7E8, &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !*(unsigned char *)(this->q00C + 129) )
    {
      WalkLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( *(unsigned char *)(this->q00C + 144) )
    {
      *v195 = g_OverlayTypeConfig;
      this->WalkLocomotion_field_0x44 = DataGlobal_B077FC;
      this->q048 = DataGlobal_00B07800;
      this->u8_63 = 0;
    }
  }
  v204 = this->q00C;
  this->WalkLocomotion_field_0x58 = -1;
  *(unsigned int *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(unsigned int, unsigned int, unsigned int))(*this->q00C + 1348))(this->q00C, 0, 0);
  return 0;
}

} // namespace gamemd

// 0x6A3DB0
namespace gamemd {
unsigned int * WalkLocomotion::TransformCoords(ObjectClass * aP1, IUnknown * aP2, ObjectClass * v4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *WalkLocomotion_field_0x40; // edx
  char *WalkLocomotion_field_0x44; // ecx

  v4 = *v4; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * (int)this->WalkLocomotion_field_0x58]; /*0x6a3dc1*/
  v6 = *aP2; /*0x6a3dcf*/
  v7 = aP2[1]; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = aP2[1]; /*0x6a3dd8*/
    v7 = *aP2; /*0x6a3dda*/
    v4 = (uint8_t)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (uint8_t)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (uint8_t)(0x80 - v4); /*0x6a3e0d*/
  }
  *v4 = v4; /*0x6a3e0f*/
  WalkLocomotion_field_0x40 = (char *)this->WalkLocomotion_field_0x40; /*0x6a3e12*/
  WalkLocomotion_field_0x44 = (char *)this->WalkLocomotion_field_0x44; /*0x6a3e15*/
  *aP1 = &WalkLocomotion_field_0x40[v6]; /*0x6a3e22*/
  aP1[1] = &WalkLocomotion_field_0x44[v7]; /*0x6a3e25*/
  return aP1; /*0x6a3e20*/
}