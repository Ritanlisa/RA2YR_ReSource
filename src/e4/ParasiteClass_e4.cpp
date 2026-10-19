// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Coord3D_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Vector3_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingPlacement_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Triple_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Matrix3x3_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"

// 0x629210
namespace gamemd {  // G42.18 ns repair
int ParasiteClass::Constructor(void *a1, void *a2, void *a3, void *a4)
{


  ((AbstractClass *)this)->Constructor(); /*0x629213*/
  *&this->creationFrame = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  int v2; // ecx
  v2 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->ParasiteClass_field_38 = v2; /*0x62922e*/
  /* X11: vtable install elided (base-interface slot, RHS vt_ParasiteClass) */  /*0x629231*/
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x629237) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62923e) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x629245) */
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    int v3; // eax
    v3 = dword_AC4920++; /*0x62928b*/
    *((unsigned int *)dword_AC4914 + v3) = this; /*0x62929a*/
  }
  return (int)this; /*0x62929f*/

}
} // namespace ra2

// 0x6292B0
namespace gamemd {
ParasiteClass::ParasiteClass(TechnoClass * aP1)
{

  AbstractClass::Constructor(); /*0x6292b6*/
  this->creationFrame = dword_A8ED84; /*0x6292c4*/
  this->ParasiteClass_field_34 = 0; /*0x6292c9*/
  this->ParasiteClass_field_38 = dword_A8ED84; /*0x6292d2*/
  this->ParasiteClass_field_40 = 0; /*0x6292d5*/
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x6292d8) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x6292de) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x6292e5) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x6292ec) */
  this->creationFrame = aP1; /*0x6292f3*/
  this->__pad_028 = 0; /*0x6292f6*/
  this->ParasiteClass_field_38 = dword_A8ED84; /*0x629303*/
  int v6; // [esp+8h] [ebp-8h]
  this->ParasiteClass_field_3C = v6; /*0x62930a*/
  this->ParasiteClass_field_40 = 0; /*0x62930d*/
  dword_A8ED84 = dword_A8ED84; /*0x629310*/
  this->u32_54 = 0; /*0x629316*/
  this->creationFrame = dword_A8ED84; /*0x629319*/
  this->ParasiteClass_field_30 = v6; /*0x62931c*/
  this->ParasiteClass_field_34 = 0; /*0x62931f*/
  this->IsAllocated = 0; /*0x629322*/
  this->abstractFlags = 0; /*0x629325*/
  this->u32_44 = 0; /*0x629328*/
  this->u32_48 = 0; /*0x62932b*/
  if ( dword_AC4920 < dword_AC4918 /*0x629360*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    int v4; // eax
    v4 = dword_AC4920++; /*0x62936d*/
    *((unsigned int *)dword_AC4914 + v4) = (unsigned int)(this); /*0x62937c*/
  }
  return this; /*0x629381*/
}
} // namespace ra2

// 0x6294D0
namespace gamemd {
int ParasiteClass::Attach(int * a2)
{

  int v3; // eax
  int v4; // eax
  unsigned __int8 *v5; // edx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6294d9*/
  v3 = this->u32_44; /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(this->u32_48); /*0x6294fd*/
  Power::TimerProcess(this->q04C); /*0x629508*/
  Power::TimerProcess(this->u32_50); /*0x629513*/
  LOBYTE(v5) = this->u32_54; /*0x629518*/
  return Power::FlagProcess((Power *)a2, (int)v5); /*0x629523*/

}
} // namespace ra2

// 0x6297F0
namespace gamemd {
void ParasiteClass::DeploySquad()
{

  double v1; // st7
  unsigned int *v3; // eax
  int *v4; // ecx
  unsigned int *v5; // edi
  Cell *v6; // eax
  int creationFrame; // esi
  int v8; // edx
  unsigned int *v9; // esi
  unsigned int v10; // ecx
  unsigned int *v11; // edx
  int Index; // eax
  void *v13; // edi
  AnimClass *v14; // eax
  void **v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v20; // ebx
  unsigned __int16 *v21; // eax
  unsigned __int16 *v22; // edi
  int v23; // eax
  AnimClass *v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  unsigned char *v30; // edi
  int v31; // eax
  int ptr_0; // ecx
  int v33; // eax
  unsigned int *v34; // edx
  int v35; // ecx
  int v36; // eax
  BuildingClass *v37; // edi
  int v38; // ecx
  int v39; // ebp
  int v40; // ecx
  int v41; // eax
  int v42; // [esp-4h] [ebp-6Ch]
  BuildingClass *v43; // [esp+0h] [ebp-68h]
  __int64 v44; // [esp+10h] [ebp-58h]
  int v45; // [esp+10h] [ebp-58h]
  double v46; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  unsigned int v48[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v49; // [esp+28h] [ebp-40h] BYREF
  int v50; // [esp+2Ch] [ebp-3Ch] BYREF
  __int64 v51; // [esp+30h] [ebp-38h]
  int v55; // [esp+50h] [ebp-18h] BYREF
  int v56; // [esp+54h] [ebp-14h]
  int v57; // [esp+58h] [ebp-10h]
  int v58; // [esp+5Ch] [ebp-Ch] BYREF
  int v59; // [esp+60h] [ebp-8h]
  int v60; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  _ESI = this; /*0x6297fc*/
  v3 = (unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)this->creationFrame + 1016))(this->creationFrame, 0); /*0x629807*/
  v4 = *(int **)_ESI->__pad_28; /*0x62980d*/
  v48[1] = *v3; /*0x629812*/
  v5 = *(unsigned int **)(v48[1] + 172); /*0x629816*/
  v48[0] = v5; /*0x629822*/
  v55 = v4->q09C; /*0x629828*/
  v56 = v4[40]; /*0x62982f*/
  v57 = v4[41]; /*0x629836*/
  v6 = (Cell *)v4->GetCellCoords(); /*0x62983c*/
  v44 = 0x3FF0000000000000LL; /*0x629844*/
  if ( !v6 || (unsigned __int8)Cell::IsValidHeight(v6) ) /*0x629854*/
  {
    v10 = v5[92]; /*0x629898*/
    v11 = (unsigned int *)(*(unsigned int *)_ESI->__pad_28 + 1696); /*0x62989e*/
    *v11 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6298a4*/
    v11[1] = v59; /*0x6298aa*/
    v11[2] = v10; /*0x6298ad*/
    switch ( _ESI[1].ptr_4 ) /*0x6298bc*/
    {
      case 0: /*0x6298bc*/
        *(unsigned int *)(*(unsigned int *)_ESI->__pad_28 + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(&stru_83665C); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v13 = (void *)*((unsigned int *)dword_8B4154 + Index); /*0x6298e5*/
          if ( v13 ) /*0x6298ea*/
          {
            v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6298f5*/
            if ( v14 ) /*0x6298ff*/
            {
              v15 = AnimClass::ctor(v14, v13, &v55, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v15 ) /*0x62991a*/
              {
                _ESI[1].ptr_0 = (int)v15; /*0x62991c*/
                if ( stru_B0F5B8.Count < stru_B0F5B8.Capacity /*0x629953*/
                  || (stru_B0F5B8.IsAllocated[0] || !stru_B0F5B8.Capacity)
                  && stru_B0F5B8.CapacityIncrement > 0
                  && (*(unsigned __int8 (**)(DynamicVectorClass *, int, unsigned int))(stru_B0F5B8.ptr_0 + 8))(
                       &stru_B0F5B8,
                       stru_B0F5B8.CapacityIncrement + stru_B0F5B8.Capacity,
                       0) )
                {
                  v16 = stru_B0F5B8.Count++; /*0x629960*/
                  *(unsigned int *)(stru_B0F5B8.Items + 4 * v16) = _ESI; /*0x62996f*/
                }
              }
            }
          }
        }
        _ESI[1].ptr_4 = 1; /*0x629974*/
        _ESI[1].ptr_C = 0; /*0x62997b*/
        _ESI[1].ptr_8 = 0; /*0x62997e*/
        BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1: /*0x6298bc*/
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x62998d*/
        {
          v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6299a9*/
          _ESI[1].ptr_C = 0; /*0x6299b7*/
          _ESI[1].ptr_4 = 3 - (v17 != 0); /*0x6299ba*/
          _ESI[1].ptr_8 = 0; /*0x6299bd*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x6299c0*/
          FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2: /*0x6298bc*/
        v44 = 0xBFF0000000000000uLL; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3: /*0x6298bc*/
LABEL_20:
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x6299fd*/
        {
          _ESI[1].ptr_4 = 4; /*0x629a08*/
          _ESI[1].ptr_C = 0; /*0x629a0f*/
          _ESI[1].ptr_8 = 0; /*0x629a12*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629a15*/
        }
        __asm /*0x629a1a*/
        {
          fild dword ptr [esi+4Ch]
          fmul qword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E8AF0
          fstp qword ptr [esp+68h+var_4C+4]
        }
        Math::SinCos(*(double *)&v48[1]); /*0x629a35*/
        __asm { fmul ds:flt_7EF8F8 } /*0x629a3a*/
        v18 = *(unsigned int *)_ESI->__pad_28; /*0x629a40*/
        __asm { fstp dword ptr [ecx+328h] } /*0x629a46*/
        v18->q328 = _ET1; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4: /*0x6298bc*/
        *(unsigned int *)(*(unsigned int *)_ESI->__pad_28 + 808) = 0; /*0x629a59*/
        v20 = dword_8871E0->Normal[13]; /*0x629a67*/
        v45 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(*(unsigned int *)_ESI->__pad_28 + 904), &v50) - 0x3FFF; /*0x629a81*/
        __asm /*0x629a85*/
        {
          fild dword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E2810
          fchs
          fstp qword ptr [esp+68h+var_5C+4]
        }
        Math::ArcTan2(v46); /*0x629a9f*/
        __asm { fstp [esp+70h+var_24+4] } /*0x629aa4*/
        Math::SinCos(v46); /*0x629aaa*/
        __asm { fstp [esp+78h+var_2C+4] } /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          __asm { fild dword ptr [esp+68h+var_5C+4] } /*0x629abc*/
          v51 = 0x4050000000000000LL; /*0x629ac8*/
          __asm { fmul ds:dbl_7E2808 } /*0x629ad0*/
          __asm
          {
            fsub ds:dbl_7E2808
            fstp [esp+70h+var_34+4]
          }
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x629aee*/
            __asm { fld ds:dbl_7EF8F0 } /*0x629af7*/
          else
            __asm { fld qword ptr [esp+68h+var_3C+4] } /*0x629aff*/
          __asm /*0x629b03*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_24+4]
            fld st(1)
            fmul [esp+68h+var_2C+4]
            fsubp st(1), st
          }
          LOWORD(v21) = Math::RoundToInt(v1); /*0x629b13*/
          __asm /*0x629b18*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_2C+4]
            fxch st(1)
            fmul [esp+68h+var_24+4]
          }
          v22 = v21; /*0x629b26*/
          __asm { faddp st(1), st } /*0x629b28*/
          (v23) = ((v23) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x629b2a*/
          v58 = (int)v22 + v55; /*0x629b44*/
          v59 = v56 + v23; /*0x629b48*/
          v60 = v57; /*0x629b4c*/
          v24 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x629b55*/
          if ( v24 ) /*0x629b5c*/
          {
            v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v24,
              *(void **)(dword_8871E0->Normal[10] + 4 * v25),
              &v58,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(unsigned char *)(v48[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28)
           || BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28) == 1
           && (unsigned __int8)Audio::IsLoud((int *)(_ESI->creationFrame + 336))) )
        {
          if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)_ESI->creationFrame + 132))(_ESI->creationFrame) + 3214) ) /*0x629bfe*/
          {
            v26 = (*(int (**)(unsigned int))(**(unsigned int **)_ESI->__pad_28 + 132))(*(unsigned int *)_ESI->__pad_28); /*0x629c16*/
            v27 = (*(int (**)(int))(*(unsigned int *)_ESI->creationFrame + 132))(_ESI->creationFrame); /*0x629c23*/
            v42 = *(unsigned int *)(*(unsigned int *)_ESI->__pad_28 + 540); /*0x629c2f*/
            v28 = (*(int (**)(int))(*(unsigned int *)v26 + 132))(v26); /*0x629c30*/
            v29 = (*(int (**)(int, unsigned int, int))(*(unsigned int *)v27 + 132))( /*0x629c46*/
                    v27,
                    *(unsigned int *)(_ESI->creationFrame + 540),
                    v28);
            HouseClass::AccumulateScore((int *)(_ESI->creationFrame + 336), v29, v42); /*0x629c56*/
          }
          v30 = *(unsigned char **)_ESI->__pad_28; /*0x629c5d*/
          BuildingClass::Deploy(v43, 0, (int)v30); /*0x629c62*/
          v31 = *(unsigned int *)v30; /*0x629c67*/
          v30->u8_3CD = 1; /*0x629c69*/
          (*(void (**)(unsigned char *, int))(v31 + 952))(v30, _ESI->creationFrame); /*0x629c76*/
          (*(void (**)(unsigned char *))(*(unsigned int *)v30 + 928))(v30); /*0x629c80*/
          ptr_0 = _ESI[1].ptr_0; /*0x629c86*/
          _ESI[1].ptr_8 = 0; /*0x629c89*/
          _ESI[1].ptr_C = 0; /*0x629c8e*/
          _ESI[1].ptr_4 = 0; /*0x629c91*/
          if ( ptr_0 ) /*0x629c94*/
          {
            (*(void (**)(int))(*(unsigned int *)ptr_0 + 248))(ptr_0); /*0x629c98*/
            _ESI[1].ptr_0 = 0; /*0x629c9e*/
          }
          if ( LOBYTE(_ESI[1].uniqueId) ) /*0x629ca1*/
          {
            v48[0] = _ESI; /*0x629cb8*/
            v33 = (*(int (**)(DynamicVectorClass *, unsigned int *))(stru_B0F5B8.ptr_0 + 16))(&stru_B0F5B8, v48); /*0x629cbc*/
            if ( v33 != -1 && v33 < stru_B0F5B8.Count ) /*0x629ccc*/
            {
              --stru_B0F5B8.Count; /*0x629cd1*/
              for ( ; /*0x629cd7*/
                    v33 < stru_B0F5B8.Count;
                    *(unsigned int *)(stru_B0F5B8.Items + 4 * v33 - 4) = *(unsigned int *)(stru_B0F5B8.Items + 4 * v33) )
              {
                ++v33; /*0x629cdf*/
              }
            }
            LOBYTE(_ESI[1].uniqueId) = 0; /*0x629cf1*/
          }
          v34 = (unsigned int *)(_ESI->creationFrame + 1696); /*0x629cff*/
          *v34 = *(unsigned int *)&stru_A8E960.random[528]; /*0x629d05*/
          v34[1] = v59; /*0x629d0b*/
          v34[2] = 0; /*0x629d0e*/
        }
        else
        {
          v35 = *(unsigned int *)_ESI->__pad_28; /*0x629d27*/
          v49 = *(unsigned int *)(v48[1] + 164); /*0x629d2a*/
          (*(void (**)(int, int *, unsigned int, unsigned int, int, unsigned int, int, unsigned int))(*(unsigned int *)v35 + 364))( /*0x629d3b*/
            v35,
            &v49,
            0,
            v48[0],
            _ESI->creationFrame,
            0,
            1,
            0);
          if ( *(unsigned int *)_ESI->__pad_28 ) /*0x629d41*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x629d58*/
            _ESI[1].ptr_C = 0; /*0x629d66*/
            _ESI[1].ptr_4 = 3 - (v36 != 0); /*0x629d69*/
            _ESI[1].ptr_8 = 0; /*0x629d6c*/
            BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629d6f*/
            FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x629d90*/
          }
          else
          {
            v40 = _ESI[1].ptr_0; /*0x629df3*/
            _ESI[1].ptr_8 = 0; /*0x629df6*/
            _ESI[1].ptr_C = 0; /*0x629dfb*/
            _ESI[1].ptr_4 = 0; /*0x629dfe*/
            if ( v40 ) /*0x629e01*/
            {
              (*(void (**)(int))(*(unsigned int *)v40 + 248))(v40); /*0x629e05*/
              _ESI[1].ptr_0 = 0; /*0x629e0b*/
            }
            if ( LOBYTE(_ESI[1].uniqueId) ) /*0x629e0e*/
            {
              v48[1] = _ESI; /*0x629e25*/
              v41 = (*(int (**)(DynamicVectorClass *, unsigned int *))(stru_B0F5B8.ptr_0 + 16))( /*0x629e29*/
                      &stru_B0F5B8,
                      &v48[1]);
              if ( v41 != -1 && v41 < stru_B0F5B8.Count ) /*0x629e39*/
              {
                --stru_B0F5B8.Count; /*0x629e3e*/
                for ( ; /*0x629e44*/
                      v41 < stru_B0F5B8.Count;
                      *(unsigned int *)(stru_B0F5B8.Items + 4 * v41 - 4) = *(unsigned int *)(stru_B0F5B8.Items + 4 * v41) )
                {
                  ++v41; /*0x629e4c*/
                }
              }
              LOBYTE(_ESI[1].uniqueId) = 0; /*0x629e5e*/
            }
          }
LABEL_47:
          v37 = _ESI->vtable2.ptr_0; /*0x629d97*/
          if ( v37 ) /*0x629d9c*/
          {
            if ( _ESI->creationFrame ) /*0x629d9e*/
            {
              v38 = *(unsigned int *)_ESI->__pad_28; /*0x629da3*/
              if ( v38 ) /*0x629da8*/
              {
                v39 = (*(int (**)(int))(*(unsigned int *)v38 + 444))(v38); /*0x629db8*/
                if ( *(unsigned int *)_ESI->__pad_28 != v37->missionTimer[1] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v37, *(unsigned char **)_ESI->__pad_28); /*0x629dc4*/
                  v37->lastCommands[0] = (*(int (**)(int))(*(unsigned int *)_ESI->creationFrame + 484))(_ESI->creationFrame); /*0x629dd6*/
                  if ( v39 ) /*0x629ddc*/
                    v37->animation[1] = *(__int16 *)(v39 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy(v43, (int)&savedregs, (int)v5); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy(v43, (int)&savedregs, (int)v5); /*0x62985f*/
    creationFrame = _ESI->creationFrame; /*0x629864*/
    if ( creationFrame ) /*0x629869*/
    {
      v8 = v59; /*0x629874*/
      v9 = (unsigned int *)(creationFrame + 1696); /*0x62987a*/
      *v9 = *(unsigned int *)&stru_A8E960.random[528]; /*0x629880*/
      v9[1] = v8; /*0x629882*/
      v9[2] = 0; /*0x629885*/
    }
  }

}
} // namespace ra2

// 0x629FD0
namespace gamemd {
void ParasiteClass::TickDamage()
{

  double v1; // st6
  double v2; // st7
  unsigned int **v4; // eax
  int *v5; // ecx
  unsigned int *v6; // edi
  unsigned int *v7; // ebp
  int ParasiteClass_field_40; // eax
  int ParasiteClass_field_38; // edx
  int v10; // eax
  unsigned int v11; // edx
  unsigned int *v12; // ecx
  unsigned int *v13; // ecx
  int *v14; // eax
  unsigned int v15; // ebx
  void *v16; // ebp
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // ebx
  double v20; // st6
  int v21; // eax
  double v22; // st7
  int v23; // eax
  int v24; // ecx
  int creationFrame; // eax
  unsigned int v26[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v27; // [esp+1Ch] [ebp-30h] BYREF
  unsigned int *v28; // [esp+20h] [ebp-2Ch]
  double v29; // [esp+24h] [ebp-28h]
  double v30; // [esp+2Ch] [ebp-20h]
  int v31; // [esp+34h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-14h]
  int v33; // [esp+3Ch] [ebp-10h]
  int v34; // [esp+40h] [ebp-Ch] BYREF
  int v35; // [esp+44h] [ebp-8h]
  int v36; // [esp+48h] [ebp-4h]

  if ( !*(unsigned int *)this->__pad_28 ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3278) /*0x62a004*/
    && *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(this); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v4 = (unsigned int **)(*(int (**)(int, unsigned int))(*(unsigned int *)this->creationFrame + 1016))( /*0x62a024*/
                          this->creationFrame,
                          0);
  v5 = *(int **)this->__pad_28; /*0x62a02a*/
  v6 = *v4; /*0x62a02d*/
  v7 = (unsigned int *)(*v4)[43]; /*0x62a02f*/
  v28 = v7; /*0x62a03b*/
  v31 = v5[39]; /*0x62a041*/
  v32 = v5[40]; /*0x62a048*/
  ParasiteClass_field_40 = this->ParasiteClass_field_40; /*0x62a04c*/
  v33 = v5[41]; /*0x62a052*/
  ParasiteClass_field_38 = this->ParasiteClass_field_38; /*0x62a056*/
  if ( ParasiteClass_field_38 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( *(unsigned int *)&stru_A8E960.random[528] - ParasiteClass_field_38 < ParasiteClass_field_40 ) /*0x62a068*/
  {
    ParasiteClass_field_40 -= *(unsigned int *)&stru_A8E960.random[528] - ParasiteClass_field_38; /*0x62a06a*/
LABEL_8:
    if ( ParasiteClass_field_40 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v10 = v6[44]; /*0x62a074*/
  this->ParasiteClass_field_38 = *(unsigned int *)&stru_A8E960.random[528]; /*0x62a080*/
  this->ParasiteClass_field_3C = v35; /*0x62a087*/
  this->ParasiteClass_field_40 = v10; /*0x62a08a*/
  v11 = v7[92]; /*0x62a092*/
  v12 = v5 + 424; /*0x62a098*/
  *v12 = *(unsigned int *)&stru_A8E960.random[528]; /*0x62a09e*/
  v12[1] = v35; /*0x62a0a4*/
  v12[2] = v11; /*0x62a0a7*/
  if ( (*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 44))(*(unsigned int *)this->__pad_28) == 15 ) /*0x62a0b5*/
  {
    v13 = *(unsigned int **)this->__pad_28; /*0x62a0b7*/
    v26[0] = v13[27]; /*0x62a0c3*/
    (*(void (**)(unsigned int *, unsigned int, unsigned int *, int, int, int, unsigned int, double, double))(*v13 + 364))( /*0x62a0ce*/
      v26,
      0,
      v7,
      this->creationFrame,
      1,
      1,
      0,
      v2,
      v1);
  }
  else
  {
    v14 = (int *)__2_YAPAXI_Z(0x100u); /*0x62a0d8*/
    if ( v14 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor(v14, *&dword_8871E0->u32_1020, &v31, 0, 0, &dword_AC4948, 0); /*0x62a103*/
    v15 = *ProgressTimer::GetValue((ProgressTimer *)(*(unsigned int *)this->__pad_28 + 904), &v27); /*0x62a11b*/
    if ( v6[65] ) /*0x62a11d*/
    {
      v16 = *(void **)(v6[62] + 4 * ((((v15 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v16 ) /*0x62a13d*/
      {
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x62a144*/
        if ( v17 ) /*0x62a14e*/
          AnimClass::ctor(v17, v16, &v31, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v18 = -(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) != 0); /*0x62a189*/
    v26[1] = (__int16)(v15 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    (v18) = ((v18) & ~0xFF) | ((v18 & 0xFC) & 0xFF); /*0x62a195*/
    v19 = v33; /*0x62a19e*/
    v27 = v18 + 2; /*0x62a1a2*/
    *(double *)&v26[1] = (double)v26[1] * -0.00009587672516830327; /*0x62a1ac*/
    v30 = (double)v32; /*0x62a1be*/
    v29 = (double)(v18 + 2); /*0x62a1c6*/
    Math::SinCos(*(double *)&v26[1]); /*0x62a1ca*/
    v20 = v30 - v1 * v29; /*0x62a1d3*/
    (v21) = ((v21) & ~0xFFFF) | ((Math::RoundToInt(v2)) & 0xFFFF); /*0x62a1d7*/
    v27 = v21; /*0x62a1dc*/
    Math::ArcTan2(*(double *)&v26[1]); /*0x62a1e6*/
    v22 = v2 * v29 + (double)v31; /*0x62a1f2*/
    (v23) = ((v23) & ~0xFFFF) | ((Math::RoundToInt(v22)) & 0xFFFF); /*0x62a1f6*/
    v34 = v23; /*0x62a1ff*/
    v35 = v27; /*0x62a203*/
    v24 = *(unsigned int *)this->__pad_28; /*0x62a207*/
    v36 = v19; /*0x62a20a*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v24 + 984))(v24, &v34, 1069547520, 0); /*0x62a21c*/
    creationFrame = this->creationFrame; /*0x62a228*/
    v26[0] = v6[41]; /*0x62a22f*/
    (*(void (**)(unsigned int *, unsigned int, unsigned int *, int, unsigned int, int, unsigned int, double, double))(**(unsigned int **)this->__pad_28 + 364))( /*0x62a247*/
      v26,
      0,
      v28,
      creationFrame,
      0,
      1,
      0,
      v22,
      v20);
  }

}
} // namespace ra2

// 0x62A980
namespace gamemd {
AbstractClass * * ParasiteClass::TryInfect(unsigned int * a2)
{

  int result; // eax
  int v17; // [esp+28h] [ebp-4h]

  int v3 = this->u32_44; // ecx /*0x62a98b*/
  this->q04C = 0; /*0x62a98e*/
  this->u32_50 = 0; /*0x62a993*/
  this->u32_48 = 0; /*0x62a996*/
  if ( v3 ) /*0x62a999*/
  {
    (*(void (**)(int))(*(unsigned int *)v3 + 248))(v3); /*0x62a99d*/
    this->u32_44 = 0; /*0x62a9a3*/
  }
  if ( this->u32_54 ) /*0x62a9a6*/
  {
    int v14; // [esp+1Ch] [ebp-10h] BYREF
    v14 = this; /*0x62a9bd*/
    int v4; // eax
    v4 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem((DynamicVector *)stru_B0F5B8, v4); /*0x62a9cf*/
    this->u32_54 = 0; /*0x62a9d4*/
  }
  this->ParasiteClass_field_38 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x62a9e6*/
  int v16; // [esp+24h] [ebp-8h]
  this->ParasiteClass_field_3C = v16; /*0x62a9ed*/
  this->ParasiteClass_field_40 = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((ParasiteClass *)this, a2) ) /*0x62a9f5*/
  {
    unsigned int *v12; // edi
    v12 = (unsigned int *)(this->creationFrame + 1652); /*0x62aae2*/
    int v13; // ebx
    v13 = a2[39]; /*0x62aae8*/
    v16 = a2[40]; /*0x62aaed*/
    v17 = a2[41]; /*0x62aaf4*/
    if ( !*v12 ) /*0x62aaf8*/
      sub_7DC720(-2147467261); /*0x62ab03*/
    result = (*(int (**)(unsigned int, int, int, int, int))(*(unsigned int *)*v12 + 112))(*v12, -1, v13, v16, v17); /*0x62ab24*/
    a2->q694 = this->creationFrame; /*0x62ab2b*/
    this->__pad_028 = a2; /*0x62ab31*/
  }
  else
  {
    void *v5; // eax
    v5 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, (__int16 *)(this->creationFrame + 1372)); /*0x62aa11*/
    int v6 = **&this->creationFrame; // ebx /*0x62aa1f*/
    int v7; // eax
    int v15; // [esp+20h] [ebp-Ch] BYREF
    v7 = (*(int (**)(void *, int *, unsigned int))(*(unsigned int *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    char v8; // al
    v8 = (*(int (**)(unsigned int, int))(v6 + 216))(this->creationFrame, v7); /*0x62aa2c*/
    int v9 = this->creationFrame; // ecx /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      int *v11 = *&this->creationFrame; // eax /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2((MapClass *)&DataGlobal_87F7E8, &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
      if ( !(*(unsigned __int8 (**)(unsigned int))(**&this->creationFrame + 1196))(this->creationFrame) ) /*0x62aa9b*/
      {
        (*(void (**)(unsigned int, unsigned int))(**&this->creationFrame + 968))(this->creationFrame, 0); /*0x62aaab*/
        (*(void (**)(unsigned int, unsigned int, int))(**&this->creationFrame + 1152))(this->creationFrame, 0, 1); /*0x62aab9*/
      }
      return (*(int (**)(unsigned int, unsigned int, int))(**&this->creationFrame + 1156))( /*0x62aac9*/
               this->creationFrame,
               0,
               1);
    }
    else
    {
      return (*(int (**)(int))(*(unsigned int *)v9 + 248))(v9); /*0x62aa3b*/
    }
  }
  return result; /*0x62aa41*/

}
} // namespace ra2

// 0x62AB40
namespace gamemd {  // G42.18c ns repair
int ParasiteClass::CanExistOnVictimCell(void *a1)
{

  int v2; // ecx
  int creationFrame; // ecx
  CellClass *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  Cell *v9; // eax

  v2 = *(unsigned int *)this->__pad_028; /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  creationFrame = this->creationFrame; /*0x62ab77*/
  if ( creationFrame ) /*0x62ab7c*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)creationFrame + 44))(creationFrame) == 1 ) /*0x62ab86*/
    {
      v5 = (CellClass *)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_028 + 444))(*(unsigned int *)this->__pad_028); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_028 + 444))(*(unsigned int *)this->__pad_028) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_028 + 444))(*(unsigned int *)this->__pad_028) /*0x62abdc*/
    + 320)
    & 0x100) == 0;
    v8 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_028 + 444))(*(unsigned int *)this->__pad_028) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
  LABEL_20:
  v9 = (Cell *)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_028 + 444))(*(unsigned int *)this->__pad_028); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/

}
} // namespace ra2

// 0x62AF70
namespace gamemd {
void * ParasiteClass::UpdateParasite(ParasiteClass * Block, char a2)
{
  ParasiteClass *v7; // [esp+8h] [ebp-4h] BYREF

  int v3 = Block->u32_44; // ecx /*0x62af77*/
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62af7a) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62af82) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62af89) */
  /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62af90) */
  Block->q04C = 0; /*0x62af97*/
  Block->u32_50 = 0; /*0x62af9a*/
  Block->u32_48 = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (**)(int))(*(unsigned int *)v3 + 248))(v3); /*0x62afa4*/
    Block->u32_44 = 0; /*0x62afaa*/
  }
  if ( Block->u32_54 ) /*0x62afad*/
  {
    v7 = Block; /*0x62afc2*/
    int v4; // eax
    v4 = (*(int (**)(int *, ParasiteClass **))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x62afc6*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v7);
    if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.SecondSpawnOffset[1] ) /*0x62afd6*/
    {
      --g_BuildingLoadQueue_Array.SecondSpawnOffset[1]; /*0x62afdb*/
      for ( ; /*0x62afe1*/
      v4 < g_BuildingLoadQueue_Array.SecondSpawnOffset[1];
      *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0]
      + 4 * v4) )
      {
        ++v4; /*0x62afe9*/
      }
    }
    Block->u32_54 = 0; /*0x62affb*/
  }
  v7 = Block; /*0x62b00e*/
  int v5; // eax
  v5 = (*(int (**)(int *, ParasiteClass **))(dword_AC4910 + 16))(&dword_AC4910, &v7); /*0x62b012*/
  if ( v5 != -1 && v5 < dword_AC4920 && v5 < --dword_AC4920 ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((unsigned int *)dword_AC4914 + v5 - 1) = *((unsigned int *)dword_AC4914 + v5); /*0x62b039*/
    }
    while ( v5 < dword_AC4920 ); /*0x62b045*/
  }
  AbstractClass::DTOR((AbstractClass *)Block); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    operator delete((Block)); /*0x62b056*/
  return &Block->ptr_0; /*0x62b060*/
}
} // namespace ra2

// 0x62BD50
namespace gamemd {
Coord * * ParasiteClass::Update(void *a1, void *a2, void *a3, void *a4)
{

  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int *v8; // ebx
  double v9; // st7
  double v10; // st7
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  Cell *v17; // esi
  double v18; // st7
  unsigned int *v19; // edi
  int Byte284; // eax
  float *v21; // eax
  double v22; // st7
  int v23; // edx
  int v24; // eax
  int v25; // eax
  float v26; // edx
  Triple v27; // eax
  int v28; // eax
  int v29; // eax
  int firstObject; // esi
  int v31; // edx
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // ecx
  unsigned int *v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // edi
  int v43; // ebx
  char result; // al
  int v45; // [esp-Ch] [ebp-100h]
  int v46; // [esp+0h] [ebp-F4h]
  int v47; // [esp+0h] [ebp-F4h]
  int v48; // [esp+0h] [ebp-F4h]
  int v49; // [esp+4h] [ebp-F0h]
  int v50; // [esp+4h] [ebp-F0h]
  unsigned int v51; // [esp+4h] [ebp-F0h]
  float *v52; // [esp+8h] [ebp-ECh]
  float *v53; // [esp+8h] [ebp-ECh]
  float v54; // [esp+8h] [ebp-ECh]
  float *v55; // [esp+8h] [ebp-ECh]
  bool v56; // [esp+19h] [ebp-DBh]
  char v57; // [esp+1Ah] [ebp-DAh]
  char v58; // [esp+1Bh] [ebp-D9h]
  Triple v59; // [esp+1Ch] [ebp-D8h] BYREF
  float v60; // [esp+20h] [ebp-D4h]
  float v61; // [esp+24h] [ebp-D0h]
  float v62; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v64; // [esp+30h] [ebp-C4h]
  float v65; // [esp+34h] [ebp-C0h]
  float v66; // [esp+38h] [ebp-BCh]
  int v67; // [esp+3Ch] [ebp-B8h]
  Coord3D v68; // [esp+40h] [ebp-B4h] BYREF
  Coord3D v69; // [esp+4Ch] [ebp-A8h] BYREF
  int v70[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v71; // [esp+60h] [ebp-94h]
  float v72[12]; // [esp+64h] [ebp-90h] BYREF
  float v73[12]; // [esp+94h] [ebp-60h] BYREF
  float v74[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( (stru_A8E960.random[528] & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v59 = (Triple)this->Coord_9C; /*0x62bd75*/
  v60 = this->q0A0; /*0x62bd88*/
  v61 = this->u32_A4; /*0x62bd8f*/
  if ( (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + this->__pad_C0; /*0x62be11*/
    v5 = v3 + this->u32_C4; /*0x62be1b*/
    this->__pad_C0 = v4; /*0x62be1f*/
    this->u32_C4 = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        this->__pad_C0 = 2; /*0x62be3e*/
    }
    else
    {
      this->__pad_C0 = -2; /*0x62be32*/
    }
    v6 = this->u32_C4; /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        this->u32_C4 = 2; /*0x62be5a*/
    }
    else
    {
      this->u32_C4 = -2; /*0x62be4e*/
    }
  }
  v7 = (double)*(int *)&v59; /*0x62be60*/
  v8 = &this->q0CC; /*0x62be64*/
  v59 = 0; /*0x62be6a*/
  v64 = v7; /*0x62be78*/
  v9 = (double)SLODWORD(v60); /*0x62be7c*/
  v60 = 0.0; /*0x62be80*/
  this->q0CC = 0; /*0x62be8c*/
  v65 = v9; /*0x62be8e*/
  v10 = (double)SLODWORD(v61); /*0x62be92*/
  v61 = -2.0; /*0x62be96*/
  this->q0D0 = 0; /*0x62bea2*/
  v66 = v10; /*0x62bea5*/
  this->q0D4 = -1073741824; /*0x62bea9*/
  this->q0D4 = this->q0D4 - (double)dword_8871E0->RepairRate[0]; /*0x62bebd*/
  (v11) = ((v11) & ~0xFFFF) | ((Math::RoundToInt(v66)) & 0xFFFF); /*0x62bec4*/
  v49 = v11; /*0x62becd*/
  (v12) = ((v12) & ~0xFFFF) | ((Math::RoundToInt(v65)) & 0xFFFF); /*0x62bece*/
  v46 = v12; /*0x62bed7*/
  (v13) = ((v13) & ~0xFFFF) | ((Math::RoundToInt(v64)) & 0xFFFF); /*0x62bed8*/
  Coord3D::Set(&v68, v13, v46, v49); /*0x62bee2*/
  Vector3::AddAssign(&this->q0CC, v52); /*0x62beec*/
  (v14) = ((v14) & ~0xFFFF) | ((Math::RoundToInt(v66)) & 0xFFFF); /*0x62bef5*/
  v50 = v14; /*0x62befe*/
  (v15) = ((v15) & ~0xFFFF) | ((Math::RoundToInt(v65)) & 0xFFFF); /*0x62beff*/
  v47 = v15; /*0x62bf08*/
  (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(v64)) & 0xFFFF); /*0x62bf09*/
  Coord3D::Set(&v69, v16, v47, v50); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(&v69); /*0x62bf2d*/
  v67 = dword_AC4A0C + GroundHeight; /*0x62bf3d*/
  v17 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &v69); /*0x62bf46*/
  v58 = 0; /*0x62bf4d*/
  v57 = 0; /*0x62bf52*/
  if ( (v17->Cell_field_0x140 & 0x100) != 0 || (Coord::To_Cell((Coord *)&dword_87F7E8, &v68)->flags & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v69.Coord3D_field_0x08 < v67 ) /*0x62bf84*/
    {
      if ( v68.Coord3D_field_0x08 >= v67 ) /*0x62bf93*/
        v58 = 1; /*0x62bf95*/
    }
    else if ( v68.Coord3D_field_0x08 < v67 ) /*0x62bf88*/
    {
      v57 = 1; /*0x62bf8a*/
    }
  }
  v56 = 0; /*0x62bf9e*/
  if ( !v58 && !v57 ) /*0x62bfb1*/
  {
    v18 = (double)GroundHeight; /*0x62bfb7*/
    if ( v66 >= v18 && v66 - 150.0 < v18 ) /*0x62bfdb*/
    {
      v19 = Cell::IsBridge(v17); /*0x62bfe4*/
      if ( v19 || (unsigned __int8)BuildingPlacement::ValidateType((BuildingPlacement *)v17, -1, -1) ) /*0x62bff0*/
      {
        v56 = 1; /*0x62c001*/
        if ( v19 ) /*0x62c006*/
        {
          if ( *(unsigned char *)(v19[328] + 5823) ) /*0x62c00e*/
            v56 = v19->u32_618 < 8; /*0x62c021*/
          if ( v19->vt_slot_128() ) /*0x62c02a*/
            v56 = 0; /*0x62c034*/
        }
      }
      else
      {
        v56 = 0; /*0x62bff9*/
      }
    }
  }
  v62 = (float)GroundHeight; /*0x62c041*/
  if ( v66 < (double)v62 ) /*0x62c056*/
  {
    if ( !v58 ) /*0x62c1b7*/
    {
      if ( !v57 ) /*0x62c1cc*/
      {
LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v66 ) /*0x62c094*/
          v66 = v62; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v58 ) /*0x62c05e*/
  {
    if ( !v57 ) /*0x62c06a*/
    {
      if ( !v56 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
LABEL_47:
    LODWORD(v62) = v67 - 20; /*0x62c1d2*/
    v66 = (float)(v67 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v66 = (float)v67; /*0x62c1bd*/
LABEL_39:
  Byte284 = CellClass::GetByte284(&v69); /*0x62c09e*/
  qmemcpy(v72, CopyAudioData((char *)v74, Byte284), sizeof(v72)); /*0x62c0cb*/
  v21 = InvertMatrix3x3Signs(v74, v72); /*0x62c0d4*/
  v22 = this->q0D0; /*0x62c0d9*/
  v23 = *v8; /*0x62c0ea*/
  qmemcpy(v73, v21, sizeof(v73)); /*0x62c0ec*/
  *(float *)&v48 = -v22; /*0x62c0f9*/
  Triple::Set(&v59, v23, v48, this->q0D4); /*0x62c0fd*/
  v24 = Matrix3x3::TransformPoint(v70, (float *)&v59, v53); /*0x62c113*/
  v59 = *(Triple *)v24; /*0x62c11f*/
  v60 = *(float *)(v24 + 4); /*0x62c126*/
  v61 = *(float *)(v24 + 8); /*0x62c131*/
  Coord::Scale((int *)0x3F800000, v54); /*0x62c135*/
  v61 = -v61; /*0x62c14a*/
  v25 = Matrix3x3::TransformPoint(v70, (float *)&v59, v55); /*0x62c152*/
  v59 = *(Triple *)v25; /*0x62c159*/
  v60 = *(float *)(v25 + 4); /*0x62c160*/
  v26 = *(float *)(v25 + 8); /*0x62c164*/
  v27 = v59; /*0x62c167*/
  this->q0D0 = -v60; /*0x62c171*/
  v61 = v26; /*0x62c176*/
  *v8 = (int)v27; /*0x62c17a*/
  this->q0D4 = v26; /*0x62c17c*/
LABEL_40:
  if ( (*(int (**)(char *))(*&this->u32_720))(this) <= 5 || *(unsigned int *)&stru_A8E960.random[528] % 2 )
  {
    v28 = this->u8_C8 <= 0 ? 0 : this->u8_C8;
  }
  else
  {
    v28 = this->u8_C8 - 1; /*0x62c1a8*/
    if ( v28 < -5 ) /*0x62c1ac*/
      v28 = -5; /*0x62c1ae*/
  }
  this->u8_C8 = v28; /*0x62c1fa*/
LABEL_50:
  if ( !--this->u16_12A ) /*0x62c207*/
  {
    v29 = this->u32_AC; /*0x62c215*/
    if ( *(unsigned int *)(v29 + 744) ) /*0x62c21b*/
    {
      this->u16_12A = *(unsigned short *)(v29 + 732); /*0x62c236*/
      v68 = this->u32_D; /*0x62c23f*/
      firstObject = Coord::To_Cell((Coord *)&dword_87F7E8, &v68)->firstObject; /*0x62c260*/
      if ( firstObject ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v31 = *(unsigned int *)(firstObject + 156); /*0x62c276*/
          v32 = *(unsigned int *)(firstObject + 160); /*0x62c278*/
          v71 = *(unsigned int *)(firstObject + 164); /*0x62c286*/
          v33 = this->Coord_9C - v31; /*0x62c28c*/
          v34 = this->q0A0 - v32; /*0x62c291*/
          v35 = *(unsigned int *)(firstObject + 48); /*0x62c293*/
          v71 = this->u32_A4; /*0x62c299*/
          v36 = abs32(v33) + abs32(v34); /*0x62c2af*/
          if ( *(unsigned char *)(firstObject + 144) && *(int *)(firstObject + 108) > 0 ) /*0x62c2c0*/
          {
            v37 = (unsigned int *)this->q124; /*0x62c2c2*/
            if ( v37 ) /*0x62c2ca*/
              v38 = v37[63]; /*0x62c2cc*/
            else
              v38 = 0; /*0x62c2d4*/
            v39 = this->u32_AC; /*0x62c2d6*/
            v51 = v38; /*0x62c2dc*/
            v62 = *(float *)(v39 + 744); /*0x62c2e9*/
            v40 = *(unsigned int *)firstObject; /*0x62c2f3*/
            v45 = *(unsigned int *)(v39 + 740); /*0x62c2f5*/
            v41 = ZCoordToScreenY(v36); /*0x62c2f6*/
            (*(void (**)(int, float *, int, int, unsigned int, unsigned int, unsigned int, unsigned int))(v40 + 364))( /*0x62c303*/
              firstObject,
              &v62,
              v41,
              v45,
              0,
              0,
              0,
              v51);
          }
          firstObject = v35; /*0x62c30b*/
        }
        while ( v35 ); /*0x62c30d*/
      }
    }
  }
  v42 = this->u32_AC; /*0x62c316*/
  v43 = *(unsigned int *)(v42 + 736) /*0x62c33f*/
      - *((unsigned __int16 *)&this->u32_94)
      + (*(int (**)(char *))(this->vtable2 + 16))(&this->vtable2);
  if ( !(v43 % (*(char *)(v42 + 779) + ((*(int (**)(char *))(this->vtable2 + 16))(&this->HouseClass_6C) & 1))) ) /*0x62c355*/
    ++this->HouseClass_6C; /*0x62c35b*/
  result = this->HouseClass_6C; /*0x62c361*/
  if ( result == *(unsigned char *)(v42 + 777) ) /*0x62c36f*/
  {
    result = *(unsigned char *)(v42 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      this->HouseClass_6C = 1; /*0x62c37c*/
    else
      this->HouseClass_6C = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/

}
} // namespace ra2

// 0x6295B0
namespace gamemd {
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(a0, aP1); /*0x6295bc*/
  int v3 = result; // ebp /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( a0 ) /*0x6295cd*/
    {
      AbstractClass::InitVtables((AbstractClass *)a0, (int)&aP1); /*0x6295d6*/
      int v4; // edx
      v4 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6295db*/
      a0->ParasiteClass_field_34 = 0; /*0x6295e1*/
      *(unsigned int *)&a0->__pad_28[4] = v4; /*0x6295e8*/
      a0->ParasiteClass_field_38 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6295f0*/
      a0->ParasiteClass_field_40 = 0; /*0x6295f3*/
      /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x6295fa) */
      /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x629600) */
      /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x629607) */
      /* X11: vtable install elided (implicit via ParasiteClass virtuals 0x62960e) */
    }
    if ( *((unsigned int *)a0 + 17) /*0x629657*/
      && (g_BuildingLoadQueue_Array.SecondSpawnOffset[1] < DataGlobal_B0F5C0
       || ((((unsigned char *)&(g_BuildingLoadQueue_Array.SecondSpawnOffset[0]))[1]) || !DataGlobal_B0F5C0)
       && g_BuildingLoadQueue_Array.SecondSpawnOffset[2] > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 8))(
            g_BuildingLoadQueue_Array.ForbiddenHouses,
            DataGlobal_B0F5C0 + g_BuildingLoadQueue_Array.SecondSpawnOffset[2],
            0)) )
    {
      int v5; // eax
      v5 = g_BuildingLoadQueue_Array.SecondSpawnOffset[1]++; /*0x629664*/
      *(unsigned int *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * v5) = a0; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a0->creationFrame); /*0x62967f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a0->__pad_28); /*0x62968d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)a0 + 17); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}
} // namespace gamemd

// 0x6296B0
namespace gamemd {
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6296c4*/
}
} // namespace gamemd

// 0x6296D0
namespace gamemd {
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/
}
} // namespace gamemd

// 0x62A8E0
namespace gamemd {
bool ParasiteClass::CanInfect(unsigned int *a2)
{

  bool result = 0; // al /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((unsigned char *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((unsigned char *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                int creationFrame; // ecx
                creationFrame = this->creationFrame; /*0x62a933*/
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (**)(unsigned int *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                Cell *v4; // eax
                v4 = (Cell *)(*(int (**)(unsigned int *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (uint8_t)Cell::IsValidHeight(v4) ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/
}
} // namespace gamemd
