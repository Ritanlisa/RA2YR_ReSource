// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TActionClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TClassFactory_MechLocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/TabClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Color_e4.hpp"

// 0x71E940
namespace gamemd {
DynamicVector * TEventClass::Execute(int a2, int a3, int a4, int *a5, int a6, int a7)
{

  double v7; // st7
  int TEventClass_field_2C; // ecx
  int v10; // eax
  int v11; // edi
  int *TEventClass_field_38; // edx
  int v13; // ebp
  int v14; // edi
  int v15; // ebx
  int TEventClass_field_34; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int *v21; // edx
  int v22; // ebp
  int v23; // edi
  int v24; // esi
  void *vtable3; // edx
  int abstractFlags; // eax
  int v27; // edx
  int v28; // eax
  HouseClass *v29; // ecx
  int v30; // esi
  int v31; // esi
  int *WorldCoords; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ebx
  int *v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  WaveClass *waveEffect; // esi
  int v41; // edx
  ParticleSystemClass *auxParticles1; // ecx
  unsigned int *vtable0; // eax
  int v44; // esi
  int v45; // edx
  int *v46; // eax
  int v47; // ecx
  int v48; // eax
  int Owner; // esi
  int v52; // eax
  HouseClass *v53; // ecx
  HouseClass *v54; // edi
  int v55; // ebx
  double v57; // [esp+4h] [ebp-34h]
  int v59; // [esp+20h] [ebp-18h] BYREF
  int v60; // [esp+24h] [ebp-14h]
  int v61; // [esp+28h] [ebp-10h]
  unsigned char v62[12]; // [esp+2Ch] [ebp-Ch] BYREF

  TEventClass_field_2C = (int)(this->TEventClass_field_2C);
  switch ( TEventClass_field_2C ) /*0x71e964*/
  {
    case 13: /*0x71e964*/
    case 51: /*0x71e964*/
      v27 = *a5; /*0x71ec37*/
      v28 = a5[2]; /*0x71ec39*/
      if ( *a5 == -1 ) /*0x71ec3f*/
        goto LABEL_44; /*0x71ec3f*/
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v27 < v28 ) /*0x71ec4b*/
      {
        v28 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v27; /*0x71ec4d*/
LABEL_44:
        if ( v28 ) /*0x71ec51*/
          goto LABEL_139; /*0x71ec51*/
      }
      LOBYTE(v18) = 1; /*0x71ec5a*/
      return v18; /*0x71ec60*/
    case 14: /*0x71e964*/
      if ( ((unsigned int *)(dword_A8B230))[127].vtable3 == (void *)-1 ) /*0x71ebf6*/
        goto LABEL_139; /*0x71ebf6*/
      vtable3 = ((unsigned int *)(dword_A8B230))[127].vtable3; /*0x71ebfc*/
      abstractFlags = ((unsigned int *)(dword_A8B230))[127].abstractFlags; /*0x71ec02*/
      if ( vtable3 == (void *)-1 ) /*0x71ec0b*/
        goto LABEL_39; /*0x71ec0b*/
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (int)vtable3 >= abstractFlags ) /*0x71ec17*/
        goto LABEL_153; /*0x71ec17*/
      abstractFlags -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - (unsigned int)vtable3; /*0x71ec1d*/
LABEL_39:
      if ( abstractFlags ) /*0x71ec21*/
        goto LABEL_139; /*0x71ec21*/
      LOBYTE(v18) = 1; /*0x71ec2a*/
      return v18; /*0x71ec30*/
    case 27: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb62*/
      LOBYTE(v18) = a6; /*0x71eb67*/
      return v18; /*0x71eb72*/
    case 28: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71eb84*/
      LOBYTE(v18) = (unsigned char)a6 == 0; /*0x71eb95*/
      return v18; /*0x71eb9b*/
    case 36: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebad*/
      LOBYTE(v18) = a6; /*0x71ebb2*/
      return v18; /*0x71ebbd*/
    case 37: /*0x71e964*/
      ScenarioClass::GetLocalStateByID((ScenarioClass *)dword_A8B230, this->TEventClass_field_34, &a6); /*0x71ebcf*/
      LOBYTE(v18) = (unsigned char)a6 == 0; /*0x71ebe0*/
      return v18; /*0x71ebe6*/
    case 45: /*0x71e964*/
      return (int)((unsigned int *)(dword_A8B230))[378].vtable1 <= this->TEventClass_field_34; /*0x71eb03*/
    case 46: /*0x71e964*/
      LOBYTE(v18) = (int)((unsigned int *)(dword_A8B230))[378].vtable1 >= this->TEventClass_field_34; /*0x71eb1f*/
      return v18; /*0x71eb25*/
    case 47: /*0x71e964*/
      LOBYTE(v18) = this->TEventClass_field_34 <= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) / 15; /*0x71eb49*/
      return v18; /*0x71eb50*/
    case 60: /*0x71e964*/
      v10 = -1; /*0x71e971*/
      v11 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71e974*/
      a6 = -1; /*0x71e975*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71e97b*/
        goto LABEL_8; /*0x71e97b*/
      TEventClass_field_38 = (int *)(this->TEventClass_field_38); /*0x71e982*/
      v13 = stru_A8EB00.ObjectTypeClass[1] + 4 * v11; /*0x71e985*/
      while ( strcmp((const char *)(*(unsigned int *)v13 + 36), (const char *)TEventClass_field_38) ) /*0x71e9bb*/
      {
        --v11; /*0x71e9bd*/
        v13 -= 4; /*0x71e9be*/
        if ( v11 < 0 ) /*0x71e9c3*/
        {
          v10 = a6; /*0x71e9c5*/
          goto LABEL_8; /*0x71e9c9*/
        }
      }
      v10 = (int)(v11);
LABEL_8:
      if ( v10 >= stru_A8EB00.ObjectTypeClass[4] ) /*0x71e9d3*/
        goto LABEL_139; /*0x71e9d3*/
      if ( v10 < 0 ) /*0x71e9db*/
        goto LABEL_139; /*0x71e9db*/
      v14 = 0; /*0x71e9eb*/
      v15 = *(unsigned int *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v10); /*0x71e9ed*/
      TEventClass_field_34 = (int)(this->TEventClass_field_34); /*0x71e9f5*/
      v17 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x71e9f8*/
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1 < 0 ) /*0x71e9fd*/
        goto LABEL_139; /*0x71e9fd*/
      while ( 1 ) /*0x71ea03*/
      {
        if ( (*(int (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v17) + 132))(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v17)) == v15 ) /*0x71ea16*/
          ++v14; /*0x71ea18*/
        if ( v14 >= TEventClass_field_34 ) /*0x71ea1b*/
          break; /*0x71ea1b*/
        if ( --v17 < 0 ) /*0x71ea22*/
        {
          LOBYTE(v18) = 0; /*0x71ea27*/
          return v18; /*0x71ea2d*/
        }
      }
      goto LABEL_153; /*0x71ea1b*/
    case 61: /*0x71e964*/
      v19 = -1; /*0x71ea36*/
      v20 = stru_A8EB00.ObjectTypeClass[4] - 1; /*0x71ea39*/
      a6 = -1; /*0x71ea3a*/
      if ( stru_A8EB00.ObjectTypeClass[4] - 1 < 0 ) /*0x71ea40*/
        goto LABEL_22; /*0x71ea40*/
      v21 = (int *)(this->TEventClass_field_38); /*0x71ea47*/
      v22 = stru_A8EB00.ObjectTypeClass[1] + 4 * v20; /*0x71ea4a*/
      while ( strcmp((const char *)(*(unsigned int *)v22 + 36), (const char *)v21) ) /*0x71ea80*/
      {
        --v20; /*0x71ea82*/
        v22 -= 4; /*0x71ea83*/
        if ( v20 < 0 ) /*0x71ea88*/
        {
          v19 = a6; /*0x71ea8a*/
          goto LABEL_22; /*0x71ea8e*/
        }
      }
      v19 = v20; /*0x71ea90*/
LABEL_22:
      if ( v19 >= stru_A8EB00.ObjectTypeClass[4] || v19 < 0 ) /*0x71eaa0*/
        goto LABEL_139; /*0x71eaa0*/
      v23 = *(unsigned int *)(stru_A8EB00.ObjectTypeClass[1] + 4 * v19); /*0x71eab2*/
      v24 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1; /*0x71eab5*/
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) - 1 < 0 ) /*0x71eaba*/
        goto LABEL_153; /*0x71eaba*/
      while ( (*(int (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v24) + 132))(*(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152) + 4 * v24)) != v23 ) /*0x71ead2*/
      {
        if ( --v24 < 0 ) /*0x71ead9*/
        {
          LOBYTE(v18) = 1; /*0x71eade*/
          return v18; /*0x71eae4*/
        }
      }
      goto LABEL_139; /*0x71ead2*/
    default:
      if ( !TEventClass_field_2C ) /*0x71ec65*/
        goto LABEL_139; /*0x71ec65*/
      if ( TEventClass_field_2C != 19 /*0x71ec81*/
        && TEventClass_field_2C != 20
        && TEventClass_field_2C != 21
        && TEventClass_field_2C != 22 )
      {
        switch ( TEventClass_field_2C ) /*0x71ec93*/
        {
          case 1: /*0x71ec93*/
          case 2: /*0x71ec93*/
          case 3: /*0x71ec93*/
          case 4: /*0x71ec93*/
          case 6: /*0x71ec93*/
          case 7: /*0x71ec93*/
          case 18: /*0x71ec93*/
          case 19: /*0x71ec93*/
          case 20: /*0x71ec93*/
          case 21: /*0x71ec93*/
          case 22: /*0x71ec93*/
          case 23: /*0x71ec93*/
          case 24: /*0x71ec93*/
          case 25: /*0x71ec93*/
          case 26: /*0x71ec93*/
          case 29: /*0x71ec93*/
          case 31: /*0x71ec93*/
          case 33: /*0x71ec93*/
          case 34: /*0x71ec93*/
          case 35: /*0x71ec93*/
          case 38: /*0x71ec93*/
          case 39: /*0x71ec93*/
          case 40: /*0x71ec93*/
          case 41: /*0x71ec93*/
          case 42: /*0x71ec93*/
          case 43: /*0x71ec93*/
          case 44: /*0x71ec93*/
          case 48: /*0x71ec93*/
          case 49: /*0x71ec93*/
          case 50: /*0x71ec93*/
          case 53: /*0x71ec93*/
          case 54: /*0x71ec93*/
          case 59: /*0x71ec93*/
            if ( a2 == TEventClass_field_2C && !((unsigned int *)&stru_A8EB00)[391] ) /*0x71eca9*/
              break; /*0x71eca9*/
            goto LABEL_139; /*0x71eca9*/
          default:
            break;
        }
      }
      switch ( TEventClass_field_2C ) /*0x71ecd6*/
      {
        case 1: /*0x71ecd6*/
        case 25: /*0x71ecd6*/
        case 26: /*0x71ecd6*/
        case 24: /*0x71ecd6*/
        case 59: /*0x71ecd6*/
          if ( a2 == TEventClass_field_2C ) /*0x71f1bf*/
          {
            v53 = (HouseClass *)this->TEventClass_field_34; /*0x71f1c1*/
            if ( v53 == (HouseClass *)-1 || HouseClass::FindOwner(v53) ) /*0x71f1c9*/
            {
              if ( a4 ) /*0x71f1d8*/
              {
                v54 = (HouseClass *)this->TEventClass_field_34; /*0x71f1da*/
                if ( v54 == (HouseClass *)-1 /*0x71f1f5*/
                  || (v55 = (*(int (**)(int))(*(unsigned int *)a4 + 56))(a4),
                      v55 == *(unsigned int *)(HouseClass::FindOwner(v54) + 48)) )
                {
                  *(unsigned char *)a6 = 1; /*0x71f1ff*/
                  this->TEventClass_field_54 = (*(int (**)(int))(*(unsigned int *)a4 + 60))(a4); /*0x71f209*/
LABEL_153:
                  LOBYTE(v18) = 1; /*0x71f20c*/
                  return v18; /*0x71f20f*/
                }
              }
            }
          }
LABEL_139:
          LOBYTE(v18) = 0; /*0x71f163*/
          return v18; /*0x71f16c*/
        case 53: /*0x71ecd6*/
          if ( a2 == 53 ) /*0x71ece3*/
          {
            if ( a4 ) /*0x71ecef*/
            {
              v29 = (HouseClass *)this->TEventClass_field_34; /*0x71ecf5*/
              if ( v29 != (HouseClass *)-1 ) /*0x71ecfb*/
              {
                if ( HouseClass::FindOwner(v29) ) /*0x71ed01*/
                {
                  if ( (*(int (**)(int, int))(*(unsigned int *)a4 + 208))(a4, 1) ) /*0x71ed14*/
                  {
                    v30 = (*(int (**)(int, int))(*(unsigned int *)a4 + 208))(a4, 1); /*0x71ed31*/
                    if ( *(unsigned int *)(v30 + 48) == *(unsigned int *)(HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34) /*0x71ed40*/
                                                            + 48) )
                    {
                      *(unsigned char *)a6 = 1; /*0x71ed4d*/
                      LOBYTE(v18) = 1; /*0x71ed50*/
                      return v18; /*0x71ed56*/
                    }
                  }
                }
              }
            }
          }
          goto LABEL_139; /*0x71ed40*/
        case 54: /*0x71ecd6*/
          if ( a2 == 54 ) /*0x71ed60*/
          {
            if ( a4 ) /*0x71ed6c*/
            {
              v31 = (*(int (**)(int, int))(*(unsigned int *)a4 + 204))(a4, 1); /*0x71ed7c*/
              if ( (*(int (**)(int))(*(unsigned int *)v31 + 44))(v31) == 16 /*0x71eda2*/
                && this->TEventClass_field_34 != (char [4])(-1)
                && (*(int (**)(int))(*(unsigned int *)v31 + 64))(v31) == (int)(this->TEventClass_field_34) )
              {
                *(unsigned char *)a6 = 1; /*0x71edaf*/
                LOBYTE(v18) = 1; /*0x71edb2*/
                return v18; /*0x71edb8*/
              }
            }
          }
          goto LABEL_139; /*0x71eda2*/
        case 34: /*0x71ecd6*/
          if ( a2 == 34 ) /*0x71edc6*/
          {
            WorldCoords = (int *)(((Cell *)((Cell *)dword_A8B230))->GetWorldCoords((unsigned int *)(&v59), this->TEventClass_field_34));
            v33 = *WorldCoords; /*0x71ede0*/
            v34 = WorldCoords[1]; /*0x71ede6*/
            v35 = WorldCoords[2]; /*0x71edeb*/
            v36 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a4 + 72))(a4, v62); /*0x71edf3*/
            v37 = v36[1]; /*0x71edf6*/
            v38 = *v36; /*0x71edf9*/
            v39 = v36[2]; /*0x71edfb*/
            v60 = v37 - v34; /*0x71ee00*/
            __asm { fild [esp+2Ch+var_14] } /*0x71ee06*/
            v61 = v39 - v35; /*0x71ee0c*/
            __asm { fild [esp+2Ch+var_10] } /*0x71ee10*/
            v59 = v38 - v33; /*0x71ee14*/
            __asm /*0x71ee1b*/
            {
              fild [esp+34h+var_18]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fld st(3)
              fmul st, st(4)
              faddp st(1), st
              fstp [esp+34h+var_38+4]; double
              fstp st
              fstp st
              fstp st
            }
            Math::Sqrt(v57); /*0x71ee38*/
            LOWORD(v18) = Math::RoundToInt(v7); /*0x71ee40*/
            LOBYTE(v18) = v18 <= 1280; /*0x71ee4d*/
            return v18; /*0x71ee54*/
          }
          goto LABEL_139; /*0x71edc6*/
      }
      if ( TEventClass_field_2C == 44 /*0x71ee7c*/
        && (a2 != 44 || !a7 || this->TEventClass_field_34 != *(unsigned int *)(*(unsigned int *)(a7 + 540) + 48)) )
      {
        goto LABEL_139; /*0x71ee7c*/
      }
      if ( a3 ) /*0x71ee88*/
      {
        switch ( TEventClass_field_2C ) /*0x71eea2*/
        {
          case 12: /*0x71eea2*/
            if ( (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36) >= (int)(this->TEventClass_field_34) ) /*0x71ef0e*/
              goto LABEL_122; /*0x71ef0e*/
            LOBYTE(v18) = 0; /*0x71ef17*/
            return v18; /*0x71ef1d*/
          case 15: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 21640) >= (unsigned int)(this->TEventClass_field_34) ) /*0x71f04a*/
              goto LABEL_122; /*0x71f04a*/
            LOBYTE(v18) = 0; /*0x71f04f*/
            return v18; /*0x71f055*/
          case 16: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 21556) >= (unsigned int)(this->TEventClass_field_34) ) /*0x71f063*/
              goto LABEL_122; /*0x71f063*/
            goto LABEL_139; /*0x71f063*/
          case 17: /*0x71eea2*/
            if ( *(int *)(a3 + 752) <= 0 ) /*0x71ef47*/
              goto LABEL_122; /*0x71ef47*/
            v44 = *(unsigned int *)(a3 + 120); /*0x71ef4d*/
            v45 = 0; /*0x71ef50*/
            if ( v44 <= 0 ) /*0x71ef54*/
              goto LABEL_122; /*0x71ef54*/
            v46 = *(int **)(a3 + 108); /*0x71ef5a*/
            while ( 1 ) /*0x71ef5d*/
            {
              v47 = *v46; /*0x71ef5d*/
              if ( *v46 ) /*0x71ef5d*/
              {
                if ( !*(unsigned char *)(v47 + 129) && *(unsigned int *)(*(unsigned int *)(v47 + 1312) + 3768) ) /*0x71ef73*/
                  goto LABEL_139; /*0x71ef7b*/
              }
              ++v45; /*0x71ef81*/
              ++v46; /*0x71ef82*/
              if ( v45 >= v44 ) /*0x71ef87*/
                goto LABEL_122; /*0x71ef87*/
            }
          case 18: /*0x71eea2*/
            if ( *(unsigned char *)(a3 + 505) ) /*0x71ef8e*/
              goto LABEL_122; /*0x71ef96*/
            LOBYTE(v18) = 0; /*0x71ef9f*/
            return v18; /*0x71efa5*/
          case 19: /*0x71eea2*/
            v48 = *(unsigned int *)(a3 + 620); /*0x71efeb*/
            goto LABEL_112; /*0x71efeb*/
          case 20: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 628) != (unsigned int)(this->TEventClass_field_34) ) /*0x71f00e*/
              goto LABEL_139; /*0x71f00e*/
            *(unsigned char *)a6 = 1; /*0x71f018*/
            goto LABEL_122; /*0x71f01b*/
          case 21: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 624) != (unsigned int)(this->TEventClass_field_34) ) /*0x71f028*/
              goto LABEL_139; /*0x71f028*/
            *(unsigned char *)a6 = 1; /*0x71f032*/
            goto LABEL_122; /*0x71f035*/
          case 22: /*0x71eea2*/
            v48 = *(unsigned int *)(a3 + 632); /*0x71f037*/
LABEL_112:
            if ( v48 != (int)(this->TEventClass_field_34) ) /*0x71eff4*/
              goto LABEL_139; /*0x71eff4*/
            *(unsigned char *)a6 = 1; /*0x71effe*/
            goto LABEL_122; /*0x71f001*/
          case 23: /*0x71eea2*/
            waveEffect = ((char *)&FootClass_Array); /*0x71eea9*/
            v41 = 0; /*0x71eeaf*/
            if ( (int)((char *)&FootClass_Array) <= 0 ) /*0x71eeb3*/
              goto LABEL_91; /*0x71eeb3*/
            auxParticles1 = ((char *)&FootClass_Array); /*0x71eeb8*/
            break; /*0x71eeb8*/
          case 32: /*0x71eea2*/
            if ( !((DynamicVector *)((DynamicVector *)(a3 + 21840)))->GetOrGrow(this->TEventClass_field_34) ) /*0x71efb9*/
              goto LABEL_139; /*0x71efb9*/
            *(unsigned char *)a6 = 1; /*0x71efc3*/
            goto LABEL_122; /*0x71efc6*/
          case 52: /*0x71eea2*/
            if ( (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36) <= (int)(this->TEventClass_field_34) ) /*0x71ef2d*/
              goto LABEL_122; /*0x71ef2d*/
            LOBYTE(v18) = 0; /*0x71ef36*/
            return v18; /*0x71ef3c*/
          case 57: /*0x71eea2*/
            if ( ((DynamicVector *)((DynamicVector *)(a3 + 21840)))->GetOrGrow(this->TEventClass_field_34) ) /*0x71efd5*/
              goto LABEL_139; /*0x71efdc*/
            *(unsigned char *)a6 = 1; /*0x71efe6*/
            goto LABEL_122; /*0x71efe9*/
          default:
            goto LABEL_122;
        }
        while ( 1 ) /*0x71eebe*/
        {
          vtable0 = auxParticles1->ObjectClass; /*0x71eebe*/
          if ( *((unsigned int *)auxParticles1->ObjectClass + 9) == this->TEventClass_field_30 /*0x71eecc*/
            && !vtable0[21]
            && *((unsigned char *)vtable0 + 130) )
          {
            break; /*0x71eecc*/
          }
          ++v41; /*0x71eed6*/
          auxParticles1 = (ParticleSystemClass *)((char *)auxParticles1 + 4); /*0x71eed7*/
          if ( v41 >= (int)((char *)&FootClass_Array) ) /*0x71eedc*/
            goto LABEL_91; /*0x71eedc*/
        }
        *(unsigned char *)a6 = 1; /*0x71eee4*/
        waveEffect = ((char *)&FootClass_Array); /*0x71eee7*/
LABEL_91:
        if ( (WaveClass *)v41 == waveEffect ) /*0x71eeef*/
        {
          LOBYTE(v18) = 0; /*0x71eef8*/
          return v18; /*0x71eefe*/
        }
      }
LABEL_122:
      Owner = HouseClass::FindOwner((HouseClass *)this->TEventClass_field_34); /*0x71f069*/
      if ( Owner ) /*0x71f075*/
      {
        switch ( this->TEventClass_field_2C ) /*0x71f092*/
        {
          case 3: /*0x71f092*/
            if ( *(unsigned char *)(Owner + 580) ) /*0x71f0e1*/
              break; /*0x71f0e9*/
            LOBYTE(v18) = 0; /*0x71f0f2*/
            return v18; /*0x71f0f8*/
          case 5: /*0x71f092*/
            if ( *(unsigned char *)(Owner + 500) ) /*0x71f0fb*/
              break; /*0x71f103*/
            LOBYTE(v18) = 0; /*0x71f10c*/
            return v18; /*0x71f112*/
          case 9: /*0x71f092*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21860)) > 0 ) /*0x71f13c*/
              goto LABEL_139; /*0x71f13c*/
            if ( VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 ) /*0x71f14b*/
              break; /*0x71f14b*/
            LOBYTE(v18) = 0; /*0x71f150*/
            return v18; /*0x71f156*/
          case 0xA: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 ) /*0x71f11d*/
              break; /*0x71f11d*/
            LOBYTE(v18) = 0; /*0x71f126*/
            return v18; /*0x71f12c*/
          case 0xB: /*0x71f092*/
            if ( *(int *)(Owner + 752) <= 0 /*0x71f1af*/
              && VectorClass::GetCount((VectorClass *)(Owner + 21860)) <= 0
              && VectorClass::GetCount((VectorClass *)(Owner + 21880)) <= 0 )
            {
              break; /*0x71f1af*/
            }
            goto LABEL_139; /*0x71f1af*/
          case 0x1E: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f09b*/
            __asm /*0x71f0a0*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x71f0ab*/
              break; /*0x71f0ab*/
            LOBYTE(v18) = 0; /*0x71f0b4*/
            return v18; /*0x71f0ba*/
          case 0x37: /*0x71f092*/
            v52 = *(unsigned int *)(Owner + 748); /*0x71f159*/
            goto LABEL_138; /*0x71f159*/
          case 0x38: /*0x71f092*/
            if ( *(unsigned int *)(Owner + 744) - *(unsigned int *)(Owner + 748) > 0 ) /*0x71f17f*/
              goto LABEL_139; /*0x71f17f*/
            v52 = *(unsigned int *)(Owner + 756); /*0x71f181*/
LABEL_138:
            if ( v52 > 0 ) /*0x71f161*/
              goto LABEL_139; /*0x71f161*/
            break; /*0x71f161*/
          case 0x3A: /*0x71f092*/
            HouseClass::GetPowerRatio((HouseClass *)Owner); /*0x71f0bf*/
            __asm /*0x71f0c4*/
            {
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x100) == 0 ) /*0x71f0cf*/
              break; /*0x71f0cf*/
            LOBYTE(v18) = 0; /*0x71f0d8*/
            return v18; /*0x71f0de*/
          default:
            break;
        }
      }
      LOBYTE(v18) = 1; /*0x71f1b1*/
      return v18;
  }

}
}
// 0x71F390
namespace gamemd {
int TEventClass::PrepareSaveToINI(const char * a2)
{

  int TEventClass_field_2C; // edx
  int v3; // eax
  int TEventClass_field_30; // esi
  const CHAR *v6; // [esp-10h] [ebp-18h]
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int TEventClass_field_34; // [esp-4h] [ebp-Ch]

  TEventClass_field_2C = this->TEventClass_field_2C; /*0x71f390*/
  switch ( TEventClass_field_2C ) /*0x71f3a8*/
  {
    case 1: /*0x71f3a8*/
    case 3: /*0x71f3a8*/
    case 5: /*0x71f3a8*/
    case 9: /*0x71f3a8*/
    case 10: /*0x71f3a8*/
    case 11: /*0x71f3a8*/
    case 24: /*0x71f3a8*/
    case 25: /*0x71f3a8*/
    case 26: /*0x71f3a8*/
    case 30: /*0x71f3a8*/
    case 44: /*0x71f3a8*/
    case 53: /*0x71f3a8*/
    case 55: /*0x71f3a8*/
    case 56: /*0x71f3a8*/
    case 58: /*0x71f3a8*/
    case 59: /*0x71f3a8*/
      v3 = 13; /*0x71f3af*/
      break; /*0x71f3b4*/
    case 12: /*0x71f3a8*/
    case 13: /*0x71f3a8*/
    case 15: /*0x71f3a8*/
    case 16: /*0x71f3a8*/
    case 45: /*0x71f3a8*/
    case 46: /*0x71f3a8*/
    case 47: /*0x71f3a8*/
    case 51: /*0x71f3a8*/
    case 52: /*0x71f3a8*/
      v3 = 10; /*0x71f3b6*/
      break; /*0x71f3bb*/
    case 19: /*0x71f3a8*/
    case 32: /*0x71f3a8*/
    case 57: /*0x71f3a8*/
      v3 = 8; /*0x71f3cb*/
      break; /*0x71f3d0*/
    case 20: /*0x71f3a8*/
      v3 = 6; /*0x71f3d2*/
      break; /*0x71f3d7*/
    case 21: /*0x71f3a8*/
    case 54: /*0x71f3a8*/
      v3 = 5; /*0x71f3d9*/
      break; /*0x71f3de*/
    case 22: /*0x71f3a8*/
      v3 = 7; /*0x71f3e0*/
      break; /*0x71f3e5*/
    case 23: /*0x71f3a8*/
      v3 = 12; /*0x71f3e7*/
      break; /*0x71f3ec*/
    case 27: /*0x71f3a8*/
    case 28: /*0x71f3a8*/
      v3 = 22; /*0x71f3bd*/
      break; /*0x71f3c2*/
    case 34: /*0x71f3a8*/
      v3 = 9; /*0x71f3ee*/
      break; /*0x71f3f3*/
    case 36: /*0x71f3a8*/
    case 37: /*0x71f3a8*/
      v3 = 29; /*0x71f3c4*/
      break; /*0x71f3c9*/
    case 60: /*0x71f3a8*/
    case 61: /*0x71f3a8*/
      v3 = 43; /*0x71f3f5*/
      break; /*0x71f3fa*/
    default:
      v3 = 0; /*0x71f3fc*/
      break; /*0x71f3fc*/
  }
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f3fe*/
  if ( TEventClass_field_30 ) /*0x71f403*/
  {
    TEventClass_field_34 = TEventClass_field_30 + 36; /*0x71f408*/
    v8 = 1; /*0x71f409*/
    v7 = this->TEventClass_field_2C; /*0x71f40b*/
    v6 = aDDS; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA( /*0x71f443*/
               (LPSTR)&a2[strlen(a2)],
               aDDDS,
               TEventClass_field_2C,
               2,
               this->TEventClass_field_34,
               this->TEventClass_field_38);
    TEventClass_field_34 = this->TEventClass_field_34; /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = this->TEventClass_field_2C; /*0x71f449*/
    v6 = g_Str_Trace__d__d; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, TEventClass_field_34); /*0x71f441*/

}
}
// 0x71F800
namespace gamemd {
int TEventClass::CheckConditions(int a2, int a3)
{

  int result; // eax

  result = this->TEventClass_field_28; /*0x71f800*/
  if ( result == a2 ) /*0x71f809*/
  {
    result = *(unsigned int *)(result + 40); /*0x71f80b*/
    this->TEventClass_field_28 = result; /*0x71f80e*/
  }
  if ( this->TEventClass_field_30 == a2 ) /*0x71f814*/
    this->TEventClass_field_30 = 0; /*0x71f816*/
  return result; /*0x71f81d*/

}
}
// 0x71FA80
namespace gamemd {
void * TEventClass::Fire(void ** Block, char a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  TEventClass *v7; // [esp+8h] [ebp-4h] BYREF

  Block->AbstractClass = &vt_TEventClass; /*0x71fa86*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa8c*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa93*/
  ((unsigned int *)Block)[0] = &vt_TEventClass; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(&Block->AbstractClass, 1); /*0x71faa1*/
  v7 = Block; /*0x71fab6*/
  v3 = (*(int (**)(int *, TEventClass **))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 16))( /*0x71faba*/
         g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
         &v7);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0] ) /*0x71faca*/
  {
    --g_BuildingLoadQueue_Array.GateCloseDelay[0]; /*0x71facf*/
    for ( ; /*0x71fad5*/
          v3 < g_BuildingLoadQueue_Array.GateCloseDelay[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) )
    {
      ++v3; /*0x71fadd*/
    }
  }
  v7 = Block; /*0x71faff*/
  v4 = (*(int (**)(int *, TEventClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x71fb03*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v7);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x71fb13*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x71fb18*/
    for ( ; /*0x71fb1e*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x71fb26*/
    }
  }
  v7 = Block; /*0x71fb48*/
  v5 = (*(int (**)(int *, TEventClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 50)) + 16))( /*0x71fb4c*/
         &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 50),
         &v7);
  if ( v5 != -1 && v5 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 54)) ) /*0x71fb5c*/
  {
    --((unsigned int *)&g_BuildingLoadQueue_Array)[54]; /*0x71fb61*/
    for ( ; /*0x71fb67*/
          v5 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 54));
          *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 51)) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 51))
                                                                                + 4 * v5) )
    {
      ++v5; /*0x71fb6f*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)Block); /*0x71fb83*/
  if ( (a2 & 1) != 0 ) /*0x71fb8d*/
    __3_YAXPAX_Z(Block); /*0x71fb90*/
  return &Block->AbstractClass; /*0x71fb9a*/

}
}
// 0x71F820
namespace gamemd {
int TEventClass::ProcessEvent(int a2)
{

  int TEventClass_field_28; // eax
  int v4; // eax
  int TEventClass_field_30; // eax
  int v6; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x71f829*/
  TEventClass_field_28 = this->TEventClass_field_28; /*0x71f82e*/
  if ( TEventClass_field_28 ) /*0x71f833*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(TEventClass_field_28 + 4) + 16))(TEventClass_field_28 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(this->TEventClass_field_2C); /*0x71f84d*/
  TEventClass_field_30 = this->TEventClass_field_30; /*0x71f852*/
  if ( TEventClass_field_30 ) /*0x71f857*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(TEventClass_field_30 + 4) + 16))(TEventClass_field_30 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(this->TEventClass_field_34); /*0x71f876*/

}
} // namespace gamemd

// 0x71F880
namespace gamemd {
int TEventClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71f886*/
    return -2147467261; /*0x71f888*/
  *a2 = 1326367635; /*0x71f896*/
  a2[1] = 298977877; /*0x71f89e*/
  a2[2] = 1610655660; /*0x71f8a7*/
  a2[3] = unk_7E981C; /*0x71f8b0*/
  return 0; /*0x71f88d*/

}
} // namespace gamemd

// 0x71F8C0
namespace gamemd {
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( aP0 ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x71f8df*/
      aP0->AbstractClass = &vt_TEventClass; /*0x71f8e4*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8ea*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8f1*/
      ((unsigned int *)aP0)[0] = &vt_TEventClass; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_28); /*0x71f908*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_30); /*0x71f916*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->TEventClass_field_54); /*0x71f924*/
    return 0; /*0x71f929*/
  }
  return result; /*0x71f92b*/

}
} // namespace gamemd

// 0x71F930
namespace gamemd {
int TEventClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x71f93f*/
  if ( result >= 0 ) /*0x71f946*/
    return 0; /*0x71f948*/
  return result; /*0x71f94a*/

}
} // namespace gamemd

// 0x71FA50
namespace gamemd {
int TEventClass::StubReturn88()
{

  return 88; /*0x71fa55*/

}
} // namespace gamemd

// 0x71FA60
namespace gamemd {
int TEventClass::StubReturn48()
{

  return 48; /*0x71fa65*/

}
} // namespace gamemd

// 0x71FA70
namespace gamemd {
int TEventClass::Stub()
{

  return this->eventType; /*0x71fa73*/

}
} // namespace gamemd
