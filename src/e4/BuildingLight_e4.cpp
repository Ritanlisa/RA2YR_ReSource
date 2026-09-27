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

// 0x5FF850
namespace gamemd {
Coord * * BuildingLight::CalculateShading()
{
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  uint16_t *v8; // edi
  void * v9;
  int v10; // ecx
  bool v11; // zf
  uint16_t v12; // si
  int v13; // ecx
  uint16_t v14; // ax
  int v15; // ebp
  void * v16;
  int v17; // eax
  int v18; // esi
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  uint16_t v22; // si
  int v23; // edx
  int v24; // eax
  int v25; // esi
  int v26; // ecx
  int v27; // edx
  char v29; // [esp+13h] [ebp-81h] BYREF
  unsigned char *v30; // [esp+14h] [ebp-80h]
  int v31; // [esp+18h] [ebp-7Ch]
  int v32; // [esp+1Ch] [ebp-78h]
  int v33; // [esp+20h] [ebp-74h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  int v38; // [esp+34h] [ebp-60h]
  uint16_t *v39; // [esp+38h] [ebp-5Ch] BYREF
  unsigned char *v40; // [esp+3Ch] [ebp-58h] BYREF
  uint8_t v42; // [esp+44h] [ebp-50h]
  uint8_t v43; // [esp+45h] [ebp-4Fh]
  uint8_t v44; // [esp+46h] [ebp-4Eh]
  int v45[2]; // [esp+4Ch] [ebp-48h] BYREF
  int v46[2]; // [esp+54h] [ebp-40h] BYREF
  int v47; // [esp+5Ch] [ebp-38h]
  int v48; // [esp+60h] [ebp-34h]
  int v49[4]; // [esp+64h] [ebp-30h] BYREF
  int v50[4]; // [esp+74h] [ebp-20h] BYREF
  unsigned int v51[4]; // [esp+84h] [ebp-10h] BYREF

  v2 = this->q014 & 0xF; /*0x5ff863*/
  if ( (this->q014 & 0xE) != 0 || (v3 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v3) ) /*0x5ff879*/
  {
    IDA_LOBYTE(v3) = Coord::To_Screen(g_TacticalClass_Instance, this, v45); /*0x5ff88b*/
    if ( (unsigned char)v3 ) /*0x5ff892*/
    {
      if ( (*(unsigned int *)g_ScenarioClass_Instance & 0x1000) == 0 || (IDA_LOBYTE(v3) = Game::Stub3((int)this), !(unsigned char)v3) ) /*0x5ff8b2*/
      {
        v50[0] = v45[0] - 128; /*0x5ff8c9*/
        v51[0] = DSurface_ViewBounds; /*0x5ff8d9*/
        v51[1] = g_Map_VisibleRect; /*0x5ff8e6*/
        v4 = this->u32_C; /*0x5ff8ed*/
        v51[3] = g_DSurface_WindowOffset; /*0x5ff8f0*/
        v5 = byte_83358C[v4]; /*0x5ff8ff*/
        v50[1] = (unsigned char)(v45[1] - 64);
        g_DSurface_Hidden_2 = (unsigned char)(g_DSurface_Hidden_2);
        v50[2] = (unsigned char)(255);
        v50[3] = (unsigned char)(127);
        v51[2] = (unsigned char)(g_Map_VisibleRectOffset);
        if ( v5 < 64 ) /*0x5ff92c*/
          v5 = v5 * this->u32_10 / 64; /*0x5ff93d*/
        v6 = *(unsigned int *)g_DSurface_Hidden_2; /*0x5ff946*/
        v38 = dword_AC1698[v5]; /*0x5ff94a*/
        v7 = (*(int (__thiscall **)(int))(v6 + 116))(g_DSurface_Hidden_2); /*0x5ff951*/
        v46[0] = 0; /*0x5ff95a*/
        v46[1] = 0; /*0x5ff95e*/
        v49[0] = 0; /*0x5ff962*/
        v49[1] = 0; /*0x5ff966*/
        v47 = 255; /*0x5ff96a*/
        v49[2] = 255; /*0x5ff96e*/
        v7 = v7; /*0x5ff9a3*/
        v29 = 0; /*0x5ff9a7*/
        v48 = 127; /*0x5ff9ac*/
        v49[3] = 127; /*0x5ff9b0*/
        IDA_LOBYTE(v3) = CalcSurfaceBlitRects(g_DSurface_Hidden_2, (int)v51, v50, v38, v49, v46, &v29, (int *)&v39, (int *)&v40); /*0x5ff9b7*/
        if ( (unsigned char)v3 ) /*0x5ff9be*/
        {
          v8 = v39; /*0x5ff9c4*/
          v31 = (int)v39; /*0x5ff9d6*/
          v32 = (int)v40; /*0x5ff9da*/
          v30 = v40; /*0x5ff9de*/
          if ( v2 ) /*0x5ff9e2*/
          {
  LABEL_23:
            v9 = this->q014; /*0x5ffb1c*/
            if ( (v9 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v48 > 0 ) /*0x5ffb31*/
              {
                v10 = v47; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v10; ++i ) /*0x5ffb41*/
                  {
                    v11 = *v30 == 0; /*0x5ffb4e*/
                    IDA_LOBYTE(v33) = *v30++; /*0x5ffb50*/
                    if ( !v11 ) /*0x5ffb58*/
                    {
                      v12 = *v8; /*0x5ffb62*/
                      v42 = (uint8_t)(*v8 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffb91*/
                      v43 = (uint8_t)(v12 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffba9*/
                      v44 = (uint8_t)(v12 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffbc2*/
                      *v8 = (((256 - (uint8_t)v33) * v42) >> 8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x5ffc1a*/
                          | (((256 - (uint8_t)v33) * v44) >> 8 >> g_BitMask_Red << g_BitShift_Blue)
                          | (((256 - (uint8_t)v33) * v43) >> 8 >> g_BitMask_Blue << g_BitMask_Green);
                      v10 = v47; /*0x5ffc1d*/
                      v7 = v7; /*0x5ffc21*/
                    }
                    ++v8; /*0x5ffc29*/
                  }
                  v32 += 256; /*0x5ffc4c*/
                  v30 = (unsigned char *)v32; /*0x5ffc50*/
                  v8 = (uint16_t *)(v7 + v31); /*0x5ffc58*/
                  v31 += v7; /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v48 ); /*0x5ffc65*/
              }
            }
            else if ( (v9 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v48 > 0 ) /*0x5ffc82*/
              {
                v13 = v47; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v13; ++j ) /*0x5ffc92*/
                  {
                    v11 = *v30 == 0; /*0x5ffc9f*/
                    IDA_LOBYTE(v33) = *v30++; /*0x5ffca1*/
                    if ( !v11 ) /*0x5ffca9*/
                    {
                      v14 = *v8; /*0x5ffcaf*/
                      v15 = (uint8_t)v33 + 256; /*0x5ffcd0*/
                      v42 = (uint8_t)(*v8 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffcdf*/
                      v43 = (uint8_t)(v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffd00*/
                      v16 = this->q014; /*0x5ffd0a*/
                      v44 = (uint8_t)(v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffd0d*/
                      v17 = v42; /*0x5ffd1d*/
                      v18 = v43; /*0x5ffd22*/
                      v19 = v44; /*0x5ffd28*/
                      if ( (v16 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v17 = (v15 * v42) >> 8; /*0x5ffd36*/
                        if ( v17 > 255 ) /*0x5ffd3e*/
                          v17 = 255; /*0x5ffd40*/
                      }
                      if ( (v16 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v18 = (v15 * v43) >> 8; /*0x5ffd4d*/
                        if ( v18 > 255 ) /*0x5ffd56*/
                          v18 = 255; /*0x5ffd58*/
                      }
                      if ( (v16 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v19 = (v15 * v44) >> 8; /*0x5ffd65*/
                        if ( v19 > 255 ) /*0x5ffd6e*/
                          v19 = 255; /*0x5ffd70*/
                      }
                      v20 = (v18 >> g_BitMask_Blue << g_BitMask_Green) | (v17 >> g_BitShift_Green_0 << g_BitShift_Red); /*0x5ffd9f*/
                      v7 = v7; /*0x5ffda1*/
                      *v8 = (v19 >> g_BitMask_Red << g_BitShift_Blue) | v20; /*0x5ffda9*/
                      v13 = v47; /*0x5ffdac*/
                    }
                    ++v8; /*0x5ffdb4*/
                  }
                  v32 += 256; /*0x5ffdd7*/
                  v30 = (unsigned char *)v32; /*0x5ffddb*/
                  v8 = (uint16_t *)(v7 + v31); /*0x5ffde3*/
                  v31 += v7; /*0x5ffde6*/
                  ++i; /*0x5ffdec*/
                }
                while ( i < v48 ); /*0x5ffdf0*/
              }
            }
            else
            {
              i = 0; /*0x5ffdff*/
              if ( v48 > 0 ) /*0x5ffe05*/
              {
                v21 = v47; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v21; ++j ) /*0x5ffe15*/
                  {
                    v11 = *v30 == 0; /*0x5ffe22*/
                    IDA_LOBYTE(v33) = *v30++; /*0x5ffe24*/
                    if ( !v11 ) /*0x5ffe2c*/
                    {
                      v22 = *v8; /*0x5ffe32*/
                      v23 = (uint8_t)v33 + 256; /*0x5ffe55*/
                      v42 = (uint8_t)(*v8 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ffe64*/
                      v43 = (uint8_t)(v22 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ffe7c*/
                      v44 = (uint8_t)(v22 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ffe8d*/
                      v24 = (v23 * v44) >> 8; /*0x5ffeb7*/
                      v25 = (v23 * v42) >> 8; /*0x5ffeba*/
                      v26 = (v23 * v43) >> 8; /*0x5ffebd*/
                      if ( v24 > 255 ) /*0x5ffec5*/
                        v24 = 255; /*0x5ffec7*/
                      v27 = 255; /*0x5ffed2*/
                      if ( v26 <= 255 ) /*0x5ffed7*/
                        v27 = v26; /*0x5ffed9*/
                      if ( v25 > 255 ) /*0x5ffee1*/
                        v25 = 255; /*0x5ffee3*/
                      *v8 = (v24 >> g_BitMask_Red << g_BitShift_Blue) /*0x5fff14*/
                          | (v27 >> g_BitMask_Blue << g_BitMask_Green)
                          | (v25 >> g_BitShift_Green_0 << g_BitShift_Red);
                      v21 = v47; /*0x5fff17*/
                      v7 = v7; /*0x5fff1b*/
                    }
                    ++v8; /*0x5fff23*/
                  }
                  v32 += 256; /*0x5fff46*/
                  v30 = (unsigned char *)v32; /*0x5fff4a*/
                  v8 = (uint16_t *)(v7 + v31); /*0x5fff52*/
                  v31 += v7; /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while ( i < v48 ); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( dword_833588 ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa00*/
                  Object_Calc_7DF3C2(v40, v39, 256, v7, v47, v48, dword_AC1838); /*0x5ffa15*/
                else
                  Object_Calc_7DF191(v40, v39, 256, v7, v47, v48); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa49*/
                  Object_Calc_7DF500(v40, v39, 256, v7, v47, v48, dword_AC1838); /*0x5ffa5e*/
                else
                  Object_Calc_7DF0B4(v40, v39, 256, v7, v47, v48); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffa92*/
                  Object_Calc_7DF280(v40, v39, 256, v7, v47, v48, dword_AC1838); /*0x5ffaa7*/
                else
                  Object_Calc(v40, v39, 256, v7, v47, v48); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( dword_AC1838 ) /*0x5ffadb*/
                  Object_Calc_7DF640(v40, v39, 256, v7, v47, v48, dword_AC1838); /*0x5ffaf0*/
                else
                  Object_Calc_7DEFD7(v40, v39, 256, v7, v47, v48); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (__thiscall **)(int))(*(unsigned int *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x5fff6b*/
          IDA_LOBYTE(v3) = (*(int (__thiscall **)(int))(*(unsigned int *)v38 + 96))(v38); /*0x5fff74*/
        }
      }
    }
  }
  return v3; /*0x5fff77*/
}
// 0x4CAD80
namespace gamemd {
double BuildingLight::CalcIntensity(double a1)
{
  return *((float *)&unk_859094 - Math::RoundToInt((a1 + 1.0) * -2048.0)); /*0x4cada1*/
}
} // namespace gamemd
}
