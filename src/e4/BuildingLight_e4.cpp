// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingLight_e4.hpp"

// 0x4CAD80
namespace gamemd {
double BuildingLight::CalcIntensity(double a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __cdecl BuildingLight_CalcIntensity(double a1)
{
  return *((float *)&MEMORY[0x859094] - Math::RoundToInt((a1 + 1.0) * -2048.0)); /*0x4cada1*/
}
}
} // namespace gamemd

// 0x5FF850
namespace gamemd {
char BuildingLight::CalculateShading()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall BuildingLight::CalculateShading(IUnknown *this)
{
  int ebx1; // ebx
  ObjectClass *v3; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  unsigned __int16 *v9; // edi
  int v10; // eax
  int v11; // ecx
  bool v12; // zf
  unsigned __int16 v13; // si
  int v14; // ecx
  unsigned __int16 v15; // ax
  int v16; // ebp
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  unsigned __int16 v23; // si
  int v24; // edx
  int v25; // eax
  int v26; // esi
  int v27; // ecx
  int v28; // edx
  int _0; // [esp+0h] [ebp-94h]
  char a6; // [esp+13h] [ebp-81h] BYREF
  ObjectClass *v30; // [esp+14h] [ebp-80h]
  int v33; // [esp+18h] [ebp-7Ch]
  ObjectClass *v34; // [esp+1Ch] [ebp-78h]
  MouseClass *v35; // [esp+20h] [ebp-74h]
  int v36; // [esp+24h] [ebp-70h]
  int i; // [esp+28h] [ebp-6Ch]
  int j; // [esp+2Ch] [ebp-68h]
  Tactical *v37; // [esp+30h] [ebp-64h]
  int v40; // [esp+34h] [ebp-60h]
  int a7; // [esp+38h] [ebp-5Ch] BYREF
  int a8; // [esp+3Ch] [ebp-58h] BYREF
  IUnknown *v43; // [esp+40h] [ebp-54h]
  unsigned __int8 v44; // [esp+44h] [ebp-50h]
  unsigned __int8 v45; // [esp+45h] [ebp-4Fh]
  unsigned __int8 v46; // [esp+46h] [ebp-4Eh]
  _DWORD v47[2]; // [esp+4Ch] [ebp-48h] BYREF
  _DWORD v48[2]; // [esp+54h] [ebp-40h] BYREF
  int v49; // [esp+5Ch] [ebp-38h]
  int v50; // [esp+60h] [ebp-34h]
  int a4[4]; // [esp+64h] [ebp-30h] BYREF
  _DWORD v52[4]; // [esp+74h] [ebp-20h] BYREF
  int a1[4]; // [esp+84h] [ebp-10h] BYREF

  v43 = this; /*0x5ff85c*/
  ebx1 = *(_DWORD *)&this->__pad_10[4] & 0xF; /*0x5ff863*/
  if ( (*(_DWORD *)&this->__pad_10[4] & 0xE) != 0 /*0x5ff879*/
    || (v3 = PingPongBuffer::GetWriteOffset(), dword_ABCD44 >= (CampaignScore *)v3) )
  {
    LOBYTE(v3) = Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], this, (IUnknown *)v47); /*0x5ff88b*/
    if ( (_BYTE)v3 ) /*0x5ff892*/
    {
      if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x1000) == 0 /*0x5ff8b2*/
        || (LOBYTE(v3) = Game::Stub3(this), !(_BYTE)v3) )
      {
        v52[0] = v47[0] - 128; /*0x5ff8c9*/
        a1[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x5ff8d9*/
        a1[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x5ff8e6*/
        v5 = this->field_C; /*0x5ff8ed*/
        a1[3] = *(_DWORD *)&stru_87C374.__pad_579C[21660]; /*0x5ff8f0*/
        v6 = stru_830620.__pad_14B0[v5 + 6844]; /*0x5ff8ff*/
        v52[1] = v47[1] - 64; /*0x5ff906*/
        v37 = *(Tactical **)&stru_87C374.__pad_579C[22532]; /*0x5ff912*/
        v52[2] = 255; /*0x5ff916*/
        v52[3] = 127; /*0x5ff91e*/
        a1[2] = *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x5ff925*/
        if ( v6 < 64 ) /*0x5ff92c*/
          v6 = v6 * *(_DWORD *)this->__pad_10 / 64; /*0x5ff93d*/
        v7 = **(_DWORD **)&stru_87C374.__pad_579C[22532]; /*0x5ff946*/
        v40 = (int)*(&g_MatrixTransformState + v6 + 218); /*0x5ff94a*/
        v8 = (*(int (__thiscall **)(_DWORD))(v7 + 116))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x5ff951*/
        v48[0] = 0; /*0x5ff95a*/
        v48[1] = 0; /*0x5ff95e*/
        a4[0] = 0; /*0x5ff962*/
        a4[1] = 0; /*0x5ff966*/
        v49 = 255; /*0x5ff96a*/
        a4[2] = 255; /*0x5ff96e*/
        v36 = v8; /*0x5ff9a3*/
        a6 = 0; /*0x5ff9a7*/
        v50 = 127; /*0x5ff9ac*/
        a4[3] = 127; /*0x5ff9b0*/
        LOBYTE(v3) = CalcSurfaceBlitRects((int)v37, a1, (IUnknown *)v52, v40, a4, (IUnknown *)v48, &a6, &a7, &a8); /*0x5ff9b7*/
        if ( (_BYTE)v3 ) /*0x5ff9be*/
        {
          v9 = (unsigned __int16 *)a7; /*0x5ff9c4*/
          v33 = a7; /*0x5ff9d6*/
          v34 = (ObjectClass *)a8; /*0x5ff9da*/
          v30 = (ObjectClass *)a8; /*0x5ff9de*/
          if ( ebx1 ) /*0x5ff9e2*/
          {
LABEL_23:
            v10 = *(_DWORD *)&this->__pad_10[4]; /*0x5ffb1c*/
            if ( (v10 & 1) != 0 ) /*0x5ffb21*/
            {
              j = 0; /*0x5ffb2b*/
              if ( v50 > 0 ) /*0x5ffb31*/
              {
                v11 = v49; /*0x5ffb37*/
                do /*0x5ffc65*/
                {
                  for ( i = 0; i < v11; ++i ) /*0x5ffb41*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffb4e*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffb50*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffb54*/
                    if ( !v12 ) /*0x5ffb58*/
                    {
                      v13 = *v9; /*0x5ffb62*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffb91*/
                      v45 = (unsigned __int8)(v13 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffba9*/
                      v46 = (unsigned __int8)(v13 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffbc2*/
                      *v9 = (((256 - (unsigned __int8)v35) * v44) >> 8 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x5ffc1a*/
                          | (((256 - (unsigned __int8)v35) * v46) >> 8 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                          | (((256 - (unsigned __int8)v35) * v45) >> 8 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]);
                      v11 = v49; /*0x5ffc1d*/
                      v8 = v36; /*0x5ffc21*/
                    }
                    ++v9; /*0x5ffc29*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5ffc4c*/
                  v30 = v34; /*0x5ffc50*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5ffc58*/
                  v33 += v8; /*0x5ffc5b*/
                  ++j; /*0x5ffc61*/
                }
                while ( j < v50 ); /*0x5ffc65*/
              }
            }
            else if ( (v10 & 0xE) != 0 ) /*0x5ffc72*/
            {
              i = 0; /*0x5ffc7c*/
              if ( v50 > 0 ) /*0x5ffc82*/
              {
                v14 = v49; /*0x5ffc88*/
                do /*0x5ffdf0*/
                {
                  for ( j = 0; j < v14; ++j ) /*0x5ffc92*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffc9f*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffca1*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffca5*/
                    if ( !v12 ) /*0x5ffca9*/
                    {
                      v15 = *v9; /*0x5ffcaf*/
                      v16 = (unsigned __int8)v35 + 256; /*0x5ffcd0*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffcdf*/
                      v45 = (unsigned __int8)(v15 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffd00*/
                      v17 = *(_DWORD *)&v43->__pad_10[4]; /*0x5ffd0a*/
                      v46 = (unsigned __int8)(v15 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffd0d*/
                      v18 = v44; /*0x5ffd1d*/
                      v19 = v45; /*0x5ffd22*/
                      v20 = v46; /*0x5ffd28*/
                      if ( (v17 & 2) == 0 ) /*0x5ffd31*/
                      {
                        v18 = (v16 * v44) >> 8; /*0x5ffd36*/
                        if ( v18 > 255 ) /*0x5ffd3e*/
                          v18 = 255; /*0x5ffd40*/
                      }
                      if ( (v17 & 4) == 0 ) /*0x5ffd48*/
                      {
                        v19 = (v16 * v45) >> 8; /*0x5ffd4d*/
                        if ( v19 > 255 ) /*0x5ffd56*/
                          v19 = 255; /*0x5ffd58*/
                      }
                      if ( (v17 & 8) == 0 ) /*0x5ffd60*/
                      {
                        v20 = (v16 * v46) >> 8; /*0x5ffd65*/
                        if ( v20 > 255 ) /*0x5ffd6e*/
                          v20 = 255; /*0x5ffd70*/
                      }
                      v21 = (v19 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]) /*0x5ffd9f*/
                          | (v18 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
                      v8 = v36; /*0x5ffda1*/
                      *v9 = (v20 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]) | v21; /*0x5ffda9*/
                      v14 = v49; /*0x5ffdac*/
                    }
                    ++v9; /*0x5ffdb4*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5ffdd7*/
                  v30 = v34; /*0x5ffddb*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5ffde3*/
                  v33 += v8; /*0x5ffde6*/
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
                v22 = v49; /*0x5ffe0b*/
                do /*0x5fff5f*/
                {
                  for ( j = 0; j < v22; ++j ) /*0x5ffe15*/
                  {
                    v12 = v30->__pad_0[0] == 0; /*0x5ffe22*/
                    LOBYTE(v35) = v30->__pad_0[0]; /*0x5ffe24*/
                    v30 = (ObjectClass *)((char *)v30 + 1); /*0x5ffe28*/
                    if ( !v12 ) /*0x5ffe2c*/
                    {
                      v23 = *v9; /*0x5ffe32*/
                      v24 = (unsigned __int8)v35 + 256; /*0x5ffe55*/
                      v44 = (unsigned __int8)(*v9 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x5ffe64*/
                      v45 = (unsigned __int8)(v23 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x5ffe7c*/
                      v46 = (unsigned __int8)(v23 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x5ffe8d*/
                      v25 = (v24 * v46) >> 8; /*0x5ffeb7*/
                      v26 = (v24 * v44) >> 8; /*0x5ffeba*/
                      v27 = (v24 * v45) >> 8; /*0x5ffebd*/
                      if ( v25 > 255 ) /*0x5ffec5*/
                        v25 = 255; /*0x5ffec7*/
                      v28 = 255; /*0x5ffed2*/
                      if ( v27 <= 255 ) /*0x5ffed7*/
                        v28 = v27; /*0x5ffed9*/
                      if ( v26 > 255 ) /*0x5ffee1*/
                        v26 = 255; /*0x5ffee3*/
                      *v9 = (v25 >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]) /*0x5fff14*/
                          | (v28 >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
                          | (v26 >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]);
                      v22 = v49; /*0x5fff17*/
                      v8 = v36; /*0x5fff1b*/
                    }
                    ++v9; /*0x5fff23*/
                  }
                  v34 = (ObjectClass *)((char *)v34 + 256); /*0x5fff46*/
                  v30 = v34; /*0x5fff4a*/
                  v9 = (unsigned __int16 *)(v8 + v33); /*0x5fff52*/
                  v33 += v8; /*0x5fff55*/
                  ++i; /*0x5fff5b*/
                }
                while ( i < v50 ); /*0x5fff5f*/
              }
            }
          }
          else
          {
            switch ( *(_DWORD *)&stru_830620.__pad_14B0[6840] ) /*0x5ff9f1*/
            {
              case 0: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa00*/
                  Object_Calc_7DF3C2( /*0x5ffa15*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DF191((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffa34*/
                break; /*0x5ffa1d*/
              case 1: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa49*/
                  Object_Calc_7DF500( /*0x5ffa5e*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DF0B4((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffa7d*/
                break; /*0x5ffa66*/
              case 2: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffa92*/
                  Object_Calc_7DF280( /*0x5ffaa7*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffac6*/
                break; /*0x5ffaaf*/
              case 3: /*0x5ff9f1*/
                if ( *(&g_MatrixTransformState + 2698) ) /*0x5ffadb*/
                  Object_Calc_7DF640( /*0x5ffaf0*/
                    (MouseClass *)a8,
                    (_BYTE *)a7,
                    (_WORD *)0x100,
                    v8,
                    v49,
                    v50,
                    (int)*(&g_MatrixTransformState + 2698),
                    _0);
                else
                  Object_Calc_7DEFD7((MouseClass *)a8, (_WORD *)a7, 256, v8, v49, v50); /*0x5ffb0f*/
                break; /*0x5ffaf8*/
              default:
                goto LABEL_23;
            }
          }
          (*(void (__thiscall **)(Tactical *))(*(_DWORD *)v37->__pad_0 + 96))(v37); /*0x5fff6b*/
          LOBYTE(v3) = (*(char (__thiscall **)(int))(*(_DWORD *)v40 + 96))(v40); /*0x5fff74*/
        }
      }
    }
  }
  return (char)v3; /*0x5fff77*/
}
}
} // namespace gamemd
