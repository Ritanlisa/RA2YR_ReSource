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
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_550080(ObjectClass **this)
{
  ObjectClass *v5; // edx
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  int v2 = (int)this->vtable3; /*0x550086*/
  int v3 = (int)this->vtable2; /*0x550089*/
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
  int v4 = (int)this->abstractFlags; /*0x5500a3*/
  if ( v4 ) /*0x5500a8*/
  {
    v5 = (ObjectClass *)((char *)*this + (_DWORD)this->nextArrayIndex); /*0x5500af*/
    this->vtable2 = 1; /*0x5500b1*/
    *this = v5; /*0x5500b5*/
    int v6 = v8[2]; /*0x5500bd*/
    this->vtable3 = (ObjectClass *)g_CurrentFrame; /*0x5500c1*/
    this->vtable4 = (ObjectClass *)v6; /*0x5500c4*/
    this->vtable2 = (ObjectClass *)v4; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
LABEL_7:
  this->vtable2 = 0; /*0x5500cc*/
LABEL_8:
  if ( (unsigned char)this->customSound_controller ) /*0x5500d0*/
    this->q144 = this->q144 == 0; /*0x5500df*/
  if ( (int)*this >= (int)this->q04C && this ) /*0x5500ed*/
  {
    v8[0] = this; /*0x5500fe*/
    int v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x550102*/
    if ( v7 != -1 && v7 < g_TimerPool && v7 < --g_TimerPool ) /*0x55011d*/
    {
      do /*0x550135*/
      {
        ++v7; /*0x550125*/
        *((_DWORD *)dword_ABC87C + v7 - 1) = *((_DWORD *)dword_ABC87C + v7); /*0x550129*/
      }
      while ( v7 < g_TimerPool ); /*0x550135*/
    }
    __3_YAXPAX_Z(this); /*0x550138*/
  }
}
}
} // namespace game
} // namespace ra2

// 0x550150
namespace gamemd {
void sub_550150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_550150()
{

  int v0 = g_TimerPool - 1; /*0x550159*/
  if ( g_TimerPool - 1 >= 0 ) /*0x55015e*/
  {
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF
    int v1 = v8[2]; /*0x550165*/
    do /*0x550170*/
    {
      int * v2 = (int *)*((_DWORD *)dword_ABC87C + v0); /*0x550170*/
      int v3 = v2[2]; /*0x550173*/
      int v4 = v2[4]; /*0x550176*/
      if ( v3 != -1 ) /*0x55017c*/
      {
        if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v4 -= (int)g_CurrentFrame - v3; /*0x55018a*/
      }
      if ( v4 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
LABEL_7:
      int v5 = v2[5]; /*0x550190*/
      if ( !v5 ) /*0x550195*/
      {
LABEL_9:
        *((_BYTE *)v2 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      int v6 = v2[6] + *v2; /*0x55019c*/
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
        int v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x5501ea*/
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
} // namespace gamemd

// 0x5509F0
namespace gamemd {
int PrepareTacticalClassCellTransform(BuildingTypeClass * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PrepareTacticalClassCellTransform(BuildingTypeClass *a1)
{
  BuildingTypeClass *v1; // ebx
  ObjectClass *v2; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  int referenceCount; // eax
  Tactical *v16; // edi
  CoordStruct *v17; // eax
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
  CoordStruct *v38; // esi
  CoordStruct *v39; // edi
  float aP2; // [esp+38h] [ebp-158h]
  float aP2a; // [esp+38h] [ebp-158h]
  float aP2b; // [esp+38h] [ebp-158h]
  float aP2c; // [esp+38h] [ebp-158h]
  float aP2d; // [esp+38h] [ebp-158h]
  float aP2e; // [esp+38h] [ebp-158h]
  __int128 aP0; // [esp+3Ch] [ebp-154h]
  Tactical *aP0a; // [esp+3Ch] [ebp-154h]
  Tactical *v48; // [esp+3Ch] [ebp-154h]
  Tactical *v49; // [esp+3Ch] [ebp-154h]
  Tactical *v50; // [esp+3Ch] [ebp-154h]
  Tactical *v51; // [esp+3Ch] [ebp-154h]
  Tactical *v52; // [esp+3Ch] [ebp-154h]
  char v54; // [esp+5Fh] [ebp-131h]
  __int16 v55; // [esp+60h] [ebp-130h] BYREF
  unsigned __int8 v56; // [esp+62h] [ebp-12Eh]
  unsigned __int8 v57[8]; // [esp+68h] [ebp-128h] BYREF
  ObjectClass *aP1; // [esp+70h] [ebp-120h]
  Tactical *v59; // [esp+74h] [ebp-11Ch]
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
  unsigned __int8 a2[4]; // [esp+ACh] [ebp-E4h] BYREF
  CoordStruct *v72[2]; // [esp+B0h] [ebp-E0h]
  CoordStruct *aP4[2]; // [esp+B8h] [ebp-D8h]
  __int64 v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  CCINIClass v77; // [esp+D0h] [ebp-C0h] BYREF
  CCINIClass v78; // [esp+130h] [ebp-60h] BYREF
  v1 = a1; /*0x5509fd*/
  v72[0] = (CoordStruct *)a1; /*0x550a03*/
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
  v2 = *(ObjectClass **)v1->BarrelVoxel; /*0x550b2a*/
  v59 = *(Tactical **)&v1->BarrelVoxel[12]; /*0x550b33*/
  aP1 = v2; /*0x550b37*/
  *((double *)&aP0 + 1) = (double)(int)v59 - (double)(int)v2; /*0x550b49*/
  *(double *)&aP0 = (double)*(int *)&v1->BarrelVoxel[4] - (double)*(int *)&v1->BarrelVoxel[16]; /*0x550b53*/
  double v3 = Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x550b56*/
  LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (Tactical *)(((((unsigned int)v59 >> 12) + 1) >> 1) & 7); /*0x550b8d*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], v1->BarrelVoxel, (IUnknown *)&v75); /*0x550b91*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], &v1->BarrelVoxel[12], (IUnknown *)&v74); /*0x550ba2*/
  int v4 = *(_DWORD *)&v1->zero_3C - ZCoordToScreenY((IUnknown *)*(_DWORD *)&v1->BarrelVoxel[8]) - 2; /*0x550bb7*/
  int v5 = -2 - ZCoordToScreenY((IUnknown *)*(_DWORD *)&v1->BarrelVoxel[20]); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( dword_ABCD44 < (CampaignScore *)PingPongBuffer::GetWriteOffset() /*0x550be3*/
    || (v54 = 1, !*(_DWORD *)&HouseClass_Player[44588]) )
  {
    v54 = 0; /*0x550be5*/
  }
  char v6 = v1->UINameLabel[21]; /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    int v7 = *(_DWORD *)v1->vtable0; /*0x550bfc*/
    double v8 = *(float *)&v1->UINameLabel[23] - *(float *)&v1->UINameLabel[27]; /*0x550c01*/
    v65 = *(float *)&v1->UINameLabel[15]; /*0x550c04*/
    aP1 = (ObjectClass *)(LODWORD(v65) - v7); /*0x550c0a*/
    v65 = v8 * (double)(LODWORD(v65) - v7) / (double)SLODWORD(v65) + *(float *)&v1->UINameLabel[27]; /*0x550c19*/
  }
  aP1 = (ObjectClass *)Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  char v9 = BYTE1(v1->NeedsSaveOrLink); /*0x550c30*/
  v57[0] = 0; /*0x550c35*/
  v57[1] = 0; /*0x550c3a*/
  v57[2] = 0; /*0x550c3f*/
  a2[0] = -1; /*0x550c44*/
  a2[1] = -1; /*0x550c49*/
  a2[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    unsigned int v10 = 2 * (unsigned __int8)v1->UINameLabel[6]; /*0x550c64*/
    v11 = 2 * (unsigned __int8)v1->UINameLabel[4]; /*0x550c66*/
    v12 = 2 * (unsigned __int8)v1->UINameLabel[5]; /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      LOBYTE(v11) = -1; /*0x550c8b*/
    LOBYTE(v60) = v11; /*0x550c90*/
    HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v55 = v60; /*0x550ca1*/
    LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(_WORD *)&v1->UINameLabel[4]; /*0x550cb4*/
    v13 = v1->UINameLabel[5]; /*0x550cb9*/
    v61 = v1->UINameLabel[6]; /*0x550cbf*/
    v14 = v1->UINameLabel[6]; /*0x550cc3*/
    LOBYTE(v55) = (unsigned __int8)v60 >> 1; /*0x550cca*/
    HIBYTE(v55) = v13 >> 1; /*0x550cce*/
    LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = v75; /*0x550cdf*/
  v64 = v76; /*0x550ce3*/
  v68 = v75; /*0x550ce7*/
  v69 = v76; /*0x550cef*/
  v67 = v74; /*0x550cf7*/
  v62 = v74; /*0x550cff*/
  referenceCount = v1->referenceCount; /*0x550d03*/
  v56 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( referenceCount >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = (CoordStruct *)((unsigned __int8)v59 & 1); /*0x550d25*/
    for ( aP4[0] = v17; ; v17 = aP4[0] )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = 4 * (_DWORD)v16; /*0x550d3f*/
        v19 = dword_ABC7F8[4 * (_DWORD)v16]; /*0x550d42*/
        v20 = dword_ABC7FC[4 * (_DWORD)v16]; /*0x550d48*/
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = dword_ABC800[4 * (_DWORD)v16]; /*0x550d5e*/
        v22 = dword_ABC804[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        LODWORD(v62) = v19 + v62; /*0x550d84*/
        v23 = v20 + HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (BuildingTypeClass *)v72[0]; /*0x550d9e*/
        LODWORD(v67) = v24; /*0x550da2*/
        HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = dword_ABC7F8[4 * (_DWORD)v16]; /*0x550dbc*/
        v26 = dword_ABC804[4 * (_DWORD)v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        LODWORD(v62) = v25 + v62; /*0x550de4*/
        HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = dword_ABC7FC[4 * (_DWORD)v16]; /*0x550df5*/
        v28 = dword_ABC800[4 * (_DWORD)v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        HIDWORD(v62) += v27; /*0x550e1d*/
        LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !stru_89E138[11448] )
      {
        if ( v54 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374[44960] /*0x550e61*/
                                                                                               + 64))(
            *(_DWORD *)&stru_87C374[44960],
            &stru_87C374[44076],
            &v68,
            &v62,
            &v55,
            COERCE_FLOAT(LODWORD(v65)),
            v4,
            v66);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374[44960] /*0x550e87*/
                                                                                               + 64))(
            *(_DWORD *)&stru_87C374[44960],
            &stru_87C374[44076],
            &v63,
            &v67,
            &v55,
            COERCE_FLOAT(LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57[2] = v11; /*0x550e98*/
          *(_WORD *)v57 = v55; /*0x550ea0*/
          Color::Lerp(v57, aP1, a2); /*0x550eab*/
          v30 = (v57[0] >> stru_89E138[11420] << stru_89E138[11416]) /*0x550f09*/
              | (v57[1] >> stru_89E138[11436] << stru_89E138[11432])
              | (v57[2] >> stru_89E138[11428] << stru_89E138[11424]);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374[44960] /*0x550f21*/
                                                                                          + 52))(
            *(_DWORD *)&stru_87C374[44960],
            &stru_87C374[44076],
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374[44960] /*0x550f44*/
                                                                                          + 52))(
            *(_DWORD *)&stru_87C374[44960],
            &stru_87C374[44076],
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( BYTE1(v1->NeedsSaveOrLink) && v70 == 1 )
        {
          v55 = *(_WORD *)&v1->UINameLabel[4]; /*0x550f5c*/
          LOBYTE(v11) = v1->UINameLabel[6]; /*0x550f61*/
          v56 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v56 >> 1; /*0x550f8f*/
          v31 = v54 != 0 ? 8 : 64;
          if ( (unsigned __int8)v55 >> 1 < v31 && HIBYTE(v55) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (BuildingTypeClass *)v72[0]; /*0x550fa9*/
          v16 = v59; /*0x550fad*/
          LOBYTE(v55) = (unsigned __int8)v55 >> 1; /*0x550fb1*/
          HIBYTE(v55) >>= 1; /*0x550fb5*/
          v56 >>= 1; /*0x550fb9*/
        }
      }
      v32 = v1->referenceCount; /*0x550fc1*/
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
    }
  }
  if ( stru_89E138[11448] /*0x550ff9*/
    && *(_DWORD *)&stru_89E138[11480]
    && *(_DWORD *)&stru_87C374[45776] )
  {
    v33 = *(_WORD *)(*(_DWORD *)&stru_87C374[45776] + 36); /*0x550fff*/
    aP4[1] = 0; /*0x551003*/
    v34 = *(_WORD *)(*(_DWORD *)&stru_87C374[45776] + 4) + v33; /*0x551007*/
    *(_QWORD *)aP4 = (unsigned __int16)(v4 + v34 - v76 - *(_WORD *)&stru_87C374[44080]); /*0x551036*/
    *(_QWORD *)v72 = (unsigned __int16)(v5 + v34 - WORD2(v74) - *(_WORD *)&stru_87C374[44080]); /*0x551053*/
    *(float *)aP4 = (double)*(__int64 *)aP4 * 0.000015259022; /*0x551064*/
    v35 = ((int)aP1 * v61) >> 8; /*0x551086*/
    v36 = ((int)aP1 * HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = ((int)aP1 * (unsigned __int8)v60) >> 8; /*0x55108c*/
    *(float *)v72 = (double)*(__int64 *)v72 * 0.000015259022; /*0x55108f*/
    ColorStruct::SetRGB( /*0x55109d*/
      &v77,
      (unsigned __int16)((_WORD)aP1 * (unsigned __int8)v60) >> 8,
      (unsigned __int16)((_WORD)aP1 * HIBYTE(v60)) >> 8,
      (unsigned __int16)((_WORD)aP1 * v61) >> 8);
    ColorStruct::SetRGB(&v78, v37, v36, v35); /*0x5510ac*/
    v38 = aP4[0]; /*0x5510b1*/
    *(float *)&aP0a = (float)v69; /*0x5510bf*/
    aP2 = (float)v68; /*0x5510ce*/
    Tactical::SetCellTransform(v77[0], 0, (CoordStruct *)LODWORD(aP2), (int)aP0a, aP4[0], 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    aP2a = (float)v63; /*0x5510f4*/
    Tactical::SetCellTransform(v77[0], 1, (CoordStruct *)LODWORD(aP2a), (int)v48, v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72[0]; /*0x5510fe*/
    *(float *)&v49 = (float)SHIDWORD(v62); /*0x55110f*/
    aP2b = (float)(int)v62; /*0x55111e*/
    Tactical::SetCellTransform(v77[0], 2, (CoordStruct *)LODWORD(aP2b), (int)v49, v72[0], 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    aP2c = (float)v63; /*0x551144*/
    Tactical::SetCellTransform(v78[0], 0, (CoordStruct *)LODWORD(aP2c), (int)v50, v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)SHIDWORD(v67); /*0x55115e*/
    aP2d = (float)(int)v67; /*0x55116d*/
    Tactical::SetCellTransform(v78[0], 1, (CoordStruct *)LODWORD(aP2d), (int)v51, v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)SHIDWORD(v62); /*0x551184*/
    aP2e = (float)(int)v62; /*0x551193*/
    Tactical::SetCellTransform(v78[0], 2, (CoordStruct *)LODWORD(aP2e), (int)v52, v39, 1065353216, 0); /*0x551198*/
    StructTable::Append(*(_DWORD **)&stru_89E138[11480], &v77); /*0x5511ab*/
    return StructTable::Append(*(_DWORD **)&stru_89E138[11480], &v78); /*0x5511be*/
  }
  else if ( v54 ) /*0x5511d4*/
  {
    return (*(int (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374[44960] /*0x5511ff*/
                                                                                               + 64))(
             *(_DWORD *)&stru_87C374[44960],
             &stru_87C374[44076],
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    *(_WORD *)v57 = v60; /*0x551216*/
    v57[2] = v61; /*0x551223*/
    Color::Lerp(v57, aP1, a2); /*0x55122d*/
    return (*(int (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374[44960] /*0x5512a7*/
                                                                                          + 52))(
             *(_DWORD *)&stru_87C374[44960],
             &stru_87C374[44076],
             &v75,
             &v74,
             (v57[0] >> stru_89E138[11420] << stru_89E138[11416])
           | (v57[1] >> stru_89E138[11436] << stru_89E138[11432])
           | (v57[2] >> stru_89E138[11428] << stru_89E138[11424]),
             v4,
             v5,
             0);
  }
}
}
} // namespace gamemd

// 0x551C60
namespace gamemd {
unsigned int LCW_BitStreamIO(unsigned char * a1, unsigned int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __fastcall LCW_BitStreamIO(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned __int8 v6; // al
  unsigned __int8 v11; // al
  unsigned __int8 v36; // [esp+10h] [ebp-18h]
  unsigned __int8 *v38; // [esp+20h] [ebp-8h]

  unsigned int v3 = a2; /*0x551c65*/
  unsigned int v5 = a2; /*0x551c6f*/
  while ( 1 ) /*0x551cb9*/
  {
    while ( 1 ) /*0x551c80*/
    {
      while ( 1 ) /*0x551c77*/
      {
        v6 = *a1++; /*0x551c77*/
        if ( (v6 & 0x80u) != 0 ) /*0x551c80*/
          break; /*0x551c80*/
        _BYTE * v7 = (_BYTE *)(v5 - ((v6 & 0xF) << 8) - *a1++); /*0x551ca1*/
        if ( v6 >> 4 != -3 ) /*0x551ca9*/
        {
          int v8 = (v6 >> 4) + 3; /*0x551cab*/
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
        int v12 = *a1 + (a1[1] << 8); /*0x551cf6*/
        a1 += 3; /*0x551d09*/
        v38 = a1; /*0x551d11*/
        int v13 = 16843009 * v11; /*0x551d1d*/
        unsigned int v14 = (v5 & 3) - 4 + v12; /*0x551d2a*/
        if ( v5 < v5 - (v5 & 3) + 4 ) /*0x551d32*/
        {
          LOBYTE(a1) = v11; /*0x551d34*/
          BYTE1(a1) = v11; /*0x551d38*/
          unsigned int v15 = 4 - (v5 & 3); /*0x551d40*/
          int v16 = (_DWORD)a1 << 16; /*0x551d42*/
          LOWORD(v16) = (_WORD)a1; /*0x551d47*/
          memset32((void *)v5, v16, v15 >> 2); /*0x551d4d*/
          a1 = v38; /*0x551d51*/
          memset((void *)(v5 + 4 * (v15 >> 2)), v16, v15 & 3); /*0x551d58*/
          v5 += v15; /*0x551d60*/
          v11 = v36; /*0x551d62*/
        }
        _DWORD * v17 = (_DWORD *)v5; /*0x551d68*/
  int v18; // edx
        HIWORD(v18) = HIWORD(v14); /*0x551d6a*/
        for ( v5 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v5; v17 += 2 ) /*0x551d71*/
        {
          *v17 = v13; /*0x551d73*/
          v17[1] = v13; /*0x551d75*/
        }
        unsigned int v19 = v5 + (v14 & 3); /*0x551d82*/
        if ( v5 < v19 ) /*0x551d86*/
        {
          LOBYTE(v18) = v11; /*0x551d8c*/
          BYTE1(v18) = v11; /*0x551d90*/
          int v20 = v18 << 16; /*0x551d98*/
          LOWORD(v20) = v18; /*0x551da1*/
          unsigned int v21 = (v19 - v5) >> 2; /*0x551da4*/
          memset32((void *)v5, v20, v21); /*0x551da7*/
          memset((void *)(v5 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v5) & 3); /*0x551dae*/
          v5 = v19; /*0x551db2*/
        }
        v3 = a2; /*0x551c73*/
      }
      else if ( v6 == 0xFF ) /*0x551dbb*/
      {
        int v22 = a1[1]; /*0x551dc1*/
        int v23 = *a1; /*0x551dc4*/
        int v24 = a1[3]; /*0x551dca*/
        a1 += 4; /*0x551dcd*/
        unsigned int v25 = (v24 << 8) + v3; /*0x551ddd*/
        int v26 = v23 + (v22 << 8); /*0x551ddf*/
        _BYTE * v27 = (_BYTE *)(v25 + *(a1 - 2)); /*0x551de1*/
        if ( v26 ) /*0x551de6*/
        {
          int v28 = v26; /*0x551dec*/
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
        int v29 = *a1; /*0x551e0b*/
        unsigned int v30 = (a1[1] << 8) + v3; /*0x551e13*/
        a1 += 2; /*0x551e15*/
        _BYTE * v31 = (_BYTE *)(v30 + v29); /*0x551e18*/
        int v32 = (v6 & 0x3F) + 3; /*0x551e1a*/
        int v33 = (v6 & 0x3F) + 2; /*0x551e1c*/
        if ( v32 ) /*0x551e1f*/
        {
          int v34 = v33 + 1; /*0x551e25*/
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
    int v9 = v6 & 0x3F; /*0x551cc6*/
    if ( v9 ) /*0x551ccb*/
    {
      int v10 = v9; /*0x551ccd*/
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
} // namespace gamemd

// 0x551E50
namespace gamemd {
int DecompressCoreLCW(Pipe * aP0, unsigned char * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DecompressCoreLCW(Pipe *aP0, _BYTE *a1, int a3)
{
  Pipe *v5; // edi
  Pipe *v7; // ebx
  __int16 v11; // cx
  Pipe *v15; // ebx
  __int16 v21; // ax
  char * v25 = 0; /*0x551e89*/
  char * v28 = &aP0->__pad_0[a3]; /*0x551eac*/
  int v30 = 1; /*0x551eaf*/
  _BYTE * v27 = a1; /*0x551ebc*/
  *a1 = -127; /*0x551ec3*/
  char * v3 = &aP0->__pad_0[1]; /*0x551ec4*/
  a1[1] = aP0->__pad_0[0]; /*0x551ec5*/
  _BYTE * v4 = a1 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
  bool v12; // zf
  int v6; // eax
    _BYTE * v31 = v4; /*0x551ec6*/
    v5 = aP0; /*0x551ec9*/
    unsigned int v29 = 1; /*0x551ecc*/
LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = (unsigned __int8)*v3; /*0x551ed5*/
      if ( (_BYTE)v6 != v3[64] ) /*0x551eda*/
        break; /*0x551eda*/
      v7 = v5; /*0x551edc*/
      char * v8 = v3; /*0x551ede*/
      int v9 = v28 - v3; /*0x551ee3*/
      do /*0x551ee5*/
      {
        if ( !v9 ) /*0x551ee5*/
          break; /*0x551ee5*/
        v12 = *v8++ == (char)v6; /*0x551ee5*/
        --v9; /*0x551ee5*/
      }
      while ( v12 ); /*0x551ee5*/
      char * v10 = v8 - 1; /*0x551ee7*/
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
      int v13 = v3 - (char *)v5; /*0x551f13*/
      v12 = v3 == (char *)v5; /*0x551f13*/
      if ( v3 == (char *)v5 ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = v5->__pad_0[0] == (unsigned __int8)v6; /*0x551f17*/
        v5 = (Pipe *)((char *)v5 + 1); /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5->__pad_0[v29 - 2] ) /*0x551f26*/
      {
        char * v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        _BYTE * v16 = (char *)&v5[-1].Pipe_field_0x0C + 3; /*0x551f2c*/
        int v18 = v28 - v3; /*0x551f30*/
        bool v17 = v28 == v3; /*0x551f30*/
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
        _BYTE * v19 = (_BYTE *)(v16 - (_BYTE *)v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = (char *)&v15[-1].Pipe_field_0x0C + 3; /*0x551f48*/
        }
        goto LABEL_3; /*0x551f4b*/
      }
    }
    _BYTE * v20 = v31; /*0x551f50*/
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
          char v22 = *v3++; /*0x551f9f*/
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
} // namespace gamemd

// 0x552640
namespace gamemd {
unsigned int sub_552640(unsigned char * a1, unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int sub_552640(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v5; // al
  unsigned __int8 v10; // al
  unsigned int v3 = a2; /*0x552649*/
  unsigned int v4 = a2; /*0x55264f*/
  while ( 1 ) /*0x552699*/
  {
    while ( 1 ) /*0x552660*/
    {
      while ( 1 ) /*0x552657*/
      {
        v5 = *a1++; /*0x552657*/
        if ( (v5 & 0x80u) != 0 ) /*0x552660*/
          break; /*0x552660*/
        _BYTE * v6 = (_BYTE *)(v4 - ((v5 & 0xF) << 8) - *a1++); /*0x552681*/
        if ( v5 >> 4 != -3 ) /*0x552689*/
        {
          int v7 = (v5 >> 4) + 3; /*0x55268b*/
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
        int v11 = *a1 + (a1[1] << 8); /*0x5526d6*/
        a1 += 3; /*0x5526e9*/
        int v12 = 16843009 * v10; /*0x5526fd*/
        int v13 = (v4 & 3) - 4; /*0x552708*/
        int v14 = v13 + v11; /*0x55270a*/
        if ( v4 < v4 - (v4 & 3) + 4 ) /*0x552712*/
        {
          LOBYTE(v13) = v10; /*0x552714*/
          BYTE1(v13) = v10; /*0x552718*/
          int v15 = v13 << 16; /*0x552722*/
          LOWORD(v15) = v13; /*0x552727*/
          unsigned int v16 = (4 - (v4 & 3)) >> 2; /*0x55272a*/
          memset32((void *)v4, v15, v16); /*0x55272d*/
          memset((void *)(v4 + 4 * v16), v13, (4 - (v4 & 3)) & 3); /*0x552734*/
          v4 += 4 - (v4 & 3); /*0x552740*/
          v10 = v13; /*0x552742*/
        }
        _DWORD * v17 = (_DWORD *)v4; /*0x552746*/
  int v18; // ebx
        HIWORD(v18) = HIWORD(v14); /*0x552748*/
        for ( v4 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v4; v17 += 2 ) /*0x55274f*/
        {
          *v17 = v12; /*0x552751*/
          v17[1] = v12; /*0x552753*/
        }
        unsigned int v19 = v4 + (v14 & 3); /*0x552760*/
        if ( v4 < v19 ) /*0x552764*/
        {
          LOBYTE(v18) = v10; /*0x55276a*/
          BYTE1(v18) = v10; /*0x55276e*/
          int v20 = v18 << 16; /*0x552776*/
          LOWORD(v20) = v18; /*0x55277f*/
          unsigned int v21 = (v19 - v4) >> 2; /*0x552782*/
          memset32((void *)v4, v20, v21); /*0x552785*/
          memset((void *)(v4 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v4) & 3); /*0x55278c*/
          v4 = v19; /*0x552790*/
        }
        v3 = a2; /*0x552653*/
      }
      else if ( v5 == 0xFF ) /*0x552799*/
      {
        int v22 = *a1 + (a1[1] << 8); /*0x5527a7*/
        int v23 = a1[3]; /*0x5527b0*/
        int v24 = a1[2]; /*0x5527b4*/
        a1 += 4; /*0x5527b7*/
        unsigned int v25 = (v23 << 8) + v3; /*0x5527bd*/
        int v26 = v22; /*0x5527bf*/
        _BYTE * v27 = (_BYTE *)(v25 + v24); /*0x5527c1*/
        int v28 = v22 - 1; /*0x5527c3*/
        if ( v26 ) /*0x5527c6*/
        {
          int v29 = v28 + 1; /*0x5527cc*/
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
        int v30 = *a1; /*0x5527eb*/
        unsigned int v31 = (a1[1] << 8) + v3; /*0x5527f3*/
        a1 += 2; /*0x5527f5*/
        _BYTE * v32 = (_BYTE *)(v31 + v30); /*0x5527f8*/
        int v33 = (v5 & 0x3F) + 3; /*0x5527fa*/
        int v34 = (v5 & 0x3F) + 2; /*0x5527fc*/
        if ( v33 ) /*0x5527ff*/
        {
          int v35 = v34 + 1; /*0x552805*/
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
    int v8 = v5 & 0x3F; /*0x5526a6*/
    if ( v8 ) /*0x5526ab*/
    {
      int v9 = v8; /*0x5526ad*/
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
} // namespace gamemd

// 0x554400
namespace gamemd {
char E4Recv_554400::sub_554400(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_554400(_DWORD *this, int a2, int a3)
{

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  int v3 = *(this + 24); /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)g_DSurface_Hidden + 4))(g_DSurface_Hidden, v3, 0, 1); /*0x554420*/
  return 1; /*0x554425*/
}
}
} // namespace gamemd

// 0x554D50
namespace gamemd {
void UpdateDeferredLightSurfaces(int a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall UpdateDeferredLightSurfaces(int a1, char a2)
{
  int i; // edi
  __int16 v19; // [esp-10h] [ebp-44h]
  __int16 v20; // [esp-Ch] [ebp-40h]
  __int16 v21; // [esp-8h] [ebp-3Ch]
  __int16 v22; // [esp-4h] [ebp-38h]
  double v28; // [esp+20h] [ebp-14h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  double HighPrecisionTimer; // [esp+2Ch] [ebp-8h]

  HighPrecisionTimer = Timer::GetHighPrecision(&DataGlobal_884D88); /*0x554d6e*/
  ++dword_ABCA74; /*0x554d73*/
  if ( dword_ABCA50 && !byte_ABCA84 ) /*0x554d8e*/
  {
    int v4 = dword_ABCA7C; /*0x554d94*/
    if ( dword_ABCA7C > 0 /*0x554dac*/
      || (dword_ABCA80 = dword_ABCA50, v4 = dword_ABCA50 - 1, dword_ABCA7C = dword_ABCA50 - 1, dword_ABCA50 - 1 >= 0) )
    {
      do /*0x554ed0*/
      {
        if ( !a2 && (v4 & 0xF) == 0xF ) /*0x554dbe*/
        {
          double v5 = Timer::GetHighPrecision(&DataGlobal_884D88); /*0x554dc5*/
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
          void * v6 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)(*((_DWORD *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
  int v24; // [esp+10h] [ebp-24h] BYREF
  int v25; // [esp+14h] [ebp-20h] BYREF
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
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
  double v7 = Timer::GetHighPrecision(&DataGlobal_884D88); /*0x554ef3*/
  double v8 = v28 - (v7 - HighPrecisionTimer); /*0x554f03*/
  if ( byte_ABCA84 ) /*0x554f07*/
  {
    if ( a2 || (v29 = a1 - 1, v8 >= (double)(a1 - 1)) ) /*0x554f23*/
    {
      for ( i = 0; i < dword_ABCA50; ++i ) /*0x554f36*/
      {
        void * v10 = (void *)*((_DWORD *)dword_ABCA44 + i); /*0x554f42*/
        v22 = *((_WORD *)v10 + 7); /*0x554f53*/
        v21 = *((_WORD *)v10 + 6); /*0x554f56*/
        v20 = *((_WORD *)v10 + 5); /*0x554f5e*/
        v19 = *((_WORD *)v10 + 4); /*0x554f61*/
        int v18 = *((_DWORD *)v10 + 1); /*0x554f62*/
        int v17 = *(_DWORD *)v10; /*0x554f66*/
        void * v11 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)v10 + 8); /*0x554f6d*/
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
      MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x554fdb*/
    }
  }
  double v12 = Timer::GetHighPrecision(&DataGlobal_884D88); /*0x554fe9*/
  double v13 = v28 - (v12 - HighPrecisionTimer); /*0x554ff5*/
  if ( v13 > 0.0 && dword_ABCA74 > (unsigned int)(dword_ABCA78 + dword_829AE8) ) /*0x55501a*/
  {
    double v14 = v13 * 0.5; /*0x55501c*/
    if ( v14 >= 1.0 ) /*0x55502d*/
      v14 = 1.0; /*0x555031*/
    __int64 v15 = Math::RoundToInt(v14); /*0x555037*/
    BYTE4(v15) = 0; /*0x55503e*/
    int v16 = -((unsigned __int8)ReturnFalse2(v15, HIDWORD(v15)) != 0); /*0x55504d*/
    dword_ABCA78 = dword_ABCA74; /*0x55504f*/
    LOBYTE(v16) = v16 & 0xCF; /*0x555055*/
    dword_829AE8 = v16 + 50; /*0x55505a*/
  }
}
}
} // namespace gamemd

// 0x557380
namespace gamemd {
int E4Recv_557380::sub_557380(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_557380(int this, int a2)
{

  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x55738b*/
  this->M44 = *(_DWORD *)(a2 + 44); /*0x557396*/
  this->M48 = *(_DWORD *)(a2 + 48); /*0x55739f*/
  this->M56 = 0; /*0x5573a7*/
  this->M60 = 0; /*0x5573aa*/
  *(_BYTE *)(this + 64) = 1; /*0x5573ad*/
  *(_BYTE *)(this + 65) = 0; /*0x5573b1*/
  this->M52 = &vt_VectorClass_unsigned_short_const; /*0x5573b4*/
  sub_4B5830((_DWORD *)(this + 52), (_DWORD *)(a2 + 52)); /*0x5573ba*/
  this->M68 = *(_DWORD *)(a2 + 68); /*0x5573c2*/
  this->M72 = *(_DWORD *)(a2 + 72); /*0x5573c8*/
  this->M52 = &vt_DynamicVectorClass_unsigned_short_const; /*0x5573cb*/
  this->M76 = *(_DWORD *)(a2 + 76); /*0x5573d7*/
  this->M80 = *(_DWORD *)(a2 + 80); /*0x5573dd*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x5573e9*/
  ControlClass::CtorFromData((_DWORD *)(this + 88), a2 + 88); /*0x5573ec*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x5573fa*/
  *(_BYTE *)(this + 133) = *(_BYTE *)(a2 + 133); /*0x557400*/
  this->M136 = *(_DWORD *)(a2 + 136); /*0x557406*/
  this->M88 = &vt_ToggleClass; /*0x557409*/
  *(_BYTE *)(this + 140) = *(_BYTE *)(a2 + 140); /*0x557413*/
  this->M144 = *(_DWORD *)(a2 + 144); /*0x557419*/
  this->M148 = *(_DWORD *)(a2 + 148); /*0x55741f*/
  *(_BYTE *)(this + 152) = *(_BYTE *)(a2 + 152); /*0x557425*/
  this->M156 = *(_DWORD *)(a2 + 156); /*0x55742b*/
  this->M160 = *(_DWORD *)(a2 + 160); /*0x557431*/
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164); /*0x557437*/
  this->M168 = *(_DWORD *)(a2 + 168); /*0x55743d*/
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172); /*0x557443*/
  *(_BYTE *)(this + 173) = *(_BYTE *)(a2 + 173); /*0x557449*/
  this->M176 = *(_DWORD *)(a2 + 176); /*0x55744f*/
  *(_BYTE *)(this + 180) = *(_BYTE *)(a2 + 180); /*0x55745b*/
  this->M88 = &vt_ShapeButtonClass; /*0x557460*/
  ControlClass::CtorFromData((_DWORD *)(this + 184), a2 + 184); /*0x557466*/
  *(_BYTE *)(this + 228) = *(_BYTE *)(a2 + 228); /*0x55746e*/
  *(_BYTE *)(this + 229) = *(_BYTE *)(a2 + 229); /*0x557474*/
  this->M232 = *(_DWORD *)(a2 + 232); /*0x55747a*/
  this->M184 = &vt_ToggleClass; /*0x55747d*/
  *(_BYTE *)(this + 236) = *(_BYTE *)(a2 + 236); /*0x557486*/
  this->M240 = *(_DWORD *)(a2 + 240); /*0x55748c*/
  this->M244 = *(_DWORD *)(a2 + 244); /*0x557492*/
  *(_BYTE *)(this + 248) = *(_BYTE *)(a2 + 248); /*0x557498*/
  this->M252 = *(_DWORD *)(a2 + 252); /*0x55749e*/
  this->M256 = *(_DWORD *)(a2 + 256); /*0x5574a4*/
  *(_BYTE *)(this + 260) = *(_BYTE *)(a2 + 260); /*0x5574aa*/
  this->M264 = *(_DWORD *)(a2 + 264); /*0x5574b0*/
  *(_BYTE *)(this + 268) = *(_BYTE *)(a2 + 268); /*0x5574b6*/
  *(_BYTE *)(this + 269) = *(_BYTE *)(a2 + 269); /*0x5574bc*/
  this->M272 = *(_DWORD *)(a2 + 272); /*0x5574c6*/
  *(_BYTE *)(this + 276) = *(_BYTE *)(a2 + 276); /*0x5574d2*/
  this->M184 = &vt_ShapeButtonClass; /*0x5574de*/
  sub_5581A0(this + 280, a2 + 280); /*0x5574e4*/
  this->M340 = *(_DWORD *)(a2 + 340); /*0x5574fa*/
  this->M344 = *(_DWORD *)(a2 + 344); /*0x557500*/
  *(_BYTE *)(this + 348) = *(_BYTE *)(a2 + 348); /*0x557506*/
  this->M352 = *(_DWORD *)(a2 + 352); /*0x55750c*/
  this->M356 = *(_DWORD *)(a2 + 356); /*0x557512*/
  this->M360 = *(_DWORD *)(a2 + 360); /*0x55751c*/
  this->M280 = &vt_SliderClass; /*0x55751f*/
  this->M364 = *(_DWORD *)(a2 + 364); /*0x55752c*/
  int v3 = this->M88; /*0x557538*/
  this->M368 = *(_DWORD *)(a2 + 368); /*0x55753c*/
  *(_DWORD *)this = &vt_ListClass; /*0x557542*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 88, this); /*0x557548*/
  (*(void (__thiscall **)(int, int))(this->M184 + 132))(this + 184, this); /*0x557553*/
  (*(void (__thiscall **)(int, int))(this->M280 + 132))(this + 280, this); /*0x55755f*/
  return this; /*0x557566*/
}
}
} // namespace gamemd

// 0x557B10
namespace gamemd {
char CheckListClass__vt_19_(char a2, int a3, unsigned int * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void CheckListClass::vt_19_(char a2, int a3, _DWORD *a4)
{
  char result; // al

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == this + 22 ) /*0x557b25*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 196))(this, 1); /*0x557b2b*/
    result = (_BYTE)this - 72; /*0x557b31*/
    if ( a4 == this + 46 ) /*0x557b39*/
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 196))(this, 0); /*0x557b41*/
  }
  if ( a4 == this + 70 ) /*0x557b4f*/
  {
    int v6 = *this; /*0x557b53*/
    int v7 = (*(int (__thiscall **)(_DWORD *))(this->q118 + 144))(this + 70); /*0x557b55*/
    return (*(int (__thiscall **)(_DWORD *, int))(v6 + 192))(this, v7); /*0x557b5e*/
  }
  return result; /*0x557b64*/
}
}
} // namespace gamemd

// 0x558810
namespace gamemd {
bool E4Recv_558810::ShowSaveLoadDialog(CampaignScore * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ShowSaveLoadDialog(int this, CampaignScore *aP1)
{
  CampaignScore *v2; // eax
  v2 = aP1; /*0x558810*/
  this->M4 = 2; /*0x558814*/
  if ( !aP1 ) /*0x55881d*/
    v2 = (CampaignScore *)(*(_DWORD *)&HouseClass_Player[29924] + 4960); /*0x558824*/
  this->M12 = v2; /*0x558829*/
  return SaveLoadDialog::DlgProc((const char **)this); /*0x558831*/
}
}
} // namespace gamemd

// 0x55B720
namespace gamemd {
int E4Recv_55B720::sub_55B720()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_55B720(_DWORD *this)
{
  RulesClass *v1; // ebx
  wchar_t *v3; // edi
  wchar_t **v5; // esi
  wchar_t *v7; // eax
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int result; // eax
  int i; // edi
  wchar_t *v15; // [esp+18h] [ebp-8h]
  v1 = g_RulesClass_Instance; /*0x55b724*/
  if ( !LOBYTE(g_RulesClass_Instance[1].?) || *(double *)&g_RulesClass_Instance[1].? == 0.0 ) /*0x55b74a*/
    goto LABEL_8; /*0x55b74a*/
  v3 = g_CurrentFrame; /*0x55b751*/
  int v4 = *((_DWORD *)g_ScenarioClass_Instance + 1158); /*0x55b757*/
  v5 = (wchar_t **)((char *)g_ScenarioClass_Instance + 4632); /*0x55b75d*/
  int v6 = *((_DWORD *)g_ScenarioClass_Instance + 1160); /*0x55b766*/
  if ( v4 != -1 ) /*0x55b769*/
  {
    if ( (int)g_CurrentFrame - v4 >= v6 ) /*0x55b771*/
    {
LABEL_7:
      v7 = (wchar_t *)Math::RoundToInt(*(double *)&g_RulesClass_Instance[1].? * 900.0); /*0x55b779*/
      *v5 = v3; /*0x55b78e*/
      v5[1] = v15; /*0x55b790*/
      v5[2] = v7; /*0x55b798*/
      MapClass::ProcessVisibilityFlags(&DataGlobal_87F7E8); /*0x55b79b*/
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
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 && *(double *)&v1[1].TiberiumStrength != 0.0 ) /*0x55b7ca*/
  {
    int v8 = *((_DWORD *)g_ScenarioClass_Instance + 1161); /*0x55b7cc*/
    int v9 = *((_DWORD *)g_ScenarioClass_Instance + 1163); /*0x55b7d2*/
    v10 = (wchar_t **)((char *)g_ScenarioClass_Instance + 4644); /*0x55b7d8*/
    if ( v8 != -1 ) /*0x55b7e1*/
    {
      if ( (int)v3 - v8 >= v9 ) /*0x55b7e9*/
      {
LABEL_15:
        v11 = (wchar_t *)Math::RoundToInt(*(double *)&v1[1].TiberiumStrength * 900.0); /*0x55b7f1*/
        *v10 = v3; /*0x55b806*/
        v10[1] = v15; /*0x55b808*/
        v10[2] = v11; /*0x55b810*/
        MapClass::ProcessFogTransition(&DataGlobal_87F7E8); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      v9 -= (int)v3 - v8; /*0x55b7eb*/
    }
    if ( v9 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
LABEL_16:
  result = *(this + 4); /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    int v14 = *(_DWORD *)(*(this + 1) + 4 * i); /*0x55b824*/
    if ( v14 && (*(_BYTE *)(v14 + 20) & 4) != 0 && *(_DWORD *)(v14 + 1652) && !*(_BYTE *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(_DWORD *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1652) + 64))(*(_DWORD *)(v14 + 1652)); /*0x55b86b*/
    }
    result = *(this + 4); /*0x55b86e*/
  }
  return result; /*0x55b876*/
}
}
} // namespace gamemd

// 0x55BC00
namespace gamemd {
int CompressLCWBuffer(Pipe * aP0, int edx0, unsigned char * a2, unsigned int * a3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall CompressLCWBuffer(Pipe *aP0, int edx0, unsigned __int8 *a2, _DWORD *a3, int a5)
{
  Pipe *v5; // edi
  unsigned __int8 *v6; // ebp
  Pipe *i; // esi
  Pipe *v14; // ebx
  unsigned __int8 *v23; // ebp
  unsigned __int8 v26; // al
  unsigned __int8 v57; // bl
  unsigned __int8 *v60; // edi
  Pipe *v64; // [esp+14h] [ebp-18h]
  unsigned __int8 *v65; // [esp+18h] [ebp-14h]
  v5 = aP0; /*0x55bc07*/
  v6 = a2; /*0x55bc0d*/
  v65 = (unsigned __int8 *)&aP0->__pad_0[edx0]; /*0x55bc17*/
  unsigned int v7; // eax
  v7 = (unsigned __int8)aP0->__pad_0[0] /*0x55bc33*/
     ^ (32 * ((unsigned __int8)aP0->__pad_0[1] ^ (32 * (unsigned __int8)aP0->__pad_0[2])));
  int v8 = a5; /*0x55bc35*/
  v64 = aP0; /*0x55bc3b*/
  *(_DWORD *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = aP0; /*0x55bc58*/
  unsigned int v9 = (v7 >> 5) ^ ((unsigned __int8)v5->__pad_0[0] >> 5) ^ ((unsigned __int8)v5->__pad_0[3] << 10); /*0x55bc6d*/
  *(_DWORD *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = &v5->__pad_0[1]; /*0x55bc89*/
  unsigned int v10 = (v9 >> 5) ^ ((unsigned __int8)v5->__pad_0[1] >> 5) ^ (LOBYTE(v5->Pipe_field_0x04) << 10); /*0x55bc9e*/
  *(_DWORD *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = &v5->__pad_0[2]; /*0x55bcbb*/
  unsigned int v11 = (v10 >> 5) ^ ((unsigned __int8)v5->__pad_0[2] >> 5) ^ (BYTE1(v5->Pipe_field_0x04) << 10); /*0x55bcce*/
  *(_DWORD *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = &v5->__pad_0[3]; /*0x55bce7*/
  for ( i = (Pipe *)&v5->Pipe_field_0x04; /*0x55bcea*/
        ;
        v11 = (unsigned __int8)i->__pad_0[0]
            ^ (32 * ((unsigned __int8)i->__pad_0[1] ^ (32 * (unsigned __int8)i->__pad_0[2]))) )
  {
  int v62; // [esp+10h] [ebp-1Ch]
  int v55; // ecx
  _BYTE *v54; // ebp
  _BYTE *v47; // ebp
  int v46; // ecx
  int v20; // ecx
    while ( 1 ) /*0x55bcfd*/
    {
      unsigned int v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(Pipe **)(v8 + 4 * v13); /*0x55bd02*/
      *(_DWORD *)(v8 + 4 * v13) = i; /*0x55bd05*/
      if ( v14 >= aP0 ) /*0x55bd0c*/
      {
        v62 = (char *)i - (char *)v14; /*0x55bd18*/
        if ( (char *)i - (char *)v14 > 0 /*0x55bd49*/
          && (char *)i - (char *)v14 <= 49151
          && v14->__pad_0[0] == i->__pad_0[0]
          && v14->__pad_0[1] == i->__pad_0[1]
          && v14->__pad_0[2] == i->__pad_0[2] )
        {
          break; /*0x55bd49*/
        }
      }
LABEL_56:
      i = (Pipe *)((char *)i + 1); /*0x55bffb*/
      if ( i >= (Pipe *)(v65 - 13) ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (HIBYTE(i[-1].Pipe_field_0x0C) >> 5) ^ ((unsigned __int8)i->__pad_0[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    unsigned int v15 = (char *)i - (char *)v5; /*0x55bd55*/
    char * v16 = &v14->__pad_0[3]; /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = v5->__pad_0[0]; /*0x55bd71*/
        char v17 = v5->__pad_0[1]; /*0x55bd74*/
        char * v18 = (char *)(v6 + 1); /*0x55bd77*/
        char * v19 = &v5->__pad_0[1]; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = (unsigned __int8 *)(v18 + 1); /*0x55bd84*/
        v5 = (Pipe *)(v19 + 2); /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i->__pad_0[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    int v21 = (char *)i - (char *)v5; /*0x55bda2*/
    int v68 = (char *)i - (char *)v5; /*0x55bda7*/
    if ( v15 > 3 ) /*0x55bdab*/
    {
      if ( v15 > 0x12 ) /*0x55bdbe*/
      {
        unsigned int v22 = v15 - 18; /*0x55bdcc*/
        *v6 = 0; /*0x55bdcf*/
        v23 = v6 + 1; /*0x55bdd3*/
        unsigned int v66 = v22; /*0x55bdd9*/
        if ( v22 <= 0xFF ) /*0x55bddd*/
        {
          v20 = v62; /*0x55bed9*/
        }
        else
        {
  char v25; // dl
          memset(v23, 0, 4 * ((v22 - 1) / 0x3FC) + (((v22 - 1) / 0xFF) & 3)); /*0x55bdff*/
          unsigned int v24 = (v22 - 1) / 0xFF; /*0x55be08*/
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
      *v6++ = v5->__pad_0[0]; /*0x55be31*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x55be35*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
LABEL_25:
    v26 = i->__pad_0[3]; /*0x55be3d*/
    char v27 = *v16; /*0x55be40*/
    i = (Pipe *)((char *)i + 4); /*0x55be45*/
    char * v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      char v29 = i->__pad_0[0]; /*0x55be4f*/
      char v30 = *v28; /*0x55be51*/
      i = (Pipe *)((char *)i + 1); /*0x55be53*/
      char * v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        char v32 = i->__pad_0[0]; /*0x55be5d*/
        char v33 = *v31; /*0x55be5f*/
        i = (Pipe *)((char *)i + 1); /*0x55be61*/
        char * v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          char v35 = i->__pad_0[0]; /*0x55be6b*/
          char v36 = *v34; /*0x55be6d*/
          i = (Pipe *)((char *)i + 1); /*0x55be6f*/
          char * v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            char v38 = i->__pad_0[0]; /*0x55be79*/
            char v39 = *v37; /*0x55be7b*/
            i = (Pipe *)((char *)i + 1); /*0x55be7d*/
            char * v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              char v41 = i->__pad_0[0]; /*0x55be87*/
              char v42 = *v40; /*0x55be89*/
              i = (Pipe *)((char *)i + 1); /*0x55be8b*/
              _BYTE * v43 = v40 + 1; /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
  int v63; // [esp+10h] [ebp-1Ch]
  unsigned int v48; // ebx
                for ( ; i < (Pipe *)v65; i = (Pipe *)((char *)i + 1) ) /*0x55be9b*/
                {
                  if ( *v43 != i->__pad_0[0] ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                unsigned int v44 = (char *)i - (char *)v64; /*0x55beb5*/
                if ( v62 > 0x4000 ) /*0x55bebc*/
                {
                  int v49 = v62 - 0x4000; /*0x55beeb*/
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
                  int v45 = v62 - 1; /*0x55bebe*/
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
                _BYTE * v50 = v6 + 1; /*0x55bf1f*/
                if ( v48 > 0xFF ) /*0x55bf26*/
                {
                  memset(v50, 0, 4 * ((v48 - 1) / 0x3FC) + (((v48 - 1) / 0xFF) & 3)); /*0x55bf44*/
                  unsigned int v51 = (v48 - 1) / 0xFF; /*0x55bf4d*/
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
    i = (Pipe *)((char *)i - 1); /*0x55bf64*/
    char v52 = (_BYTE)i - (_BYTE)v5; /*0x55bf67*/
    if ( v20 <= 2048 ) /*0x55bf6f*/
    {
      int v53 = v20 - 1; /*0x55bf71*/
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
    if ( i >= (Pipe *)(v65 - 13) ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
LABEL_59:
  unsigned int v56 = v65 - (unsigned __int8 *)v5; /*0x55c027*/
  if ( v65 - (unsigned __int8 *)v5 > 0 ) /*0x55c02f*/
  {
    int v69 = v65 - (unsigned __int8 *)v5; /*0x55c039*/
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
          unsigned int v58 = (v56 - 19) / 0xFF; /*0x55c085*/
          unsigned int v59 = (v56 - 19) / 0x3FC; /*0x55c090*/
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
      *v6++ = v5->__pad_0[0]; /*0x55c0b5*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x55c0b9*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a3 = v6 - a2; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}
}
} // namespace gamemd

// 0x55C0E0
namespace gamemd {
int DecodeBlockLCW(AbstractClass * aP0, Pipe * aP1, unsigned char * a2, unsigned int * a3, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DecodeBlockLCW(AbstractClass *aP0, Pipe *aP1, _BYTE *a2, _DWORD *a3, int a5)
{
  AbstractClass *v5; // eax
  AbstractClass *v7; // ebp
  unsigned int v8; // edx
  char *v9; // eax
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 *v14; // eax
  unsigned __int8 v15; // cl
  char *v16; // eax
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
  _BYTE * v6 = a2; /*0x55c0ef*/
  v7 = (AbstractClass *)&aP1->__pad_0[(_DWORD)aP0]; /*0x55c0f3*/
  if ( aP0->__pad_0[0] > 0x11u ) /*0x55c0fc*/
  {
    v8 = (unsigned __int8)aP0->__pad_0[0] - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
LABEL_3:
  v8 = (unsigned __int8)v5->__pad_0[0]; /*0x55c109*/
  v9 = &v5->__pad_0[1]; /*0x55c10d*/
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
      v8 = (unsigned __int8)*v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = (unsigned __int8 *)(v9 + 1); /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = (AbstractClass *)(v14 + 1); /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
LABEL_9:
    v16 = &v5->__pad_0[1]; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = (unsigned __int8)*v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * (unsigned __int8)*v9]; /*0x55c170*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c17e*/
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
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * (unsigned __int8)*v9]; /*0x55c1db*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c1dc*/
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
      v22 = (unsigned __int8)*v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-((unsigned __int8)*v9 >> 2) - 1 + -64 * (unsigned __int8)v9[1]]; /*0x55c225*/
    v5 = (AbstractClass *)(v9 + 2); /*0x55c227*/
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
    v20 = BYTE2(v5[-1].NeedsSaveOrLink) & 3; /*0x55c18e*/
    if ( (BYTE2(v5[-1].NeedsSaveOrLink) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = v5->__pad_0[0]; /*0x55c19c*/
      v5 = (AbstractClass *)((char *)v5 + 1); /*0x55c19f*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = (unsigned __int8)v5->__pad_0[0]; /*0x55c1a5*/
    v9 = &v5->__pad_0[1]; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * (unsigned __int8)*v9]; /*0x55c1bd*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c1be*/
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
    v22 = (unsigned __int8)*v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-((unsigned __int8)*v9 >> 2)]; /*0x55c262*/
  v29 = (unsigned __int8 *)(v9 + 1); /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = (AbstractClass *)(v29 + 1); /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a3 = v6 - a2; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}
}
} // namespace gamemd

// 0x55CFD0
namespace gamemd {
BOOL Game_Frame_Check()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Game_Frame_Check()
{
  int i; // [esp+10h] [ebp-74h]

  if ( ((unsigned __int16)g_CurrentFrame & 0x3FF) == 0 && !(unsigned __int8)CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    const void * v0 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x55cff9*/
    if ( Networking_LastEventIndex < 128 ) /*0x55d008*/
    {
      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v0, 0x6Fu); /*0x55d025*/
      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x55d037*/
      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x55d04e*/
      ++Networking_LastEventIndex; /*0x55d054*/
    }
  }
  if ( byte_A83D49 || DataGlobal_A8ECD0 || unk_8B41C0 || byte_A83D48 ) /*0x55d07a*/
  {
    ++g_GameFlags_Campaign; /*0x55d080*/
    int v1 = Scenario::ClearScreen(); /*0x55d086*/
    LOBYTE(v1) = byte_A83D49; /*0x55d08b*/
    if ( byte_A83D49 || DataGlobal_A8ECD0 ) /*0x55d09a*/
    {
      if ( g_TacticalRender ) /*0x55d0a8*/
      {
        v1 = Tooltip::Enable(0); /*0x55d0ab*/
        LOBYTE(v1) = byte_A83D49; /*0x55d0b0*/
      }
      if ( (_BYTE)v1 || DataGlobal_A8ECD0 ) /*0x55d0bf*/
      {
        int v2 = g_GameMode_Current; /*0x55d0cb*/
        if ( g_GameStateFlags && (g_GameMode_Current == 3 || g_GameMode_Current == 4) ) /*0x55d0dd*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)g_GameStateFlags + 160))(v1); /*0x55d0e2*/
          LOBYTE(v1) = byte_A83D49; /*0x55d0e8*/
          v2 = g_GameMode_Current; /*0x55d0ed*/
        }
        if ( (_BYTE)v1 ) /*0x55d0f5*/
        {
          if ( v2 == 4 && !DataGlobal_A8F900 ) /*0x55d106*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d10e*/
              DataGlobal_A8B8C1 = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
  int v3; // ecx
            LOBYTE(v3) = 0; /*0x55d11c*/
            ProcessGameResults(v3); /*0x55d11e*/
          }
          DataGlobal_A8ECD0 = 0; /*0x55d123*/
          byte_A83D49 = 0; /*0x55d129*/
          unk_8B41C0 = 0; /*0x55d12f*/
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
        if ( DataGlobal_A8ECD0 ) /*0x55d183*/
        {
          if ( v2 == 4 && !DataGlobal_A8F900 ) /*0x55d194*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d19c*/
              DataGlobal_A8B8C1 = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
  int v4; // ecx
            LOBYTE(v4) = 0; /*0x55d1aa*/
            ProcessGameResults(v4); /*0x55d1ac*/
          }
          byte_A83D49 = 0; /*0x55d1b1*/
          DataGlobal_A8ECD0 = 0; /*0x55d1b7*/
          unk_8B41C0 = 0; /*0x55d1bd*/
          byte_A83D48 = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown(&g_GameMode_Current); /*0x55d1d3*/
          Scenario::EndGame(); /*0x55d1d8*/
          WTFMode::Init(&g_GameMode_Current); /*0x55d1e2*/
          byte_ABCD58 = 0; /*0x55d1ed*/
          if ( !g_TacticalRender ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
LABEL_26:
          Tooltip::Enable(DataGlobal_A8EB80); /*0x55d16d*/
LABEL_52:
          --g_GameFlags_Campaign; /*0x55d341*/
          return g_WTFMode == 0; /*0x55d341*/
        }
      }
    }
    if ( unk_8B41C0 ) /*0x55d212*/
    {
      byte_A83D49 = 0; /*0x55d219*/
      DataGlobal_A8ECD0 = 0; /*0x55d21f*/
      unk_8B41C0 = 0; /*0x55d225*/
      byte_A83D48 = 0; /*0x55d22b*/
      WTFMode::Shutdown(&g_GameMode_Current); /*0x55d231*/
      GameFrameCheck_Check(); /*0x55d236*/
      WTFMode::Init(&g_GameMode_Current); /*0x55d240*/
      byte_ABCD58 = 0; /*0x55d245*/
    }
    else if ( byte_A83D48 ) /*0x55d256*/
    {
      byte_A83D49 = 0; /*0x55d25c*/
      DataGlobal_A8ECD0 = 0; /*0x55d262*/
      unk_8B41C0 = 0; /*0x55d268*/
      byte_A83D48 = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown(&g_GameMode_Current); /*0x55d27e*/
      GameFrameCheck_Check_686570(); /*0x55d283*/
      WTFMode::Init(&g_GameMode_Current); /*0x55d28d*/
      byte_ABCD58 = 0; /*0x55d292*/
      Debug::Log(DataGlobal_82A044); /*0x55d29d*/
      if ( g_GameMode_Current == 4 && g_NetworkInterface && g_Network_IsHosting ) /*0x55d2c5*/
      {
        if ( DataGlobal_A8EA0C ) /*0x55d2cd*/
        {
          NetworkEventQueueClass::WaitForResponse(&g_NetworkEventQueue); /*0x55d2d4*/
          int v5 = 480; /*0x55d2e2*/
  _BYTE v9[4]; // [esp+Ch] [ebp-78h] BYREF
          int v8 = Timer::GetTicks(v9); /*0x55d2e7*/
          for ( i = 480; ; v5 = i ) /*0x55d2eb*/
          {
            if ( v8 != -1 ) /*0x55d2fa*/
            {
              int v6 = Timer::GetTicks(v9) - v8; /*0x55d305*/
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
} // namespace gamemd

// 0x55D360
namespace gamemd {
int GameFrameLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __usercall GameFrameLoop@<al>(int a1@<ebp>)
{
  _BYTE *WaypointCoords; // eax
  unsigned __int8 v24; // cl
  int j; // esi
  unsigned __int8 v28; // cl
  unsigned __int8 v32; // cl
  int Object; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // edx
  int Time; // [esp+10h] [ebp-1B4h] BYREF
  int v43; // [esp+14h] [ebp-1B0h] BYREF
  int v44; // [esp+18h] [ebp-1ACh]
  int v45; // [esp+1Ch] [ebp-1A8h] BYREF
  int i; // [esp+20h] [ebp-1A4h] BYREF
  int v47; // [esp+24h] [ebp-1A0h] BYREF
  _BYTE v48[8]; // [esp+28h] [ebp-19Ch] BYREF
  int v49; // [esp+30h] [ebp-194h] BYREF
  int v50; // [esp+34h] [ebp-190h] BYREF
  int v51; // [esp+38h] [ebp-18Ch] BYREF
  int v52; // [esp+3Ch] [ebp-188h] BYREF
  int v53; // [esp+40h] [ebp-184h] BYREF
  _DWORD v54[2]; // [esp+44h] [ebp-180h] BYREF
  char Str[264]; // [esp+4Ch] [ebp-178h] BYREF
  _BYTE Buffer[112]; // [esp+154h] [ebp-70h] BYREF

  if ( !LOBYTE(DataGlobal_87F7E8[539758]) ) /*0x55d371*/
    return 1; /*0x55d371*/
  LOBYTE(dword_A8ED54[47105]) = 1; /*0x55d37c*/
  if ( !LOBYTE(dword_A8ED54[11]) ) /*0x55d385*/
  {
    while ( !DataGlobal_87F7E8[536212] || DataGlobal_87F7E8[536212] == 5 ) /*0x55d399*/
    {
      ((void (__stdcall *)(int))Sleep)(500); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( LOBYTE(dword_A8ED54[11]) ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    ((void (__stdcall *)(int))Sleep)(10); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
LABEL_8:
  if ( dword_A8ED54[12] >= DataGlobal_87F7E8[539327] ) /*0x55d3c8*/
    nullsub_35(); /*0x55d3cf*/
  DataGlobal_87F7E8[536413] = ((int (*)(void))timeGetTime)(); /*0x55d3da*/
  if ( DataGlobal_87F7E8[539336] ) /*0x55d3e6*/
    BYTE2(dword_A8ED54[7]) = 1; /*0x55d3e8*/
  if ( LOBYTE(DataGlobal_87F7E8[539364]) == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    int v1 = DataGlobal_87F7E8[528715]; /*0x55d401*/
    if ( DataGlobal_87F7E8[528715] == -1 ) /*0x55d409*/
      v1 = DataGlobal_87F7E8[528716]; /*0x55d40b*/
    if ( BYTE1(DataGlobal_87F7E8[539887]) ) /*0x55d418*/
    {
      if ( v1 == -1 ) /*0x55d41d*/
        Theme::QueueSong((int)&DataGlobal_87F7E8[528714], -2); /*0x55d421*/
    }
    else if ( v1 != -3 ) /*0x55d426*/
    {
      Theme::Stop(&DataGlobal_87F7E8[528714], 1); /*0x55d42f*/
      Theme::QueueSong((int)&DataGlobal_87F7E8[528714], -3); /*0x55d43b*/
    }
  }
  if ( !DataGlobal_87F7E8[536212] ) /*0x55d447*/
  {
    if ( !LOBYTE(dword_A8ED54[34]) ) /*0x55d76e*/
    {
      DataGlobal_87F7E8[539870] = 2; /*0x55d774*/
      DataGlobal_87F7E8[7896] = Timer::GetTicks(&v43); /*0x55d783*/
      DataGlobal_87F7E8[7897] = v43; /*0x55d791*/
      DataGlobal_87F7E8[7898] = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
LABEL_61:
    int v15 = DataGlobal_87F7E8[539870]; /*0x55d79e*/
    DataGlobal_87F7E8[7896] = Timer::GetTicks(&v43); /*0x55d7b1*/
    DataGlobal_87F7E8[7897] = v43; /*0x55d7b6*/
    DataGlobal_87F7E8[7898] = v15; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( DataGlobal_87F7E8[536212] == 5 || DataGlobal_87F7E8[536217] != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (DataGlobal_87F7E8[538500] & 2) != 0 ) /*0x55d46a*/
  {
    DataGlobal_87F7E8[7896] = Timer::GetTicks(&v43); /*0x55d47b*/
    DataGlobal_87F7E8[7897] = v43; /*0x55d480*/
    DataGlobal_87F7E8[7898] = 0; /*0x55d486*/
  }
  else
  {
    if ( DataGlobal_87F7E8[536412] ) /*0x55d499*/
    {
      int v2 = 60 / DataGlobal_87F7E8[536412]; /*0x55d507*/
      DataGlobal_87F7E8[7896] = Timer::GetTicks(&v43); /*0x55d50e*/
      DataGlobal_87F7E8[7897] = v43; /*0x55d517*/
      DataGlobal_87F7E8[7898] = v2; /*0x55d528*/
      int v3 = 1000 / DataGlobal_87F7E8[536412]; /*0x55d532*/
      Time = timeGetTime(&v43); /*0x55d53d*/
      Timer::EnableHighPrecision(&v43); /*0x55d541*/
      DataGlobal_87F7E8[7888] = Time; /*0x55d54e*/
      v44 = v3; /*0x55d554*/
      DataGlobal_87F7E8[7889] = v43; /*0x55d558*/
      DataGlobal_87F7E8[7890] = v3; /*0x55d55e*/
    }
    else
    {
      DataGlobal_87F7E8[7896] = Timer::GetTicks(&v43); /*0x55d4a9*/
      DataGlobal_87F7E8[7898] = 2; /*0x55d4b2*/
      DataGlobal_87F7E8[7897] = v43; /*0x55d4bc*/
      Time = timeGetTime(&v43); /*0x55d4ca*/
      Timer::EnableHighPrecision(&v43); /*0x55d4ce*/
      DataGlobal_87F7E8[7888] = Time; /*0x55d4e0*/
      v44 = 33; /*0x55d4e6*/
      DataGlobal_87F7E8[7889] = v43; /*0x55d4ea*/
      DataGlobal_87F7E8[7890] = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(&v43); /*0x55d568*/
    int v4 = DataGlobal_87F7E8[7890]; /*0x55d572*/
    if ( DataGlobal_87F7E8[7888] != -1 ) /*0x55d57b*/
    {
      int v5 = timeGetTime(&DataGlobal_87F7E8[7889]) - DataGlobal_87F7E8[7888]; /*0x55d587*/
      if ( v5 >= v4 ) /*0x55d58f*/
        v4 = 0; /*0x55d595*/
      else
        v4 -= v5; /*0x55d591*/
    }
    int v6 = DataGlobal_87F7E8[536410]; /*0x55d59c*/
    a1 = 0; /*0x55d5a2*/
    dword_A8ED54[47148] = v4; /*0x55d5a7*/
    if ( DataGlobal_87F7E8[536212] == 4 ) /*0x55d5ad*/
    {
      if ( DataGlobal_87F7E8[536410] <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      int v7 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount(&DataGlobal_87F7E8[539766]) > 0 ) /*0x55d5ca*/
      {
        int * v8 = &DataGlobal_87F7E8[538853]; /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( a1 <= *v8 ) /*0x55d5d9*/
            a1 = *v8; /*0x55d5db*/
          ++v7; /*0x55d5e2*/
          ++v8; /*0x55d5e3*/
        }
        while ( v7 < Network::GetSendCount(&DataGlobal_87F7E8[539766]) ); /*0x55d5ed*/
        if ( a1 ) /*0x55d5f1*/
        {
          if ( a1 >= v6 / 4 ) /*0x55d604*/
          {
            int v9 = DataGlobal_87F7E8[7890]; /*0x55d60b*/
            if ( DataGlobal_87F7E8[7888] != -1 ) /*0x55d616*/
            {
              int v10 = timeGetTime(&DataGlobal_87F7E8[7889]) - DataGlobal_87F7E8[7888]; /*0x55d622*/
              if ( v10 >= v9 ) /*0x55d62a*/
                v9 = 0; /*0x55d630*/
              else
                v9 -= v10; /*0x55d62c*/
            }
            Time = timeGetTime(&v43); /*0x55d63f*/
            Timer::EnableHighPrecision(&v43); /*0x55d643*/
            DataGlobal_87F7E8[7888] = Time; /*0x55d653*/
            v44 = v9 + 10; /*0x55d65d*/
            DataGlobal_87F7E8[7889] = v43; /*0x55d661*/
            DataGlobal_87F7E8[7890] = v9 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(&v43); /*0x55d66c*/
          }
          if ( a1 >= v6 / 2 ) /*0x55d67f*/
          {
            int v11 = DataGlobal_87F7E8[7890]; /*0x55d686*/
            if ( DataGlobal_87F7E8[7888] != -1 ) /*0x55d68e*/
            {
              int v12 = timeGetTime(&DataGlobal_87F7E8[7889]) - DataGlobal_87F7E8[7888]; /*0x55d69a*/
              if ( v12 >= v11 ) /*0x55d6a2*/
                v11 = 0; /*0x55d6a8*/
              else
                v11 -= v12; /*0x55d6a4*/
            }
            Time = timeGetTime(&v43); /*0x55d6b7*/
            Timer::EnableHighPrecision(&v43); /*0x55d6bb*/
            DataGlobal_87F7E8[7888] = Time; /*0x55d6cb*/
            v44 = v11 + 10; /*0x55d6d5*/
            DataGlobal_87F7E8[7889] = v43; /*0x55d6d9*/
            DataGlobal_87F7E8[7890] = v11 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(&v43); /*0x55d6e4*/
          }
          if ( a1 >= 3 * v6 / 4 ) /*0x55d6f7*/
          {
            int v13 = DataGlobal_87F7E8[7890]; /*0x55d702*/
            if ( DataGlobal_87F7E8[7888] != -1 ) /*0x55d70a*/
            {
              int v14 = timeGetTime(&DataGlobal_87F7E8[7889]) - DataGlobal_87F7E8[7888]; /*0x55d716*/
              if ( v14 >= v13 ) /*0x55d71e*/
                v13 = 0; /*0x55d724*/
              else
                v13 -= v14; /*0x55d720*/
            }
            Time = timeGetTime(&v43); /*0x55d733*/
            Timer::EnableHighPrecision(&v43); /*0x55d737*/
            DataGlobal_87F7E8[7888] = Time; /*0x55d747*/
            v44 = v13 + 10; /*0x55d751*/
            DataGlobal_87F7E8[7889] = v43; /*0x55d755*/
            DataGlobal_87F7E8[7890] = v13 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(&v43); /*0x55d760*/
          }
        }
      }
    }
  }
LABEL_62:
  if ( DataGlobal_87F7E8[536212] && DataGlobal_87F7E8[536212] != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( *(_BYTE *)(DataGlobal_87F7E8[536210] + 1584) ) /*0x55d7da*/
  {
    int v16 = *(_DWORD *)(DataGlobal_87F7E8[536210] + 1576); /*0x55d7ea*/
    if ( *(_DWORD *)(DataGlobal_87F7E8[536210] + 1568) != -1 ) /*0x55d7f9*/
    {
      _DWORD * v17 = (_DWORD *)(DataGlobal_87F7E8[536210] + 1568); /*0x55d7f0*/
      int v18 = Timer::GetTicks(v17 + 1) - *v17; /*0x55d803*/
      if ( v18 >= v16 ) /*0x55d807*/
      {
LABEL_69:
        *(_BYTE *)(DataGlobal_87F7E8[536210] + 1584) = 0; /*0x55d80f*/
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
  if ( *(_DWORD *)(DataGlobal_87F7E8[536210] + 1580) ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)DataGlobal_87F7E8[7887] + 92))(DataGlobal_87F7E8[7887]); /*0x55d847*/
    TacticalMap::Redraw(DataGlobal_87F7E8); /*0x55d84f*/
    SyncDelay::Start(); /*0x55d854*/
    LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d866*/
    return LOBYTE(DataGlobal_87F7E8[539758]) == 0; /*0x55d877*/
  }
LABEL_72:
  char v20 = DataGlobal_87F7E8[538500]; /*0x55d878*/
  if ( (DataGlobal_87F7E8[538500] & 2) == 0 && !dword_A8ED54[19] && LOBYTE(dword_A8ED54[11]) ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable(DataGlobal_87F7E8, &v51, &v53, &v52); /*0x55d8ab*/
    SyncDelayClass::ProcessNetworkSync(&v51); /*0x55d8b4*/
    if ( LOBYTE(DataGlobal_87F7E8[536627]) ) /*0x55d8c0*/
      DrawHUD(); /*0x55d8c4*/
    if ( (dword_A8ED54[12] & 7) == 7 && DataGlobal_87F7E8[536212] == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&DataGlobal_87F7E8[539766]); /*0x55d8e3*/
    MarkAllFootOccupancies(); /*0x55d8e8*/
    TacticalMap::Redraw(DataGlobal_87F7E8); /*0x55d8f2*/
    v20 = DataGlobal_87F7E8[538500]; /*0x55d8f7*/
  }
  BYTE1(dword_A8ED54[18]) = 0; /*0x55d903*/
  if ( (v20 & 1) != 0 || (v20 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v20 & 1) != 0 ) /*0x55d91a*/
    {
      int * v21 = RequestMapSnapshot((_DWORD *)DataGlobal_87F7E8[7887], v54); /*0x55d92b*/
      Time = *v21; /*0x55d936*/
      v43 = v21[1]; /*0x55d945*/
      FileClass::Write(&DataGlobal_87F7E8[538473], (int)&Time, 8); /*0x55d949*/
      v45 = DataGlobal_87F7E8[539960]; /*0x55d960*/
      FileClass::Write(&DataGlobal_87F7E8[538473], (int)&v45, 4); /*0x55d964*/
      int v22 = 0; /*0x55d969*/
  int v25; // ecx
      for ( i = 0; v22 < v45; i += v25 ) /*0x55d973*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(DataGlobal_87F7E8[539957] + 4 * v22)); /*0x55d983*/
        v24 = WaypointCoords[4]; /*0x55d988*/
        if ( v24 ) /*0x55d98d*/
          v25 = *(_DWORD *)WaypointCoords & 0xFFFFFF | (v24 << 24); /*0x55d9a4*/
        else
          v25 = -1; /*0x55d98f*/
        ++v22; /*0x55d9b0*/
      }
      FileClass::Write(&DataGlobal_87F7E8[538473], (int)&i, 4); /*0x55d9c5*/
      for ( j = 0; j < v45; ++j ) /*0x55d9d0*/
      {
        _BYTE * v27 = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(DataGlobal_87F7E8[539957] + 4 * j)); /*0x55d9e0*/
        v28 = v27[4]; /*0x55d9e5*/
        if ( v28 ) /*0x55d9ea*/
          int v29 = *(_DWORD *)v27 & 0xFFFFFF | (v28 << 24); /*0x55da02*/
        else
          v29 = -1; /*0x55d9ec*/
        v49 = v29; /*0x55da08*/
        FileClass::Write(&DataGlobal_87F7E8[538473], (int)&v49, 4); /*0x55da14*/
      }
      FileClass::Write(&DataGlobal_87F7E8[538473], (int)&dword_A8ED54[47146], 4); /*0x55da2c*/
      FileClass::Write(&DataGlobal_87F7E8[538473], (int)&dword_A8ED54[47147], 4); /*0x55da3d*/
      v20 = DataGlobal_87F7E8[538500]; /*0x55da42*/
      dword_A8ED54[47146] = 0; /*0x55da48*/
      dword_A8ED54[47147] = 0; /*0x55da4e*/
    }
    if ( (v20 & 2) != 0 ) /*0x55da57*/
    {
      if ( CCFileClass::Read(&DataGlobal_87F7E8[538473], &Time, 8) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition(DataGlobal_87F7E8[7887], &Time); /*0x55da7e*/
      if ( CCFileClass::Read(&DataGlobal_87F7E8[538473], &v45, 4) == 4 ) /*0x55da97*/
      {
        int v30 = 0; /*0x55daa2*/
  int v33; // ecx
        for ( i = 0; v30 < DataGlobal_87F7E8[539960]; i += v33 ) /*0x55daaa*/
        {
          _BYTE * v31 = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(DataGlobal_87F7E8[539957] + 4 * v30)); /*0x55daba*/
          v32 = v31[4]; /*0x55dabf*/
          if ( v32 ) /*0x55dac4*/
            v33 = *(_DWORD *)v31 & 0xFFFFFF | (v32 << 24); /*0x55dadb*/
          else
            v33 = -1; /*0x55dac6*/
          ++v30; /*0x55dae8*/
        }
        CCFileClass::Read(&DataGlobal_87F7E8[538473], &v50, 4); /*0x55dafd*/
        if ( v50 != i ) /*0x55db0c*/
          MapClass::UnselectAll_ClearLimboLaunchers(); /*0x55db0e*/
        int v34 = 0; /*0x55db17*/
        for ( MoveFeedback = 1; v34 < v45; ++v34 ) /*0x55db22*/
        {
          if ( CCFileClass::Read(&DataGlobal_87F7E8[538473], &v49, 4) == 4 ) /*0x55db38*/
          {
            v48[4] = 0; /*0x55db48*/
            CheckNetworkSync(v48, (int)v54, v49); /*0x55db4d*/
            Object = BuildingLoadQueue::FindObject(v48); /*0x55db56*/
            if ( Object ) /*0x55db5d*/
            {
              if ( v50 != i ) /*0x55db69*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)Object + 332))(Object); /*0x55db6f*/
                MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        MoveFeedback = 1; /*0x55db85*/
      }
      CCFileClass::Read(&DataGlobal_87F7E8[538473], &dword_A8ED54[47146], 4); /*0x55db98*/
      CCFileClass::Read(&DataGlobal_87F7E8[538473], &dword_A8ED54[47147], 4); /*0x55dba9*/
      MapClass::MarkForRedraw(DataGlobal_87F7E8, 0); /*0x55dbb4*/
      TacticalMap::Redraw(DataGlobal_87F7E8); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&DataGlobal_87F7E8[33514]); /*0x55dbc8*/
  if ( !DataGlobal_87F7E8[536212] && !LOBYTE(dword_A8ED54[47149]) ) /*0x55dbe0*/
  {
    LOBYTE(dword_A8ED54[47149]) = 1; /*0x55dbee*/
    strcpy(Str, (const char *)(DataGlobal_87F7E8[536210] + 4700)); /*0x55dc12*/
    Str[260] = 0; /*0x55dc1f*/
    char * v36 = strrchr(Str, 46); /*0x55dc28*/
    if ( v36 ) /*0x55dc32*/
      *v36 = 0; /*0x55dc34*/
    strcat(Str, aSav); /*0x55dc5c*/
    swprintf((#72 *const)Buffer, aS); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName(Str, Buffer, 0); /*0x55dc92*/
  }
  Scenario::Update(&DataGlobal_87F6C0[46]); /*0x55dc9e*/
  v47 = dword_82A030; /*0x55dcb5*/
  if ( Mouse::IsButtonDown(DataGlobal_87F7E8[539912]) || Mouse::IsButtonDown(DataGlobal_87F7E8[539913]) ) /*0x55dcce*/
  {
    v38 = Math::RoundToInt((double)v47 * flt_82A034); /*0x55dd21*/
LABEL_127:
    v47 = v38; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( Mouse::IsButtonDown(DataGlobal_87F7E8[539910]) || Mouse::IsButtonDown(DataGlobal_87F7E8[539911]) ) /*0x55dcf8*/
  {
    int v37 = DataGlobal_87F7E8[61]; /*0x55dd01*/
    if ( DataGlobal_87F7E8[61] <= DataGlobal_87F7E8[62] ) /*0x55dd0e*/
      v37 = DataGlobal_87F7E8[62]; /*0x55dd10*/
    v38 = v37 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
LABEL_128:
  if ( (dword_A8ED54[47152] & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible(6, &v47, 1); /*0x55dd42*/
  if ( (dword_A8ED54[47152] & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible(2, &v47, 1); /*0x55dd5f*/
  if ( (dword_A8ED54[47152] & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible(0, &v47, 1); /*0x55dd7a*/
  if ( (dword_A8ED54[47152] & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible(4, &v47, 1); /*0x55dd96*/
  FlushPlanningQueue(a1); /*0x55dd9b*/
  SyncFrameCounter((char *)&DataGlobal_87F7E8[536862]); /*0x55dda5*/
  if ( DataGlobal_87F7E8[536212] == 3 || DataGlobal_87F7E8[536212] == 4 ) /*0x55ddb7*/
  {
    if ( DataGlobal_87F7E8[536213] ) /*0x55ddc1*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)DataGlobal_87F7E8[536213] + 4))(DataGlobal_87F7E8[536213]) ) /*0x55ddc5*/
      {
        v39 = *(_DWORD *)((DataGlobal_87F7E8[61] << 11) + DataGlobal_87F7E8[79] + 10268); /*0x55dde1*/
        if ( v39 ) /*0x55dde5*/
        {
          if ( *(_DWORD *)(v39 + 304) != 1 || (*(_BYTE *)(v39 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((_DWORD *)(DataGlobal_87F7E8[536210] + 536), 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v40 = ((int (*)(void))timeGetTime)() - DataGlobal_87F7E8[536413]; /*0x55de13*/
  if ( v40 > 1000 ) /*0x55de1e*/
    v40 = 1000; /*0x55de20*/
  DataGlobal_87F7E8[536414] += v40; /*0x55de34*/
  ++DataGlobal_87F7E8[536415]; /*0x55de3a*/
  ProcessNetworkEvents(); /*0x55de40*/
  FlushPlanningQueue(a1); /*0x55de45*/
  Event::Dispatch(); /*0x55de4a*/
  if ( BYTE1(DataGlobal_87F7E8[528728]) /*0x55de71*/
    || LOBYTE(DataGlobal_87F7E8[539962])
    || LOBYTE(DataGlobal_87F7E8[53878])
    || LOBYTE(DataGlobal_87F7E8[528728]) )
  {
    LOBYTE(dword_A8ED54[47105]) = 0; /*0x55dec8*/
    return 1; /*0x55ded2*/
  }
  v41 = ++dword_A8ED54[12]; /*0x55de7e*/
  if ( dword_A8ED54[123532] ) /*0x55de87*/
  {
    if ( dword_A8ED54[123532] < v41 ) /*0x55de8d*/
    {
      UpdateMouse(); /*0x55de8f*/
      dword_A8ED54[123532] = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start(); /*0x55de9a*/
  ProcessExpiredPointers(); /*0x55de9f*/
  ExecutePlanningQueue(); /*0x55dea4*/
  LOBYTE(dword_A8ED54[47105]) = 0; /*0x55deb6*/
  return LOBYTE(DataGlobal_87F7E8[539758]) == 0; /*0x55d861*/
}
}
} // namespace gamemd

// 0x55F1E0
namespace gamemd {
int * DrawHUD()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *DrawHUD()
{
  int *result; // eax
  int Type; // eax
  DSurface *v2; // esi
  int BuildingAnimByName; // eax
  unsigned int QueueSize; // eax
  CampaignScore *v23; // [esp-20h] [ebp-270h]
  CampaignScore *v24; // [esp-18h] [ebp-268h]
  CampaignScore *v25; // [esp-14h] [ebp-264h]
  CampaignScore *v27; // [esp-10h] [ebp-260h]
  ObjectClass *v29; // [esp-10h] [ebp-260h]
  ObjectClass *v31; // [esp-Ch] [ebp-25Ch]
  CampaignScore *v33; // [esp-8h] [ebp-258h]
  ObjectClass *v35; // [esp-8h] [ebp-258h]
  CampaignScore *v38; // [esp-4h] [ebp-254h]
  int _FFFFFFFCa; // [esp-4h] [ebp-254h]
  ObjectClass *_FFFFFFFCb; // [esp-4h] [ebp-254h]
  int _FFFFFFFCc; // [esp-4h] [ebp-254h]
  int _FFFFFFFCd; // [esp-4h] [ebp-254h]
  int _FFFFFFFCe; // [esp-4h] [ebp-254h]
  int _0; // [esp+0h] [ebp-250h]
  ObjectClass *v45; // [esp+0h] [ebp-250h]
  wchar_t *v39; // [esp+4h] [ebp-24Ch]
  wchar_t *v40; // [esp+4h] [ebp-24Ch]
  wchar_t *v41; // [esp+4h] [ebp-24Ch]
  wchar_t *v42; // [esp+4h] [ebp-24Ch]
  wchar_t *v43; // [esp+4h] [ebp-24Ch]
  AbstractClass *v44; // [esp+8h] [ebp-248h] BYREF
  int aP5_4; // [esp+Ch] [ebp-244h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-240h] BYREF
  int aP5_12; // [esp+14h] [ebp-23Ch] BYREF
  int aP5_16; // [esp+18h] [ebp-238h] BYREF
  int aP5_20; // [esp+1Ch] [ebp-234h] BYREF
  int aP5_24; // [esp+20h] [ebp-230h] BYREF
  wchar_t *v51; // [esp+24h] [ebp-22Ch] BYREF
  int aP5_32; // [esp+28h] [ebp-228h] BYREF
  int aP5_36; // [esp+2Ch] [ebp-224h] BYREF
  int aP5_40; // [esp+30h] [ebp-220h] BYREF
  wchar_t aP5_44; // [esp+34h] [ebp-21Ch] BYREF
  int aP5_48; // [esp+38h] [ebp-218h] BYREF
  int aP5_52; // [esp+3Ch] [ebp-214h] BYREF
  int aP5_56; // [esp+40h] [ebp-210h] BYREF
  int aP5_60; // [esp+44h] [ebp-20Ch] BYREF
  double aP5_64; // [esp+48h] [ebp-208h] BYREF
  wchar_t aP5_72; // [esp+50h] [ebp-200h] BYREF

  result = *(int **)&stru_830620[28032]; /*0x55f1e0*/
  if ( *(_DWORD *)&stru_830620[28032] != -1 ) /*0x55f1f2*/
  {
    aP5_64 = (double)*(unsigned int *)&stru_830620[28032] * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    aP5_32 = 100; /*0x55f225*/
    aP5_36 = 0; /*0x55f23a*/
    aP5_48 = 0; /*0x55f23e*/
    aP5_52 = 0; /*0x55f242*/
    aP5_56 = 500; /*0x55f246*/
    aP5_60 = 15; /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &aP5_40,
               (size_t)a2f,
               *(IUnknown **)&stru_87C374[44968],
               &aP5_48,
               (int)&aP5_32,
               *(ObjectClass **)(stru_B05488.field_4C + 4 * Type),
               31,
               6,
               LODWORD(aP5_64),
               HIDWORD(aP5_64),
               *(_DWORD *)&HouseClass_Player[29924] + 4700);
  }
  if ( HouseClass_Player[31593] ) /*0x55f286*/
  {
    result = *(int **)&HouseClass_Player[29932]; /*0x55f28c*/
    if ( *(_DWORD *)&HouseClass_Player[29932] > 2u ) /*0x55f293*/
    {
      v2 = *(DSurface **)&stru_87C374[44968]; /*0x55f2b1*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374[45772] + 12))(*(_DWORD *)&stru_87C374[45772]); /*0x55f2b9*/
      int v3 = v2->field_0; /*0x55f2bc*/
      aP5_48 = 0; /*0x55f2c6*/
      aP5_52 = 300; /*0x55f2ca*/
      aP5_56 = 639; /*0x55f2d2*/
      aP5_60 = 230; /*0x55f2da*/
      (*(void (__thiscall **)(DSurface *, int *, _DWORD))(v3 + 20))(v2, &aP5_48, 0); /*0x55f2e2*/
      swprintf( /*0x55f2f6*/
        &aP5_72,
        (const size_t)&off_82A224,
        *(const wchar_t *const *)&HouseClass_Player[45112],
        (CampaignScore *)aP5_24);
      aP5_32 = 0; /*0x55f308*/
      aP5_36 = 302; /*0x55f30f*/
      BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f317*/
  _DWORD *v5; // eax
      v5 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f32b*/
                       v2,
                       &aP5_48,
                       &aP5_32,
                       BuildingAnimByName,
                       0,
                       25);
      TextRenderer::DrawText( /*0x55f33a*/
        &aP5_36,
        (size_t)&aP5_64 + 4,
        (IUnknown *)v2,
        v5,
        aP5_4,
        (ObjectClass *)Format,
        aP5_12,
        aP5_16);
      swprintf((wchar_t *const)&aP5_64 + 2, (const size_t)&off_82A210, (const wchar_t *const)dword_ABCD44, v38); /*0x55f34f*/
      v51 = 0; /*0x55f361*/
      aP5_32 = 312; /*0x55f368*/
      int v6 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f370*/
  _DWORD *v7; // eax
      v7 = (_DWORD *)(*(int (__thiscall **)(DSurface *, wchar_t *, wchar_t **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f384*/
                       v2,
                       &aP5_44,
                       &v51,
                       v6,
                       0,
                       25);
      TextRenderer::DrawText( /*0x55f393*/
        &aP5_32,
        (size_t)&aP5_64,
        (IUnknown *)v2,
        v7,
        (int)v44,
        (ObjectClass *)aP5_4,
        (int)Format,
        aP5_12);
      swprintf( /*0x55f3a9*/
        (wchar_t *const)&aP5_64,
        (const size_t)&off_82A1F4,
        *(const wchar_t *const *)&HouseClass_Player[30724],
        v33);
      aP5_24 = 0; /*0x55f3b1*/
      v51 = (wchar_t *)322; /*0x55f3b5*/
      aP5_12 = 25; /*0x55f3bd*/
      int v8 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f3ca*/
  _DWORD *v9; // eax
      v9 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD))(v2->field_0 + 120))( /*0x55f3de*/
                       v2,
                       &aP5_40,
                       &aP5_24,
                       v8,
                       0);
      TextRenderer::DrawText( /*0x55f3ed*/
        (int *)&v51,
        (size_t)&aP5_60,
        (IUnknown *)v2,
        v9,
        (int)v39,
        (ObjectClass *)v44,
        aP5_4,
        (int)Format);
      QueueSize = IPXManagerClass::GetQueueSize(&HouseClass_Player[44148]); /*0x55f3fa*/
      swprintf( /*0x55f429*/
        (wchar_t *const)&aP5_60,
        (const size_t)&off_82A1D0,
        (const wchar_t *const)((int)(1000 * QueueSize) / 60),
        (CampaignScore *)0x19);
      aP5_20 = 0; /*0x55f43b*/
      aP5_24 = 332; /*0x55f442*/
      int v11 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f44a*/
  _DWORD *v12; // eax
      v12 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f45e*/
                        v2,
                        &aP5_36,
                        &aP5_20,
                        v11,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_24, (size_t)&aP5_56, (IUnknown *)v2, v12, _0, (ObjectClass *)v40, (int)v44, aP5_4); /*0x55f46d*/
      swprintf( /*0x55f483*/
        (wchar_t *const)&aP5_56,
        (const size_t)&off_82A1B4,
        *(const wchar_t *const *)&HouseClass_Player[30732],
        v27);
      aP5_16 = 0; /*0x55f495*/
      aP5_20 = 342; /*0x55f49c*/
      int v13 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f4a4*/
  _DWORD *v14; // eax
      v14 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f4b8*/
                        v2,
                        &aP5_32,
                        &aP5_16,
                        v13,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_20, (size_t)&aP5_52, (IUnknown *)v2, v14, _FFFFFFFCa, v45, (int)v41, (int)v44); /*0x55f4c7*/
      swprintf( /*0x55f4e1*/
        (wchar_t *const)&aP5_52,
        (const size_t)&off_828788,
        *(const wchar_t *const *)(**(_DWORD **)&HouseClass_Player[40236] + 115),
        v25);
      aP5_12 = 0; /*0x55f4f3*/
      aP5_16 = 352; /*0x55f4fa*/
      int v15 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f502*/
  _DWORD *v16; // eax
      v16 = (_DWORD *)(*(int (__thiscall **)(DSurface *, wchar_t **, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f516*/
                        v2,
                        &v51,
                        &aP5_12,
                        v15,
                        0,
                        25);
  int v34; // [esp-8h] [ebp-258h]
  int v46; // [esp+0h] [ebp-250h]
      TextRenderer::DrawText(&aP5_16, (size_t)&aP5_48, (IUnknown *)v2, v16, v34, _FFFFFFFCb, v46, (int)v42); /*0x55f525*/
      swprintf( /*0x55f550*/
        (wchar_t *const)&aP5_48,
        (const size_t)&off_828708,
        (const wchar_t *const)(1000 * *(_DWORD *)&HouseClass_Player[42376] / 0x3Cu),
        v24);
      Format = 0; /*0x55f562*/
      aP5_12 = 362; /*0x55f569*/
      int v17 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f571*/
  _DWORD *v18; // eax
      v18 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, wchar_t **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f585*/
                        v2,
                        &aP5_24,
                        &Format,
                        v17,
                        0,
                        25);
  int v30; // [esp-Ch] [ebp-25Ch]
  int v47; // [esp+0h] [ebp-250h]
      TextRenderer::DrawText(&aP5_12, (size_t)&aP5_44, (IUnknown *)v2, v18, v30, v35, _FFFFFFFCc, v47); /*0x55f594*/
      swprintf( /*0x55f5c2*/
        &aP5_44,
        (const size_t)&off_82A1A0,
        *(const wchar_t *const *)&stru_87C374[44980],
        *(CampaignScore **)&stru_87C374[44984]);
      aP5_4 = 0; /*0x55f5d4*/
      Format = (wchar_t *)372; /*0x55f5db*/
      int v19 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f5e3*/
  _DWORD *v20; // eax
      v20 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f5f7*/
                        v2,
                        &aP5_20,
                        &aP5_4,
                        v19,
                        0,
                        25);
  int v28; // [esp-10h] [ebp-260h]
  int v36; // [esp-8h] [ebp-258h]
      TextRenderer::DrawText((int *)&Format, (size_t)&aP5_40, (IUnknown *)v2, v20, v28, v31, v36, _FFFFFFFCd); /*0x55f606*/
      swprintf((wchar_t *const)&aP5_40, (const size_t)&off_82A18C, (const wchar_t *const)stru_ABCDFC.FileSize, v23); /*0x55f61b*/
      v44 = 0; /*0x55f62d*/
      aP5_4 = 382; /*0x55f634*/
      int v21 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f63c*/
  _DWORD *v22; // eax
      v22 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, AbstractClass **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f650*/
                        v2,
                        &aP5_16,
                        &v44,
                        v21,
                        0,
                        25);
  int v26; // [esp-14h] [ebp-264h]
  int v32; // [esp-Ch] [ebp-25Ch]
  int v37; // [esp-8h] [ebp-258h]
      TextRenderer::DrawText(&aP5_4, (size_t)&aP5_36, (IUnknown *)v2, v22, v26, v29, v32, v37); /*0x55f65f*/
      ScoreBoard::Render((CampaignScore *)&HouseClass_Player[44148]); /*0x55f66c*/
      return (*(int *(__thiscall **)(_DWORD, int, int, wchar_t *, AbstractClass *, int, wchar_t *, int, int, int))(**(_DWORD **)&stru_87C374[45772] + 16))( /*0x55f679*/
               *(_DWORD *)&stru_87C374[45772],
               _FFFFFFFCe,
  int v48; // [esp+0h] [ebp-250h]
               v48,
               v43,
               v44,
               aP5_4,
               Format,
               aP5_12,
               aP5_16,
               aP5_20);
    }
  }
  return result; /*0x55f67c*/
}
}
} // namespace gamemd

// 0x55F970
namespace gamemd {
int unknown_libname_21()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_21()
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
} // namespace gamemd

// 0x55FDB0
namespace gamemd {
int Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  LRESULT v9; // eax
  wchar_t *v14; // edi
  HWND v15; // eax
  HWND v16; // esi
  wchar_t *String; // eax
  HWND DlgItem; // eax
  HWND v19; // edi
  LPARAM v21; // edi
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
        if ( DataGlobal_A8EB95 ) /*0x560181*/
          _DWORD * v20 = (_DWORD *)sub_4A4900(4096, 4096, 16); /*0x56018d*/
        else
          v20 = (_DWORD *)sub_4A4900(1024, 768, 16); /*0x5601a3*/
        v21 = 0; /*0x5601a8*/
        dword_ABCF58 = v20; /*0x5601aa*/
        int * v22 = v20; /*0x5601b1*/
        wParama = -1; /*0x5601b3*/
        v50 = 0; /*0x5601bb*/
        if ( v20 && *v20 ) /*0x5601c9*/
        {
          do /*0x56024d*/
          {
            int v23 = *v22; /*0x5601d2*/
            int v24 = v22[1]; /*0x5601d4*/
            v22 += 2; /*0x5601e0*/
            if ( DataGlobal_A8EB95 || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, stru_82A2C4, v23, v24); /*0x560220*/
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
          SendMessageA(v27, 0x405u, 1u, DataGlobal_A8EB64); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA(v28, 0xF1u, DataGlobal_A8EB7E != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA(v29, 0xF1u, MCV_DeployModeEnabled != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA(v30, 0xF1u, DataGlobal_A8EB80 != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA(v31, 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA(v32, 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA(v32, 0x405u, 1u, 6 - DataGlobal_A8EB70); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA(v34, 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA(v35, 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(DataGlobal_A8EBA0 * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA(v35, 0x405u, 1u, v36); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA(v37, 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA(v38, 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(DataGlobal_A8EB98 * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA(v38, 0x405u, 1u, v39); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA(v40, 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA(v41, 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&DataGlobal_A8EB9C * 10.0 + 0.5); /*0x560455*/
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
            unsigned int v12 = HIWORD(a3); /*0x55ff75*/
            if ( a4 == GetDlgItem(hWnd, 1323) ) /*0x55ff87*/
            {
              unsigned int v13 = HIWORD(a3); /*0x55ff8b*/
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
                    float v43 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x56004e*/
                    Options::SetScoreVolume((float *)g_GameModeOptions, v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    float v44 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Options::SetSoundVolume((float *)g_GameModeOptions, v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  float v45 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Options::SetVoiceVolume((float *)g_GameModeOptions, v45, 1); /*0x5600fb*/
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
                int v10 = *((_DWORD *)dword_ABCF58 + 2 * v9); /*0x55fefd*/
                dword_ABCE94 = v10; /*0x55ff00*/
                int v11 = *((_DWORD *)dword_ABCF58 + 2 * v9 + 1); /*0x55ff06*/
                dword_ABCE98 = v11; /*0x55ff10*/
                if ( v10 != g_CommandLineFlags || v11 != DataGlobal_A8EB88 ) /*0x55ff1f*/
                {
                  DataGlobal_A8EB88 = v11; /*0x55ff27*/
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
} // namespace gamemd

// 0x5509E0
namespace gamemd {
void nullsub_21()
{
  ;
}
} // namespace gamemd

// 0x5512C0
namespace gamemd {
void nullsub_22()
{
  ;
}
} // namespace gamemd

// 0x5517A0
namespace gamemd {
void sub_5517A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC8E0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5517D0
namespace gamemd {
void sub_5517D0()
{
{
    DataGlobal_ABC930 = DataGlobal_ABC8E0 / 60.0;
}
}
} // namespace gamemd

// 0x5517F0
namespace gamemd {
void sub_5517F0()
{
{
    DataGlobal_ABC918 = 1.0 / DataGlobal_ABC930;
}
}
} // namespace gamemd

// 0x551810
namespace gamemd {
void sub_551810()
{
{
    DataGlobal_ABC910 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x551830
namespace gamemd {
void sub_551830()
{
{
    DataGlobal_ABC8E8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x551850
namespace gamemd {
void sub_551850()
{
{
    DataGlobal_ABC8C0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x551870
namespace gamemd {
long long sub_551870()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC8C0 - DataGlobal_ABC8E8);
    result = Math::RoundToInt(v0 * DataGlobal_ABC8E0 * 0.5);
    DataGlobal_ABC938 = result;
    return result;
}
}
} // namespace gamemd

// 0x5518B0
namespace gamemd {
void sub_5518B0()
{
{
    DataGlobal_ABC8F0 = Math::ArcTan((double)DataGlobal_ABC938 * 0.00390625);
}
}
} // namespace gamemd

// 0x5518E0
namespace gamemd {
void sub_5518E0()
{
{
    DataGlobal_ABC908 = Math::ArcTan((double)(2 * DataGlobal_ABC938) / DataGlobal_ABC8E0);
}
}
} // namespace gamemd

// 0x551910
namespace gamemd {
long long sub_551910()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC938) + 0.5);
    DataGlobal_ABC92C = result;
    return result;
}
}
} // namespace gamemd

// 0x551940
namespace gamemd {
int sub_551940()
{
{
    DataGlobal_ABC8D8 = 0;
    DataGlobal_ABC8DA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x551950
namespace gamemd {
int sub_551950()
{
{
    DataGlobal_ABC8F8 = 0;
    DataGlobal_ABC8FC = 0;
    DataGlobal_ABC900 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x551970
namespace gamemd {
int sub_551970()
{
{
    DataGlobal_ABC928 = 0;
    DataGlobal_ABC920 = 128;
    DataGlobal_ABC924 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x551990
namespace gamemd {
int sub_551990()
{
{
    DataGlobal_ABC8C8 = 0;
    DataGlobal_ABC8CC = 0;
    DataGlobal_ABC8D0 = 0;
    DataGlobal_ABC8D4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x552830
namespace gamemd {
int sub_552830()
{
{
    DataGlobal_ABC948 = 0;
    DataGlobal_ABC94C = 0;
    DataGlobal_ABC950 = 0;
    DataGlobal_ABC954 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x552850
namespace gamemd {
void sub_552850()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC960 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x552880
namespace gamemd {
void sub_552880()
{
{
    DataGlobal_ABC9B0 = DataGlobal_ABC960 / 60.0;
}
}
} // namespace gamemd

// 0x5528A0
namespace gamemd {
void sub_5528A0()
{
{
    DataGlobal_ABC998 = 1.0 / DataGlobal_ABC9B0;
}
}
} // namespace gamemd

// 0x5528C0
namespace gamemd {
void sub_5528C0()
{
{
    DataGlobal_ABC990 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5528E0
namespace gamemd {
void sub_5528E0()
{
{
    DataGlobal_ABC968 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x552900
namespace gamemd {
void sub_552900()
{
{
    DataGlobal_ABC940 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x552920
namespace gamemd {
long long sub_552920()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC940 - DataGlobal_ABC968);
    result = Math::RoundToInt(v0 * DataGlobal_ABC960 * 0.5);
    DataGlobal_ABC9B8 = result;
    return result;
}
}
} // namespace gamemd

// 0x552960
namespace gamemd {
void sub_552960()
{
{
    DataGlobal_ABC970 = Math::ArcTan((double)DataGlobal_ABC9B8 * 0.00390625);
}
}
} // namespace gamemd

// 0x552990
namespace gamemd {
void sub_552990()
{
{
    DataGlobal_ABC988 = Math::ArcTan((double)(2 * DataGlobal_ABC9B8) / DataGlobal_ABC960);
}
}
} // namespace gamemd

// 0x5529C0
namespace gamemd {
long long sub_5529C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC9B8) + 0.5);
    DataGlobal_ABC9AC = result;
    return result;
}
}
} // namespace gamemd

// 0x5529F0
namespace gamemd {
int sub_5529F0()
{
{
    DataGlobal_ABC958 = 0;
    DataGlobal_ABC95A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x552A00
namespace gamemd {
int sub_552A00()
{
{
    DataGlobal_ABC978 = 0;
    DataGlobal_ABC97C = 0;
    DataGlobal_ABC980 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x552A20
namespace gamemd {
int sub_552A20()
{
{
    DataGlobal_ABC9A8 = 0;
    DataGlobal_ABC9A0 = 128;
    DataGlobal_ABC9A4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x554430
namespace gamemd {
void sub_554430()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC9E8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x554460
namespace gamemd {
void sub_554460()
{
{
    DataGlobal_ABCA68 = DataGlobal_ABC9E8 / 60.0;
}
}
} // namespace gamemd

// 0x554480
namespace gamemd {
void sub_554480()
{
{
    DataGlobal_ABCA38 = 1.0 / DataGlobal_ABCA68;
}
}
} // namespace gamemd

// 0x5544A0
namespace gamemd {
void sub_5544A0()
{
{
    DataGlobal_ABCA30 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5544C0
namespace gamemd {
void sub_5544C0()
{
{
    DataGlobal_ABC9F0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5544E0
namespace gamemd {
void sub_5544E0()
{
{
    DataGlobal_ABC9C8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x554500
namespace gamemd {
long long sub_554500()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC9C8 - DataGlobal_ABC9F0);
    result = Math::RoundToInt(v0 * DataGlobal_ABC9E8 * 0.5);
    DataGlobal_ABCA70 = result;
    return result;
}
}
} // namespace gamemd

// 0x554540
namespace gamemd {
void sub_554540()
{
{
    DataGlobal_ABC9F8 = Math::ArcTan((double)DataGlobal_ABCA70 * 0.00390625);
}
}
} // namespace gamemd

// 0x554570
namespace gamemd {
void sub_554570()
{
{
    DataGlobal_ABCA28 = Math::ArcTan((double)(2 * DataGlobal_ABCA70) / DataGlobal_ABC9E8);
}
}
} // namespace gamemd

// 0x5545A0
namespace gamemd {
long long sub_5545A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCA70) + 0.5);
    DataGlobal_ABCA64 = result;
    return result;
}
}
} // namespace gamemd

// 0x5545D0
namespace gamemd {
int sub_5545D0()
{
{
    DataGlobal_ABC9E0 = 0;
    DataGlobal_ABC9E2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5545E0
namespace gamemd {
int sub_5545E0()
{
{
    DataGlobal_ABCA00 = 0;
    DataGlobal_ABCA04 = 0;
    DataGlobal_ABCA08 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x554600
namespace gamemd {
int sub_554600()
{
{
    DataGlobal_ABCA60 = 0;
    DataGlobal_ABCA58 = 128;
    DataGlobal_ABCA5C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x554620
namespace gamemd {
int sub_554620()
{
{
    DataGlobal_ABC9D0 = 0;
    DataGlobal_ABC9D4 = 0;
    DataGlobal_ABC9D8 = 0;
    DataGlobal_ABC9DC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x554640
namespace gamemd {
int sub_554640()
{
{
    DataGlobal_ABCA14 = 0;
    DataGlobal_ABCA18 = 0;
    DataGlobal_ABCA1C = 1;
    DataGlobal_ABCA1D = 0;
    DataGlobal_ABCA10 = (int)&vt_DynamicVectorClass_LightSourceClass;
    DataGlobal_ABCA24 = 10;
    g_BridgeCellPool = 0;
    return atexit(sub_554680);
}
}
} // namespace gamemd

// 0x554680
namespace gamemd {
void sub_554680()
{
{
    DataGlobal_ABCA10 = (int)&vt_VectorClass_LightSourceClass;
    if ( DataGlobal_ABCA14 && DataGlobal_ABCA1D )
  {
    __3_YAXPAX_Z(DataGlobal_ABCA14);
    DataGlobal_ABCA14 = 0;
  }
    DataGlobal_ABCA1D = 0;
    DataGlobal_ABCA18 = 0;
}
}
} // namespace gamemd

// 0x5546C0
namespace gamemd {
int sub_5546C0()
{
{
    DataGlobal_ABCA44 = 0;
    DataGlobal_ABCA48 = 0;
    DataGlobal_ABCA4C = 1;
    DataGlobal_ABCA4D = 0;
    DataGlobal_ABCA40 = (int)&vt_DynamicVectorClass_LightSourceClass_PendingCellClass;
    DataGlobal_ABCA54 = 10;
    DataGlobal_ABCA50 = 0;
    return atexit(sub_554700);
}
}
} // namespace gamemd

// 0x554700
namespace gamemd {
void sub_554700()
{
{
    if ( (DataGlobal_ABC9C0 & 1) == 0 )
  {
    DataGlobal_ABCA40 = (int)&vt_VectorClass_LightSourceClass_PendingCellClass;
    DataGlobal_ABC9C0 |= 1u;
    if ( DataGlobal_ABCA44 )
    {
    if ( DataGlobal_ABCA4D )
      {
    __3_YAXPAX_Z(DataGlobal_ABCA44);
    DataGlobal_ABCA44 = 0;
      }
    }
    DataGlobal_ABCA4D = 0;
    DataGlobal_ABCA48 = 0;
  }
}
}
} // namespace gamemd

// 0x5558C0
namespace gamemd {
int sub_5558C0()
{
{
    DataGlobal_ABCA88 = 0;
    DataGlobal_ABCA8C = 0;
    DataGlobal_ABCA90 = 0;
    DataGlobal_ABCA94 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x555AC0
namespace gamemd {
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
{
    int v4;
    int v5;
    int *result;
    int v7;
    v4 = *a1;
    if ( *a1 >= 1000 )
    v4 = 1000;
    *a1 = v4;
    v5 = *a2;
    if ( *a2 >= 1000 )
    v5 = 1000;
    *a2 = v5;
    result = a3;
    v7 = *a3;
    if ( *a3 >= 1000 )
    v7 = 1000;
    *a3 = v7;
    *a1 &= (*a1 <= 0) - 1;
    *a2 &= (*a2 <= 0) - 1;
    *a3 &= (*a3 <= 0) - 1;
    if ( g_lParam )
  {
    if ( g_lParam == 1 )
    {
    *a1 &= 0xFFFFFFC0;
    *a2 &= 0xFFFFFFC0;
    *a3 &= 0xFFFFFFC0;
    }
    else if ( g_lParam == 2 )
    {
    *a1 &= 0xFFFFFFE0;
    *a2 &= 0xFFFFFFE0;
    *a3 &= 0xFFFFFFE0;
    }
  }
    else
  {
    *a1 &= 0xFFFFFF80;
    *a2 &= 0xFFFFFF80;
    *a3 &= 0xFFFFFF80;
  }
    return result;
}
}
} // namespace gamemd

// 0x555B90
namespace gamemd {
int sub_555B90()
{
{
    DataGlobal_ABCAA0 = 0;
    DataGlobal_ABCAA4 = 0;
    DataGlobal_ABCAA8 = 0;
    DataGlobal_ABCAAC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x555BB0
namespace gamemd {
void sub_555BB0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCAB8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x555BE0
namespace gamemd {
void sub_555BE0()
{
{
    DataGlobal_ABCB08 = DataGlobal_ABCAB8 / 60.0;
}
}
} // namespace gamemd

// 0x555C00
namespace gamemd {
void sub_555C00()
{
{
    DataGlobal_ABCAF0 = 1.0 / DataGlobal_ABCB08;
}
}
} // namespace gamemd

// 0x555C20
namespace gamemd {
void sub_555C20()
{
{
    DataGlobal_ABCAE8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x555C40
namespace gamemd {
void sub_555C40()
{
{
    DataGlobal_ABCAC0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x555C60
namespace gamemd {
void sub_555C60()
{
{
    DataGlobal_ABCA98 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x555C80
namespace gamemd {
long long sub_555C80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCA98 - DataGlobal_ABCAC0);
    result = Math::RoundToInt(v0 * DataGlobal_ABCAB8 * 0.5);
    DataGlobal_ABCB10 = result;
    return result;
}
}
} // namespace gamemd

// 0x555CC0
namespace gamemd {
void sub_555CC0()
{
{
    DataGlobal_ABCAC8 = Math::ArcTan((double)DataGlobal_ABCB10 * 0.00390625);
}
}
} // namespace gamemd

// 0x555CF0
namespace gamemd {
void sub_555CF0()
{
{
    DataGlobal_ABCAE0 = Math::ArcTan((double)(2 * DataGlobal_ABCB10) / DataGlobal_ABCAB8);
}
}
} // namespace gamemd

// 0x555D20
namespace gamemd {
long long sub_555D20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCB10) + 0.5);
    DataGlobal_ABCB04 = result;
    return result;
}
}
} // namespace gamemd

// 0x555D50
namespace gamemd {
int sub_555D50()
{
{
    DataGlobal_ABCAB0 = 0;
    DataGlobal_ABCAB2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x555D60
namespace gamemd {
int sub_555D60()
{
{
    DataGlobal_ABCAD0 = 0;
    DataGlobal_ABCAD4 = 0;
    DataGlobal_ABCAD8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x555D80
namespace gamemd {
int sub_555D80()
{
{
    DataGlobal_ABCB00 = 0;
    DataGlobal_ABCAF8 = 128;
    DataGlobal_ABCAFC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x556510
namespace gamemd {
int E4Recv_556510::sub_556510()
{
{
    *(void**)this = vt_LightConvertClass;
    return sub_490400(this);
}
}
} // namespace gamemd

// 0x556520
namespace gamemd {
LightConvertClass * E4Recv_556520::sub_556520(char a2)
{
{
    *(void**)this = &vt_LightConvertClass;
    sub_490400((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LightConvertClass *)this;
}
}
} // namespace gamemd

// 0x556790
namespace gamemd {
void sub_556790()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCB38 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x5567C0
namespace gamemd {
void sub_5567C0()
{
{
    DataGlobal_ABCBA0 = DataGlobal_ABCB38 / 60.0;
}
}
} // namespace gamemd

// 0x5567E0
namespace gamemd {
void sub_5567E0()
{
{
    DataGlobal_ABCB70 = 1.0 / DataGlobal_ABCBA0;
}
}
} // namespace gamemd

// 0x556800
namespace gamemd {
void sub_556800()
{
{
    DataGlobal_ABCB68 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x556820
namespace gamemd {
void sub_556820()
{
{
    DataGlobal_ABCB40 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x556840
namespace gamemd {
void sub_556840()
{
{
    DataGlobal_ABCB18 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x556860
namespace gamemd {
long long sub_556860()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCB18 - DataGlobal_ABCB40);
    result = Math::RoundToInt(v0 * DataGlobal_ABCB38 * 0.5);
    DataGlobal_ABCBA8 = result;
    return result;
}
}
} // namespace gamemd

// 0x5568A0
namespace gamemd {
void sub_5568A0()
{
{
    DataGlobal_ABCB48 = Math::ArcTan((double)DataGlobal_ABCBA8 * 0.00390625);
}
}
} // namespace gamemd

// 0x5568D0
namespace gamemd {
void sub_5568D0()
{
{
    DataGlobal_ABCB60 = Math::ArcTan((double)(2 * DataGlobal_ABCBA8) / DataGlobal_ABCB38);
}
}
} // namespace gamemd

// 0x556900
namespace gamemd {
long long sub_556900()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCBA8) + 0.5);
    DataGlobal_ABCB9C = result;
    return result;
}
}
} // namespace gamemd

// 0x556930
namespace gamemd {
int sub_556930()
{
{
    DataGlobal_ABCB30 = 0;
    DataGlobal_ABCB32 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x556940
namespace gamemd {
int sub_556940()
{
{
    DataGlobal_ABCB50 = 0;
    DataGlobal_ABCB54 = 0;
    DataGlobal_ABCB58 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x556960
namespace gamemd {
int sub_556960()
{
{
    DataGlobal_ABCB98 = 0;
    DataGlobal_ABCB90 = 128;
    DataGlobal_ABCB94 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x556980
namespace gamemd {
int sub_556980()
{
{
    DataGlobal_ABCB20 = 0;
    DataGlobal_ABCB24 = 0;
    DataGlobal_ABCB28 = 0;
    DataGlobal_ABCB2C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5569A0
namespace gamemd {
int sub_5569A0()
{
{
    DataGlobal_ABCB7C = 0;
    DataGlobal_ABCB80 = 0;
    DataGlobal_ABCB84 = 1;
    DataGlobal_ABCB85 = 0;
    DataGlobal_ABCB78 = (int)&vt_DynamicVectorClass_LineTrail;
    DataGlobal_ABCB8C = 10;
    DataGlobal_ABCB88 = 0;
    return atexit(sub_5569E0);
}
}
} // namespace gamemd

// 0x5569E0
namespace gamemd {
void sub_5569E0()
{
{
    DataGlobal_ABCB78 = (int)&vt_VectorClass_LineTrail;
    if ( DataGlobal_ABCB7C && DataGlobal_ABCB85 )
  {
    __3_YAXPAX_Z(DataGlobal_ABCB7C);
    DataGlobal_ABCB7C = 0;
  }
    DataGlobal_ABCB85 = 0;
    DataGlobal_ABCB80 = 0;
}
}
} // namespace gamemd

// 0x557210
namespace gamemd {
int sub_557210()
{
{
    DataGlobal_ABCBB0 = 0;
    DataGlobal_ABCBB4 = 0;
    DataGlobal_ABCBB8 = 0;
    DataGlobal_ABCBBC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5581A0
namespace gamemd {
int E4Recv_5581A0::sub_5581A0(GaugeClass * aP1)
{
{
    ControlClass::CtorFromData((int *)this, (EditClass *)aP1);
    this->M44 = aP1[1].GaugeClass_field_0x0C;
    this->M45 = BYTE1(aP1[1].GaugeClass_field_0x0C);
    this->M46 = BYTE2(aP1[1].GaugeClass_field_0x0C);
    this->M48 = aP1[1].GaugeClass_field_0x10;
    this->M52 = aP1[1].GaugeClass_field_0x14;
    this->M56 = aP1[1].GaugeClass_field_0x18;
    *(int *)this = &vt_GaugeClass;
    return this;
}
}
} // namespace gamemd

// 0x5584F0
namespace gamemd {
size_t sub_5584F0(char * a1, void * a2)
{
{
    size_t v2;
    int v3;
    BombClass *v4;
    if ( !a1 || !a2 )
    return 0;
    v2 = *(int *)(a1 + 2);
    v3 = *a1 - 3;
    v4 = (BombClass *)&a1[*((short *)(a1) + 3) + 8];
    if ( v3 )
  {
    if ( v3 != 1 )
    {
    memcpy(a2, (AbstractClass *)v4, v2);
    return v2;
    }
    BitStreamIOLCW((unsigned char *)v4, (unsigned int)a2, v2);
  }
    return v2;
}
}
} // namespace gamemd

// 0x558530
namespace gamemd {
int sub_558530()
{
{
    DataGlobal_ABCBC8 = 0;
    DataGlobal_ABCBCC = 0;
    DataGlobal_ABCBD0 = 0;
    DataGlobal_ABCBD4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x558550
namespace gamemd {
void sub_558550()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCBE0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x558580
namespace gamemd {
void sub_558580()
{
{
    DataGlobal_ABCC30 = DataGlobal_ABCBE0 / 60.0;
}
}
} // namespace gamemd

// 0x5585A0
namespace gamemd {
void sub_5585A0()
{
{
    DataGlobal_ABCC18 = 1.0 / DataGlobal_ABCC30;
}
}
} // namespace gamemd

// 0x5585C0
namespace gamemd {
void sub_5585C0()
{
{
    DataGlobal_ABCC10 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5585E0
namespace gamemd {
void sub_5585E0()
{
{
    DataGlobal_ABCBE8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x558600
namespace gamemd {
void sub_558600()
{
{
    DataGlobal_ABCBC0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x558620
namespace gamemd {
long long sub_558620()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCBC0 - DataGlobal_ABCBE8);
    result = Math::RoundToInt(v0 * DataGlobal_ABCBE0 * 0.5);
    DataGlobal_ABCC38 = result;
    return result;
}
}
} // namespace gamemd

// 0x558660
namespace gamemd {
void sub_558660()
{
{
    DataGlobal_ABCBF0 = Math::ArcTan((double)DataGlobal_ABCC38 * 0.00390625);
}
}
} // namespace gamemd

// 0x558690
namespace gamemd {
void sub_558690()
{
{
    DataGlobal_ABCC08 = Math::ArcTan((double)(2 * DataGlobal_ABCC38) / DataGlobal_ABCBE0);
}
}
} // namespace gamemd

// 0x5586C0
namespace gamemd {
long long sub_5586C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCC38) + 0.5);
    DataGlobal_ABCC2C = result;
    return result;
}
}
} // namespace gamemd

// 0x5586F0
namespace gamemd {
int sub_5586F0()
{
{
    DataGlobal_ABCBD8 = 0;
    DataGlobal_ABCBDA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x558700
namespace gamemd {
int sub_558700()
{
{
    DataGlobal_ABCBF8 = 0;
    DataGlobal_ABCBFC = 0;
    DataGlobal_ABCC00 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x558720
namespace gamemd {
int sub_558720()
{
{
    DataGlobal_ABCC28 = 0;
    DataGlobal_ABCC20 = 128;
    DataGlobal_ABCC24 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5588E0
namespace gamemd {
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
{
    LRESULT result;
    LRESULT v7;
    HWND DlgItem;
    HWND v9;
    HWND v10;
    LRESULT v11;
    result = GetWindowLongA(hDlg, 8);
    v11 = result;
    if ( a2 == 1319 )
  {
    if ( a4 == 1 )
    {
    result = SendMessageA(hWnd, 0x18Bu, 0, 0);
    if ( result > 0 )
      {
    result = SendMessageA(hWnd, 0x188u, 0, 0);
    if ( result != -1 )
        {
    v7 = SendMessageA(hWnd, 0x199u, result, 0);
    if ( *(char *)(v7 + 436) && !*(char *)(v7 + 437) || (v7 = *(int *)(v11 + 12)) != 0 )
          {
    DlgItem = GetDlgItem(hDlg, 1318);
    SendMessageA(DlgItem, 0x4B2u, 0, v7);
          }
    v9 = GetDlgItem(hDlg, 1318);
    SetFocus(v9);
    v10 = GetDlgItem(hDlg, 1318);
    return SendMessageA(v10, 0xB1u, 0, -1);
        }
      }
    }
  }
    else if ( a2 == 1670 )
  {
    if ( !a4 )
    *(int *)(result + 24) = 2;
  }
    else if ( a2 == 1735 && !a4 )
  {
    *(int *)(result + 24) = 1;
  }
    return result;
}
}
} // namespace gamemd

// 0x558A30
namespace gamemd {
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
{
    int result;
    unsigned int v5;
    LONG WindowLongA;
    LONG v7;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0, 315);
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen((int *)a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: v5 = HIWORD(a3);
    WindowLongA = GetWindowLongA(hWnd, 8);
    v7 = WindowLongA;
    switch ( (unsigned short)a3 )
          {
    case 0x40Fu: if ( !v5 )
              {
    *(int *)(WindowLongA + 24) = 1039;
    return 0;
              }
    break;
    case 0x525u: if ( v5 == 2 && SendMessageA(a4, 0x18Bu, 0, 0) > 0 )
              {
    *(int *)(v7 + 24) = 1039;
    return 0;
              }
    break;
    case 0x686u: *(int *)(WindowLongA + 24) = 2;
    return 0;
          }
    break;
      }
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x558B90
namespace gamemd {
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
{
    int result;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    DlgItem = GetDlgItem(hWnd, 1318);
    SendMessageA(DlgItem, 0xC5u, 0x4Fu, 0);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0, 315);
      }
    else if ( a2 == 1242 )
      {
    *(int *)(GetWindowLongA(hWnd, 8) + 24) = 1;
    return 0;
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen((int *)a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: sub_5588E0(hWnd, (unsigned short)a3, a4, HIWORD(a3));
    return 0;
      }
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x558CB0
namespace gamemd {
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
{
    int result;
    unsigned int v5;
    LONG WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4);
    if ( !result )
  {
    if ( a2 > 0x216 )
    {
    if ( a2 == 1175 )
      {
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0xF9u, 2);
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0x38u, 255);
    SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0, 315);
      }
    }
    else
    {
    switch ( a2 )
      {
    case 0x216u: return (unsigned char)Window::ClampToScreen(a4);
    case 0xFu: Dialog::StopBink(hWnd);
    return 1;
    case 0x111u: v5 = HIWORD(a3);
    WindowLongA = GetWindowLongA(hWnd, 8);
    if ( (unsigned short)a3 == 1670 )
          {
    if ( !v5 )
            {
    *(int *)(WindowLongA + 24) = 2;
    return 0;
            }
          }
    else if ( (unsigned short)a3 == 1736 && !v5 )
          {
    *(int *)(WindowLongA + 24) = 1;
    return 0;
          }
    break;
      }
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x5595F0
namespace gamemd {
int E4Recv_5595F0::sub_5595F0(char * Buffer)
{
{
    int v3;
    const char *v5;
    int v6[22];
    char v7[12];
    int v8;
    CCFileClass::Construct3((int)v6);
    do
  {
    v5 = this->M8;
    v3 = rand();
    sprintf(Buffer, DataGlobal_829EE8, v3, v5);
    FileClass::SetFileName(v6, Buffer);
  }
    while ( CCFileClass::Open(v6, 0) == 1 );
    v6[0] = &vt_CCFileClass;
    v8 = 0;
    Vector::Clear((int)v7);
    v6[0] = &DataGlobal_7E1668;
    return BufferIOFileClass::Dtor(v6);
}
}
} // namespace gamemd

// 0x559D30
namespace gamemd {
int sub_559D30(const void * a1, const void * a2)
{
{
    return -CompareFileTime((const FILETIME *)(*(int *)(a1) + 428), (const FILETIME *)(*(int *)(a2) + 428));
}
}
} // namespace gamemd

// 0x55A4B0
namespace gamemd {
int sub_55A4B0()
{
{
    DataGlobal_ABCC48 = 0;
    DataGlobal_ABCC4C = 0;
    DataGlobal_ABCC50 = 0;
    DataGlobal_ABCC54 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55A4D0
namespace gamemd {
void sub_55A4D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCC60 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x55A500
namespace gamemd {
void sub_55A500()
{
{
    DataGlobal_ABCCB0 = DataGlobal_ABCC60 / 60.0;
}
}
} // namespace gamemd

// 0x55A520
namespace gamemd {
void sub_55A520()
{
{
    DataGlobal_ABCC98 = 1.0 / DataGlobal_ABCCB0;
}
}
} // namespace gamemd

// 0x55A540
namespace gamemd {
void sub_55A540()
{
{
    DataGlobal_ABCC90 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x55A560
namespace gamemd {
void sub_55A560()
{
{
    DataGlobal_ABCC68 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x55A580
namespace gamemd {
void sub_55A580()
{
{
    DataGlobal_ABCC40 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x55A5A0
namespace gamemd {
long long sub_55A5A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCC40 - DataGlobal_ABCC68);
    result = Math::RoundToInt(v0 * DataGlobal_ABCC60 * 0.5);
    DataGlobal_ABCCB8 = result;
    return result;
}
}
} // namespace gamemd

// 0x55A5E0
namespace gamemd {
void sub_55A5E0()
{
{
    DataGlobal_ABCC70 = Math::ArcTan((double)DataGlobal_ABCCB8 * 0.00390625);
}
}
} // namespace gamemd

// 0x55A610
namespace gamemd {
void sub_55A610()
{
{
    DataGlobal_ABCC88 = Math::ArcTan((double)(2 * DataGlobal_ABCCB8) / DataGlobal_ABCC60);
}
}
} // namespace gamemd

// 0x55A640
namespace gamemd {
long long sub_55A640()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCCB8) + 0.5);
    DataGlobal_ABCCAC = result;
    return result;
}
}
} // namespace gamemd

// 0x55A670
namespace gamemd {
int sub_55A670()
{
{
    DataGlobal_ABCC58 = 0;
    DataGlobal_ABCC5A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55A680
namespace gamemd {
int sub_55A680()
{
{
    DataGlobal_ABCC78 = 0;
    DataGlobal_ABCC7C = 0;
    DataGlobal_ABCC80 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55A6A0
namespace gamemd {
int sub_55A6A0()
{
{
    DataGlobal_ABCCA8 = 0;
    DataGlobal_ABCCA0 = 128;
    DataGlobal_ABCCA4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x55AA60
namespace gamemd {
int IPersistStream_Load(int * a1, int * a2, int a3)
{
{
    int *v3;
    int result;
    int v5;
    int v6;
    int v7;
    int *v8;
    v3 = a2;
    if ( !a2 )
    return -2147467261;
    v5 = *a2;
    v8 = a2;
    a2 = a1;
    result = (*(int (__stdcall **)(int *, int **, int, int))(v5 + 16))(v8, &a2, 4, 0);
    if ( result >= 0 )
  {
    v6 = *v3;
    v7 = (*(int (__thiscall **)(int *, int))(*a1 + 36))(a1, 0);
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7);
    if ( result >= 0 )
    {
    if ( a3 )
    *((char *)(a1) + 17) = 0;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x55AC40
namespace gamemd {
void nullsub_164(int a1)
{
  ;
}
} // namespace gamemd

// 0x55AD30
namespace gamemd {
int sub_55AD30()
{
{
    DataGlobal_ABCCC8 = 0;
    DataGlobal_ABCCCC = 0;
    DataGlobal_ABCCD0 = 0;
    DataGlobal_ABCCD4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55AD50
namespace gamemd {
void sub_55AD50()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCCE0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x55AD80
namespace gamemd {
void sub_55AD80()
{
{
    DataGlobal_ABCD30 = DataGlobal_ABCCE0 / 60.0;
}
}
} // namespace gamemd

// 0x55ADA0
namespace gamemd {
void sub_55ADA0()
{
{
    DataGlobal_ABCD18 = 1.0 / DataGlobal_ABCD30;
}
}
} // namespace gamemd

// 0x55ADC0
namespace gamemd {
void sub_55ADC0()
{
{
    DataGlobal_ABCD10 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x55ADE0
namespace gamemd {
void sub_55ADE0()
{
{
    DataGlobal_ABCCE8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x55AE00
namespace gamemd {
void sub_55AE00()
{
{
    DataGlobal_ABCCC0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x55AE20
namespace gamemd {
long long sub_55AE20()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCCC0 - DataGlobal_ABCCE8);
    result = Math::RoundToInt(v0 * DataGlobal_ABCCE0 * 0.5);
    DataGlobal_ABCD38 = result;
    return result;
}
}
} // namespace gamemd

// 0x55AE60
namespace gamemd {
void sub_55AE60()
{
{
    DataGlobal_ABCCF0 = Math::ArcTan((double)DataGlobal_ABCD38 * 0.00390625);
}
}
} // namespace gamemd

// 0x55AE90
namespace gamemd {
void sub_55AE90()
{
{
    DataGlobal_ABCD08 = Math::ArcTan((double)(2 * DataGlobal_ABCD38) / DataGlobal_ABCCE0);
}
}
} // namespace gamemd

// 0x55AEC0
namespace gamemd {
long long sub_55AEC0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCD38) + 0.5);
    DataGlobal_ABCD2C = result;
    return result;
}
}
} // namespace gamemd

// 0x55AEF0
namespace gamemd {
int sub_55AEF0()
{
{
    DataGlobal_ABCCD8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55AF00
namespace gamemd {
int sub_55AF00()
{
{
    DataGlobal_ABCCF8 = 0;
    DataGlobal_ABCCFC = 0;
    DataGlobal_ABCD00 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55AF20
namespace gamemd {
int sub_55AF20()
{
{
    DataGlobal_ABCD28 = 0;
    DataGlobal_ABCD20 = 128;
    DataGlobal_ABCD24 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x55BB90
namespace gamemd {
int WriteCompressionBlock(Pipe * aP0, BlowStraw * aP1, CCINIClass * aP2, int * a3, int a5)
{
{
    int result;
    int *v6;
    char *v7;
    int v8;
    char *v9;
    result = 0;
    if ( aP1 )
  {
    if ( (unsigned int)aP1 > 0xD )
    {
    v6 = a3;
    result = CompressLCWBuffer(aP0, (int)aP1, (unsigned char *)aP2, a3, a5);
    if ( result )
    return result;
    }
    else
    {
    aP2->__pad_0[0] = (char)aP1 + 17;
    v7 = &aP2->__pad_0[1];
    do
      {
    *v7++ = aP0->__pad_0[0];
    aP0 = (Pipe *)((char *)(aP0) + 1);
    aP1 = (BlowStraw *)((char *)aP1 - 1);
      }
    while ( aP1 );
    v6 = a3;
    *a3 = v7 - (char *)aP2;
    }
  }
    else
  {
    v6 = a3;
    *a3 = 0;
  }
    v8 = *v6;
    aP2->__pad_0[v8] = 17;
    v9 = &aP2->__pad_0[v8 + 1];
    *v9 = 0;
    v9[1] = 0;
    *v6 += 3;
    return result;
}
}
} // namespace gamemd

// 0x55C9E0
namespace gamemd {
int sub_55C9E0()
{
{
    DataGlobal_ABCD68 = 0;
    DataGlobal_ABCD6C = 0;
    DataGlobal_ABCD70 = 0;
    DataGlobal_ABCD74 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55CA00
namespace gamemd {
void sub_55CA00()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCD80 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x55CA30
namespace gamemd {
void sub_55CA30()
{
{
    DataGlobal_ABCDF0 = DataGlobal_ABCD80 / 60.0;
}
}
} // namespace gamemd

// 0x55CA50
namespace gamemd {
void sub_55CA50()
{
{
    DataGlobal_ABCDD0 = 1.0 / DataGlobal_ABCDF0;
}
}
} // namespace gamemd

// 0x55CA70
namespace gamemd {
void sub_55CA70()
{
{
    DataGlobal_ABCDC8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x55CA90
namespace gamemd {
void sub_55CA90()
{
{
    DataGlobal_ABCD98 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x55CAB0
namespace gamemd {
void sub_55CAB0()
{
{
    DataGlobal_ABCD60 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x55CAD0
namespace gamemd {
long long sub_55CAD0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCD60 - DataGlobal_ABCD98);
    result = Math::RoundToInt(v0 * DataGlobal_ABCD80 * 0.5);
    DataGlobal_ABCDF8 = result;
    return result;
}
}
} // namespace gamemd

// 0x55CB10
namespace gamemd {
void sub_55CB10()
{
{
    DataGlobal_ABCDA0 = Math::ArcTan((double)DataGlobal_ABCDF8 * 0.00390625);
}
}
} // namespace gamemd

// 0x55CB40
namespace gamemd {
void sub_55CB40()
{
{
    DataGlobal_ABCDC0 = Math::ArcTan((double)(2 * DataGlobal_ABCDF8) / DataGlobal_ABCD80);
}
}
} // namespace gamemd

// 0x55CB70
namespace gamemd {
long long sub_55CB70()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCDF8) + 0.5);
    DataGlobal_ABCDEC = result;
    return result;
}
}
} // namespace gamemd

// 0x55CBA0
namespace gamemd {
int sub_55CBA0()
{
{
    DataGlobal_ABCD78 = 0;
    DataGlobal_ABCD7A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55CBB0
namespace gamemd {
int sub_55CBB0()
{
{
    DataGlobal_ABCDB0 = 0;
    DataGlobal_ABCDB4 = 0;
    DataGlobal_ABCDB8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55CBD0
namespace gamemd {
int sub_55CBD0()
{
{
    DataGlobal_ABCDE8 = 0;
    DataGlobal_ABCDE0 = 128;
    DataGlobal_ABCDE4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x55CC00
namespace gamemd {
void sub_55CC00()
{
{
    DataGlobal_ABCD58 = 1;
}
}
} // namespace gamemd

// 0x55CC10
namespace gamemd {
void sub_55CC10()
{
{
    DataGlobal_ABCD58 = 0;
}
}
} // namespace gamemd

// 0x55E410
namespace gamemd {
void nullsub_23()
{
  ;
}
} // namespace gamemd

// 0x55F760
namespace gamemd {
int sub_55F760()
{
{
    DataGlobal_ABCE28 = 0;
    DataGlobal_ABCE2C = 0;
    DataGlobal_ABCE30 = 0;
    DataGlobal_ABCE34 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55F780
namespace gamemd {
void sub_55F780()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABCE40 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x55F7B0
namespace gamemd {
void sub_55F7B0()
{
{
    DataGlobal_ABCF48 = DataGlobal_ABCE40 / 60.0;
}
}
} // namespace gamemd

// 0x55F7D0
namespace gamemd {
void sub_55F7D0()
{
{
    DataGlobal_ABCF30 = 1.0 / DataGlobal_ABCF48;
}
}
} // namespace gamemd

// 0x55F7F0
namespace gamemd {
void sub_55F7F0()
{
{
    DataGlobal_ABCF28 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x55F810
namespace gamemd {
void sub_55F810()
{
{
    DataGlobal_ABCE48 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x55F830
namespace gamemd {
void sub_55F830()
{
{
    DataGlobal_ABCE20 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x55F850
namespace gamemd {
long long sub_55F850()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABCE20 - DataGlobal_ABCE48);
    result = Math::RoundToInt(v0 * DataGlobal_ABCE40 * 0.5);
    DataGlobal_ABCF50 = result;
    return result;
}
}
} // namespace gamemd

// 0x55F890
namespace gamemd {
void sub_55F890()
{
{
    DataGlobal_ABCE50 = Math::ArcTan((double)DataGlobal_ABCF50 * 0.00390625);
}
}
} // namespace gamemd

// 0x55F8C0
namespace gamemd {
void sub_55F8C0()
{
{
    DataGlobal_ABCE68 = Math::ArcTan((double)(2 * DataGlobal_ABCF50) / DataGlobal_ABCE40);
}
}
} // namespace gamemd

// 0x55F8F0
namespace gamemd {
long long sub_55F8F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABCF50) + 0.5);
    DataGlobal_ABCF44 = result;
    return result;
}
}
} // namespace gamemd

// 0x55F920
namespace gamemd {
int sub_55F920()
{
{
    DataGlobal_ABCE38 = 0;
    DataGlobal_ABCE3A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55F930
namespace gamemd {
int sub_55F930()
{
{
    DataGlobal_ABCE58 = 0;
    DataGlobal_ABCE5C = 0;
    DataGlobal_ABCE60 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x55F950
namespace gamemd {
int sub_55F950()
{
{
    DataGlobal_ABCF40 = 0;
    DataGlobal_ABCF38 = 128;
    DataGlobal_ABCF3C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x55F980
namespace gamemd {
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    wchar_t *StringCSF;
    HWND DlgItem;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 )
    {
    if ( (unsigned short)a3 == 1473 )
      {
    *WindowLongA = 1;
      }
    else if ( (unsigned short)a3 == 1738 )
      {
    *WindowLongA = 2;
    return 0;
      }
    }
    else if ( a2 == 1175 )
    {
    StringCSF = GetStringCSF(aTxtAboutToTryM, 0, g_Str_File_MainOpt_cpp, 162);
    DlgItem = GetDlgItem(hWnd, 1499);
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF);
    return 0;
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd
