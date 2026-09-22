// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
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

// 0x4880F0
namespace gamemd {
int E4Recv_4880F0::sub_4880F0(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_4880F0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v15; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((_DWORD *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x488110*/
  v3 = this->M16; /*0x488116*/
  v4 = this->M20; /*0x488119*/
  v15 = this->M12; /*0x48811c*/
  v5 = this->M24; /*0x488120*/
  v16 = v3; /*0x488123*/
  v17 = v4; /*0x488127*/
  v18 = v5; /*0x488133*/
  DrawBuildingTilesSHP(&v15, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 26); /*0x48815c*/
  v7 = this->M16 + 1; /*0x488167*/
  v15 = this->M12 + 1; /*0x488168*/
  v8 = this->M20; /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = this->M24 - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, &v15, v6); /*0x48818e*/
  if ( (unsigned char)this->M45 ) /*0x488191*/
  {
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 8); /*0x4881b8*/
    v11 = this->M16 + 1; /*0x4881c3*/
    v15 = this->M12 + 1; /*0x4881c4*/
    v12 = this->M20; /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = this->M24 - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, &v15, v10); /*0x4881ea*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4881f5*/
  return 1; /*0x4881fd*/
}
}
} // namespace gamemd

// 0x489180
namespace gamemd {
int Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // ecx
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (*(_BYTE *)g_ScenarioClass_Instance & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v9 = v7; /*0x4891ca*/
  v10 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  v8 = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891f1*/
  if ( v10 != v9 && v8 ) /*0x489200*/
    v4 = Math::RoundToInt((v9 - v10) * (double)(v8 - a4) / (double)v8 + v10); /*0x489225*/
  result = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= *((_DWORD *)g_RulesClass_Instance + 1458) ) /*0x489257*/
    return *((_DWORD *)g_RulesClass_Instance + 1458); /*0x48925a*/
  return result; /*0x4891b8*/
}
}
} // namespace gamemd

// 0x489280
namespace gamemd {
int PlaySoundEffectAt(TechnoClass * aP0, IUnknown * aP1, unsigned int * a2, ObjectClass * aP3, char a5, int aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall PlaySoundEffectAt(TechnoClass *aP0, IUnknown *aP1, _DWORD *a2, ObjectClass *aP3, char a5, int aP6)
{
  ObjectClass *v8; // esi
  VectorClass *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  IUnknown *v15; // eax
  int v16; // eax
  IUnknown *v17; // eax
  int v18; // eax
  IUnknown *v19; // eax
  int v20; // eax
  int v21; // ecx
  __int16 ax29; // ax
  TechnoClass *v22; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  _DWORD *v30; // ebx
  int *v31; // ebx
  _DWORD *eax61a; // eax
  IUnknown *v32; // eax
  BuildingTypeClass *v34; // edx
  double v35; // st7
  int v36; // eax
  _DWORD *eax63; // eax
  IUnknown *v37; // eax
  double st7_63; // st7
  BuildingTypeClass *v39; // edx
  double v41; // st6
  double v42; // st5
  _DWORD *eax64; // eax
  IUnknown *v43; // eax
  BuildingTypeClass *v44; // edx
  BuildingTypeClass *v45; // eax
  double v47; // st7
  IUnknown *v48; // eax
  IUnknown *v49; // ecx
  BuildingTypeClass **eax83; // eax
  BuildingTypeClass *v51; // esi
  BuildingTypeClass *v50; // edi
  int v53; // edx
  int v54; // esi
  int v55; // esi
  double v57; // st7
  ObjectClass *v58; // ebx
  int v59; // esi
  IUnknown *ebx112; // ebx
  ObjectClass *v61; // eax
  ObjectClass *v60; // edi
  int *v63; // esi
  BuildingTypeClass *v62; // ecx
  int v65; // edx
  double v66; // st7
  float v67; // edx
  int v68; // edi
  int v69; // ebx
  int v70; // eax
  BuildingTypeClass *ecx123; // ecx
  int eax123a; // eax
  IUnknown *v71; // edi
  ParticleSystemClass *v72; // eax
  int v75; // esi
  _DWORD *eax137; // eax
  int eax138; // eax
  AbstractClass *v76; // ebx
  AbstractClass *v77; // edx
  int v80; // eax
  int Z; // ecx
  int v82; // eax
  int v83; // esi
  AbstractClass *v84; // eax
  int ecx167; // ecx
  int v86; // eax
  BuildingTypeClass *v85; // ecx
  int v88; // eax
  int v89; // esi
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int eax203; // eax
  void **v95; // eax
  CoordStruct *v94; // esi
  int v97; // edi
  void *v98; // eax
  int v99; // eax
  ParticleSystemClass *v100; // eax
  int v101; // eax
  ParticleSystemClass *v102; // eax
  BOOL v103; // esi
  float aP0a; // [esp+38h] [ebp-E8h]
  float aP0b; // [esp+38h] [ebp-E8h]
  bool v106; // [esp+4Fh] [ebp-D1h]
  bool v107; // [esp+4Fh] [ebp-D1h]
  int v108; // [esp+50h] [ebp-D0h]
  int *v109; // [esp+50h] [ebp-D0h]
  int v110; // [esp+50h] [ebp-D0h]
  int i; // [esp+50h] [ebp-D0h]
  int v112; // [esp+50h] [ebp-D0h]
  _DWORD *v113; // [esp+50h] [ebp-D0h]
  char v114; // [esp+57h] [ebp-C9h]
  int v115; // [esp+58h] [ebp-C8h] BYREF
  bool varC3; // [esp+5Dh] [ebp-C3h]
  char varC2; // [esp+5Eh] [ebp-C2h]
  char v118; // [esp+5Fh] [ebp-C1h]
  VectorClass *aP1a; // [esp+60h] [ebp-C0h]
  TechnoClass *v120; // [esp+64h] [ebp-BCh]
  CoordStruct *aP2; // [esp+68h] [ebp-B8h]
  _DWORD v122[2]; // [esp+6Ch] [ebp-B4h] BYREF
  BuildingTypeClass *v116; // [esp+74h] [ebp-ACh]
  IUnknown *v117; // [esp+78h] [ebp-A8h] BYREF
  void *Block; // [esp+7Ch] [ebp-A4h]
  int v126; // [esp+80h] [ebp-A0h]
  int v127; // [esp+84h] [ebp-9Ch]
  IUnknown *v121; // [esp+88h] [ebp-98h]
  int var94; // [esp+8Ch] [ebp-94h]
  __int64 v130; // [esp+90h] [ebp-90h] BYREF
  float v131; // [esp+98h] [ebp-88h]
  __int64 v132; // [esp+9Ch] [ebp-84h] BYREF
  float v133; // [esp+A4h] [ebp-7Ch]
  int v134; // [esp+A8h] [ebp-78h] BYREF
  int v135; // [esp+ACh] [ebp-74h] BYREF
  IUnknown *v129; // [esp+B0h] [ebp-70h]
  BuildingTypeClass *v137; // [esp+B4h] [ebp-6Ch]
  IUnknown *v138; // [esp+B8h] [ebp-68h] BYREF
  __int64 v139; // [esp+BCh] [ebp-64h]
  BuildingTypeClass *v140; // [esp+C4h] [ebp-5Ch]
  double v141; // [esp+C8h] [ebp-58h] BYREF
  IUnknown *j; // [esp+D4h] [ebp-4Ch] BYREF
  __int64 v143; // [esp+D8h] [ebp-48h] BYREF
  float v144; // [esp+E0h] [ebp-40h]
  int v145[3]; // [esp+E4h] [ebp-3Ch] BYREF
  char v146[12]; // [esp+F0h] [ebp-30h] BYREF
  int v147[3]; // [esp+FCh] [ebp-24h] BYREF
  int v148[3]; // [esp+108h] [ebp-18h] BYREF
  char v149[12]; // [esp+114h] [ebp-Ch] BYREF

  v120 = (TechnoClass *)aP1;
  aP2 = (CoordStruct *)aP0;
  sub_48B070(&v117, 0, 0);
  v117 = (IUnknown *)&DynamicVectorClass<DamageGroup *>::`vftable';
  var94 = 10;
  v121 = 0;
  if ( !aP1 || (**(_BYTE **)&HouseClass_Player.__pad_5568[8060] & 0x20) != 0 || (v8 = aP3) == 0 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block && BYTE1(v127) )
      __3_YAXPAX_Z(Block);
    return 1;
  }
  v134 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus * 256.0);
  v106 = aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4012);
  LOWORD(v108) = *(_DWORD *)aP0->__pad_0 / 256;
  HIWORD(v108) = *(_DWORD *)&aP0->__pad_0[4] / 256;
  v115 = v108;
  v9 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v115);
  v10 = *(float *)&aP3[1].spawnStatus;
  aP1a = v9;
  varC2 = 0;
  v118 = 0;
  v114 = 0;
  varC3 = v10 <= 0.5;
  LODWORD(v143) = ((__int16)v115 << 8) + 128;
  HIDWORD(v143) = (SHIWORD(v115) << 8) + 128;
  v144 = 0.0;
  if ( Cell::GetGroundHeight((IUnknown *)&v143) < *(_DWORD *)&aP0->__pad_0[8] )
  {
    v11 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus);
    AircraftTrackerClass::FillCurrentVector((int)&stru_87C374.__pad_579C[23928], aP1a, v11);
    v12 = VectorClass::RemoveObjectById((int)&stru_87C374.__pad_579C[23928]);
    if ( v12 )
    {
      do
      {
        if ( *(_BYTE *)(v12 + 144) )
        {
          if ( *(_BYTE *)(v12 + 116) )
          {
            if ( *(int *)(v12 + 108) > 0 )
            {
              v13 = *(_DWORD *)(v12 + 156);
              v14 = *(_DWORD *)(v12 + 160);
              v140 = *(BuildingTypeClass **)(v12 + 164);
              v15 = Coord::Subtract(
                      &v135,
                      (IUnknown *)(*(_DWORD *)aP0->__pad_0 - v13),
                      (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - v14),
                      (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - (_DWORD)v140));
              v143 = *(_QWORD *)&v15->field_0;
              v144 = *(float *)&v15->field_8;
              Coord::Length((int *)&v143);
              if ( v16 <= v134 )
              {
                if ( varC3
                  && v16 < 85
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 352))(v12)
                  && !*(_DWORD *)(v12 + 452) )
                {
                  v114 = 1;
                }
                v109 = (int *)__2_YAPAXI_Z(8u);
                *v109 = v12;
                v17 = Coord::Subtract(
                        &v130,
                        (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *(_DWORD *)(v12 + 156)),
                        (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - *(_DWORD *)(v12 + 160)),
                        (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - *(_DWORD *)(v12 + 164)));
                v132 = *(_QWORD *)&v17->field_0;
                v133 = *(float *)&v17->field_8;
                Coord::Length((int *)&v132);
                v109[1] = v18;
                if ( (int)v121 < v126
                  || (BYTE1(v127) || !v126)
                  && var94 > 0
                  && ((unsigned __int8 (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, var94 + v126, 0) )
                {
                  v19 = v121;
                  v121 = (IUnknown *)((char *)v121 + 1);
                  *((_DWORD *)Block + (_DWORD)v19) = v109;
                }
              }
            }
          }
        }
        v12 = VectorClass::RemoveObjectById((int)&stru_87C374.__pad_579C[23928]);
      }
      while ( v12 );
      v8 = aP3;
    }
  }
  if ( ((int)aP1a[20].vtable0 & 0x100) != 0
    && *(_DWORD *)&aP0->__pad_0[8] > *(_DWORD *)&stru_89E138.__pad_71C[16] / 2 + Cell::GetGroundHeight((IUnknown *)aP0) )
  {
    varC2 = 1;
  }
  v20 = Math::RoundToInt(*(float *)&v8[1].spawnStatus + 0.99);
  v21 = dword_7ED3D0[v20];
  v122[0] = v20;
  v110 = 0;
  if ( v21 > 0 )
  {
    while ( 1 )
    {
      ax29 = HIWORD(v115) + HIWORD(dword_ABD490[v110]);
      LOWORD(v138) = v115 + LOWORD(dword_ABD490[v110]);
      HIWORD(v138) = ax29;
      j = v138;
      v22 = (TechnoClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&j);
      aP1a = (VectorClass *)v22;
      v24 = v22->ambientSoundController[2];
      if ( v24 != -1 )
      {
        v25 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * v24);
        LODWORD(v141) = v25;
        if ( *(_BYTE *)(v25 + 689) && (!*(_BYTE *)(v25 + 681) || LOBYTE(v8[1].location[0])) && a5 )
        {
          CellClass::ReduceTiberium((int)v22, (InfantryTypeClass *)((int)v120 / 10));
          v25 = LODWORD(v141);
        }
        if ( *(_BYTE *)(v25 + 680) )
        {
          if ( v8[1].isVisible )
          {
            BuildingClass::SellEffects((int)v22, (TechnoClass *)0xFFFFFFFF);
          }
          else if ( v8[1].isInLogic || v8[1].alignmentPadding99[1] && *(_DWORD *)(v25 + 156) == 6 )
          {
            BuildingClass::SellEffects((int)v22, v120);
          }
        }
        if ( v22->ambientSoundController[2] == -1 )
          AbstractClass::ClearTargetToMeClearManagerTarget((int)v22);
      }
      v26 = varC2 ? v22->flashing[1] : v22->flashing[0];
      if ( v26 )
        break;
LABEL_81:
      if ( ++v110 >= dword_7ED3D0[v122[0]] )
        goto LABEL_82;
      v8 = aP3;
    }
    while ( (_DWORD *)v26 == a2 && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3232) && !v106
         || !*(_BYTE *)(v26 + 144) )
    {
LABEL_80:
      v26 = *(_DWORD *)(v26 + 48);
      if ( !v26 )
        goto LABEL_81;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 1
      && (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x800) != 0 )
    {
      v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 136))(v26);
      v28 = 0;
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2892);
      if ( v29 > 0 )
      {
        v30 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2880);
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
    v31 = (int *)__2_YAPAXI_Z(8u);
    *v31 = v26;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 6 )
    {
      if ( !v110 )
      {
        if ( *(_DWORD *)&aP0->__pad_0[8]
           - *(_DWORD *)((*((int (__thiscall **)(VectorClass *, __int64 *))aP1a->vtable0 + 18))(aP1a, &v143) + 8) <= 2 * *(_DWORD *)&stru_89E138.__pad_71C[28] )
        {
          v31[1] = 0;
          goto LABEL_67;
        }
        eax61a = (_DWORD *)(*((int (__thiscall **)(VectorClass *, __int64 *))aP1a->vtable0 + 18))(aP1a, &v130);
        v32 = Coord::Subtract(
                v148,
                (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax61a),
                (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax61a[1]),
                (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax61a[2]));
        LODWORD(v132) = v32->field_0;
        v34 = (BuildingTypeClass *)v32->field_8;
        HIDWORD(v132) = v32->field_4;
        v133 = *(float *)&v34;
        v35 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(int)v34 * (double)(int)v34
                                          + (double)SHIDWORD(v132) * (double)SHIDWORD(v132)
                                          + (double)(int)v132 * (double)(int)v132));
        v36 = Math::RoundToInt(v35) - 2 * *(_DWORD *)&stru_89E138.__pad_71C[28];
LABEL_66:
        v31[1] = v36;
LABEL_67:
        if ( varC3 && !v110 )
        {
          HIBYTE(v116) = *(_BYTE *)(v26 + 20) & 1;
          if ( HIBYTE(v116) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 352))(v26)
              && !*(_DWORD *)(v26 + 452)
              && v31[1] < 85 )
            {
              v114 = 1;
            }
          }
        }
        if ( (int)v121 < v126
          || (BYTE1(v127) || !v126)
          && var94 > 0
          && ((unsigned __int8 (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, var94 + v126, 0) )
        {
          v48 = v121;
          v121 = (IUnknown *)((char *)v121 + 1);
          *((_DWORD *)Block + (_DWORD)v48) = v31;
        }
        goto LABEL_80;
      }
      eax63 = (_DWORD *)(*((int (__thiscall **)(VectorClass *, char *))aP1a->vtable0 + 18))(aP1a, v149);
      v37 = Coord::Subtract(
              v145,
              (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax63),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax63[1]),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax63[2]));
      LODWORD(v139) = v37->field_0;
      st7_63 = (double)(int)v139;
      v39 = (BuildingTypeClass *)v37->field_8;
      HIDWORD(v139) = v37->field_4;
      v41 = (double)SHIDWORD(v139);
      v140 = v39;
      v42 = (double)(int)v39;
    }
    else
    {
      eax64 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v26 + 164))(v26, v146);
      v43 = Coord::Subtract(
              v147,
              (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax64),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax64[1]),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax64[2]));
      v135 = v43->field_0;
      v44 = (BuildingTypeClass *)v43->field_4;
      st7_63 = (double)v135;
      v45 = (BuildingTypeClass *)v43->field_8;
      v129 = (IUnknown *)v44;
      v41 = (double)(int)v44;
      v137 = v45;
      v42 = (double)(int)v45;
    }
    v47 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v42 * v42 + v41 * v41 + st7_63 * st7_63));
    v36 = Math::RoundToInt(v47);
    goto LABEL_66;
  }
LABEL_82:
  v49 = v121;
  for ( i = 0; i < (int)v121; ++i )
  {
    eax83 = (BuildingTypeClass **)*((_DWORD *)Block + i);
    v51 = *eax83;
    v50 = eax83[1];
    if ( (*eax83)->Name[44]
      && ((*(int (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 44))(v51) != 6
       || !*(_BYTE *)(v51->DieSound[4] + 5889))
      && (!v114
       || v51
       && (HIBYTE(v116) = v51->abstractFlags & 1) != 0
       && (*(unsigned __int8 (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 352))(v51)) )
    {
      if ( (*(int (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 44))(v51) == 2
        && (*(unsigned __int8 (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 84))(v51) )
      {
        v50 = (BuildingTypeClass *)((int)v50 / 2);
      }
      if ( *(int *)&v51->Name[8] > 0 && v51->Name[16] && !v51->Name[29] && (int)v50 <= v134 )
      {
        v53 = v51->vtable0;
        v122[0] = v120;
        (*(void (__thiscall **)(BuildingTypeClass *, _DWORD *, BuildingTypeClass *, ObjectClass *, _DWORD *, _DWORD, _DWORD, int))(v53 + 364))(
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
    v49 = v121;
  }
  v54 = 0;
  if ( (int)v49 > 0 )
  {
    do
      __3_YAXPAX_Z(*((void **)Block + v54++));
    while ( v54 < (int)v121 );
  }
  v55 = v126;
  ((void (__thiscall *)(IUnknown **))v117->field_C)(&v117);
  ((void (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, v55, 0);
  if ( v114 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block )
    {
      if ( BYTE1(v127) )
        __3_YAXPAX_Z(Block);
    }
    return 2;
  }
  v57 = (double)(int)v120 * 0.01;
  if ( v57 >= 4.0 )
    v141 = 4.0;
  else
    v141 = v57;
  v58 = aP3;
  if ( BYTE2(aP3[1].location[1]) )
  {
    if ( v141 > 0.3 )
    {
      v59 = (__int16)v115 - 3;
      v112 = v59;
      if ( v59 <= (__int16)v115 + 3 )
      {
        do
        {
          ebx112 = (IUnknown *)(SHIWORD(v115) - 3);
          for ( j = ebx112; (int)ebx112 <= SHIWORD(v115) + 3; j = ebx112 )
          {
            if ( varC2 )
            {
              LOWORD(v134) = v59;
              HIWORD(v134) = (_WORD)ebx112;
              v61 = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v134)
                                   + 58);
            }
            else
            {
              LOWORD(v138) = v59;
              HIWORD(v138) = (_WORD)ebx112;
              v61 = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v138)
                                   + 57);
            }
            v60 = v61;
            aP1a = (VectorClass *)v61;
            if ( v61 )
            {
              do
              {
                v63 = (int *)AbstractClass::IsTechnoType(v60);
                if ( v63 )
                {
                  if ( __PAIR32__((unsigned __int16)ebx112, v112) == v115 && a2 )
                  {
                    v135 = v63[39];
                    v129 = (IUnknown *)v63[40];
                    v137 = (BuildingTypeClass *)v63[41];
                    v62 = (BuildingTypeClass *)a2[40];
                    v122[0] = a2[39] - v135;
                    v65 = a2[41] - (_DWORD)v137;
                    *(float *)&v130 = (float)v122[0];
                    v122[0] = v65;
                    *((float *)&v130 + 1) = (float)((char *)v62 - (char *)v129);
                    v131 = (float)v65;
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
                    v140 = (BuildingTypeClass *)LODWORD(v67);
                    *(float *)&v132 = *(float *)&v139 * 10.0;
                    *((float *)&v132 + 1) = *((float *)&v139 + 1) * 10.0;
                    v130 = v132;
                    v133 = v67 * 10.0;
                    v131 = v133;
                    v68 = Math::RoundToInt(*(float *)&v132);
                    v69 = Math::RoundToInt(*((float *)&v132 + 1));
                    v70 = Math::RoundToInt(v133);
                    v135 += v68;
                    ecx123 = (BuildingTypeClass *)((char *)v137 + v70);
                    eax123a = *v63;
                    v137 = ecx123;
                    aP0a = v141;
                    v129 = (IUnknown *)((char *)v129 + v69);
                    (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD))(eax123a + 984))(v63, &v135, LODWORD(aP0a), 0);
                    ebx112 = j;
                    v60 = (ObjectClass *)aP1a;
                  }
                  else if ( *(float *)&aP3[1].spawnStatus > 0.0 )
                  {
                    aP0b = v141;
                    (*(void (__thiscall **)(int *, CoordStruct *, _DWORD, _DWORD))(*v63 + 984))(
                      v63,
                      aP2,
                      LODWORD(aP0b),
                      0);
                  }
                }
                v60 = (ObjectClass *)v60->nextObject;
                aP1a = (VectorClass *)v60;
              }
              while ( v60 );
              v59 = v112;
            }
            ebx112 = (IUnknown *)((char *)ebx112 + 1);
          }
          v112 = ++v59;
        }
        while ( v59 <= (__int16)v115 + 3 );
        v58 = aP3;
      }
    }
  }
  v107 = v58 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080);
  v71 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v115);
  if ( (BYTE1(**(_DWORD **)&HouseClass_Player.__pad_5568[8060]) & 0x80u) != 0 && v58[1].isInLogic )
  {
    v72 = (ParticleSystemClass *)v71->field_140;
    v75 = v71->field_38 - unk_AA0E28 + 1;
    v113 = 0;
    if ( (BYTE1(v72) & 1) != 0
      && ((char)v72 >= 0 ? (v122[0] = *(_DWORD *)(*(_DWORD *)&v71->__pad_28[4] + 36)) : (v122[0] = v71->field_24),
          (eax137 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v122), (v113 = eax137) != 0)
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
              || (v86 = SHIBYTE(v71->field_118),
                  v85 = (BuildingTypeClass *)aP2->Z,
                  (int)v85 <= *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v86 + 1))
              && (int)v85 > *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v86 - 2) )
            {
              if ( aP3[1].isInLogic )
              {
                if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
                  || (v88 = Random::Range(
                              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                              (IUnknown *)1,
                              *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                      v88 < (int)v120) )
                {
                  v89 = 3;
                  if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                  {
LABEL_189:
                    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
                  }
                  else
                  {
                    while ( v107 && v89 > 0 )
                    {
                      --v89;
                      if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                        goto LABEL_189;
                    }
                  }
                  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP2, (IUnknown *)v122);
                  ((void (__stdcall *)(int, int, int, int, char))Cell::CreateCrater)(
                    v122[0] - 96,
                    v122[1] - 96,
                    192,
                    192,
                    0);
                }
              }
            }
          }
          v90 = v71->field_44;
          if ( v90 >= 74 && v90 <= 99 )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v91 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                  v91 < (int)v120) )
            {
              if ( CellClass::CheckTilePassable2((IUnknown *)&v115) )
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
            }
          }
          v92 = v71->field_44;
          if ( v92 >= 205 && v92 <= 230 )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v93 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
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
          || (v80 = SHIBYTE(v71->field_118),
              Z = aP2->Z,
              Z <= *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v80 + 1))
          && Z > *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v80 - 2) )
        {
          if ( aP3[1].isInLogic )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v82 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                  v82 < (int)v120) )
            {
              v83 = 3;
              if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
              {
LABEL_163:
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
              }
              else
              {
                while ( v107 && v83 > 0 )
                {
                  --v83;
                  if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                    goto LABEL_163;
                }
              }
              Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP2, (IUnknown *)&v141);
              ((void (__stdcall *)(int, int, int, int, char))Cell::CreateCrater)(
                LODWORD(v141) - 128,
                HIDWORD(v141) - 128,
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
  if ( eax203 == -1 || !*(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * eax203) + 688) )
  {
    v94 = aP2;
  }
  else
  {
    BuildingClass::CreatePlacementCrater((char *)v71);
    v71->field_44 = -1;
    House::AnnounceUpgrade((int)v71, (IUnknown *)0xFFFFFFFF);
    Cell::SetRadar((int *)&stru_87C374.__pad_14B0[8132], (IUnknown *)&v71->field_24);
    Radar::Update((IUnknown *)&stru_87C374.__pad_14B0[8132], (IUnknown *)&v71->field_24);
    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
    v95 = (void **)__2_YAPAXI_Z(0x1C8u);
    v94 = aP2;
    if ( v95 )
      AnimClass::ctor(
        v95,
        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 84),
        aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    PlaySoundEffectAt(
      (TechnoClass *)v94,
      *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 12),
      0,
      *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
      1,
      aP6);
    v97 = 0;
    if ( *(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 104) > 0 )
    {
      while ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) >= 15 )
      {
        if ( ++v97 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 104) )
          goto LABEL_213;
      }
      v98 = (void *)__2_YAPAXI_Z(0x148u);
      if ( v98 )
        DamageAnimClass::Constructor(
          v98,
          *(VoxelAnimClass **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 92) + 4 * v97),
          (IUnknown *)v94,
          0);
    }
LABEL_213:
    if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 25 )
    {
      v99 = __2_YAPAXI_Z(0x100u);
      if ( v99 )
      {
        v100 = ParticleSystemClass::Constructor(
                 v99,
                 *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 116),
                 (IUnknown *)v94,
                 0,
                 0,
                 (IUnknown *)&stru_89E138.__pad_690[104],
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
    v101 = __2_YAPAXI_Z(0x100u);
    if ( v101 )
      v102 = ParticleSystemClass::Constructor(
               v101,
               (IUnknown *)aP3[1].lastLayer,
               (IUnknown *)v94,
               0,
               0,
               (IUnknown *)&stru_89E138.__pad_690[104],
               (IUnknown *)aP6);
    else
      v102 = 0;
    ParticleSystemClass::CreateParticle(v102, (IUnknown *)v94, (IUnknown *)v94);
  }
  v103 = v118 == 0;
  v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
  if ( Block && BYTE1(v127) )
    __3_YAXPAX_Z(Block);
  return v103;
}
}
} // namespace gamemd

// 0x48A620
namespace gamemd {
char CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int v7; // eax
  double v10; // st7
  int v11; // esi

  LOBYTE(v7) = g_lParam; /*0x48a620*/
  if ( g_lParam && (v7 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
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
      if ( __2_YAPAXI_Z(0x18u) ) /*0x48a6bf*/
      {
        v7 = ObjectClass::RegisterInArray(a3, a4, a5, v11); /*0x48a6e7*/
        *(_DWORD *)(v7 + 20) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return v7; /*0x48a6ef*/
}
}
} // namespace gamemd

// 0x48A9D0
namespace gamemd {
char Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
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
    *(_DWORD *)a6 = -187466734; /*0x48a9e7*/
    *(_DWORD *)(a6 + 4) = 1072243161; /*0x48a9ed*/
    return 1; /*0x48a9f4*/
  }
}
}
} // namespace gamemd

// 0x48B0E0
namespace gamemd {
CommBufferClass * CommBufferClass::sub_48B0E0(int a2, int a3, size_t Size, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CommBufferClass *__thiscall sub_48B0E0(CommBufferClass *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(_DWORD *)this->__pad_0 = &vt_CommBufferClass; /*0x48b0fd*/
  *(_DWORD *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->field_8 = a3; /*0x48b106*/
  *(_DWORD *)this->__pad_C = Size; /*0x48b109*/
  this->field_10 = a5; /*0x48b10c*/
  this->field_24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->field_34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(_DWORD *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->q010 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->field_24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( this->field_10 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->field_24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->field_24 + v7 + 28) = __2_YAPAXI_Z(this->field_10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->field_8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->field_34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( this->field_10 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->field_34 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->field_34 + 20) = __2_YAPAXI_Z(this->field_10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->field_8 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags(this); /*0x48b1df*/
  return this; /*0x48b1e6*/
}
}
} // namespace gamemd

// 0x48BB60
namespace gamemd {
bool sub_48BB60(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_48BB60(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = NumOfElements; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !NumOfElements ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = g_FileSystemPool; /*0x48bb78*/
  if ( g_FileSystemPool && *(_DWORD *)g_FileSystemPool == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !g_FileSystemInitFlag ) /*0x48bb91*/
  {
    qsort(Base, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = NumOfElements; /*0x48bba6*/
    g_FileSystemPool = 0; /*0x48bbaf*/
    g_FileSystemInitFlag = 1; /*0x48bbb9*/
  }
  v5 = Base; /*0x48bbc0*/
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
    v5 = (_DWORD *)(v4 + 8); /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    g_FileSystemPool = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
LABEL_12:
  v7 = &unk_B7883C; /*0x48bbef*/
  return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc1d*/
}
}
} // namespace gamemd

// 0x48BC20
namespace gamemd {
int CompareFuncInt(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __cdecl CompareFuncInt(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
} // namespace gamemd

// 0x48C8B0
namespace gamemd {
int Main_Game_Frame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Main_Game_Frame()
{
  int result; // eax
  int v1; // eax
  bool v2; // zf
  const void *v3; // eax
  const void *v4; // eax
  LPARAM v5; // eax
  const void *v6; // eax
  char v7; // [esp+7h] [ebp-155h] BYREF
  _BYTE v8[4]; // [esp+8h] [ebp-154h] BYREF

  result = MEMORY[0xA8EDA0]; /*0x48c8b0*/
  if ( !MEMORY[0xA8EDA0] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( g_GameMode_Current ) /*0x48c8cc*/
  {
    result = HouseClass_Player; /*0x48c8ce*/
    if ( *(_BYTE *)(HouseClass_Player + 504) /*0x48c8ef*/
      || *(_BYTE *)(HouseClass_Player + 503)
      || *(_BYTE *)(HouseClass_Player + 502) )
    {
      goto LABEL_15; /*0x48c8f7*/
    }
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( *(_BYTE *)(HouseClass_Player + 501) ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      MEMORY[0xA8EDA0] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(); /*0x48c918*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x48c925*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x48c930*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x48c93f*/
  v1 = MEMORY[0xA8EDA0]; /*0x48c951*/
  if ( MEMORY[0xA8EDA0] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v1 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9bf*/
          v2 = MEMORY[0xA8EDA0] == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( MEMORY[0xAC10C8] ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(); /*0x48cb42*/
          }
          else if ( !*(_BYTE *)(HouseClass_Player + 501) /*0x48cb7b*/
                 && !*(_BYTE *)(HouseClass_Player + 503)
                 && !*(_BYTE *)(HouseClass_Player + 504)
                 && !*(_BYTE *)(HouseClass_Player + 502) )
          {
            v5 = GetStringCSF(aTxtSurrender, (int)g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(v5) ) /*0x48cba1*/
            {
              v6 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cbc0*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cbcf*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x48cbeb*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cbfc*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cc13*/
                ++Networking_LastEventIndex; /*0x48cc19*/
              }
              Network::AddFrameEvent(); /*0x48cc1e*/
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
              v3 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48ca43*/
              if ( Networking_LastEventIndex < 128 ) /*0x48ca52*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v3, 0x6Fu); /*0x48ca6e*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48ca7f*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48ca96*/
                ++Networking_LastEventIndex; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v4 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cac4*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cad3*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v4, 0x6Fu); /*0x48caef*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cb00*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cb17*/
                ++Networking_LastEventIndex; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              unk_8B41C0 = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(g_GameModeOptions); /*0x48ca08*/
          v1 = 5; /*0x48ca0d*/
          MEMORY[0xA8EDA0] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(v8); /*0x48c9cd*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9d2*/
          if ( MEMORY[0xA8EDA0] != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v1 = 1; /*0x48c9dc*/
          MEMORY[0xA8EDA0] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(&v7); /*0x48c9ef*/
          v1 = 5; /*0x48c9f4*/
          MEMORY[0xA8EDA0] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog(&MEMORY[0x87F7E8]); /*0x48c99d*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c9a2*/
          v2 = MEMORY[0xA8EDA0] == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v2 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing(g_ScenarioClass_Instance); /*0x48c975*/
          v1 = MEMORY[0xA8EDA0]; /*0x48c97a*/
          if ( MEMORY[0xA8EDA0] != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          MEMORY[0xA8EDA0] = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v1 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) ) /*0x48cc4b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x48cc5d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 24))(g_WWMouseClass_Instance); /*0x48cc68*/
  WTFMode::Init(&g_GameMode_Current); /*0x48cc70*/
  return PostFrameCleanup(); /*0x48c990*/
}
}
} // namespace gamemd

// 0x48CCC0
namespace gamemd {
char MainGame()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char MainGame()
{
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v2; // eax
  char v3; // cl
  CellStruct *v8; // eax
  Movie *v9; // eax
  int v7; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR var828[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = InitGame(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v2 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v2, -1, var828, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = (HINSTANCE)g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = var828; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  *(_DWORD *)&stru_89E138.__pad_579C[65960] = &v7; /*0x48cd91*/
  *(_DWORD *)&stru_89E138.__pad_579C[65968] = &savedregs; /*0x48cd97*/
  *(_DWORD *)&stru_89E138.__pad_579C[65964] = &loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(); /*0x48cdd3*/
  while ( (_BYTE)inited ) /*0x48cdda*/
  {
    *(_DWORD *)&HouseClass_Player.__pad_5568[21752] = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&stru_87C374.__pad_579C[15472], 15, 0); /*0x48cdfd*/
    Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]); /*0x48ce08*/
    if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48ce1e*/
      *(_DWORD *)stru_ABCDFC.__pad_0 = 0; /*0x48ce21*/
      stru_ABCDFC.FilePointer = 0; /*0x48ce27*/
    }
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      HouseClass_Player.__pad_5568[26188] = 0; /*0x48ce3a*/
      *(_DWORD *)&stru_B05488.__pad_579C[4500] = 0; /*0x48ce40*/
      stru_B05488.__pad_579C[4436] = 0; /*0x48ce46*/
    }
    if ( *(_DWORD *)&stru_87C374.__pad_579C[22616] ) /*0x48ce54*/
      Tooltip::Enable(*(void **)&stru_87C374.__pad_579C[22616], HouseClass_Player.__pad_5568[22732]); /*0x48ce5d*/
    v3 = *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13730); /*0x48ce67*/
    *(_DWORD *)&HouseClass_Player.__pad_5568[23276] = 0; /*0x48ce6d*/
    HouseClass_Player.__pad_5568[23272] = v3; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&HouseClass_Player.__pad_5568[8068]); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( GameFrameLoop() && GameFrameCheck() ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(); /*0x48ce9c*/
    }
    while ( !GameFrameCheck() ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&HouseClass_Player.__pad_5568[8068]); /*0x48ceb4*/
    HouseClass_Player.__pad_5568[23208] = 0; /*0x48cebf*/
    HouseClass_Player.__pad_5568[20676] = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&stru_87C374.__pad_579C[13168], 30, 0); /*0x48cf02*/
    ScreenSaver::Process(1, 0, (int)&savedregs); /*0x48cf09*/
    if ( (HouseClass_Player.__pad_5568[17220] & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&HouseClass_Player.__pad_5568[17112]); /*0x48cf1c*/
    v8 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x48cf21*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 2 || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 1 ) /*0x48cf2e*/
    {
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface(); /*0x48cf3e*/
    }
    v8 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x48cf53*/
LABEL_27:
    if ( v8 == (CellStruct *)3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v8 == (CellStruct *)4 || v8 == (CellStruct *)2 || v8 == (CellStruct *)1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings(&HouseClass_Player.__pad_5568[8068]); /*0x48cf79*/
    }
    if ( (HouseClass_Player.__pad_5568[17220] & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v9 = *(Movie **)&HouseClass_Player.__pad_5568[17220]; /*0x48cf87*/
      LOBYTE(v9) = HouseClass_Player.__pad_5568[17220] & 0xFD; /*0x48cf92*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[8068] = 0; /*0x48cf94*/
      *(_DWORD *)&HouseClass_Player.__pad_5568[17220] = v9; /*0x48cf9a*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(); /*0x48cfa4*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23344] ) /*0x48cfbf*/
    LOBYTE(inited) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 20))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}
}
} // namespace gamemd

// 0x48DEE0
namespace gamemd {
void sub_48DEE0(unsigned int * a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_48DEE0(_DWORD *a1, int a2, int a3)
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
        *(_DWORD *)(v3 - 4) = 2147450879; /*0x48df11*/
      }
      else
      {
        while ( 1 ) /*0x48def9*/
        {
          v4 = (unsigned __int16)*a1 == 0x7FFF; /*0x48def9*/
          *(_DWORD *)v3 = *a1; /*0x48defc*/
          if ( v4 && *(_WORD *)(v3 + 2) == 0x7FFF ) /*0x48df04*/
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
} // namespace gamemd

// 0x48E0B0
namespace gamemd {
FILE * sub_48E0B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
FILE *sub_48E0B0()
{
  FILE *result; // eax
  FILE *v1; // esi
  unsigned int v2; // eax
  int i; // edi
  _DWORD *v4; // eax
  unsigned __int16 *v5; // edi
  char *v6; // eax

  result = (FILE *)g_GameMode_Current[0]; /*0x48e0b1*/
  if ( g_GameMode_Current[0] == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v1 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", g_CurrentFrame);
      if ( g_FrameCounter_Samples ) /*0x48e0f8*/
        v2 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x48e101*/
      else
        v2 = 0; /*0x48e105*/
      fprintf(v1, "Average FPS: %d\n", v2);
      fprintf(v1, "Max MaxAhead: %d\n", MEMORY[0xA8B568]);
      fprintf(v1, "Latency setting: %d\n", MEMORY[0xA8DB9C]);
      fprintf(v1, "Game speed setting: %d\n", *(_DWORD *)g_GameModeOptions);
      if ( g_NetworkInterface )
      {
        for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 72))(g_NetworkInterface); ++i )
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)g_NetworkInterface + 76))(g_NetworkInterface, i); /*0x48e16a*/
          if ( v4 )
            fprintf(
              v1,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v4,
              BYTE1(*v4),
              (unsigned __int8)BYTE2(*v4),
              HIBYTE(*v4));
        }
      }
      v5 = (unsigned __int16 *)&MEMORY[0xA8B5C4]; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v5 - 80) )
        {
          fprintf(v1, "\nName: %s\n", (const char *)v5 - 80);
          v6 = Network::FormatAddress(v5 + 6, 0); /*0x48e1d4*/
          fprintf(v1, "Address: %s\n", v6);
          fprintf(v1, "Max avg round trip: %d\n", *(_DWORD *)v5);
          fprintf(v1, "Max round trip: %d\n", *((_DWORD *)v5 - 4));
          fprintf(v1, "Resends: %d\n", *((_DWORD *)v5 - 3));
          fprintf(v1, "Frame sync stalls: %d\n", *((_DWORD *)v5 + 1));
          fprintf(v1, "Command cound stalls: %d\n", *((_DWORD *)v5 + 2));
          fprintf(v1, "Lost: %d\n", *((_DWORD *)v5 - 2));
          fprintf(v1, "Percent lost: %d\n", *((_DWORD *)v5 - 1));
        }
        v5 += 52; /*0x48e253*/
      }
      while ( (int)v5 < (int)MEMORY[0xA8B904] );
      return (FILE *)fclose(v1); /*0x48e263*/
    }
  }
  return result; /*0x48e26c*/
}
}
} // namespace gamemd

// 0x483710
namespace gamemd {
char E4Recv_483710::sub_483710()
{
{
    int BuildingByTiberiumType;
    int v3;
    IUnknown *v4;
    if ( !*(char *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 13478) )
    return 0;
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
    if ( BuildingByTiberiumType == -1 )
    return 0;
    v3 = *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType);
    if ( (unsigned char)this->M284 || *(unsigned char *)(this + 286) >= *(int *)(v3 + 228) - 1 || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0;
  }
    v4 = (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68));
    return Crate::FindPlacement(this, v4, 1);
}
}
} // namespace gamemd

// 0x484A80
namespace gamemd {
int sub_484A80(int a1)
{
{
    ++*(int *)(a1 + 404);
    return a1;
}
}
} // namespace gamemd

// 0x484F10
namespace gamemd {
char sub_484F10(int a1)
{
return 1;
}
} // namespace gamemd

// 0x484F50
namespace gamemd {
int E4Recv_484F50::sub_484F50()
{
{
    int v2;
    int result;
    int *v4;
    int *v5;
    int v6;
    int *v7;
    char v8[40];
    v2 = 0;
    result = this->M228;
    if ( result )
  {
    v4 = (int *)v8;
    do
    {
    if ( v2 >= 10 )
    break;
    *v4 = result;
    result = *(int *)(result + 48);
    ++v2;
    ++v4;
    }
    while ( result );
  }
    if ( v2 > 0 )
  {
    v5 = v8;
    v6 = v2;
    do
    {
    v7 = (int *)*v5;
    (*(void (__thiscall **)(int, int))(*(int *)*v5 + 460))(*v5, 0);
    if ( (*(int (__thiscall **)(int *))(*v7 + 44))(v7) == 1 || (result = (*(int (__thiscall **)(int *))(*v7 + 44))(v7), result == 2) )
      {
    if ( !v7[413] )
    WinAPI::Wrapper(-2147467261);
    result = (*(int (__stdcall **)(int, int))(*(int *)v7[413] + 124))( v7[413], *(unsigned char *)(this + 284));
      }
    ++v5;
    --v6;
    }
    while ( v6 );
  }
    return result;
}
}
} // namespace gamemd

// 0x4863A0
namespace gamemd {
bool E4Recv_4863A0::sub_4863A0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= g_CellTileLookup && v1 < g_CellTileLookup + 20 || v1 >= DataGlobal_AA1058 && v1 < DataGlobal_AA1058 + 12;
}
}
} // namespace gamemd

// 0x4866D0
namespace gamemd {
bool E4Recv_4866D0::sub_4866D0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= g_CellTileTypeCache && v1 < g_CellTileTypeCache + 15;
}
}
} // namespace gamemd

// 0x4866F0
namespace gamemd {
bool E4Recv_4866F0::sub_4866F0()
{
{
    int v1;
    v1 = this->M56;
    return v1 >= DataGlobal_ABBEC4 && v1 < DataGlobal_ABBEC4 + 4;
}
}
} // namespace gamemd

// 0x486D90
namespace gamemd {
int E4Recv_486D90::sub_486D90(char a2)
{
{
    int v3;
    int v5;
    int v6;
    bool v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    v3 = 1 << a2;
    if ( (this->M220 & (1 << a2)) == 0 )
    return -1;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    do
  {
    if ( v7 )
    {
    v9 = v5 & 7;
    v10 = this->M36;
    LOWORD(v11) = LOWORD(Direction_X_Offsets[v9]) + v10;
    HIWORD(v11) = HIWORD(v10) + HIWORD(Direction_X_Offsets[v9]);
    v10 = v11;
    v8 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (short *)&v10);
    }
    else
    {
    v8 = this;
    }
    if ( (v3 & v8[55]) != 0 )
    v6 |= 1 << v5;
    v7 = (unsigned int)++v5 < 8;
  }
    while ( v5 < 8 );
    return v6;
}
}
} // namespace gamemd

// 0x4879B0
namespace gamemd {
char E4Recv_4879B0::sub_4879B0()
{
{
    int v1;
    int v2;
    int inited;
    int v5[2];
    int v6[3];
    v1 = ((short)this->M36 << 8) + 128;
    v2 = ((short)HIWORD(this->M36) << 8) + 128;
    v5[0] = 128;
    v5[1] = 128;
    inited = Isometric::InitTables((int)this, v5);
    v6[0] = v1;
    v6[1] = v2;
    v6[2] = inited;
    return Game::Stub3((int)v6);
}
}
} // namespace gamemd

// 0x487C80
namespace gamemd {
unsigned int E4Recv_487C80::_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ()
{
{
    return this->M248;
}
}
} // namespace gamemd

// 0x487EA0
namespace gamemd {
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{
{
    int *result;
    int v4;
    int v5;
    result = a1;
    v4 = a3 & 7;
    LOWORD(v5) = *a2 + LOWORD(Direction_X_Offsets[v4]);
    HIWORD(v5) = *((int*)(a2) + 1) + HIWORD(Direction_X_Offsets[v4]);
    *result = v5;
    return result;
}
}
} // namespace gamemd

// 0x4880D0
namespace gamemd {
int sub_4880D0()
{
{
    DataGlobal_89E7C8 = 0;
    DataGlobal_89E7CC = 0;
    DataGlobal_89E7D0 = 0;
    DataGlobal_89E7D4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x488210
namespace gamemd {
int E4Recv_488210::sub_488210(unsigned int a2, unsigned int * a3, int a4)
{
{
    if ( (a2 & 4) != 0 )
  {
    if ( this->M45 )
    {
    GadgetClass::Hide(this);
    return GadgetClass::ProcessMouseOver(this, a2, a3, 0);
    }
    GadgetClass::Show(this);
  }
    return GadgetClass::ProcessMouseOver(this, a2, a3, 0);
}
}
} // namespace gamemd

// 0x488260
namespace gamemd {
int sub_488260()
{
{
    DataGlobal_89E7D8 = 0;
    DataGlobal_89E7DC = 0;
    DataGlobal_89E7E0 = 0;
    DataGlobal_89E7E4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x488280
namespace gamemd {
CheckListClass * E4Recv_488280::sub_488280(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
{
    ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9);
    this->M372 = 0;
    *(int *)this = &vt_CheckListClass;
    return (CheckListClass *)this;
}
}
} // namespace gamemd

// 0x488740
namespace gamemd {
int sub_488740()
{
{
    DataGlobal_89E7E8 = 0;
    DataGlobal_89E7EC = 0;
    DataGlobal_89E7F0 = 0;
    DataGlobal_89E7F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x488760
namespace gamemd {
ColorListClass * E4Recv_488760::sub_488760(ListClass * aP1, int a3, int a4, ListClass * aP4, int a6, ControlClass * aP6, ListClass * aP7, int a9)
{
{
    ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9);
    this->M376 = 0;
    this->M380 = 0;
    this->M384 = 1;
    this->M385 = 0;
    this->M372 = &vt_DynamicVectorClass_int;
    this->M392 = 10;
    this->M388 = 0;
    this->M400 = 0;
    this->M396 = 1;
    *(void**)this = &vt_ColorListClass;
    return (ColorListClass *)this;
}
}
} // namespace gamemd

// 0x4887F0
namespace gamemd {
int E4Recv_4887F0::sub_4887F0()
{
{
    int v2;
    int *v3;
    void *v4;
    v2 = this->M372;
    v3 = this + 93;
    *(void**)this = &vt_ColorListClass;
    (*(void (__thiscall **)(int *))(v2 + 12))(this + 93);
    this->M400 = 0;
    v4 = (void *)v3[1];
    *v3 = &vt_VectorClass_int;
    if ( v4 && *((char *)(v3) + 13) )
  {
    __3_YAXPAX_Z(v4);
    v3[1] = 0;
  }
    *((char *)(v3) + 13) = 0;
    v3[2] = 0;
    return ListClass::Destruct(this);
}
}
} // namespace gamemd

// 0x488F70
namespace gamemd {
int sub_488F70()
{
{
    DataGlobal_89E800 = 0;
    DataGlobal_89E804 = 0;
    DataGlobal_89E808 = 0;
    DataGlobal_89E80C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x488F90
namespace gamemd {
void sub_488F90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E818 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x488FC0
namespace gamemd {
void sub_488FC0()
{
{
    DataGlobal_89E868 = DataGlobal_89E818 / 60.0;
}
}
} // namespace gamemd

// 0x488FE0
namespace gamemd {
void sub_488FE0()
{
{
    DataGlobal_89E850 = 1.0 / DataGlobal_89E868;
}
}
} // namespace gamemd

// 0x489000
namespace gamemd {
void sub_489000()
{
{
    DataGlobal_89E848 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x489020
namespace gamemd {
void sub_489020()
{
{
    DataGlobal_89E820 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x489040
namespace gamemd {
void sub_489040()
{
{
    DataGlobal_89E7F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x489060
namespace gamemd {
long long sub_489060()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E7F8 - DataGlobal_89E820);
    result = Math::RoundToInt(v0 * DataGlobal_89E818 * 0.5);
    DataGlobal_89E870 = result;
    return result;
}
}
} // namespace gamemd

// 0x4890A0
namespace gamemd {
void sub_4890A0()
{
{
    DataGlobal_89E828 = Math::ArcTan((double)DataGlobal_89E870 * 0.00390625);
}
}
} // namespace gamemd

// 0x4890D0
namespace gamemd {
void sub_4890D0()
{
{
    DataGlobal_89E840 = Math::ArcTan((double)(2 * DataGlobal_89E870) / DataGlobal_89E818);
}
}
} // namespace gamemd

// 0x489100
namespace gamemd {
long long sub_489100()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E870) + 0.5);
    DataGlobal_89E864 = result;
    return result;
}
}
} // namespace gamemd

// 0x489130
namespace gamemd {
int sub_489130()
{
{
    DataGlobal_89E810 = 0;
    DataGlobal_89E812 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x489140
namespace gamemd {
int sub_489140()
{
{
    DataGlobal_89E830 = 0;
    DataGlobal_89E834 = 0;
    DataGlobal_89E838 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x489160
namespace gamemd {
int sub_489160()
{
{
    DataGlobal_89E860 = 0;
    DataGlobal_89E858 = 128;
    DataGlobal_89E85C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x489270
namespace gamemd {
void CellChainReact()
{
  ;
}
} // namespace gamemd

// 0x48A4F0
namespace gamemd {
int GetWarheadVersusMultiplier(CoordStruct * aP0, BuildingTypeClass * aP1, CoordStruct * aP2, BulletClass * aP3)
{
{
    CoordStruct *v4;
    int v6;
    int v7;
    int v9;
    int v10;
    v4 = aP0;
    if ( !aP0 || !aP1 )
    return 0;
    if ( aP2 == (CoordStruct *)2 && aP1->__pad_14D[0] && (*((int *)Coord::To_Cell(&DataGlobal_87C374.__pad_14B0[8132], (IUnknown *)aP3) + 80) & 0x100) == 0 && (int)aP3->field_8 < Cell::GetGroundHeight((IUnknown *)aP3) + 2 * *(int *)&DataGlobal_89E138.__pad_71C[28] )
  {
    v6 = *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 3024);
    if ( v6 )
    {
    v7 = 35 * v6 - 1;
    if ( (int)v4 < v7 )
    v7 = (int)v4;
    return *(int *)(*(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 3012) + 4 * (v7 / 35));
    }
    return 0;
  }
    if ( aP1 == *(BuildingTypeClass **)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 6068) )
    return *(int *)(*(int *)&DataGlobal_87C374.__pad_579C[22224] + 756);
    v9 = aP1->ChargerBarrels[4];
    if ( !v9 )
    return 0;
    if ( aP1->__pad_14D[7] )
    return *(int *)(aP1->ChargerBarrels[1] + 4 * Random::Range( (int *)(*(int *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)(v9 - 1)));
    v10 = 25 * v9 - 1;
    if ( (int)v4 >= v10 )
    v4 = (CoordStruct *)v10;
    return *(int *)(aP1->ChargerBarrels[1] + 4 * ((int)v4 / 25));
}
}
} // namespace gamemd

// 0x48A8D0
namespace gamemd {
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
{
    double v6;
    char v10;
    int v11[2];
    v6 = a5;
    if ( !(unsigned char)SolveMathTrajectory(a3, a4, a5, (int)&a5) )
    return 0;
    if ( a1 )
  {
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427);
    *a6 = a4;
    return 1;
  }
    else
  {
    SolveMathTrajectory(a3 + 1, a4, v6, (int)v11);
    if ( v10 )
    LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427);
    else
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427);
    *a6 = a4;
    return 1;
  }
}
}
} // namespace gamemd

// 0x48ABC0
namespace gamemd {
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{
{
    double v4;
    double v5;
    double v7;
    double v8;
    double v9;
    double v10;
    double aP0a;
    double v12;
    v4 = (double)(int)aP0;
    v5 = (double)a2;
    if ( v5 == 0.0 )
    v5 = 0.001;
    v8 = (double)a3;
    v7 = v4 * v4;
    v9 = v5 * v5;
    aP0a = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9;
    if ( aP0a < 0.0 )
    return 0;
    v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0;
    if ( v12 == 0.0 )
    return 0;
    v10 = v7 - v8 * a4;
    return (Math::Sqrt((AbstractClass *)LODWORD(aP0a)) + v10) / v12 >= 0.0 || (v10 - Math::Sqrt((AbstractClass *)LODWORD(aP0a))) / v12 >= 0.0;
}
}
} // namespace gamemd

// 0x48B070
namespace gamemd {
unsigned int * E4Recv_48B070::sub_48B070(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_DamageGroup;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x48B0C0
namespace gamemd {
int sub_48B0C0()
{
{
    DataGlobal_89E878 = 0;
    DataGlobal_89E87C = 0;
    DataGlobal_89E880 = 0;
    DataGlobal_89E884 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48B1F0
namespace gamemd {
void CommBufferClass::sub_48B1F0()
{
{
    int v2;
    int v3;
    int v4;
    CCINIClass *v5;
    int v6;
    int v7;
    CCINIClass *v8;
    v2 = 0;
    v3 = *(int *)&this->__pad_0[4];
    *(int *)this->__pad_0 = &vt_CommBufferClass;
    if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
    __3_YAXPAX_Z(*(void **)(this->field_24 + v4 * 4 + 20));
    v5 = (CCINIClass *)this->field_24;
    if ( v5->sectionHead[v4 + 3] )
    __3_YAXPAX_Z((void *)v5->sectionHead[v4 + 3]);
    ++v2;
    v4 += 9;
    }
    while ( v2 < *(int *)&this->__pad_0[4] );
  }
    v6 = 0;
    if ( this->field_8 > 0 )
  {
    v7 = 0;
    do
    {
    __3_YAXPAX_Z(*(void **)(this->field_34 + v7 * 4 + 12));
    v8 = (CCINIClass *)this->field_34;
    if ( v8->sectionHead[v7 + 1] )
    __3_YAXPAX_Z((void *)v8->sectionHead[v7 + 1]);
    ++v6;
    v7 += 6;
    }
    while ( v6 < this->field_8 );
  }
    __3_YAXPAX_Z((void *)this->field_24);
    __3_YAXPAX_Z((void *)this->field_34);
    __3_YAXPAX_Z(*(void **)&this->__pad_28[8]);
    __3_YAXPAX_Z(*((void **)(this) + 16));
}
}
} // namespace gamemd

// 0x48BB00
namespace gamemd {
ObjectClass * E4Recv_48BB00::sub_48BB00(char a2)
{
{
    sub_48B1F0(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x48BB20
namespace gamemd {
int sub_48BB20()
{
{
    DataGlobal_89E888 = 0;
    DataGlobal_89E88C = 0;
    DataGlobal_89E890 = 0;
    DataGlobal_89E894 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48BB40
namespace gamemd {
bool sub_48BB40(int a1, int a2)
{
{
    int v2;
    BYTE1(a2) &= ~8u;
    v2 = a2;
    BYTE1(v2) = BYTE1(a2) & 0xE8;
    return a2 == v2 || (*(unsigned char (__thiscall **)(int, int))(*(int *)(a1) + 20))(a1, a2) == 0;
}
}
} // namespace gamemd

// 0x48BC50
namespace gamemd {
int sub_48BC50()
{
{
    DataGlobal_89E8A0 = 0;
    DataGlobal_89E8A4 = 0;
    DataGlobal_89E8A8 = 0;
    DataGlobal_89E8AC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48BC70
namespace gamemd {
void sub_48BC70()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E8B8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x48BCA0
namespace gamemd {
void sub_48BCA0()
{
{
    DataGlobal_89E908 = DataGlobal_89E8B8 / 60.0;
}
}
} // namespace gamemd

// 0x48BCC0
namespace gamemd {
void sub_48BCC0()
{
{
    DataGlobal_89E8F0 = 1.0 / DataGlobal_89E908;
}
}
} // namespace gamemd

// 0x48BCE0
namespace gamemd {
void sub_48BCE0()
{
{
    DataGlobal_89E8E8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x48BD00
namespace gamemd {
void sub_48BD00()
{
{
    DataGlobal_89E8C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x48BD20
namespace gamemd {
void sub_48BD20()
{
{
    DataGlobal_89E898 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x48BD40
namespace gamemd {
long long sub_48BD40()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E898 - DataGlobal_89E8C0);
    result = Math::RoundToInt(v0 * DataGlobal_89E8B8 * 0.5);
    DataGlobal_89E910 = result;
    return result;
}
}
} // namespace gamemd

// 0x48BD80
namespace gamemd {
void sub_48BD80()
{
{
    DataGlobal_89E8C8 = Math::ArcTan((double)DataGlobal_89E910 * 0.00390625);
}
}
} // namespace gamemd

// 0x48BDB0
namespace gamemd {
void sub_48BDB0()
{
{
    DataGlobal_89E8E0 = Math::ArcTan((double)(2 * DataGlobal_89E910) / DataGlobal_89E8B8);
}
}
} // namespace gamemd

// 0x48BDE0
namespace gamemd {
long long sub_48BDE0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E910) + 0.5);
    DataGlobal_89E904 = result;
    return result;
}
}
} // namespace gamemd

// 0x48BE10
namespace gamemd {
int sub_48BE10()
{
{
    DataGlobal_89E8B0 = 0;
    DataGlobal_89E8B2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48BE20
namespace gamemd {
int sub_48BE20()
{
{
    DataGlobal_89E8D0 = 0;
    DataGlobal_89E8D4 = 0;
    DataGlobal_89E8D8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48BE40
namespace gamemd {
int sub_48BE40()
{
{
    DataGlobal_89E900 = 0;
    DataGlobal_89E8F8 = 128;
    DataGlobal_89E8FC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x48C690
namespace gamemd {
int sub_48C690()
{
{
    DataGlobal_89E930 = 0;
    DataGlobal_89E934 = 0;
    DataGlobal_89E938 = 0;
    DataGlobal_89E93C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48C6B0
namespace gamemd {
void sub_48C6B0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E948 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x48C6E0
namespace gamemd {
void sub_48C6E0()
{
{
    DataGlobal_89E9A0 = DataGlobal_89E948 / 60.0;
}
}
} // namespace gamemd

// 0x48C700
namespace gamemd {
void sub_48C700()
{
{
    DataGlobal_89E988 = 1.0 / DataGlobal_89E9A0;
}
}
} // namespace gamemd

// 0x48C720
namespace gamemd {
void sub_48C720()
{
{
    DataGlobal_89E980 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x48C740
namespace gamemd {
void sub_48C740()
{
{
    DataGlobal_89E958 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x48C760
namespace gamemd {
void sub_48C760()
{
{
    DataGlobal_89E918 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x48C780
namespace gamemd {
long long sub_48C780()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E918 - DataGlobal_89E958);
    result = Math::RoundToInt(v0 * DataGlobal_89E948 * 0.5);
    DataGlobal_89E9A8 = result;
    return result;
}
}
} // namespace gamemd

// 0x48C7C0
namespace gamemd {
void sub_48C7C0()
{
{
    DataGlobal_89E960 = Math::ArcTan((double)DataGlobal_89E9A8 * 0.00390625);
}
}
} // namespace gamemd

// 0x48C7F0
namespace gamemd {
void sub_48C7F0()
{
{
    DataGlobal_89E978 = Math::ArcTan((double)(2 * DataGlobal_89E9A8) / DataGlobal_89E948);
}
}
} // namespace gamemd

// 0x48C820
namespace gamemd {
long long sub_48C820()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89E9A8) + 0.5);
    DataGlobal_89E99C = result;
    return result;
}
}
} // namespace gamemd

// 0x48C850
namespace gamemd {
int sub_48C850()
{
{
    DataGlobal_89E940 = 0;
    DataGlobal_89E942 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48C860
namespace gamemd {
int sub_48C860()
{
{
    DataGlobal_89E968 = 0;
    DataGlobal_89E96C = 0;
    DataGlobal_89E970 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48C880
namespace gamemd {
int sub_48C880()
{
{
    DataGlobal_89E998 = 0;
    DataGlobal_89E990 = 128;
    DataGlobal_89E994 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x48C8A0
namespace gamemd {
void nullsub_112()
{
  ;
}
} // namespace gamemd

// 0x48DB70
namespace gamemd {
void nullsub_8()
{
  ;
}
} // namespace gamemd

// 0x48DED0
namespace gamemd {
void nullsub_51()
{
  ;
}
} // namespace gamemd

// 0x48DFD0
namespace gamemd {
char * sub_48DFD0(unsigned int a1)
{
{
    if ( a1 >= 0xC )
    return g_Str__none_;
    else
    return DataGlobal_81DA28[a1];
}
}
} // namespace gamemd

// 0x48E030
namespace gamemd {
char * sub_48E030(unsigned int a1)
{
{
    if ( a1 >= 8 )
    return g_Str__none_;
    else
    return DataGlobal_81DA58[a1];
}
}
} // namespace gamemd

// 0x48E090
namespace gamemd {
char * sub_48E090(unsigned int a1)
{
{
    if ( a1 >= 5 )
    return g_Str__none_;
    else
    return DataGlobal_81DA78[a1];
}
}
} // namespace gamemd

// 0x48E270
namespace gamemd {
int sub_48E270()
{
{
    DataGlobal_89E9C0 = 0;
    DataGlobal_89E9C4 = 0;
    DataGlobal_89E9C8 = 0;
    DataGlobal_89E9CC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48E290
namespace gamemd {
void sub_48E290()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89E9D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x48E2C0
namespace gamemd {
void sub_48E2C0()
{
{
    DataGlobal_89EC18 = DataGlobal_89E9D8 / 60.0;
}
}
} // namespace gamemd

// 0x48E2E0
namespace gamemd {
void sub_48E2E0()
{
{
    DataGlobal_89EC00 = 1.0 / DataGlobal_89EC18;
}
}
} // namespace gamemd

// 0x48E300
namespace gamemd {
void sub_48E300()
{
{
    DataGlobal_89EBF8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x48E320
namespace gamemd {
void sub_48E320()
{
{
    DataGlobal_89E9E0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x48E340
namespace gamemd {
void sub_48E340()
{
{
    DataGlobal_89E9B8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x48E360
namespace gamemd {
long long sub_48E360()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89E9B8 - DataGlobal_89E9E0);
    result = Math::RoundToInt(v0 * DataGlobal_89E9D8 * 0.5);
    DataGlobal_89EC20 = result;
    return result;
}
}
} // namespace gamemd

// 0x48E3A0
namespace gamemd {
void sub_48E3A0()
{
{
    DataGlobal_89E9E8 = Math::ArcTan((double)DataGlobal_89EC20 * 0.00390625);
}
}
} // namespace gamemd

// 0x48E3D0
namespace gamemd {
void sub_48E3D0()
{
{
    DataGlobal_89EBF0 = Math::ArcTan((double)(2 * DataGlobal_89EC20) / DataGlobal_89E9D8);
}
}
} // namespace gamemd

// 0x48E400
namespace gamemd {
long long sub_48E400()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89EC20) + 0.5);
    DataGlobal_89EC14 = result;
    return result;
}
}
} // namespace gamemd

// 0x48E430
namespace gamemd {
int sub_48E430()
{
{
    DataGlobal_89E9D0 = 0;
    DataGlobal_89E9D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48E440
namespace gamemd {
int sub_48E440()
{
{
    DataGlobal_89EA30 = 0;
    DataGlobal_89EA34 = 0;
    DataGlobal_89EA38 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48E460
namespace gamemd {
int sub_48E460()
{
{
    DataGlobal_89EC10 = 0;
    DataGlobal_89EC08 = 128;
    DataGlobal_89EC0C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x48E480
namespace gamemd {
int sub_48E480()
{
{
    DataGlobal_89E9F0[0] = 128;
    DataGlobal_89E9F4[0] = 128;
    DataGlobal_89E9FC = 64;
    DataGlobal_89EA00 = 64;
    DataGlobal_89EA08 = 192;
    DataGlobal_89EA0C = 64;
    DataGlobal_89EA14 = 64;
    DataGlobal_89E9F8[0] = 0;
    DataGlobal_89EA04 = 0;
    DataGlobal_89EA10 = 0;
    DataGlobal_89EA18 = 192;
    DataGlobal_89EA1C = 0;
    DataGlobal_89EA20 = 192;
    DataGlobal_89EA24 = 192;
    DataGlobal_89EA28 = 0;
    return 192;
}
}
} // namespace gamemd

// 0x48E500
namespace gamemd {
int sub_48E500()
{
{
    DataGlobal_89ECD8 = 0;
    DataGlobal_89ECDC = 0;
    DataGlobal_89ECE0 = 0;
    DataGlobal_89ECE4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48E680
namespace gamemd {
int sub_48E680()
{
{
    DataGlobal_89ECE8 = 0;
    DataGlobal_89ECEC = 0;
    DataGlobal_89ECF0 = 0;
    DataGlobal_89ECF4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x48E6A0
namespace gamemd {
int sub_48E6A0()
{
{
    DataGlobal_89ECFC = 0;
    DataGlobal_89ED00 = 0;
    DataGlobal_89ED04 = 1;
    DataGlobal_89ED05 = 0;
    DataGlobal_89ECF8 = (int)&vt_DynamicVectorClass_ConvertClass;
    DataGlobal_89ED0C = 10;
    DataGlobal_89ED08 = 0;
    return atexit(sub_48E6E0);
}
}
} // namespace gamemd

// 0x48E6E0
namespace gamemd {
void sub_48E6E0()
{
{
    if ( (DataGlobal_89ED10 & 1) == 0 )
  {
    DataGlobal_89ECF8 = (int)&vt_VectorClass_ConvertClass;
    DataGlobal_89ED10 |= 1u;
    if ( DataGlobal_89ECFC )
    {
    if ( DataGlobal_89ED05 )
      {
    __3_YAXPAX_Z(DataGlobal_89ECFC);
    DataGlobal_89ECFC = 0;
      }
    }
    DataGlobal_89ED05 = 0;
    DataGlobal_89ED00 = 0;
  }
}
}
} // namespace gamemd
