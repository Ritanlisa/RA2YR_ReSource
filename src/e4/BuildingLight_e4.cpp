// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"

// 0x5FF850
namespace gamemd {
Coord * * BuildingLight::CalculateShading(__m64, void * a1, void * a2)
{

  unsigned int *v2; // ecx
  unsigned int *v3; // ebp
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  uint16_t *v10; // edi
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  uint16_t v14; // si
  int v15; // ecx
  uint16_t v16; // ax
  int v17; // ebp
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  uint16_t v24; // si
  int v25; // edx
  int v26; // eax
  int v27; // esi
  int v28; // ecx
  int v29; // edx
  char v31; // [esp+13h] [ebp-81h] BYREF
  unsigned char *v32; // [esp+14h] [ebp-80h]
  uint16_t *v33; // [esp+18h] [ebp-7Ch]
  unsigned char *v34; // [esp+1Ch] [ebp-78h]
  int v35; // [esp+20h] [ebp-74h]
  int v36; // [esp+24h] [ebp-70h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  unsigned int v39;
  int v40; // [esp+34h] [ebp-60h]
  uint16_t *v41; // [esp+38h] [ebp-5Ch] BYREF
  unsigned char *v42; // [esp+3Ch] [ebp-58h] BYREF
  unsigned int *v43; // [esp+40h] [ebp-54h]
  uint8_t v44; // [esp+44h] [ebp-50h]
  uint8_t v45; // [esp+45h] [ebp-4Fh]
  uint8_t v46; // [esp+46h] [ebp-4Eh]
  int v47[2]; // [esp+4Ch] [ebp-48h] BYREF
  int v48[2]; // [esp+54h] [ebp-40h] BYREF
  int v49; // [esp+5Ch] [ebp-38h]
  int v50; // [esp+60h] [ebp-34h]
  int v51[4]; // [esp+64h] [ebp-30h] BYREF
  int v52[4]; // [esp+74h] [ebp-20h] BYREF
  int v53[4]; // [esp+84h] [ebp-10h] BYREF

  v3 = v2; /*0x5ff858*/
  v43 = v2; /*0x5ff85c*/
  v4 = v2[5] & 0xF; /*0x5ff863*/
  if ( (v2[5] & 0xE) != 0 /*0x5ff879*/
    || (v5 = PingPongBuffer::GetWriteOffset(), *(unsigned int *)&g_MissionQueueFrame.waypoints[282] >= v5) )
  {
    LOBYTE(v5) = (unsigned char)(((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v3, v47)); /*0x5ff88b*/
    if ( (unsigned char)v5 ) /*0x5ff892*/
    {
      if ( ((int)dword_A8B230->vtable1 & 0x1000) == 0 || (LOBYTE(v5) = Game::Stub3( (int)((IUnknown *)((int)v3))), !(unsigned char)v5) ) /*0x5ff8b2*/
      {
        v52[0] = (int)((gamemd::AudioStream *)(v47[0] - 128));
        v53[0] = DSurface_ViewBounds.field_0; /*0x5ff8d9*/
        v53[1] = (int)DSurface_ViewBounds.field_4; /*0x5ff8e6*/
        v6 = v3[3]; /*0x5ff8ed*/
        v53[3] = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x5ff8f0*/
        v7 = ((unsigned int *)(byte_83358C))[v6]; /*0x5ff8ff*/
        v52[1] = (BYTE)(v47[1] - 64);
        v39 = (BYTE)(g_DSurface_Hidden_2);
        v52[2] = (BYTE)(255);
        v52[3] = (BYTE)(127);
        v53[2] = (BYTE)(*(unsigned int *)DSurface_ViewBounds.__pad_8);
        if ( v7 < 64 ) /*0x5ff92c*/
          v7 = v7 * v3[4] / 64; /*0x5ff93d*/
        v8 = *(unsigned int *)g_DSurface_Hidden_2->__pad_0; /*0x5ff946*/
        v40 = ((unsigned int *)(dword_AC1698))[v7]; /*0x5ff94a*/
        v9 = (*(int (**)(void *))(v8 + 116))( (void *)(g_DSurface_Hidden_2)); /*0x5ff951*/
        v48[0] = 0; /*0x5ff95a*/
        v48[1] = 0; /*0x5ff95e*/
        v51[0] = 0; /*0x5ff962*/
        v51[1] = 0; /*0x5ff966*/
        v49 = 255; /*0x5ff96a*/
        v51[2] = 255; /*0x5ff96e*/
        v36 = v9; /*0x5ff9a3*/
        v31 = 0; /*0x5ff9a7*/
        v50 = 127; /*0x5ff9ac*/
        v51[3] = 127; /*0x5ff9b0*/
        LOBYTE(v5) = (unsigned char)(CalcSurfaceBlitRects((int)v39, v53,(gamemd::IUnknown *)(v52), v40, v51,(gamemd::IUnknown *)(v48),(unsigned char *)(&v31), (int *)&v41, (int *)&v42)); /*0x5ff9b7*/
        if ( (unsigned char)v5 ) /*0x5ff9be*/
        {
          v10 = v41; /*0x5ff9c4*/
          v33 = v41; /*0x5ff9d6*/
          v34 = v42; /*0x5ff9da*/
          v32 = v42; /*0x5ff9de*/
          if ( v4 ) /*0x5ff9e2*/
          {
LABEL_23:
            v11 = v3[5]; /*0x5ffb1c*/
            if ( (v11 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v50 > 0 ) /*0x5ffb31*/
              {
                v12 = v49; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v12; ++i ) /*0x5ffb41*/
                  {
                    v13 = *v32 == 0; /*0x5ffb4e*/
                    LOBYTE(v35) = *v32++; /*0x5ffb50*/
                    if ( !v13 ) /*0x5ffb58*/
                    {
                      v14 = *v10; /*0x5ffb62*/
                      v44 = (uint8_t)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffb91*/
                      v45 = (uint8_t)(v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffba9*/
                      v46 = (uint8_t)(v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffbc2*/
                      *v10 = (((256 - (uint8_t)v35) * v44) >> 8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x5ffc1a*/
                           | (((256 - (uint8_t)v35) * v46) >> 8 >> g_BitMask_Red << g_BitShift_Blue)
                           | (((256 - (uint8_t)v35) * v45) >> 8 >> g_BitMask_Blue << g_BitMask_Green);
                      v12 = v49; /*0x5ffc1d*/
                      v9 = v36; /*0x5ffc21*/
                    }
                    ++v10; /*0x5ffc29*/
                  }
                  v34 += 256; /*0x5ffc4c*/
                  v32 = v34; /*0x5ffc50*/
                  v10 = (uint16_t *)((char *)v33 + v9); /*0x5ffc58*/
                  v33 = (uint16_t *)((char *)v33 + v9); /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v50 ); /*0x5ffc65*/
              }
            }
            else if ( (v11 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v50 > 0 ) /*0x5ffc82*/
              {
                v15 = v49; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v15; ++j ) /*0x5ffc92*/
                  {
                    v13 = *v32 == 0; /*0x5ffc9f*/
                    LOBYTE(v35) = *v32++; /*0x5ffca1*/
                    if ( !v13 ) /*0x5ffca9*/
                    {
                      v16 = *v10; /*0x5ffcaf*/
                      v17 = (uint8_t)v35 + 256; /*0x5ffcd0*/
                      v44 = (uint8_t)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffcdf*/
                      v45 = (uint8_t)(v16 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffd00*/
                      v18 = v43[5]; /*0x5ffd0a*/
                      v46 = (uint8_t)(v16 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffd0d*/
                      v19 = v44; /*0x5ffd1d*/
                      v20 = v45; /*0x5ffd22*/
                      v21 = v46; /*0x5ffd28*/
                      if ( (v18 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v19 = (v17 * v44) >> 8; /*0x5ffd36*/
                        if ( v19 > 255 ) /*0x5ffd3e*/
                          v19 = 255; /*0x5ffd40*/
                      }
                      if ( (v18 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v20 = (v17 * v45) >> 8; /*0x5ffd4d*/
                        if ( v20 > 255 ) /*0x5ffd56*/
                          v20 = 255; /*0x5ffd58*/
                      }
                      if ( (v18 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v21 = (v17 * v46) >> 8; /*0x5ffd65*/
                        if ( v21 > 255 ) /*0x5ffd6e*/
                          v21 = 255; /*0x5ffd70*/
                      }
                      v22 = (v20 >> g_BitMask_Blue << g_BitMask_Green) | (v19 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x5ffd9f*/
                      v9 = v36; /*0x5ffda1*/
                      *v10 = (v21 >> g_BitMask_Red << g_BitShift_Blue) | v22; /*0x5ffda9*/
                      v15 = v49; /*0x5ffdac*/
                    }
                    ++v10; /*0x5ffdb4*/
                  }
                  v34 += 256; /*0x5ffdd7*/
                  v32 = v34; /*0x5ffddb*/
                  v10 = (uint16_t *)((char *)v33 + v9); /*0x5ffde3*/
                  v33 = (uint16_t *)((char *)v33 + v9); /*0x5ffde6*/
                  ++i; /*0x5ffdec*/
                }
                while ( i < v50 ); /*0x5ffdf0*/
              }
            }
            else
            {
              i = 0; /*0x5ffdff*/
              if ( v50 > 0 ) /*0x5ffe05*/
              {
                v23 = v49; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v23; ++j ) /*0x5ffe15*/
                  {
                    v13 = *v32 == 0; /*0x5ffe22*/
                    LOBYTE(v35) = *v32++; /*0x5ffe24*/
                    if ( !v13 ) /*0x5ffe2c*/
                    {
                      v24 = *v10; /*0x5ffe32*/
                      v25 = (uint8_t)v35 + 256; /*0x5ffe55*/
                      v44 = (uint8_t)(*v10 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffe64*/
                      v45 = (uint8_t)(v24 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffe7c*/
                      v46 = (uint8_t)(v24 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffe8d*/
                      v26 = (v25 * v46) >> 8; /*0x5ffeb7*/
                      v27 = (v25 * v44) >> 8; /*0x5ffeba*/
                      v28 = (v25 * v45) >> 8; /*0x5ffebd*/
                      if ( v26 > 255 ) /*0x5ffec5*/
                        v26 = 255; /*0x5ffec7*/
                      v29 = 255; /*0x5ffed2*/
                      if ( v28 <= 255 ) /*0x5ffed7*/
                        v29 = v28; /*0x5ffed9*/
                      if ( v27 > 255 ) /*0x5ffee1*/
                        v27 = 255; /*0x5ffee3*/
                      *v10 = (v26 >> g_BitMask_Red << g_BitShift_Blue) /*0x5fff14*/
                           | (v29 >> g_BitMask_Blue << g_BitMask_Green)
                           | (v27 >> g_BitShift_Green_0 << g_BitShift_Red);
                      v23 = v49; /*0x5fff17*/
                      v9 = v36; /*0x5fff1b*/
                    }
                    ++v10; /*0x5fff23*/
                  }
                  v34 += 256; /*0x5fff46*/
                  v32 = v34; /*0x5fff4a*/
                  v10 = (uint16_t *)((char *)v33 + v9); /*0x5fff52*/
                  v33 = (uint16_t *)((char *)v33 + v9); /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while (i < v50, unsigned int a2); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( dword_833588 ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa00*/
                  Object_Calc_7DF3C2((gamemd::MouseClass *)a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa15*/
                else
                  Object_Calc_7DF191((gamemd::MouseClass *)(v42), v41, 256, v9, v49, v50); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa49*/
                  Object_Calc_7DF500((gamemd::MouseClass *)a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffa5e*/
                else
                  Object_Calc_7DF0B4((gamemd::MouseClass *)(v42), v41, 256, v9, v49, v50); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa92*/
                  Object_Calc_7DF280((gamemd::MouseClass *)a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaa7*/
                else
                  Object_Calc((gamemd::MouseClass *)(v42), v41, 256, v9, v49, v50); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffadb*/
                  Object_Calc_7DF640((gamemd::MouseClass *)a2, v42, v41, 256, v9, v49, v50, (int)dword_AC1838); /*0x5ffaf0*/
                else
                  Object_Calc_7DEFD7((gamemd::MouseClass *)(v42), v41, 256, v9, v49, v50); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (**)(AudioStream *))(*(unsigned int *)v39->__pad_0 + 96))( (AudioStream *)(v39)); /*0x5fff6b*/
          LOBYTE(v5) = (*(char (**)(int))(*(unsigned int *)v40 + 96))(v40); /*0x5fff74*/
        }
      }
    }
  }
  return (gamemd::Coord **)(v5); /*0x5fff77*/

}
// 0x4CAD80
namespace gamemd {
double BuildingLight::CalcIntensity(double a1)
{

  int v1; // eax

  LOWORD(v1) = Math::RoundToInt((a1 + 1.0) * -2048.0); /*0x4cad90*/
  return 4 * v1; /*0x4cada1*/

}
} // namespace gamemd
