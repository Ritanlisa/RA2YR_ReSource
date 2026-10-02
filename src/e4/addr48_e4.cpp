// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/CellClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/CommBufferClass_e4.hpp"
#include "e4/classes/E4Recv_483710_e4.hpp"
#include "e4/classes/E4Recv_484F50_e4.hpp"
#include "e4/classes/E4Recv_4863A0_e4.hpp"
#include "e4/classes/E4Recv_4866D0_e4.hpp"
#include "e4/classes/E4Recv_4866F0_e4.hpp"
#include "e4/classes/E4Recv_486D90_e4.hpp"
#include "e4/classes/E4Recv_4879B0_e4.hpp"
#include "e4/classes/E4Recv_487C80_e4.hpp"
#include "e4/classes/E4Recv_4880F0_e4.hpp"
#include "e4/classes/E4Recv_488210_e4.hpp"
#include "e4/classes/E4Recv_488280_e4.hpp"
#include "e4/classes/E4Recv_488760_e4.hpp"
#include "e4/classes/E4Recv_4887F0_e4.hpp"
#include "e4/classes/E4Recv_48B070_e4.hpp"
#include "e4/classes/E4Recv_48BB00_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/E4Recv_479740_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/E4Recv_4A3270_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"

// 0x4880F0
namespace gamemd {
ConvertClass * * E4Recv_4880F0::sub_4880F0(int a2)
{

  int uniqueId; // ecx
  int abstractFlags; // edx
  int nextArrayIndex; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  void *vtable3; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !((Control *)((ControlClass *)this))->DispatchClick(a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x488110*/
  uniqueId = ((unsigned int *)this)[0]; /*0x488116*/
  abstractFlags = ((unsigned int *)this)[0]; /*0x488119*/
  vtable3 = (void *)(((unsigned int *)this)[0]); /*0x48811c*/
  nextArrayIndex = ((unsigned int *)this)[0]; /*0x488120*/
  v16 = uniqueId; /*0x488123*/
  v17 = abstractFlags; /*0x488127*/
  v18 = nextArrayIndex; /*0x488133*/
  DrawBuildingTilesSHP((int *)&vtable3, 0, 0); /*0x488137*/
  if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x488145*/
    v6 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 13); /*0x48814f*/
  else
    v6 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 26); /*0x48815c*/
  v7 = ((unsigned int *)this)[0] + 1; /*0x488167*/
  vtable3 = (char *)((unsigned int *)this)[0] + 1; /*0x488168*/
  v8 = ((unsigned int *)this)[0]; /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = ((unsigned int *)this)[0] - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (**)(AudioStream *, void **, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x48818e*/
    g_DSurface_Hidden_2,
    &vtable3,
    v6);
  if ( BYTE1(this->fallRate) ) /*0x488191*/
  {
    if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x4881a1*/
      v10 = *(uint8_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 4); /*0x4881ab*/
    else
      v10 = *(uint16_t *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 8); /*0x4881b8*/
    v11 = ((unsigned int *)this)[0] + 1; /*0x4881c3*/
    vtable3 = (char *)((unsigned int *)this)[0] + 1; /*0x4881c4*/
    v12 = ((unsigned int *)this)[0]; /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = ((unsigned int *)this)[0] - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (**)(AudioStream *, void **, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x4881ea*/
      g_DSurface_Hidden_2,
      &vtable3,
      v10);
  }
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4881f5*/
  return (gamemd::ConvertClass **)(1); /*0x4881fd*/

}
}
// 0x489180
namespace gamemd {
int Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // eax
  int v9; // eax
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (dword_A8B230->vtable1 & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v10 = v7; /*0x4891ca*/
  v11 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  IDA_LOWORD(v8) = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891e4*/
  if ( v11 != v10 && v8 ) /*0x489200*/
  {
    IDA_LOWORD(v9) = Math::RoundToInt((v10 - v11) * (double)(v8 - a4) / (double)v8 + v11); /*0x489220*/
    v4 = v9; /*0x489225*/
  }
  IDA_LOWORD(result) = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= dword_8871E0->IRepairRate[0] ) /*0x489257*/
    return dword_8871E0->IRepairRate[0]; /*0x48925a*/
  return result; /*0x4891b8*/
}
}
// 0x489280
namespace gamemd {
int PlaySoundEffectAt(TechnoClass * aP0, int aP1, unsigned int *a2, int aP3, char a5, int aP6)
{
  ObjectClass *v8; // esi
  VectorClass_flat *v9; // eax
  IUnknown *v15; // eax
  IUnknown *v17; // eax
  IUnknown *v19; // eax
  int16_t ax29; // ax
  TechnoClass *v22; // ebx
  unsigned int *eax61a; // eax
  IUnknown *v32; // eax
  BuildingTypeClass *v34; // edx
  unsigned int *eax63; // eax
  IUnknown *v37; // eax
  double st7_63; // st7
  BuildingTypeClass *v39; // edx
  unsigned int *eax64; // eax
  IUnknown *v43; // eax
  BuildingTypeClass *v44; // edx
  BuildingTypeClass *v45; // eax
  IUnknown *v48; // eax
  IUnknown *v49; // ecx
  BuildingTypeClass **eax83; // eax
  BuildingTypeClass *v51; // esi
  BuildingTypeClass *v50; // edi
  ObjectClass *v58; // ebx
  IUnknown *ebx112; // ebx
  ObjectClass *v61; // eax
  ObjectClass *v60; // edi
  BuildingTypeClass *v62; // ecx
  BuildingTypeClass *ecx123; // ecx
  int eax123a; // eax
  IUnknown *v71; // edi
  ParticleSystemClass *v72; // eax
  unsigned int *eax137; // eax
  int eax138; // eax
  AbstractClass *v76; // ebx
  AbstractClass *v77; // edx
  int Z; // ecx
  AbstractClass *v84; // eax
  int ecx167; // ecx
  BuildingTypeClass *v85; // ecx
  int eax203; // eax
  void **v95; // eax
  CoordStruct *v94; // esi
  ParticleSystemClass *v100; // eax
  ParticleSystemClass *v102; // eax
  float aP0a; // [esp+38h] [ebp-E8h]
  float aP0b; // [esp+38h] [ebp-E8h]
  int i; // [esp+50h] [ebp-D0h]
  bool varC3; // [esp+5Dh] [ebp-C3h]
  char varC2; // [esp+5Eh] [ebp-C2h]
  VectorClass_flat *aP1a; // [esp+60h] [ebp-C0h]
  TechnoClass *v120; // [esp+64h] [ebp-BCh]
  CoordStruct *aP2; // [esp+68h] [ebp-B8h]
  BuildingTypeClass *v116; // [esp+74h] [ebp-ACh]
  IUnknown *v117; // [esp+78h] [ebp-A8h] BYREF
  void *Block; // [esp+7Ch] [ebp-A4h]
  int v126; // [esp+80h] [ebp-A0h]
  int v127; // [esp+84h] [ebp-9Ch]
  int * v121;
  int var94; // [esp+8Ch] [ebp-94h]
  int64_t v130; // [esp+90h] [ebp-90h] BYREF
  int64_t v132; // [esp+9Ch] [ebp-84h] BYREF
  float v133; // [esp+A4h] [ebp-7Ch]
  int v134; // [esp+A8h] [ebp-78h] BYREF
  int v135; // [esp+ACh] [ebp-74h] BYREF
  IUnknown *v129; // [esp+B0h] [ebp-70h]
  BuildingTypeClass *v137; // [esp+B4h] [ebp-6Ch]
  IUnknown *v138; // [esp+B8h] [ebp-68h] BYREF
  int64_t v139; // [esp+BCh] [ebp-64h]
  BuildingTypeClass *v140; // [esp+C4h] [ebp-5Ch]
  double v141; // [esp+C8h] [ebp-58h] BYREF
  IUnknown *j; // [esp+D4h] [ebp-4Ch] BYREF
  int64_t v143; // [esp+D8h] [ebp-48h] BYREF
  float v144; // [esp+E0h] [ebp-40h]
  v120 = (TechnoClass *)aP1;
  aP2 = (CoordStruct *)aP0;
  sub_48B070(&v117, 0, 0);
  var94 = (int)((gamemd::ObjectClass *)(10));
  v121 = 0;
  if ( !aP1 || (**(unsigned char **)&((unsigned int *)(HouseClass_Player))[29924] & 0x20) != 0 || (v8 = aP3) == 0 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block && IDA_BYTE1(v127) )
      RA2_OPDEL(Block);
    return 1;
  }
  v134 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus * 256.0);
  bool v106 = aP3 == *(ObjectClass **)(*(unsigned int *)&((unsigned int *)(stru_87C374))[44652] + 4012);
  int v108; // [esp+50h] [ebp-D0h]
  IDA_LOWORD(v108) = *(unsigned int *)aP0->__pad_0 / 256;
  IDA_HIWORD(v108) = *(unsigned int *)&aP0->__pad_0[4] / 256;
  int v115 = v108;
  v9 = (VectorClass_flat *)((CellCoord *)(&((unsigned int *)(stru_87C374))[13428]))->To_CellObj((int16_t *)&v115);
  double v10 = *(float *)&aP3[1].spawnStatus;
  aP1a = v9;
  varC2 = 0;
  char v118 = 0;
  char v114 = 0;
  varC3 = v10 <= 0.5;
  IDA_LODWORD(v143) = ((int16_t)v115 << 8) + 128;
  IDA_HIDWORD(v143) = (IDA_SHIWORD(v115) << 8) + 128;
  v144 = 0.0;
  if ( Cell::GetGroundHeight((unsigned int *)((IUnknown *)&v143)) < *(unsigned int *)&aP0->__pad_0[8] )
  {
    int v11 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus);
    AircraftTrackerClass::FillCurrentVector((int)&(&stru_87C374)[46356], aP1a, v11);
    int v12 = VectorClass_flat::RemoveObjectById((int)&((unsigned int *)(stru_87C374))[46356]);
    if ( v12 )
    {
      do
      {
        if ( *(unsigned char *)(v12 + 144) )
        {
          if ( *(unsigned char *)(v12 + 116) )
          {
            if ( *(int *)(v12 + 108) > 0 )
            {
              int v13 = *(unsigned int *)(v12 + 156);
              int v14 = *(unsigned int *)(v12 + 160);
              v140 = *(BuildingTypeClass **)(v12 + 164);
              v15 = (IUnknown *)(((Coord *)(&v135))->Subtract((int)((IUnknown *)(*(unsigned int *)aP0->__pad_0 - v13)),(int)((IUnknown *)(*(unsigned int *)&aP0->__pad_0[4] - v14)),(int)((IUnknown *)(*(unsigned int *)&aP0->__pad_0[8] - (unsigned int)v140))));
              v143 = *(unsigned long long *)&v15->field_0;
              v144 = *(float *)&v15->field_8;
              ((Coord*)(int *)&v143)->Length();
  int v16; // eax
              if ( v16 <= v134 )
              {
                if ( varC3
                  && v16 < 85
                  && (*(uint8_t (**)(int))(*(unsigned int *)v12 + 352))(v12)
                  && !*(unsigned int *)(v12 + 452) )
                {
                  v114 = 1;
                }
                int * v109 = (int *)operator new(8u);
                *v109 = v12;
                v17 = (IUnknown *)(((Coord *)(&v130))->Subtract((int)((IUnknown *)(*(unsigned int *)aP0->__pad_0 - *(unsigned int *)(v12 + 156))),(int)((IUnknown *)(*(unsigned int *)&aP0->__pad_0[4] - *(unsigned int *)(v12 + 160))),(int)((IUnknown *)(*(unsigned int *)&aP0->__pad_0[8] - *(unsigned int *)(v12 + 164)))));
                v132 = *(unsigned long long *)&v17->field_0;
                v133 = *(float *)&v17->field_8;
                ((Coord*)(int *)&v132)->Length();
                int v18 = v18;
                if ( (int)v121 < v126
                  || (IDA_BYTE1(v127) || !v126)
                  && var94 > 0
                  && ((uint8_t (*)(IUnknown **, int, unsigned int))v117->field_8)(&v117, var94 + v126, 0) )
                {
                  v19 = (IUnknown *)((int *)((IUnknown *)(v121)));
                  v121 = (int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((IUnknown *)((char *)v121 + 1))))))))))))));
                  *((unsigned int *)Block + (unsigned int)v19) = (unsigned int)(v109);
                }
              }
            }
          }
        }
        v12 = VectorClass_flat::RemoveObjectById((int)&((unsigned int *)(stru_87C374))[46356]);
      }
      while ( v12 );
      v8 = (gamemd::ObjectClass *)(aP3);
    }
  }
  if ( ((int)aP1a[20].vtable0 & 0x100) != 0
    && *(unsigned int *)&aP0->__pad_0[8] > *(unsigned int *)&(&stru_89E138)[1836] / 2 + Cell::GetGroundHeight((unsigned int *)((IUnknown *)aP0)) )
  {
    varC2 = 1;
  }
  int v20 = Math::RoundToInt(*(float *)&v8[1].spawnStatus + 0.99);
  int v21 = ((unsigned int *)(dword_7ED3D0))[v20];
  unsigned int v122[2]; // [esp+6Ch] [ebp-B4h] BYREF
  v122[0] = v20;
  int v110 = 0;
  if ( v21 > 0 )
  {
  double v42; // st5
  double v41; // st6
  int v36; // eax
  int v26; // esi
    while ( 1 )
    {
      ax29 = IDA_HIWORD(v115) + IDA_HIWORD((&dword_ABD490)[v110]);
      IDA_LOWORD(v138) = v115 + IDA_LOWORD((&dword_ABD490)[v110]);
      IDA_HIWORD(v138) = ax29;
      j = v138;
      v22 = (TechnoClass *)((CellCoord *)(&((unsigned int *)(stru_87C374))[13428]))->To_CellObj((int16_t *)&j);
      aP1a = (VectorClass_flat *)v22;
      int v24 = v22->ambientSoundController[2];
      if ( v24 != -1 )
      {
        int v25 = *(unsigned int *)(HouseClass_Player.field_38 + 4 * v24);
        IDA_LODWORD(v141) = v25;
        if ( *(unsigned char *)(v25 + 689) && (!*(unsigned char *)(v25 + 681) || IDA_LOBYTE(v8[1].location[0])) && a5 )
        {
          CellClass::ReduceTiberium((int)v22, (InfantryTypeClass *)((int)v120 / 10));
          v25 = IDA_LODWORD(v141);
        }
        if ( *(unsigned char *)(v25 + 680) )
        {
          if ( v8[1].isVisible )
          {
            BuildingClass::SellEffects((int)v22, (TechnoClass *)0xFFFFFFFF);
          }
          else if ( v8[1].isInLogic || v8[((unsigned int *)(1].alignmentPadding99))[1] && *(unsigned int *)(v25 + 156) == 6 )
          {
            BuildingClass::SellEffects((int)v22, v120);
          }
        }
        if ( v22->ambientSoundController[2] == -1 )
          ((AbstractClass *)((int)v22))->ClearTargetToMeClearManagerTarget();
      }
      v26 = varC2 ? v22->flashing[1] : v22->flashing[0];
      if ( v26 )
        break;
LABEL_81:
      if ( ++v110 >= (&dword_7ED3D0)[((unsigned int *)(v122))[0]] )
        goto LABEL_82;
      v8 = (gamemd::ObjectClass *)(aP3);
    }
    while ( (unsigned int *)v26 == a2 && !*(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3232) && !v106
         || !*(unsigned char *)(v26 + 144) )
    {
LABEL_80:
      v26 = *(unsigned int *)(v26 + 48);
      if ( !v26 )
        goto LABEL_81;
    }
    if ( (*(int (**)(int))(*(unsigned int *)v26 + 44))(v26) == 1
      && (**(unsigned int **)&((unsigned int *)(HouseClass_Player))[29924] & 0x800) != 0 )
    {
      int v27 = (*(int (**)(int))(*(unsigned int *)v26 + 136))(v26);
      int v28 = 0;
      int v29 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)(stru_87C374))[44652] + 2892);
      if ( v29 > 0 )
      {
        unsigned int * v30 = *(unsigned int **)(*(unsigned int *)&((unsigned int *)(stru_87C374))[44652] + 2880);
        while ( *v30 != v27 )
        {
          ++v28;
          ++v30;
          if ( v28 >= v29 )
            goto LABEL_58;
        }
        goto LABEL_80;
      }
    }
LABEL_58:
    int * v31 = (int *)operator new(8u);
    *v31 = v26;
    if ( (*(int (**)(int))(*(unsigned int *)v26 + 44))(v26) == 6 )
    {
      if ( !v110 )
      {
        if ( *(unsigned int *)&aP0->__pad_0[8]
           - *(unsigned int *)((*((int (**)(VectorClass_flat *, int64_t *))aP1a->vtable1 + 18))(aP1a, &v143) + 8) <= 2 * *(unsigned int *)&((unsigned int *)(stru_89E138))[1848] )
        {
    unsigned int v148 = 0;  /* G37 hoist */
          v31[1] = 0;
          goto LABEL_67;
        }
        eax61a = (unsigned int *)(*((int (**)(VectorClass_flat *, int64_t *))aP1a->vtable1 + 18))(aP1a, &v130);
        v32 = (IUnknown *)(((Coord *)(int v148[3]; v148))->Subtract((IUnknown *)(*(unsigned int *)aP0->__pad_0 - *eax61a), (IUnknown *)(*(unsigned int *)&aP0->__pad_0[4] - eax61a[1]), (IUnknown *)(*(unsigned int *)&aP0->__pad_0[8] - eax61a[2])));
        IDA_LODWORD(v132) = v32->field_0;
        v34 = (BuildingTypeClass *)v32->field_8;
        IDA_HIDWORD(v132) = v32->field_4;
        v133 = *(float *)&v34;
  double v35; // st7
        v35 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(int)v34 * (double)(int)v34
                                          + (double)IDA_SHIDWORD(v132) * (double)IDA_SHIDWORD(v132)
                                          + (double)(int)v132 * (double)(int)v132));
        v36 = Math::RoundToInt(v35) - 2 * *(unsigned int *)&((unsigned int *)(stru_89E138))[1848];
LABEL_66:
        v31[1] = v36;
LABEL_67:
        if ( varC3 && !v110 )
        {
          IDA_HIBYTE(v116) = *(unsigned char *)(v26 + 20) & 1;
          if ( IDA_HIBYTE(v116) )
          {
            if ( (*(uint8_t (**)(int))(*(unsigned int *)v26 + 352))(v26)
              && !*(unsigned int *)(v26 + 452)
              && v31[1] < 85 )
            {
              v114 = 1;
            }
          }
        }
        if ( (int)v121 < v126
          || (IDA_BYTE1(v127) || !v126)
          && var94 > 0
          && ((uint8_t (*)(IUnknown **, int, unsigned int))v117->field_8)(&v117, var94 + v126, 0) )
        {
    unsigned int v145 = 0;  /* G37 hoist */
          v48 = (IUnknown *)(v121);
          v121 = (int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((unsigned int)((int *)((IUnknown *)((char *)v121 + 1))))))))))))));
          *((unsigned int *)Block + (unsigned int)v48) = (unsigned int)(v31);
        }
        goto LABEL_80;
      }
  char v149[12]; // [esp+114h] [ebp-Ch] BYREF
      eax63 = (unsigned int *)(*((int (**)(VectorClass_flat *, char *))aP1a->vtable1 + 18))(aP1a, v149);
      v37 = (IUnknown *)(((Coord *)(int v145[3]; v145))->Subtract((IUnknown *)(*(unsigned int *)aP0->__pad_0 - *eax63), (IUnknown *)(*(unsigned int *)&aP0->__pad_0[4] - eax63[1]), (IUnknown *)(*(unsigned int *)&aP0->__pad_0[8] - eax63[2])));
      IDA_LODWORD(v139) = v37->field_0;
      st7_63 = (double)(int)v139;
      v39 = (BuildingTypeClass *)v37->field_8;
      IDA_HIDWORD(v139) = v37->field_4;
      v41 = (double)IDA_SHIDWORD(v139);
      v140 = v39;
      v42 = (double)(int)v39;
    }
    else
    {
  char v146[12]; // [esp+F0h] [ebp-30h] BYREF
      eax64 = (unsigned int *)((IUnknown *)((unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)v26 + 164))(v26, v146)));
      v43 = Coord::Subtract(
  int v147[3]; // [esp+FCh] [ebp-24h] BYREF
              v147,
              (IUnknown *)(*(unsigned int *)aP0->__pad_0 - *eax64),
              (IUnknown *)(*(unsigned int *)&aP0->__pad_0[4] - eax64[1]),
              (IUnknown *)(*(unsigned int *)&aP0->__pad_0[8] - eax64[2]));
      v135 = v43->field_0;
      v44 = (BuildingTypeClass *)v43->field_4;
      st7_63 = (double)v135;
      v45 = (BuildingTypeClass *)v43->field_8;
      v129 = (IUnknown *)v44;
      v41 = (double)(int)v44;
      v137 = v45;
      v42 = (double)(int)v45;
    }
    double v47 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v42 * v42 + v41 * v41 + st7_63 * st7_63));
    v36 = Math::RoundToInt(v47);
    goto LABEL_66;
  }
LABEL_82:
  v49 = (IUnknown *)(v121);
  for ( i = 0; i < (int)v121; ++i )
  {
    eax83 = (BuildingTypeClass **)*((unsigned int *)Block + i);
    v51 = *eax83;
    v50 = eax83[1];
    if ( (*eax83)->Name[44]
      && ((*(int (**)(BuildingTypeClass *))(v51->vtable1 + 44))(v51) != 6
       || !*(unsigned char *)((&v51->DieSound)[4] + 5889))
      && (!v114
       || v51
       && (IDA_HIBYTE(v116) = v51->abstractFlags & 1) != 0
       && (*(uint8_t (**)(BuildingTypeClass *))(v51->vtable1 + 352))(v51)) )
    {
      if ( (*(int (**)(BuildingTypeClass *))(v51->vtable1 + 44))(v51) == 2
        && (*(uint8_t (**)(BuildingTypeClass *))(v51->vtable1 + 84))(v51) )
      {
        v50 = (BuildingTypeClass *)((int)v50 / 2);
      }
      if ( *(int *)&(&v51->Name)[8] > 0 && (&v51->Name)[16] && !(&v51->Name)[29] && (int)v50 <= v134 )
      {
        int v53 = (int)(v51->vtable1);
        v122[0] = (unsigned int)(v120);
        (*(void (**)(BuildingTypeClass *, unsigned int *, BuildingTypeClass *, ObjectClass *, unsigned int *, unsigned int, unsigned int, int))(v53 + 364))(
          v51,
          v122,
          v50,
          aP3,
          a2,
          0,
          0,
          aP6);
        v118 = 1;
      }
    }
    v49 = (IUnknown *)(v121);
  }
  int v54 = 0;
  if ( (int)v49 > 0 )
  {
    do
      RA2_OPDEL(*((void **)Block + v54++));
    while ( v54 < (int)v121 );
  }
  int v55 = v126;
  ((void (*)(IUnknown **))v117->field_C)(&v117);
  ((void (*)(IUnknown **, int, unsigned int))v117->field_8)(&v117, v55, 0);
  if ( v114 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block )
    {
      if ( IDA_BYTE1(v127) )
        RA2_OPDEL(Block);
    }
    return 2;
  }
  double v57 = (double)(int)v120 * 0.01;
  if ( v57 >= 4.0 )
    v141 = 4.0;
  else
    v141 = v57;
  v58 = (gamemd::ObjectClass *)(aP3);
  if ( IDA_BYTE2(aP3[1].location[1]) )
  {
    if ( v141 > 0.3 )
    {
      int v59 = (int16_t)v115 - 3;
      int v112 = v59;
      if ( v59 <= (int16_t)v115 + 3 )
      {
        do
        {
          ebx112 = (IUnknown *)(IDA_SHIWORD(v115) - 3);
          for ( j = ebx112; (int)ebx112 <= IDA_SHIWORD(v115) + 3; j = ebx112 )
          {
            if ( varC2 )
            {
              IDA_LOWORD(v134) = v59;
              IDA_HIWORD(v134) = (unsigned short)ebx112;
              v61 = (ObjectClass *)*((unsigned int *)((CellCoord *)(&(&stru_87C374)[13428]))->To_CellObj((int16_t *)&v134)
                                   + 58);
            }
            else
            {
              IDA_LOWORD(v138) = v59;
              IDA_HIWORD(v138) = (unsigned short)ebx112;
              v61 = (ObjectClass *)*((unsigned int *)((CellCoord *)(&(&stru_87C374)[13428]))->To_CellObj((int16_t *)&v138)
                                   + 57);
            }
            v60 = v61;
            aP1a = (VectorClass_flat *)v61;
            if ( v61 )
            {
              do
              {
                int * v63 = (int *)AbstractClass::IsTechnoType(v60);
                if ( v63 )
                {
                  if ( IDA___PAIR32__((uint16_t)ebx112, v112) == v115 && a2 )
                  {
  float v67; // edx
                    v135 = v63[39];
                    v129 = (IUnknown *)v63[40];
                    v137 = (BuildingTypeClass *)v63[41];
                    v62 = (BuildingTypeClass *)a2[40];
                    v122[0] = a2[39] - v135;
                    int v65 = a2[41] - (unsigned int)v137;
                    *(float *)&v130 = (float)v122[0];
                    v122[0] = v65;
                    *((float *)&v130 + 1) = (float)((char *)v62 - (char *)v129);
                    float v131 = (float)v65;
  double v66; // st7
                    v66 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                        *(float *)&v130 * *(float *)&v130
                                                      + *((float *)&v130 + 1) * *((float *)&v130 + 1)
                                                      + v131 * v131));
                    if ( v66 == 0.0 )
                    {
                      v67 = v131;
                      v139 = v130;
                    }
                    else
                    {
                      *(float *)&v143 = *(float *)&v130 / v66;
                      *((float *)&v143 + 1) = *((float *)&v130 + 1) / v66;
                      v139 = v143;
                      v144 = v131 / v66;
                      v67 = v144;
                    }
                    v140 = (BuildingTypeClass *)IDA_LODWORD(v67);
                    *(float *)&v132 = *(float *)&v139 * 10.0;
                    *((float *)&v132 + 1) = *((float *)&v139 + 1) * 10.0;
                    v130 = v132;
                    v133 = v67 * 10.0;
                    v131 = v133;
                    int v68 = Math::RoundToInt(*(float *)&v132);
                    int v69 = Math::RoundToInt(*((float *)&v132 + 1));
                    int v70 = Math::RoundToInt(v133);
                    v135 += v68;
                    ecx123 = (BuildingTypeClass *)((char *)v137 + v70);
                    eax123a = *v63;
                    v137 = ecx123;
                    aP0a = v141;
                    v129 = (IUnknown *)((char *)v129 + v69);
                    (*(void (**)(int *, int *, unsigned int, unsigned int))(eax123a + 984))(v63, &v135, IDA_LODWORD(aP0a), 0);
                    ebx112 = j;
                    v60 = (ObjectClass *)aP1a;
                  }
                  else if ( *(float *)&aP3[1].spawnStatus > 0.0 )
                  {
                    aP0b = v141;
                    (*(void (**)(int *, CoordStruct *, unsigned int, unsigned int))(*v63 + 984))(
                      v63,
                      aP2,
                      IDA_LODWORD(aP0b),
                      0);
                  }
                }
                v60 = (ObjectClass *)v60->nextObject;
                aP1a = (VectorClass_flat *)v60;
              }
              while ( v60 );
              v59 = v112;
            }
            ebx112 = (IUnknown *)((char *)ebx112 + 1);
          }
          v112 = ++v59;
        }
        while ( v59 <= (int16_t)v115 + 3 );
        v58 = (gamemd::ObjectClass *)(aP3);
      }
    }
  }
  bool v107 = v58 == *(ObjectClass **)(*(unsigned int *)&(&stru_87C374)[44652] + 4080);
  v71 = (IUnknown *)((CellCoord *)(&(&stru_87C374)[13428]))->To_CellObj((int16_t *)&v115);
  if ( (IDA_BYTE1(**(unsigned int **)&(&HouseClass_Player)[29924]) & 0x80u) != 0 && v58[1].isInLogic )
  {
    v72 = (ParticleSystemClass *)v71->field_140;
    int v75 = v71->field_38 - unk_AA0E28 + 1;
    unsigned int * v113 = 0;
    if ( (IDA_BYTE1(v72) & 1) != 0
      && ((char)v72 >= 0 ? (v122[0] = *(unsigned int *)(*(unsigned int *)&v71->__pad_28[4] + 36)) : (v122[0] = v71->field_24),
          (eax137 = ((CellCoord *)(&(&stru_87C374)[13428]))->To_CellObj((int16_t *)v122), (v113 = eax137) != 0)
       && ((eax138 = eax137[17], eax138 == 24) || eax138 == 25)) )
    {
      v76 = (AbstractClass *)g_TerrainSoundTable2;
    }
    else
    {
      v76 = (AbstractClass *)g_TerrainSoundTable2;
      if ( v75 != g_TerrainSoundTable2
        && v75 != g_TerrainSoundTable2 + 1
        && v75 != g_TerrainSoundTable2 + 2
        && v75 != g_TerrainSoundTable2 + 3 )
      {
        v77 = (AbstractClass *)unk_AA1028;
        if ( v75 != unk_AA1028 && v75 != unk_AA1028 + 1 && v75 != unk_AA1028 + 2 && v75 != unk_AA1028 + 3 )
        {
LABEL_166:
          v84 = (AbstractClass *)(v71->field_38 - g_TerrainBridgeIndex + 1);
          if ( v113 && ((ecx167 = v113[17], ecx167 == 237) || ecx167 == 238)
            || v84 == v76
            || v84 == (AbstractClass *)&v76->__pad_0[1]
            || v84 == (AbstractClass *)&v76->__pad_0[2]
            || v84 == (AbstractClass *)&v76->__pad_0[3]
            || v84 == v77
            || v84 == (AbstractClass *)&v77->__pad_0[1]
            || v84 == (AbstractClass *)&v77->__pad_0[2]
            || v84 == (AbstractClass *)&v77->__pad_0[3] )
          {
            if ( (v71->field_140 & 0x100) == 0
  int v86; // eax
              || (v86 = SHIBYTE(v71->field_118),
                  v85 = (BuildingTypeClass *)aP2->Z,
                  (int)v85 <= *(unsigned int *)&stru_89E138[1836] + *(unsigned int *)&stru_89E138[1848] * (v86 + 1))
              && (int)v85 > *(unsigned int *)&stru_89E138[1836] + *(unsigned int *)&stru_89E138[1848] * (v86 - 2) )
            {
              if ( aP3[1].isInLogic )
              {
                if ( aP3 == *(ObjectClass **)(*(unsigned int *)&(&stru_87C374)[44652] + 4080)
  int v88; // eax
                  || (v88 = Random::Range(
                              (unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536),
                              (IUnknown *)1,
                              *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 5952)),
                      v88 < (int)v120) )
                {
                  int v89 = 3;
                  if ( CellClass::SetTerrainType(&stru_87C374[13428], (IUnknown *)&v115) )
                  {
LABEL_189:
                    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
                  }
                  else
                  {
                    while ( v107 && v89 > 0 )
                    {
                      --v89;
                      if ( CellClass::SetTerrainType(&stru_87C374[13428], (IUnknown *)&v115) )
                        goto LABEL_189;
                    }
                  }
                  ((Coord *)(*(unsigned int **)&stru_87C374[44976]))->To_Screen(aP2, (IUnknown *)v122);
                  ((void (*)(int, int, int, int, char))Cell::CreateCrater)(
                    v122[0] - 96,
                    v122[1] - 96,
                    192,
                    192,
                    0);
                }
              }
            }
          }
          int v90 = v71->field_44;
          if ( v90 >= 74 && v90 <= 99 )
          {
            if ( aP3 == *(ObjectClass **)(*(unsigned int *)&stru_87C374[44652] + 4080)
  int v91; // eax
              || (v91 = Random::Range(
                          (unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 5952)),
                  v91 < (int)v120) )
            {
              if ( CellClass::CheckTilePassable2((IUnknown *)&v115) )
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
            }
          }
          int v92 = v71->field_44;
          if ( v92 >= 205 && v92 <= 230 )
          {
            if ( aP3 == *(ObjectClass **)(*(unsigned int *)&stru_87C374[44652] + 4080)
  int v93; // eax
              || (v93 = Random::Range(
                          (unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 5952)),
                  v93 < (int)v120) )
            {
              if ( CellClass::CheckTilePassable((IUnknown *)&v115) )
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
            }
          }
          goto LABEL_203;
        }
LABEL_151:
        if ( (v71->field_140 & 0x100) == 0
  int v80; // eax
          || (v80 = SHIBYTE(v71->field_118),
              Z = aP2->Z,
              Z <= *(unsigned int *)&stru_89E138[1836] + *(unsigned int *)&stru_89E138[1848] * (v80 + 1))
          && Z > *(unsigned int *)&stru_89E138[1836] + *(unsigned int *)&stru_89E138[1848] * (v80 - 2) )
        {
          if ( aP3[1].isInLogic )
          {
            if ( aP3 == *(ObjectClass **)(*(unsigned int *)&stru_87C374[44652] + 4080)
  int v82; // eax
              || (v82 = Random::Range(
                          (unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 5952)),
                  v82 < (int)v120) )
            {
              int v83 = 3;
              if ( CellClass::SetTerrainType(&stru_87C374[13428], (IUnknown *)&v115) )
              {
LABEL_163:
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
              }
              else
              {
                while ( v107 && v83 > 0 )
                {
                  --v83;
                  if ( CellClass::SetTerrainType(&stru_87C374[13428], (IUnknown *)&v115) )
                    goto LABEL_163;
                }
              }
              ((Coord *)(*(unsigned int **)&stru_87C374[44976]))->To_Screen(aP2, (IUnknown *)&v141);
              ((void (*)(int, int, int, int, char))Cell::CreateCrater)(
                IDA_LODWORD(v141) - 128,
                IDA_HIDWORD(v141) - 128,
                256,
                256,
                0);
            }
            v76 = (AbstractClass *)g_TerrainSoundTable2;
            v77 = (AbstractClass *)unk_AA1028;
          }
        }
        goto LABEL_166;
      }
    }
    v77 = (AbstractClass *)unk_AA1028;
    goto LABEL_151;
  }
LABEL_203:
  eax203 = v71->field_44;
  if ( eax203 == -1 || !*(unsigned char *)(*(unsigned int *)(HouseClass_Player.field_38 + 4 * eax203) + 688) )
  {
    v94 = aP2;
  }
  else
  {
    ((BuildingClass *)((char *)v71))->CreatePlacementCrater();
    v71->field_44 = -1;
    ((House *)((int)v71))->AnnounceUpgrade((IUnknown *)0xFFFFFFFF);
    ((Cell *)((int *)&stru_87C374[13428]))->SetRadar((IUnknown *)&v71->field_24);
    Radar::Update((IUnknown *)&stru_87C374[13428], (IUnknown *)&v71->field_24);
    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
    v95 = (void *)operator new(0x1C8u);
    v94 = aP2;
    if ( v95 )
      AnimClass::ctor(
        v95,
        *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 84),
        aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    PlaySoundEffectAt(
      (TechnoClass *)v94,
      *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 12),
      0,
      *(ObjectClass **)(*(unsigned int *)&stru_87C374[44652] + 4008),
      1,
      aP6);
    int v97 = 0;
    if ( *(int *)(*(unsigned int *)&stru_87C374[44652] + 104) > 0 )
    {
      while ( Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)0x63) >= 15 )
      {
        if ( ++v97 >= *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 104) )
          goto LABEL_213;
      }
      void * v98 = (void *)operator new(0x148u);
      if ( v98 )
        DamageAnimClass::Constructor(
          v98,
          *(VoxelAnimClass **)(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 92) + 4 * v97),
          (IUnknown *)v94,
          0);
    }
LABEL_213:
    if ( Random::Range((unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 536), 0, (IUnknown *)0x63) < 25 )
    {
      int v99 = operator new(0x100u);
      if ( v99 )
      {
        v100 = ParticleSystemClass::Constructor(
                 v99,
                 *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 116),
                 (IUnknown *)v94,
                 0,
                 0,
                 (IUnknown *)&stru_89E138[1784],
                 0);
        ParticleSystemClass::CreateParticle(v100, (IUnknown *)v94, (IUnknown *)v94);
      }
      else
      {
        ParticleSystemClass::CreateParticle(0, (IUnknown *)v94, (IUnknown *)v94);
      }
    }
  }
  if ( aP3[1].lastLayer )
  {
    int v101 = operator new(0x100u);
    if ( v101 )
      v102 = ParticleSystemClass::Constructor(
               v101,
               (IUnknown *)aP3[1].lastLayer,
               (IUnknown *)v94,
               0,
               0,
               (IUnknown *)&stru_89E138[1784],
               (IUnknown *)aP6);
    else
      v102 = 0;
    ParticleSystemClass::CreateParticle(v102, (IUnknown *)v94, (IUnknown *)v94);
  }
  BOOL v103 = v118 == 0;
  v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
  if ( Block && IDA_BYTE1(v127) )
    RA2_OPDEL(Block);
  return v103;
}
} // namespace gamemd

// 0x48A620
namespace gamemd {
AbstractClass * * CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int v7; // eax
  double v10; // st7
  int v11; // esi

  IDA_LOBYTE(v7) = g_lParam; /*0x48a620*/
  if ( g_lParam && (v7 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    IDA_LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (IDA_LOBYTE(v7) = *(unsigned char *)(a2 + 336), (unsigned char)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v11 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v11 < 63 ) /*0x48a6aa*/
        {
          if ( v11 <= 21 ) /*0x48a6b6*/
            v11 = 21; /*0x48a6b8*/
        }
        else
        {
          v11 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        v11 = Math::RoundToInt(v10 * 63.0); /*0x48a69b*/
      }
      if ( RA2_OPNEW(0x18u) ) /*0x48a6bf*/
      {
        v7 = ObjectClass::RegisterInArray(a3, a4, a5, v11); /*0x48a6e7*/
        v7->abstractFlags |= a7; /*0x48a6ec*/
      }
      else
      {
        g_abs_14 |= a7; /*0x48a6f7*/
        IDA_LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return v7; /*0x48a6ef*/
}
// 0x48A9D0
namespace gamemd {
void Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // [esp+8h] [ebp-20h]
  double v12; // [esp+8h] [ebp-20h]
  double v13; // [esp+10h] [ebp-18h]
  double v14; // [esp+10h] [ebp-18h]
  double v15; // [esp+18h] [ebp-10h]
  double v16; // [esp+20h] [ebp-8h]

  if ( a4 <= 0 )
  {
    if ( (double)a3 == 0.0 ) /*0x48aa0a*/
      a3 = 0; /*0x48aa0c*/
    v7 = (double)a4; /*0x48aa1a*/
    v16 = (double)a2; /*0x48aa25*/
    v15 = v16 * v16 - v7 * a5; /*0x48aa38*/
    v13 = (double)a3 * (double)a3; /*0x48aa44*/
    v11 = v16 * v16 * v16 * v16 - (v16 * v16 * v7 * a5 + v16 * v16 * v7 * a5) - a5 * a5 * v13; /*0x48aa64*/
    v8 = v7 * v7 / v13 + 1.0 + v7 * v7 / v13 + 1.0; /*0x48aa7a*/
    v14 = v8; /*0x48aa7c*/
    if ( v11 < 0.0 || v8 == 0.0 ) /*0x48aa9c*/
      return 0; /*0x48aa9c*/
    v9 = a1 ? v15 - Math::Sqrt(v11) : Math::Sqrt(v11) + v15;
    v12 = v9 / v14; /*0x48aad4*/
    if ( v12 < 0.0 ) /*0x48aae3*/
    {
      return 0; /*0x48ab12*/
    }
    else
    {
      v10 = Math::Sqrt(v12); /*0x48aaef*/
      *(double *)a6 = Math::ArcTan2_Table(v10 / v16); /*0x48ab06*/
      return 1; /*0x48ab08*/
    }
  }
  else
  {
    *(unsigned int *)a6 = -187466734; /*0x48a9e7*/
    *(unsigned int *)(a6 + 4) = 1072243161; /*0x48a9ed*/
    return 1; /*0x48a9f4*/
  }
}
}
// 0x48B0E0
namespace gamemd {
AbstractClass * * CommBufferClass::sub_48B0E0(int a2, int a3, size_t Size, int a5)
{

  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(unsigned int *)this->__pad_0 = &vt_CommBufferClass; /*0x48b0fd*/
  *(unsigned int *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->CommBufferClass_field_0x8 = a3; /*0x48b106*/
  *(unsigned int *)this->__pad_C = Size; /*0x48b109*/
  this->CommBufferClass_field_0x10 = (AbstractClass *)a5; /*0x48b10c*/
  this->CommBufferClass_field_0x24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->CommBufferClass_field_0x34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(unsigned int *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  *((unsigned int *)this + 16) = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(unsigned int *)(this->CommBufferClass_field_0x24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b169*/
        *(unsigned int *)(this->CommBufferClass_field_0x24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(unsigned int *)(this->CommBufferClass_field_0x24 + v7 + 28) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(unsigned int *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(unsigned int *)(v9 + this->CommBufferClass_field_0x34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( (int)this->CommBufferClass_field_0x10 <= 0 ) /*0x48b1b3*/
        *(unsigned int *)(v9 + this->CommBufferClass_field_0x34 + 20) = 0; /*0x48b1ca*/
      else
        *(unsigned int *)(v9 + this->CommBufferClass_field_0x34 + 20) = __2_YAPAXI_Z((size_t)this->CommBufferClass_field_0x10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->CommBufferClass_field_0x8 ); /*0x48b1db*/
  }
  ((Struct *)((Struct *)this))->ClearAllMemberFlags(); /*0x48b1df*/
  return this->__pad_0; /*0x48b1e6*/

}
}
// 0x48BB60
namespace gamemd {
bool sub_48BB60(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  unsigned int *v5; // edi
  int v6; // edx
  unsigned int *v7; // eax

  IDA_BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = dword_87F684; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  IDA_BYTE1(v3) = IDA_BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !dword_87F684 ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = dword_87F690; /*0x48bb78*/
  if ( dword_87F690 && *(unsigned int *)dword_87F690 == v3 ) /*0x48bb84*/
  {
  LABEL_17:
    v7 = (unsigned int *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(uint8_t (**)(unsigned int, int))(*(unsigned int *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !byte_87F68C ) /*0x48bb91*/
  {
    qsort(dword_87F680, dword_87F684, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = dword_87F684; /*0x48bba6*/
    dword_87F690 = 0; /*0x48bbaf*/
    byte_87F68C = 1; /*0x48bbb9*/
  }
  v5 = dword_87F680; /*0x48bbc0*/
  if ( v2 <= 0 ) /*0x48bbc8*/
    goto LABEL_12; /*0x48bbc8*/
  while ( 1 ) /*0x48bbd1*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x48bbd1*/
    v4 = (int)&v5[2 * (v2 / 2)]; /*0x48bbd4*/
    if ( v6 <= v3 ) /*0x48bbd9*/
      break; /*0x48bbd9*/
    v2 /= 2; /*0x48bbdb*/
  LABEL_11:
    if ( v2 <= 0 ) /*0x48bbed*/
      goto LABEL_12; /*0x48bbed*/
  }
  if ( v6 != v3 ) /*0x48bbdf*/
  {
    v5 = (unsigned int *)(v4 + 8); /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    dword_87F690 = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
  LABEL_12:
  v7 = &unk_B7883C; /*0x48bbef*/
  return !*v7 || (*(uint8_t (**)(unsigned int, int))(*(unsigned int *)*v7 + 20))(*v7, v1) == 0; /*0x48bc1d*/
}
}
// 0x48BC20
namespace gamemd {
int CompareFuncInt(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x48C8B0
namespace gamemd {
AbstractClass * * Main_Game_Frame()
{
  Network *v1; // edi
  int result; // eax
  int v3; // eax
  bool v4; // zf
  char *v5; // eax
  char *v6; // eax
  int *StringCSF; // eax
  char *v8; // eax
  Network *v9; // [esp-8h] [ebp-164h]
  ScenarioClass *v10; // [esp-4h] [ebp-160h]
  ObjectClass *v11; // [esp+0h] [ebp-15Ch]
  Main v12; // [esp+8h] [ebp-154h] BYREF
  Main v13; // [esp+Ch] [ebp-150h] BYREF
  char v14[112]; // [esp+7Ch] [ebp-E0h] BYREF
  char v15[112]; // [esp+ECh] [ebp-70h] BYREF

  result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c8b0*/
  if ( !*(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x48c8cc*/
  {
    result = (int)dword_A83D4C; /*0x48c8ce*/
    if ( dword_A83D4C->__pad_140[184] || dword_A83D4C->__pad_140[183] || dword_A83D4C->__pad_140[182] ) /*0x48c8ef*/
      goto LABEL_15; /*0x48c8f7*/
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( dword_A83D4C->__pad_140[181] ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
  LABEL_15:
      *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
  LABEL_9:
  ScenarioClass::CleanupTemporary(v10); /*0x48c918*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x48c925*/
  while ( (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x48c930*/
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x48c93f*/
  v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c951*/
  v9 = v1; /*0x48c959*/
  if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v3 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c9bf*/
          v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( g_MenuStateFlags ) /*0x48cb40*/
          {
  LABEL_34:
            Network::AddFrameEvent(v9); /*0x48cb42*/
          }
          else if ( !dword_A83D4C->__pad_140[181] /*0x48cb7b*/
                 && !dword_A83D4C->__pad_140[183]
                 && !dword_A83D4C->__pad_140[184]
                 && !dword_A83D4C->__pad_140[182] )
          {
            StringCSF = (int *)GetStringCSF(aTxtSurrender, 0, g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(StringCSF) ) /*0x48cba1*/
            {
              v8 = EventClass::AddEvent(v15, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cbc0*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cbcf*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v8, 0x6Fu); /*0x48cbeb*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cbfc*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48cc13*/
                ++stru_A80220.lineTrailer; /*0x48cc19*/
              }
              Network::AddFrameEvent(v9); /*0x48cc1e*/
              g_GameLoopActive = 0; /*0x48cc23*/
            }
          }
          goto LABEL_44; /*0x48cb47*/
        case 3: /*0x48c968*/
          switch ( ShowGameDialog() ) /*0x48ca2d*/
          {
            case 2: /*0x48ca2d*/
              goto LABEL_34;
            case 3: /*0x48ca2d*/
              v5 = EventClass::AddEvent((char *)&v13, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48ca43*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48ca52*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v5, 0x6Fu); /*0x48ca6e*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48ca7f*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48ca96*/
                ++stru_A80220.lineTrailer; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v6 = EventClass::AddEvent(v14, (int)dword_A83D4C->Object_field_0x30, 8u); /*0x48cac4*/
              if ( (int)stru_A80220.lineTrailer < 128 ) /*0x48cad3*/
              {
                qmemcpy((char *)&byte_A802D4 + 111 * dword_A802D0, v6, 0x6Fu); /*0x48caef*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cb00*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48cb17*/
                ++stru_A80220.lineTrailer; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              IDA_LOBYTE(*((unsigned int *)((char *)&FootClass_Array + 2))) = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(); /*0x48ca08*/
          v3 = 5; /*0x48ca0d*/
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(&v12); /*0x48c9cd*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c9d2*/
          if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v3 = 1; /*0x48c9dc*/
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(); /*0x48c9ef*/
          v3 = 5; /*0x48c9f4*/
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog((ObjectClass *)v9); /*0x48c99d*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c9a2*/
          v4 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) == 8; /*0x48c9a7*/
  LABEL_17:
          if ( !v4 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing((ScenarioClass *)dword_A8B230); /*0x48c975*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444); /*0x48c97a*/
          if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
  LABEL_44:
          *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 444) = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
  LABEL_18:
          if ( v3 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
  LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( IDA_BYTE2(dword_A8B230[381].vtable3) ) /*0x48cc4b*/
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x48cc5d*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x48cc68*/
  WTFMode::Init((WTFMode *)&dword_A8B238); /*0x48cc70*/
  return PostFrameCleanup(v11); /*0x48c990*/
}
}
// 0x48CCC0
namespace gamemd {
void MainGame()
{
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v3; // eax
  char v4; // cl
  TechnoTypeClass *v5; // ecx
  int v6; // eax
  ObjectClass *v9; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR v11[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = InitGame(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v3 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v3, -1, v11, 2048, 0, 0); /*0x48cd3e*/
      mbp.g_hInstance = g_hInstance; /*0x48cd4b*/
      mbp.g_hWnd = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.v11 = v11; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      IDA_LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  g_ExceptionReturnStack = (int)&v9; /*0x48cd91*/
  g_ExceptionReturnFrame = (int)&savedregs; /*0x48cd97*/
  g_ExceptionReturnAddr = (int)&loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  IDA_LOBYTE(inited) = MenuSelect(v9); /*0x48cdd3*/
  while ( (unsigned char)inited ) /*0x48cdda*/
  {
    dword_A8E7AC = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 15, 0); /*0x48cdfd*/
    Timer::PumpMessages((Timer *)dword_87F770); /*0x48ce08*/
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x48ce1e*/
      dword_ABCDFC = 0; /*0x48ce21*/
      dword_ABCE00 = 0; /*0x48ce27*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      byte_A8F900 = 0; /*0x48ce3a*/
      dword_B0BDB8 = 0; /*0x48ce40*/
      byte_B0BD78 = 0; /*0x48ce46*/
    }
    if ( dword_887368 ) /*0x48ce54*/
      ((Tooltip *)(dword_887368))->Enable(byte_A8EB80); /*0x48ce5d*/
    v4 = IDA_BYTE2(dword_A8B230[381].vtable3); /*0x48ce67*/
    dword_A8EDA0 = 0; /*0x48ce6d*/
    v4 = v4; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&dword_A8B238); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( (uint8_t)GameFrameLoop(v9) && GameFrameCheck(v9) ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(v9); /*0x48ce9c*/
    }
    while ( !GameFrameCheck(v9) ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&dword_A8B238); /*0x48ceb4*/
    byte_A8ED5C = 0; /*0x48cebf*/
    byte_A8E378 = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(v9); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&word_884E80, 30, 0); /*0x48cf02*/
    IDA_LOBYTE(v5) = 1; /*0x48cf07*/
    ScreenSaver::Process(v5, v9); /*0x48cf09*/
    if ( (dword_A8D5F8 & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&dword_A8D58C); /*0x48cf1c*/
    v6 = *(unsigned int *)&dword_A8B238; /*0x48cf21*/
    if ( *(unsigned int *)&dword_A8B238 == 2 || *(unsigned int *)&dword_A8B238 == 1 ) /*0x48cf2e*/
    {
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( *(unsigned int *)&dword_A8B238 != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface((Network *)v9); /*0x48cf3e*/
    }
    v6 = *(unsigned int *)&dword_A8B238; /*0x48cf53*/
  LABEL_27:
    if ( v6 == 3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
  LABEL_28:
    if ( v6 == 4 || v6 == 2 || v6 == 1 ) /*0x48cf69*/
    {
  LABEL_31:
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings((char *)&dword_A8B238); /*0x48cf79*/
    }
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf85*/
    {
  LABEL_34:
      dword_A8D5F8 = dword_A8D5F8; /*0x48cf87*/
      IDA_LOBYTE(dword_A8D5F8) = dword_A8D5F8 & 0xFD; /*0x48cf92*/
      *(unsigned int *)&dword_A8B238 = 0; /*0x48cf94*/
      dword_A8D5F8 = dword_A8D5F8; /*0x48cf9a*/
      (*(void (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x48cfa1*/
    }
    IDA_LOBYTE(inited) = MenuSelect(v9); /*0x48cfa4*/
  }
  if ( dword_887640 ) /*0x48cfbf*/
    IDA_LOBYTE(inited) = (*(char (**)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 20))(dword_887640); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}
}
// 0x48DEE0
namespace gamemd {
void sub_48DEE0(unsigned int * a1, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf

  if ( a1 ) /*0x48dee4*/
  {
    v3 = a3; /*0x48dee6*/
    if ( a3 ) /*0x48deec*/
    {
      if ( a2 <= 0 ) /*0x48def5*/
      {
  LABEL_7:
        *(unsigned int *)(v3 - 4) = 2147450879; /*0x48df11*/
      }
      else
      {
        while ( 1 ) /*0x48def9*/
        {
          v4 = (uint16_t)*a1 == 0x7FFF; /*0x48def9*/
          *(unsigned int *)v3 = *a1; /*0x48defc*/
          if ( v4 && *(unsigned short *)(v3 + 2) == 0x7FFF ) /*0x48df04*/
            break; /*0x48df04*/
          v3 += 4; /*0x48df06*/
          ++a1; /*0x48df09*/
          if ( --a2 <= 0 ) /*0x48df0f*/
            goto LABEL_7; /*0x48df0f*/
        }
      }
    }
  }
}
}
// 0x48E0B0
namespace gamemd {
CellStruct * * sub_48E0B0()
{
  FILE *result; // eax
  FILE *v2; // esi
  int v3; // eax
  int i; // edi
  unsigned int *v5; // eax
  unsigned int *v6; // edi
  char *v7; // eax

  result = *(FILE **)&dword_A8B238; /*0x48e0b1*/
  if ( *(unsigned int *)&dword_A8B238 == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v2 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416));
      if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[290] ) /*0x48e0f8*/
        v3 = *(unsigned int *)&g_MissionQueueFrame.waypoints[286] / *(unsigned int *)&g_MissionQueueFrame.waypoints[290]; /*0x48e101*/
      else
        v3 = 0; /*0x48e105*/
      fprintf(v2, "Average FPS: %d\n", v3);
      fprintf(v2, "Max MaxAhead: %d\n", dword_A8B568);
      fprintf(v2, "Latency setting: %d\n", dword_A8DB9C);
      fprintf(v2, "Game speed setting: %d\n", stru_A8EB00.ObjectTypeClass[24]);
      if ( *(unsigned int *)&stru_887598.isAliveFlag )
      {
        for ( i = 0;
              i < (*(int (**)(unsigned int))(**(unsigned int **)&stru_887598.isAliveFlag + 72))(*(unsigned int *)&stru_887598.isAliveFlag);
              ++i )
        {
          v5 = (unsigned int *)(*(int (**)(unsigned int, int))(**(unsigned int **)&stru_887598.isAliveFlag + 76))( /*0x48e16a*/
                           *(unsigned int *)&stru_887598.isAliveFlag,
                           i);
          if ( v5 )
            fprintf(
              v2,
              "Local address: %d.%d.%d.%d\n",
              (uint8_t)*v5,
              IDA_BYTE1(*v5),
              (uint8_t)IDA_BYTE2(*v5),
              IDA_HIBYTE(*v5));
        }
      }
      v6 = &unk_A8B5C4; /*0x48e1ad*/
      do
      {
        if ( *((unsigned char *)v6 - 80) )
        {
          fprintf(v2, "\nName: %s\n", (const char *)v6 - 80);
          v7 = ((Network *)((Network *)(v6 + 3)))->FormatAddress(0); /*0x48e1d4*/
          fprintf(v2, "Address: %s\n", v7);
          fprintf(v2, "Max avg round trip: %d\n", *v6);
          fprintf(v2, "Max round trip: %d\n", *(v6 - 4));
          fprintf(v2, "Resends: %d\n", *(v6 - 3));
          fprintf(v2, "Frame sync stalls: %d\n", v6[1]);
          fprintf(v2, "Command cound stalls: %d\n", v6[2]);
          fprintf(v2, "Lost: %d\n", *(v6 - 2));
          fprintf(v2, "Percent lost: %d\n", *(v6 - 1));
        }
        v6 += 26; /*0x48e253*/
      }
      while ( (int)v6 < (int)dword_A8B904 );
      return (FILE *)fclose(v2); /*0x48e263*/
    }
  }
  return result; /*0x48e26c*/
}
}
// 0x483710
namespace gamemd {
char E4Recv_483710::sub_483710()
{

  int BuildingByTiberiumType; // eax
  int v3; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vtable3) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) + 4 * BuildingByTiberiumType); /*0x483735*/
  if ( *((unsigned char *)this + 284) /*0x483766*/
    || *((uint8_t *)this + 286) >= *(unsigned int *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x48376b*/
  return Crate::FindPlacement((int)this, v4, 1); /*0x48377a*/

}
} // namespace gamemd

// 0x484A80
namespace gamemd {
int sub_484A80(int a1)
{
  ++*(unsigned int *)(a1 + 404); /*0x484a84*/
  return a1; /*0x484a8a*/
}
} // namespace gamemd

// 0x484F10
namespace gamemd {
char sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}
} // namespace gamemd

// 0x484F50
namespace gamemd {
int E4Recv_484F50::sub_484F50()
{

  int v2; // ecx
  int result; // eax
  unsigned int *v4; // edx
  unsigned int *v5; // edi
  int v6; // ebx
  unsigned int *v7; // esi
  unsigned char v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = *((unsigned int *)this + 57); /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = v8; /*0x484f62*/
    do /*0x484f76*/
    {
      if ( v2 >= 10 ) /*0x484f69*/
        break; /*0x484f69*/
      *v4 = result; /*0x484f6b*/
      result = *(unsigned int *)(result + 48); /*0x484f6d*/
      ++v2; /*0x484f70*/
      ++v4; /*0x484f71*/
    }
    while ( result ); /*0x484f76*/
  }
  if ( v2 > 0 ) /*0x484f7a*/
  {
    v5 = v8; /*0x484f7f*/
    v6 = v2; /*0x484f83*/
    do /*0x484fd8*/
    {
      v7 = (unsigned int *)*v5; /*0x484f85*/
      (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v5 + 460))(*v5, 0); /*0x484f8d*/
      if ( (*(int (**)(unsigned int *))(*v7 + 44))(v7) == 1 /*0x484fa9*/
        || (result = (*(int (**)(unsigned int *))(*v7 + 44))(v7), result == 2) )
      {
        if ( !v7[413] ) /*0x484fab*/
          WinAPI::Wrapper(-2147467261); /*0x484fba*/
        result = (*(int (**)(unsigned int, unsigned int))(*(unsigned int *)v7[413] + 124))( /*0x484fd1*/
                   v7[413],
                   *((uint8_t *)this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/

}
} // namespace gamemd

// 0x4863A0
namespace gamemd {
bool E4Recv_4863A0::sub_4863A0()
{

  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4863a0*/
  return (int)attachedBomb >= g_CellTileLookup && (int)attachedBomb < g_CellTileLookup + 20 /*0x4863c7*/
      || (int)attachedBomb >= dword_AA1058 && (int)attachedBomb < dword_AA1058 + 12;

}
} // namespace gamemd

// 0x4866D0
namespace gamemd {
bool E4Recv_4866D0::sub_4866D0()
{

  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866d0*/
  return (int)attachedBomb >= g_CellTileTypeCache && (int)attachedBomb < g_CellTileTypeCache + 15; /*0x4866e6*/

}
} // namespace gamemd

// 0x4866F0
namespace gamemd {
bool E4Recv_4866F0::sub_4866F0()
{

  BombClass *attachedBomb; // eax

  attachedBomb = this->attachedBomb; /*0x4866f0*/
  return (int)attachedBomb >= dword_ABBEC4 && (int)attachedBomb < dword_ABBEC4 + 4; /*0x486706*/

}
} // namespace gamemd

// 0x486D90
namespace gamemd {
int E4Recv_486D90::sub_486D90(char a2)
{

  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  unsigned int *p_vtable0; // eax
  int v9; // ecx
  int16_t v10[2]; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*((unsigned int *)this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      *(unsigned int *)v10 = this->occupant; /*0x486dca*/
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v10[0]; /*0x486dee*/
      HIWORD(v11) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x486df3*/
      *(unsigned int *)v10 = v11; /*0x486e02*/
      p_vtable0 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v10); /*0x486e06*/
    }
    else
    {
      p_vtable0 = this; /*0x486dbe*/
    }
    if ( (v3 & p_vtable0[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/

}
} // namespace gamemd

// 0x4879B0
namespace gamemd {
char E4Recv_4879B0::sub_4879B0()
{

  int v1; // esi
  int v2; // edi
  int inited; // eax
  unsigned int v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((int16_t)this->occupant << 8) + 128; /*0x4879cf*/
  v2 = ((int16_t)HIWORD(this->occupant) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/

}
} // namespace gamemd

// 0x487C80
namespace gamemd {
unsigned int E4Recv_487C80::_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ()
{

  return *((unsigned int *)this + 62); /*0x487c86*/

}
} // namespace gamemd

// 0x487EA0
namespace gamemd {
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{
  unsigned int *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  IDA_LOWORD(v5) = *a2 + IDA_LOWORD(dword_89F688[v4]); /*0x487ec4*/
  IDA_HIWORD(v5) = a2[1] + IDA_HIWORD(dword_89F688[v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}
} // namespace gamemd

// 0x4880D0
namespace gamemd {
int sub_4880D0()
{
  dword_89E7C8 = 0; /*0x4880d2*/
  dword_89E7CC = 0; /*0x4880d7*/
  dword_89E7D0 = 0; /*0x4880dc*/
  dword_89E7D4 = 0; /*0x4880e1*/
  return 0; /*0x4880e6*/
}
} // namespace gamemd

// 0x488210
namespace gamemd {
int E4Recv_488210::sub_488210(unsigned int a2, unsigned int * a3, int a4)
{

  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( BYTE1(this->fallRate) ) /*0x48821d*/
    {
      GadgetClass::Hide((GadgetClass *)this); /*0x488224*/
      return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x48823a*/
    }
    ((GadgetClass *)((GadgetClass *)this))->Show(); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver((ToggleClass *)this, a2, a3, 0); /*0x488238*/

}
} // namespace gamemd

// 0x488260
namespace gamemd {
int sub_488260()
{
  dword_89E7D8 = 0; /*0x488262*/
  dword_89E7DC = 0; /*0x488267*/
  dword_89E7E0 = 0; /*0x48826c*/
  dword_89E7E4 = 0; /*0x488271*/
  return 0; /*0x488276*/
}
} // namespace gamemd

// 0x488280
namespace gamemd {
CheckListClass * E4Recv_488280::sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{

  ((ListClass *)((int)this))->Construct(aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x4882ad*/
  *((unsigned char *)this + 372) = 0; /*0x4882b2*/
  *(unsigned int *)this->__pad_0 = &vt_CheckListClass; /*0x4882b9*/
  return this->__pad_0; /*0x4882c1*/

}
} // namespace gamemd

// 0x488740
namespace gamemd {
int sub_488740()
{
  dword_89E7E8 = 0; /*0x488742*/
  dword_89E7EC = 0; /*0x488747*/
  dword_89E7F0 = 0; /*0x48874c*/
  dword_89E7F4 = 0; /*0x488751*/
  return 0; /*0x488756*/
}
} // namespace gamemd

// 0x488760
namespace gamemd {
ColorListClass * E4Recv_488760::sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{

  ((ListClass *)((int)this))->Construct(aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x48878d*/
  *((unsigned int *)this + 94) = 0; /*0x488799*/
  *((unsigned int *)this + 95) = 0; /*0x48879f*/
  *((unsigned char *)this + 384) = 1; /*0x4887a5*/
  *((unsigned char *)this + 385) = 0; /*0x4887ab*/
  *((unsigned int *)this + 93) = &vt_DynamicVectorClass; /*0x4887b1*/
  *((unsigned int *)this + 98) = 10; /*0x4887bb*/
  *((unsigned int *)this + 97) = 0; /*0x4887c5*/
  *((unsigned int *)this + 100) = 0; /*0x4887cb*/
  *((unsigned int *)this + 99) = 1; /*0x4887d1*/
  *(unsigned int *)this->__pad_0 = &vt_ColorListClass; /*0x4887d7*/
  return this->__pad_0; /*0x4887df*/

}
} // namespace gamemd

// 0x4887F0
namespace gamemd {
int E4Recv_4887F0::sub_4887F0()
{

  int v2; // eax
  char *v3; // esi
  void *v4; // eax

  v2 = *((unsigned int *)this + 93); /*0x4887f5*/
  v3 = (char *)this + 372; /*0x4887fb*/
  *(unsigned int *)this->__pad_0 = &vt_ColorListClass; /*0x488803*/
  (*(void (**)(char *))(v2 + 12))((char *)this + 372); /*0x488809*/
  *((unsigned int *)this + 100) = 0; /*0x48880e*/
  v4 = (void *)*((unsigned int *)v3 + 1); /*0x488814*/
  *(unsigned int *)v3 = &vt_VectorClass; /*0x488819*/
  if ( v4 && v3[13] ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    *((unsigned int *)v3 + 1) = 0; /*0x48882f*/
  }
  v3[13] = 0; /*0x488834*/
  *((unsigned int *)v3 + 2) = 0; /*0x488837*/
  return ((ListClass *)((ListClass *)this))->Destruct(); /*0x48883f*/

}
} // namespace gamemd

// 0x488F70
namespace gamemd {
int sub_488F70()
{
  dword_89E800 = 0; /*0x488f72*/
  dword_89E804 = 0; /*0x488f77*/
  dword_89E808 = 0; /*0x488f7c*/
  dword_89E80C = 0; /*0x488f81*/
  return 0; /*0x488f86*/
}
} // namespace gamemd

// 0x488F90
namespace gamemd {
void sub_488F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x488f9c*/
  dbl_89E818 = Math::Sqrt(v0 + v0); /*0x488fae*/
}
} // namespace gamemd

// 0x488FC0
namespace gamemd {
void sub_488FC0()
{
  dbl_89E868 = dbl_89E818 / 60.0; /*0x488fcc*/
}
} // namespace gamemd

// 0x488FE0
namespace gamemd {
void sub_488FE0()
{
  dbl_89E850 = 1.0 / dbl_89E868; /*0x488fec*/
}
} // namespace gamemd

// 0x489000
namespace gamemd {
void sub_489000()
{
  dbl_89E848 = 0.0174532925199433 * 45.0; /*0x48900c*/
}
} // namespace gamemd

// 0x489020
namespace gamemd {
void sub_489020()
{
  dbl_89E820 = 0.0174532925199433 * 60.0; /*0x48902c*/
}
} // namespace gamemd

// 0x489040
namespace gamemd {
void sub_489040()
{
  dbl_89E7F8 = 0.0174532925199433 * 90.0; /*0x48904c*/
}
} // namespace gamemd

// 0x489060
namespace gamemd {
long long sub_489060()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E7F8 - dbl_89E820); /*0x489072*/
  result = Math::RoundToInt(v0 * dbl_89E818 * 0.5); /*0x489086*/
  dword_89E870 = result; /*0x48908b*/
  return result; /*0x489090*/
}
} // namespace gamemd

// 0x4890A0
namespace gamemd {
void sub_4890A0()
{
  dbl_89E828 = Math::ArcTan((double)dword_89E870 * 0.00390625); /*0x4890b7*/
}
} // namespace gamemd

// 0x4890D0
namespace gamemd {
void sub_4890D0()
{
  dbl_89E840 = Math::ArcTan((double)(2 * dword_89E870) / dbl_89E818); /*0x4890f2*/
}
} // namespace gamemd

// 0x489100
namespace gamemd {
long long sub_489100()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E870) + 0.5); /*0x48911b*/
  dword_89E864 = result; /*0x489120*/
  return result; /*0x489126*/
}
} // namespace gamemd

// 0x489130
namespace gamemd {
int sub_489130()
{
  word_89E810 = 0; /*0x489132*/
  word_89E812 = 0; /*0x489138*/
  return 0; /*0x48913e*/
}
} // namespace gamemd

// 0x489140
namespace gamemd {
int sub_489140()
{
  dword_89E830 = 0; /*0x489142*/
  dword_89E834 = 0; /*0x489147*/
  dword_89E838 = 0; /*0x48914c*/
  return 0; /*0x489151*/
}
} // namespace gamemd

// 0x489160
namespace gamemd {
int sub_489160()
{
  dword_89E860 = 0; /*0x489165*/
  dword_89E858 = 128; /*0x48916f*/
  dword_89E85C = 128; /*0x489174*/
  return 128; /*0x489179*/
}
} // namespace gamemd

// 0x489270
namespace gamemd {
void CellChainReact()
{
  ; /*0x489270*/
}
} // namespace gamemd

// 0x48A4F0
namespace gamemd {
int GetWarheadVersusMultiplier(int aP0, int aP1, int aP2, BulletClass * aP3)
{
  int v4; // edi
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // eax

  v4 = aP0; /*0x48a4f3*/
  if ( !aP0 || !aP1 ) /*0x48a501*/
    return 0; /*0x48a501*/
  if ( aP2 == 2 /*0x48a54f*/
    && *(unsigned char *)(aP1 + 333)
    && (*((unsigned int *)((Coord *)(&dword_87F7E8))->To_Cell(aP3) + 80) & 0x100) == 0
// 0x578080
    && aP3[2] < Cell::GetGroundHeight(unsigned int * a1) + 2 * dword_89E870 )
{

  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int *v4; // ecx
  unsigned int v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp+4h]

  v1 = a1[1]; /*0x57808a*/
  v6[0] = *a1; /*0x57808d*/
  v6[1] = v1; /*0x578091*/
  v2 = a1[1] / 256; /*0x5780ac*/
  v3 = v6[0] / 256 + (v2 << 9); /*0x5780b7*/
  if ( v3 < 0 /*0x5780ce*/
    || v3 >= *(int *)&stru_87F5F0.__pad_58[736]
    || (v4 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v3)) == 0 )
  {
    LOWORD(v7) = v6[0] / 256; /*0x5780d0*/
    HIWORD(v7) = v2; /*0x5780d5*/
    v4 = &g_MissionQueueFrame.briefing[130]; /*0x5780de*/
    g_MissionQueueFrame.briefing[139] = v7; /*0x5780e3*/
  }
  return Isometric::InitTables((int)v4, v6); /*0x5780f2*/

}
  if ( aP1 == *((unsigned int *)dword_8871E0 + 1517) ) /*0x48a5a5*/
    return *((unsigned int *)dword_8871E0 + 189); /*0x48a5b0*/
  v9 = *(unsigned int *)(aP1 + 276); /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( *(unsigned char *)(aP1 + 340) ) /*0x48a5bd*/
    return *(unsigned int *)(*(unsigned int *)(aP1 + 264) + 4 * Random::Range((unsigned int *)dword_A8B230 + 134, 0, v9 - 1)); /*0x48a5e4*/
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( v4 >= v10 ) /*0x48a5f4*/
    v4 = v10; /*0x48a5f6*/
  return *(unsigned int *)(*(unsigned int *)(aP1 + 264) + 4 * (v4 / 25)); /*0x48a57d*/
}
} // namespace gamemd

// 0x48A8D0
namespace gamemd {
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
  double v6; // kr00_8
  int result; // eax
  char v11; // c0
  int v12[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( SolveMathTrajectory(a1, a2, a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
  {
    if ( a1 ) /*0x48a907*/
    {
      IDA_LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
      result = (int)a6; /*0x48a923*/
      *a6 = a4; /*0x48a92d*/
      IDA_LOBYTE(result) = 1; /*0x48a930*/
    }
    else
    {
      SolveMathTrajectory(0, a2, a3 + 1, a4, v6, (int)v12); /*0x48a94f*/
      if ( v11 ) /*0x48a965*/
      {
        IDA_LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
        result = a4; /*0x48a983*/
      }
      else
      {
        IDA_LOWORD(result) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9a1*/
        IDA_LOWORD(a4) = result; /*0x48a9aa*/
      }
      *a6 = a4; /*0x48a989*/
      IDA_LOBYTE(result) = 1; /*0x48a98c*/
    }
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x48a9c4*/
  }
  return result; /*0x48a92b*/
}
} // namespace gamemd

// 0x48ABC0
namespace gamemd {
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{
  double v4; // st7
  double v5; // st6
  double v7; // [esp+0h] [ebp-28h]
  double v8; // [esp+8h] [ebp-20h]
  double v9; // [esp+10h] [ebp-18h]
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  v4 = (double)aP0; /*0x48abd1*/
  v5 = (double)a2; /*0x48abd5*/
  if ( v5 == 0.0 ) /*0x48abe6*/
    v5 = 0.001; /*0x48abea*/
  v8 = (double)a3; /*0x48abf3*/
  v7 = v4 * v4; /*0x48abfb*/
  v9 = v5 * v5; /*0x48ac03*/
  v11 = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9; /*0x48ac2c*/
  if ( v11 < 0.0 ) /*0x48ac3b*/
    return 0; /*0x48ac3d*/
  v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0; /*0x48ac5b*/
  if ( v12 == 0.0 ) /*0x48ac6a*/
    return 0; /*0x48ac6c*/
  v10 = v7 - v8 * a4; /*0x48ac8b*/
  return (Math::Sqrt(v11) + v10) / v12 >= 0.0 || (v10 - Math::Sqrt(v11)) / v12 >= 0.0; /*0x48ac41*/
}
} // namespace gamemd

// 0x48B070
namespace gamemd {
unsigned int * E4Recv_48B070::sub_48B070(int a2, int a3)
{

  this->Items = 0; /*0x48b07b*/
  this->Capacity = a2; /*0x48b07e*/
  this->IsInitialized = 1; /*0x48b081*/
  this->IsAllocated = 0; /*0x48b085*/
  this->vtable1 = &vt_VectorClass; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = (void *)a3; /*0x48b098*/
      return &this->vtable1; /*0x48b09e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->IsAllocated = 1; /*0x48b0b0*/
  }
  return &this->vtable1; /*0x48b09d*/

}
} // namespace gamemd

// 0x48B0C0
namespace gamemd {
int sub_48B0C0()
{
  dword_89E878 = 0; /*0x48b0c2*/
  dword_89E87C = 0; /*0x48b0c7*/
  dword_89E880 = 0; /*0x48b0cc*/
  dword_89E884 = 0; /*0x48b0d1*/
  return 0; /*0x48b0d6*/
}
} // namespace gamemd

// 0x48B1F0
namespace gamemd {
void CommBufferClass::sub_48B1F0()
{

  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int CommBufferClass_field_0x24; // edx
  int v6; // ebx
  int v7; // edi
  int CommBufferClass_field_0x34; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = *(unsigned int *)&this->__pad_0[4]; /*0x48b1f7*/
  *(unsigned int *)this->__pad_0 = &vt_CommBufferClass; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x24 + v4 + 20)); /*0x48b20e*/
      CommBufferClass_field_0x24 = this->CommBufferClass_field_0x24; /*0x48b213*/
      if ( *(unsigned int *)(CommBufferClass_field_0x24 + v4 + 28) ) /*0x48b219*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x24 + v4 + 28)); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 36; /*0x48b22e*/
    }
    while ( v2 < *(unsigned int *)&this->__pad_0[4] ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x34 + v7 + 12)); /*0x48b248*/
      CommBufferClass_field_0x34 = this->CommBufferClass_field_0x34; /*0x48b24d*/
      if ( *(unsigned int *)(CommBufferClass_field_0x34 + v7 + 20) ) /*0x48b253*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x34 + v7 + 20)); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 24; /*0x48b268*/
    }
    while ( v6 < this->CommBufferClass_field_0x8 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x24); /*0x48b273*/
  __3_YAXPAX_Z((void *)this->CommBufferClass_field_0x34); /*0x48b27c*/
  __3_YAXPAX_Z(*(void **)&this->__pad_28[8]); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/

}
} // namespace gamemd

// 0x48BB00
namespace gamemd {
ObjectClass * E4Recv_48BB00::sub_48BB00(void * Block, char a2)
{

  sub_48B1F0((CommBufferClass *)Block); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(Block); /*0x48bb10*/
  return Block; /*0x48bb1a*/

}
} // namespace gamemd

// 0x48BB20
namespace gamemd {
int sub_48BB20()
{
  dword_89E888 = 0; /*0x48bb22*/
  dword_89E88C = 0; /*0x48bb27*/
  dword_89E890 = 0; /*0x48bb2c*/
  dword_89E894 = 0; /*0x48bb31*/
  return 0; /*0x48bb36*/
}
} // namespace gamemd

// 0x48BB40
namespace gamemd {
bool sub_48BB40(int a1, int a2)
{
  int v2; // eax

  IDA_BYTE1(a2) &= ~8u; /*0x48bb40*/
  v2 = a2; /*0x48bb43*/
  IDA_BYTE1(v2) = IDA_BYTE1(a2) & 0xE8; /*0x48bb45*/
  return a2 == v2 || (*(uint8_t (**)(int, int))(*(unsigned int *)a1 + 20))(a1, a2) == 0; /*0x48bb57*/
}
} // namespace gamemd

// 0x48BC50
namespace gamemd {
int sub_48BC50()
{
  dword_89E8A0 = 0; /*0x48bc52*/
  dword_89E8A4 = 0; /*0x48bc57*/
  dword_89E8A8 = 0; /*0x48bc5c*/
  dword_89E8AC = 0; /*0x48bc61*/
  return 0; /*0x48bc66*/
}
} // namespace gamemd

// 0x48BC70
namespace gamemd {
void sub_48BC70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48bc7c*/
  dbl_89E8B8 = Math::Sqrt(v0 + v0); /*0x48bc8e*/
}
} // namespace gamemd

// 0x48BCA0
namespace gamemd {
void sub_48BCA0()
{
  dbl_89E908 = dbl_89E8B8 / 60.0; /*0x48bcac*/
}
} // namespace gamemd

// 0x48BCC0
namespace gamemd {
void sub_48BCC0()
{
  dbl_89E8F0 = 1.0 / dbl_89E908; /*0x48bccc*/
}
} // namespace gamemd

// 0x48BCE0
namespace gamemd {
void sub_48BCE0()
{
  dbl_89E8E8 = 0.0174532925199433 * 45.0; /*0x48bcec*/
}
} // namespace gamemd

// 0x48BD00
namespace gamemd {
void sub_48BD00()
{
  dbl_89E8C0 = 0.0174532925199433 * 60.0; /*0x48bd0c*/
}
} // namespace gamemd

// 0x48BD20
namespace gamemd {
void sub_48BD20()
{
  dbl_89E898 = 0.0174532925199433 * 90.0; /*0x48bd2c*/
}
} // namespace gamemd

// 0x48BD40
namespace gamemd {
long long sub_48BD40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E898 - dbl_89E8C0); /*0x48bd52*/
  result = Math::RoundToInt(v0 * dbl_89E8B8 * 0.5); /*0x48bd66*/
  dword_89E910 = result; /*0x48bd6b*/
  return result; /*0x48bd70*/
}
} // namespace gamemd

// 0x48BD80
namespace gamemd {
void sub_48BD80()
{
  dbl_89E8C8 = Math::ArcTan((double)dword_89E910 * 0.00390625); /*0x48bd97*/
}
} // namespace gamemd

// 0x48BDB0
namespace gamemd {
void sub_48BDB0()
{
  dbl_89E8E0 = Math::ArcTan((double)(2 * dword_89E910) / dbl_89E8B8); /*0x48bdd2*/
}
} // namespace gamemd

// 0x48BDE0
namespace gamemd {
long long sub_48BDE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E910) + 0.5); /*0x48bdfb*/
  dword_89E904 = result; /*0x48be00*/
  return result; /*0x48be06*/
}
} // namespace gamemd

// 0x48BE10
namespace gamemd {
int sub_48BE10()
{
  word_89E8B0 = 0; /*0x48be12*/
  word_89E8B2 = 0; /*0x48be18*/
  return 0; /*0x48be1e*/
}
} // namespace gamemd

// 0x48BE20
namespace gamemd {
int sub_48BE20()
{
  dword_89E8D0 = 0; /*0x48be22*/
  dword_89E8D4 = 0; /*0x48be27*/
  dword_89E8D8 = 0; /*0x48be2c*/
  return 0; /*0x48be31*/
}
} // namespace gamemd

// 0x48BE40
namespace gamemd {
int sub_48BE40()
{
  dword_89E900 = 0; /*0x48be45*/
  dword_89E8F8 = 128; /*0x48be4f*/
  dword_89E8FC = 128; /*0x48be54*/
  return 128; /*0x48be59*/
}
} // namespace gamemd

// 0x48C690
namespace gamemd {
int sub_48C690()
{
  dword_89E930 = 0; /*0x48c692*/
  dword_89E934 = 0; /*0x48c697*/
  dword_89E938 = 0; /*0x48c69c*/
  dword_89E93C = 0; /*0x48c6a1*/
  return 0; /*0x48c6a6*/
}
} // namespace gamemd

// 0x48C6B0
namespace gamemd {
void sub_48C6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48c6bc*/
  dbl_89E948 = Math::Sqrt(v0 + v0); /*0x48c6ce*/
}
} // namespace gamemd

// 0x48C6E0
namespace gamemd {
void sub_48C6E0()
{
  dbl_89E9A0 = dbl_89E948 / 60.0; /*0x48c6ec*/
}
} // namespace gamemd

// 0x48C700
namespace gamemd {
void sub_48C700()
{
  dbl_89E988 = 1.0 / dbl_89E9A0; /*0x48c70c*/
}
} // namespace gamemd

// 0x48C720
namespace gamemd {
void sub_48C720()
{
  dbl_89E980 = 0.0174532925199433 * 45.0; /*0x48c72c*/
}
} // namespace gamemd

// 0x48C740
namespace gamemd {
void sub_48C740()
{
  dbl_89E958 = 0.0174532925199433 * 60.0; /*0x48c74c*/
}
} // namespace gamemd

// 0x48C760
namespace gamemd {
void sub_48C760()
{
  dbl_89E918 = 0.0174532925199433 * 90.0; /*0x48c76c*/
}
} // namespace gamemd

// 0x48C780
namespace gamemd {
long long sub_48C780()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E918 - dbl_89E958); /*0x48c792*/
  result = Math::RoundToInt(v0 * dbl_89E948 * 0.5); /*0x48c7a6*/
  dword_89E9A8 = result; /*0x48c7ab*/
  return result; /*0x48c7b0*/
}
} // namespace gamemd

// 0x48C7C0
namespace gamemd {
void sub_48C7C0()
{
  dbl_89E960 = Math::ArcTan((double)dword_89E9A8 * 0.00390625); /*0x48c7d7*/
}
} // namespace gamemd

// 0x48C7F0
namespace gamemd {
void sub_48C7F0()
{
  dbl_89E978 = Math::ArcTan((double)(2 * dword_89E9A8) / dbl_89E948); /*0x48c812*/
}
} // namespace gamemd

// 0x48C820
namespace gamemd {
long long sub_48C820()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E9A8) + 0.5); /*0x48c83b*/
  dword_89E99C = result; /*0x48c840*/
  return result; /*0x48c846*/
}
} // namespace gamemd

// 0x48C850
namespace gamemd {
int sub_48C850()
{
  word_89E940 = 0; /*0x48c852*/
  word_89E942 = 0; /*0x48c858*/
  return 0; /*0x48c85e*/
}
} // namespace gamemd

// 0x48C860
namespace gamemd {
int sub_48C860()
{
  dword_89E968 = 0; /*0x48c862*/
  dword_89E96C = 0; /*0x48c867*/
  dword_89E970 = 0; /*0x48c86c*/
  return 0; /*0x48c871*/
}
} // namespace gamemd

// 0x48C880
namespace gamemd {
int sub_48C880()
{
  dword_89E998 = 0; /*0x48c885*/
  dword_89E990 = 128; /*0x48c88f*/
  dword_89E994 = 128; /*0x48c894*/
  return 128; /*0x48c899*/
}
} // namespace gamemd

// 0x48C8A0
namespace gamemd {
void nullsub_112()
{
  ; /*0x48c8a0*/
}
} // namespace gamemd

// 0x48DB70
namespace gamemd {
void nullsub_8()
{
  ; /*0x48db70*/
}
} // namespace gamemd

// 0x48DED0
namespace gamemd {
void ObjectClass::nullsub_51()
{

  ; /*0x48ded0*/

}
} // namespace gamemd

// 0x48DFD0
namespace gamemd {
char * sub_48DFD0(unsigned int a1)
{
  if ( a1 >= 0xC ) /*0x48dfd3*/
    return g_Str__none_; /*0x48dfdd*/
  else
    return off_81DA28[a1]; /*0x48dfd5*/
}
} // namespace gamemd

// 0x48E030
namespace gamemd {
char * sub_48E030(unsigned int a1)
{
  if ( a1 >= 8 ) /*0x48e033*/
    return g_Str__none_; /*0x48e03d*/
  else
    return off_81DA58[a1]; /*0x48e035*/
}
} // namespace gamemd

// 0x48E090
namespace gamemd {
char * sub_48E090(unsigned int a1)
{
  if ( a1 >= 5 ) /*0x48e093*/
    return g_Str__none_; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}
} // namespace gamemd

// 0x48E270
namespace gamemd {
int sub_48E270()
{
  dword_89E9C0 = 0; /*0x48e272*/
  dword_89E9C4 = 0; /*0x48e277*/
  dword_89E9C8 = 0; /*0x48e27c*/
  dword_89E9CC = 0; /*0x48e281*/
  return 0; /*0x48e286*/
}
} // namespace gamemd

// 0x48E290
namespace gamemd {
void sub_48E290()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48e29c*/
  dbl_89E9D8 = Math::Sqrt(v0 + v0); /*0x48e2ae*/
}
} // namespace gamemd

// 0x48E2C0
namespace gamemd {
void sub_48E2C0()
{
  dbl_89EC18 = dbl_89E9D8 / 60.0; /*0x48e2cc*/
}
} // namespace gamemd

// 0x48E2E0
namespace gamemd {
void sub_48E2E0()
{
  dbl_89EC00 = 1.0 / dbl_89EC18; /*0x48e2ec*/
}
} // namespace gamemd

// 0x48E300
namespace gamemd {
void sub_48E300()
{
  dbl_89EBF8 = 0.0174532925199433 * 45.0; /*0x48e30c*/
}
} // namespace gamemd

// 0x48E320
namespace gamemd {
void sub_48E320()
{
  dbl_89E9E0 = 0.0174532925199433 * 60.0; /*0x48e32c*/
}
} // namespace gamemd

// 0x48E340
namespace gamemd {
void sub_48E340()
{
  dbl_89E9B8 = 0.0174532925199433 * 90.0; /*0x48e34c*/
}
} // namespace gamemd

// 0x48E360
namespace gamemd {
long long sub_48E360()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89E9B8 - dbl_89E9E0); /*0x48e372*/
  result = Math::RoundToInt(v0 * dbl_89E9D8 * 0.5); /*0x48e386*/
  dword_89EC20 = result; /*0x48e38b*/
  return result; /*0x48e390*/
}
} // namespace gamemd

// 0x48E3A0
namespace gamemd {
void sub_48E3A0()
{
  dbl_89E9E8 = Math::ArcTan((double)dword_89EC20 * 0.00390625); /*0x48e3b7*/
}
} // namespace gamemd

// 0x48E3D0
namespace gamemd {
void sub_48E3D0()
{
  dbl_89EBF0 = Math::ArcTan((double)(2 * dword_89EC20) / dbl_89E9D8); /*0x48e3f2*/
}
} // namespace gamemd

// 0x48E400
namespace gamemd {
long long sub_48E400()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89EC20) + 0.5); /*0x48e41b*/
  dword_89EC14 = result; /*0x48e420*/
  return result; /*0x48e426*/
}
} // namespace gamemd

// 0x48E430
namespace gamemd {
int sub_48E430()
{
  word_89E9D0 = 0; /*0x48e432*/
  word_89E9D2 = 0; /*0x48e438*/
  return 0; /*0x48e43e*/
}
} // namespace gamemd

// 0x48E440
namespace gamemd {
int sub_48E440()
{
  dword_89EA30 = 0; /*0x48e442*/
  dword_89EA34 = 0; /*0x48e447*/
  dword_89EA38 = 0; /*0x48e44c*/
  return 0; /*0x48e451*/
}
} // namespace gamemd

// 0x48E460
namespace gamemd {
int sub_48E460()
{
  dword_89EC10 = 0; /*0x48e465*/
  dword_89EC08 = 128; /*0x48e46f*/
  dword_89EC0C = 128; /*0x48e474*/
  return 128; /*0x48e479*/
}
} // namespace gamemd

// 0x48E480
namespace gamemd {
int sub_48E480()
{
  dword_89E9F0[0] = 128; /*0x48e489*/
  dword_89E9F4[0] = 128; /*0x48e493*/
  dword_89E9FC = 64; /*0x48e49b*/
  dword_89EA00 = 64; /*0x48e4a5*/
  dword_89EA08 = 192; /*0x48e4ab*/
  dword_89EA0C = 64; /*0x48e4b0*/
  dword_89EA14 = 64; /*0x48e4bd*/
  dword_89E9F8[0] = 0; /*0x48e4c4*/
  dword_89EA04 = 0; /*0x48e4ca*/
  dword_89EA10 = 0; /*0x48e4d0*/
  dword_89EA18 = 192; /*0x48e4d6*/
  dword_89EA1C = 0; /*0x48e4dc*/
  dword_89EA20 = 192; /*0x48e4e2*/
  dword_89EA24 = 192; /*0x48e4e7*/
  dword_89EA28 = 0; /*0x48e4ed*/
  return 192; /*0x48e4f3*/
}
} // namespace gamemd

// 0x48E500
namespace gamemd {
int sub_48E500()
{
  dword_89ECD8 = 0; /*0x48e502*/
  dword_89ECDC = 0; /*0x48e507*/
  dword_89ECE0 = 0; /*0x48e50c*/
  dword_89ECE4 = 0; /*0x48e511*/
  return 0; /*0x48e516*/
}
} // namespace gamemd

// 0x48E680
namespace gamemd {
int sub_48E680()
{
  dword_89ECE8 = 0; /*0x48e682*/
  dword_89ECEC = 0; /*0x48e687*/
  dword_89ECF0 = 0; /*0x48e68c*/
  dword_89ECF4 = 0; /*0x48e691*/
  return 0; /*0x48e696*/
}
} // namespace gamemd

// 0x48E6A0
namespace gamemd {
int sub_48E6A0()
{
  dword_89ECFC = 0; /*0x48e6a7*/
  dword_89ED00 = 0; /*0x48e6ac*/
  byte_89ED04 = 1; /*0x48e6b1*/
  byte_89ED05 = 0; /*0x48e6b8*/
  dword_89ECF8 = (int)&DynamicVectorClass_ConvertClass___vftable; /*0x48e6bd*/
  dword_89ED0C = 10; /*0x48e6c7*/
  dword_89ED08 = 0; /*0x48e6d1*/
  return atexit(sub_48E6E0); /*0x48e6dc*/
}
} // namespace gamemd

// 0x48E6E0
namespace gamemd {
void sub_48E6E0()
{
  if ( (byte_89ED10 & 1) == 0 ) /*0x48e6ea*/
  {
    dword_89ECF8 = (int)&VectorClass_ConvertClass___vftable; /*0x48e6ee*/
    byte_89ED10 |= 1u; /*0x48e701*/
    if ( dword_89ECFC ) /*0x48e707*/
    {
      if ( byte_89ED05 ) /*0x48e711*/
      {
        RA2_OPDEL(dword_89ECFC); /*0x48e714*/
        dword_89ECFC = 0; /*0x48e71c*/
      }
    }
    byte_89ED05 = 0; /*0x48e726*/
    dword_89ED00 = 0; /*0x48e72d*/
  }
}
} // namespace gamemd
