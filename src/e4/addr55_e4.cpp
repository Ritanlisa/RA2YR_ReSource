// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_554400_e4.hpp"
#include "e4/classes/E4Recv_556510_e4.hpp"
#include "e4/classes/E4Recv_556520_e4.hpp"
#include "e4/classes/E4Recv_557380_e4.hpp"
#include "e4/classes/E4Recv_5581A0_e4.hpp"
#include "e4/classes/E4Recv_558810_e4.hpp"
#include "e4/classes/E4Recv_5595F0_e4.hpp"
#include "e4/classes/E4Recv_55B720_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x550080
namespace ra2 {
namespace game {
void ObjectClass::sub_550080()
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // edx
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = *(Block + 2); /*0x550086*/
  v3 = *(Block + 4); /*0x550089*/
  if ( v2 == -1 ) /*0x55008f*/
  {
  LABEL_4:
    if ( v3 ) /*0x5500a1*/
      goto LABEL_7; /*0x5500a1*/
    goto LABEL_5; /*0x5500a1*/
  }
  if ( (int)g_CurrentFrame - v2 < v3 ) /*0x55009b*/
  {
    v3 -= (int)g_CurrentFrame - v2; /*0x55009d*/
    goto LABEL_4; /*0x55009d*/
  }
  LABEL_5:
  v4 = *(Block + 5); /*0x5500a3*/
  if ( v4 ) /*0x5500a8*/
  {
    v5 = *(Block + 6) + *Block; /*0x5500af*/
    *((_BYTE *)Block + 4) = 1; /*0x5500b1*/
    *Block = v5; /*0x5500b5*/
    v6 = v8[2]; /*0x5500bd*/
    *(Block + 2) = (int)g_CurrentFrame; /*0x5500c1*/
    *(Block + 3) = v6; /*0x5500c4*/
    *(Block + 4) = v4; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
  LABEL_7:
  *((_BYTE *)Block + 4) = 0; /*0x5500cc*/
  LABEL_8:
  if ( *((_BYTE *)Block + 80) ) /*0x5500d0*/
    *((_BYTE *)Block + 81) = *((_BYTE *)Block + 81) == 0; /*0x5500df*/
  if ( *Block >= *(Block + 19) && Block ) /*0x5500ed*/
  {
    v8[0] = Block; /*0x5500fe*/
    v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x550102*/
    if ( v7 != -1 && v7 < g_TimerPool && v7 < --g_TimerPool ) /*0x55011d*/
    {
      do /*0x550135*/
      {
        ++v7; /*0x550125*/
        *((_DWORD *)dword_ABC87C + v7 - 1) = *((_DWORD *)dword_ABC87C + v7); /*0x550129*/
      }
      while ( v7 < g_TimerPool ); /*0x550135*/
    }
    __3_YAXPAX_Z(Block); /*0x550138*/
  }
}
} // namespace ra2
}

// 0x550150
namespace gamemd {
void sub_550150()
{
  int v0; // edi
  int v1; // ebp
  int *v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  v0 = g_TimerPool - 1; /*0x550159*/
  if ( g_TimerPool - 1 >= 0 ) /*0x55015e*/
  {
    v1 = v8[2]; /*0x550165*/
    do /*0x550170*/
    {
      v2 = (int *)*((_DWORD *)dword_ABC87C + v0); /*0x550170*/
      v3 = v2[2]; /*0x550173*/
      v4 = v2[4]; /*0x550176*/
      if ( v3 != -1 ) /*0x55017c*/
      {
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v4 -= (int)g_CurrentFrame - v3; /*0x55018a*/
      }
      if ( v4 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
  LABEL_7:
      v5 = v2[5]; /*0x550190*/
      if ( !v5 ) /*0x550195*/
      {
  LABEL_9:
        *((_BYTE *)v2 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      v6 = v2[6] + *v2; /*0x55019c*/
      *((_BYTE *)v2 + 4) = 1; /*0x55019e*/
      *v2 = v6; /*0x5501a2*/
      v2[2] = (int)g_CurrentFrame; /*0x5501a9*/
      v2[3] = v1; /*0x5501ac*/
      v2[4] = v5; /*0x5501af*/
  LABEL_10:
      if ( *((_BYTE *)v2 + 80) ) /*0x5501b8*/
        *((_BYTE *)v2 + 81) = *((_BYTE *)v2 + 81) == 0; /*0x5501c7*/
      if ( *v2 >= v2[19] && v2 ) /*0x5501d5*/
      {
        v8[0] = v2; /*0x5501e6*/
        v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x5501ea*/
        if ( v7 != -1 && v7 < g_TimerPool && v7 < --g_TimerPool ) /*0x550205*/
        {
          do /*0x55021d*/
          {
            ++v7; /*0x55020d*/
            *((_DWORD *)dword_ABC87C + v7 - 1) = *((_DWORD *)dword_ABC87C + v7); /*0x550211*/
          }
          while ( v7 < g_TimerPool ); /*0x55021d*/
        }
        __3_YAXPAX_Z(v2); /*0x550220*/
      }
      --v0; /*0x550228*/
    }
    while ( v0 >= 0 ); /*0x550170*/
  }
}
}
// 0x5509F0
namespace gamemd {
void PrepareTacticalClassCellTransform(BuildingTypeClass * a1)
{
  int *v1; // ebx
  int v2; // eax
  double v3; // st7
  int v4; // ebp
  int v5; // esi
  char v6; // al
  int v7; // ecx
  double v8; // st7
  char v9; // al
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  float v29; // esi
  int v30; // esi
  unsigned int v31; // esi
  int v32; // ecx
  __int16 v33; // ax
  __int16 v34; // ax
  int v35; // ebp
  int v36; // edi
  int v37; // esi
  int v38; // esi
  int v39; // edi
  int v41; // [esp+38h] [ebp-158h]
  int v42; // [esp+38h] [ebp-158h]
  int v43; // [esp+38h] [ebp-158h]
  int v44; // [esp+38h] [ebp-158h]
  int v45; // [esp+38h] [ebp-158h]
  int v46; // [esp+38h] [ebp-158h]
  int v47; // [esp+3Ch] [ebp-154h]
  int v48; // [esp+3Ch] [ebp-154h]
  int v49; // [esp+3Ch] [ebp-154h]
  int v50; // [esp+3Ch] [ebp-154h]
  int v51; // [esp+3Ch] [ebp-154h]
  int v52; // [esp+3Ch] [ebp-154h]
  char v53; // [esp+5Fh] [ebp-131h]
  __int16 v54; // [esp+60h] [ebp-130h] BYREF
  unsigned __int8 v55; // [esp+62h] [ebp-12Eh]
  __int16 v56; // [esp+68h] [ebp-128h] BYREF
  unsigned __int8 v57; // [esp+6Ah] [ebp-126h]
  int v58; // [esp+70h] [ebp-120h]
  unsigned int v59; // [esp+74h] [ebp-11Ch]
  __int16 v60; // [esp+78h] [ebp-118h] BYREF
  unsigned __int8 v61; // [esp+7Ah] [ebp-116h]
  __int64 v62; // [esp+80h] [ebp-110h] BYREF
  int v63; // [esp+88h] [ebp-108h] BYREF
  int v64; // [esp+8Ch] [ebp-104h]
  float v65; // [esp+90h] [ebp-100h]
  int v66; // [esp+94h] [ebp-FCh]
  __int64 v67; // [esp+98h] [ebp-F8h] BYREF
  int v68; // [esp+A0h] [ebp-F0h] BYREF
  int v69; // [esp+A4h] [ebp-ECh]
  int v70; // [esp+A8h] [ebp-E8h]
  unsigned __int8 v71[4]; // [esp+ACh] [ebp-E4h] BYREF
  __int64 v72; // [esp+B0h] [ebp-E0h]
  __int64 v73; // [esp+B8h] [ebp-D8h]
  __int64 v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  _DWORD v77[24]; // [esp+D0h] [ebp-C0h] BYREF
  _DWORD v78[24]; // [esp+130h] [ebp-60h] BYREF

  v1 = a1; /*0x5509fd*/
  LODWORD(v72) = a1; /*0x550a03*/
  if ( (byte_ABC7C8 & 1) == 0 ) /*0x550a07*/
  {
    dword_ABC7F8[0] = -1; /*0x550a15*/
    dword_ABC7FC[0] = -1; /*0x550a1f*/
    dword_ABC800[0] = 1; /*0x550a27*/
    dword_ABC804[0] = 1; /*0x550a2c*/
    dword_ABC808 = 0; /*0x550a37*/
    dword_ABC810 = 0; /*0x550a3c*/
    dword_ABC80C = -1; /*0x550a41*/
    dword_ABC818 = -1; /*0x550a4f*/
    dword_ABC820 = 1; /*0x550a56*/
    dword_ABC814 = 1; /*0x550a5e*/
    dword_ABC81C = 1; /*0x550a64*/
    dword_ABC828 = -1; /*0x550a6d*/
    dword_ABC824 = -1; /*0x550a77*/
    dword_ABC830 = 1; /*0x550a7f*/
    dword_ABC82C = 0; /*0x550a87*/
    dword_ABC834 = 0; /*0x550a8d*/
    dword_ABC838 = -1; /*0x550a96*/
    dword_ABC83C = -1; /*0x550aa0*/
    dword_ABC840 = 1; /*0x550aa8*/
    dword_ABC844 = 1; /*0x550aad*/
    dword_ABC848 = 0; /*0x550ab8*/
    dword_ABC850 = 0; /*0x550abd*/
    dword_ABC84C = -1; /*0x550ac2*/
    dword_ABC858 = -1; /*0x550ad0*/
    dword_ABC854 = 1; /*0x550ad7*/
    dword_ABC85C = 1; /*0x550add*/
    dword_ABC860 = 1; /*0x550ae3*/
    dword_ABC864 = -1; /*0x550aee*/
    dword_ABC868 = -1; /*0x550af4*/
    byte_ABC7C8 |= 1u; /*0x550b08*/
    dword_ABC86C = 0; /*0x550b0e*/
    dword_ABC870 = 1; /*0x550b14*/
    dword_ABC874 = 0; /*0x550b19*/
    atexit(nullsub_22); /*0x550b1f*/
  }
  v2 = v1[9]; /*0x550b2a*/
  v59 = v1[12]; /*0x550b33*/
  v58 = v2; /*0x550b37*/
  v3 = Math::CalcAngle((double)v1[10] - (double)v1[13], (double)(int)v59 - (double)v2); /*0x550b56*/
  LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (((v59 >> 12) + 1) >> 1) & 7; /*0x550b8d*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 9, &v75); /*0x550b91*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 12, (int *)&v74); /*0x550ba2*/
  v4 = v1[15] - ZCoordToScreenY(v1[11]) - 2; /*0x550bb7*/
  v5 = -2 - ZCoordToScreenY(v1[14]); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( (unsigned int)dword_ABCD44 < PingPongBuffer::GetWriteOffset() || (v53 = 1, !g_lParam) ) /*0x550be3*/
    v53 = 0; /*0x550be5*/
  v6 = *((_BYTE *)v1 + 82); /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    v7 = *v1; /*0x550bfc*/
    v8 = *((float *)v1 + 21) - *((float *)v1 + 22); /*0x550c01*/
    v65 = *((float *)v1 + 19); /*0x550c04*/
    v58 = LODWORD(v65) - v7; /*0x550c0a*/
    v65 = v8 * (double)(LODWORD(v65) - v7) / (double)SLODWORD(v65) + *((float *)v1 + 22); /*0x550c19*/
  }
  v58 = Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  v9 = *((_BYTE *)v1 + 33); /*0x550c30*/
  v56 = 0; /*0x550c35*/
  v57 = 0; /*0x550c3f*/
  v71[0] = -1; /*0x550c44*/
  v71[1] = -1; /*0x550c49*/
  v71[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    v10 = 2 * *((unsigned __int8 *)v1 + 67); /*0x550c64*/
    v11 = 2 * *((unsigned __int8 *)v1 + 65); /*0x550c66*/
    v12 = 2 * *((unsigned __int8 *)v1 + 66); /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      LOBYTE(v11) = -1; /*0x550c8b*/
    LOBYTE(v60) = v11; /*0x550c90*/
    HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v54 = v60; /*0x550ca1*/
    LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(_WORD *)((char *)v1 + 65); /*0x550cb4*/
    v13 = *((_BYTE *)v1 + 66); /*0x550cb9*/
    v61 = *((_BYTE *)v1 + 67); /*0x550cbf*/
    v14 = *((_BYTE *)v1 + 67); /*0x550cc3*/
    LOBYTE(v54) = (unsigned __int8)v60 >> 1; /*0x550cca*/
    HIBYTE(v54) = v13 >> 1; /*0x550cce*/
    LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = v75; /*0x550cdf*/
  v64 = v76; /*0x550ce3*/
  v68 = v75; /*0x550ce7*/
  v69 = v76; /*0x550cef*/
  v67 = v74; /*0x550cf7*/
  v62 = v74; /*0x550cff*/
  v15 = v1[7]; /*0x550d03*/
  v55 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( v15 >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = v59 & 1; /*0x550d25*/
    LODWORD(v73) = v17; /*0x550d27*/
    while ( 1 )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = 4 * v16; /*0x550d3f*/
        v19 = dword_ABC7F8[4 * v16]; /*0x550d42*/
        v20 = dword_ABC7FC[4 * v16]; /*0x550d48*/
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = dword_ABC800[4 * v16]; /*0x550d5e*/
        v22 = dword_ABC804[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        LODWORD(v62) = v19 + v62; /*0x550d84*/
        v23 = v20 + HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (int *)v72; /*0x550d9e*/
        LODWORD(v67) = v24; /*0x550da2*/
        HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = dword_ABC7F8[4 * v16]; /*0x550dbc*/
        v26 = dword_ABC804[4 * v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        LODWORD(v62) = v25 + v62; /*0x550de4*/
        HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = dword_ABC7FC[4 * v16]; /*0x550df5*/
        v28 = dword_ABC800[4 * v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        HIDWORD(v62) += v27; /*0x550e1d*/
        LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !byte_8A0DF0 )
      {
        if ( v53 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e61*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            &v54,
            COERCE_FLOAT(LODWORD(v65)),
            v4,
            v66);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e87*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            &v54,
            COERCE_FLOAT(LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57 = v11; /*0x550e98*/
          v56 = v54; /*0x550ea0*/
          Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x550eab*/
          v30 = ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x550f09*/
              | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
              | (v57 >> g_BitMask_Red << g_BitShift_Blue);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f21*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f44*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( *((_BYTE *)v1 + 33) && v70 == 1 )
        {
          v54 = *(_WORD *)((char *)v1 + 65); /*0x550f5c*/
          LOBYTE(v11) = *((_BYTE *)v1 + 67); /*0x550f61*/
          v55 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v55 >> 1; /*0x550f8f*/
          v31 = v53 != 0 ? 8 : 64;
          if ( (unsigned __int8)v54 >> 1 < v31 && HIBYTE(v54) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
  LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (int *)v72; /*0x550fa9*/
          v16 = v59; /*0x550fad*/
          LOBYTE(v54) = (unsigned __int8)v54 >> 1; /*0x550fb1*/
          HIBYTE(v54) >>= 1; /*0x550fb5*/
          v55 >>= 1; /*0x550fb9*/
        }
      }
      v32 = v1[7]; /*0x550fc1*/
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
      v17 = v73; /*0x550d2d*/
    }
  }
  if ( byte_8A0DF0 && dword_8A0E10 && g_ZBufferDescriptor ) /*0x550ff9*/
  {
    v33 = *((_WORD *)g_ZBufferDescriptor + 18); /*0x550fff*/
    HIDWORD(v73) = 0; /*0x551003*/
    v34 = *((_WORD *)g_ZBufferDescriptor + 2) + v33; /*0x551007*/
    v73 = (unsigned __int16)(v4 + v34 - v76 - g_Map_VisibleRect); /*0x551036*/
    v72 = (unsigned __int16)(v5 + v34 - WORD2(v74) - g_Map_VisibleRect); /*0x551053*/
    *(float *)&v73 = (double)v73 * 0.000015259022; /*0x551064*/
    v35 = (v58 * v61) >> 8; /*0x551086*/
    v36 = (v58 * HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = (v58 * (unsigned __int8)v60) >> 8; /*0x55108c*/
    *(float *)&v72 = (double)v72 * 0.000015259022; /*0x55108f*/
    ColorStruct::SetRGB( /*0x55109d*/
      v77,
      (unsigned __int16)(v58 * (unsigned __int8)v60) >> 8,
      (unsigned __int16)(v58 * HIBYTE(v60)) >> 8,
      (unsigned __int16)(v58 * v61) >> 8);
    ColorStruct::SetRGB(v78, v37, v36, v35); /*0x5510ac*/
    v38 = v73; /*0x5510b1*/
    *(float *)&v47 = (float)v69; /*0x5510bf*/
    *(float *)&v41 = (float)v68; /*0x5510ce*/
    Tactical::SetCellTransform((char *)v77, 0, v41, v47, v73, 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    *(float *)&v42 = (float)v63; /*0x5510f4*/
    Tactical::SetCellTransform((char *)v77, 1, v42, v48, v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72; /*0x5510fe*/
    *(float *)&v49 = (float)SHIDWORD(v62); /*0x55110f*/
    *(float *)&v43 = (float)(int)v62; /*0x55111e*/
    Tactical::SetCellTransform((char *)v77, 2, v43, v49, v72, 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    *(float *)&v44 = (float)v63; /*0x551144*/
    Tactical::SetCellTransform((char *)v78, 0, v44, v50, v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)SHIDWORD(v67); /*0x55115e*/
    *(float *)&v45 = (float)(int)v67; /*0x55116d*/
    Tactical::SetCellTransform((char *)v78, 1, v45, v51, v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)SHIDWORD(v62); /*0x551184*/
    *(float *)&v46 = (float)(int)v62; /*0x551193*/
    Tactical::SetCellTransform((char *)v78, 2, v46, v52, v39, 1065353216, 0); /*0x551198*/
    StructTable::Append(dword_8A0E10, v77); /*0x5511ab*/
    return StructTable::Append(dword_8A0E10, v78); /*0x5511be*/
  }
  else if ( v53 ) /*0x5511d4*/
  {
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5511ff*/
                                                                                           + 64))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    v56 = v60; /*0x551216*/
    v57 = v61; /*0x551223*/
    Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x55122d*/
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5512a7*/
                                                                                      + 52))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red)
           | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
           | (v57 >> g_BitMask_Red << g_BitShift_Blue),
             v4,
             v5,
             0);
  }
}
}
// 0x551C60
namespace gamemd {
void int LCW_BitStreamIO(unsigned char * a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  _BYTE *v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned __int8 v11; // al
  int v12; // edi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // edx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // edi
  int v26; // edx
  _BYTE *v27; // ecx
  int v28; // edi
  int v29; // ecx
  unsigned int v30; // edi
  _BYTE *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // edi
  unsigned __int8 v36; // [esp+10h] [ebp-18h]
  unsigned __int8 *v38; // [esp+20h] [ebp-8h]

  v3 = a2; /*0x551c65*/
  v5 = a2; /*0x551c6f*/
  while ( 1 ) /*0x551cb9*/
  {
    while ( 1 ) /*0x551c80*/
    {
      while ( 1 ) /*0x551c77*/
      {
        v6 = *a1++; /*0x551c77*/
        if ( (v6 & 0x80u) != 0 ) /*0x551c80*/
          break; /*0x551c80*/
        v7 = (_BYTE *)(v5 - ((v6 & 0xF) << 8) - *a1++); /*0x551ca1*/
        if ( v6 >> 4 != -3 ) /*0x551ca9*/
        {
          v8 = (v6 >> 4) + 3; /*0x551cab*/
          do /*0x551cb3*/
          {
            *(_BYTE *)v5++ = *v7++; /*0x551cae*/
            --v8; /*0x551cb2*/
          }
          while ( v8 ); /*0x551cb3*/
        }
      }
      if ( (v6 & 0x40) == 0 ) /*0x551cb9*/
        break; /*0x551cb9*/
      if ( v6 == 0xFE ) /*0x551cdb*/
      {
        v11 = a1[2]; /*0x551cec*/
        v36 = v11; /*0x551cf2*/
        v12 = *a1 + (a1[1] << 8); /*0x551cf6*/
        a1 += 3; /*0x551d09*/
        v38 = a1; /*0x551d11*/
        v13 = 16843009 * v11; /*0x551d1d*/
        v14 = (v5 & 3) - 4 + v12; /*0x551d2a*/
        if ( v5 < v5 - (v5 & 3) + 4 ) /*0x551d32*/
        {
          LOBYTE(a1) = v11; /*0x551d34*/
          BYTE1(a1) = v11; /*0x551d38*/
          v15 = 4 - (v5 & 3); /*0x551d40*/
          v16 = (_DWORD)a1 << 16; /*0x551d42*/
          LOWORD(v16) = (_WORD)a1; /*0x551d47*/
          memset32((void *)v5, v16, v15 >> 2); /*0x551d4d*/
          a1 = v38; /*0x551d51*/
          memset((void *)(v5 + 4 * (v15 >> 2)), v16, v15 & 3); /*0x551d58*/
          v5 += v15; /*0x551d60*/
          v11 = v36; /*0x551d62*/
        }
        v17 = (_DWORD *)v5; /*0x551d68*/
        HIWORD(v18) = HIWORD(v14); /*0x551d6a*/
        for ( v5 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v5; v17 += 2 ) /*0x551d71*/
        {
          *v17 = v13; /*0x551d73*/
          v17[1] = v13; /*0x551d75*/
        }
        v19 = v5 + (v14 & 3); /*0x551d82*/
        if ( v5 < v19 ) /*0x551d86*/
        {
          LOBYTE(v18) = v11; /*0x551d8c*/
          BYTE1(v18) = v11; /*0x551d90*/
          v20 = v18 << 16; /*0x551d98*/
          LOWORD(v20) = v18; /*0x551da1*/
          v21 = (v19 - v5) >> 2; /*0x551da4*/
          memset32((void *)v5, v20, v21); /*0x551da7*/
          memset((void *)(v5 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v5) & 3); /*0x551dae*/
          v5 = v19; /*0x551db2*/
        }
        v3 = a2; /*0x551c73*/
      }
      else if ( v6 == 0xFF ) /*0x551dbb*/
      {
        v22 = a1[1]; /*0x551dc1*/
        v23 = *a1; /*0x551dc4*/
        v24 = a1[3]; /*0x551dca*/
        a1 += 4; /*0x551dcd*/
        v25 = (v24 << 8) + v3; /*0x551ddd*/
        v26 = v23 + (v22 << 8); /*0x551ddf*/
        v27 = (_BYTE *)(v25 + *(a1 - 2)); /*0x551de1*/
        if ( v26 ) /*0x551de6*/
        {
          v28 = v26; /*0x551dec*/
          do /*0x551df6*/
          {
            *(_BYTE *)v5++ = *v27++; /*0x551df1*/
            --v28; /*0x551df5*/
          }
          while ( v28 ); /*0x551df6*/
        }
      }
      else
      {
        v29 = *a1; /*0x551e0b*/
        v30 = (a1[1] << 8) + v3; /*0x551e13*/
        a1 += 2; /*0x551e15*/
        v31 = (_BYTE *)(v30 + v29); /*0x551e18*/
        v32 = (v6 & 0x3F) + 3; /*0x551e1a*/
        v33 = (v6 & 0x3F) + 2; /*0x551e1c*/
        if ( v32 ) /*0x551e1f*/
        {
          v34 = v33 + 1; /*0x551e25*/
          do /*0x551e2f*/
          {
            *(_BYTE *)v5++ = *v31++; /*0x551e2a*/
            --v34; /*0x551e2e*/
          }
          while ( v34 ); /*0x551e2f*/
        }
      }
    }
    if ( v6 == 0x80 ) /*0x551cbb*/
      break; /*0x551cbb*/
    v9 = v6 & 0x3F; /*0x551cc6*/
    if ( v9 ) /*0x551ccb*/
    {
      v10 = v9; /*0x551ccd*/
      do /*0x551cd5*/
      {
        *(_BYTE *)v5++ = *a1++; /*0x551cd0*/
        --v10; /*0x551cd4*/
      }
      while ( v10 ); /*0x551cd5*/
    }
  }
  return v5 - v3; /*0x551e38*/
}
}
// 0x551E50
namespace gamemd {
void DecompressCoreLCW(Pipe * aP0, unsigned char * a1, int a3)
{
  char *v3; // esi
  _BYTE *v4; // edi
  _BYTE *v5; // edi
  unsigned __int8 v6; // al
  _BYTE *v7; // ebx
  char *v8; // edi
  int v9; // ecx
  char *v10; // edi
  __int16 v11; // cx
  bool v12; // zf
  int v13; // ecx
  char *v14; // edx
  _BYTE *v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  int v18; // ecx
  _BYTE *v19; // eax
  _BYTE *v20; // edi
  __int16 v21; // ax
  char v22; // al
  _BYTE *v25; // [esp+18h] [ebp-20h]
  _BYTE *v27; // [esp+24h] [ebp-14h]
  char *v28; // [esp+28h] [ebp-10h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  _BYTE *v31; // [esp+34h] [ebp-4h]

  v25 = 0; /*0x551e89*/
  v28 = &aP0[a3]; /*0x551eac*/
  v30 = 1; /*0x551eaf*/
  v27 = a1; /*0x551ebc*/
  *a1 = -127; /*0x551ec3*/
  v3 = aP0 + 1; /*0x551ec4*/
  a1[1] = *aP0; /*0x551ec5*/
  v4 = a1 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
    v31 = v4; /*0x551ec6*/
    v5 = aP0; /*0x551ec9*/
    v29 = 1; /*0x551ecc*/
  LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = *v3; /*0x551ed5*/
      if ( *v3 != v3[64] ) /*0x551eda*/
        break; /*0x551eda*/
      v7 = v5; /*0x551edc*/
      v8 = v3; /*0x551ede*/
      v9 = v28 - v3; /*0x551ee3*/
      do /*0x551ee5*/
      {
        if ( !v9 ) /*0x551ee5*/
          break; /*0x551ee5*/
        v12 = *v8++ == (char)v6; /*0x551ee5*/
        --v9; /*0x551ee5*/
      }
      while ( v12 ); /*0x551ee5*/
      v10 = v8 - 1; /*0x551ee7*/
      v11 = (_WORD)v10 - (_WORD)v3; /*0x551eea*/
      if ( (unsigned int)(v10 - v3) < 0x41 ) /*0x551eef*/
      {
        v5 = v7; /*0x551f0f*/
        break; /*0x551f0f*/
      }
      v30 = 0; /*0x551ef1*/
      v3 = v10; /*0x551ef8*/
      *v31 = -2; /*0x551f01*/
      *(_WORD *)(v31 + 1) = v11; /*0x551f03*/
      v31[3] = v6; /*0x551f07*/
      v31 += 4; /*0x551f08*/
      v5 = v7; /*0x551f0b*/
    }
    while ( 1 ) /*0x551f13*/
    {
      v13 = v3 - v5; /*0x551f13*/
      v12 = v3 == v5; /*0x551f13*/
      if ( v3 == v5 ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = *v5++ == v6; /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5[v29 - 2] ) /*0x551f26*/
      {
        v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        v16 = v5 - 1; /*0x551f2c*/
        v18 = v28 - v3; /*0x551f30*/
        v17 = v28 == v3; /*0x551f30*/
        do /*0x551f32*/
        {
          if ( !v18 ) /*0x551f32*/
            break; /*0x551f32*/
          v17 = *v3++ == *v16++; /*0x551f32*/
          --v18; /*0x551f32*/
        }
        while ( v17 ); /*0x551f32*/
        if ( v17 ) /*0x551f34*/
          ++v16; /*0x551f36*/
        v3 = v14; /*0x551f37*/
        v19 = (_BYTE *)(v16 - v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = v15 - 1; /*0x551f48*/
        }
        goto LABEL_3; /*0x551f4b*/
      }
    }
    v20 = v31; /*0x551f50*/
    if ( v29 <= 2 ) /*0x551f56*/
    {
      if ( v30 ) /*0x551f8d*/
        goto LABEL_30; /*0x551f8d*/
      while ( 1 ) /*0x551f8f*/
      {
        v27 = v20; /*0x551f8f*/
        *v20++ = 0x80; /*0x551f94*/
  LABEL_30:
        if ( *v27 != 0xBF ) /*0x551f9b*/
        {
          ++*v27; /*0x551f9d*/
          v22 = *v3++; /*0x551f9f*/
          *v20 = v22; /*0x551fa0*/
          v4 = v20 + 1; /*0x551fa0*/
          v30 = 1; /*0x551fa1*/
          goto LABEL_35; /*0x551fa8*/
        }
      }
    }
    if ( v29 > 0xA || (unsigned int)(v3 - v25) > 0xFFF ) /*0x551f67*/
    {
      if ( v29 > 0x40 ) /*0x551f7c*/
      {
        *v31 = -1; /*0x551fac*/
        *(_WORD *)(v31 + 1) = v29; /*0x551fb0*/
        v20 = v31 + 3; /*0x551fb0*/
      }
      else
      {
        *v31 = (v29 - 3) | 0xC0; /*0x551f86*/
        v20 = v31 + 1; /*0x551f86*/
      }
      v21 = (_WORD)v25 - (_WORD)aP0; /*0x551fb5*/
    }
    else
    {
      HIBYTE(v21) = (_BYTE)v3 - (_BYTE)v25; /*0x551f75*/
      LOBYTE(v21) = 16 * (v29 - 3) + ((unsigned __int16)((_WORD)v3 - (_WORD)v25) >> 8); /*0x551f75*/
    }
    *(_WORD *)v20 = v21; /*0x551fb8*/
    v4 = v20 + 2; /*0x551fb8*/
    v3 += v29; /*0x551fba*/
    v30 = 0; /*0x551fbd*/
  LABEL_35:
    ; /*0x551fc4*/
  }
  while ( v3 < v28 ); /*0x551fc7*/
  *v4 = 0x80; /*0x551fd2*/
  return v4 + 1 - a1; /*0x551fde*/
}
}
// 0x552640
namespace gamemd {
unsigned int int sub_552640(unsigned char * a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned __int8 v5; // al
  _BYTE *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned __int8 v10; // al
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // edi
  _BYTE *v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // ecx
  unsigned int v31; // ebx
  _BYTE *v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // edi

  v3 = a2; /*0x552649*/
  v4 = a2; /*0x55264f*/
  while ( 1 ) /*0x552699*/
  {
    while ( 1 ) /*0x552660*/
    {
      while ( 1 ) /*0x552657*/
      {
        v5 = *a1++; /*0x552657*/
        if ( (v5 & 0x80u) != 0 ) /*0x552660*/
          break; /*0x552660*/
        v6 = (_BYTE *)(v4 - ((v5 & 0xF) << 8) - *a1++); /*0x552681*/
        if ( v5 >> 4 != -3 ) /*0x552689*/
        {
          v7 = (v5 >> 4) + 3; /*0x55268b*/
          do /*0x552693*/
          {
            *(_BYTE *)v4++ = *v6++; /*0x55268e*/
            --v7; /*0x552692*/
          }
          while ( v7 ); /*0x552693*/
        }
      }
      if ( (v5 & 0x40) == 0 ) /*0x552699*/
        break; /*0x552699*/
      if ( v5 == 0xFE ) /*0x5526bb*/
      {
        v10 = a1[2]; /*0x5526cc*/
        v11 = *a1 + (a1[1] << 8); /*0x5526d6*/
        a1 += 3; /*0x5526e9*/
        v12 = 16843009 * v10; /*0x5526fd*/
        v13 = (v4 & 3) - 4; /*0x552708*/
        v14 = v13 + v11; /*0x55270a*/
        if ( v4 < v4 - (v4 & 3) + 4 ) /*0x552712*/
        {
          LOBYTE(v13) = v10; /*0x552714*/
          BYTE1(v13) = v10; /*0x552718*/
          v15 = v13 << 16; /*0x552722*/
          LOWORD(v15) = v13; /*0x552727*/
          v16 = (4 - (v4 & 3)) >> 2; /*0x55272a*/
          memset32((void *)v4, v15, v16); /*0x55272d*/
          memset((void *)(v4 + 4 * v16), v13, (4 - (v4 & 3)) & 3); /*0x552734*/
          v4 += 4 - (v4 & 3); /*0x552740*/
          v10 = v13; /*0x552742*/
        }
        v17 = (_DWORD *)v4; /*0x552746*/
        HIWORD(v18) = HIWORD(v14); /*0x552748*/
        for ( v4 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v4; v17 += 2 ) /*0x55274f*/
        {
          *v17 = v12; /*0x552751*/
          v17[1] = v12; /*0x552753*/
        }
        v19 = v4 + (v14 & 3); /*0x552760*/
        if ( v4 < v19 ) /*0x552764*/
        {
          LOBYTE(v18) = v10; /*0x55276a*/
          BYTE1(v18) = v10; /*0x55276e*/
          v20 = v18 << 16; /*0x552776*/
          LOWORD(v20) = v18; /*0x55277f*/
          v21 = (v19 - v4) >> 2; /*0x552782*/
          memset32((void *)v4, v20, v21); /*0x552785*/
          memset((void *)(v4 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v4) & 3); /*0x55278c*/
          v4 = v19; /*0x552790*/
        }
        v3 = a2; /*0x552653*/
      }
      else if ( v5 == 0xFF ) /*0x552799*/
      {
        v22 = *a1 + (a1[1] << 8); /*0x5527a7*/
        v23 = a1[3]; /*0x5527b0*/
        v24 = a1[2]; /*0x5527b4*/
        a1 += 4; /*0x5527b7*/
        v25 = (v23 << 8) + v3; /*0x5527bd*/
        v26 = v22; /*0x5527bf*/
        v27 = (_BYTE *)(v25 + v24); /*0x5527c1*/
        v28 = v22 - 1; /*0x5527c3*/
        if ( v26 ) /*0x5527c6*/
        {
          v29 = v28 + 1; /*0x5527cc*/
          do /*0x5527d6*/
          {
            *(_BYTE *)v4++ = *v27++; /*0x5527d1*/
            --v29; /*0x5527d5*/
          }
          while ( v29 ); /*0x5527d6*/
        }
      }
      else
      {
        v30 = *a1; /*0x5527eb*/
        v31 = (a1[1] << 8) + v3; /*0x5527f3*/
        a1 += 2; /*0x5527f5*/
        v32 = (_BYTE *)(v31 + v30); /*0x5527f8*/
        v33 = (v5 & 0x3F) + 3; /*0x5527fa*/
        v34 = (v5 & 0x3F) + 2; /*0x5527fc*/
        if ( v33 ) /*0x5527ff*/
        {
          v35 = v34 + 1; /*0x552805*/
          do /*0x55280f*/
          {
            *(_BYTE *)v4++ = *v32++; /*0x55280a*/
            --v35; /*0x55280e*/
          }
          while ( v35 ); /*0x55280f*/
        }
      }
    }
    if ( v5 == 0x80 ) /*0x55269b*/
      break; /*0x55269b*/
    v8 = v5 & 0x3F; /*0x5526a6*/
    if ( v8 ) /*0x5526ab*/
    {
      v9 = v8; /*0x5526ad*/
      do /*0x5526b5*/
      {
        *(_BYTE *)v4++ = *a1++; /*0x5526b0*/
        --v9; /*0x5526b4*/
      }
      while ( v9 ); /*0x5526b5*/
    }
  }
  return v4 - v3; /*0x552818*/
}
}
// 0x554400
namespace gamemd {
ObjectClass * * E4Recv_554400::sub_554400(int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  v3 = *(&this->u32_84); /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 4))(g_DSurface_Hidden, v3, 0, 1); /*0x554420*/
  return 1; /*0x554425*/
}
}
// 0x554D50
namespace gamemd {
void UpdateDeferredLightSurfaces(int a1, char a2)
{
  int v4; // eax
  double v5; // st7
  void *v6; // eax
  double v7; // st7
  double v8; // st7
  int i; // edi
  void *v10; // esi
  void *v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st7
  __int64 v15; // rax
  int v16; // eax
  int v17; // [esp-18h] [ebp-4Ch]
  int v18; // [esp-14h] [ebp-48h]
  __int16 v19; // [esp-10h] [ebp-44h]
  __int16 v20; // [esp-Ch] [ebp-40h]
  __int16 v21; // [esp-8h] [ebp-3Ch]
  __int16 v22; // [esp-4h] [ebp-38h]
  int v24; // [esp+10h] [ebp-24h] BYREF
  int v25; // [esp+14h] [ebp-20h] BYREF
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
  double v28; // [esp+20h] [ebp-14h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  double HighPrecisionTimer; // [esp+2Ch] [ebp-8h]

  HighPrecisionTimer = Timer::GetHighPrecision(&dbl_884D88); /*0x554d6e*/
  ++dword_ABCA74; /*0x554d73*/
  if ( dword_ABCA50 && !byte_ABCA84 ) /*0x554d8e*/
  {
    v4 = dword_ABCA7C; /*0x554d94*/
    if ( dword_ABCA7C > 0 /*0x554dac*/
      || (dword_ABCA80 = dword_ABCA50, v4 = dword_ABCA50 - 1, dword_ABCA7C = dword_ABCA50 - 1, dword_ABCA50 - 1 >= 0) )
    {
      do /*0x554ed0*/
      {
        if ( !a2 && (v4 & 0xF) == 0xF ) /*0x554dbe*/
        {
          v5 = Timer::GetHighPrecision(&dbl_884D88); /*0x554dc5*/
          if ( (double)a1 <= v5 - HighPrecisionTimer ) /*0x554dd9*/
            break; /*0x554dd9*/
          v4 = dword_ABCA7C; /*0x554ddf*/
        }
        if ( **((_DWORD **)dword_ABCA44 + v4) ) /*0x554ded*/
        {
          --dword_ABCA80; /*0x554df2*/
        }
        else
        {
          v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)(*((_DWORD *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
          Tactical::CreateTacticalLightSurface((int)v6, &v24, &v25, &v26, &v27, (int)&v28, (int)&v29); /*0x554e2e*/
          **((_DWORD **)dword_ABCA44 + dword_ABCA7C) = v24; /*0x554e46*/
          *(_DWORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 4) = v25; /*0x554e5a*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 8) = v26; /*0x554e70*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 10) = v27; /*0x554e88*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 12) = LOWORD(v28); /*0x554e9f*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 14) = v29; /*0x554eb6*/
          --dword_ABCA80; /*0x554ec0*/
          v4 = dword_ABCA7C; /*0x554ec5*/
        }
        dword_ABCA7C = --v4; /*0x554ecb*/
      }
      while ( v4 >= 0 ); /*0x554ed0*/
    }
    if ( dword_ABCA80 <= 0 ) /*0x554edd*/
      byte_ABCA84 = 1; /*0x554edf*/
  }
  v28 = (double)a1; /*0x554eef*/
  v7 = Timer::GetHighPrecision(&dbl_884D88); /*0x554ef3*/
  v8 = v28 - (v7 - HighPrecisionTimer); /*0x554f03*/
  if ( byte_ABCA84 ) /*0x554f07*/
  {
    if ( a2 || (v29 = a1 - 1, v8 >= (double)(a1 - 1)) ) /*0x554f23*/
    {
      for ( i = 0; i < dword_ABCA50; ++i ) /*0x554f36*/
      {
        v10 = (void *)*((_DWORD *)dword_ABCA44 + i); /*0x554f42*/
        v22 = *((_WORD *)v10 + 7); /*0x554f53*/
        v21 = *((_WORD *)v10 + 6); /*0x554f56*/
        v20 = *((_WORD *)v10 + 5); /*0x554f5e*/
        v19 = *((_WORD *)v10 + 4); /*0x554f61*/
        v18 = *((_DWORD *)v10 + 1); /*0x554f62*/
        v17 = *(_DWORD *)v10; /*0x554f66*/
        v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v10 + 8); /*0x554f6d*/
        TacticalClass::SetView((int)v11, v17, v18, v19, v20, v21, v22); /*0x554f74*/
        __3_YAXPAX_Z(v10); /*0x554f7a*/
      }
      dword_ABCA50 = 0; /*0x554f91*/
      if ( dword_ABCA44 && byte_ABCA4D ) /*0x554fa7*/
      {
        __3_YAXPAX_Z(dword_ABCA44); /*0x554faa*/
        dword_ABCA44 = 0; /*0x554fb2*/
      }
      byte_ABCA4D = 0; /*0x554fc3*/
      dword_ABCA48 = 0; /*0x554fca*/
      byte_ABCA84 = 0; /*0x554fd4*/
      MapClass::MarkForRedraw(&MapClass_Instance, 1); /*0x554fdb*/
    }
  }
  v12 = Timer::GetHighPrecision(&dbl_884D88); /*0x554fe9*/
  v13 = v28 - (v12 - HighPrecisionTimer); /*0x554ff5*/
  if ( v13 > 0.0 && dword_ABCA74 > (unsigned int)(dword_ABCA78 + dword_829AE8) ) /*0x55501a*/
  {
    v14 = v13 * 0.5; /*0x55501c*/
    if ( v14 >= 1.0 ) /*0x55502d*/
      v14 = 1.0; /*0x555031*/
    v15 = Math::RoundToInt(v14); /*0x555037*/
    BYTE4(v15) = 0; /*0x55503e*/
    v16 = -((unsigned __int8)ReturnFalse2(v15, HIDWORD(v15)) != 0); /*0x55504d*/
    dword_ABCA78 = dword_ABCA74; /*0x55504f*/
    LOBYTE(v16) = v16 & 0xCF; /*0x555055*/
    dword_829AE8 = v16 + 50; /*0x55505a*/
  }
}
}
// 0x557380
namespace gamemd {
int E4Recv_557380::sub_557380(int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x55738b*/
  this->M44 = *(_DWORD *)(a2 + 44); /*0x557396*/
  this->M48 = *(_DWORD *)(a2 + 48); /*0x55739f*/
  this->M56 = 0; /*0x5573a7*/
  this->M60 = 0; /*0x5573aa*/
  this->q040 = 1; /*0x5573ad*/
  this->M65 = 0; /*0x5573b1*/
  this->q034 = &VectorClass<unsigned short const *>::`vftable'; /*0x5573b4*/
  sub_4B5830((_DWORD *)(&this->u32_142), (_DWORD *)(a2 + 52)); /*0x5573ba*/
  this->q044 = *(_DWORD *)(a2 + 68); /*0x5573c2*/
  this->q048 = *(_DWORD *)(a2 + 72); /*0x5573c8*/
  this->q034 = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x5573cb*/
  this->M76 = *(_DWORD *)(a2 + 76); /*0x5573d7*/
  this->q050 = *(_DWORD *)(a2 + 80); /*0x5573dd*/
  this->q054 = *(_BYTE *)(a2 + 84); /*0x5573e9*/
  ControlClass::CtorFromData((_DWORD *)(&this->q0208), a2 + 88); /*0x5573ec*/
  this->M84 = *(_BYTE *)(a2 + 132); /*0x5573fa*/
  this->M133 = *(_BYTE *)(a2 + 133); /*0x557400*/
  this->q088 = *(_DWORD *)(a2 + 136); /*0x557406*/
  this->M88 = &ToggleClass::`vftable'; /*0x557409*/
  this->M140 = *(_BYTE *)(a2 + 140); /*0x557413*/
  this->M144 = *(_DWORD *)(a2 + 144); /*0x557419*/
  this->M148 = *(_DWORD *)(a2 + 148); /*0x55741f*/
  this->M152 = *(_BYTE *)(a2 + 152); /*0x557425*/
  this->M156 = *(_DWORD *)(a2 + 156); /*0x55742b*/
  this->M160 = *(_DWORD *)(a2 + 160); /*0x557431*/
  this->M164 = *(_BYTE *)(a2 + 164); /*0x557437*/
  this->M168 = *(_DWORD *)(a2 + 168); /*0x55743d*/
  this->M172 = *(_BYTE *)(a2 + 172); /*0x557443*/
  this->M173 = *(_BYTE *)(a2 + 173); /*0x557449*/
  this->M176 = *(_DWORD *)(a2 + 176); /*0x55744f*/
  this->M180 = *(_BYTE *)(a2 + 180); /*0x55745b*/
  this->M88 = &ShapeButtonClass::`vftable'; /*0x557460*/
  ControlClass::CtorFromData((_DWORD *)(&this->q0484), a2 + 184); /*0x557466*/
  this->M228 = *(_BYTE *)(a2 + 228); /*0x55746e*/
  this->M229 = *(_BYTE *)(a2 + 229); /*0x557474*/
  this->M232 = *(_DWORD *)(a2 + 232); /*0x55747a*/
  this->M184 = &ToggleClass::`vftable'; /*0x55747d*/
  this->M236 = *(_BYTE *)(a2 + 236); /*0x557486*/
  this->M240 = *(_DWORD *)(a2 + 240); /*0x55748c*/
  this->M244 = *(_DWORD *)(a2 + 244); /*0x557492*/
  this->M248 = *(_BYTE *)(a2 + 248); /*0x557498*/
  this->M252 = *(_DWORD *)(a2 + 252); /*0x55749e*/
  this->q100 = *(_DWORD *)(a2 + 256); /*0x5574a4*/
  this->q104 = *(_BYTE *)(a2 + 260); /*0x5574aa*/
  this->q108 = *(_DWORD *)(a2 + 264); /*0x5574b0*/
  this->M268 = *(_BYTE *)(a2 + 268); /*0x5574b6*/
  this->M269 = *(_BYTE *)(a2 + 269); /*0x5574bc*/
  this->M272 = *(_DWORD *)(a2 + 272); /*0x5574c6*/
  this->q114 = *(_BYTE *)(a2 + 276); /*0x5574d2*/
  this->M184 = &ShapeButtonClass::`vftable'; /*0x5574de*/
  sub_5581A0(&this->u32_460, a2 + 280); /*0x5574e4*/
  this->M340 = *(_DWORD *)(a2 + 340); /*0x5574fa*/
  this->M344 = *(_DWORD *)(a2 + 344); /*0x557500*/
  this->M348 = *(_BYTE *)(a2 + 348); /*0x557506*/
  this->q160 = *(_DWORD *)(a2 + 352); /*0x55750c*/
  this->q164 = *(_DWORD *)(a2 + 356); /*0x557512*/
  this->q168 = *(_DWORD *)(a2 + 360); /*0x55751c*/
  this->q118 = &SliderClass::`vftable'; /*0x55751f*/
  this->M364 = *(_DWORD *)(a2 + 364); /*0x55752c*/
  v3 = this->M88; /*0x557538*/
  this->M368 = *(_DWORD *)(a2 + 368); /*0x55753c*/
  *(_DWORD *)this = &ListClass::`vftable'; /*0x557542*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(&this->q160, this); /*0x557548*/
  (*(void (__thiscall **)(int, int))(this->M184 + 132))(&this->u32_2E0, this); /*0x557553*/
  (*(void (__thiscall **)(int, int))(this->q118 + 132))(&this->u32_460, this); /*0x55755f*/
  return this; /*0x557566*/
}
}
// 0x557B10
namespace gamemd {
ControlClass * * CheckListClass__vt_19_(char a2, int a3, unsigned int * a4)
{
  char result; // al
  int v6; // edi
  int v7; // eax

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == &this->u32_82 ) /*0x557b25*/
      this->OnKeyUp(1); /*0x557b2b*/
    result = (_BYTE)this - 72; /*0x557b31*/
    if ( a4 == &this->u32_106 ) /*0x557b39*/
      result = this->OnKeyUp(0); /*0x557b41*/
  }
  if ( a4 == &this->u32_1C0 ) /*0x557b4f*/
  {
    v6 = *this; /*0x557b53*/
    v7 = (*(int (__thiscall **)(_DWORD *))(*(&this->u32_1C0) + 144))(&this->u32_1C0); /*0x557b55*/
    return this->OnKeyDown(v7); /*0x557b5e*/
  }
  return result; /*0x557b64*/
}
}
// 0x558810
namespace gamemd {
int E4Recv_558810::ShowSaveLoadDialog(CampaignScore * aP1)
{
  char *v2; // eax

  v2 = aP1; /*0x558810*/
  this->M4 = 2; /*0x558814*/
  if ( !aP1 ) /*0x55881d*/
    v2 = (char *)g_ScenarioClass_Instance + 4960; /*0x558824*/
  this->M12 = v2; /*0x558829*/
  return SaveLoadDialog::DlgProc((const char **)this); /*0x558831*/
}
}
// 0x55B720
namespace gamemd {
int E4Recv_55B720::sub_55B720()
{
  RulesClass *v1; // ebx
  wchar_t *v3; // edi
  int v4; // edx
  wchar_t **v5; // esi
  int v6; // eax
  wchar_t *v7; // eax
  int v8; // edx
  int v9; // eax
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int result; // eax
  int i; // edi
  int v14; // esi
  wchar_t *v15; // [esp+18h] [ebp-8h]

  v1 = g_RulesClass_Instance; /*0x55b724*/
  if ( !LOBYTE(g_RulesClass_Instance[1].RailgunDamageRadius) /*0x55b74a*/
    || *(double *)&g_RulesClass_Instance[1].MasterMindOverloadDeathSound == 0.0 )
  {
    goto LABEL_8; /*0x55b74a*/
  }
  v3 = g_CurrentFrame; /*0x55b751*/
  v4 = *((_DWORD *)g_ScenarioClass_Instance + 1158); /*0x55b757*/
  v5 = (wchar_t **)((char *)g_ScenarioClass_Instance + 4632); /*0x55b75d*/
  v6 = *((_DWORD *)g_ScenarioClass_Instance + 1160); /*0x55b766*/
  if ( v4 != -1 ) /*0x55b769*/
  {
    if ( (int)g_CurrentFrame - v4 >= v6 ) /*0x55b771*/
    {
  LABEL_7:
      v7 = (wchar_t *)Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].MasterMindOverloadDeathSound * 900.0); /*0x55b779*/
      *v5 = v3; /*0x55b78e*/
      v5[1] = v15; /*0x55b790*/
      v5[2] = v7; /*0x55b798*/
      MapClass::ProcessVisibilityFlags(&MapClass_Instance); /*0x55b79b*/
      v1 = g_RulesClass_Instance; /*0x55b7a0*/
  LABEL_8:
      v3 = g_CurrentFrame; /*0x55b7a6*/
      goto LABEL_9; /*0x55b7a6*/
    }
    v6 -= (int)g_CurrentFrame - v4; /*0x55b773*/
  }
  if ( !v6 ) /*0x55b777*/
    goto LABEL_7; /*0x55b777*/
  LABEL_9:
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 && *(double *)&v1[1].AirstrikeAttackVoice != 0.0 ) /*0x55b7ca*/
  {
    v8 = *((_DWORD *)g_ScenarioClass_Instance + 1161); /*0x55b7cc*/
    v9 = *((_DWORD *)g_ScenarioClass_Instance + 1163); /*0x55b7d2*/
    v10 = (wchar_t **)((char *)g_ScenarioClass_Instance + 4644); /*0x55b7d8*/
    if ( v8 != -1 ) /*0x55b7e1*/
    {
      if ( (int)v3 - v8 >= v9 ) /*0x55b7e9*/
      {
  LABEL_15:
        v11 = (wchar_t *)Math::RoundToInt(*(double *)&v1[1].AirstrikeAttackVoice * 900.0); /*0x55b7f1*/
        *v10 = v3; /*0x55b806*/
        v10[1] = v15; /*0x55b808*/
        v10[2] = v11; /*0x55b810*/
        MapClass::ProcessFogTransition(&MapClass_Instance); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      v9 -= (int)v3 - v8; /*0x55b7eb*/
    }
    if ( v9 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
  LABEL_16:
  result = this->M16; /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    v14 = *(_DWORD *)(this->M4 + 4 * i); /*0x55b824*/
    if ( v14 && (*(_BYTE *)(v14 + 20) & 4) != 0 && *(_DWORD *)(v14 + 1652) && !*(_BYTE *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(_DWORD *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1652) + 64))(*(_DWORD *)(v14 + 1652)); /*0x55b86b*/
    }
    result = this->M16; /*0x55b86e*/
  }
  return result; /*0x55b876*/
}
}
// 0x55BC00
namespace gamemd {
void CompressLCWBuffer(Pipe * aP0, int edx0, unsigned char * a2, unsigned int * a3, int a5)
{
  unsigned __int8 *v5; // edi
  unsigned __int8 *v6; // ebp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int8 *i; // esi
  unsigned int v13; // eax
  unsigned __int8 *v14; // ebx
  unsigned int v15; // eax
  char *v16; // ebx
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // ebp
  unsigned __int8 *v19; // edi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  unsigned __int8 *v23; // ebp
  unsigned int v24; // eax
  char v25; // dl
  unsigned __int8 v26; // al
  char v27; // dl
  char *v28; // ebx
  unsigned __int8 v29; // al
  char v30; // dl
  char *v31; // ebx
  unsigned __int8 v32; // al
  char v33; // dl
  char *v34; // ebx
  unsigned __int8 v35; // al
  char v36; // dl
  char *v37; // ebx
  unsigned __int8 v38; // al
  char v39; // dl
  char *v40; // ebx
  unsigned __int8 v41; // al
  char v42; // dl
  _BYTE *v43; // ebx
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // ecx
  _BYTE *v47; // ebp
  unsigned int v48; // ebx
  int v49; // eax
  _BYTE *v50; // ebp
  unsigned int v51; // eax
  char v52; // al
  int v53; // ecx
  _BYTE *v54; // ebp
  int v55; // ecx
  unsigned int v56; // eax
  unsigned __int8 v57; // bl
  unsigned int v58; // edx
  unsigned int v59; // ecx
  unsigned __int8 *v60; // edi
  int v62; // [esp+10h] [ebp-1Ch]
  int v63; // [esp+10h] [ebp-1Ch]
  unsigned __int8 *v64; // [esp+14h] [ebp-18h]
  unsigned __int8 *v65; // [esp+18h] [ebp-14h]
  unsigned int v66; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  unsigned int v69; // [esp+38h] [ebp+Ch]

  v5 = aP0; /*0x55bc07*/
  v6 = a2; /*0x55bc0d*/
  v65 = &aP0[edx0]; /*0x55bc17*/
  v7 = *aP0 ^ (32 * (aP0[1] ^ (32 * aP0[2]))); /*0x55bc33*/
  v8 = a5; /*0x55bc35*/
  v64 = aP0; /*0x55bc3b*/
  *(_DWORD *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = aP0; /*0x55bc58*/
  v9 = (v7 >> 5) ^ (*v5 >> 5) ^ (v5[3] << 10); /*0x55bc6d*/
  *(_DWORD *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = v5 + 1; /*0x55bc89*/
  v10 = (v9 >> 5) ^ (v5[1] >> 5) ^ (v5[4] << 10); /*0x55bc9e*/
  *(_DWORD *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = v5 + 2; /*0x55bcbb*/
  v11 = (v10 >> 5) ^ (v5[2] >> 5) ^ (v5[5] << 10); /*0x55bcce*/
  *(_DWORD *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = v5 + 3; /*0x55bce7*/
  for ( i = v5 + 4; ; v11 = *i ^ (32 * (i[1] ^ (32 * i[2]))) ) /*0x55bcea*/
  {
    while ( 1 ) /*0x55bcfd*/
    {
      v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(unsigned __int8 **)(v8 + 4 * v13); /*0x55bd02*/
      *(_DWORD *)(v8 + 4 * v13) = i; /*0x55bd05*/
      if ( v14 >= aP0 ) /*0x55bd0c*/
      {
        v62 = i - v14; /*0x55bd18*/
        if ( i - v14 > 0 && i - v14 <= 49151 && *v14 == *i && v14[1] == i[1] && v14[2] == i[2] ) /*0x55bd49*/
          break; /*0x55bd49*/
      }
  LABEL_56:
      if ( ++i >= v65 - 13 ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (*(i - 1) >> 5) ^ (i[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    v15 = i - v5; /*0x55bd55*/
    v16 = (char *)(v14 + 3); /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = *v5; /*0x55bd71*/
        v17 = v5[1]; /*0x55bd74*/
        v18 = v6 + 1; /*0x55bd77*/
        v19 = v5 + 1; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = v18 + 1; /*0x55bd84*/
        v5 = v19 + 2; /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
  LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    v21 = i - v5; /*0x55bda2*/
    v68 = i - v5; /*0x55bda7*/
    if ( v15 > 3 ) /*0x55bdab*/
    {
      if ( v15 > 0x12 ) /*0x55bdbe*/
      {
        v22 = v15 - 18; /*0x55bdcc*/
        *v6 = 0; /*0x55bdcf*/
        v23 = v6 + 1; /*0x55bdd3*/
        v66 = v22; /*0x55bdd9*/
        if ( v22 <= 0xFF ) /*0x55bddd*/
        {
          v20 = v62; /*0x55bed9*/
        }
        else
        {
          memset(v23, 0, 4 * ((v22 - 1) / 0x3FC) + (((v22 - 1) / 0xFF) & 3)); /*0x55bdff*/
          v24 = (v22 - 1) / 0xFF; /*0x55be08*/
          v23 += v24; /*0x55be0a*/
          do /*0x55be1b*/
          {
            v25 = v66 + 1; /*0x55be10*/
            --v24; /*0x55be16*/
            v66 -= 255; /*0x55be17*/
          }
          while ( v24 ); /*0x55be1b*/
          v20 = v62; /*0x55be1d*/
          v5 = v64; /*0x55be21*/
          LOBYTE(v22) = v25; /*0x55be25*/
          v21 = v68; /*0x55be27*/
        }
        *v23 = v22; /*0x55be2b*/
        v6 = v23 + 1; /*0x55be2e*/
      }
      else
      {
        v20 = v62; /*0x55bdc0*/
        *v6++ = v15 - 3; /*0x55bdc6*/
      }
    }
    else
    {
      *(v6 - 2) |= v15; /*0x55bdb2*/
      v20 = v62; /*0x55bdb5*/
    }
    do /*0x55be37*/
    {
      *v6++ = *v5++; /*0x55be31*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
  LABEL_25:
    v26 = i[3]; /*0x55be3d*/
    v27 = *v16; /*0x55be40*/
    i += 4; /*0x55be45*/
    v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      v29 = *i; /*0x55be4f*/
      v30 = *v28; /*0x55be51*/
      ++i; /*0x55be53*/
      v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        v32 = *i; /*0x55be5d*/
        v33 = *v31; /*0x55be5f*/
        ++i; /*0x55be61*/
        v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          v35 = *i; /*0x55be6b*/
          v36 = *v34; /*0x55be6d*/
          ++i; /*0x55be6f*/
          v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            v38 = *i; /*0x55be79*/
            v39 = *v37; /*0x55be7b*/
            ++i; /*0x55be7d*/
            v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              v41 = *i; /*0x55be87*/
              v42 = *v40; /*0x55be89*/
              ++i; /*0x55be8b*/
              v43 = v40 + 1; /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
                for ( ; i < v65; ++i ) /*0x55be9b*/
                {
                  if ( *v43 != *i ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                v44 = i - v64; /*0x55beb5*/
                if ( v62 > 0x4000 ) /*0x55bebc*/
                {
                  v49 = v62 - 0x4000; /*0x55beeb*/
                  v63 = v62 - 0x4000; /*0x55bef3*/
                  if ( v44 <= 9 ) /*0x55bef7*/
                  {
                    v46 = v63; /*0x55befc*/
                    *v6 = (v44 - 2) | (v49 >> 11) & 8 | 0x10; /*0x55bf09*/
                    v47 = v6 + 1; /*0x55bf0c*/
                    goto LABEL_52; /*0x55bf0d*/
                  }
                  v48 = v44 - 9; /*0x55bf17*/
                  *v6 = (v49 >> 11) & 8 | 0x10; /*0x55bf1c*/
                }
                else
                {
                  v45 = v62 - 1; /*0x55bebe*/
                  v63 = v62 - 1; /*0x55bec2*/
                  if ( v44 <= 0x21 ) /*0x55bec6*/
                  {
                    v46 = v45; /*0x55becb*/
                    *v6 = (v44 - 2) | 0x20; /*0x55bed0*/
                    v47 = v6 + 1; /*0x55bed3*/
                    goto LABEL_52; /*0x55bed4*/
                  }
                  v48 = v44 - 33; /*0x55bee2*/
                  *v6 = 32; /*0x55bee5*/
                }
                v50 = v6 + 1; /*0x55bf1f*/
                if ( v48 > 0xFF ) /*0x55bf26*/
                {
                  memset(v50, 0, 4 * ((v48 - 1) / 0x3FC) + (((v48 - 1) / 0xFF) & 3)); /*0x55bf44*/
                  v51 = (v48 - 1) / 0xFF; /*0x55bf4d*/
                  v50 += v51; /*0x55bf4f*/
                  do /*0x55bf58*/
                  {
                    LOBYTE(v48) = v48 + 1; /*0x55bf51*/
                    --v51; /*0x55bf57*/
                  }
                  while ( v51 ); /*0x55bf58*/
                }
                v46 = v63; /*0x55bf5a*/
                *v50 = v48; /*0x55bf5e*/
                v47 = v50 + 1; /*0x55bf61*/
                goto LABEL_52; /*0x55bf62*/
              }
            }
          }
        }
      }
    }
    v52 = (_BYTE)--i - (_BYTE)v5; /*0x55bf67*/
    if ( v20 <= 2048 ) /*0x55bf6f*/
    {
      v53 = v20 - 1; /*0x55bf71*/
      *v6 = (32 * (v52 + 7)) | (4 * (v53 & 7)); /*0x55bf81*/
      v54 = v6 + 1; /*0x55bf84*/
      v55 = v53 >> 3; /*0x55bf85*/
      goto LABEL_53; /*0x55bf88*/
    }
    if ( v20 > 0x4000 ) /*0x55bf90*/
    {
      v46 = v20 - 0x4000; /*0x55bf9c*/
      *v6 = (v52 - 2) | (v46 >> 11) & 8 | 0x10; /*0x55bfb1*/
    }
    else
    {
      v46 = v20 - 1; /*0x55bf94*/
      *v6 = (v52 - 2) | 0x20; /*0x55bf97*/
    }
    v47 = v6 + 1; /*0x55bfb4*/
  LABEL_52:
    *v47 = 4 * v46; /*0x55bfba*/
    v54 = v47 + 1; /*0x55bfbd*/
    v55 = v46 >> 6; /*0x55bfbe*/
  LABEL_53:
    *v54 = v55; /*0x55bfc1*/
    v6 = v54 + 1; /*0x55bfc8*/
    v64 = i; /*0x55bfc9*/
    if ( i >= v65 - 13 ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
  LABEL_59:
  v56 = v65 - v5; /*0x55c027*/
  if ( v65 - v5 > 0 ) /*0x55c02f*/
  {
    v69 = v65 - v5; /*0x55c039*/
    if ( v6 == a2 && v56 <= 0xEE ) /*0x55c046*/
    {
      *v6 = v56 + 17; /*0x55c04d*/
      goto LABEL_72; /*0x55c050*/
    }
    if ( v56 > 3 ) /*0x55c055*/
    {
      if ( v56 > 0x12 ) /*0x55c05f*/
      {
        v57 = v56 - 18; /*0x55c06b*/
        *v6++ = 0; /*0x55c06e*/
        if ( v56 - 18 > 0xFF ) /*0x55c079*/
        {
          v58 = (v56 - 19) / 0xFF; /*0x55c085*/
          v59 = (v56 - 19) / 0x3FC; /*0x55c090*/
          memset(v6, 0, 4 * v59); /*0x55c093*/
          v60 = &v6[4 * v59]; /*0x55c093*/
          v6 += v58; /*0x55c09a*/
          memset(v60, 0, v58 & 3); /*0x55c09c*/
          do /*0x55c0a5*/
          {
            ++v57; /*0x55c09e*/
            --v58; /*0x55c0a4*/
          }
          while ( v58 ); /*0x55c0a5*/
          v5 = v64; /*0x55c0a7*/
          v56 = v69; /*0x55c0ab*/
        }
        *v6 = v57; /*0x55c0af*/
      }
      else
      {
        *v6 = v56 - 3; /*0x55c066*/
      }
  LABEL_72:
      ++v6; /*0x55c0b2*/
    }
    else
    {
      *(v6 - 2) |= v56; /*0x55c057*/
    }
    do /*0x55c0bb*/
    {
      *v6++ = *v5++; /*0x55c0b5*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a3 = v6 - a2; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}
}
// 0x55C0E0
namespace gamemd {
void DecodeBlockLCW(AbstractClass * aP0, Pipe * aP1, unsigned char * a2, unsigned int * a3, int a5)
{
  unsigned __int8 *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 *v7; // ebp
  unsigned int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 *v14; // eax
  unsigned __int8 v15; // cl
  unsigned __int8 *v16; // eax
  int v17; // ecx
  _BYTE *v18; // ecx
  _BYTE *v19; // esi
  int v20; // ecx
  _BYTE *v21; // edi
  int v22; // edx
  int v23; // edx
  unsigned __int8 v24; // cl
  _BYTE *v25; // edi
  int v26; // edx
  unsigned __int8 v27; // cl
  _BYTE *v28; // edi
  unsigned __int8 *v29; // eax
  _BYTE *v30; // edi
  _BYTE *v32; // esi
  _BYTE *v33; // edi

  v5 = aP0; /*0x55c0e5*/
  *a3 = 0; /*0x55c0e8*/
  v6 = a2; /*0x55c0ef*/
  v7 = &aP0[aP1]; /*0x55c0f3*/
  if ( *aP0 > 0x11u ) /*0x55c0fc*/
  {
    v8 = *aP0 - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
  LABEL_3:
  v8 = *v5; /*0x55c109*/
  v9 = v5 + 1; /*0x55c10d*/
  if ( v8 < 0x10 ) /*0x55c111*/
  {
    if ( !v8 ) /*0x55c119*/
    {
      v10 = 15; /*0x55c11d*/
      if ( !*v9 ) /*0x55c11b*/
      {
        do /*0x55c132*/
        {
          v11 = v9[1]; /*0x55c126*/
          v10 += 255; /*0x55c129*/
          ++v9; /*0x55c12f*/
        }
        while ( !v11 ); /*0x55c132*/
      }
      v8 = *v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = v9 + 1; /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = v14 + 1; /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
  LABEL_9:
    v16 = v5 + 1; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = *v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * *v9]; /*0x55c170*/
      v5 = v9 + 1; /*0x55c17e*/
      *v6++ = *(_BYTE *)(v17 - 2049); /*0x55c17f*/
      v18 = (_BYTE *)(v17 - 2049 + 1); /*0x55c182*/
  LABEL_13:
      *v6 = *v18; /*0x55c183*/
      v19 = v6 + 1; /*0x55c18a*/
      *v19 = v18[1]; /*0x55c18b*/
      v6 = v19 + 1; /*0x55c18d*/
      goto LABEL_14; /*0x55c18d*/
    }
  }
  while ( 1 ) /*0x55c1c1*/
  {
    if ( v8 >= 0x40 ) /*0x55c1c4*/
    {
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * *v9]; /*0x55c1db*/
      v5 = v9 + 1; /*0x55c1dc*/
      v22 = (v8 >> 5) - 1; /*0x55c1e0*/
      goto LABEL_33; /*0x55c1e1*/
    }
    if ( v8 < 0x20 ) /*0x55c1e9*/
      break; /*0x55c1e9*/
    v22 = v8 & 0x1F; /*0x55c1eb*/
    if ( !v22 ) /*0x55c1ee*/
    {
      v23 = 31; /*0x55c1f2*/
      if ( !*v9 ) /*0x55c1f0*/
      {
        do /*0x55c207*/
        {
          v24 = v9[1]; /*0x55c1fb*/
          v23 += 255; /*0x55c1fe*/
          ++v9; /*0x55c204*/
        }
        while ( !v24 ); /*0x55c207*/
      }
      v22 = *v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-(*v9 >> 2) - 1 + -64 * v9[1]]; /*0x55c225*/
    v5 = v9 + 2; /*0x55c227*/
  LABEL_33:
    *v6 = *v21; /*0x55c28e*/
    v32 = v6 + 1; /*0x55c295*/
    *v32 = v21[1]; /*0x55c297*/
    v6 = v32 + 1; /*0x55c299*/
    v33 = v21 + 2; /*0x55c29a*/
    do /*0x55c2a2*/
    {
      *v6++ = *v33++; /*0x55c29d*/
      --v22; /*0x55c2a1*/
    }
    while ( v22 ); /*0x55c2a2*/
  LABEL_14:
    v20 = *(v5 - 2) & 3; /*0x55c18e*/
    if ( (*(v5 - 2) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = *v5++; /*0x55c19c*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = *v5; /*0x55c1a5*/
    v9 = v5 + 1; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * *v9]; /*0x55c1bd*/
      v5 = v9 + 1; /*0x55c1be*/
      goto LABEL_13; /*0x55c1bf*/
    }
  }
  v25 = &v6[-2048 * (v8 & 8)]; /*0x55c234*/
  v22 = v8 & 7; /*0x55c236*/
  if ( !v22 ) /*0x55c239*/
  {
    v26 = 7; /*0x55c23d*/
    if ( !*v9 ) /*0x55c23b*/
    {
      do /*0x55c252*/
      {
        v27 = v9[1]; /*0x55c246*/
        v26 += 255; /*0x55c249*/
        ++v9; /*0x55c24f*/
      }
      while ( !v27 ); /*0x55c252*/
    }
    v22 = *v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-(*v9 >> 2)]; /*0x55c262*/
  v29 = v9 + 1; /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = v29 + 1; /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a3 = v6 - a2; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}
}
// 0x55CFD0
namespace gamemd {
AbstractClass * * Game_Frame_Check()
{
  const void *v0; // eax
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v8; // [esp+8h] [ebp-7Ch]
  _BYTE v9[4]; // [esp+Ch] [ebp-78h] BYREF
  int i; // [esp+10h] [ebp-74h]

  if ( ((unsigned __int16)g_CurrentFrame & 0x3FF) == 0 && !(unsigned __int8)CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    v0 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x55cff9*/
    if ( Networking_LastEventIndex < 128 ) /*0x55d008*/
    {
      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x55d025*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x55d037*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x55d04e*/
      ++Networking_LastEventIndex; /*0x55d054*/
    }
  }
  if ( byte_A83D49 || g_NetResponseActive || byte_8B41C0 || byte_A83D48 ) /*0x55d07a*/
  {
    ++g_GameFlags_Campaign; /*0x55d080*/
    v1 = Scenario::ClearScreen(); /*0x55d086*/
    LOBYTE(v1) = byte_A83D49; /*0x55d08b*/
    if ( byte_A83D49 || g_NetResponseActive ) /*0x55d09a*/
    {
      if ( g_TacticalRender ) /*0x55d0a8*/
      {
        v1 = Tooltip::Enable(0); /*0x55d0ab*/
        LOBYTE(v1) = byte_A83D49; /*0x55d0b0*/
      }
      if ( (_BYTE)v1 || g_NetResponseActive ) /*0x55d0bf*/
      {
        v2 = g_GameMode_Current; /*0x55d0cb*/
        if ( g_GameStateFlags && (g_GameMode_Current == 3 || g_GameMode_Current == 4) ) /*0x55d0dd*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)g_GameStateFlags + 160))(v1); /*0x55d0e2*/
          LOBYTE(v1) = byte_A83D49; /*0x55d0e8*/
          v2 = g_GameMode_Current; /*0x55d0ed*/
        }
        if ( (_BYTE)v1 ) /*0x55d0f5*/
        {
          if ( v2 == 4 && !g_SkirmishInitFlag ) /*0x55d106*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d10e*/
              byte_A8B8C1 = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
            LOBYTE(v3) = 0; /*0x55d11c*/
            ProcessGameResults(v3); /*0x55d11e*/
          }
          g_NetResponseActive = 0; /*0x55d123*/
          byte_A83D49 = 0; /*0x55d129*/
          byte_8B41C0 = 0; /*0x55d12f*/
          byte_A83D48 = 0; /*0x55d135*/
          InitLoadingScreenResources(); /*0x55d13b*/
          WTFMode::Shutdown(&g_GameMode_Current); /*0x55d145*/
          Scenario::EndGameFlow(); /*0x55d14a*/
          WTFMode::Init(&g_GameMode_Current); /*0x55d154*/
          byte_ABCD58 = 0; /*0x55d15f*/
          if ( !g_TacticalRender ) /*0x55d167*/
            goto LABEL_52; /*0x55d167*/
          goto LABEL_26; /*0x55d167*/
        }
        if ( g_NetResponseActive ) /*0x55d183*/
        {
          if ( v2 == 4 && !g_SkirmishInitFlag ) /*0x55d194*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d19c*/
              byte_A8B8C1 = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
            LOBYTE(v4) = 0; /*0x55d1aa*/
            ProcessGameResults(v4); /*0x55d1ac*/
          }
          byte_A83D49 = 0; /*0x55d1b1*/
          g_NetResponseActive = 0; /*0x55d1b7*/
          byte_8B41C0 = 0; /*0x55d1bd*/
          byte_A83D48 = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown(&g_GameMode_Current); /*0x55d1d3*/
          Scenario::EndGame(); /*0x55d1d8*/
          WTFMode::Init(&g_GameMode_Current); /*0x55d1e2*/
          byte_ABCD58 = 0; /*0x55d1ed*/
          if ( !g_TacticalRender ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
  LABEL_26:
          Tooltip::Enable(byte_A8EB80); /*0x55d16d*/
  LABEL_52:
          --g_GameFlags_Campaign; /*0x55d341*/
          return g_WTFMode == 0; /*0x55d341*/
        }
      }
    }
    if ( byte_8B41C0 ) /*0x55d212*/
    {
      byte_A83D49 = 0; /*0x55d219*/
      g_NetResponseActive = 0; /*0x55d21f*/
      byte_8B41C0 = 0; /*0x55d225*/
      byte_A83D48 = 0; /*0x55d22b*/
      WTFMode::Shutdown(&g_GameMode_Current); /*0x55d231*/
      GameFrameCheck_Check(); /*0x55d236*/
      WTFMode::Init(&g_GameMode_Current); /*0x55d240*/
      byte_ABCD58 = 0; /*0x55d245*/
    }
    else if ( byte_A83D48 ) /*0x55d256*/
    {
      byte_A83D49 = 0; /*0x55d25c*/
      g_NetResponseActive = 0; /*0x55d262*/
      byte_8B41C0 = 0; /*0x55d268*/
      byte_A83D48 = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown(&g_GameMode_Current); /*0x55d27e*/
      GameFrameCheck_Check_686570(); /*0x55d283*/
      WTFMode::Init(&g_GameMode_Current); /*0x55d28d*/
      byte_ABCD58 = 0; /*0x55d292*/
      Debug::Log(aDisconnectGrac); /*0x55d29d*/
      if ( g_GameMode_Current == 4 && g_NetworkInterface && g_Network_IsHosting ) /*0x55d2c5*/
      {
        if ( dword_A8EA0C ) /*0x55d2cd*/
        {
          NetworkEventQueueClass::WaitForResponse(&g_NetworkEventQueue); /*0x55d2d4*/
          v5 = 480; /*0x55d2e2*/
          v8 = Timer::GetTicks(v9); /*0x55d2e7*/
          for ( i = 480; ; v5 = i ) /*0x55d2eb*/
          {
            if ( v8 != -1 ) /*0x55d2fa*/
            {
              v6 = Timer::GetTicks(v9) - v8; /*0x55d305*/
              if ( v6 >= v5 ) /*0x55d30b*/
                break; /*0x55d30b*/
              v5 -= v6; /*0x55d30d*/
            }
            if ( !v5 ) /*0x55d311*/
              break; /*0x55d311*/
            Event::Dispatch(); /*0x55d313*/
            if ( (unsigned __int8)Process::WaitForExit(0xAu, 0) ) /*0x55d320*/
              break; /*0x55d320*/
          }
        }
        if ( !g_GameStateFlags /*0x55d335*/
          || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 8))(g_GameStateFlags) )
        {
          Network::SendUnreachable(); /*0x55d33c*/
        }
      }
    }
    goto LABEL_52; /*0x55d24b*/
  }
  return g_WTFMode == 0; /*0x55d351*/
}
}
// 0x55D360
namespace gamemd {
void GameFrameLoop()
{
  int v0; // eax
  int v1; // esi
  int v2; // esi
  wchar_t *v3; // esi
  signed int v4; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // esi
  int *v8; // edi
  int v9; // esi
  signed int v10; // eax
  int v11; // esi
  signed int v12; // eax
  int v13; // esi
  signed int v14; // eax
  DWORD v15; // esi
  int v16; // esi
  _DWORD *v17; // edi
  int v18; // eax
  char v20; // cl
  int v21; // ecx
  DWORD *v22; // eax
  int v23; // esi
  int v24; // eax
  unsigned __int8 v25; // cl
  int v26; // ecx
  int j; // esi
  int v28; // eax
  unsigned __int8 v29; // cl
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  unsigned __int8 v33; // cl
  int v34; // ecx
  int v35; // esi
  int v36; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed int v41; // eax
  char *v42; // edx
  DWORD Time; // [esp+10h] [ebp-1B4h] BYREF
  int v44; // [esp+14h] [ebp-1B0h] BYREF
  int v45; // [esp+18h] [ebp-1ACh]
  wchar_t *v46; // [esp+1Ch] [ebp-1A8h] BYREF
  int i; // [esp+20h] [ebp-1A4h] BYREF
  int v48; // [esp+24h] [ebp-1A0h] BYREF
  _BYTE v49[8]; // [esp+28h] [ebp-19Ch] BYREF
  int v50; // [esp+30h] [ebp-194h] BYREF
  int v51; // [esp+34h] [ebp-190h] BYREF
  _BYTE v52[4]; // [esp+38h] [ebp-18Ch] BYREF
  _BYTE v53[4]; // [esp+3Ch] [ebp-188h] BYREF
  _BYTE v54[4]; // [esp+40h] [ebp-184h] BYREF
  _BYTE v55[8]; // [esp+44h] [ebp-180h] BYREF
  char Str[264]; // [esp+4Ch] [ebp-178h] BYREF
  wchar_t Buffer[56]; // [esp+154h] [ebp-70h] BYREF

  if ( !g_WTFMode ) /*0x55d371*/
    return 1; /*0x55d371*/
  byte_ABCD58 = 1; /*0x55d37c*/
  if ( !g_DDraw_Active ) /*0x55d385*/
  {
    while ( !g_GameMode_Current || g_GameMode_Current == 5 ) /*0x55d399*/
    {
      Sleep(0x1F4u); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( g_DDraw_Active ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    Sleep(0xAu); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
  LABEL_8:
  if ( (int)g_CurrentFrame >= dword_A8E2E4 ) /*0x55d3c8*/
    nullsub_35(&g_GameMode_Current); /*0x55d3cf*/
  dword_A8B55C = timeGetTime(); /*0x55d3da*/
  if ( dword_A8E308 ) /*0x55d3e6*/
    byte_A8ED72 = 1; /*0x55d3e8*/
  if ( g_FramePresent_State == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    v0 = dword_A83D14; /*0x55d401*/
    if ( dword_A83D14 == -1 ) /*0x55d409*/
      v0 = dword_A83D18; /*0x55d40b*/
    if ( byte_A8EBA5 ) /*0x55d418*/
    {
      if ( v0 == -1 ) /*0x55d41d*/
        Theme::QueueSong(-2); /*0x55d421*/
    }
    else if ( v0 != -3 ) /*0x55d426*/
    {
      Theme::Stop(1); /*0x55d42f*/
      Theme::QueueSong(-3); /*0x55d43b*/
    }
  }
  if ( !g_GameMode_Current ) /*0x55d447*/
  {
    if ( !byte_A8EDDC ) /*0x55d76e*/
    {
      *(_DWORD *)g_GameModeOptions = 2; /*0x55d774*/
      dword_887348 = Timer::GetTicks(&v44); /*0x55d783*/
      dword_88734C = v44; /*0x55d791*/
      dwMilliseconds = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
  LABEL_61:
    v15 = *(_DWORD *)g_GameModeOptions; /*0x55d79e*/
    dword_887348 = Timer::GetTicks(&v44); /*0x55d7b1*/
    dword_88734C = v44; /*0x55d7b6*/
    dwMilliseconds = v15; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( g_GameMode_Current == 5 || g_GameTypeFlags != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (g_NetworkEventPending & 2) != 0 ) /*0x55d46a*/
  {
    dword_887348 = Timer::GetTicks(&v44); /*0x55d47b*/
    dword_88734C = v44; /*0x55d480*/
    dwMilliseconds = 0; /*0x55d486*/
  }
  else
  {
    if ( dword_A8B558 ) /*0x55d499*/
    {
      v1 = 60 / (int)dword_A8B558; /*0x55d507*/
      dword_887348 = Timer::GetTicks(&v44); /*0x55d50e*/
      dword_88734C = v44; /*0x55d517*/
      dwMilliseconds = v1; /*0x55d528*/
      v2 = 1000 / (int)dword_A8B558; /*0x55d532*/
      Time = timeGetTime(); /*0x55d53d*/
      Timer::EnableHighPrecision(&v44); /*0x55d541*/
      g_TacticalState = Time; /*0x55d54e*/
      v45 = v2; /*0x55d554*/
      dword_88732C = v44; /*0x55d558*/
      dword_887330 = v2; /*0x55d55e*/
    }
    else
    {
      dword_887348 = Timer::GetTicks(&v44); /*0x55d4a9*/
      dwMilliseconds = 2; /*0x55d4b2*/
      dword_88734C = v44; /*0x55d4bc*/
      Time = timeGetTime(); /*0x55d4ca*/
      Timer::EnableHighPrecision(&v44); /*0x55d4ce*/
      g_TacticalState = Time; /*0x55d4e0*/
      v45 = 33; /*0x55d4e6*/
      dword_88732C = v44; /*0x55d4ea*/
      dword_887330 = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(&v44); /*0x55d568*/
    v3 = (wchar_t *)dword_887330; /*0x55d572*/
    if ( g_TacticalState != -1 ) /*0x55d57b*/
    {
      v4 = timeGetTime() - g_TacticalState; /*0x55d587*/
      if ( v4 >= (int)v3 ) /*0x55d58f*/
        v3 = 0; /*0x55d595*/
      else
        v3 = (wchar_t *)((char *)v3 - v4); /*0x55d591*/
    }
    v5 = (int)g_ScenarioState; /*0x55d59c*/
    v6 = 0; /*0x55d5a2*/
    dword_ABCE04 = v3; /*0x55d5a7*/
    if ( g_GameMode_Current == 4 ) /*0x55d5ad*/
    {
      if ( (int)g_ScenarioState <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      v7 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount(&g_NetworkManager) > 0 ) /*0x55d5ca*/
      {
        v8 = &dword_A8DB7C; /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( v6 <= *v8 ) /*0x55d5d9*/
            v6 = *v8; /*0x55d5db*/
          ++v7; /*0x55d5e2*/
          ++v8; /*0x55d5e3*/
        }
        while ( v7 < Network::GetSendCount(&g_NetworkManager) ); /*0x55d5ed*/
        if ( v6 ) /*0x55d5f1*/
        {
          if ( v6 >= v5 / 4 ) /*0x55d604*/
          {
            v9 = dword_887330; /*0x55d60b*/
            if ( g_TacticalState != -1 ) /*0x55d616*/
            {
              v10 = timeGetTime() - g_TacticalState; /*0x55d622*/
              if ( v10 >= v9 ) /*0x55d62a*/
                v9 = 0; /*0x55d630*/
              else
                v9 -= v10; /*0x55d62c*/
            }
            Time = timeGetTime(); /*0x55d63f*/
            Timer::EnableHighPrecision(&v44); /*0x55d643*/
            g_TacticalState = Time; /*0x55d653*/
            v45 = v9 + 10; /*0x55d65d*/
            dword_88732C = v44; /*0x55d661*/
            dword_887330 = v9 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(&v44); /*0x55d66c*/
          }
          if ( v6 >= v5 / 2 ) /*0x55d67f*/
          {
            v11 = dword_887330; /*0x55d686*/
            if ( g_TacticalState != -1 ) /*0x55d68e*/
            {
              v12 = timeGetTime() - g_TacticalState; /*0x55d69a*/
              if ( v12 >= v11 ) /*0x55d6a2*/
                v11 = 0; /*0x55d6a8*/
              else
                v11 -= v12; /*0x55d6a4*/
            }
            Time = timeGetTime(); /*0x55d6b7*/
            Timer::EnableHighPrecision(&v44); /*0x55d6bb*/
            g_TacticalState = Time; /*0x55d6cb*/
            v45 = v11 + 10; /*0x55d6d5*/
            dword_88732C = v44; /*0x55d6d9*/
            dword_887330 = v11 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(&v44); /*0x55d6e4*/
          }
          if ( v6 >= 3 * v5 / 4 ) /*0x55d6f7*/
          {
            v13 = dword_887330; /*0x55d702*/
            if ( g_TacticalState != -1 ) /*0x55d70a*/
            {
              v14 = timeGetTime() - g_TacticalState; /*0x55d716*/
              if ( v14 >= v13 ) /*0x55d71e*/
                v13 = 0; /*0x55d724*/
              else
                v13 -= v14; /*0x55d720*/
            }
            Time = timeGetTime(); /*0x55d733*/
            Timer::EnableHighPrecision(&v44); /*0x55d737*/
            g_TacticalState = Time; /*0x55d747*/
            v45 = v13 + 10; /*0x55d751*/
            dword_88732C = v44; /*0x55d755*/
            dword_887330 = v13 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(&v44); /*0x55d760*/
          }
        }
      }
    }
  }
  LABEL_62:
  if ( g_GameMode_Current && g_GameMode_Current != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 1584) ) /*0x55d7da*/
  {
    v16 = *((_DWORD *)g_ScenarioClass_Instance + 394); /*0x55d7ea*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 392) != -1 ) /*0x55d7f9*/
    {
      v17 = (char *)g_ScenarioClass_Instance + 1568; /*0x55d7f0*/
      v18 = Timer::GetTicks(v17 + 1) - *v17; /*0x55d803*/
      if ( v18 >= v16 ) /*0x55d807*/
      {
  LABEL_69:
        *((_BYTE *)g_ScenarioClass_Instance + 1584) = 0; /*0x55d80f*/
        ScenarioClass::ProcessIntroTimer(); /*0x55d81c*/
        goto LABEL_70; /*0x55d81c*/
      }
      v16 -= v18; /*0x55d809*/
    }
    if ( v16 > 0 ) /*0x55d80d*/
      goto LABEL_70; /*0x55d80d*/
    goto LABEL_69; /*0x55d80d*/
  }
  LABEL_70:
  if ( *((_DWORD *)g_ScenarioClass_Instance + 395) ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    ((void (__thiscall *)(LPPERSISTSTREAM))g_TacticalClass_Instance->lpVtbl[2].GetSizeMax)(g_TacticalClass_Instance); /*0x55d847*/
    TacticalMap::Redraw(&MapClass_Instance); /*0x55d84f*/
    SyncDelay::Start(); /*0x55d854*/
    byte_ABCD58 = 0; /*0x55d866*/
    return g_WTFMode == 0; /*0x55d877*/
  }
  LABEL_72:
  v20 = g_NetworkEventPending; /*0x55d878*/
  if ( (g_NetworkEventPending & 2) == 0 && !g_MainGameState && g_DDraw_Active ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable(v52, v54, v53); /*0x55d8ab*/
    SyncDelayClass::ProcessNetworkSync(v52); /*0x55d8b4*/
    if ( byte_A8B8B4 ) /*0x55d8c0*/
    {
      LOBYTE(v21) = 0; /*0x55d8c2*/
      DrawHUD(v21); /*0x55d8c4*/
    }
    if ( ((unsigned __int8)g_CurrentFrame & 7) == 7 && g_GameMode_Current == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&g_NetworkManager); /*0x55d8e3*/
    MarkAllFootOccupancies(); /*0x55d8e8*/
    TacticalMap::Redraw(&MapClass_Instance); /*0x55d8f2*/
    v20 = g_NetworkEventPending; /*0x55d8f7*/
  }
  byte_A8ED9D = 0; /*0x55d903*/
  if ( (v20 & 1) != 0 || (v20 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v20 & 1) != 0 ) /*0x55d91a*/
    {
      v22 = (DWORD *)RequestMapSnapshot(v55); /*0x55d92b*/
      Time = *v22; /*0x55d936*/
      v44 = v22[1]; /*0x55d945*/
      FileClass::Write(&Time, 8u); /*0x55d949*/
      v46 = g_SelectionManager; /*0x55d960*/
      FileClass::Write(&v46, 4u); /*0x55d964*/
      v23 = 0; /*0x55d969*/
      for ( i = 0; v23 < (int)v46; i += v26 ) /*0x55d973*/
      {
        v24 = ScriptAction::GetWaypointCoords(*((_DWORD *)g_ObjectClass_CurrentCount + v23)); /*0x55d983*/
        v25 = *(_BYTE *)(v24 + 4); /*0x55d988*/
        if ( v25 ) /*0x55d98d*/
          v26 = *(_DWORD *)v24 & 0xFFFFFF | (v25 << 24); /*0x55d9a4*/
        else
          v26 = -1; /*0x55d98f*/
        ++v23; /*0x55d9b0*/
      }
      FileClass::Write(&i, 4u); /*0x55d9c5*/
      for ( j = 0; j < (int)v46; ++j ) /*0x55d9d0*/
      {
        v28 = ScriptAction::GetWaypointCoords(*((_DWORD *)g_ObjectClass_CurrentCount + j)); /*0x55d9e0*/
        v29 = *(_BYTE *)(v28 + 4); /*0x55d9e5*/
        if ( v29 ) /*0x55d9ea*/
          v30 = *(_DWORD *)v28 & 0xFFFFFF | (v29 << 24); /*0x55da02*/
        else
          v30 = -1; /*0x55d9ec*/
        v50 = v30; /*0x55da08*/
        FileClass::Write(&v50, 4u); /*0x55da14*/
      }
      FileClass::Write(&dword_ABCDFC, 4u); /*0x55da2c*/
      FileClass::Write(&dword_ABCE00, 4u); /*0x55da3d*/
      v20 = g_NetworkEventPending; /*0x55da42*/
      dword_ABCDFC = 0; /*0x55da48*/
      dword_ABCE00 = 0; /*0x55da4e*/
    }
    if ( (v20 & 2) != 0 ) /*0x55da57*/
    {
      if ( CCFileClass::Read(&Time, 8u) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition(&Time); /*0x55da7e*/
      if ( CCFileClass::Read(&v46, 4u) == 4 ) /*0x55da97*/
      {
        v31 = 0; /*0x55daa2*/
        for ( i = 0; v31 < (int)g_SelectionManager; i += v34 ) /*0x55daaa*/
        {
          v32 = ScriptAction::GetWaypointCoords(*((_DWORD *)g_ObjectClass_CurrentCount + v31)); /*0x55daba*/
          v33 = *(_BYTE *)(v32 + 4); /*0x55dabf*/
          if ( v33 ) /*0x55dac4*/
            v34 = *(_DWORD *)v32 & 0xFFFFFF | (v33 << 24); /*0x55dadb*/
          else
            v34 = -1; /*0x55dac6*/
          ++v31; /*0x55dae8*/
        }
        CCFileClass::Read(&v51, 4u); /*0x55dafd*/
        if ( v51 != i ) /*0x55db0c*/
          MapClass::UnselectAll_ClearLimboLaunchers(); /*0x55db0e*/
        v35 = 0; /*0x55db17*/
        for ( g_MoveFeedback = 1; v35 < (int)v46; ++v35 ) /*0x55db22*/
        {
          if ( CCFileClass::Read(&v50, 4u) == 4 ) /*0x55db38*/
          {
            v49[4] = 0; /*0x55db48*/
            CheckNetworkSync(v55, v50); /*0x55db4d*/
            v36 = BuildingLoadQueue::FindObject(v49); /*0x55db56*/
            if ( v36 ) /*0x55db5d*/
            {
              if ( v51 != i ) /*0x55db69*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 332))(v36); /*0x55db6f*/
                g_MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        g_MoveFeedback = 1; /*0x55db85*/
      }
      CCFileClass::Read(&dword_ABCDFC, 4u); /*0x55db98*/
      CCFileClass::Read(&dword_ABCE00, 4u); /*0x55dba9*/
      MapClass::MarkForRedraw(0); /*0x55dbb4*/
      TacticalMap::Redraw(&MapClass_Instance); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&unk_8A0390); /*0x55dbc8*/
  if ( !g_GameMode_Current && !byte_ABCE08 ) /*0x55dbe0*/
  {
    byte_ABCE08 = 1; /*0x55dbee*/
    strcpy(Str, (const char *)g_ScenarioClass_Instance + 4700); /*0x55dc12*/
    Str[260] = 0; /*0x55dc1f*/
    v37 = strrchr(Str, 46); /*0x55dc28*/
    if ( v37 ) /*0x55dc32*/
      *v37 = 0; /*0x55dc34*/
    strcat(Str, aSav); /*0x55dc5c*/
    swprintf(Buffer, (const size_t)aS, (const wchar_t *const)g_ScenarioClass_Instance + 2541); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName(Str, Buffer, 0); /*0x55dc92*/
  }
  Scenario::Update(&g_GameConfigManager); /*0x55dc9e*/
  v48 = dword_82A030; /*0x55dcb5*/
  if ( (unsigned __int8)Mouse::IsButtonDown(BombListClass_Array) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC0C) ) /*0x55dcce*/
  {
    v39 = Math::RoundToInt((double)v48 * flt_82A034); /*0x55dd21*/
  LABEL_127:
    v48 = v39; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(dword_A8EC00) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC04) ) /*0x55dcf8*/
  {
    v38 = g_Cell_PositionLUT; /*0x55dd01*/
    if ( g_Cell_PositionLUT <= g_CellPositionOffset ) /*0x55dd0e*/
      v38 = g_CellPositionOffset; /*0x55dd10*/
    v39 = v38 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
  LABEL_128:
  if ( (dword_ABCE14 & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible(6, &v48, 1); /*0x55dd42*/
  if ( (dword_ABCE14 & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible(2, &v48, 1); /*0x55dd5f*/
  if ( (dword_ABCE14 & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible(0, &v48, 1); /*0x55dd7a*/
  if ( (dword_ABCE14 & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible(4, &v48, 1); /*0x55dd96*/
  FlushPlanningQueue(); /*0x55dd9b*/
  SyncFrameCounter(&g_GameNetworkObject); /*0x55dda5*/
  if ( g_GameMode_Current == 3 || g_GameMode_Current == 4 ) /*0x55ddb7*/
  {
    if ( g_GameStateFlags ) /*0x55ddc1*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)g_GameStateFlags + 4))(g_GameStateFlags) ) /*0x55ddc5*/
      {
        v40 = *(_DWORD *)((g_Cell_PositionLUT << 11) + g_Shroud_CellArray + 10268); /*0x55dde1*/
        if ( v40 ) /*0x55dde5*/
        {
          if ( *(_DWORD *)(v40 + 304) != 1 || (*(_BYTE *)(v40 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v41 = timeGetTime() - dword_A8B55C; /*0x55de13*/
  if ( v41 > 1000 ) /*0x55de1e*/
    v41 = 1000; /*0x55de20*/
  *(_DWORD *)ArgList += v41; /*0x55de34*/
  ++dword_A8B564; /*0x55de3a*/
  ProcessNetworkEvents(); /*0x55de40*/
  FlushPlanningQueue(); /*0x55de45*/
  Event::Dispatch(); /*0x55de4a*/
  if ( byte_A83D49 || g_NetResponseActive || byte_8B41C0 || byte_A83D48 ) /*0x55de71*/
  {
    byte_ABCD58 = 0; /*0x55dec8*/
    return 1; /*0x55ded2*/
  }
  v42 = (char *)g_CurrentFrame + 1; /*0x55de7e*/
  g_CurrentFrame = (wchar_t *)((char *)g_CurrentFrame + 1); /*0x55de81*/
  if ( dword_B07784 ) /*0x55de87*/
  {
    if ( dword_B07784 < (int)v42 ) /*0x55de8d*/
    {
      UpdateMouse(); /*0x55de8f*/
      dword_B07784 = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start(); /*0x55de9a*/
  ProcessExpiredPointers(); /*0x55de9f*/
  ExecutePlanningQueue(); /*0x55dea4*/
  byte_ABCD58 = 0; /*0x55deb6*/
  return g_WTFMode == 0; /*0x55d861*/
}
}
// 0x55F1E0
namespace gamemd {
BitFont * * DrawHUD()
{
  int *result; // eax
  int Type; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp-14h] [ebp-264h]
  int v24; // [esp-10h] [ebp-260h]
  int v25; // [esp-10h] [ebp-260h]
  int v26; // [esp-Ch] [ebp-25Ch]
  int v27; // [esp-Ch] [ebp-25Ch]
  int v28; // [esp-Ch] [ebp-25Ch]
  int v29; // [esp-8h] [ebp-258h]
  int v30; // [esp-8h] [ebp-258h]
  int v31; // [esp-8h] [ebp-258h]
  int v32; // [esp-4h] [ebp-254h]
  int v33; // [esp-4h] [ebp-254h]
  int v34; // [esp-4h] [ebp-254h]
  int v35; // [esp+0h] [ebp-250h]
  int v36; // [esp+0h] [ebp-250h]
  int v37; // [esp+0h] [ebp-250h]
  int v38; // [esp+0h] [ebp-250h]
  int v39; // [esp+4h] [ebp-24Ch]
  int v40; // [esp+4h] [ebp-24Ch]
  int v41; // [esp+4h] [ebp-24Ch]
  int v42; // [esp+4h] [ebp-24Ch]
  int v43; // [esp+4h] [ebp-24Ch]
  int v44; // [esp+8h] [ebp-248h] BYREF
  int v45; // [esp+Ch] [ebp-244h] BYREF
  wchar_t Format[2]; // [esp+10h] [ebp-240h] BYREF
  int v47; // [esp+14h] [ebp-23Ch] BYREF
  int v48; // [esp+18h] [ebp-238h] BYREF
  int v49; // [esp+1Ch] [ebp-234h] BYREF
  int v50; // [esp+20h] [ebp-230h] BYREF
  int v51; // [esp+24h] [ebp-22Ch] BYREF
  int v52; // [esp+28h] [ebp-228h] BYREF
  int v53; // [esp+2Ch] [ebp-224h] BYREF
  int v54; // [esp+30h] [ebp-220h] BYREF
  wchar_t v55; // [esp+34h] [ebp-21Ch] BYREF
  wchar_t v56[2]; // [esp+38h] [ebp-218h] BYREF
  wchar_t v57[2]; // [esp+3Ch] [ebp-214h] BYREF
  wchar_t v58[2]; // [esp+40h] [ebp-210h] BYREF
  wchar_t v59[2]; // [esp+44h] [ebp-20Ch] BYREF
  wchar_t v60[4]; // [esp+48h] [ebp-208h] BYREF
  wchar_t Buffer[256]; // [esp+50h] [ebp-200h] BYREF

  result = (int *)dword_8373A0; /*0x55f1e0*/
  if ( dword_8373A0 != -1 ) /*0x55f1f2*/
  {
    *(double *)v60 = (double)(unsigned int)dword_8373A0 * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    v52 = 100; /*0x55f225*/
    v53 = 0; /*0x55f23a*/
    *(_DWORD *)v56 = 0; /*0x55f23e*/
    *(_DWORD *)v57 = 0; /*0x55f242*/
    wcscpy(v58, L"?"); /*0x55f246*/
    wcscpy(v59, L"\x0F"); /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &v54,
               (size_t)a2f,
               DSurface_Composite,
               v56,
               (int)&v52,
               *((_DWORD *)BuildingTypeClass_AnimTable + Type),
               31,
               (int)wcscpy(Format, L"\x06"),
               *(_DWORD *)v60,
               *(_DWORD *)&v60[2],
               (char *)g_ScenarioClass_Instance + 4700);
  }
  if ( byte_A8B8B5 ) /*0x55f286*/
  {
    result = (int *)g_GameMode_Current[0]; /*0x55f28c*/
    if ( g_GameMode_Current[0] > 2u ) /*0x55f293*/
    {
      v2 = DSurface_Composite; /*0x55f2b1*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x55f2b9*/
      v3 = *(_DWORD *)v2; /*0x55f2bc*/
      *(_DWORD *)v56 = 0; /*0x55f2c6*/
      wcscpy(v57, L"?"); /*0x55f2ca*/
      wcscpy(v58, L"?"); /*0x55f2d2*/
      wcscpy(v59, L"æ"); /*0x55f2da*/
      (*(void (__thiscall **)(int, wchar_t *, _DWORD))(v3 + 20))(v2, v56, 0); /*0x55f2e2*/
      swprintf(Buffer, (const size_t)&off_82A224, g_CurrentFrame); /*0x55f2f6*/
      v52 = 0; /*0x55f308*/
      v53 = 302; /*0x55f30f*/
      v4 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f317*/
      v5 = (_DWORD *)(*(int (__thiscall **)(int, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f32b*/
                       v2,
                       v56,
                       &v52,
                       v4,
                       0,
                       25);
      TextRenderer::DrawText(&v53, (size_t)&v60[2], v2, v5, v45, *(int *)Format, v47, v48); /*0x55f33a*/
      swprintf(&v60[2], (const size_t)&off_82A210, dword_ABCD44); /*0x55f34f*/
      v51 = 0; /*0x55f361*/
      v52 = 312; /*0x55f368*/
      v6 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f370*/
      v7 = (_DWORD *)(*(int (__thiscall **)(int, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f384*/
                       v2,
                       &v55,
                       &v51,
                       v6,
                       0,
                       25);
      TextRenderer::DrawText(&v52, (size_t)v60, v2, v7, v44, v45, *(int *)Format, v47); /*0x55f393*/
      swprintf(v60, (const size_t)&off_82A1F4, g_ScenarioState); /*0x55f3a9*/
      v50 = 0; /*0x55f3b1*/
      v51 = 322; /*0x55f3b5*/
      v8 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f3ca*/
      v9 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f3de*/
                       v2,
                       &v54,
                       &v50,
                       v8,
                       0,
                       25);
      TextRenderer::DrawText(&v51, (size_t)v59, v2, v9, v39, v44, v45, *(int *)Format); /*0x55f3ed*/
      v10 = IPXManagerClass::GetQueueSize(g_NetworkManager); /*0x55f3fa*/
      swprintf(v59, (const size_t)&off_82A1D0, (const wchar_t *const)(1000 * v10 / 60)); /*0x55f429*/
      v49 = 0; /*0x55f43b*/
      v50 = 332; /*0x55f442*/
      v11 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f44a*/
      v12 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int, _DWORD, wchar_t *))(*(_DWORD *)v2 + 120))( /*0x55f45e*/
                        v2,
                        &v53,
                        &v49,
                        v11,
                        0,
                        wcscpy(Format, L"\x19"));
      TextRenderer::DrawText(&v50, (size_t)v58, v2, v12, v35, v40, v44, v45); /*0x55f46d*/
      swprintf(v58, (const size_t)&off_82A1B4, dword_A8B558); /*0x55f483*/
      v48 = 0; /*0x55f495*/
      v49 = 342; /*0x55f49c*/
      v13 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f4a4*/
      v14 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f4b8*/
                        v2,
                        &v52,
                        &v48,
                        v13,
                        0,
                        25);
      TextRenderer::DrawText(&v49, (size_t)v57, v2, v14, v32, v36, v41, v44); /*0x55f4c7*/
      swprintf(v57, (const size_t)&off_828788, *(const wchar_t *const *)(*(_DWORD *)Game_PlayerInfoArray + 115)); /*0x55f4e1*/
      v47 = 0; /*0x55f4f3*/
      v48 = 352; /*0x55f4fa*/
      v15 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f502*/
      v16 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f516*/
                        v2,
                        &v51,
                        &v47,
                        v15,
                        0,
                        25);
      TextRenderer::DrawText(&v48, (size_t)v56, v2, v16, v29, v33, v37, v42); /*0x55f525*/
      swprintf(v56, (const size_t)&off_828708, (const wchar_t *const)(1000 * dword_A8E2D4 / 0x3Cu)); /*0x55f550*/
      *(_DWORD *)Format = 0; /*0x55f562*/
      v47 = 362; /*0x55f569*/
      v17 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f571*/
      v18 = (_DWORD *)(*(int (__thiscall **)(int, int *, wchar_t *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x55f585*/
                        v2,
                        &v50,
                        Format,
                        v17,
                        0,
                        25);
      TextRenderer::DrawText(&v47, (size_t)&v55, v2, v18, v26, v30, v34, v38); /*0x55f594*/
      swprintf(&v55, (const size_t)&off_82A1A0, (const wchar_t *const)g_TacticalState, dword_88732C, dword_887330); /*0x55f5c2*/
      v45 = 0; /*0x55f5d4*/
      wcscpy(Format, L"?"); /*0x55f5db*/
      v19 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f5e3*/
      v20 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v2 + 120))(v2, &v49, &v45, v19); /*0x55f5f7*/
      TextRenderer::DrawText((int *)Format, (size_t)&v54, v2, v20, v24, v27, v31, 0); /*0x55f606*/
      swprintf((wchar_t *const)&v54, (const size_t)&off_82A18C, dword_ABCE04); /*0x55f61b*/
      v44 = 0; /*0x55f62d*/
      v45 = 382; /*0x55f634*/
      v21 = FindBuildingAnimByName(g_INI_Key_Grey, 1); /*0x55f63c*/
      v22 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v2 + 120))(v2, &v48, &v44, v21); /*0x55f650*/
      TextRenderer::DrawText(&v45, (size_t)&v53, v2, v22, v23, v25, v28, 0); /*0x55f65f*/
      ScoreBoard::Render(g_NetworkManager); /*0x55f66c*/
      return (int *)(*(int (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int, int))(*(_DWORD *)g_WWMouseClass_Instance /*0x55f679*/
                                                                                               + 16))(
                      g_WWMouseClass_Instance,
                      25,
                      25,
                      v43,
                      v44,
                      v45,
                      *(_DWORD *)Format,
                      v47,
                      v48,
                      v49);
    }
  }
  return result; /*0x55f67c*/
}
}
// 0x55F970
namespace gamemd {
void* unknown_libname_21()
{
  dword_ABCE70[0] = 3; /*0x5fa35a*/
  dword_ABCE70[1] = 1; /*0x5fa360*/
  dword_ABCE70[3] = 0; /*0x5fa363*/
  dword_ABCE70[4] = 3; /*0x5fa366*/
  LOBYTE(dword_ABCE70[5]) = 1; /*0x5fa36d*/
  dword_ABCE70[6] = 2; /*0x5fa370*/
  LOBYTE(dword_ABCE70[7]) = 1; /*0x5fa377*/
  BYTE1(dword_ABCE70[7]) = 1; /*0x5fa37a*/
  BYTE2(dword_ABCE70[7]) = 1; /*0x5fa37d*/
  LOBYTE(dword_ABCE70[8]) = 1; /*0x5fa380*/
  unk_ABCEB5 = 1; /*0x5fa383*/
  unk_ABCF08 = 18; /*0x5fa38b*/
  unk_ABCF0C = 18; /*0x5fa391*/
  unk_ABCF10 = 17; /*0x5fa39f*/
  unk_ABCF14 = 17; /*0x5fa3a5*/
  dword_ABCE94 = -1; /*0x5fa3b0*/
  unk_ABCF18 = 16; /*0x5fa3b3*/
  unk_ABCF1C = 16; /*0x5fa3b9*/
  dword_ABCE98 = -1; /*0x5fa3c4*/
  unk_ABCEBC = -1; /*0x5fa3c7*/
  unk_ABCEC0 = -1; /*0x5fa3ca*/
  HIBYTE(dword_ABCE70[7]) = 0; /*0x5fa3cd*/
  unk_ABCE9C = 800; /*0x5fa3d0*/
  unk_ABCEA0 = 600; /*0x5fa3d7*/
  unk_ABCEA4 = 0; /*0x5fa3de*/
  unk_ABCEA5 = 0; /*0x5fa3e1*/
  unk_ABCEA6 = 0; /*0x5fa3e4*/
  unk_ABCEA8 = 1060320051; /*0x5fa3e7*/
  unk_ABCEAC = 1060320051; /*0x5fa3ee*/
  unk_ABCEB0 = 1053609165; /*0x5fa3f5*/
  unk_ABCEB4 = 0; /*0x5fa3fc*/
  unk_ABCEB6 = 0; /*0x5fa3ff*/
  unk_ABCEB8 = 9; /*0x5fa402*/
  unk_ABCEBA = -1; /*0x5fa408*/
  unk_ABCEC4 = 0; /*0x5fa40e*/
  unk_ABCF20 = 81; /*0x5fa411*/
  unk_ABCF24 = 81; /*0x5fa417*/
  unk_ABCEC8 = 0; /*0x5fa41d*/
  return dword_ABCE70; /*0x5fa421*/
}
}
// 0x55FDB0
namespace gamemd {
AbstractClass * * Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  wchar_t *v14; // edi
  HWND v15; // eax
  HWND v16; // esi
  wchar_t *String; // eax
  HWND DlgItem; // eax
  HWND v19; // edi
  _DWORD *v20; // eax
  LPARAM v21; // edi
  int *v22; // ebx
  int v23; // eax
  int v24; // ecx
  LRESULT v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // edi
  BOOL IsSoundEnabled; // ebx
  HWND v34; // eax
  HWND v35; // edi
  LPARAM v36; // eax
  HWND v37; // eax
  HWND v38; // edi
  LPARAM v39; // eax
  HWND v40; // eax
  HWND v41; // edi
  LPARAM v42; // eax
  float v43; // [esp+0h] [ebp-58h]
  float v44; // [esp+0h] [ebp-58h]
  float v45; // [esp+0h] [ebp-58h]
  char lParam[64]; // [esp+18h] [ebp-40h] BYREF
  int wParama; // [esp+60h] [ebp+8h]
  HWND v48; // [esp+64h] [ebp+Ch]
  HWND WindowLongA; // [esp+68h] [ebp+10h]
  HWND v50; // [esp+68h] [ebp+10h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x55fdcd*/
  if ( !result ) /*0x55fdd4*/
  {
    WindowLongA = (HWND)GetWindowLongA(hWnd, 8); /*0x55fde9*/
    if ( wParam > 0x114 ) /*0x55fded*/
    {
      if ( wParam == 1175 ) /*0x560112*/
      {
        byte_ABCF54 = 0; /*0x560124*/
        DlgItem = GetDlgItem(hWnd, 1323); /*0x56012b*/
        v19 = DlgItem; /*0x560133*/
        if ( DlgItem ) /*0x560137*/
        {
          SendMessageA(DlgItem, 0x4ACu, 0, 0); /*0x560143*/
          SendMessageA(v19, 0x406u, 1u, 0x10000); /*0x560152*/
          SendMessageA(v19, 0x405u, 1u, g_lParam != 0); /*0x56016a*/
        }
        v48 = GetDlgItem(hWnd, 1773); /*0x560176*/
        if ( byte_A8EB95 ) /*0x560181*/
          v20 = (_DWORD *)sub_4A4900(4096, 4096, 16); /*0x56018d*/
        else
          v20 = (_DWORD *)sub_4A4900(1024, 768, 16); /*0x5601a3*/
        v21 = 0; /*0x5601a8*/
        dword_ABCF58 = v20; /*0x5601aa*/
        v22 = v20; /*0x5601b1*/
        wParama = -1; /*0x5601b3*/
        v50 = 0; /*0x5601bb*/
        if ( v20 && *v20 ) /*0x5601c9*/
        {
          do /*0x56024d*/
          {
            v23 = *v22; /*0x5601d2*/
            v24 = v22[1]; /*0x5601d4*/
            v22 += 2; /*0x5601e0*/
            if ( byte_A8EB95 || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, "%d x %d x 16", v23, v24); /*0x560220*/
              v25 = SendMessageA(v48, 0x4BCu, 0, (LPARAM)lParam); /*0x560239*/
              SendMessageA(v48, 0x151u, v25, v21); /*0x560247*/
              v50 = (HWND)((char *)v50 + 1); /*0x560249*/
            }
            ++v21; /*0x56024f*/
          }
          while ( *v22 ); /*0x56024d*/
        }
        SendMessageA(v48, 0x14Eu, wParama, 0); /*0x560269*/
        dword_82A27C = wParama; /*0x56027b*/
        v26 = GetDlgItem(hWnd, 1295); /*0x560280*/
        v27 = v26; /*0x560282*/
        if ( v26 ) /*0x560286*/
        {
          SendMessageA(v26, 0x4ACu, 0, 0); /*0x560292*/
          SendMessageA(v27, 0x406u, 1u, 0x20000); /*0x5602a1*/
          SendMessageA(v27, 0x405u, 1u, dword_A8EB64); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA(v28, 0xF1u, byte_A8EB7E != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA(v29, 0xF1u, MCV_DeployModeEnabled != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA(v30, 0xF1u, byte_A8EB80 != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA(v31, 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA(v32, 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA(v32, 0x405u, 1u, 6 - dword_A8EB70); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA(v34, 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA(v35, 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA(v35, 0x405u, 1u, v36); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA(v37, 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA(v38, 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA(v38, 0x405u, 1u, v39); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA(v40, 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA(v41, 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&dword_A8EB9C * 10.0 + 0.5); /*0x560455*/
          SendMessageA(v41, 0x405u, 1u, v42); /*0x560463*/
          EnableWindow(v41, IsSoundEnabled); /*0x560467*/
        }
        byte_ABCF54 = 1; /*0x56046d*/
      }
    }
    else
    {
      switch ( wParam ) /*0x55fdf3*/
      {
        case 0x114u: /*0x55fdf3*/
          if ( (_WORD)a3 == 5 ) /*0x55ff6c*/
          {
            v12 = HIWORD(a3); /*0x55ff75*/
            if ( a4 == GetDlgItem(hWnd, 1323) ) /*0x55ff87*/
            {
              v13 = HIWORD(a3); /*0x55ff8b*/
              if ( v12 ) /*0x55ff8d*/
                v13 = 2; /*0x55ff8f*/
              v14 = (&off_82A248)[v13]; /*0x55ff94*/
              v15 = GetDlgItem(hWnd, 1651); /*0x55ffa1*/
            }
            else if ( a4 == GetDlgItem(hWnd, 1295) ) /*0x55ffe5*/
            {
              v14 = (wchar_t *)off_82A254[v12]; /*0x55ffe7*/
              v15 = GetDlgItem(hWnd, 1648); /*0x55fff3*/
            }
            else
            {
              if ( a4 != GetDlgItem(hWnd, 1322) ) /*0x55ffff*/
              {
                if ( a4 == GetDlgItem(hWnd, 1327) ) /*0x560019*/
                {
                  if ( byte_ABCF54 ) /*0x560022*/
                  {
                    v43 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x56004e*/
                    Audio::SetScoreVolume((float *)g_GameModeOptions, v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    v44 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Audio::SetSoundVolume((float *)g_GameModeOptions, v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  v45 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Audio::SetVoiceVolume((float *)g_GameModeOptions, v45, 1); /*0x5600fb*/
                  return 0; /*0x560109*/
                }
                return 0; /*0x560022*/
              }
              v14 = (wchar_t *)off_82A260[v12]; /*0x560001*/
              v15 = GetDlgItem(hWnd, 1650); /*0x56000d*/
            }
            v16 = v15; /*0x55ffa3*/
            if ( v15 ) /*0x55ffa7*/
            {
              String = GetStringCSF(v14, 0, g_Str_File_MainOpt_cpp, 553); /*0x55ffbb*/
              SendMessageA(v16, 0x4B2u, 0, (LPARAM)String); /*0x55ffc9*/
              return 0; /*0x55ffd8*/
            }
          }
          break;
        case 2u: /*0x55fdf3*/
          if ( dword_ABCF58 ) /*0x55ff43*/
          {
            __3_YAXPAX_Z(dword_ABCF58); /*0x55ff4a*/
            dword_ABCF58 = 0; /*0x55ff52*/
            return 0; /*0x55ff65*/
          }
          break;
        case 0x111u: /*0x55fdf3*/
          if ( (unsigned __int16)a3 > 0x686u ) /*0x55fe1c*/
          {
            if ( (unsigned __int16)a3 == 1773 && HIWORD(a3) == 1 ) /*0x55feb5*/
            {
              SetDialogParent(hWnd, g_hWnd); /*0x55fec3*/
              v6 = GetDlgItem(hWnd, 1773); /*0x55feca*/
              v7 = v6; /*0x55fed0*/
              if ( v6 ) /*0x55fed4*/
              {
                v8 = SendMessageA(v6, 0x147u, 0, 0); /*0x55feea*/
                v9 = SendMessageA(v7, 0x150u, v8, 0); /*0x55fef5*/
                v10 = *((_DWORD *)dword_ABCF58 + 2 * v9); /*0x55fefd*/
                dword_ABCE94 = v10; /*0x55ff00*/
                v11 = *((_DWORD *)dword_ABCF58 + 2 * v9 + 1); /*0x55ff06*/
                dword_ABCE98 = v11; /*0x55ff10*/
                if ( v10 != g_CommandLineFlags || v11 != g_CommandLineParam ) /*0x55ff1f*/
                {
                  g_CommandLineParam = v11; /*0x55ff27*/
                  g_CommandLineFlags = v10; /*0x55ff2d*/
                  return 0; /*0x55ff39*/
                }
              }
            }
          }
          else if ( (unsigned __int16)a3 == 1670 ) /*0x55fe22*/
          {
            if ( !HIWORD(a3) ) /*0x55fe66*/
            {
              __3_YAXPAX_Z(dword_ABCF58); /*0x55fe76*/
              dword_ABCF58 = 0; /*0x55fe7e*/
              *(_DWORD *)GetWindowLongA(hWnd, 8) = 1483; /*0x55fe93*/
              return 0; /*0x55fea0*/
            }
          }
          else if ( (unsigned __int16)a3 >= 0x5CDu && (unsigned __int16)a3 <= 0x5CEu ) /*0x55fe36*/
          {
            __3_YAXPAX_Z(dword_ABCF58); /*0x55fe42*/
            dword_ABCF58 = 0; /*0x55fe4e*/
            *(_DWORD *)WindowLongA = (unsigned __int16)a3; /*0x55fe5a*/
            return 0; /*0x55fe63*/
          }
          break;
      }
    }
    return 0; /*0x560474*/
  }
  return result; /*0x55fe5c*/
}
}
// 0x5509E0
namespace gamemd {
void nullsub_21()
{
  ; /*0x5509e0*/
}
} // namespace gamemd

// 0x5512C0
namespace gamemd {
void nullsub_22()
{
  ; /*0x5512c0*/
}
} // namespace gamemd

// 0x5517A0
namespace gamemd {
void sub_5517A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5517ac*/
  dbl_ABC8E0 = Math::Sqrt(v0 + v0); /*0x5517be*/
}
} // namespace gamemd

// 0x5517D0
namespace gamemd {
void sub_5517D0()
{
  dbl_ABC930 = dbl_ABC8E0 / 60.0; /*0x5517dc*/
}
} // namespace gamemd

// 0x5517F0
namespace gamemd {
void sub_5517F0()
{
  dbl_ABC918 = 1.0 / dbl_ABC930; /*0x5517fc*/
}
} // namespace gamemd

// 0x551810
namespace gamemd {
void sub_551810()
{
  dbl_ABC910 = 0.0174532925199433 * 45.0; /*0x55181c*/
}
} // namespace gamemd

// 0x551830
namespace gamemd {
void sub_551830()
{
  dbl_ABC8E8 = 0.0174532925199433 * 60.0; /*0x55183c*/
}
} // namespace gamemd

// 0x551850
namespace gamemd {
void sub_551850()
{
  dbl_ABC8C0 = 0.0174532925199433 * 90.0; /*0x55185c*/
}
} // namespace gamemd

// 0x551870
namespace gamemd {
long long sub_551870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC8C0 - dbl_ABC8E8); /*0x551882*/
  result = Math::RoundToInt(v0 * dbl_ABC8E0 * 0.5); /*0x551896*/
  dword_ABC938 = result; /*0x55189b*/
  return result; /*0x5518a0*/
}
} // namespace gamemd

// 0x5518B0
namespace gamemd {
void sub_5518B0()
{
  dbl_ABC8F0 = Math::ArcTan((double)dword_ABC938 * 0.00390625); /*0x5518c7*/
}
} // namespace gamemd

// 0x5518E0
namespace gamemd {
void sub_5518E0()
{
  dbl_ABC908 = Math::ArcTan((double)(2 * dword_ABC938) / dbl_ABC8E0); /*0x551902*/
}
} // namespace gamemd

// 0x551910
namespace gamemd {
long long sub_551910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC938) + 0.5); /*0x55192b*/
  dword_ABC92C = result; /*0x551930*/
  return result; /*0x551936*/
}
} // namespace gamemd

// 0x551940
namespace gamemd {
int sub_551940()
{
  word_ABC8D8 = 0; /*0x551942*/
  word_ABC8DA = 0; /*0x551948*/
  return 0; /*0x55194e*/
}
} // namespace gamemd

// 0x551950
namespace gamemd {
int sub_551950()
{
  dword_ABC8F8 = 0; /*0x551952*/
  dword_ABC8FC = 0; /*0x551957*/
  dword_ABC900 = 0; /*0x55195c*/
  return 0; /*0x551961*/
}
} // namespace gamemd

// 0x551970
namespace gamemd {
int sub_551970()
{
  dword_ABC928 = 0; /*0x551975*/
  dword_ABC920 = 128; /*0x55197f*/
  dword_ABC924 = 128; /*0x551984*/
  return 128; /*0x551989*/
}
} // namespace gamemd

// 0x551990
namespace gamemd {
int sub_551990()
{
  dword_ABC8C8 = 0; /*0x551992*/
  dword_ABC8CC = 0; /*0x551997*/
  dword_ABC8D0 = 0; /*0x55199c*/
  dword_ABC8D4 = 0; /*0x5519a1*/
  return 0; /*0x5519a6*/
}
} // namespace gamemd

// 0x552830
namespace gamemd {
int sub_552830()
{
  dword_ABC948 = 0; /*0x552832*/
  dword_ABC94C = 0; /*0x552837*/
  dword_ABC950 = 0; /*0x55283c*/
  dword_ABC954 = 0; /*0x552841*/
  return 0; /*0x552846*/
}
} // namespace gamemd

// 0x552850
namespace gamemd {
void sub_552850()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55285c*/
  dbl_ABC960 = Math::Sqrt(v0 + v0); /*0x55286e*/
}
} // namespace gamemd

// 0x552880
namespace gamemd {
void sub_552880()
{
  dbl_ABC9B0 = dbl_ABC960 / 60.0; /*0x55288c*/
}
} // namespace gamemd

// 0x5528A0
namespace gamemd {
void sub_5528A0()
{
  dbl_ABC998 = 1.0 / dbl_ABC9B0; /*0x5528ac*/
}
} // namespace gamemd

// 0x5528C0
namespace gamemd {
void sub_5528C0()
{
  dbl_ABC990 = 0.0174532925199433 * 45.0; /*0x5528cc*/
}
} // namespace gamemd

// 0x5528E0
namespace gamemd {
void sub_5528E0()
{
  dbl_ABC968 = 0.0174532925199433 * 60.0; /*0x5528ec*/
}
} // namespace gamemd

// 0x552900
namespace gamemd {
void sub_552900()
{
  dbl_ABC940 = 0.0174532925199433 * 90.0; /*0x55290c*/
}
} // namespace gamemd

// 0x552920
namespace gamemd {
long long sub_552920()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC940 - dbl_ABC968); /*0x552932*/
  result = Math::RoundToInt(v0 * dbl_ABC960 * 0.5); /*0x552946*/
  dword_ABC9B8 = result; /*0x55294b*/
  return result; /*0x552950*/
}
} // namespace gamemd

// 0x552960
namespace gamemd {
void sub_552960()
{
  dbl_ABC970 = Math::ArcTan((double)dword_ABC9B8 * 0.00390625); /*0x552977*/
}
} // namespace gamemd

// 0x552990
namespace gamemd {
void sub_552990()
{
  dbl_ABC988 = Math::ArcTan((double)(2 * dword_ABC9B8) / dbl_ABC960); /*0x5529b2*/
}
} // namespace gamemd

// 0x5529C0
namespace gamemd {
long long sub_5529C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC9B8) + 0.5); /*0x5529db*/
  dword_ABC9AC = result; /*0x5529e0*/
  return result; /*0x5529e6*/
}
} // namespace gamemd

// 0x5529F0
namespace gamemd {
int sub_5529F0()
{
  word_ABC958 = 0; /*0x5529f2*/
  word_ABC95A = 0; /*0x5529f8*/
  return 0; /*0x5529fe*/
}
} // namespace gamemd

// 0x552A00
namespace gamemd {
int sub_552A00()
{
  dword_ABC978 = 0; /*0x552a02*/
  dword_ABC97C = 0; /*0x552a07*/
  dword_ABC980 = 0; /*0x552a0c*/
  return 0; /*0x552a11*/
}
} // namespace gamemd

// 0x552A20
namespace gamemd {
int sub_552A20()
{
  dword_ABC9A8 = 0; /*0x552a25*/
  dword_ABC9A0 = 128; /*0x552a2f*/
  dword_ABC9A4 = 128; /*0x552a34*/
  return 128; /*0x552a39*/
}
} // namespace gamemd

// 0x554430
namespace gamemd {
void sub_554430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55443c*/
  dbl_ABC9E8 = Math::Sqrt(v0 + v0); /*0x55444e*/
}
} // namespace gamemd

// 0x554460
namespace gamemd {
void sub_554460()
{
  dbl_ABCA68 = dbl_ABC9E8 / 60.0; /*0x55446c*/
}
} // namespace gamemd

// 0x554480
namespace gamemd {
void sub_554480()
{
  dbl_ABCA38 = 1.0 / dbl_ABCA68; /*0x55448c*/
}
} // namespace gamemd

// 0x5544A0
namespace gamemd {
void sub_5544A0()
{
  dbl_ABCA30 = 0.0174532925199433 * 45.0; /*0x5544ac*/
}
} // namespace gamemd

// 0x5544C0
namespace gamemd {
void sub_5544C0()
{
  dbl_ABC9F0 = 0.0174532925199433 * 60.0; /*0x5544cc*/
}
} // namespace gamemd

// 0x5544E0
namespace gamemd {
void sub_5544E0()
{
  dbl_ABC9C8 = 0.0174532925199433 * 90.0; /*0x5544ec*/
}
} // namespace gamemd

// 0x554500
namespace gamemd {
long long sub_554500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC9C8 - dbl_ABC9F0); /*0x554512*/
  result = Math::RoundToInt(v0 * dbl_ABC9E8 * 0.5); /*0x554526*/
  dword_ABCA70 = result; /*0x55452b*/
  return result; /*0x554530*/
}
} // namespace gamemd

// 0x554540
namespace gamemd {
void sub_554540()
{
  dbl_ABC9F8 = Math::ArcTan((double)dword_ABCA70 * 0.00390625); /*0x554557*/
}
} // namespace gamemd

// 0x554570
namespace gamemd {
void sub_554570()
{
  dbl_ABCA28 = Math::ArcTan((double)(2 * dword_ABCA70) / dbl_ABC9E8); /*0x554592*/
}
} // namespace gamemd

// 0x5545A0
namespace gamemd {
long long sub_5545A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCA70) + 0.5); /*0x5545bb*/
  dword_ABCA64 = result; /*0x5545c0*/
  return result; /*0x5545c6*/
}
} // namespace gamemd

// 0x5545D0
namespace gamemd {
int sub_5545D0()
{
  word_ABC9E0 = 0; /*0x5545d2*/
  word_ABC9E2 = 0; /*0x5545d8*/
  return 0; /*0x5545de*/
}
} // namespace gamemd

// 0x5545E0
namespace gamemd {
int sub_5545E0()
{
  dword_ABCA00 = 0; /*0x5545e2*/
  dword_ABCA04 = 0; /*0x5545e7*/
  dword_ABCA08 = 0; /*0x5545ec*/
  return 0; /*0x5545f1*/
}
} // namespace gamemd

// 0x554600
namespace gamemd {
int sub_554600()
{
  dword_ABCA60 = 0; /*0x554605*/
  dword_ABCA58 = 128; /*0x55460f*/
  dword_ABCA5C = 128; /*0x554614*/
  return 128; /*0x554619*/
}
} // namespace gamemd

// 0x554620
namespace gamemd {
int sub_554620()
{
  dword_ABC9D0 = 0; /*0x554622*/
  dword_ABC9D4 = 0; /*0x554627*/
  dword_ABC9D8 = 0; /*0x55462c*/
  dword_ABC9DC = 0; /*0x554631*/
  return 0; /*0x554636*/
}
} // namespace gamemd

// 0x554640
namespace gamemd {
int sub_554640()
{
  dword_ABCA14 = 0; /*0x554647*/
  dword_ABCA18 = 0; /*0x55464c*/
  byte_ABCA1C = 1; /*0x554651*/
  byte_ABCA1D = 0; /*0x554658*/
  dword_ABCA10 = (int)&DynamicVectorClass<LightSourceClass *>::`vftable'; /*0x55465d*/
  dword_ABCA24 = 10; /*0x554667*/
  g_BridgeCellPool = 0; /*0x554671*/
  return atexit(sub_554680); /*0x55467c*/
}
} // namespace gamemd

// 0x554680
namespace gamemd {
void sub_554680()
{
  dword_ABCA10 = (int)&VectorClass<LightSourceClass *>::`vftable'; /*0x554688*/
  if ( dword_ABCA14 && byte_ABCA1D ) /*0x55469c*/
  {
    __3_YAXPAX_Z(dword_ABCA14); /*0x55469f*/
    dword_ABCA14 = 0; /*0x5546a7*/
  }
  byte_ABCA1D = 0; /*0x5546ad*/
  dword_ABCA18 = 0; /*0x5546b3*/
}
} // namespace gamemd

// 0x5546C0
namespace gamemd {
int sub_5546C0()
{
  dword_ABCA44 = 0; /*0x5546c7*/
  dword_ABCA48 = 0; /*0x5546cc*/
  byte_ABCA4C = 1; /*0x5546d1*/
  byte_ABCA4D = 0; /*0x5546d8*/
  dword_ABCA40 = (int)&DynamicVectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x5546dd*/
  dword_ABCA54 = 10; /*0x5546e7*/
  dword_ABCA50 = 0; /*0x5546f1*/
  return atexit(sub_554700); /*0x5546fc*/
}
} // namespace gamemd

// 0x554700
namespace gamemd {
void sub_554700()
{
  if ( (byte_ABC9C0 & 1) == 0 ) /*0x55470a*/
  {
    dword_ABCA40 = (int)&VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x55470e*/
    byte_ABC9C0 |= 1u; /*0x554721*/
    if ( dword_ABCA44 ) /*0x554727*/
    {
      if ( byte_ABCA4D ) /*0x554731*/
      {
        __3_YAXPAX_Z(dword_ABCA44); /*0x554734*/
        dword_ABCA44 = 0; /*0x55473c*/
      }
    }
    byte_ABCA4D = 0; /*0x554746*/
    dword_ABCA48 = 0; /*0x55474d*/
  }
}
} // namespace gamemd

// 0x5558C0
namespace gamemd {
int sub_5558C0()
{
  dword_ABCA88 = 0; /*0x5558c2*/
  dword_ABCA8C = 0; /*0x5558c7*/
  dword_ABCA90 = 0; /*0x5558cc*/
  dword_ABCA94 = 0; /*0x5558d1*/
  return 0; /*0x5558d6*/
}
} // namespace gamemd

// 0x555AC0
namespace gamemd {
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
  int v4; // eax
  int v5; // eax
  int *result; // eax
  int v7; // ecx

  v4 = *a1; /*0x555ac4*/
  if ( *a1 >= 1000 ) /*0x555acb*/
    v4 = 1000; /*0x555acd*/
  *a1 = v4; /*0x555ad2*/
  v5 = *a2; /*0x555ad4*/
  if ( *a2 >= 1000 ) /*0x555adb*/
    v5 = 1000; /*0x555add*/
  *a2 = v5; /*0x555ae2*/
  result = a3; /*0x555ae4*/
  v7 = *a3; /*0x555ae8*/
  if ( *a3 >= 1000 ) /*0x555af0*/
    v7 = 1000; /*0x555af2*/
  *a3 = v7; /*0x555af7*/
  *a1 &= (*a1 <= 0) - 1; /*0x555b05*/
  *a2 &= (*a2 <= 0) - 1; /*0x555b13*/
  *a3 &= (*a3 <= 0) - 1; /*0x555b21*/
  if ( g_lParam ) /*0x555b2c*/
  {
    if ( g_lParam == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( g_lParam == 2 ) /*0x555b32*/
    {
      *a1 &= 0xFFFFFFE0; /*0x555b39*/
      *a2 &= 0xFFFFFFE0; /*0x555b41*/
      *a3 &= 0xFFFFFFE0; /*0x555b49*/
    }
  }
  else
  {
    *a1 &= 0xFFFFFF80; /*0x555b6d*/
    *a2 &= 0xFFFFFF80; /*0x555b74*/
    *a3 &= 0xFFFFFF80; /*0x555b7b*/
  }
  return result; /*0x555b40*/
}
} // namespace gamemd

// 0x555B90
namespace gamemd {
int sub_555B90()
{
  dword_ABCAA0 = 0; /*0x555b92*/
  dword_ABCAA4 = 0; /*0x555b97*/
  dword_ABCAA8 = 0; /*0x555b9c*/
  dword_ABCAAC = 0; /*0x555ba1*/
  return 0; /*0x555ba6*/
}
} // namespace gamemd

// 0x555BB0
namespace gamemd {
void sub_555BB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x555bbc*/
  dbl_ABCAB8 = Math::Sqrt(v0 + v0); /*0x555bce*/
}
} // namespace gamemd

// 0x555BE0
namespace gamemd {
void sub_555BE0()
{
  dbl_ABCB08 = dbl_ABCAB8 / 60.0; /*0x555bec*/
}
} // namespace gamemd

// 0x555C00
namespace gamemd {
void sub_555C00()
{
  dbl_ABCAF0 = 1.0 / dbl_ABCB08; /*0x555c0c*/
}
} // namespace gamemd

// 0x555C20
namespace gamemd {
void sub_555C20()
{
  dbl_ABCAE8 = 0.0174532925199433 * 45.0; /*0x555c2c*/
}
} // namespace gamemd

// 0x555C40
namespace gamemd {
void sub_555C40()
{
  dbl_ABCAC0 = 0.0174532925199433 * 60.0; /*0x555c4c*/
}
} // namespace gamemd

// 0x555C60
namespace gamemd {
void sub_555C60()
{
  dbl_ABCA98 = 0.0174532925199433 * 90.0; /*0x555c6c*/
}
} // namespace gamemd

// 0x555C80
namespace gamemd {
long long sub_555C80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCA98 - dbl_ABCAC0); /*0x555c92*/
  result = Math::RoundToInt(v0 * dbl_ABCAB8 * 0.5); /*0x555ca6*/
  dword_ABCB10 = result; /*0x555cab*/
  return result; /*0x555cb0*/
}
} // namespace gamemd

// 0x555CC0
namespace gamemd {
void sub_555CC0()
{
  dbl_ABCAC8 = Math::ArcTan((double)dword_ABCB10 * 0.00390625); /*0x555cd7*/
}
} // namespace gamemd

// 0x555CF0
namespace gamemd {
void sub_555CF0()
{
  dbl_ABCAE0 = Math::ArcTan((double)(2 * dword_ABCB10) / dbl_ABCAB8); /*0x555d12*/
}
} // namespace gamemd

// 0x555D20
namespace gamemd {
long long sub_555D20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCB10) + 0.5); /*0x555d3b*/
  dword_ABCB04 = result; /*0x555d40*/
  return result; /*0x555d46*/
}
} // namespace gamemd

// 0x555D50
namespace gamemd {
int sub_555D50()
{
  word_ABCAB0 = 0; /*0x555d52*/
  word_ABCAB2 = 0; /*0x555d58*/
  return 0; /*0x555d5e*/
}
} // namespace gamemd

// 0x555D60
namespace gamemd {
int sub_555D60()
{
  dword_ABCAD0 = 0; /*0x555d62*/
  dword_ABCAD4 = 0; /*0x555d67*/
  dword_ABCAD8 = 0; /*0x555d6c*/
  return 0; /*0x555d71*/
}
} // namespace gamemd

// 0x555D80
namespace gamemd {
int sub_555D80()
{
  dword_ABCB00 = 0; /*0x555d85*/
  dword_ABCAF8 = 128; /*0x555d8f*/
  dword_ABCAFC = 128; /*0x555d94*/
  return 128; /*0x555d99*/
}
} // namespace gamemd

// 0x556510
namespace gamemd {
int E4Recv_556510::sub_556510()
{
  *(_DWORD *)this = &LightConvertClass::`vftable'; /*0x556510*/
  return sub_490400(this);
}
} // namespace gamemd

// 0x556520
namespace gamemd {
LightConvertClass * E4Recv_556520::sub_556520(char a2)
{
  *this = &LightConvertClass::`vftable'; /*0x556523*/
  sub_490400((int)this); /*0x556529*/
  if ( (a2 & 1) != 0 ) /*0x556533*/
    __3_YAXPAX_Z(this); /*0x556536*/
  return this; /*0x556540*/
}
} // namespace gamemd

// 0x556790
namespace gamemd {
void sub_556790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55679c*/
  dbl_ABCB38 = Math::Sqrt(v0 + v0); /*0x5567ae*/
}
} // namespace gamemd

// 0x5567C0
namespace gamemd {
void sub_5567C0()
{
  dbl_ABCBA0 = dbl_ABCB38 / 60.0; /*0x5567cc*/
}
} // namespace gamemd

// 0x5567E0
namespace gamemd {
void sub_5567E0()
{
  dbl_ABCB70 = 1.0 / dbl_ABCBA0; /*0x5567ec*/
}
} // namespace gamemd

// 0x556800
namespace gamemd {
void sub_556800()
{
  dbl_ABCB68 = 0.0174532925199433 * 45.0; /*0x55680c*/
}
} // namespace gamemd

// 0x556820
namespace gamemd {
void sub_556820()
{
  dbl_ABCB40 = 0.0174532925199433 * 60.0; /*0x55682c*/
}
} // namespace gamemd

// 0x556840
namespace gamemd {
void sub_556840()
{
  dbl_ABCB18 = 0.0174532925199433 * 90.0; /*0x55684c*/
}
} // namespace gamemd

// 0x556860
namespace gamemd {
long long sub_556860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCB18 - dbl_ABCB40); /*0x556872*/
  result = Math::RoundToInt(v0 * dbl_ABCB38 * 0.5); /*0x556886*/
  dword_ABCBA8 = result; /*0x55688b*/
  return result; /*0x556890*/
}
} // namespace gamemd

// 0x5568A0
namespace gamemd {
void sub_5568A0()
{
  dbl_ABCB48 = Math::ArcTan((double)dword_ABCBA8 * 0.00390625); /*0x5568b7*/
}
} // namespace gamemd

// 0x5568D0
namespace gamemd {
void sub_5568D0()
{
  dbl_ABCB60 = Math::ArcTan((double)(2 * dword_ABCBA8) / dbl_ABCB38); /*0x5568f2*/
}
} // namespace gamemd

// 0x556900
namespace gamemd {
long long sub_556900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCBA8) + 0.5); /*0x55691b*/
  dword_ABCB9C = result; /*0x556920*/
  return result; /*0x556926*/
}
} // namespace gamemd

// 0x556930
namespace gamemd {
int sub_556930()
{
  word_ABCB30 = 0; /*0x556932*/
  word_ABCB32 = 0; /*0x556938*/
  return 0; /*0x55693e*/
}
} // namespace gamemd

// 0x556940
namespace gamemd {
int sub_556940()
{
  dword_ABCB50 = 0; /*0x556942*/
  dword_ABCB54 = 0; /*0x556947*/
  dword_ABCB58 = 0; /*0x55694c*/
  return 0; /*0x556951*/
}
} // namespace gamemd

// 0x556960
namespace gamemd {
int sub_556960()
{
  dword_ABCB98 = 0; /*0x556965*/
  dword_ABCB90 = 128; /*0x55696f*/
  dword_ABCB94 = 128; /*0x556974*/
  return 128; /*0x556979*/
}
} // namespace gamemd

// 0x556980
namespace gamemd {
int sub_556980()
{
  dword_ABCB20 = 0; /*0x556982*/
  dword_ABCB24 = 0; /*0x556987*/
  dword_ABCB28 = 0; /*0x55698c*/
  dword_ABCB2C = 0; /*0x556991*/
  return 0; /*0x556996*/
}
} // namespace gamemd

// 0x5569A0
namespace gamemd {
int sub_5569A0()
{
  dword_ABCB7C = 0; /*0x5569a7*/
  dword_ABCB80 = 0; /*0x5569ac*/
  byte_ABCB84 = 1; /*0x5569b1*/
  byte_ABCB85 = 0; /*0x5569b8*/
  dword_ABCB78 = (int)&DynamicVectorClass<LineTrail *>::`vftable'; /*0x5569bd*/
  dword_ABCB8C = 10; /*0x5569c7*/
  dword_ABCB88 = 0; /*0x5569d1*/
  return atexit(sub_5569E0); /*0x5569dc*/
}
} // namespace gamemd

// 0x5569E0
namespace gamemd {
void sub_5569E0()
{
  dword_ABCB78 = (int)&VectorClass<LineTrail *>::`vftable'; /*0x5569e8*/
  if ( dword_ABCB7C && byte_ABCB85 ) /*0x5569fc*/
  {
    __3_YAXPAX_Z(dword_ABCB7C); /*0x5569ff*/
    dword_ABCB7C = 0; /*0x556a07*/
  }
  byte_ABCB85 = 0; /*0x556a0d*/
  dword_ABCB80 = 0; /*0x556a13*/
}
} // namespace gamemd

// 0x557210
namespace gamemd {
int sub_557210()
{
  dword_ABCBB0 = 0; /*0x557212*/
  dword_ABCBB4 = 0; /*0x557217*/
  dword_ABCBB8 = 0; /*0x55721c*/
  dword_ABCBBC = 0; /*0x557221*/
  return 0; /*0x557226*/
}
} // namespace gamemd

// 0x5581A0
namespace gamemd {
int E4Recv_5581A0::sub_5581A0(GaugeClass * aP1)
{
  ControlClass::CtorFromData((_DWORD *)this, aP1); /*0x5581a9*/
  this->M44 = aP1->q02C; /*0x5581b1*/
  this->M45 = aP1->u32_B4; /*0x5581b7*/
  this->M46 = aP1->q0B8; /*0x5581bd*/
  this->M48 = aP1->q030; /*0x5581c3*/
  this->q034 = aP1->q034; /*0x5581c9*/
  this->M56 = aP1->q038; /*0x5581cf*/
  *(_DWORD *)this = &GaugeClass::`vftable'; /*0x5581d2*/
  return this; /*0x5581da*/
}
} // namespace gamemd

// 0x5584F0
namespace gamemd {
size_t sub_5584F0(char * a1, void * a2)
{
  size_t v2; // esi
  int v3; // eax
  char *v4; // ecx

  if ( !a1 || !a2 ) /*0x5584f6*/
    return 0; /*0x55852a*/
  v2 = *(_DWORD *)(a1 + 2); /*0x5584fc*/
  v3 = *a1 - 3; /*0x558500*/
  v4 = &a1[*((__int16 *)a1 + 3) + 8]; /*0x558507*/
  if ( v3 ) /*0x55850b*/
  {
    if ( v3 != 1 ) /*0x55850f*/
    {
      memcpy(a2, v4, v2); /*0x558513*/
      return v2; /*0x55851f*/
    }
    BitStreamIOLCW((unsigned __int8 *)v4, (unsigned int)a2, v2); /*0x558520*/
  }
  return v2; /*0x55851f*/
}
} // namespace gamemd

// 0x558530
namespace gamemd {
int sub_558530()
{
  dword_ABCBC8 = 0; /*0x558532*/
  dword_ABCBCC = 0; /*0x558537*/
  dword_ABCBD0 = 0; /*0x55853c*/
  dword_ABCBD4 = 0; /*0x558541*/
  return 0; /*0x558546*/
}
} // namespace gamemd

// 0x558550
namespace gamemd {
void sub_558550()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55855c*/
  dbl_ABCBE0 = Math::Sqrt(v0 + v0); /*0x55856e*/
}
} // namespace gamemd

// 0x558580
namespace gamemd {
void sub_558580()
{
  dbl_ABCC30 = dbl_ABCBE0 / 60.0; /*0x55858c*/
}
} // namespace gamemd

// 0x5585A0
namespace gamemd {
void sub_5585A0()
{
  dbl_ABCC18 = 1.0 / dbl_ABCC30; /*0x5585ac*/
}
} // namespace gamemd

// 0x5585C0
namespace gamemd {
void sub_5585C0()
{
  dbl_ABCC10 = 0.0174532925199433 * 45.0; /*0x5585cc*/
}
} // namespace gamemd

// 0x5585E0
namespace gamemd {
void sub_5585E0()
{
  dbl_ABCBE8 = 0.0174532925199433 * 60.0; /*0x5585ec*/
}
} // namespace gamemd

// 0x558600
namespace gamemd {
void sub_558600()
{
  dbl_ABCBC0 = 0.0174532925199433 * 90.0; /*0x55860c*/
}
} // namespace gamemd

// 0x558620
namespace gamemd {
long long sub_558620()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCBC0 - dbl_ABCBE8); /*0x558632*/
  result = Math::RoundToInt(v0 * dbl_ABCBE0 * 0.5); /*0x558646*/
  dword_ABCC38 = result; /*0x55864b*/
  return result; /*0x558650*/
}
} // namespace gamemd

// 0x558660
namespace gamemd {
void sub_558660()
{
  dbl_ABCBF0 = Math::ArcTan((double)dword_ABCC38 * 0.00390625); /*0x558677*/
}
} // namespace gamemd

// 0x558690
namespace gamemd {
void sub_558690()
{
  dbl_ABCC08 = Math::ArcTan((double)(2 * dword_ABCC38) / dbl_ABCBE0); /*0x5586b2*/
}
} // namespace gamemd

// 0x5586C0
namespace gamemd {
long long sub_5586C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCC38) + 0.5); /*0x5586db*/
  dword_ABCC2C = result; /*0x5586e0*/
  return result; /*0x5586e6*/
}
} // namespace gamemd

// 0x5586F0
namespace gamemd {
int sub_5586F0()
{
  word_ABCBD8 = 0; /*0x5586f2*/
  word_ABCBDA = 0; /*0x5586f8*/
  return 0; /*0x5586fe*/
}
} // namespace gamemd

// 0x558700
namespace gamemd {
int sub_558700()
{
  dword_ABCBF8 = 0; /*0x558702*/
  dword_ABCBFC = 0; /*0x558707*/
  dword_ABCC00 = 0; /*0x55870c*/
  return 0; /*0x558711*/
}
} // namespace gamemd

// 0x558720
namespace gamemd {
int sub_558720()
{
  dword_ABCC28 = 0; /*0x558725*/
  dword_ABCC20 = 128; /*0x55872f*/
  dword_ABCC24 = 128; /*0x558734*/
  return 128; /*0x558739*/
}
} // namespace gamemd

// 0x5588E0
namespace gamemd {
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
  LRESULT result; // eax
  LRESULT v7; // ebp
  HWND DlgItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  LRESULT v11; // [esp+Ch] [ebp-4h]

  result = GetWindowLongA(hDlg, 8); /*0x5588eb*/
  v11 = result; /*0x5588f9*/
  if ( a2 == 1319 ) /*0x5588fd*/
  {
    if ( a4 == 1 ) /*0x558949*/
    {
      result = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x558963*/
      if ( result > 0 ) /*0x558967*/
      {
        result = SendMessageA(hWnd, 0x188u, 0, 0); /*0x558973*/
        if ( result != -1 ) /*0x558978*/
        {
          v7 = SendMessageA(hWnd, 0x199u, result, 0); /*0x55898c*/
          if ( *(_BYTE *)(v7 + 436) && !*(_BYTE *)(v7 + 437) || (v7 = *(_DWORD *)(v11 + 12)) != 0 ) /*0x5589ab*/
          {
            DlgItem = GetDlgItem(hDlg, 1318); /*0x5589b3*/
            SendMessageA(DlgItem, 0x4B2u, 0, v7); /*0x5589be*/
          }
          v9 = GetDlgItem(hDlg, 1318); /*0x5589c6*/
          SetFocus(v9); /*0x5589c9*/
          v10 = GetDlgItem(hDlg, 1318); /*0x5589de*/
          return SendMessageA(v10, 0xB1u, 0, -1); /*0x5589e1*/
        }
      }
    }
  }
  else if ( a2 == 1670 ) /*0x558905*/
  {
    if ( !a4 ) /*0x558930*/
      *(_DWORD *)(result + 24) = 2; /*0x558938*/
  }
  else if ( a2 == 1735 && !a4 ) /*0x558916*/
  {
    *(_DWORD *)(result + 24) = 1; /*0x55891e*/
  }
  return result; /*0x55891c*/
}
} // namespace gamemd

// 0x558A30
namespace gamemd {
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax
  LONG v7; // edi

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558a4a*/
  if ( !result ) /*0x558a51*/
  {
    if ( a2 > 0x216 ) /*0x558a5d*/
    {
      if ( a2 == 1175 ) /*0x558b38*/
      {
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0xF9u, 2); /*0x558b52*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0x38u, 255); /*0x558b66*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0, 315); /*0x558b7a*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558a63*/
      {
        case 0x216u: /*0x558a63*/
          return (unsigned __int8)Window::ClampToScreen((int *)a4); /*0x558b2f*/
        case 0xFu: /*0x558a63*/
          Dialog::StopBink(hWnd); /*0x558b0b*/
          return 1; /*0x558b19*/
        case 0x111u: /*0x558a63*/
          v5 = HIWORD(a3); /*0x558a89*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558a8c*/
          v7 = WindowLongA; /*0x558a98*/
          switch ( (unsigned __int16)a3 ) /*0x558a9a*/
          {
            case 0x40Fu: /*0x558a9a*/
              if ( !v5 ) /*0x558af3*/
              {
                *(_DWORD *)(WindowLongA + 24) = 1039; /*0x558af9*/
                return 0; /*0x558b06*/
              }
              break;
            case 0x525u: /*0x558a9a*/
              if ( v5 == 2 && SendMessageA(a4, 0x18Bu, 0, 0) > 0 ) /*0x558adb*/
              {
                *(_DWORD *)(v7 + 24) = 1039; /*0x558ae1*/
                return 0; /*0x558aee*/
              }
              break;
            case 0x686u: /*0x558a9a*/
              *(_DWORD *)(WindowLongA + 24) = 2; /*0x558ab0*/
              return 0; /*0x558abd*/
          }
          break;
      }
    }
    return 0; /*0x558b7c*/
  }
  return result; /*0x558ab7*/
}
} // namespace gamemd

// 0x558B90
namespace gamemd {
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558baa*/
  if ( !result ) /*0x558bb1*/
  {
    if ( a2 > 0x216 ) /*0x558bbd*/
    {
      if ( a2 == 1175 ) /*0x558c20*/
      {
        DlgItem = GetDlgItem(hWnd, 1318); /*0x558c4f*/
        SendMessageA(DlgItem, 0xC5u, 0x4Fu, 0); /*0x558c56*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0xF9u, 2); /*0x558c74*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0x38u, 255); /*0x558c88*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0, 315); /*0x558c9c*/
      }
      else if ( a2 == 1242 ) /*0x558c25*/
      {
        *(_DWORD *)(GetWindowLongA(hWnd, 8) + 24) = 1; /*0x558c32*/
        return 0; /*0x558c3d*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558bbf*/
      {
        case 0x216u: /*0x558bbf*/
          return (unsigned __int8)Window::ClampToScreen((int *)a4); /*0x558c17*/
        case 0xFu: /*0x558bbf*/
          Dialog::StopBink(hWnd); /*0x558bf3*/
          return 1; /*0x558c01*/
        case 0x111u: /*0x558bbf*/
          sub_5588E0(hWnd, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x558be3*/
          return 0; /*0x558bee*/
      }
    }
    return 0; /*0x558c9e*/
  }
  return result; /*0x558be8*/
}
} // namespace gamemd

// 0x558CB0
namespace gamemd {
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558cca*/
  if ( !result ) /*0x558cd1*/
  {
    if ( a2 > 0x216 ) /*0x558cdd*/
    {
      if ( a2 == 1175 ) /*0x558d7a*/
      {
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0xF9u, 2); /*0x558d94*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0x38u, 255); /*0x558da8*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0, 315); /*0x558dbc*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558ce3*/
      {
        case 0x216u: /*0x558ce3*/
          return (unsigned __int8)Window::ClampToScreen(a4); /*0x558d71*/
        case 0xFu: /*0x558ce3*/
          Dialog::StopBink(hWnd); /*0x558d4d*/
          return 1; /*0x558d5b*/
        case 0x111u: /*0x558ce3*/
          v5 = HIWORD(a3); /*0x558cfb*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558cfe*/
          if ( (unsigned __int16)a3 == 1670 ) /*0x558d10*/
          {
            if ( !v5 ) /*0x558d35*/
            {
              *(_DWORD *)(WindowLongA + 24) = 2; /*0x558d3d*/
              return 0; /*0x558d48*/
            }
          }
          else if ( (unsigned __int16)a3 == 1736 && !v5 ) /*0x558d1d*/
          {
            *(_DWORD *)(WindowLongA + 24) = 1; /*0x558d25*/
            return 0; /*0x558d30*/
          }
          break;
      }
    }
    return 0; /*0x558dbe*/
  }
  return result; /*0x558d23*/
}
} // namespace gamemd

// 0x5595F0
namespace gamemd {
int E4Recv_5595F0::sub_5595F0(char * Buffer)
{
  int v3; // eax
  const char *v5; // [esp-4h] [ebp-78h]
  _DWORD v6[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  CCFileClass::Construct3((int)v6); /*0x5595fb*/
  do /*0x559633*/
  {
    v5 = this->M8; /*0x559607*/
    v3 = rand(); /*0x559608*/
    sprintf(Buffer, "SAVE%04lX.%3s", v3, v5); /*0x559614*/
    FileClass::SetFileName(v6, Buffer); /*0x559621*/
  }
  while ( CCFileClass::Open(v6, 0) == 1 ); /*0x559633*/
  v6[0] = &CCFileClass::`vftable'; /*0x559639*/
  v8 = 0; /*0x559641*/
  Vector::Clear((int)v7); /*0x559649*/
  v6[0] = &off_7E1668; /*0x559652*/
  return BufferIOFileClass::Dtor(v6); /*0x55965f*/
}
} // namespace gamemd

// 0x559D30
namespace gamemd {
int sub_559D30(const void * a1, const void * a2)
{
  return -CompareFileTime((const FILETIME *)(*(_DWORD *)a1 + 428), (const FILETIME *)(*(_DWORD *)a2 + 428)); /*0x559d51*/
}
} // namespace gamemd

// 0x55A4B0
namespace gamemd {
int sub_55A4B0()
{
  dword_ABCC48 = 0; /*0x55a4b2*/
  dword_ABCC4C = 0; /*0x55a4b7*/
  dword_ABCC50 = 0; /*0x55a4bc*/
  dword_ABCC54 = 0; /*0x55a4c1*/
  return 0; /*0x55a4c6*/
}
} // namespace gamemd

// 0x55A4D0
namespace gamemd {
void sub_55A4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55a4dc*/
  dbl_ABCC60 = Math::Sqrt(v0 + v0); /*0x55a4ee*/
}
} // namespace gamemd

// 0x55A500
namespace gamemd {
void sub_55A500()
{
  dbl_ABCCB0 = dbl_ABCC60 / 60.0; /*0x55a50c*/
}
} // namespace gamemd

// 0x55A520
namespace gamemd {
void sub_55A520()
{
  dbl_ABCC98 = 1.0 / dbl_ABCCB0; /*0x55a52c*/
}
} // namespace gamemd

// 0x55A540
namespace gamemd {
void sub_55A540()
{
  dbl_ABCC90 = 0.0174532925199433 * 45.0; /*0x55a54c*/
}
} // namespace gamemd

// 0x55A560
namespace gamemd {
void sub_55A560()
{
  dbl_ABCC68 = 0.0174532925199433 * 60.0; /*0x55a56c*/
}
} // namespace gamemd

// 0x55A580
namespace gamemd {
void sub_55A580()
{
  dbl_ABCC40 = 0.0174532925199433 * 90.0; /*0x55a58c*/
}
} // namespace gamemd

// 0x55A5A0
namespace gamemd {
long long sub_55A5A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCC40 - dbl_ABCC68); /*0x55a5b2*/
  result = Math::RoundToInt(v0 * dbl_ABCC60 * 0.5); /*0x55a5c6*/
  dword_ABCCB8 = result; /*0x55a5cb*/
  return result; /*0x55a5d0*/
}
} // namespace gamemd

// 0x55A5E0
namespace gamemd {
void sub_55A5E0()
{
  dbl_ABCC70 = Math::ArcTan((double)dword_ABCCB8 * 0.00390625); /*0x55a5f7*/
}
} // namespace gamemd

// 0x55A610
namespace gamemd {
void sub_55A610()
{
  dbl_ABCC88 = Math::ArcTan((double)(2 * dword_ABCCB8) / dbl_ABCC60); /*0x55a632*/
}
} // namespace gamemd

// 0x55A640
namespace gamemd {
long long sub_55A640()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCCB8) + 0.5); /*0x55a65b*/
  dword_ABCCAC = result; /*0x55a660*/
  return result; /*0x55a666*/
}
} // namespace gamemd

// 0x55A670
namespace gamemd {
int sub_55A670()
{
  word_ABCC58 = 0; /*0x55a672*/
  word_ABCC5A = 0; /*0x55a678*/
  return 0; /*0x55a67e*/
}
} // namespace gamemd

// 0x55A680
namespace gamemd {
int sub_55A680()
{
  dword_ABCC78 = 0; /*0x55a682*/
  dword_ABCC7C = 0; /*0x55a687*/
  dword_ABCC80 = 0; /*0x55a68c*/
  return 0; /*0x55a691*/
}
} // namespace gamemd

// 0x55A6A0
namespace gamemd {
int sub_55A6A0()
{
  dword_ABCCA8 = 0; /*0x55a6a5*/
  dword_ABCCA0 = 128; /*0x55a6af*/
  dword_ABCCA4 = 128; /*0x55a6b4*/
  return 128; /*0x55a6b9*/
}
} // namespace gamemd

// 0x55AA60
namespace gamemd {
int IPersistStream_Load(int * a1, int * a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = a2; /*0x55aa61*/
  if ( !a2 ) /*0x55aa68*/
    return -2147467261; /*0x55aa6b*/
  v5 = *a2; /*0x55aa78*/
  v8 = a2; /*0x55aa83*/
  a2 = a1; /*0x55aa84*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x55aa88*/
  if ( result >= 0 ) /*0x55aa8d*/
  {
    v6 = *v3; /*0x55aa92*/
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 36))(a1, 0); /*0x55aa98*/
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7); /*0x55aa9e*/
    if ( result >= 0 ) /*0x55aaa4*/
    {
      if ( a3 ) /*0x55aaac*/
        *((_BYTE *)a1 + 17) = 0; /*0x55aaae*/
    }
  }
  return result; /*0x55aa6a*/
}
} // namespace gamemd

// 0x55AC40
namespace gamemd {
void nullsub_164(int a1)
{
  ; /*0x55ac40*/
}
} // namespace gamemd

// 0x55AD30
namespace gamemd {
int sub_55AD30()
{
  dword_ABCCC8 = 0; /*0x55ad32*/
  dword_ABCCCC = 0; /*0x55ad37*/
  dword_ABCCD0 = 0; /*0x55ad3c*/
  dword_ABCCD4 = 0; /*0x55ad41*/
  return 0; /*0x55ad46*/
}
} // namespace gamemd

// 0x55AD50
namespace gamemd {
void sub_55AD50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ad5c*/
  dbl_ABCCE0 = Math::Sqrt(v0 + v0); /*0x55ad6e*/
}
} // namespace gamemd

// 0x55AD80
namespace gamemd {
void sub_55AD80()
{
  dbl_ABCD30 = dbl_ABCCE0 / 60.0; /*0x55ad8c*/
}
} // namespace gamemd

// 0x55ADA0
namespace gamemd {
void sub_55ADA0()
{
  dbl_ABCD18 = 1.0 / dbl_ABCD30; /*0x55adac*/
}
} // namespace gamemd

// 0x55ADC0
namespace gamemd {
void sub_55ADC0()
{
  dbl_ABCD10 = 0.0174532925199433 * 45.0; /*0x55adcc*/
}
} // namespace gamemd

// 0x55ADE0
namespace gamemd {
void sub_55ADE0()
{
  dbl_ABCCE8 = 0.0174532925199433 * 60.0; /*0x55adec*/
}
} // namespace gamemd

// 0x55AE00
namespace gamemd {
void sub_55AE00()
{
  dbl_ABCCC0 = 0.0174532925199433 * 90.0; /*0x55ae0c*/
}
} // namespace gamemd

// 0x55AE20
namespace gamemd {
long long sub_55AE20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCCC0 - dbl_ABCCE8); /*0x55ae32*/
  result = Math::RoundToInt(v0 * dbl_ABCCE0 * 0.5); /*0x55ae46*/
  dword_ABCD38 = result; /*0x55ae4b*/
  return result; /*0x55ae50*/
}
} // namespace gamemd

// 0x55AE60
namespace gamemd {
void sub_55AE60()
{
  dbl_ABCCF0 = Math::ArcTan((double)dword_ABCD38 * 0.00390625); /*0x55ae77*/
}
} // namespace gamemd

// 0x55AE90
namespace gamemd {
void sub_55AE90()
{
  dbl_ABCD08 = Math::ArcTan((double)(2 * dword_ABCD38) / dbl_ABCCE0); /*0x55aeb2*/
}
} // namespace gamemd

// 0x55AEC0
namespace gamemd {
long long sub_55AEC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCD38) + 0.5); /*0x55aedb*/
  dword_ABCD2C = result; /*0x55aee0*/
  return result; /*0x55aee6*/
}
} // namespace gamemd

// 0x55AEF0
namespace gamemd {
int sub_55AEF0()
{
  dword_ABCCD8 = 0; /*0x55aef2*/
  return 0; /*0x55aefe*/
}
} // namespace gamemd

// 0x55AF00
namespace gamemd {
int sub_55AF00()
{
  dword_ABCCF8 = 0; /*0x55af02*/
  dword_ABCCFC = 0; /*0x55af07*/
  dword_ABCD00 = 0; /*0x55af0c*/
  return 0; /*0x55af11*/
}
} // namespace gamemd

// 0x55AF20
namespace gamemd {
int sub_55AF20()
{
  dword_ABCD28 = 0; /*0x55af25*/
  dword_ABCD20 = 128; /*0x55af2f*/
  dword_ABCD24 = 128; /*0x55af34*/
  return 128; /*0x55af39*/
}
} // namespace gamemd

// 0x55BB90
namespace gamemd {
int WriteCompressionBlock(Pipe * aP0, BlowStraw * aP1, CCINIClass * aP2, int * a3, int a5)
{
  int result; // eax
  int *v6; // esi
  _BYTE *v7; // edi
  int v8; // ecx
  _BYTE *v9; // ecx

  result = 0; /*0x55bb90*/
  if ( aP1 ) /*0x55bb9a*/
  {
    if ( aP1 > 0xD ) /*0x55bba7*/
    {
      v6 = a3; /*0x55bbcf*/
      result = CompressLCWBuffer(aP2, a3, a5); /*0x55bbd6*/
      if ( result ) /*0x55bbdd*/
        return result; /*0x55bbdd*/
    }
    else
    {
      *aP2 = aP1 + 17; /*0x55bbb0*/
      v7 = aP2 + 1; /*0x55bbb3*/
      do /*0x55bbbd*/
      {
        *v7++ = *aP0++; /*0x55bbb8*/
        --aP1; /*0x55bbbc*/
      }
      while ( aP1 ); /*0x55bbbd*/
      v6 = a3; /*0x55bbbf*/
      *a3 = v7 - aP2; /*0x55bbc5*/
    }
  }
  else
  {
    v6 = a3; /*0x55bb9c*/
    *a3 = 0; /*0x55bba0*/
  }
  v8 = *v6; /*0x55bbdf*/
  aP2[v8] = 17; /*0x55bbe1*/
  v9 = &aP2[v8 + 1]; /*0x55bbe7*/
  *v9 = 0; /*0x55bbe8*/
  v9[1] = 0; /*0x55bbeb*/
  *v6 += 3; /*0x55bbef*/
  return result; /*0x55bbf2*/
}
} // namespace gamemd

// 0x55C9E0
namespace gamemd {
int sub_55C9E0()
{
  dword_ABCD68 = 0; /*0x55c9e2*/
  dword_ABCD6C = 0; /*0x55c9e7*/
  dword_ABCD70 = 0; /*0x55c9ec*/
  dword_ABCD74 = 0; /*0x55c9f1*/
  return 0; /*0x55c9f6*/
}
} // namespace gamemd

// 0x55CA00
namespace gamemd {
void sub_55CA00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ca0c*/
  dbl_ABCD80 = Math::Sqrt(v0 + v0); /*0x55ca1e*/
}
} // namespace gamemd

// 0x55CA30
namespace gamemd {
void sub_55CA30()
{
  dbl_ABCDF0 = dbl_ABCD80 / 60.0; /*0x55ca3c*/
}
} // namespace gamemd

// 0x55CA50
namespace gamemd {
void sub_55CA50()
{
  dbl_ABCDD0 = 1.0 / dbl_ABCDF0; /*0x55ca5c*/
}
} // namespace gamemd

// 0x55CA70
namespace gamemd {
void sub_55CA70()
{
  dbl_ABCDC8 = 0.0174532925199433 * 45.0; /*0x55ca7c*/
}
} // namespace gamemd

// 0x55CA90
namespace gamemd {
void sub_55CA90()
{
  dbl_ABCD98 = 0.0174532925199433 * 60.0; /*0x55ca9c*/
}
} // namespace gamemd

// 0x55CAB0
namespace gamemd {
void sub_55CAB0()
{
  dbl_ABCD60 = 0.0174532925199433 * 90.0; /*0x55cabc*/
}
} // namespace gamemd

// 0x55CAD0
namespace gamemd {
long long sub_55CAD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCD60 - dbl_ABCD98); /*0x55cae2*/
  result = Math::RoundToInt(v0 * dbl_ABCD80 * 0.5); /*0x55caf6*/
  dword_ABCDF8 = result; /*0x55cafb*/
  return result; /*0x55cb00*/
}
} // namespace gamemd

// 0x55CB10
namespace gamemd {
void sub_55CB10()
{
  dbl_ABCDA0 = Math::ArcTan((double)dword_ABCDF8 * 0.00390625); /*0x55cb27*/
}
} // namespace gamemd

// 0x55CB40
namespace gamemd {
void sub_55CB40()
{
  dbl_ABCDC0 = Math::ArcTan((double)(2 * dword_ABCDF8) / dbl_ABCD80); /*0x55cb62*/
}
} // namespace gamemd

// 0x55CB70
namespace gamemd {
long long sub_55CB70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCDF8) + 0.5); /*0x55cb8b*/
  dword_ABCDEC = result; /*0x55cb90*/
  return result; /*0x55cb96*/
}
} // namespace gamemd

// 0x55CBA0
namespace gamemd {
int sub_55CBA0()
{
  word_ABCD78 = 0; /*0x55cba2*/
  word_ABCD7A = 0; /*0x55cba8*/
  return 0; /*0x55cbae*/
}
} // namespace gamemd

// 0x55CBB0
namespace gamemd {
int sub_55CBB0()
{
  dword_ABCDB0 = 0; /*0x55cbb2*/
  dword_ABCDB4 = 0; /*0x55cbb7*/
  dword_ABCDB8 = 0; /*0x55cbbc*/
  return 0; /*0x55cbc1*/
}
} // namespace gamemd

// 0x55CBD0
namespace gamemd {
int sub_55CBD0()
{
  dword_ABCDE8 = 0; /*0x55cbd5*/
  dword_ABCDE0 = 128; /*0x55cbdf*/
  dword_ABCDE4 = 128; /*0x55cbe4*/
  return 128; /*0x55cbe9*/
}
} // namespace gamemd

// 0x55CC00
namespace gamemd {
void sub_55CC00()
{
  byte_ABCD58 = 1; /*0x55cc00*/
}
} // namespace gamemd

// 0x55CC10
namespace gamemd {
void sub_55CC10()
{
  byte_ABCD58 = 0; /*0x55cc10*/
}
} // namespace gamemd

// 0x55E410
namespace gamemd {
void nullsub_23()
{
  ; /*0x55e410*/
}
} // namespace gamemd

// 0x55F760
namespace gamemd {
int sub_55F760()
{
  dword_ABCE28 = 0; /*0x55f762*/
  dword_ABCE2C = 0; /*0x55f767*/
  dword_ABCE30 = 0; /*0x55f76c*/
  dword_ABCE34 = 0; /*0x55f771*/
  return 0; /*0x55f776*/
}
} // namespace gamemd

// 0x55F780
namespace gamemd {
void sub_55F780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55f78c*/
  dbl_ABCE40 = Math::Sqrt(v0 + v0); /*0x55f79e*/
}
} // namespace gamemd

// 0x55F7B0
namespace gamemd {
void sub_55F7B0()
{
  dbl_ABCF48 = dbl_ABCE40 / 60.0; /*0x55f7bc*/
}
} // namespace gamemd

// 0x55F7D0
namespace gamemd {
void sub_55F7D0()
{
  dbl_ABCF30 = 1.0 / dbl_ABCF48; /*0x55f7dc*/
}
} // namespace gamemd

// 0x55F7F0
namespace gamemd {
void sub_55F7F0()
{
  dbl_ABCF28 = 0.0174532925199433 * 45.0; /*0x55f7fc*/
}
} // namespace gamemd

// 0x55F810
namespace gamemd {
void sub_55F810()
{
  dbl_ABCE48 = 0.0174532925199433 * 60.0; /*0x55f81c*/
}
} // namespace gamemd

// 0x55F830
namespace gamemd {
void sub_55F830()
{
  dbl_ABCE20 = 0.0174532925199433 * 90.0; /*0x55f83c*/
}
} // namespace gamemd

// 0x55F850
namespace gamemd {
long long sub_55F850()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCE20 - dbl_ABCE48); /*0x55f862*/
  result = Math::RoundToInt(v0 * dbl_ABCE40 * 0.5); /*0x55f876*/
  dword_ABCF50 = result; /*0x55f87b*/
  return result; /*0x55f880*/
}
} // namespace gamemd

// 0x55F890
namespace gamemd {
void sub_55F890()
{
  dbl_ABCE50 = Math::ArcTan((double)dword_ABCF50 * 0.00390625); /*0x55f8a7*/
}
} // namespace gamemd

// 0x55F8C0
namespace gamemd {
void sub_55F8C0()
{
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / dbl_ABCE40); /*0x55f8e2*/
}
} // namespace gamemd

// 0x55F8F0
namespace gamemd {
long long sub_55F8F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCF50) + 0.5); /*0x55f90b*/
  dword_ABCF44 = result; /*0x55f910*/
  return result; /*0x55f916*/
}
} // namespace gamemd

// 0x55F920
namespace gamemd {
int sub_55F920()
{
  word_ABCE38 = 0; /*0x55f922*/
  word_ABCE3A = 0; /*0x55f928*/
  return 0; /*0x55f92e*/
}
} // namespace gamemd

// 0x55F930
namespace gamemd {
int sub_55F930()
{
  dword_ABCE58 = 0; /*0x55f932*/
  dword_ABCE5C = 0; /*0x55f937*/
  dword_ABCE60 = 0; /*0x55f93c*/
  return 0; /*0x55f941*/
}
} // namespace gamemd

// 0x55F950
namespace gamemd {
int sub_55F950()
{
  dword_ABCF40 = 0; /*0x55f955*/
  dword_ABCF38 = 128; /*0x55f95f*/
  dword_ABCF3C = 128; /*0x55f964*/
  return 128; /*0x55f969*/
}
} // namespace gamemd

// 0x55F980
namespace gamemd {
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x55f999*/
  if ( !result ) /*0x55f9a0*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x55f9a9*/
    if ( a2 == 273 ) /*0x55f9b5*/
    {
      if ( (unsigned __int16)a3 == 1473 ) /*0x55fa08*/
      {
        *WindowLongA = 1; /*0x55fa20*/
      }
      else if ( (unsigned __int16)a3 == 1738 ) /*0x55fa10*/
      {
        *WindowLongA = 2; /*0x55fa13*/
        return 0; /*0x55fa1d*/
      }
    }
    else if ( a2 == 1175 ) /*0x55f9bd*/
    {
      StringCSF = GetStringCSF(aTxtAboutToTryM, 0, g_Str_File_MainOpt_cpp, 162); /*0x55f9db*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x55f9dd*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x55f9ec*/
      return 0; /*0x55f9f7*/
    }
    return 0; /*0x55fa26*/
  }
  return result; /*0x55f9f2*/
}
} // namespace gamemd
