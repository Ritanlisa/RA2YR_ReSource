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

// 0x71E940
namespace gamemd {
DynamicVector * TEventClass::Execute( int a2, int a3, int a4, int * a5, int a6, int a7)
{

  int v8; // ecx
  int v9; // eax
  unsigned char * v10;
  const char *v11; // edx
  char *v12; // ebp
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  unsigned char * v16;
  int v18; // eax
  unsigned char * v19;
  const char *v20; // edx
  char *v21; // ebp
  int v22; // edi
  unsigned char * v23;
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  void *v28; // ecx
  int v29; // esi
  int v30; // esi
  int *WorldCoords; // eax
  int v32; // esi
  int v33; // edi
  int v34; // ebx
  int *v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  double v39; // st7
  int v40; // esi
  int v41; // edx
  char *v42; // ecx
  int v43; // eax
  int v44; // esi
  int v45; // edx
  int *v46; // eax
  int v47; // ecx
  int v48; // eax
  int Owner; // esi
  int v50; // eax
  void *v51; // ecx
  void *v52; // edi
  int v53; // ebx
  unsigned int v55[3]; // [esp+20h] [ebp-18h] BYREF
  unsigned char v56[12]; // [esp+2Ch] [ebp-Ch] BYREF

  v8 = *(this + 11); /*0x71e94d*/
  switch ( v8 ) /*0x71e964*/
  {
    case 13: /*0x71e964*/
    case 51: /*0x71e964*/
      v26 = *a5; /*0x71ec37*/
      v27 = a5[2]; /*0x71ec39*/
      if ( *a5 == -1 ) /*0x71ec3f*/
        goto LABEL_44; /*0x71ec3f*/
      if ( (int)g_abs_A8ED84 - v26 < v27 ) /*0x71ec4b*/
      {
        v27 -= (int)g_abs_A8ED84 - v26; /*0x71ec4d*/
LABEL_44:
        if ( v27 ) /*0x71ec51*/
          return 0; /*0x71ec51*/
      }
      return 1; /*0x71ec60*/
    case 14: /*0x71e964*/
      if ( *((unsigned int *)g_abs_A8B230 + 1146) == -1 ) /*0x71ebf6*/
        return 0; /*0x71ebf6*/
      v24 = *((unsigned int *)g_abs_A8B230 + 1146); /*0x71ebfc*/
      v25 = *((unsigned int *)g_abs_A8B230 + 1148); /*0x71ec02*/
      if ( v24 == -1 ) /*0x71ec0b*/
        return !v25; /*0x71ec0b*/
      if ( (int)g_abs_A8ED84 - v24 >= v25 ) /*0x71ec17*/
        return 1; /*0x71ec17*/
      v25 -= (int)g_abs_A8ED84 - v24; /*0x71ec1d*/
      return !v25; /*0x71ec21*/
    case 27: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID(g_abs_A8B230, *(this + 13), &a6); /*0x71eb62*/
      return a6; /*0x71eb72*/
    case 28: /*0x71e964*/
      ScenarioClass::GetGlobalStateByID(g_abs_A8B230, *(this + 13), &a6); /*0x71eb84*/
      return (unsigned char)a6 == 0; /*0x71eb9b*/
    case 36: /*0x71e964*/
      ScenarioClass::GetLocalStateByID(g_abs_A8B230, *(this + 13), &a6); /*0x71ebad*/
      return a6; /*0x71ebbd*/
    case 37: /*0x71e964*/
      ScenarioClass::GetLocalStateByID(g_abs_A8B230, *(this + 13), &a6); /*0x71ebcf*/
      return (unsigned char)a6 == 0; /*0x71ebe6*/
    case 45: /*0x71e964*/
      return *((unsigned int *)g_abs_A8B230 + 3403) <= *(this + 13); /*0x71eb03*/
    case 46: /*0x71e964*/
      return *((unsigned int *)g_abs_A8B230 + 3403) >= *(this + 13); /*0x71eb25*/
    case 47: /*0x71e964*/
      return *(this + 13) <= (int)g_abs_A8ED84 / 15; /*0x71eb50*/
    case 60: /*0x71e964*/
      v9 = -1; /*0x71e971*/
      v10 = g_abs_A8EB10 - 1; /*0x71e974*/
      a6 = -1; /*0x71e975*/
      if ( g_abs_A8EB10 - 1 < 0 ) /*0x71e97b*/
        goto LABEL_8; /*0x71e97b*/
      v11 = (const char *)(this + 14); /*0x71e982*/
      v12 = (char *)g_abs_A8EB04 + 4 * v10; /*0x71e985*/
      while ( strcmp((const char *)(*(unsigned int *)v12 + 36), v11) ) /*0x71e9bb*/
      {
        --v10; /*0x71e9bd*/
        v12 -= 4; /*0x71e9be*/
        if ( v10 < 0 ) /*0x71e9c3*/
        {
          v9 = a6; /*0x71e9c5*/
          goto LABEL_8; /*0x71e9c9*/
        }
      }
      v9 = (int)(v10);
LABEL_8:
      if ( v9 >= (int)((int))((int))(g_abs_A8EB10) ) /*0x71e9d3*/
        return 0; /*0x71e9d3*/
      if ( v9 < 0 ) /*0x71e9db*/
        return 0; /*0x71e9db*/
      v13 = 0; /*0x71e9eb*/
      v14 = *((unsigned int *)g_abs_A8EB04 + v9); /*0x71e9ed*/
      v15 = *(this + 13); /*0x71e9f5*/
      v16 = g_abs_A8EC88 - 1; /*0x71e9f8*/
      if ( g_abs_A8EC88 - 1 < 0 ) /*0x71e9fd*/
        return 0; /*0x71e9fd*/
      while ( 1 ) /*0x71ea03*/
      {
        if ( (*(int (**)(unsigned int))(**((unsigned int **)g_abs_A8EC7C + v16) + 132))(*((unsigned int *)g_abs_A8EC7C /*0x71ea16*/
                                                                                           + v16)) == v14 )
          ++v13; /*0x71ea18*/
        if ( v13 >= v15 ) /*0x71ea1b*/
          break; /*0x71ea1b*/
        if ( --v16 < 0 ) /*0x71ea22*/
          return 0; /*0x71ea2d*/
      }
      return (int)(1);
    case 61: /*0x71e964*/
      v18 = -1; /*0x71ea36*/
      v19 = g_abs_A8EB10 - 1; /*0x71ea39*/
      a6 = -1; /*0x71ea3a*/
      if ( g_abs_A8EB10 - 1 < 0 ) /*0x71ea40*/
        goto LABEL_22; /*0x71ea40*/
      v20 = (const char *)(this + 14); /*0x71ea47*/
      v21 = (char *)g_abs_A8EB04 + 4 * v19; /*0x71ea4a*/
      while ( strcmp((const char *)(*(unsigned int *)v21 + 36), v20) ) /*0x71ea80*/
      {
        --v19; /*0x71ea82*/
        v21 -= 4; /*0x71ea83*/
        if ( v19 < 0 ) /*0x71ea88*/
        {
          v18 = a6; /*0x71ea8a*/
          goto LABEL_22; /*0x71ea8e*/
        }
      }
      v18 = (int)(v19);
LABEL_22:
      if ( v18 >= (int)((int))((int))(g_abs_A8EB10) || v18 < 0 ) /*0x71eaa0*/
        return 0; /*0x71eaa0*/
      v22 = *((unsigned int *)g_abs_A8EB04 + v18); /*0x71eab2*/
      v23 = g_abs_A8EC88 - 1; /*0x71eab5*/
      if ( g_abs_A8EC88 - 1 < 0 ) /*0x71eaba*/
        return 1; /*0x71eaba*/
      while ( (*(int (**)(unsigned int))(**((unsigned int **)g_abs_A8EC7C + v23) + 132))(*((unsigned int *)g_abs_A8EC7C /*0x71ead2*/
                                                                                            + v23)) != v22 )
      {
        if ( --v23 < 0 ) /*0x71ead9*/
          return 1; /*0x71eae4*/
      }
      return 0; /*0x71ead2*/
    default:
      if ( !v8 ) /*0x71ec65*/
        return 0; /*0x71ec65*/
      if ( v8 != 19 && v8 != 20 && v8 != 21 && v8 != 22 ) /*0x71ec81*/
      {
        switch ( v8 ) /*0x71ec93*/
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
            if ( a2 == v8 && !g_abs_A8ED6B ) /*0x71eca9*/
              break; /*0x71eca9*/
            return 0; /*0x71eca9*/
          default:
            break;
        }
      }
      switch ( v8 ) /*0x71ecd6*/
      {
        case 1: /*0x71ecd6*/
        case 25: /*0x71ecd6*/
        case 26: /*0x71ecd6*/
        case 24: /*0x71ecd6*/
        case 59: /*0x71ecd6*/
          if ( a2 == v8 ) /*0x71f1bf*/
          {
            v51 = (void *)*(this + 13); /*0x71f1c1*/
            if ( v51 == (void *)-1 || HouseClass::FindOwner(v51) ) /*0x71f1c9*/
            {
              if ( a4 ) /*0x71f1d8*/
              {
                v52 = (void *)*(this + 13); /*0x71f1da*/
                if ( v52 == (void *)-1 /*0x71f1f5*/
                  || (v53 = (*(int (**)(int))(*(unsigned int *)a4 + 56))(a4),
                      v53 == *(unsigned int *)(HouseClass::FindOwner(v52) + 48)) )
                {
                  *(unsigned char *)a6 = 1; /*0x71f1ff*/
                  *(this + 21) = (*(int (**)(int))(*(unsigned int *)a4 + 60))(a4); /*0x71f209*/
                  return 1; /*0x71f20f*/
                }
              }
            }
          }
          return 0; /*0x71f16c*/
        case 53: /*0x71ecd6*/
          if ( a2 == 53 ) /*0x71ece3*/
          {
            if ( a4 ) /*0x71ecef*/
            {
              v28 = (void *)*(this + 13); /*0x71ecf5*/
              if ( v28 != (void *)-1 ) /*0x71ecfb*/
              {
                if ( HouseClass::FindOwner(v28) ) /*0x71ed01*/
                {
                  if ( (*(int (**)(int, int))(*(unsigned int *)a4 + 208))(a4, 1) ) /*0x71ed14*/
                  {
                    v29 = (*(int (**)(int, int))(*(unsigned int *)a4 + 208))(a4, 1); /*0x71ed31*/
                    if ( *(unsigned int *)(v29 + 48) == *(unsigned int *)(HouseClass::FindOwner((void *)*(this + 13)) + 48) ) /*0x71ed40*/
                    {
                      *(unsigned char *)a6 = 1; /*0x71ed4d*/
                      return 1; /*0x71ed56*/
                    }
                  }
                }
              }
            }
          }
          return 0; /*0x71ed40*/
        case 54: /*0x71ecd6*/
          if ( a2 == 54 ) /*0x71ed60*/
          {
            if ( a4 ) /*0x71ed6c*/
            {
              v30 = (*(int (**)(int, int))(*(unsigned int *)a4 + 204))(a4, 1); /*0x71ed7c*/
              if ( (*(int (**)(int))(*(unsigned int *)v30 + 44))(v30) == 16 /*0x71eda2*/
                && *(this + 13) != -1
                && (*(int (**)(int))(*(unsigned int *)v30 + 64))(v30) == *(this + 13) )
              {
                *(unsigned char *)a6 = 1; /*0x71edaf*/
                return 1; /*0x71edb8*/
              }
            }
          }
          return 0; /*0x71eda2*/
        case 34: /*0x71ecd6*/
          if ( a2 == 34 ) /*0x71edc6*/
          {
            WorldCoords = (int *)(Cell::GetWorldCoords((int16_t *)g_abs_A8B230, v55, *(this + 13)));
            v32 = *WorldCoords; /*0x71ede0*/
            v33 = WorldCoords[1]; /*0x71ede6*/
            v34 = WorldCoords[2]; /*0x71edeb*/
            v35 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a4 + 72))(a4, v56); /*0x71edf3*/
            v36 = v35[1]; /*0x71edf6*/
            v37 = *v35; /*0x71edf9*/
            v38 = v35[2]; /*0x71edfb*/
            v55[1] = v36 - v33; /*0x71ee00*/
            v55[2] = v38 - v34; /*0x71ee0c*/
            v55[0] = v37 - v32; /*0x71ee14*/
            v39 = Math::Sqrt( /*0x71ee38*/
                    (double)(v37 - v32) * (double)(v37 - v32)
                  + (double)(v38 - v34) * (double)(v38 - v34)
                  + (double)(v36 - v33) * (double)(v36 - v33));
            return (int)Math::RoundToInt(v39) <= 1280; /*0x71ee54*/
          }
          return 0; /*0x71edc6*/
      }
      if ( v8 == 44 && (a2 != 44 || !a7 || *(this + 13) != *(unsigned int *)(*(unsigned int *)(a7 + 540) + 48)) ) /*0x71ee7c*/
        return 0; /*0x71ee7c*/
      if ( a3 ) /*0x71ee88*/
      {
        switch ( v8 ) /*0x71eea2*/
        {
          case 12: /*0x71eea2*/
            if ( (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36) >= *(this + 13) ) /*0x71ef0e*/
              goto LABEL_122; /*0x71ef0e*/
            return 0; /*0x71ef1d*/
          case 15: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 21640) >= *(this + 13) ) /*0x71f04a*/
              goto LABEL_122; /*0x71f04a*/
            return 0; /*0x71f055*/
          case 16: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 21556) >= *(this + 13) ) /*0x71f063*/
              goto LABEL_122; /*0x71f063*/
            return 0; /*0x71f063*/
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
                  return 0; /*0x71ef7b*/
              }
              ++v45; /*0x71ef81*/
              ++v46; /*0x71ef82*/
              if ( v45 >= v44 ) /*0x71ef87*/
                goto LABEL_122; /*0x71ef87*/
            }
          case 18: /*0x71eea2*/
            if ( *(unsigned char *)(a3 + 505) ) /*0x71ef8e*/
              goto LABEL_122; /*0x71ef96*/
            return 0; /*0x71efa5*/
          case 19: /*0x71eea2*/
            v48 = (int)(*(unsigned int *)(a3 + 620));
            goto LABEL_112; /*0x71efeb*/
          case 20: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 628) != *(this + 13) ) /*0x71f00e*/
              return 0; /*0x71f00e*/
            *(unsigned char *)a6 = 1; /*0x71f018*/
            goto LABEL_122; /*0x71f01b*/
          case 21: /*0x71eea2*/
            if ( *(unsigned int *)(a3 + 624) != *(this + 13) ) /*0x71f028*/
              return 0; /*0x71f028*/
            *(unsigned char *)a6 = 1; /*0x71f032*/
            goto LABEL_122; /*0x71f035*/
          case 22: /*0x71eea2*/
            v48 = *(unsigned int *)(a3 + 632); /*0x71f037*/
LABEL_112:
            if ( v48 != *(this + 13) ) /*0x71eff4*/
              return 0; /*0x71eff4*/
            *(unsigned char *)a6 = 1; /*0x71effe*/
            goto LABEL_122; /*0x71f001*/
          case 23: /*0x71eea2*/
            v40 = g_abs_8B40F8; /*0x71eea9*/
            v41 = 0; /*0x71eeaf*/
            if ( g_abs_8B40F8 <= (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0) ) /*0x71eeb3*/
              goto LABEL_91; /*0x71eeb3*/
            v42 = (char *)g_abs_8B40EC; /*0x71eeb8*/
            break; /*0x71eeb8*/
          case 32: /*0x71eea2*/
            if ( !((DynamicVector *)((unsigned int *)(a3 + 21840)))->GetOrGrow(*(this + 13)) ) /*0x71efb9*/
              return 0; /*0x71efb9*/
            *(unsigned char *)a6 = 1; /*0x71efc3*/
            goto LABEL_122; /*0x71efc6*/
          case 52: /*0x71eea2*/
            if ( (*(int (**)(int))(*(unsigned int *)(a3 + 36) + 24))(a3 + 36) <= *(this + 13) ) /*0x71ef2d*/
              goto LABEL_122; /*0x71ef2d*/
            return 0; /*0x71ef3c*/
          case 57: /*0x71eea2*/
            if ( ((DynamicVector *)((unsigned int *)(a3 + 21840)))->GetOrGrow(*(this + 13)) ) /*0x71efd5*/
              return 0; /*0x71efdc*/
            *(unsigned char *)a6 = 1; /*0x71efe6*/
            goto LABEL_122; /*0x71efe9*/
          default:
            goto LABEL_122;
        }
        while ( 1 ) /*0x71eebe*/
        {
          v43 = *(unsigned int *)v42; /*0x71eebe*/
          if ( *(unsigned int *)(*(unsigned int *)v42 + 36) == *(this + 12) && !*(unsigned int *)(v43 + 84) && *(unsigned char *)(v43 + 130) ) /*0x71eecc*/
            break; /*0x71eecc*/
          ++v41; /*0x71eed6*/
          v42 += 4; /*0x71eed7*/
          if ( v41 >= (int)((int))((int))(g_abs_8B40F8) ) /*0x71eedc*/
            goto LABEL_91; /*0x71eedc*/
        }
        *(unsigned char *)a6 = 1; /*0x71eee4*/
        v40 = g_abs_8B40F8; /*0x71eee7*/
LABEL_91:
        if ( v41 == v40 ) /*0x71eeef*/
          return 0; /*0x71eefe*/
      }
LABEL_122:
      Owner = HouseClass::FindOwner((void *)*(this + 13)); /*0x71f069*/
      if ( Owner ) /*0x71f075*/
      {
        switch ( *(this + 11) ) /*0x71f092*/
        {
          case 3: /*0x71f092*/
            return *(unsigned char *)(Owner + 580) != 0; /*0x71f0f8*/
          case 5: /*0x71f092*/
            return *(unsigned char *)(Owner + 500) != 0; /*0x71f112*/
          case 9: /*0x71f092*/
            if ( VectorClass::GetCount((unsigned int *)(Owner + 21860)) > 0 ) /*0x71f13c*/
              return 0; /*0x71f13c*/
            return VectorClass::GetCount((unsigned int *)(Owner + 21880)) <= 0; /*0x71f156*/
          case 0xA: /*0x71f092*/
            return *(int *)(Owner + 752) <= 0; /*0x71f12c*/
          case 0xB: /*0x71f092*/
            return *(int *)(Owner + 752) <= 0 /*0x71f1af*/
                && VectorClass::GetCount((unsigned int *)(Owner + 21860)) <= 0
                && VectorClass::GetCount((unsigned int *)(Owner + 21880)) <= 0;
          case 0x1E: /*0x71f092*/
            return HouseClass::GetPowerRatio((int *)Owner) < 1.0; /*0x71f0ba*/
          case 0x37: /*0x71f092*/
            v50 = *(unsigned int *)(Owner + 748); /*0x71f159*/
            return v50 <= 0; /*0x71f159*/
          case 0x38: /*0x71f092*/
            if ( *(unsigned int *)(Owner + 744) - *(unsigned int *)(Owner + 748) > 0 ) /*0x71f17f*/
              return 0; /*0x71f17f*/
            v50 = *(unsigned int *)(Owner + 756); /*0x71f181*/
            return v50 <= 0; /*0x71f161*/
          case 0x3A: /*0x71f092*/
            return HouseClass::GetPowerRatio((int *)Owner) >= 1.0; /*0x71f0de*/
          default:
            return 1;
        }
      }
      return 1;
  }

}
}
// 0x71F390
namespace gamemd {
int TEventClass::PrepareSaveToINI(const char * a2)
{

  int v2; // edx
  int v3; // eax
  int v4; // esi
  const unsigned int v6;
  int v7; // [esp-Ch] [ebp-14h]
  int v8; // [esp-8h] [ebp-10h]
  int v9; // [esp-4h] [ebp-Ch]

  v2 = *((char *)this + 11); /*0x71f390*/
  switch ( v2 ) /*0x71f3a8*/
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
  v4 = *((char *)this + 12); /*0x71f3fe*/
  if ( v4 ) /*0x71f403*/
  {
    v9 = (const CHAR *)(v4 + 36);
    v8 = (const CHAR *)(1);
    v7 = (const CHAR *)(*((char *)this + 11));
    v6 = g_abs_844714; /*0x71f40c*/
  }
  else
  {
    if ( v3 == 43 ) /*0x71f416*/
      return wsprintfA((LPSTR)&a2[strlen(a2)], g_abs_8258DC, v2, 2, *((char *)this + 13), (char *)this + 14); /*0x71f443*/
    v9 = *((char *)this + 13); /*0x71f446*/
    v8 = 0; /*0x71f447*/
    v7 = *((char *)this + 11); /*0x71f449*/
    v6 = g_abs_8189B0; /*0x71f44a*/
  }
  return wsprintfA((LPSTR)&a2[strlen(a2)], v6, v7, v8, v9); /*0x71f441*/

}
}
// 0x71F800
namespace gamemd {
int TEventClass::CheckConditions(int a2, int a3)
{

  int result; // eax

  result = *((unsigned int *)this + 10); /*0x71f800*/
  if ( result == a2 ) /*0x71f809*/
  {
    result = *(unsigned int *)(result + 40); /*0x71f80b*/
    *((unsigned int *)this + 10) = result; /*0x71f80e*/
  }
  if ( *((unsigned int *)this + 12) == a2 ) /*0x71f814*/
    *((unsigned int *)this + 12) = 0; /*0x71f816*/
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
  void **v7; // [esp+8h] [ebp-4h] BYREF

  *Block = &vt_TEventClass; /*0x71fa86*/
  *(Block + 1) = &vt_TEventClass; /*0x71fa8c*/
  *(Block + 2) = &vt_TEventClass; /*0x71fa93*/
  *(Block + 3) = &vt_TEventClass; /*0x71fa9a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x71faa1*/
  v7 = Block; /*0x71fab6*/
  v3 = (*(int (**)(int *, void ***))(g_abs_B0F658 + 16))(&g_abs_B0F658, &v7); /*0x71faba*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_B0F668) && v3 < --g_abs_B0F668 ) /*0x71fad5*/
  {
    do /*0x71faed*/
    {
      ++v3; /*0x71fadd*/
      *((unsigned int *)g_abs_B0F65C + v3 - 1) = *((unsigned int *)g_abs_B0F65C + v3); /*0x71fae1*/
    }
    while ( v3 < (int)((int))((int))(g_abs_B0F668) ); /*0x71faed*/
  }
  v7 = Block; /*0x71faff*/
  v4 = (*(int (**)(int *, void ***))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v7); /*0x71fb03*/
  if ( v4 != -1 && v4 < (int)((int))((int))(g_abs_B0F680) && v4 < --g_abs_B0F680 ) /*0x71fb1e*/
  {
    do /*0x71fb36*/
    {
      ++v4; /*0x71fb26*/
      *((unsigned int *)g_abs_B0F674 + v4 - 1) = *((unsigned int *)g_abs_B0F674 + v4); /*0x71fb2a*/
    }
    while ( v4 < (int)((int))((int))(g_abs_B0F680) ); /*0x71fb36*/
  }
  v7 = Block; /*0x71fb48*/
  v5 = (*(int (**)(int *, void ***))(g_abs_B0F1A0 + 16))(&g_abs_B0F1A0, &v7); /*0x71fb4c*/
  if ( v5 != -1 && v5 < g_abs_B0F1B0 && v5 < --g_abs_B0F1B0 ) /*0x71fb67*/
  {
    do /*0x71fb7f*/
    {
      ++v5; /*0x71fb6f*/
      *((unsigned int *)g_abs_B0F1A4 + v5 - 1) = *((unsigned int *)g_abs_B0F1A4 + v5); /*0x71fb73*/
    }
    while ( v5 < g_abs_B0F1B0 ); /*0x71fb7f*/
  }
  AbstractClass::DTOR(Block); /*0x71fb83*/
  if ( (Block & 1) != 0 ) /*0x71fb8d*/
    RA2_OPDEL(Block); /*0x71fb90*/
  return (TEventClass *)Block; /*0x71fb9a*/

}
}
// 0x71F820
namespace gamemd {
int TEventClass::ProcessEvent(int a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  AbstractClass::ProcessPower((void *)this); /*0x71f829*/
  v3 = *((unsigned int *)this + 10); /*0x71f82e*/
  if ( v3 ) /*0x71f833*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x71f83c*/
    Power::TimerProcess(v4); /*0x71f842*/
  }
  Power::TimerProcess(*((unsigned int *)this + 11)); /*0x71f84d*/
  v5 = *((unsigned int *)this + 12); /*0x71f852*/
  if ( v5 ) /*0x71f857*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x71f860*/
    Power::TimerProcess(v6); /*0x71f866*/
  }
  return Power::TimerProcess(*((unsigned int *)this + 13)); /*0x71f876*/

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
  a2[3] = -1252326136; /*0x71f8b0*/
  return 0; /*0x71f88d*/

}
} // namespace gamemd

// 0x71F8C0
namespace gamemd {
int TEventClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x71f8cb*/
  if ( result >= 0 ) /*0x71f8d2*/
  {
    if ( aP0 ) /*0x71f8d6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x71f8df*/
      *(unsigned int *)aP0->__pad_0 = &vt_TEventClass; /*0x71f8e4*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_TEventClass; /*0x71f8ea*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_TEventClass; /*0x71f8f1*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_TEventClass; /*0x71f8f8*/
    }
    ObjectPtr::RegisterForTracking( /*0x71f908*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x71f916*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[12]);
    ObjectPtr::RegisterForTracking( /*0x71f924*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].__pad_0[12]);
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

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71f93f*/
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

  return *((unsigned int *)this + 9); /*0x71fa73*/

}
} // namespace gamemd
