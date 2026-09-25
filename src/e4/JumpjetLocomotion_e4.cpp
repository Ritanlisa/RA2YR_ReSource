// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BufferIOFileClass_e4.hpp"

// 0x4B0AD0
namespace gamemd {
AbstractClass * * JumpjetLocomotion::MoveTo(IUnknown * aP1, int aP3)
{
  _DWORD *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  _DWORD v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = aP1; /*0x4b0ad0*/
  if ( *aP1 != g_DDraw_ClipRect || aP1[1] != qword_8A0794 || (v5 = aP1[2], v5 != MEMORY[0x8A0798]) ) /*0x4b0afe*/
  {
    IDA_LOBYTE(v5) = this->ptr_60; /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = this->q058; /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (_DWORD *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( this->q05C < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = JumpjetLocomotion::TransformCoords(&v19, v18, &aP3); /*0x4b0b80*/
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 464))(this->q00C); /*0x4b0b93*/
                v14 = this->q00C; /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                IDA_LOBYTE(v5) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 244))( /*0x4b0bbf*/
                               this->q00C,
                               aP1);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 464))(this->q00C); /*0x4b0bde*/
                v16 = this->q00C; /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = aP1; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        IDA_LOBYTE(v5) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 240))( /*0x4b0c2e*/
                       this->q00C,
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 244))( /*0x4b0c0e*/
                     this->q00C,
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
}
}
// 0x4B0F20
namespace gamemd {
int JumpjetLocomotion::ProcessCollision(char a2)
{
  MouseClass *v13; // ecx
  MouseClass *v21; // ecx
  MouseClass *v27; // ecx
  TechnoClass *v32; // eax
  MouseClass *v36; // eax
  ObjectClass *Coords; // eax
  int GroundHeight; // esi
  __int16 v49; // cx
  BuildingTypeClass *v51; // ecx
  MouseClass *v52; // ecx
  IUnknown *v54; // edx
  IUnknown *v56; // ecx
  MouseClass *v64; // ecx
  TechnoClass *v67; // eax
  IUnknown *v69; // esi
  IUnknown *v70; // ebx
  MouseClass *v73; // edi
  TechnoClass *v74; // esi
  TechnoClass *v75; // eax
  TechnoClass *v76; // esi
  TechnoClass *nextObject; // ebx
  MouseClass *v80; // ecx
  MouseClass *v84; // eax
  __int16 v86; // cx
  MouseClass *v88; // ecx
  IUnknown *v89; // ebx
  __int16 v91; // dx
  MouseClass *v93; // ecx
  TechnoClass *v99; // edx
  IUnknown *v102; // edx
  TechnoClass *v106; // eax
  MouseClass *v107; // ecx
  MouseClass *v108; // eax
  TechnoClass *v110; // edx
  _DWORD *eax140; // eax
  MouseClass *v115; // edx
  int ecx143; // ecx
  TechnoClass *v117; // edi
  bool cc146; // cc
  InfantryTypeClass *v121; // eax
  int eax150; // eax
  MouseClass *v124; // edi
  int ebx151; // ebx
  MouseClass *v130; // ecx
  MouseClass *v131; // ebx
  char al154; // al
  TechnoClass *v135; // eax
  MouseClass *v136; // eax
  __int64 rax162; // rax
  MouseClass *v143; // ecx
  IUnknown *v147; // esi
  BuildingTypeClass *v149; // eax
  TechnoClass *v155; // eax
  int esi185a; // esi
  TechnoClass *v158; // ebx
  IUnknown *v159; // esi
  TechnoClass **eax185d; // eax
  TechnoClass *v162; // edx
  IUnknown *v163; // edi
  IUnknown *v165; // eax
  unsigned int edx185; // edx
  TechnoClass *v167; // ebx
  void *eax191; // eax
  MouseClass *v170; // ecx
  IUnknown *ecx193; // ecx
  IUnknown *v175; // eax
  int LandHeight; // [esp+24h] [ebp-10Ch]
  AbstractClass *v179; // [esp+2Ch] [ebp-104h]
  IUnknown *aP4; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v185[12]; // [esp+48h] [ebp-E8h] BYREF
  double varDC; // [esp+54h] [ebp-DCh] BYREF
  TechnoClass *v186; // [esp+5Ch] [ebp-D4h]
  IUnknown *aP3; // [esp+60h] [ebp-D0h] BYREF
  IUnknown *v188; // [esp+64h] [ebp-CCh] BYREF
  int aP3_8; // [esp+68h] [ebp-C8h]
  IUnknown *v190; // [esp+6Ch] [ebp-C4h]
  IUnknown *aP3_16; // [esp+70h] [ebp-C0h] BYREF
  int aP3_20; // [esp+74h] [ebp-BCh] BYREF
  IUnknown *v193; // [esp+78h] [ebp-B8h] BYREF
  int aP3_28; // [esp+7Ch] [ebp-B4h]
  TechnoClass *v195; // [esp+80h] [ebp-B0h]
  int aP3_36; // [esp+84h] [ebp-ACh] BYREF
  int aP3_40; // [esp+88h] [ebp-A8h]
  TechnoClass *aP3_44; // [esp+8Ch] [ebp-A4h]
  int aP3_48; // [esp+90h] [ebp-A0h]
  IUnknown *aP3_52; // [esp+94h] [ebp-9Ch]
  int aP3_56; // [esp+98h] [ebp-98h] BYREF
  unsigned __int64 aP3_60; // [esp+9Ch] [ebp-94h] BYREF
  TechnoClass *aP3_68; // [esp+A4h] [ebp-8Ch]
  int aP3_72; // [esp+A8h] [ebp-88h] BYREF
  IUnknown *v205; // [esp+ACh] [ebp-84h]
  int aP3_80; // [esp+B0h] [ebp-80h]
  IUnknown *v207; // [esp+B4h] [ebp-7Ch] BYREF
  BuildingTypeClass *v208; // [esp+B8h] [ebp-78h]
  char *aP3_92; // [esp+BCh] [ebp-74h]
  TechnoClass *v210; // [esp+C0h] [ebp-70h] BYREF
  int aP3_100; // [esp+C4h] [ebp-6Ch]
  TechnoClass *v212; // [esp+C8h] [ebp-68h]
  IUnknown *aP3_108; // [esp+CCh] [ebp-64h]
  int aP3_112; // [esp+D0h] [ebp-60h]
  IUnknown *aP3_116; // [esp+D4h] [ebp-5Ch]
  _DWORD aP3_120[3]; // [esp+D8h] [ebp-58h] BYREF
  unsigned __int64 aP3_132; // [esp+E4h] [ebp-4Ch] BYREF
  TechnoClass *aP3_140; // [esp+ECh] [ebp-44h]
  TechnoClass *v219; // [esp+F0h] [ebp-40h] BYREF
  TechnoClass *aP3_148; // [esp+F4h] [ebp-3Ch]
  TechnoClass *aP3_152; // [esp+F8h] [ebp-38h]
  int aP3_156; // [esp+FCh] [ebp-34h] BYREF
  int aP3_160; // [esp+100h] [ebp-30h]
  int aP3_164; // [esp+104h] [ebp-2Ch]
  int aP3_168; // [esp+108h] [ebp-28h] BYREF
  TechnoClass *v229; // [esp+120h] [ebp-10h]
  if ( (!this->u8_63 || this->JumpjetLocomotion_field_0x58 == -1) && *(_DWORD *)(this->q00C + 1504) != 8
    || this->u8_62
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3233) )
  {
    this->u32_4C = 0;
    return 0;
  }
  int v3 = (*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C);
  int v4 = *this->q00C;
  if ( *(_BYTE *)(v3 + 3517) )
  {
    bool v5 = (*(int (**)(void))(v4 + 44))() != 1 || !*(_BYTE *)(this->q00C->u32_6C4 + 3596);
    if ( this->q058 < 64 && v5 )
    {
      *(_DWORD *)v185 = this->ptr_34;
      *(_DWORD *)&v185[4] = this->u32_38;
      *(_DWORD *)&v185[8] = this->u32_3C;
  int v6; // esi
      v6 = (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v185) + 80) & 0x100) != 0
         ? *(_DWORD *)&g_CellDirectionOffsets[4404]
         : 0;
      int v7 = v6 + Cell::GetGroundHeight(v185);
      _DWORD * v8 = (_DWORD *)(this->q00C + 156);
      *(_DWORD *)&v185[8] = v7;
      int v9 = v8[1];
      aP3_120[0] = *v8 - *(_DWORD *)v185;
      int v10 = v8[2];
      aP3_120[1] = v9 - *(_DWORD *)&v185[4];
      aP3_120[2] = v10 - v7;
  double v11; // st7
      v11 = Math::Sqrt(
              (double)(v10 - v7) * (double)(v10 - v7)
            + (double)(v9 - *(_DWORD *)&v185[4]) * (double)(v9 - *(_DWORD *)&v185[4])
            + (double)aP3_120[0] * (double)aP3_120[0]);
      int v12 = Math::RoundToInt(v11);
      v13 = this->q00C;
      int v14 = v12;
      char v15 = 0;
      int v16 = *(_DWORD *)&v13->__pad_1D4[936];
      IDA_LODWORD(varDC) = *(_DWORD *)&v13->__pad_1D4[932];
      int v17 = v13->field_0;
      IDA_HIDWORD(varDC) = v16;
      int v18 = (*(int (__thiscall **)(MouseClass *))(v17 + 132))(v13);
      aP3 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(*this->q00C + 908))(this->q00C);
      if ( v14 >= *(_DWORD *)(v18 + 760) )
      {
        if ( *(_BYTE *)(this->q00C + 973) )
        {
          double v20 = varDC - (double)(int)aP3 * 0.001500000013038516;
          if ( v20 >= 0.1000000014901161 )
            varDC = v20;
          else
            varDC = 0.1000000014901161;
          v15 = 1;
        }
      }
      else
      {
        v15 = 1;
        double v19 = varDC - (double)(int)aP3 * *(double *)(v18 + 768);
        if ( v19 >= 0.300000011920929 )
          varDC = v19;
        else
          varDC = 0.300000011920929;
      }
      v21 = this->q00C;
      if ( v21->__pad_1D4[1249] )
      {
        if ( this->q140 >= 0.2 )
          double v22 = 0.2;
        else
          v22 = this->q140;
        varDC = v22;
        int v23 = IDA_HIDWORD(varDC);
        this->q140 = v22;
        (*(void (__stdcall **)(_DWORD, int))(v21->field_0 + 1348))(IDA_LODWORD(varDC), v23);
      }
      else
      {
        if ( !v15 )
        {
  double v24; // st7
          if ( *(double *)&v21->__pad_1D4[932] >= this->q140 )
          {
            if ( *(double *)&v21->__pad_1D4[932] <= this->q140 )
              goto LABEL_37;
            v24 = *(double *)&v21->__pad_1D4[932] - (double)(int)aP3 * *(double *)(v18 + 768);
            if ( this->q140 > v24 )
              v24 = this->q140;
          }
          else
          {
            v24 = *(double *)(v18 + 776) + *(double *)&v21->__pad_1D4[932];
            if ( this->q140 < v24 )
              v24 = this->q140;
          }
          varDC = v24;
          (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(
            IDA_LODWORD(v24),
            IDA_HIDWORD(*(unsigned __int64 *)&v24));
          goto LABEL_37;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(v21->field_0 + 1348))(IDA_LODWORD(varDC), IDA_HIDWORD(varDC));
      }
LABEL_37:
      if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 44))(this->q00C) == 1 )
      {
        _DWORD * v25 = *(_DWORD **)(this->q00C + 1736);
        if ( v25 )
        {
          do
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v25 + 1348))(
              v25,
              this->q00C->u32_578,
              this->q00C->u32_57C);
            v25 = (_DWORD *)v25[434];
          }
          while ( v25 && v25 != (_DWORD *)v25[434] );
        }
      }
    }
  }
  else
  {
    (*(void (__stdcall **)(_DWORD, _DWORD))(v4 + 1348))(this->q140, this->q054);
  }
  int v26 = (*(int (__thiscall **)(_DWORD))(*this->q00C + 1336))(this->q00C);
  v27 = this->q00C;
  int v28 = a2 == 0 ? v26 : 0;
  int v29 = *(_DWORD *)&v27->__pad_1D4[1036];
  int v30 = this->u32_4C + v28;
  aP3_8 = v30;
  aP3_48 = v29;
  if ( v29 == 8 && this->JumpjetLocomotion_field_0x58 == -1 )
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v27->field_0 + 292))(v27, 0);
    _DWORD * v31 = (_DWORD *)(&this->u32_184);
    if ( this->JumpjetLocomotion_field_0x40 != *(_DWORD *)&g_CellDirectionOffsets[4352]
      || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
      || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
    {
      *v31 = *(_DWORD *)&g_CellDirectionOffsets[4352];
      this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
      v32 = *(TechnoClass **)&g_CellDirectionOffsets[4360];
      this->u8_63 = 0;
      this->q048 = v32;
    }
    int v33 = *(__int16 *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 444))(this->q00C) + 278);
    if ( v33 >= 0 && v33 < *(int *)&g_CellDirectionOffsets[84664] )
    {
      int v34 = *(_DWORD *)(*(_DWORD *)&g_CellDirectionOffsets[84652] + 4 * v33);
      aP4 = *(IUnknown **)(v34 + 40);
      int v35 = IDA_SHIWORD(aP4) << 8;
      *v31 = ((__int16)aP4 << 8) + 128;
      v36 = this->q00C;
      this->JumpjetLocomotion_field_0x44 = v35 + 128;
      this->q048 = 0;
      qmemcpy(&v36->__pad_1D4[1036], &v36->__pad_1D4[1040], 0x5Cu);
      *(_DWORD *)(this->q00C + 1596) = -1;
      this->q00C->u32_684 = v33;
      *(_BYTE *)(this->q00C + 1669) = 0;
      int v37 = *(_DWORD *)(v34 + 48) & 7;
      aP4 = *(IUnknown **)(v34 + 36);
      IDA_LOWORD(v190) = *((_WORD *)&Direction_X_Offsets.field_0 + 2 * v37) + (_WORD)aP4;
      IDA_HIWORD(v190) = IDA_HIWORD(aP4) + *((_WORD *)&DataGlobal_89F68A + 2 * v37);
      aP4 = v190;
      _DWORD * v38 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP4);
      Coords = (ObjectClass *)CellClass::GetCoords(v38, (int *)&v193);
      _DWORD * v40 = (_DWORD *)(this->q00C + 1384);
      *v40 = *(_DWORD *)Coords->__pad_0;
      v40[1] = *(_DWORD *)&Coords->__pad_0[4];
      v40[2] = *(_DWORD *)&Coords->__pad_0[8];
      int * v41 = (int *)(this->q00C + 156);
      aP3_36 = *v41;
      aP3_40 = v41[1];
      aP3_44 = (TechnoClass *)v41[2];
      GroundHeight = Cell::GetGroundHeight(&aP3_36);
      aP4 = *(IUnknown **)(v34 + 40);
      int v43 = *(_DWORD *)(v34 + 448);
      aP3_40 = (IDA_SHIWORD(aP4) << 8) + 128;
      aP3_36 = ((__int16)aP4 << 8) + 128;
      aP3_44 = 0;
      this->q00C->q15C = GroundHeight + (Cell::GetGroundHeight(&aP3_36) - GroundHeight) / v43;
      this->u8_63 = 1;
      this->JumpjetLocomotion_field_0x58 = -1;
      return 0;
    }
    *(_DWORD *)(this->q00C + 1504) = -1;
    this->JumpjetLocomotion_field_0x58 = -1;
    *v31 = *(_DWORD *)&g_CellDirectionOffsets[4352];
    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
    this->q048 = *(_DWORD *)&g_CellDirectionOffsets[4360];
    if ( *v31 != *(_DWORD *)&g_CellDirectionOffsets[4352]
      || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
      || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
    {
      *v31 = *(_DWORD *)&g_CellDirectionOffsets[4352];
      this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
      this->q048 = *(_DWORD *)&g_CellDirectionOffsets[4360];
      this->u8_63 = 0;
      return 0;
    }
    return 0;
  }
  if ( v30 <= 7 )
    goto LABEL_147;
  char * v45 = (char *)(12 * this->JumpjetLocomotion_field_0x58 + 8289064);
  char v46 = this->ptr_60;
  aP3_92 = v45;
  if ( v46 )
    int v47 = v45[1];
  else
    v47 = *v45;
  v190 = (IUnknown *)(16 * v47);
  int v48 = dword_7E7A28[4 * v47];
  aP3_100 = v48;
  if ( v29 < -1 || v29 > 8 )
  {
    *(_DWORD *)&v27->__pad_1D4[1036] = -1;
    return 0;
  }
  bool v181 = 0;
  if ( v29 != 8 && v29 != -1 )
  {
    IDA_LOBYTE(v49) = 0;
    IDA_HIBYTE(v49) = v45[4];
    IDA_LOWORD(aP4) = v49;
    v181 = (((((unsigned int)aP4 >> 12) + 1) >> 1) & 7) != v29;
  }
  while ( 1 )
  {
    int v50 = this->q05C;
    aP3_8 -= 7;
    v51 = *(BuildingTypeClass **)(v48 + 12 * v50 + 4);
    v207 = *(IUnknown **)(v48 + 12 * v50);
    v208 = v51;
    if ( !v207 && !v51 && v50 )
      break;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 192))(this->q00C) )
    {
      v52 = this->q00C;
  _DWORD v227[3]; // [esp+10Ch] [ebp-24h] BYREF
      v227[0] = *(_DWORD *)&v52->__pad_74[40];
      v227[1] = *(_DWORD *)&v52->__pad_74[44];
      v227[2] = *(_DWORD *)&v52->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, _DWORD *))(v52->field_0 + 244))(v52, v227);
      this->q00C->u8_6B6 = 0;
      *(_BYTE *)(this->q00C + 1719) = 0;
    }
    int v53 = this->q05C;
    if ( v53 )
    {
      v54 = *(IUnknown **)(v48 + 12 * v53 - 4);
      int v55 = v48 + 12 * v53;
      aP3 = v54;
      v56 = *(IUnknown **)(v55 - 8);
      int v57 = *(_DWORD *)(v55 - 12);
      v205 = v56;
      aP3_72 = v57;
  _DWORD *v58; // eax
      v58 = JumpjetLocomotion::TransformCoords(
              (_DWORD *)this,
              (IUnknown *)&v219,
              (IUnknown *)&aP3_72,
              (ObjectClass *)&aP3);
      int v59 = v58[1];
      IDA_LOWORD(v212) = *v58 / 256;
      IDA_HIWORD(v212) = v59 / 256;
      v210 = v212;
    }
    else
    {
      v210 = *(TechnoClass **)(*(int (__thiscall **)(_DWORD, double *))(*this->q00C + 440))(
                                this->q00C,
                                &varDC);
    }
    int v60 = this->q00C + 156;
    aP3 = *(IUnknown **)(v48 + 12 * this->q05C + 8);
    int v61 = *(_DWORD *)v60;
    int v62 = *(_DWORD *)(v60 + 4);
    v195 = *(TechnoClass **)(v60 + 8);
  _DWORD *v63; // eax
    v63 = JumpjetLocomotion::TransformCoords(
            (_DWORD *)this,
            (IUnknown *)aP3_120,
            (IUnknown *)&v207,
            (ObjectClass *)&aP3);
    v64 = this->q00C;
    int v65 = *v63 - v61;
    int v66 = v63[1] - v62;
    int v228 = *(_DWORD *)&v64->__pad_74[40];
    v67 = *(TechnoClass **)&v64->__pad_74[48];
    aP3_40 = v66 + *(_DWORD *)&v64->__pad_74[44];
    v229 = v67;
    aP3_44 = v67;
    aP3_36 = v228 + v65;
    int v230 = *(_DWORD *)&v64->__pad_74[44];
    int v68 = *(_DWORD *)&v64->__pad_74[40];
    int v231 = *(_DWORD *)&v64->__pad_74[48];
    IDA_LOWORD(aP3_112) = (v228 + v65) / 256;
    IDA_HIWORD(aP3_112) = aP3_40 / 256;
    aP3_56 = aP3_112;
    if ( (_WORD)aP3_112 == (unsigned __int16)(v68 / 256)
      && (unsigned __int16)(aP3_40 / 256) == (unsigned __int16)(v230 / 256) )
    {
      char v83 = v64->__pad_74[0];
      v64->__pad_74[0] = 0;
      (*(void (__thiscall **)(_DWORD, int *))(*this->q00C + 436))(this->q00C, &aP3_36);
      this->q00C->q074 = v83;
      goto LABEL_107;
    }
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v64->field_0 + 292))(v64, 0);
    (*(void (__thiscall **)(_DWORD, int *))(*this->q00C + 436))(this->q00C, &aP3_36);
    v69 = (IUnknown *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v210);
    v70 = (IUnknown *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP3_56);
    int v71 = SHIBYTE(v70->field_118);
    int v72 = SHIBYTE(v69->field_118) - 4;
    aP3_16 = v70;
    if ( v71 == v72 )
    {
      if ( (v70->field_140 & 0x100) == 0 )
        goto LABEL_80;
      this->q00C->q08C = 1;
    }
    if ( (v70->field_140 & 0x100) == 0 )
    {
LABEL_80:
      if ( (v69->field_140 & 0x100) != 0 )
        this->q00C->q08C = 0;
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220) )
    {
      v73 = this->q00C;
      if ( !v73->__pad_1D4[1276] )
      {
        if ( v73->__pad_74[24]
          || (v193 = *(IUnknown **)&v73->__pad_74[40],
              aP3_28 = *(_DWORD *)&v73->__pad_74[44],
              v74 = *(TechnoClass **)&v73->__pad_74[48],
              aP3_132 = *(_QWORD *)&v73->__pad_74[40],
              aP3_140 = *(TechnoClass **)&v73->__pad_74[48],
              (int)v74 >= *(_DWORD *)&g_CellDirectionOffsets[4404] + Cell::GetGroundHeight(&aP3_132)) )
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP3_56) + 58);
        }
        else
        {
          v75 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&aP3_56) + 57);
        }
        v76 = v75;
        if ( v75 )
        {
          do
          {
            nextObject = (TechnoClass *)v76->nextObject;
            if ( !ObjectClass::IsCrushable(v76, this->q00C) )
            {
              int v78 = *(_DWORD *)v76->__pad_0;
              aP3_20 = 10000;
              (*(void (__thiscall **)(TechnoClass *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v78 + 364))(
                v76,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 4008),
                0,
                1,
                1,
                0);
              int v79 = v73->field_0;
              aP3_20 = 20;
              (*(void (__thiscall **)(MouseClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v79 + 364))(
                v73,
                &aP3_20,
                0,
                *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 4008),
                0,
                1,
                0,
                0);
            }
            v76 = nextObject;
          }
          while ( nextObject );
          v70 = aP3_16;
        }
      }
    }
    v80 = this->q00C;
    if ( !v80->__pad_74[28] )
      return 0;
    (*(void (__thiscall **)(MouseClass *, int))(v80->field_0 + 292))(v80, 1);
    int v81 = v70->field_44;
    if ( v81 != -1 )
    {
      int v82 = *(_DWORD *)&g_BuildingTypeClass_Array->__pad_0[4 * v81];
      if ( !this->u8_64 )
        goto LABEL_107;
      if ( (*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3368)
         || TechnoClass::HasVoiceResponse(this->q00C, 17))
        && *(_BYTE *)(v82 + 680)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3371) )
      {
        *(_DWORD *)(this->q00C + 820) = -1119040307;
      }
    }
    if ( this->u8_64 )
    {
      if ( CellClass::FindBuilding(v70, 0) )
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1460) == 12 )
        {
          *(_BYTE *)(this->q00C + 1717) = 1;
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3371) )
            *(_DWORD *)(this->q00C + 820) = -1119040307;
        }
      }
    }
LABEL_107:
    v84 = this->q00C;
    if ( !v84->__pad_74[28] )
      return 0;
    char v85 = v84->__pad_74[0];
    v84->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
    IDA_LOBYTE(v86) = 0;
    this->q00C->q074 = v85;
    IDA_HIBYTE(v86) = (_BYTE)aP3;
    IDA_LOWORD(aP3_168) = v86;
    FacingClass::Set_SyncLog((char *)(this->q00C + 904), &aP3_168);
    int v87 = this->q05C;
    if ( v87 && *(int *)((char *)dword_7E7A34 + (_DWORD)v190) == v87 )
    {
      v88 = this->q00C;
      aP3_156 = *(_DWORD *)&v88->__pad_74[40];
      aP3_160 = *(_DWORD *)&v88->__pad_74[44];
      aP3_164 = *(_DWORD *)&v88->__pad_74[48];
      (*(void (__thiscall **)(MouseClass *, int *))(v88->field_0 + 244))(v88, &aP3_156);
    }
    v89 = (IUnknown *)aP3_48;
    if ( aP3_48 != 8 && aP3_48 != -1 && v181 )
    {
      int v90 = this->q05C;
      if ( *(int *)((char *)dword_7E7A2C + (_DWORD)v190) == v90 )
      {
        if ( v90 )
        {
          IDA_LOBYTE(v91) = 0;
          IDA_HIBYTE(v91) = aP3_92[4];
          IDA_LOWORD(aP3_52) = v91;
          aP3_16 = (IUnknown *)(aP3_48 + 8 * (((((unsigned int)aP3_52 >> 12) + 1) >> 1) & 7));
          aP3_20 = 12 * (_DWORD)aP3_16 + 8289064;
          char v92 = byte_7E7B28[12 * (_DWORD)aP3_16];
          if ( v92 )
          {
            if ( dword_7E7A30[4 * v92] )
            {
              v93 = this->q00C;
              _DWORD * v94 = (_DWORD *)(&this->u32_184);
              int v95 = *(_DWORD *)&v93->__pad_1D4[936];
              IDA_LODWORD(aP3_60) = *(_DWORD *)&v93->__pad_1D4[932];
              int v96 = aP3_48 & 7;
              IDA_HIDWORD(aP3_60) = v95;
              int v97 = *(_DWORD *)&g_CellDirectionOffsets[72][8 * v96] + this->JumpjetLocomotion_field_0x40;
              int v98 = this->JumpjetLocomotion_field_0x44 + *(_DWORD *)&g_CellDirectionOffsets[72][8 * v96 + 4];
              v99 = this->q048;
              *(_DWORD *)v185 = v97;
              *(_DWORD *)&v185[8] = v99;
              *(_DWORD *)&v185[4] = v98;
              IDA_LOWORD(aP3_116) = v97 / 256;
              IDA_HIWORD(aP3_116) = v98 / 256;
              v188 = aP3_116;
              int v100 = v93->field_0;
              LandHeight = ObjectClass::GetLandHeight(v93);
              void * v101 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v188);
              switch ( (*(int (__thiscall **)(_DWORD, void *, IUnknown *, int, _DWORD, int))(v100 + 428))(
                         this->q00C,
                         v101,
                         v89,
                         LandHeight,
                         0,
                         1) )
              {
                case 0:
                case 2:
                  if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 44))(this->q00C) == 1
                    && !*(_BYTE *)(this->q00C->u32_6C4 + 3596) )
                  {
                    break;
                  }
                  v102 = aP3_16;
                  char * v103 = (char *)aP3_20;
                  this->ptr_60 = 0;
                  this->JumpjetLocomotion_field_0x58 = v102;
                  aP3_92 = v103;
                  v181 = 0;
                  int v104 = 4 * *v103;
                  v190 = (IUnknown *)(v104 * 4);
                  this->q05C = dword_7E7A30[v104] - 1;
                  bool v105 = *v94 == *(_DWORD *)&g_CellDirectionOffsets[4352];
                  aP3_100 = dword_7E7A28[v104];
                  if ( !v105
                    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
                    || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
                  {
                    *v94 = *(_DWORD *)&g_CellDirectionOffsets[4352];
                    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
                    v106 = *(TechnoClass **)&g_CellDirectionOffsets[4360];
                    this->u8_63 = 0;
                    this->q048 = v106;
                  }
                  v107 = this->q00C;
                  this->u8_63 = 1;
                  (*(void (__thiscall **)(MouseClass *, int))(v107->field_0 + 396))(v107, 2);
                  v108 = this->q00C;
                  this->u8_63 = 0;
                  if ( !v108->__pad_74[28] || v108->__pad_74[13] || v108->__pad_74[25] )
                    return 0;
                  int v109 = *(_DWORD *)&g_CellDirectionOffsets[4352];
                  if ( *v94 != *(_DWORD *)&g_CellDirectionOffsets[4352]
                    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
                    || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
                  {
                    *v94 = *(_DWORD *)&g_CellDirectionOffsets[4352];
                    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
                    v110 = *(TechnoClass **)&g_CellDirectionOffsets[4360];
                    this->u8_63 = 0;
                    this->q048 = v110;
                    v109 = *(_DWORD *)&g_CellDirectionOffsets[4352];
                  }
                  int v111 = *(_DWORD *)v185;
                  int v112 = *(_DWORD *)&v185[4];
                  v105 = *(_DWORD *)v185 == v109;
                  int v113 = *(_DWORD *)&v185[8];
                  if ( !v105
                    || *(_DWORD *)&v185[4] != *(_DWORD *)&g_CellDirectionOffsets[4356]
                    || *(_DWORD *)&v185[8] != *(_DWORD *)&g_CellDirectionOffsets[4360] )
                  {
                    v179 = (AbstractClass *)v108;
                    this->u8_63 = 1;
                    *v94 = v111;
                    this->JumpjetLocomotion_field_0x44 = v112;
                    this->q048 = v113;
                    _DWORD * v114 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v185);
                    if ( !CrateClass::ProcessPickup(v114, v179) || this->q00C->u8_81 )
                    {
                      if ( this->q00C->u8_90 )
                      {
                        *v94 = *(_DWORD *)&g_CellDirectionOffsets[4352];
                        this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
                        this->q048 = *(_DWORD *)&g_CellDirectionOffsets[4360];
                        this->u8_63 = 0;
                      }
                    }
                    else
                    {
                      JumpjetLocomotion::MoveTo((IUnknown *)v185, 1);
                      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(
                        this->q00C,
                        aP3_60,
                        IDA_HIDWORD(aP3_60));
                      qmemcpy(
                        (void *)(this->q00C + 1504),
                        (const void *)(this->q00C + 1508),
                        0x5Cu);
                      *(_DWORD *)(this->q00C + 1596) = -1;
                    }
                  }
                  break;
                case 1:
                  eax140 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v185);
                  CellClass::DamageAllObjects(eax140);
                  break;
                case 3:
                  IDA_LOWORD(aP3_108) = *(_DWORD *)v185 / 256;
                  v115 = this->q00C;
                  IDA_HIWORD(aP3_108) = *(_DWORD *)&v185[4] / 256;
                  aP3_16 = aP3_108;
                  Cell::IsPassableAllied((int)v115, (__int16 *)&aP3_16);
                  break;
                case 6:
                  if ( (*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v185) + 80) & 0x100) == 0
                    || (ecx143 = this->q00C + 156,
                        v193 = *(IUnknown **)ecx143,
                        aP3_28 = *(_DWORD *)(ecx143 + 4),
                        v117 = *(TechnoClass **)(ecx143 + 8),
  int v119; // ecx
                        v119 = *((char *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)v185) + 283),
                        IDA_LOBYTE(aP4) = 1,
                        (int)abs32((int)v117 / *(_DWORD *)g_CellDirectionOffsets[4416] - v119) <= 2) )
                  {
                    IDA_LOBYTE(aP4) = 0;
                  }
                  _DWORD * v120 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)(&this->u32_184));
                  Cell::ApplyDamage(v120, (IUnknown *)&g_CellDirectionOffsets[4352], 1, 1, aP4);
                  break;
                default:
                  break;
              }
            }
          }
        }
      }
    }
    cc146 = aP3_8 <= 7;
    ++this->q05C;
    if ( cc146 )
      goto LABEL_147;
    v48 = aP3_100;
  }
  v124 = this->q00C;
  _DWORD * v126 = (_DWORD *)(&this->u32_184);
  int v127 = *(_DWORD *)&v124->__pad_74[40];
  int v128 = *(_DWORD *)&v124->__pad_74[44];
  v195 = *(TechnoClass **)&v124->__pad_74[48];
  v188 = (IUnknown *)(abs32(this->JumpjetLocomotion_field_0x44 - v128) + abs32(this->JumpjetLocomotion_field_0x40 - v127));
  int v129 = Math::RoundToInt((1.0 - (double)(int)v188 * 0.09090909090909091) * 7.0);
  ebx151 = aP3_8;
  v124->__pad_1D4[1250] = 1;
  v130 = this->q00C;
  aP3_8 = v129 + ebx151;
  v130->__pad_1D4[1251] = 0;
  v131 = this->q00C;
  int v133 = *(_DWORD *)&v131->__pad_74[40];
  int v134 = *(_DWORD *)&v131->__pad_74[44];
  v195 = *(TechnoClass **)&v131->__pad_74[48];
  IDA_HIWORD(v188) = v134 / 256;
  if ( (unsigned __int16)(v133 / 256) == (unsigned __int16)(this->JumpjetLocomotion_field_0x40 / 256)
    && IDA_HIWORD(v188) == (unsigned __int16)(this->JumpjetLocomotion_field_0x44 / 256) )
  {
    al154 = v131->__pad_74[0];
    v131->__pad_74[0] = 0;
    char v182 = al154;
    (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 436))(this->q00C, &this->u32_184);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
    this->q00C->q074 = v182;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v131->field_0 + 292))(v131, 0);
    (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 436))(this->q00C, &this->u32_184);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 460))(this->q00C, 0);
    (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 292))(this->q00C, 1);
  }
  if ( *v126 != *(_DWORD *)&g_CellDirectionOffsets[4352]
    || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
    || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
  {
    *v126 = *(_DWORD *)&g_CellDirectionOffsets[4352];
    this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
    v135 = *(TechnoClass **)&g_CellDirectionOffsets[4360];
    this->u8_63 = 0;
    this->q048 = v135;
  }
  v136 = this->q00C;
  this->JumpjetLocomotion_field_0x58 = -1;
  this->q05C = 0;
  char v183 = 0;
  int v138 = *(_DWORD *)&v136->__pad_1D4[976];
  if ( v138 )
  {
    _DWORD * v139 = (_DWORD *)(*(int (__thiscall **)(int, IUnknown **, MouseClass *))(*(_DWORD *)v138 + 76))(v138, &v193, v136);
    int v140 = *v139 / 256;
    int v141 = v139[1] / 256;
  _WORD *v142; // eax
    v142 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(*this->q00C + 440))(
                      this->q00C,
                      &varDC);
    if ( *v142 == (_WORD)v140 && v142[1] == (_WORD)v141 )
    {
      rax162 = *(_DWORD *)((*(int (__stdcall **)(IUnknown **, _DWORD))(*this->q00C + 76))(
                             &v193,
                             this->q00C)
                         + 8)
             - this->u32_3C;
      if ( (int)((IDA_HIDWORD(rax162) ^ rax162) - IDA_HIDWORD(rax162)) < 2 * *(_DWORD *)g_CellDirectionOffsets[4416] )
      {
        v183 = 1;
        this->ptr_34 = *(_DWORD *)&g_CellDirectionOffsets[4352];
        this->u32_38 = *(_DWORD *)&g_CellDirectionOffsets[4356];
        this->u32_3C = *(_DWORD *)&g_CellDirectionOffsets[4360];
        if ( *v126 != *(_DWORD *)&g_CellDirectionOffsets[4352]
          || this->JumpjetLocomotion_field_0x44 != *(_DWORD *)&g_CellDirectionOffsets[4356]
          || this->q048 != *(_DWORD *)&g_CellDirectionOffsets[4360] )
        {
          *v126 = *(_DWORD *)&g_CellDirectionOffsets[4352];
          this->JumpjetLocomotion_field_0x44 = *(_DWORD *)&g_CellDirectionOffsets[4356];
          this->q048 = *(_DWORD *)&g_CellDirectionOffsets[4360];
          this->u8_63 = 0;
        }
        this->u8_63 = 0;
      }
    }
  }
  (*(void (__thiscall **)(_DWORD, int))(*this->q00C + 396))(this->q00C, 2);
  v143 = this->q00C;
  if ( !v143 || !v143->__pad_74[28] || v143->__pad_74[13] || v143->__pad_74[25] )
    return 1;
  if ( v183 )
  {
    FootClass::ClearPathIndex(v143);
    *(_DWORD *)(this->q00C + 1504) = -1;
    if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 388))(this->q00C) == 2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
             this->q00C,
             0,
             1) )
      {
        return 1;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 1284))(this->q00C) )
    return 1;
  if ( !this->q00C->u8_90 )
    return 0;
LABEL_147:
  cc146 = aP3_8 <= 0;
  this->u32_4C = aP3_8;
  if ( cc146 )
    return 0;
  v121 = this->q058;
  if ( (int)v121 <= -1 )
    return 0;
  _BYTE * v123 = (_BYTE *)(12 * (_DWORD)v121 + 8289064);
  eax150 = this->ptr_60 ? (char)v123[1] : (char)*v123;
  int v145 = this->q05C;
  int v146 = dword_7E7A28[4 * eax150];
  v147 = *(IUnknown **)(v146 + 12 * v145);
  int v148 = v146 + 12 * v145;
  v149 = *(BuildingTypeClass **)(v148 + 4);
  v207 = v147;
  v208 = v149;
  if ( !v147 && !v149 && v145 )
    return 0;
  int v150 = this->q00C + 156;
  aP3_72 = *(_DWORD *)v150;
  v205 = *(IUnknown **)(v150 + 4);
  aP3_80 = *(_DWORD *)(v150 + 8);
  v188 = *(IUnknown **)(v148 + 8);
  int v151 = *(_DWORD *)v150;
  int v152 = *(_DWORD *)(v150 + 4);
  v195 = *(TechnoClass **)(v150 + 8);
  int *v153; // eax
  v153 = JumpjetLocomotion::TransformCoords(
           (_DWORD *)this,
           (IUnknown *)aP3_120,
           (IUnknown *)&v207,
           (ObjectClass *)&v188);
  int v154 = *v153;
  v155 = (TechnoClass *)(v153[1] - v152);
  int v156 = this->q00C + 156;
  v219 = (TechnoClass *)(v154 - v151);
  aP3_148 = v155;
  aP3_152 = 0;
  int v157 = *(_DWORD *)v156 + v154 - v151;
  esi185a = *(_DWORD *)(v156 + 4);
  v158 = *(TechnoClass **)(v156 + 8);
  IDA_HIDWORD(aP3_60) = (char *)v155 + esi185a;
  IDA_LODWORD(aP3_60) = v157;
  aP3_68 = v158;
  v159 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP3_60);
  double v161 = (double)this->u32_4C * 0.1428571428571428;
  aP3_156 = 0;
  aP3_160 = 0;
  aP3_164 = 0;
  float v180 = v161;
  eax185d = (TechnoClass **)Color::RGBFromFloat(&v193, (IUnknown *)&v219, v180);
  v219 = *eax185d;
  aP3_148 = eax185d[1];
  v162 = eax185d[2];
  IDA_LODWORD(varDC) = (char *)v219 + aP3_72;
  aP3_152 = v162;
  IDA_HIDWORD(varDC) = (char *)aP3_148 + (_DWORD)v205;
  v186 = (TechnoClass *)((char *)v162 + aP3_80);
  v163 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP3_72);
  aP3_52 = v163;
  v165 = (IUnknown *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&varDC);
  int v166 = this->q00C + 156;
  *(_DWORD *)v185 = *(_DWORD *)v166;
  edx185 = *(_DWORD *)(v166 + 4);
  *(_DWORD *)&v185[4] = edx185;
  v167 = *(TechnoClass **)(v166 + 8);
  *(_DWORD *)&v185[8] = v167;
  unsigned __int64 v169 = IDA___PAIR64__(edx185, *(unsigned int *)v185);
  if ( v165 == v159 || v165 == v163 )
  {
    v169 = *(_QWORD *)&varDC;
    v167 = v186;
    *(double *)v185 = varDC;
LABEL_190:
    *(_DWORD *)&v185[8] = v167;
  }
  else if ( this->u32_4C > 3 )
  {
    v167 = aP3_68;
    *(_QWORD *)v185 = aP3_60;
    v169 = aP3_60;
    goto LABEL_190;
  }
  aP3_132 = v169;
  aP3_140 = v167;
  eax191 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&aP3_132);
  v170 = this->q00C;
  aP3_48 = (int)eax191;
  int v172 = *(_DWORD *)&v170->__pad_74[40];
  int v173 = *(_DWORD *)&v170->__pad_74[44];
  v195 = *(TechnoClass **)&v170->__pad_74[48];
  int v174 = v173 / 256;
  if ( (unsigned __int16)(*(_DWORD *)v185 / 256) == (unsigned __int16)(v172 / 256)
    && (unsigned __int16)(*(_DWORD *)&v185[4] / 256) == (_WORD)v174 )
  {
    char v177 = v170->__pad_74[0];
    v170->__pad_74[0] = 0;
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*this->q00C + 436))(this->q00C, v185);
    this->q00C->q074 = v177;
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(MouseClass *, _DWORD))(v170->field_0 + 292))(v170, 0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*this->q00C + 436))(this->q00C, v185);
    ecx193 = aP3_52;
    v175 = (IUnknown *)aP3_48;
    if ( *(char *)(aP3_48 + 283) != SHIBYTE(aP3_52->field_118) - 4 )
      goto LABEL_196;
    if ( (*(_DWORD *)(aP3_48 + 320) & 0x100) == 0 )
      goto LABEL_197;
    this->q00C->q08C = 1;
LABEL_196:
    if ( (v175->field_140 & 0x100) == 0 )
    {
LABEL_197:
      if ( (ecx193->field_140 & 0x100) != 0 )
        this->q00C->q08C = 0;
    }
    (*(void (__thiscall **)(IUnknown *, int))(*this->q00C + 292))(ecx193, 1);
    return 0;
  }
}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
int JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4)
{
  char result; // al
  wchar_t *v16; // edi
  wchar_t **v18; // esi
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  _DWORD *Value; // edi
  int GroundHeight; // eax
  int ClosestObject; // eax
  __int16 v60; // cx
  _DWORD *v75; // ecx
  int *v78; // eax
  int v79; // ecx
  char *v80; // eax
  int v81; // ecx
  int v82; // edi
  _DWORD *v83; // eax
  _DWORD *v84; // eax
  int v85; // ecx
  int v86; // edx
  _DWORD *v87; // eax
  int v88; // ecx
  _DWORD *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // edx
  int v94; // esi
  _DWORD *v109; // edx
  wchar_t *v110; // eax
  wchar_t *v126; // esi
  wchar_t *v127; // eax
  wchar_t *v128; // ecx
  wchar_t **v129; // edx
  int Object; // eax
  _DWORD *v139; // eax
  int *Coords; // eax
  int v141; // esi
  _DWORD *v142; // edx
  int v143; // edi
  bool v144; // cc
  double v145; // st7
  double v147; // st7
  unsigned __int8 v148; // c0
  unsigned __int8 v149; // c3
  int v151; // ecx
  _DWORD *v152; // ecx
  unsigned int v153; // esi
  _DWORD *NeighbourContent; // eax
  _DWORD *v165; // edi
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
  _DWORD *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  _DWORD *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]
  int v5 = this->q004;
  unsigned int v6 = *(_DWORD *)(this->q00C + 1504);
  v215 = &this->u32_10;
  if ( !(*(unsigned __int8 (__stdcall **)(int))(v5 + 16))(this + 4) && v6 == -1 )
  {
    this->u8_61 = 0;
    if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
      || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
      || this->q048 != DataGlobal_008A0798 )
    {
      this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
      this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
      this->q048 = DataGlobal_008A0798;
      this->u8_63 = 0;
    }
    if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 388))(this->q00C) == 2 )
    {
      int v7 = (*(int (__thiscall **)(int, _DWORD, int))(*this->q00C + 1156))(v7, 0, 1);
  char v8; // al
      *a2 = v8;
      return 0;
    }
    return 0;
  }
  if ( this->ptr_34 == g_DDraw_ClipRect
    && this->u32_38 == DataGlobal_8A0794
    && this->u32_3C == DataGlobal_008A0798
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 468))(this->q00C)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 472))(this->q00C) )
  {
    return 0;
  }
  if ( this->q00C->u32_B4 && TechnoClass::CountPassengers() )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 892))(this->q00C)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 896))(this->q00C) )
  {
    return 1;
  }
  if ( v6 != -1 )
  {
    int v10 = this->q00C->u32_5A4;
    if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 44))(v10) == 1
  int v11; // ecx
      || (v11 = this->q00C->u32_5A4) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) == 15 )
    {
  _DWORD *v12; // eax
      v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*this->q00C + 72))(
                        this->q00C,
                        &v226);
  _DWORD *v13; // eax
      v13 = Coord::Subtract(
              &v216,
              *v12 - this->ptr_34,
              v12[1] - this->u32_38,
              v12[2] - this->u32_3C);
      v220 = (_DWORD *)*v13;
      v221 = v13[1];
      v222 = v13[2];
      int v14 = (int)Coord::Length((int *)&v220) / 256;
      if ( v14 < 24 )
      {
        *(_DWORD *)(this->q00C + 4 * v14 + 1504) = -1;
        v6 = *(_DWORD *)(this->q00C + 1504);
      }
    }
    if ( v6 != -1 )
      goto LABEL_125;
  }
  int v15 = this->q00C;
  v16 = g_CurrentFrame;
  int v17 = *(_DWORD *)(v15 + 1600);
  v18 = (wchar_t **)(v15 + 1600);
  int v19 = *(_DWORD *)(v15 + 1608);
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
  _DWORD * v22 = (_DWORD *)(&this->u32_142);
  v18[1] = v21;
  v18[2] = v20;
  int v23 = this->q00C;
  IDA_LOWORD(v216) = this->ptr_34 / 256;
  IDA_WORD1(v216) = this->u32_38 / 256;
  char v24 = FootClass::MovementStep(v23, (int)v16, SLODWORD(v216), 0, 0, v213);
  _DWORD * v25 = this->q00C;
  if ( !v24 )
  {
    if ( !v25 )
    {
      *a2 = 1;
      return 0;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v25 + 716))(v25, &this->u32_142) )
    {
  int v26; // ecx
      (*(void (__thiscall **)(int, _DWORD, int))(*this->q00C + 1152))(v26, 0, 1);
      return 0;
    }
    if ( *v22 == g_DDraw_ClipRect
      && this->u32_38 == DataGlobal_8A0794
      && this->u32_3C == DataGlobal_008A0798 )
    {
      return 0;
    }
    if ( !(unsigned __int8)FootClass::ClearSomeVector2(this->q00C)
  _DWORD *v27; // eax
      && (v27 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*this->q00C + 72))(
                            this->q00C,
                            &v226),
  _DWORD *v28; // eax
          v28 = Coord::Subtract(&v216, *v27 - *v22, v27[1] - this->u32_38, v27[2] - this->u32_3C),
          v220 = (_DWORD *)*v28,
          v221 = v28[1],
          v222 = v28[2],
          (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478))
      && ((*(int (__thiscall **)(_DWORD))(*this->q00C + 388))(this->q00C) == 2
       || (*(int (__thiscall **)(_DWORD))(*this->q00C + 388))(this->q00C) == 11) )
    {
      if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
        || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
        || this->q048 != DataGlobal_008A0798 )
      {
        this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
        this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
        this->q048 = DataGlobal_008A0798;
        this->u8_63 = 0;
      }
      _DWORD * v29 = this->q00C;
      if ( v29[358] )
      {
        FootClass::ClearPathIndex(v29);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
               this->q00C,
               0,
               1) )
        {
          return 1;
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v29 + 1152))(v29, 0, 1);
      }
      if ( !this->q00C->u8_90 )
        return 0;
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &a3);
  _DWORD *v31; // esi
      v31 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*this->q00C + 72))(
                        this->q00C,
                        &v226);
      int v32 = v31[1];
      unsigned int v33 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7;
      IDA_LOWORD(a2) = IDA_LOWORD(Direction_X_Offsets[v33]) + *v31 / 256;
      IDA_HIWORD(a2) = v32 / 256 + IDA_HIWORD(Direction_X_Offsets[v33]);
      a4 = (int)a2;
      if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&a4, 1) )
      {
        _DWORD * v34 = ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &a2);
        _BYTE * v35 = this->q00C;
        int v36 = *(_DWORD *)v35;
        unsigned int v37 = ((unsigned int)((*v34 >> 12) + 1) >> 1) & 7;
        LandHeight = ObjectClass::GetLandHeight(v35);
        void * v38 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a4);
  int v39; // eax
        v39 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v36 + 428))(
                this->q00C,
                v38,
                v37,
                LandHeight,
                0,
                1);
        if ( v39 == 3 )
        {
          int v40 = this->q00C;
          a2 = (_BYTE *)a4;
          Cell::IsPassableAllied(v40, (__int16 *)&a2);
        }
        else if ( v39 == 6 )
        {
          _DWORD * v41 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&a4);
          _DWORD * v42 = (_DWORD *)(this->q00C + 156);
          v226 = (_DWORD *)*v42;
          int v43 = v42[2];
          v227 = (wchar_t *)v42[1];
          v217 = 0;
          v220 = 0;
          v221 = 0;
          IDA_LODWORD(v216) = ((__int16)a4 << 8) + 128;
          IDA_HIDWORD(v216) = (IDA_SHIWORD(a4) << 8) + 128;
          GroundHeight = Cell::GetGroundHeight(&v216);
          ClosestObject = Object::FindClosestObjectCell(v41, &v220, v43 > GroundHeight + 2 * DataGlobal_8A07D0, 0);
          if ( ClosestObject )
          {
            if ( Object::IsAlliedWithObjectHouse(this->q00C->q21C, ClosestObject)
              && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C)
                           + 3220) )
            {
  _DWORD *v46; // eax
              v46 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*this->q00C + 72))(
                                this->q00C,
                                &v226);
  _DWORD *v47; // eax
              v47 = Coord::Subtract(
                      &v216,
                      *v46 - *v22,
                      v46[1] - this->u32_38,
                      v46[2] - this->u32_3C);
              v220 = (_DWORD *)*v47;
              v221 = v47[1];
              v222 = v47[2];
              if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478)
                && !Team::AllMembersValid(this->q00C) )
              {
                _DWORD * v48 = (_DWORD *)(this->q00C + 156);
                v226 = (_DWORD *)*v48;
                v227 = (wchar_t *)v48[1];
                __int64 v49 = this->u32_3C - v48[2];
                if ( (int)((IDA_HIDWORD(v49) ^ v49) - IDA_HIDWORD(v49)) < 2 * DataGlobal_8A07D0 )
                {
                  v220 = (_DWORD *)*v48;
                  v221 = v48[1];
                  v222 = v48[2];
                  if ( *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) != 10 )
                  {
                    if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
                      || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
                      || this->q048 != DataGlobal_008A0798 )
                    {
                      this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
                      this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
                      this->q048 = DataGlobal_008A0798;
                      this->u8_63 = 0;
                    }
                    _DWORD * v50 = this->q00C;
                    if ( !v50[358] )
                    {
                      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v50 + 1152))(v50, 0, 1);
                      return 0;
                    }
                    FootClass::ClearPathIndex(v50);
                    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
                             this->q00C,
                             0,
                             1) != 0;
                  }
                }
              }
              if ( (v41[80] & 0x100) == 0
  _DWORD *v51; // ecx
                || (v51 = this->q00C,
                    IDA_LOBYTE(a2) = 1,
                    v51 += 39,
                    v226 = (_DWORD *)*v51,
                    v227 = (wchar_t *)v51[1],
  __int64 v52; // rax
                    v52 = v51[2] / DataGlobal_8A07D0 - *((char *)v41 + 283),
                    (int)((IDA_HIDWORD(v52) ^ v52) - IDA_HIDWORD(v52)) <= 2) )
              {
                IDA_LOBYTE(a2) = 0;
              }
              Cell::ApplyDamage(v41, (int)&g_DDraw_ClipRect, 1, 1, (char)a2);
            }
          }
        }
      }
      _DWORD * v53 = this->q00C;
      int v54 = v53[403];
      if ( v54 <= 0 )
      {
        if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
          || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
          || this->q048 != DataGlobal_008A0798 )
        {
          this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
          this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
          this->q048 = DataGlobal_008A0798;
          this->u8_63 = 0;
        }
        if ( v53[358] )
        {
          FootClass::ClearPathIndex(v53);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
                 this->q00C,
                 0,
                 1) )
          {
            return 1;
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v53 + 1152))(v53, 0, 1);
        }
        int v55 = this->q00C;
        if ( !*(_BYTE *)(v55 + 144) )
          return 0;
        if ( *(_BYTE *)(v55 + 1674) )
          PlayVocClass(*((_DWORD *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        *(_BYTE *)(this->q00C + 1674) = 0;
      }
      else
      {
        v53[403] = v54 - 1;
      }
    }
    if ( !(*(unsigned __int8 (__stdcall **)(int))(this->u32_20)(v215) )
    {
      _DWORD * v56 = this->q00C;
      if ( v56[173] )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v56 + 940))(v56, v56[173]) )
        {
          this->q00C->q1A2 = 1;
          if ( this->q00C->u32_5D4 )
            TeamClass::WakeUpAllMembers();
          (*(void (__thiscall **)(_DWORD, _DWORD))(*this->q00C + 968))(this->q00C, 0);
        }
      }
    }
    if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
      || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
      || this->q048 != DataGlobal_008A0798 )
    {
      this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
      this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
      this->q048 = DataGlobal_008A0798;
      this->u8_63 = 0;
    }
    this->JumpjetLocomotion_field_0x58 = -1;
    this->u8_61 = 0;
    return 0;
  }
  if ( v25[376] == 8 )
    return 0;
  _DWORD * v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v25 + 72))(v25, &v226);
  int v58 = v57[1];
  int v59 = *(_DWORD *)(this->q00C + 1504) & 7;
  v60 = IDA_HIWORD(Direction_X_Offsets[v59]);
  IDA_LOWORD(v216) = *v57 / 256 + IDA_LOWORD(Direction_X_Offsets[v59]);
  IDA_WORD1(v216) = v58 / 256 + v60;
  v218 = IDA_LODWORD(v216);
  if ( LayerClass::IsWithinUsableArea(&DataGlobal_87F7E8, (__int16 *)&v218, 1) )
  {
    _BYTE * v61 = this->q00C;
    int v62 = *(_DWORD *)v61;
    int v207 = ObjectClass::GetLandHeight(v61);
    int v205 = *(_DWORD *)(this->q00C + 1504);
    void * v63 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v218);
  int v64; // eax
    v64 = (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v62 + 428))(
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
      Cell::IsPassableAllied(v65, (__int16 *)&v219);
    }
    else if ( v64 == 6 )
    {
      _DWORD * v66 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v218);
      _DWORD * v67 = (_DWORD *)(this->q00C + 156);
      IDA_LODWORD(v216) = ((__int16)v218 << 8) + 128;
      IDA_HIDWORD(v216) = (IDA_SHIWORD(v218) << 8) + 128;
      v217 = 0;
      v226 = (_DWORD *)*v67;
      v227 = (wchar_t *)v67[1];
      int v68 = v67[2];
      v220 = 0;
      v221 = 0;
      int v69 = Cell::GetGroundHeight(&v216);
      int v70 = Object::FindClosestObjectCell(v66, &v220, v68 > v69 + 2 * DataGlobal_8A07D0, 0);
      if ( v70 )
      {
        if ( Object::IsAlliedWithObjectHouse(this->q00C->q21C, v70)
          && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220) )
        {
  _DWORD *v71; // eax
          v71 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD **))(*this->q00C + 72))(
                            this->q00C,
                            &v226);
          _DWORD * v72 = Coord::Subtract(&v216, *v71 - *v22, v71[1] - this->u32_38, v71[2] - this->u32_3C);
          v220 = (_DWORD *)*v72;
          v221 = v72[1];
          v222 = v72[2];
          if ( (int)Coord::Length((int *)&v220) < *((_DWORD *)g_RulesClass_Instance + 1478)
            && !Team::AllMembersValid(this->q00C) )
          {
            _DWORD * v73 = (_DWORD *)(this->q00C + 156);
            v226 = (_DWORD *)*v73;
            v227 = (wchar_t *)v73[1];
            __int64 v74 = this->u32_3C - v73[2];
            if ( (int)((IDA_HIDWORD(v74) ^ v74) - IDA_HIDWORD(v74)) < 2 * DataGlobal_8A07D0 )
            {
              v220 = (_DWORD *)*v73;
              v221 = v73[1];
              v222 = v73[2];
              if ( *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) != 10 )
              {
                if ( this->JumpjetLocomotion_field_0x40 == g_DDraw_ClipRect
                  && this->JumpjetLocomotion_field_0x44 == DataGlobal_8A0794
                  && this->q048 == DataGlobal_008A0798 )
                {
                  goto LABEL_118;
                }
                this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
                this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
                this->q048 = DataGlobal_008A0798;
                goto LABEL_117;
              }
            }
          }
          if ( (v66[80] & 0x100) == 0
  _DWORD *v76; // ecx
            || (v76 = this->q00C,
                IDA_LOBYTE(v216) = 1,
                v76 += 39,
                v226 = (_DWORD *)*v76,
                v227 = (wchar_t *)v76[1],
  __int64 v77; // rax
                v77 = v76[2] / DataGlobal_8A07D0 - *((char *)v66 + 283),
                (int)((IDA_HIDWORD(v77) ^ v77) - IDA_HIDWORD(v77)) <= 2) )
          {
            IDA_LOBYTE(v216) = 0;
          }
          Cell::ApplyDamage(v66, (int)&g_DDraw_ClipRect, 1, 1, IDA_SLOBYTE(v216));
        }
      }
    }
  }
  *(_DWORD *)(this->q00C + 1612) = 10;
  v6 = *(_DWORD *)(this->q00C + 1504);
LABEL_125:
  if ( v6 == 8 )
    return 0;
  v78 = Coord::Subtract(
          &v226,
          DataGlobal_89F6D8[2 * (v6 & 7)] + this->q00C->q09C,
          this->q00C->u32_A0 + DataGlobal_89F6DC[2 * (v6 & 7)],
          this->q00C->q0A4);
  v223 = *v78;
  v79 = this->q00C + 156;
  v224 = v78[1];
  v225 = v78[2];
  v220 = *(_DWORD **)v79;
  v221 = *(_DWORD *)(v79 + 4);
  v222 = *(_DWORD *)(v79 + 8);
  v80 = (char *)Coord::To_Cell(&DataGlobal_87F7E8, &v220);
  v81 = this->q00C;
  v82 = v80[283] + (*(_BYTE *)(v81 + 140) != 0 ? 4 : 0);
  v83 = Coord::Subtract(
          &v226,
          *(_DWORD *)(v81 + 156) + DataGlobal_89F6D8[2 * (v6 & 7)],
          *(_DWORD *)(v81 + 160) + DataGlobal_89F6DC[2 * (v6 & 7)],
          *(_DWORD *)(v81 + 164));
  v220 = (_DWORD *)*v83;
  v221 = v83[1];
  v222 = v83[2];
  v84 = Coord::To_Cell(&DataGlobal_87F7E8, &v220);
  v85 = this->q00C;
  if ( *(_BYTE *)(v85 + 140) != ((v84[80] >> 8) & 1) )
    *(_BYTE *)(v85 + 1675) = 1;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*this->q00C + 668))(this->q00C) )
    return 1;
  IDA_LOWORD(v216) = v223 / 256;
  v86 = this->q00C;
  IDA_WORD1(v216) = v224 / 256;
  v219 = IDA_LODWORD(v216);
  if ( !Cell::IsPassableAllied(v86, (__int16 *)&v219) )
    return 1;
  if ( abs16(*(_WORD *)ProgressTimer::GetValue((_WORD *)(this->q00C + 904), &v220) - ((_WORD)v6 << 13)) )
  {
    IDA_LOWORD(a4) = (_WORD)v6 << 13;
    (*(void (__stdcall **)(int, int))(this->q05C)(v215, a4);
    return 1;
  }
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  v215 = IDA_LODWORD(v216);
  v87 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
  v88 = this->q00C;
  v89 = v87;
  v220 = v87;
  v214 = 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v88 + 292))(v88, 0);
  v90 = (*(int (__thiscall **)(_DWORD, _DWORD *, unsigned int, int, _DWORD, int))(*this->q00C + 428))(
          this->q00C,
          v89,
          v6,
          v82,
          0,
          1);
  v91 = this->q00C;
  IDA_LODWORD(v216) = v90;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v91 + 292))(v91, 1);
  if ( SLODWORD(v216) < 7
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220)
    || (IDA_LODWORD(v216) == 5 || IDA_LODWORD(v216) == 4)
    && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3368)
    && !v89[17] )
  {
    IDA_LODWORD(v216) = 0;
  }
  v92 = v89[17];
  v93 = IDA_LODWORD(v216);
  if ( v92 != -1 && !IDA_LODWORD(v216) && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v92) + 557) )
  {
LABEL_148:
    v214 = 1;
    goto LABEL_149;
  }
  if ( v92 != -1 )
  {
    if ( !IDA_LODWORD(v216) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v92) + 680)
        || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1460) != 12 )
      {
        goto LABEL_149;
      }
      goto LABEL_148;
    }
    goto LABEL_153;
  }
  if ( IDA_LODWORD(v216) )
  {
    v93 = IDA_LODWORD(v216);
LABEL_153:
    if ( v93 == 3 )
    {
      int v95 = this->q00C;
      a4 = v215;
      Cell::IsPassableAllied(v95, (__int16 *)&a4);
      goto LABEL_155;
    }
    if ( v93 == 6 )
    {
      if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220) )
      {
        _DWORD * v108 = this->q00C;
        if ( (_BYTE)a3 )
        {
          v108[376] = -1;
          v109 = (_DWORD *)(this->q00C + 1600);
          *v109 = g_CurrentFrame;
          v110 = v227;
          goto LABEL_329;
        }
        _DWORD * v111 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*v108 + 72))(v108, &v226);
  _DWORD *v112; // eax
        v112 = Coord::Subtract(
                 &v229,
                 *v111 - this->ptr_34,
                 v111[1] - this->u32_38,
                 v111[2] - this->u32_3C);
        v220 = (_DWORD *)*v112;
        int v113 = v112[1];
        int v114 = v112[2];
        v221 = v113;
        v222 = v114;
  double v115; // st7
        v115 = Math::Sqrt((double)v114 * (double)v114 + (double)v113 * (double)v113 + (double)(int)v220
                                                                                    * (double)(int)v220);
        if ( (int)Math::RoundToInt(v115) >= *((_DWORD *)g_RulesClass_Instance + 1478)
  _DWORD *v116; // ecx
          || (v116 = (_DWORD *)(this->q00C + 156),
              v226 = (_DWORD *)*v116,
              v227 = (wchar_t *)v116[1],
  __int64 v117; // rax
              v117 = this->u32_3C - v116[2],
              (int)((IDA_HIDWORD(v117) ^ v117) - IDA_HIDWORD(v117)) >= 2 * DataGlobal_8A07D0)
          || (v220 = (_DWORD *)*v116,
              v221 = v116[1],
              v222 = v116[2],
              *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v220) + 59) == 10) )
        {
          if ( (*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 80) & 0x100) == 0
  _DWORD *v119; // edx
            || (v119 = (_DWORD *)(this->q00C + 156),
                v226 = (_DWORD *)*v119,
                v227 = (wchar_t *)v119[1],
  int v120; // esi
                v120 = v119[2],
  int v121; // ecx
                v121 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 283),
                IDA_LOBYTE(a4) = 1,
                (int)abs32(v120 / DataGlobal_8A07D0 - v121) <= 2) )
          {
            IDA_LOBYTE(a4) = 0;
          }
          char v210 = a4;
          _DWORD * v122 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
          Cell::ApplyDamage(v122, (int)&g_DDraw_ClipRect, 1, 1, v210);
        }
        else
        {
          if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
            || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
            || this->q048 != DataGlobal_008A0798 )
          {
            this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
            this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
            this->q048 = DataGlobal_008A0798;
            this->u8_63 = 0;
          }
          _DWORD * v118 = this->q00C;
          if ( v118[358] )
          {
            FootClass::ClearPathIndex(v118);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
                   this->q00C,
                   0,
                   1) )
            {
              return 1;
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v118 + 1152))(v118, 0, 1);
          }
        }
      }
LABEL_155:
      _DWORD * v96 = (_DWORD *)(&this->u32_184);
      if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
        || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
        || this->q048 != DataGlobal_008A0798 )
      {
        *v96 = g_DDraw_ClipRect;
        this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
        int v97 = DataGlobal_008A0798;
        this->u8_63 = 0;
        this->q048 = v97;
      }
      if ( IDA_LODWORD(v216) == 2 )
      {
        int v98 = this->q00C;
        if ( !*(_BYTE *)(v98 + 1719) )
        {
          *(_BYTE *)(v98 + 1719) = 1;
          _DWORD * v99 = (_DWORD *)(this->q00C + 1640);
          int v100 = *((_DWORD *)g_RulesClass_Instance + 1498);
          *v99 = g_CurrentFrame;
          v99[1] = v230;
          v99[2] = v100;
        }
        int v101 = this->q00C;
        int v102 = (int)g_CurrentFrame;
        int v103 = *(_DWORD *)(v101 + 1600);
        int v104 = *(_DWORD *)(v101 + 1608);
        if ( v103 != -1 )
        {
          if ( (int)g_CurrentFrame - v103 >= v104 )
            goto LABEL_166;
          v104 -= (int)g_CurrentFrame - v103;
        }
        if ( !v104 )
        {
  char v107; // bl
LABEL_166:
          if ( *(_BYTE *)(v101 + 1719) )
          {
            int v105 = *(_DWORD *)(v101 + 1640);
            int v106 = *(_DWORD *)(v101 + 1648);
            if ( v105 != -1 )
            {
              v102 = (int)g_CurrentFrame - v105;
              if ( (int)g_CurrentFrame - v105 >= v106 )
              {
LABEL_171:
                v107 = 1;
LABEL_199:
                IDA_LOWORD(a4) = this->ptr_34 / 256;
                IDA_HIWORD(a4) = this->u32_38 / 256;
                char v124 = FootClass::MovementStep(v101, v102, a4, 0, (v107 != 0) + 1, v213);
                int v125 = this->q00C;
                if ( !v125 )
                {
                  *a2 = 1;
                  return 0;
                }
                if ( v124 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v125 + 716))(v125, &this->u32_142) )
                {
                  v126 = g_CurrentFrame;
                  v127 = (wchar_t *)Math::RoundToInt(*((double *)g_RulesClass_Instance + 748) * 900.0);
                  v128 = v230;
                  v129 = (wchar_t **)(this->q00C + 1600);
                  *v129 = v126;
                  v129[1] = v128;
                  v129[2] = v127;
                  return 1;
                }
                v75 = this->q00C;
LABEL_204:
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
                return 0;
              }
              v106 -= v102;
            }
            if ( !v106 )
              goto LABEL_171;
          }
          v107 = 0;
          goto LABEL_199;
        }
        goto LABEL_209;
      }
      if ( IDA_LODWORD(v216) != 5 && IDA_LODWORD(v216) != 4 )
      {
LABEL_209:
        if ( *(_BYTE *)(this->q00C + 1674) )
          PlayVocClass(*((_DWORD *)g_RulesClass_Instance + 448), 0x2000, 1.0, 0);
        goto LABEL_219;
      }
      if ( !(_BYTE)a3 )
      {
        v220 = 0;
        v221 = 0;
        _DWORD * v130 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
        if ( Object::FindObjectCell(v130, &v220, 0) )
        {
          v220 = 0;
          v221 = 0;
          _DWORD * v131 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
          Object = Object::FindObjectCell(v131, &v220, 0);
          if ( !Object::IsAlliedWithObjectHouse(this->q00C->q21C, Object) )
          {
            int * v133 = this->q00C;
            v220 = 0;
            v221 = 0;
            int v134 = *v133;
            _DWORD * v135 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
            int v136 = Object::FindObjectCell(v135, &v220, 0);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(v134 + 500))(this->q00C, 1, v136, 0);
          }
        }
        else if ( *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 17) != -1
               && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array
                             + *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 17))
                           + 680) )
        {
          int v137 = *this->q00C;
          void * v138 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
          (*(void (__thiscall **)(_DWORD, int, void *, _DWORD))(v137 + 500))(this->q00C, 1, v138, 0);
        }
LABEL_219:
        if ( IDA_LODWORD(v216) != 7 )
        {
          *(_BYTE *)(this->q00C + 1674) = 0;
          this->JumpjetLocomotion_field_0x58 = -1;
          return 1;
        }
        if ( (_BYTE)a3 )
        {
          *(_DWORD *)(this->q00C + 1504) = -1;
          v109 = (_DWORD *)(this->q00C + 1600);
          *v109 = g_CurrentFrame;
          v110 = v230;
          goto LABEL_329;
        }
        if ( *v96 != g_DDraw_ClipRect
          || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
          || this->q048 != DataGlobal_008A0798 )
        {
          *v96 = g_DDraw_ClipRect;
          this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
          this->q048 = DataGlobal_008A0798;
          goto LABEL_117;
        }
LABEL_118:
        v75 = this->q00C;
        if ( !v75[358] )
          goto LABEL_119;
        goto LABEL_335;
      }
      *(_DWORD *)(this->q00C + 1504) = -1;
      v109 = (_DWORD *)(this->q00C + 1600);
      *v109 = g_CurrentFrame;
      v110 = v230;
LABEL_329:
      v109[1] = v110;
      v109[2] = 0;
      return JumpjetLocomotion::Update(a2, 0, 0);
    }
    if ( v93 != 1 )
      goto LABEL_155;
    _DWORD * v123 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
    CellClass::DamageAllObjects(v123);
    if ( (_BYTE)a3 )
    {
      _BYTE * v208 = a2;
      *(_DWORD *)(this->q00C + 1504) = -1;
      return JumpjetLocomotion::Update(v208, 0, 0);
    }
    if ( this->JumpjetLocomotion_field_0x40 == g_DDraw_ClipRect
      && this->JumpjetLocomotion_field_0x44 == DataGlobal_8A0794
      && this->q048 == DataGlobal_008A0798 )
    {
      goto LABEL_118;
    }
    this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
    this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
    this->q048 = DataGlobal_008A0798;
LABEL_117:
    this->u8_63 = 0;
    goto LABEL_118;
  }
LABEL_149:
  if ( (int)abs32(v82 - *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 283)) >= 2 )
  {
    v219 = v82;
    v94 = 1;
  }
  else
  {
    v219 = *((char *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 283);
    v94 = *((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 59);
  }
  v216 = DataGlobal_89EA40[9 * v94
                        + *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C)
                                    + 1660)];
  if ( v216 > 1.0 )
    v216 = 1.0;
  v139 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
  Coords = CellClass::GetCoords(v139, &v229);
  v141 = Cell::GetGroundHeight(Coords);
  v142 = (_DWORD *)(this->q00C + 156);
  v226 = (_DWORD *)*v142;
  v227 = (wchar_t *)v142[1];
  v228 = v142[2];
  v143 = Cell::GetGroundHeight(&v226);
  v144 = v141 < v143;
  if ( v141 > v143 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(*this->q00C + 44))(this->q00C) == 1 )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1660) == 1 )
        v145 = v216 * *((double *)g_RulesClass_Instance + 237);
      else
        v145 = v216 * *((double *)g_RulesClass_Instance + 239);
LABEL_241:
      v216 = v145;
      goto LABEL_242;
    }
    v144 = v141 < v143;
  }
  if ( v144 && (*(int (__thiscall **)(_DWORD))(*this->q00C + 44))(this->q00C) == 1 )
  {
    if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1660) == 1 )
      v145 = v216 * *((double *)g_RulesClass_Instance + 238);
    else
      v145 = v216 * *((double *)g_RulesClass_Instance + 240);
    goto LABEL_241;
  }
LABEL_242:
  if ( v216 == 0.0 )
    v216 = 0.5;
  BuildingClass::GetHealthRatio(this->q00C);
  v147 = v216;
  if ( v148 | v149 )
  {
    v147 = v216 * 0.75;
    v216 = v216 * 0.75;
  }
  if ( this->q058 >= 64 )
  {
    double * v150 = this->q00C;
    if ( v147 != v150[175] )
      (*(void (__thiscall **)(double *, _DWORD, _DWORD))(*(_DWORD *)v150 + 1348))(v150, IDA_LODWORD(v216), IDA_HIDWORD(v216));
  }
  else
  {
    this->q140 = v147;
  }
  v151 = this->q00C;
  IDA_LOWORD(v216) = v223 / 256;
  IDA_WORD1(v216) = v224 / 256;
  (*(void (__thiscall **)(int, double *, int))(*(_DWORD *)v151 + 1332))(v151, &v216, 1);
  v152 = this->q00C;
  v153 = v152[377];
  if ( v153 == -1 )
  {
    _DWORD * v154 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v152 + 72))(v152, &v229);
    int v155 = this->u32_38;
    int v156 = *v154 - this->ptr_34;
    int v157 = v154[1];
    int v158 = v154[2];
    IDA_LODWORD(v216) = v156;
    int v159 = this->u32_3C;
    IDA_HIDWORD(v216) = v157 - v155;
    v217 = v158 - v159;
  double v160; // st7
    v160 = Math::Sqrt(
             (double)(v158 - v159) * (double)(v158 - v159)
           + (double)(v157 - v155) * (double)(v157 - v155)
           + (double)SLODWORD(v216) * (double)SLODWORD(v216));
    if ( (int)Math::RoundToInt(v160) <= 512 )
    {
LABEL_262:
      v153 = v6;
      goto LABEL_263;
    }
    char v161 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220);
    int v162 = this->q00C;
    IDA_LOWORD(v216) = this->ptr_34 / 256;
    IDA_WORD1(v216) = this->u32_38 / 256;
    result = FootClass::MovementStep(v162, v155, SLODWORD(v216), v161 != 0, 0, v213);
    if ( !result )
    {
      int v163 = this->q00C;
      if ( !v163 )
      {
        *a2 = 1;
        return result;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v163 + 716))(v163, &this->u32_142) )
        (*(void (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1152))(this->q00C, 0, 1);
    }
    v153 = this->q00C->u8_179;
  }
  if ( v153 == 8 )
    v153 = v6;
  if ( v153 == -1 || (_BYTE)a4 )
    goto LABEL_262;
LABEL_263:
  if ( v153 != -1
    && (NeighbourContent = Cell::GetNeighbourContent(v220, v153), (v165 = NeighbourContent) != 0)
    && (v166 = NeighbourContent[17], v166 != -1)
    && ((v167 = *((_DWORD *)g_BuildingTypeClass_Array + v166), *(_BYTE *)(v167 + 557))
     || *(_BYTE *)(v167 + 680)
     && *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1460) == 12
     || *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 1460) == 12
     && CellClass::FindBuilding(v165, 0))
    || v214 )
  {
    v153 = v6;
    this->u8_64 = 1;
  }
  else
  {
    this->u8_64 = 0;
  }
  v168 = v153 + 8 * v6;
  this->ptr_60 = 0;
  this->JumpjetLocomotion_field_0x58 = v168;
  if ( !byte_7E7B28[12 * v168] )
    this->JumpjetLocomotion_field_0x58 = 9 * v6;
  if ( (dword_7E7B30[3 * this->JumpjetLocomotion_field_0x58] & 8) != 0 )
  {
  int v171; // esi
    int v211 = this->q00C;
    _DWORD * v169 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
  int v170; // eax
    if ( CrateClass::ProcessPickup(v169, v211) || (v170 = this->q00C, *(_BYTE *)(v170 + 129)) )
    {
      int * v172 = this->q00C;
      if ( !*((_BYTE *)v172 + 144) )
        return 0;
      int v173 = v153 & 7;
      int v174 = DataGlobal_89F6DC[2 * v173];
      v223 += DataGlobal_89F6D8[2 * v173];
      v224 += v174;
      IDA_LOWORD(a4) = v223 / 256;
      int v209 = v219;
      IDA_HIWORD(a4) = v224 / 256;
      v215 = a4;
      int v175 = *v172;
      void * v176 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
      v171 = (*(int (__thiscall **)(_DWORD, void *, unsigned int, int, _DWORD, int))(v175 + 428))(
               this->q00C,
               v176,
               v153,
               v209,
               0,
               1);
      if ( v171 < 7
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3220)
        || (v171 == 4 || v171 == 5)
        && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*this->q00C + 132))(this->q00C) + 3368)
        && !*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215) + 17) )
      {
        v171 = 0;
      }
    }
    else
    {
      v171 = 7;
      if ( !*(_BYTE *)(v170 + 144) )
        return 0;
    }
    v75 = this->q00C;
    if ( !*((_BYTE *)v75 + 144) )
      return 0;
    if ( v171 )
    {
      int v177 = a3;
      switch ( v171 )
      {
        case 3:
          a4 = v215;
          Cell::IsPassableAllied((int)v75, (__int16 *)&a4);
          goto LABEL_293;
        case 2:
          return JumpjetLocomotion::Update(a2, a3, 1);
        case 6:
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v75 + 132))(v75) + 3220) )
            goto LABEL_293;
          _DWORD * v178 = this->q00C;
          if ( (_BYTE)v177 )
          {
            v178[376] = -1;
            v109 = (_DWORD *)(this->q00C + 1600);
            *v109 = g_CurrentFrame;
            v110 = v230;
            goto LABEL_329;
          }
          _DWORD * v179 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v178 + 72))(v178, &v229);
          int v180 = this->u32_38;
          _DWORD * v181 = (_DWORD *)(*v179 - this->ptr_34);
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
          if ( (int)Math::RoundToInt(v185) >= *((_DWORD *)g_RulesClass_Instance + 1478)
  _DWORD *v186; // ecx
            || (v186 = (_DWORD *)(this->q00C + 156),
                v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
  __int64 v187; // rax
                v187 = this->u32_3C - v186[2],
                (int)((IDA_HIDWORD(v187) ^ v187) - IDA_HIDWORD(v187)) >= 2 * DataGlobal_8A07D0)
            || (v226 = (_DWORD *)*v186,
                v227 = (wchar_t *)v186[1],
                v228 = v186[2],
                *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, &v226) + 59) == 10) )
          {
            _DWORD * v189 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
            if ( (v189[80] & 0x100) == 0
  _DWORD *v190; // edx
              || (v190 = this->q00C,
                  IDA_LOBYTE(a4) = 1,
                  v190 += 39,
  int v191; // edi
                  v191 = *((char *)v189 + 283),
                  v226 = (_DWORD *)*v190,
                  v227 = (wchar_t *)v190[1],
  __int64 v192; // rax
                  v192 = v190[2] / DataGlobal_8A07D0 - v191,
                  (int)((IDA_HIDWORD(v192) ^ v192) - IDA_HIDWORD(v192)) <= 2) )
            {
              IDA_LOBYTE(a4) = 0;
            }
            Cell::ApplyDamage(v189, (int)&g_DDraw_ClipRect, 1, 1, a4);
LABEL_293:
            *(_DWORD *)(this->q00C + 1504) = -1;
            this->JumpjetLocomotion_field_0x58 = -1;
            v223 = g_DDraw_ClipRect;
            v224 = DataGlobal_8A0794;
            v225 = DataGlobal_008A0798;
            if ( v171 == 5 || v171 == 4 )
              return JumpjetLocomotion::Update(a2, v177, 1);
            goto LABEL_338;
          }
          if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
            || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
            || this->q048 != DataGlobal_008A0798 )
          {
            this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
            this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
            this->q048 = DataGlobal_008A0798;
            this->u8_63 = 0;
          }
          _DWORD * v188 = this->q00C;
          if ( !v188[358] )
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v188 + 1152))(v188, 0, 1);
            goto LABEL_293;
          }
          FootClass::ClearPathIndex(v188);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
                  this->q00C,
                  0,
                  1) )
            goto LABEL_293;
          return 1;
        case 1:
          _DWORD * v193 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v215);
          CellClass::DamageAllObjects(v193);
          if ( (_BYTE)a3 )
          {
            _BYTE * v194 = a2;
            *(_DWORD *)(this->q00C + 1504) = -1;
            return JumpjetLocomotion::Update(v194, 0, 0);
          }
          if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
            || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
            || this->q048 != DataGlobal_008A0798 )
          {
            this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
            this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
            this->q048 = DataGlobal_008A0798;
            this->u8_63 = 0;
          }
          v75 = this->q00C;
          if ( v75[358] )
            goto LABEL_335;
LABEL_119:
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v75 + 1152))(v75, 0, 1);
          return 0;
      }
      if ( v171 != 7 )
        goto LABEL_293;
      if ( (_BYTE)a3 )
      {
        v75[376] = -1;
        v109 = (_DWORD *)(this->q00C + 1600);
        *v109 = g_CurrentFrame;
        v110 = v230;
        goto LABEL_329;
      }
      if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
        || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
        || this->q048 != DataGlobal_008A0798 )
      {
        this->JumpjetLocomotion_field_0x40 = g_DDraw_ClipRect;
        this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
        this->q048 = DataGlobal_008A0798;
        this->u8_63 = 0;
      }
      if ( v75[358] )
      {
LABEL_335:
        FootClass::ClearPathIndex(v75);
        return (*(int (__thiscall **)(_DWORD, _DWORD, int))(*this->q00C + 1156))(
                 this->q00C,
                 0,
                 1);
      }
      goto LABEL_204;
    }
    qmemcpy(v75 + 376, v75 + 378, 0x58u);
    *(_DWORD *)(this->q00C + 1592) = -1;
    *(_BYTE *)(this->q00C + 1675) = 1;
  }
  else
  {
    qmemcpy((void *)(this->q00C + 1504), (const void *)(this->q00C + 1508), 0x5Cu);
  }
LABEL_338:
  v195 = (int *)(&this->u32_184);
  *(_DWORD *)(this->q00C + 1596) = -1;
  IDA_LOWORD(a4) = v223 / 256;
  v196 = this->q00C;
  IDA_HIWORD(a4) = v224 / 256;
  *(_DWORD *)(v196 + 1368) = a4;
  *(_BYTE *)(this->q00C + 1674) = 0;
  this->q05C = 0;
  v197 = g_DDraw_ClipRect;
  if ( this->JumpjetLocomotion_field_0x40 != g_DDraw_ClipRect
    || this->JumpjetLocomotion_field_0x44 != DataGlobal_8A0794
    || this->q048 != DataGlobal_008A0798 )
  {
    *v195 = g_DDraw_ClipRect;
    this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
    int v198 = DataGlobal_008A0798;
    this->u8_63 = 0;
    this->q048 = v198;
    v197 = g_DDraw_ClipRect;
  }
  v199 = v223;
  v200 = v225;
  v201 = v223 == v197;
  v202 = v224;
  if ( !v201 || v224 != DataGlobal_8A0794 || v225 != DataGlobal_008A0798 )
  {
    this->u8_63 = 1;
    *v195 = v199;
    this->JumpjetLocomotion_field_0x44 = v202;
    this->q048 = v200;
    int v212 = this->q00C;
    _DWORD * v203 = Coord::To_Cell(&DataGlobal_87F7E8, &v223);
    if ( CrateClass::ProcessPickup(v203, v212) && !this->q00C->u8_81 )
    {
      JumpjetLocomotion::MoveTo(&v223, 1);
      return 0;
    }
    if ( this->q00C->u8_90 )
    {
      *v195 = g_DDraw_ClipRect;
      this->JumpjetLocomotion_field_0x44 = DataGlobal_8A0794;
      this->q048 = DataGlobal_008A0798;
      this->u8_63 = 0;
    }
  }
  v204 = this->q00C;
  this->JumpjetLocomotion_field_0x58 = -1;
  *(_DWORD *)(v204 + 1504) = -1;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*this->q00C + 1348))(this->q00C, 0, 0);
  return 0;
}

} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * v4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // edx
  int v9; // ecx

  v4 = *v4; /*0x4b478d*/
  v5 = dword_7E7B30[3 * *(&this->q0082)]; /*0x4b4791*/
  v6 = *aP2; /*0x4b479f*/
  v7 = aP2[1]; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2[1]; /*0x4b47a8*/
    v7 = *aP2; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *v4 = v4; /*0x4b47df*/
  v8 = *(&this->q0046); /*0x4b47e2*/
  v9 = *(&this->q0047); /*0x4b47e5*/
  *aP1 = v6 + v8; /*0x4b47f2*/
  aP1[1] = v7 + v9; /*0x4b47f5*/
  return aP1; /*0x4b47f0*/
}
}
// 0x54CA90
namespace gamemd {
void* JumpjetLocomotion::Land()
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // esi
  _BYTE *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebp
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  _DWORD *v23; // esi
  int v24; // eax
  bool v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // ecx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // eax
  int v42; // ecx
  char v44; // [esp+32h] [ebp-24h]
  char v45; // [esp+33h] [ebp-23h]
  char v46; // [esp+34h] [ebp-22h]
  char v47; // [esp+35h] [ebp-21h]
  int v48; // [esp+36h] [ebp-20h] BYREF
  int v50; // [esp+3Eh] [ebp-18h] BYREF
  int v51; // [esp+42h] [ebp-14h]
  int v52; // [esp+46h] [ebp-10h]
  int v53; // [esp+4Ah] [ebp-Ch] BYREF
  int v54; // [esp+4Eh] [ebp-8h]
  int v55; // [esp+52h] [ebp-4h]

  v2 = this->q00C; /*0x54ca99*/
  v50 = v2->q09C; /*0x54caa6*/
  v51 = v2->q280; /*0x54caad*/
  v52 = v2->q0A4; /*0x54cab4*/
  v3 = v2->q0A4; /*0x54caba*/
  v53 = v2->q09C; /*0x54cabd*/
  v4 = v2->u8_6AD; /*0x54cac4*/
  v54 = v2->q280; /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v52; /*0x54cad2*/
    this->u32_70 = 0; /*0x54cad8*/
    this->q078 = 0; /*0x54cadb*/
    v6 = v5 - this->u32_28; /*0x54cade*/
    this->q074 = 0; /*0x54cae1*/
    this->u32_7C = 0; /*0x54cae4*/
    v7 = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = this->u32_28 + 1.0; /*0x54caef*/
    v52 = v7; /*0x54caf5*/
    this->u32_28 = v8; /*0x54caf9*/
  }
  else
  {
    v52 = Math::RoundToInt((double)v52 - this->u32_28); /*0x54cb0a*/
    IDA_LOWORD(v48) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(&this->q0204), &v48) + 11520; /*0x54cb2a*/
    FacingClass::Update((char *)(&this->q0204), &v48); /*0x54cb39*/
  }
  v9 = dword_ABC5DC + Cell::GetGroundHeight(&v50); /*0x54cb5e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v50) + 80) & 0x100) == 0 || v3 < v9 || (v44 = 1, v52 >= v9) ) /*0x54cb7f*/
    v44 = 0; /*0x54cb81*/
  IDA_LOWORD(v48) = v50 / 256; /*0x54cba0*/
  IDA_HIWORD(v48) = v51 / 256; /*0x54cbb5*/
  if ( LayerClass::CoordinatesLegal(&MapClass_Instance, (__int16 *)&v48) ) /*0x54cbc2*/
  {
    RemoveTarget(this->q00C); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(&this->q0042) + 292))(this->q00C, 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(&this->q0042) + 436))(this->q00C, &v50); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(&this->q0042) + 292))(this->q00C, 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)(&this->q0042)); /*0x54cc0d*/
  }
  v45 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 456))(this->q00C) > 0 && !v44 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v10 = *(_BYTE **)(&this->q0042); /*0x54cc36*/
  if ( !v10[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v46 = 0; /*0x54cc4e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(v10->q048)(v10, &v53); /*0x54cc53*/
  IDA_LOWORD(v48) = *v11 / 256; /*0x54cc66*/
  IDA_HIWORD(v48) = v11[1] / 256; /*0x54cc7f*/
  v48 = v48; /*0x54cc8d*/
  v12 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v48) + 57); /*0x54cc96*/
  if ( v12 == *(_DWORD **)(&this->q0042) ) /*0x54cca1*/
    v12 = (_DWORD *)v12[12]; /*0x54cca3*/
  if ( v12 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v13 = (_DWORD *)v12[12]; /*0x54cce1*/
        v14 = (int *)(this->q00C + 156); /*0x54cce4*/
        v53 = *v14; /*0x54ccf0*/
        v54 = v14[1]; /*0x54ccf9*/
        v15 = *v12; /*0x54ccfd*/
        v55 = v14[2]; /*0x54cd02*/
        v16 = (*(int (__thiscall **)(_DWORD *))(v15 + 136))(v12); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v16 + 496), (int)&v53, 0); /*0x54cd14*/
        v17 = this->q00C; /*0x54cd19*/
        v18 = v17->u32_428; /*0x54cd1e*/
        if ( v18 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v12 + 224))(v12, v18); /*0x54cd2d*/
        }
        else
        {
          v19 = *v12; /*0x54cd3b*/
          if ( v17->q42C ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 228))(v12, v17->q42C); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 224))(v12, this->q00C); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 292))(v12, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 212))(v12); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x54cd6e*/
        v12 = v13; /*0x54cd76*/
      }
      while ( v13 ); /*0x54cd78*/
    }
    else
    {
      v20 = this->q00C; /*0x54cd80*/
      v21 = v20->u32_428; /*0x54cd83*/
      if ( v21 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cd94*/
          v12,
          v12 + 27,
          0,
          g_RulesClass_Instance->SilverCrate[6],
          v21,
          1,
          0,
          0);
      }
      else if ( v20->q42C ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cda3*/
          v12,
          v12 + 27,
          0,
          g_RulesClass_Instance->SilverCrate[6],
          v20,
          1,
          0,
          v20->q42C);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cdbd*/
          v12,
          v12 + 27,
          0,
          g_RulesClass_Instance->SilverCrate[6],
          v20,
          1,
          0,
          0);
      }
    }
  }
  v46 = 1; /*0x54cdc6*/
  v22 = (int *)(this->q00C + 156); /*0x54cdcb*/
  v53 = *v22; /*0x54cdd3*/
  v54 = v22[1]; /*0x54cddf*/
  v55 = v22[2]; /*0x54cde6*/
  v23 = Coord::To_Cell(&MapClass_Instance, &v53); /*0x54cdf4*/
  v24 = v23[59]; /*0x54cdf6*/
  if ( v24 != 2 || (v47 = 1, v44) ) /*0x54ce0c*/
    v47 = 0; /*0x54ce0e*/
  v25 = v24 == 6 && !v44; /*0x54ce24*/
  v26 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(&this->q0042) + 428))( /*0x54ce34*/
          this->q00C,
          v23,
          -1,
          -1,
          0,
          1);
  v27 = this->q00C; /*0x54ce3a*/
  v28 = v26; /*0x54ce3d*/
  if ( v27 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(v27->u32_2C)(v27) == 2
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1) )
  {
    v28 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 132))(this->q00C) + 3476) /*0x54ce9a*/
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1)
    || v28 )
  {
    if ( v47 && !v25 ) /*0x54ceae*/
    {
      *(_BYTE *)(this->q00C + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 928))(this->q00C); /*0x54cec3*/
      v29 = this->q00C; /*0x54cec9*/
      v30 = v29->u32_2D8; /*0x54cecc*/
      if ( v30 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v30, v29->u32_428, 0); /*0x54cedf*/
        v31 = this->q00C->u32_2D8; /*0x54cee7*/
        if ( v31 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1); /*0x54cef5*/
        this->q00C->u32_2D8 = 0; /*0x54cefb*/
      }
      v32 = *(_DWORD **)(&this->q0042); /*0x54cf05*/
      if ( v32[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 224))(v32, v32[266]); /*0x54cf15*/
      }
      else if ( v32[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 228))(v32, v32[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v33 = this->q00C; /*0x54cf3c*/
    if ( v33->u32_578 /*0x54cf75*/
      || v33->u32_57C != 1075052544 && (v33->u32_578 || v33->u32_57C != 1075576832)
      || v47 && !v25 )
    {
      v34 = this->q00C; /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(v34->u32_1BC)(v34) + 224) == v34 ) /*0x54cf8a*/
      {
        v35 = (_DWORD *)(*(int (__thiscall **)(int))(v34->u32_1BC)(v34); /*0x54cf92*/
        CellClass::AttachObject(v35, 0); /*0x54cf9a*/
      }
      v36 = this->q00C; /*0x54cf9f*/
      this->q050 = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(v36->q480)(v36, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
  LABEL_64:
  v45 = 1; /*0x54cfb7*/
  LABEL_65:
  v37 = this->q00C; /*0x54cfbc*/
  if ( v37 && (*(int (__thiscall **)(int))(v37->u32_1C8)(v37) > 0 ) /*0x54cfcf*/
  {
    if ( !v44 ) /*0x54cfd7*/
    {
      v38 = this->q00C; /*0x54cfd9*/
      if ( !v38->u8_6AD || v45 ) /*0x54cfec*/
      {
        v38->u32_428 = 0; /*0x54cfee*/
        this->q00C->q42C = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v44 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v46 ) /*0x54d00d*/
    this->q00C->q08C = 1; /*0x54d012*/
  LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 456))(this->q00C) <= 0 /*0x54d043*/
     || (IDA_LOBYTE(v39) = v44) != 0)
    && (!this->q00C->u8_6AD || (IDA_LOBYTE(v39) = v45) != 0) )
  {
    v40 = this->q00C; /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(v40->u32_1BC)(v40) + 224) == v40 ) /*0x54d058*/
    {
      v41 = (_DWORD *)(*(int (__thiscall **)(int))(v40->u32_1BC)(v40); /*0x54d05f*/
      CellClass::AttachObject(v41, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem(g_CellClassManager, this->q00C); /*0x54d075*/
    v42 = this->q00C; /*0x54d07a*/
    this->q078 = 0; /*0x54d07d*/
    this->q050 = 6; /*0x54d083*/
    this->u32_7C = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v42 + 8))(v42 + 8, 4476, 0); /*0x54d095*/
    v39 = this->q00C; /*0x54d097*/
    if ( v39 ) /*0x54d09c*/
    {
      v39->u32_428 = 0; /*0x54d09e*/
      v39 = this->q00C; /*0x54d0a4*/
      v39->q42C = 0; /*0x54d0a7*/
    }
  }
  return v39; /*0x54d0ad*/
}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
void* JumpjetLocomotion::UpdateFacing()
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  int v9; // edi
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // eax
  double v13; // st7
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int GroundHeight; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebp
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  int *v35; // eax
  double v36; // st7
  int v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ecx
  _BYTE *v44; // ecx
  int v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  double v49; // [esp+0h] [ebp-58h]
  int *v50; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v52; // [esp+19h] [ebp-3Fh]
  char v53; // [esp+1Ah] [ebp-3Eh]
  char v54; // [esp+1Ah] [ebp-3Eh]
  char v55; // [esp+1Bh] [ebp-3Dh]
  int v56; // [esp+1Ch] [ebp-3Ch] BYREF
  double v57; // [esp+20h] [ebp-38h]
  double v58; // [esp+28h] [ebp-30h] BYREF
  double v59; // [esp+30h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-20h]
  int v61; // [esp+40h] [ebp-18h]
  int v62; // [esp+44h] [ebp-14h]
  _DWORD v63[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 80); /*0x54d0ff*/
  if ( v2 == 2 || (v52 = 1, v2 == 3) ) /*0x54d10f*/
    v52 = 0; /*0x54d111*/
  v3 = *(_BYTE **)(this + 12); /*0x54d116*/
  v55 = v3[116]; /*0x54d11c*/
  if ( v52 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)(this + 120) > *(double *)(this + 112) ) /*0x54d143*/
  {
    v4 = *(float *)(this + 48) + *(double *)(this + 112); /*0x54d148*/
    *(double *)(this + 112) = v4; /*0x54d14b*/
    v58 = (double)*(int *)(this + 32); /*0x54d151*/
    if ( v4 >= v58 ) /*0x54d15e*/
      v4 = v58; /*0x54d162*/
    *(double *)(this + 112) = v4; /*0x54d166*/
  }
  if ( *(double *)(this + 120) < *(double *)(this + 112) ) /*0x54d174*/
  {
    v5 = *(double *)(this + 112) - *(float *)(this + 48) * 1.5; /*0x54d17f*/
    *(double *)(this + 112) = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)(this + 112) = v5; /*0x54d19a*/
  }
  v49 = *(double *)(this + 112) / (double)*(int *)(this + 32); /*0x54d1ab*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x54d1ae*/
    *(_DWORD *)(this + 12),
    IDA_LODWORD(v49),
    IDA_HIDWORD(v49));
  v9 = *(_DWORD *)(this + 64) / 256; /*0x54d1da*/
  v10 = *(_DWORD *)(this + 68) / 256; /*0x54d1dd*/
  v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d1e0*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v11 != (_WORD)v9 || (v53 = 1, v11[1] != (_WORD)v10) ) /*0x54d1f4*/
    v53 = 0; /*0x54d1f6*/
  v12 = *(_DWORD *)(this + 80); /*0x54d1fb*/
  if ( (v12 == 2 || v12 == 3) && !*(_BYTE *)(this + 60) ) /*0x54d208*/
  {
    *(double *)(this + 136) = 6.283185307179586 / (15.0 / *(float *)(this + 52)) + *(double *)(this + 136); /*0x54d224*/
  }
  else
  {
    *(_DWORD *)(this + 136) = 0; /*0x54d22e*/
    *(_DWORD *)(this + 140) = 0; /*0x54d234*/
  }
  v13 = Math::SinCos(*(double *)(this + 136)); /*0x54d248*/
  v14 = Math::RoundToInt(v13 * (double)*(int *)(this + 56) + (double)*(int *)(this + 128)); /*0x54d259*/
  v15 = *(_DWORD *)(this + 12); /*0x54d25e*/
  IDA_LODWORD(v57) = v14; /*0x54d261*/
  v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 464))(v15, IDA_HIDWORD(v14)); /*0x54d270*/
  v17 = *(_DWORD *)(this + 12) + 156; /*0x54d272*/
  v56 = v16; /*0x54d278*/
  v59 = *(double *)v17; /*0x54d27e*/
  v60 = *(_DWORD *)(v17 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v59); /*0x54d29f*/
  v19 = *(_DWORD *)(this + 12) + 156; /*0x54d2a4*/
  v59 = *(double *)v19; /*0x54d2ab*/
  v60 = *(_DWORD *)(v19 + 8); /*0x54d2c3*/
  if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v59) + 80) & 0x100) != 0 ) /*0x54d2d5*/
  {
    v20 = *(_DWORD *)(this + 12) + 156; /*0x54d2da*/
    v59 = *(double *)v20; /*0x54d2e2*/
    v21 = *(_DWORD *)(v20 + 8); /*0x54d2f5*/
    IDA_LODWORD(v58) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v60 = v21; /*0x54d2fc*/
    if ( (double)SLODWORD(v58) - *(float *)(this + 40) <= (double)v21 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v22 = *(_DWORD *)(this + 80); /*0x54d31a*/
  if ( v22 == 4 /*0x54d339*/
    || !v22
    || v53
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
  {
    v23 = v16 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v23 = v16 - JumpjetLocomotionClass::GetFloorZSetContext(this); /*0x54d34c*/
  }
  IDA_LODWORD(v58) = v23; /*0x54d358*/
  v54 = 0; /*0x54d35e*/
  if ( v23 < SLODWORD(v57) ) /*0x54d363*/
  {
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54d377*/
    v25 = *(_DWORD *)(this + 12) + 156; /*0x54d379*/
    v59 = *(double *)v25; /*0x54d381*/
    v60 = *(_DWORD *)(v25 + 8); /*0x54d394*/
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, &v59) + 80) & 0x100) != 0 ) /*0x54d3ab*/
    {
      v26 = *(_DWORD *)(this + 12); /*0x54d3ad*/
      if ( !*(_BYTE *)(v26 + 140) ) /*0x54d3b0*/
      {
        v27 = (int *)(v26 + 156); /*0x54d3ba*/
        v61 = *v27; /*0x54d3c3*/
        v62 = v27[1]; /*0x54d3ca*/
        v28 = v27[2]; /*0x54d3ce*/
        v59 = *(double *)v27; /*0x54d3d3*/
        v60 = v27[2]; /*0x54d3eb*/
        if ( v28 >= dword_ABC5DC + Cell::GetGroundHeight(&v59) ) /*0x54d3ff*/
          v24 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v24 ) /*0x54d405*/
    {
      v29 = *(_DWORD *)(this + 12); /*0x54d407*/
      v59 = *(double *)(v29 + 156); /*0x54d416*/
      v60 = *(_DWORD *)(v29 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v29 + 244))(v29, &v59); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x54d438*/
    }
    if ( (double)SLODWORD(v57) >= (double)SLODWORD(v58) + *(float *)(this + 36) ) /*0x54d451*/
      v56 = Math::RoundToInt((double)v56 + *(float *)(this + 36)); /*0x54d471*/
    else
      v56 += IDA_LODWORD(v57) - v23; /*0x54d45f*/
  LABEL_49:
    v54 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v23 > SLODWORD(v57) )
  {
    if ( (double)SLODWORD(v57) <= (double)SLODWORD(v58) - *(float *)(this + 36) ) /*0x54d48b*/
    {
      v56 = Math::RoundToInt((double)v56 - *(float *)(this + 36)); /*0x54d4a3*/
      v30 = v56; /*0x54d4a7*/
    }
    else
    {
      v30 = IDA_LODWORD(v57) - v23 + v16; /*0x54d48f*/
      v56 = v30; /*0x54d491*/
    }
    if ( v30 <= GroundHeight ) /*0x54d4ab*/
      v56 = GroundHeight; /*0x54d4ad*/
    v23 = v23 <= 0 ? 0 : v23;
    goto LABEL_49; /*0x54d4b9*/
  }
  LABEL_50:
  v31 = *(_DWORD *)(this + 64) / 256; /*0x54d4c0*/
  v32 = *(_DWORD *)(this + 68) / 256; /*0x54d4e9*/
  v33 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d4ec*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v33 != (_WORD)v31 || v33[1] != (_WORD)v32 ) /*0x54d4fb*/
  {
    v34 = IDA_LODWORD(v57); /*0x54d4fd*/
    if ( v23 < SLODWORD(v57) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d50e*/
      *(_DWORD *)(this + 116) = 0; /*0x54d511*/
    }
    if ( v23 < v34 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d527*/
      *(_DWORD *)(this + 116) = 0; /*0x54d52a*/
    }
  }
  if ( v54 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(_DWORD **)(this + 12), v56); /*0x54d541*/
    if ( v52 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54d554*/
  }
  v35 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54d55d*/
  v36 = *(double *)(this + 112); /*0x54d562*/
  v61 = *v35; /*0x54d567*/
  v62 = v35[1]; /*0x54d56e*/
  v37 = v35[2]; /*0x54d572*/
  IDA_LODWORD(v57) = Math::RoundToInt(v36); /*0x54d57a*/
  v58 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(this + 84), &v56) - 0x3FFF) * -0.00009587672516830327; /*0x54d5a2*/
  v38 = IDA_HIDWORD(v58); /*0x54d5aa*/
  v39 = IDA_LODWORD(v58); /*0x54d5ae*/
  v57 = (double)SLODWORD(v57); /*0x54d5b4*/
  v59 = (double)v62; /*0x54d5bc*/
  v40 = Math::SinCos(v58); /*0x54d5c0*/
  IDA_LODWORD(v58) = Math::RoundToInt(v59 - v40 * v57); /*0x54d5d4*/
  v41 = Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v38, v39))); /*0x54d5d8*/
  v42 = Math::RoundToInt(v41 * v57 + (double)v61); /*0x54d5e8*/
  v43 = *(_DWORD *)(this + 12); /*0x54d5f1*/
  v63[1] = IDA_LODWORD(v58); /*0x54d5f4*/
  v63[0] = v42; /*0x54d5f8*/
  v63[2] = v37; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v43 + 436))(v43, v63); /*0x54d607*/
  v44 = *(_BYTE **)(this + 12); /*0x54d60d*/
  if ( !v44[1709] )
  {
    if ( v44
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v44 + 44))(v44) == 15
      && ((v45 = *(_DWORD *)(this + 12)) != 0
        ? (v46 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v45 + 44))(*(_DWORD *)(this + 12)) == 15 ? v45 : 0)
        : (v46 = 0),
          *(_BYTE *)(*(_DWORD *)(v46 + 1728) + 3787)
       && *(_DWORD *)(this + 80) == 2
       && (v47 = *(int **)(this + 12), v47[173])) )
    {
      v50 = ObjectClass::CalcTargetFacing(v47, (int *)&v58, v47[173]); /*0x54d675*/
      FacingClass::Set_SyncLog(v50); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v58); /*0x54d68b*/
      FacingClass::Set_SyncLog(Value); /*0x54d692*/
    }
  }
  if ( v52 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54d6a6*/
  result = *(_DWORD *)(this + 12); /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v55; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}
}