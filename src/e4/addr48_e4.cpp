// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"  // G42.42b supply (Random::Range)
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
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CampaignClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CheckListClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ColorListClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ScenarioClass_e4.hpp"  // w18j2 C3861 ScenarioClass:: supply
#include "e4/classes/WTFMode_e4.hpp"  // w18j2 C3861 WTFMode:: supply
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_77D840(); }  // w18j2 raw 0x0077D840
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_77D840(); }  // w18j2 raw 0x0077D840
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_77D840(); }  // w18j2 raw 0x0077D840
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int RegisterInArray(int p0, int p1, int p2, int p3); }  // x4:signals@0x5ff250
namespace gamemd { int sub_77D840(); }  // w18j2 raw 0x0077D840
namespace gamemd { int ShowMissionBriefing(ScenarioClass *p_this); }  // x4:ida@0x65f520
namespace gamemd { int Shutdown(Audio *p_this); }  // x4:ida@0x406d40
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_77D840(); }  // w18j2 raw 0x0077D840
namespace gamemd { int ShowDiplomacyDialog(ObjectClass *p_this); }  // x4:ida@0x6586d0
namespace gamemd { int GameFrameCheck(ObjectClass *p_this); }  // x4:ida@0x55cfd0
namespace gamemd { int MainGameFrame(ObjectClass *p_this); }  // x4:ida@0x48c8b0
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int ShowConfirmDialog(uint16_t* p0, int p1); }  // x4:signals@0x5c60d0
namespace gamemd { int ShowGameDialog(); }  // x4:empty@0x4f1840

// 0x4880F0
namespace gamemd {  // G42.18 ns repair
ConvertClass * * E4Recv_4880F0::sub_4880F0(int a2)
{


  if ( !Control::DispatchClick((int)((ControlClass *)this), a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x488110*/
  int uniqueId = this->M16; // ecx /*0x488116*/
  int abstractFlags = this->M20; // edx /*0x488119*/
  void *vtable3; // [esp+8h] [ebp-10h] BYREF
  vtable3 = (void *)(this->M20); /*0x48811c*/
  int nextArrayIndex = this->q018; // eax /*0x488120*/
  int v16; // [esp+Ch] [ebp-Ch]
  v16 = uniqueId; /*0x488123*/
  int v17; // [esp+10h] [ebp-8h]
  v17 = abstractFlags; /*0x488127*/
  int v18; // [esp+14h] [ebp-4h]
  v18 = nextArrayIndex; /*0x488133*/
  DrawBuildingTilesSHP((int *)&vtable3, 0, 0); /*0x488137*/
  int v6; // eax
  if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 26); /*0x48815c*/
  int v7 = this->M16 + 1; // edx /*0x488167*/
  vtable3 = (char *)this->M16 + 1; /*0x488168*/
  int v8 = this->M20; // ecx /*0x48816c*/
  v16 = v7; /*0x48816f*/
  int v9 = this->q018 - 1; // edx /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (**)(AudioStream *, void **, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))( /*0x48818e*/
    g_DSurface_Hidden_2,
    &vtable3,
    v6);
  if ( BYTE1(this->fallRate) ) /*0x488191*/
  {
    int v10; // eax
    if ( *(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(unsigned int *)(*(unsigned int *)&g_FileSystem_THEATER_PAL + 372) + 8); /*0x4881b8*/
    int v11 = this->M16 + 1; // edx /*0x4881c3*/
    vtable3 = (char *)this->M16 + 1; /*0x4881c4*/
    int v12 = this->M20; // ecx /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    int v13 = this->q018 - 1; // edx /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (**)(AudioStream *, void **, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))( /*0x4881ea*/
      g_DSurface_Hidden_2,
      &vtable3,
      v10);
  }
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x4881f5*/
  return (gamemd::ConvertClass **)(1); /*0x4881fd*/

}
}  // G42.18 ns repair
// 0x489180
namespace gamemd {
int Network_SendTimestamp(int a1, int a2, int a3, int a4)
{

  unsigned __int16 *v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // eax
  unsigned __int16 *v9; // eax
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (dword_A8B230->vfptr & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( (int)a1 < 0 )
    return a4 >= 8 ? 0 : (unsigned int)a1;
  v7 = (double)(int)a1; /*0x4891c6*/
  v10 = v7; /*0x4891ca*/
  v11 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  LOWORD(v8) = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891e4*/
  if ( v11 != v10 && v8 ) /*0x489200*/
  {
    LOWORD(v9) = Math::RoundToInt((v10 - v11) * (double)(v8 - a4) / (double)v8 + v11); /*0x489220*/
    v4 = v9; /*0x489225*/
  }
  LOWORD(result) = Math::RoundToInt((double)(int)((int)v4 <= 0 ? 0 : (unsigned int)v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= dword_8871E0->IRepairRate[0] ) /*0x489257*/
    return dword_8871E0->IRepairRate[0]; /*0x48925a*/
  return result; /*0x4891b8*/

}
}
// 0x489280
namespace gamemd {
int PlaySoundEffectAt(TechnoClass * aP0, int aP1, unsigned int *a2, int aP3, char a5, int aP6)
{

  int v8; // esi
  unsigned int *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  __int16 v21; // ax
  unsigned int *v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  unsigned int *v29; // ebx
  unsigned int *v30; // ebx
  unsigned int *v31; // eax
  unsigned int *v32; // eax
  double v33; // st7
  int v34; // edx
  int v35; // eax
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  double v38; // st7
  int v39; // edx
  double v40; // st6
  double v41; // st5
  unsigned int *v42; // eax
  int *v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int **v48; // eax
  int *v49; // esi
  int v50; // edi
  int v51; // edx
  int v52; // esi
  int v53; // esi
  double v55; // st7
  int v56; // ebx
  int v57; // esi
  int v58; // ebx
  unsigned int *v59; // eax
  unsigned int *v60; // edi
  unsigned int *v61; // esi
  int v62; // ecx
  int v63; // edx
  double v64; // st7
  float v65; // edx
  int v66; // edi
  int v67; // ebx
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // edi
  int v72; // eax
  int v73; // esi
  int v74; // eax
  int v75; // eax
  int v76; // ebx
  int v77; // edx
  int v78; // eax
  int v79; // ecx
  int v80; // eax
  int v81; // esi
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  int v87; // esi
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  void **v93; // eax
  int v94; // esi
  int v95; // edi
  BOOL v96; // esi
  float v97; // [esp+38h] [ebp-E8h]
  float v98; // [esp+38h] [ebp-E8h]
  bool v99; // [esp+4Fh] [ebp-D1h]
  bool v100; // [esp+4Fh] [ebp-D1h]
  int v101; // [esp+50h] [ebp-D0h]
  int *v102; // [esp+50h] [ebp-D0h]
  int v103; // [esp+50h] [ebp-D0h]
  int i; // [esp+50h] [ebp-D0h]
  int v105; // [esp+50h] [ebp-D0h]
  int v106; // [esp+50h] [ebp-D0h]
  char v107; // [esp+57h] [ebp-C9h]
  int v108; // [esp+58h] [ebp-C8h] BYREF
  bool v109; // [esp+5Dh] [ebp-C3h]
  char v110; // [esp+5Eh] [ebp-C2h]
  char v111; // [esp+5Fh] [ebp-C1h]
  unsigned int *v112; // [esp+60h] [ebp-C0h]
  int v113; // [esp+64h] [ebp-BCh]
  int v114; // [esp+68h] [ebp-B8h]
  unsigned int v115[2]; // [esp+6Ch] [ebp-B4h] BYREF
  int v116; // [esp+74h] [ebp-ACh]
  void **v117; // [esp+78h] [ebp-A8h] BYREF
  void *Block; // [esp+7Ch] [ebp-A4h]
  int v119; // [esp+80h] [ebp-A0h]
  int v120; // [esp+84h] [ebp-9Ch]
  int v121; // [esp+88h] [ebp-98h]
  int v122; // [esp+8Ch] [ebp-94h]
  double v123; // [esp+90h] [ebp-90h] BYREF
  float v124; // [esp+98h] [ebp-88h]
  double v125; // [esp+9Ch] [ebp-84h] BYREF
  float v126; // [esp+A4h] [ebp-7Ch]
  int v127; // [esp+A8h] [ebp-78h] BYREF
  int v128; // [esp+ACh] [ebp-74h] BYREF
  int v129; // [esp+B0h] [ebp-70h]
  int v130; // [esp+B4h] [ebp-6Ch]
  int v131; // [esp+B8h] [ebp-68h] BYREF
  double v132; // [esp+BCh] [ebp-64h]
  float v133; // [esp+C4h] [ebp-5Ch]
  double v134; // [esp+C8h] [ebp-58h] BYREF
  int j; // [esp+D4h] [ebp-4Ch] BYREF
  double v136; // [esp+D8h] [ebp-48h] BYREF
  float v137; // [esp+E0h] [ebp-40h]
  char v138[12]; // [esp+F0h] [ebp-30h] BYREF
  char v139[12]; // [esp+114h] [ebp-Ch] BYREF

  v113 = aP1; /*0x48929b*/
  v114 = (int)aP0; /*0x48929f*/
  sub_48B070(0, 0); /*0x4892a3*/
  v117 = &vt_DynamicVectorClass_4; /*0x4892aa*/
  v122 = 10; /*0x4892b2*/
  v121 = 0; /*0x4892ba*/
  if ( !aP1 || (*(unsigned char *)dword_A8B230 & 0x20) != 0 || (v8 = aP3) == 0 ) /*0x4892d7*/
  {
    v117 = &vt_VectorClass_DamageGroup; /*0x48a4bb*/
    if ( Block && (((v120) >> 8) & 0xFF) ) /*0x48a4cd*/
      __3_YAXPAX_Z(Block); /*0x48a4d0*/
    return 1; /*0x48a4da*/
  }
  v127 = Math::RoundToInt(*(float *)(aP3 + 292) * 256.0); /*0x4892f4*/
  v99 = aP3 == dword_8871E0->u32_FAC; /*0x489304*/
  LOWORD(v101) = *aP0 / 256; /*0x48931c*/
  HIWORD(v101) = aP0[1] / 256; /*0x489330*/
  v108 = v101; /*0x48933d*/
  v9 = (unsigned int *)CellCoord::To_CellObj(&v108); /*0x489342*/
  v10 = aP3->q124; /*0x489347*/
  v112 = v9; /*0x489353*/
  v110 = 0; /*0x489357*/
  v111 = 0; /*0x48935c*/
  v107 = 0; /*0x489361*/
  v109 = v10 <= 0.5; /*0x489372*/
  LODWORD(v136) = ((__int16)v108 << 8) + 128; /*0x489394*/
  HIDWORD(v136) = ((short)(((v108) >> 16) & 0xFFFF) << 8) + 128; /*0x4893a7*/
  v137 = 0.0; /*0x4893ae*/
  if ( Cell::GetGroundHeight(&v136) < aP0[2] ) /*0x4893bd*/
  {
    v11 = Math::RoundToInt(aP3->q124); /*0x4893c9*/
    AircraftTrackerClass::FillCurrentVector(v112, v11); /*0x4893d9*/
    v12 = VectorClass::RemoveObjectById(&g_CellClassManager); /*0x4893e8*/
    if ( v12 ) /*0x4893ec*/
    {
      do /*0x489555*/
      {
        if ( *(unsigned char *)(v12 + 144) ) /*0x4893f2*/
        {
          if ( *(unsigned char *)(v12 + 116) ) /*0x489400*/
          {
            if ( *(int *)(v12 + 108) > 0 ) /*0x489410*/
            {
              v13 = *(unsigned int *)(v12 + 156); /*0x48941e*/
              v14 = *(unsigned int *)(v12 + 160); /*0x489420*/
              v133 = *(float *)(v12 + 164); /*0x489426*/
              v15 = Coord::Subtract(*aP0 - v13, aP0[1] - v14, aP0[2] - LODWORD(v133)); /*0x489447*/
              v136 = *(double *)v15; /*0x48944e*/
              v137 = v15->q008; /*0x489469*/
              v16 = Coord::Length(&v136); /*0x489470*/
              if ( v16 <= v127 ) /*0x489479*/
              {
                if ( v109 /*0x48949a*/
                  && v16 < 85
                  && (*(unsigned __int8 (**)(int))(*(unsigned int *)v12 + 352))(v12)
                  && !*(unsigned int *)(v12 + 452) )
                {
                  v107 = 1; /*0x4894a4*/
                }
                v102 = (int *)__2_YAPAXI_Z(8u); /*0x4894b0*/
                *v102 = v12; /*0x4894b4*/
                v17 = Coord::Subtract( /*0x4894d6*/
                        *aP0 - *(unsigned int *)(v12 + 156),
                        aP0[1] - *(unsigned int *)(v12 + 160),
                        aP0[2] - *(unsigned int *)(v12 + 164));
                v125 = *(double *)v17; /*0x4894dd*/
                v126 = v17->q008; /*0x4894ef*/
                v102[1] = Coord::Length(&v125); /*0x4894fc*/
                if ( v121 < v119 /*0x48952a*/
                  || ((((v120) >> 8) & 0xFF) || !v119)
                  && v122 > 0
                  && ((unsigned __int8 (*)(void ***, int, unsigned int))v117[2])(&v117, v122 + v119, 0) )
                {
                  v18 = v121++; /*0x489539*/
                  *((unsigned int *)Block + v18) = v102; /*0x489544*/
                }
              }
            }
          }
        }
        v12 = VectorClass::RemoveObjectById(&g_CellClassManager); /*0x489551*/
      }
      while ( v12 ); /*0x489555*/
      v8 = aP3; /*0x48955b*/
    }
  }
  if ( (v112->u32_140 & 0x100) != 0 && aP0[2] > dword_89E864 / 2 + Cell::GetGroundHeight(aP0) ) /*0x48958b*/
    v110 = 1; /*0x48958d*/
  v19 = Math::RoundToInt(v8->q124 + 0.99); /*0x48959e*/
  v20 = dword_7ED3D0[v19]; /*0x4895a3*/
  v115[0] = v19; /*0x4895aa*/
  v103 = 0; /*0x4895b0*/
  if ( v20 > 0 )
  {
    while ( 1 )
    {
      v21 = (((v108) >> 16) & 0xFFFF) + HIWORD(dword_ABD490[v103]); /*0x4895dc*/
      LOWORD(v131) = v108 + LOWORD(dword_ABD490[v103]); /*0x4895e1*/
      HIWORD(v131) = v21; /*0x4895e6*/
      j = v131; /*0x4895f6*/
      v22 = (unsigned int *)CellCoord::To_CellObj(&j); /*0x489608*/
      v112 = v22; /*0x48960a*/
      v23 = v22->u32_44; /*0x48960e*/
      if ( v23 != -1 ) /*0x489614*/
      {
        v24 = *((unsigned int *)MEMORY[0xA83D84] + v23); /*0x489620*/
        LODWORD(v134) = v24; /*0x489623*/
        if ( *(unsigned char *)(v24 + 689) && (!*(unsigned char *)(v24 + 681) || v8->q148) && a5 ) /*0x48964d*/
        {
          CellClass::ReduceTiberium(v113 / 10); /*0x489665*/
          v24 = LODWORD(v134); /*0x48966a*/
        }
        if ( *(unsigned char *)(v24 + 680) ) /*0x489671*/
        {
          if ( v8->u8_145 ) /*0x48967b*/
          {
            BuildingClass::SellEffects(-1); /*0x489687*/
          }
          else if ( *(unsigned char *)(v8 + 324) || *(unsigned char *)(v8 + 327) && *(unsigned int *)(v24 + 156) == 6 ) /*0x4896a4*/
          {
            BuildingClass::SellEffects(v113); /*0x4896ad*/
          }
        }
        if ( v22->u32_44 == -1 ) /*0x4896b6*/
          AbstractClass::ClearTargetToMeClearManagerTarget(v22); /*0x4896ba*/
      }
      v25 = v110 ? v22->q0E8 : v22->u32_E4;
      if ( v25 ) /*0x4896d7*/
        break; /*0x4896d7*/
LABEL_81:
      if ( ++v103 >= dword_7ED3D0[v115[0]] ) /*0x4899d4*/
        goto LABEL_82; /*0x4899d4*/
      v8 = aP3; /*0x4895c0*/
    }
    while ( (unsigned int *)v25 == a2 && !*(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3232) && !v99 /*0x48970a*/
         || !*(unsigned char *)(v25 + 144) )
    {
LABEL_80:
      v25 = *(unsigned int *)(v25 + 48); /*0x4899b3*/
      if ( !v25 ) /*0x4899b8*/
        goto LABEL_81; /*0x4899b8*/
    }
    if ( (*(int (**)(int))(*(unsigned int *)v25 + 44))(v25) == 1 && (*(unsigned int *)dword_A8B230 & 0x800) != 0 ) /*0x489727*/
    {
      v26 = (*(int (**)(int))(*(unsigned int *)v25 + 136))(v25); /*0x48972d*/
      v27 = 0; /*0x489739*/
      v28 = dword_8871E0->Easy; /*0x48973b*/
      if ( v28 > 0 ) /*0x489743*/
      {
        v29 = (unsigned int *)dword_8871E0->HarvesterDumpRate; /*0x489745*/
        while ( *v29 != v26 ) /*0x48974d*/
        {
          ++v27; /*0x489753*/
          ++v29; /*0x489754*/
          if ( v27 >= v28 ) /*0x489759*/
            goto LABEL_58; /*0x489759*/
        }
        goto LABEL_80; /*0x48974d*/
      }
    }
LABEL_58:
    v30 = __2_YAPAXI_Z(8u); /*0x48975b*/
    *v30 = v25; /*0x489769*/
    if ( (*(int (**)(int))(*(unsigned int *)v25 + 44))(v25) == 6 ) /*0x489773*/
    {
      if ( !v103 ) /*0x489783*/
      {
        if ( aP0[2] - *(unsigned int *)(v112->vt_slot_72(&v136) + 8) <= 2 * dword_89E870 ) /*0x4897a9*/
        {
          v30[1] = 0; /*0x48983b*/
          goto LABEL_67; /*0x489842*/
        }
        v31 = (unsigned int *)v112->vt_slot_72(&v123); /*0x4897ba*/
        v32 = (unsigned int *)Coord::Subtract(*aP0 - *v31, aP0[1] - v31[1], aP0[2] - v31[2]); /*0x4897dd*/
        LODWORD(v125) = *v32; /*0x4897e7*/
        v33 = (double)SLODWORD(v125); /*0x4897ee*/
        v34 = v32->q008; /*0x4897f2*/
        HIDWORD(v125) = v32[1]; /*0x4897f5*/
        v126 = *(float *)&v34; /*0x4897fd*/
        Math::Sqrt((double)v34 * (double)v34 + (double)SHIDWORD(v125) * (double)SHIDWORD(v125) + v33 * v33); /*0x48981e*/
        v35 = Math::RoundToInt(v33) - 2 * dword_89E870; /*0x489834*/
LABEL_66:
        v30[1] = v35; /*0x489927*/
LABEL_67:
        if ( v109 && !v103 ) /*0x489938*/
        {
          HIBYTE(v116) = *(unsigned char *)(v25 + 20) & 1; /*0x489944*/
          if ( HIBYTE(v116) ) /*0x489948*/
          {
            if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v25 + 352))(v25) /*0x489966*/
              && !*(unsigned int *)(v25 + 452)
              && (int)v30[1] < 85 )
            {
              v107 = 1; /*0x489968*/
            }
          }
        }
        if ( v121 < v119 /*0x48999a*/
          || ((((v120) >> 8) & 0xFF) || !v119)
          && v122 > 0
          && ((unsigned __int8 (*)(void ***, int, unsigned int))v117[2])(&v117, v122 + v119, 0) )
        {
          v46 = v121++; /*0x4899a5*/
          *((unsigned int *)Block + v46) = v30; /*0x4899b0*/
        }
        goto LABEL_80; /*0x4899b0*/
      }
      v36 = (unsigned int *)v112->vt_slot_72(v139); /*0x489851*/
      v37 = (unsigned int *)Coord::Subtract(*aP0 - *v36, aP0[1] - v36[1], aP0[2] - v36[2]); /*0x489874*/
      LODWORD(v132) = *v37; /*0x48987b*/
      v38 = (double)SLODWORD(v132); /*0x489882*/
      v39 = v37->q008; /*0x489886*/
      HIDWORD(v132) = v37[1]; /*0x489889*/
      v40 = (double)SHIDWORD(v132); /*0x489890*/
      v133 = *(float *)&v39; /*0x489897*/
      v41 = (double)v39; /*0x48989e*/
    }
    else
    {
      v42 = (unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)v25 + 164))(v25, v138); /*0x4898b3*/
      v43 = (int *)Coord::Subtract(*aP0 - *v42, aP0[1] - v42[1], aP0[2] - v42[2]); /*0x4898d9*/
      v128 = *v43; /*0x4898e0*/
      v44 = v43[1]; /*0x4898e4*/
      v38 = (double)v128; /*0x4898e7*/
      v45 = v43->q008; /*0x4898eb*/
      v129 = v44; /*0x4898ee*/
      v40 = (double)v44; /*0x4898f2*/
      v130 = v45; /*0x4898f6*/
      v41 = (double)v45; /*0x4898fa*/
    }
    Math::Sqrt(v41 * v41 + v40 * v40 + v38 * v38); /*0x48991a*/
    v35 = Math::RoundToInt(v38); /*0x489922*/
    goto LABEL_66; /*0x489922*/
  }
LABEL_82:
  v47 = v121; /*0x4899da*/
  for ( i = 0; i < v121; ++i ) /*0x4899eb*/
  {
    v48 = (int **)*((unsigned int *)Block + i); /*0x4899f9*/
    v49 = *v48; /*0x4899fc*/
    v50 = (int)v48[1]; /*0x4899fe*/
    if ( *((unsigned char *)*v48 + 144) /*0x489a4f*/
      && (v49->vt_slot_44() != 6 || !*(unsigned char *)(v49[328] + 5889))
      && (!v107
       || v49 && (HIBYTE(v116) = v49->u32_14 & 1) != 0 && v49->vt_slot_352()) )
    {
      if ( v49->vt_slot_44() == 2 /*0x489a69*/
        && v49->vt_slot_84() )
      {
        v50 /= 2; /*0x489a77*/
      }
      if ( v49[27] > 0 && *((unsigned char *)v49 + 116) && !*((unsigned char *)v49 + 129) && v50 <= v127 ) /*0x489a95*/
      {
        v51 = *v49; /*0x489a9e*/
        v115[0] = v113; /*0x489aa0*/
        (*(void (**)(int *, unsigned int *, int, int, unsigned int *, unsigned int, unsigned int, int))(v51 + 364))( /*0x489ab6*/
          v49,
          v115,
          v50,
          aP3,
          a2,
          0,
          0,
          aP6);
        v111 = 1; /*0x489abc*/
      }
    }
    v47 = v121; /*0x489ac5*/
  }
  v52 = 0; /*0x489ad6*/
  if ( v47 > 0 ) /*0x489ada*/
  {
    do /*0x489af3*/
      __3_YAXPAX_Z(*((void **)Block + v52++)); /*0x489ae4*/
    while ( v52 < v121 ); /*0x489af3*/
  }
  v53 = v119; /*0x489af9*/
  ((void (*)(void ***))v117[3])(&v117); /*0x489b01*/
  ((void (*)(void ***, int, unsigned int))v117[2])(&v117, v53, 0); /*0x489b0f*/
  if ( v107 ) /*0x489b18*/
  {
    v117 = &vt_VectorClass_DamageGroup; /*0x489b1e*/
    if ( Block ) /*0x489b28*/
    {
      if ( (((v120) >> 8) & 0xFF) ) /*0x489b30*/
        __3_YAXPAX_Z(Block); /*0x489b33*/
    }
    return 2; /*0x489b46*/
  }
  v55 = (double)v113 * 0.01; /*0x489b4d*/
  if ( v55 >= 4.0 ) /*0x489b5e*/
    v134 = 4.0; /*0x489b6b*/
  else
    v134 = v55; /*0x489b60*/
  v56 = aP3; /*0x489b81*/
  if ( *(unsigned char *)(aP3 + 334) ) /*0x489b84*/
  {
    if ( v134 > 0.3 ) /*0x489ba4*/
    {
      v57 = (__int16)v108 - 3; /*0x489baf*/
      v105 = v57; /*0x489bb7*/
      if ( v57 <= (__int16)v108 + 3 ) /*0x489bbb*/
      {
        do /*0x489e7e*/
        {
          v58 = (short)(((v108) >> 16) & 0xFFFF) - 3; /*0x489bc6*/
          for ( j = v58; v58 <= (short)(((v108) >> 16) & 0xFFFF) + 3; j = v58 ) /*0x489bd5*/
          {
            if ( v110 ) /*0x489be3*/
            {
              (v127) = ((v127) & ~0xFFFF) | ((v57) & 0xFFFF); /*0x489be5*/
              (v127) = ((v127) & ~(0xFFFF << 16)) | (((v58) & 0xFFFF) << 16); /*0x489bec*/
              v59 = *(unsigned int **)(CellCoord::To_CellObj(&v127) + 232); /*0x489c00*/
            }
            else
            {
              (v131) = ((v131) & ~0xFFFF) | ((v57) & 0xFFFF); /*0x489c0c*/
              (v131) = ((v131) & ~(0xFFFF << 16)) | (((v58) & 0xFFFF) << 16); /*0x489c19*/
              v59 = *(unsigned int **)(CellCoord::To_CellObj(&v131) + 228); /*0x489c23*/
            }
            v60 = v59; /*0x489c29*/
            v112 = v59; /*0x489c2d*/
            if ( v59 ) /*0x489c31*/
            {
              do /*0x489e4d*/
              {
                v61 = (unsigned int *)AbstractClass::IsTechnoType(v60); /*0x489c3e*/
                if ( v61 ) /*0x489c42*/
                {
                  if ( ((v58 & 0xFFFFu) << 16 | (v105 & 0xFFFFu)) == v108 && a2 ) /*0x489c69*/
                  {
                    v128 = v61[39]; /*0x489c7f*/
                    v129 = v61[40]; /*0x489c86*/
                    v130 = v61[41]; /*0x489c8f*/
                    v62 = a2[40]; /*0x489c9b*/
                    v115[0] = a2[39] - v128; /*0x489c9e*/
                    v63 = a2[41] - v130; /*0x489caf*/
                    *(float *)&v123 = (float)v115[0]; /*0x489cb1*/
                    v115[0] = v63; /*0x489cb9*/
                    *((float *)&v123 + 1) = (float)(v62 - v129); /*0x489cbd*/
                    v124 = (float)v63; /*0x489cc5*/
                    v64 = *(float *)&v123 * *(float *)&v123 /*0x489ce3*/
                        + *((float *)&v123 + 1) * *((float *)&v123 + 1)
                        + v124 * v124;
                    Math::Sqrt(v64); /*0x489ce8*/
                    if ( v64 == 0.0 ) /*0x489cfb*/
                    {
                      v65 = v124; /*0x489d4c*/
                      v132 = v123; /*0x489d50*/
                    }
                    else
                    {
                      *(float *)&v136 = *(float *)&v123 / v64; /*0x489d03*/
                      *((float *)&v136 + 1) = *((float *)&v123 + 1) / v64; /*0x489d1b*/
                      v132 = v136; /*0x489d2d*/
                      v137 = v124 / v64; /*0x489d34*/
                      v65 = v137; /*0x489d3b*/
                    }
                    v133 = v65; /*0x489d67*/
                    *(float *)&v125 = *(float *)&v132 * 10.0; /*0x489d6e*/
                    *((float *)&v125 + 1) = *((float *)&v132 + 1) * 10.0; /*0x489d87*/
                    v123 = v125; /*0x489d9c*/
                    v126 = v65 * 10.0; /*0x489da0*/
                    v124 = v126; /*0x489dac*/
                    v66 = Math::RoundToInt(*(float *)&v125); /*0x489db9*/
                    v67 = Math::RoundToInt(*((float *)&v125 + 1)); /*0x489dc4*/
                    v68 = Math::RoundToInt(v126); /*0x489dc6*/
                    v128 += v66; /*0x489dde*/
                    v69 = v68 + v130; /*0x489de6*/
                    v70 = *v61; /*0x489de8*/
                    v130 = v69; /*0x489deb*/
                    v97 = v134; /*0x489df5*/
                    v129 += v67; /*0x489dfb*/
                    (*(void (**)(unsigned int *, int *, unsigned int, unsigned int))(v70 + 984))(v61, &v128, LODWORD(v97), 0); /*0x489dff*/
                    v58 = j; /*0x489e05*/
                    v60 = v112; /*0x489e0c*/
                  }
                  else if ( *(float *)(aP3 + 292) > 0.0 ) /*0x489e26*/
                  {
                    v98 = v134; /*0x489e38*/
                    (*(void (**)(unsigned int *, int, unsigned int, unsigned int))(*v61 + 984))(v61, v114, LODWORD(v98), 0); /*0x489e3e*/
                  }
                }
                v60 = v60->ptr_30; /*0x489e44*/
                v112 = v60; /*0x489e49*/
              }
              while ( v60 ); /*0x489e4d*/
              v57 = v105; /*0x489e53*/
            }
            ++v58; /*0x489e5c*/
          }
          v105 = ++v57; /*0x489e7a*/
        }
        while ( v57 <= (__int16)v108 + 3 ); /*0x489e7e*/
        v56 = aP3; /*0x489e84*/
      }
    }
  }
  v100 = v56 == *((unsigned int *)dword_8871E0 + 1020); /*0x489e9f*/
  v71 = CellCoord::To_CellObj(&v108); /*0x489ea9*/
  if ( (BYTE1(*(unsigned int *)dword_A8B230) & 0x80u) != 0 && v56->u32_144 )
  {
    v72 = *(unsigned int *)(v71 + 320); /*0x489ed2*/
    v73 = *(unsigned int *)(v71 + 56) - g_Cell_BuildabilityLUT + 1; /*0x489eda*/
    v106 = 0; /*0x489edb*/
    if ( (v72 & 0x100) != 0
      && ((v72 & 0x80u) == 0 ? (v115[0] = *(unsigned int *)(v71->u32_2C + 36)) : (v115[0] = v71->ptr_24),
          (v74 = CellCoord::To_CellObj(v115), (v106 = v74) != 0)
       && ((v75 = *(unsigned int *)(v74 + 68), v75 == 24) || v75 == 25)) )
    {
      v76 = g_TerrainSoundTable2; /*0x489f6b*/
    }
    else
    {
      v76 = g_TerrainSoundTable2; /*0x489f27*/
      if ( v73 != g_TerrainSoundTable2 /*0x489f44*/
        && v73 != g_TerrainSoundTable2 + 1
        && v73 != g_TerrainSoundTable2 + 2
        && v73 != g_TerrainSoundTable2 + 3 )
      {
        v77 = g_TerrainSoundConfig; /*0x489f46*/
        if ( v73 != g_TerrainSoundConfig /*0x489f63*/
          && v73 != g_TerrainSoundConfig + 1
          && v73 != g_TerrainSoundConfig + 2
          && v73 != g_TerrainSoundConfig + 3 )
        {
LABEL_166:
          v82 = *(unsigned int *)(v71 + 56) - g_TerrainBridgeIndex + 1; /*0x48a0a5*/
          if ( v106 && ((v83 = *(unsigned int *)(v106 + 68), v83 == 237) || v83 == 238) /*0x48a0fc*/
            || v82 == v76
            || v82 == v76 + 1
            || v82 == v76 + 2
            || v82 == v76 + 3
            || v82 == v77
            || v82 == v77 + 1
            || v82 == v77 + 2
            || v82 == v77 + 3 )
          {
            if ( (*(unsigned int *)(v71 + 320) & 0x100) == 0 /*0x48a141*/
              || (v84 = v71->u32_11B, v85 = *(unsigned int *)(v114 + 8),
                                              v85 <= dword_89E864 + dword_89E870 * (v84 + 1))
              && v85 > dword_89E864 + dword_89E870 * (v84 - 2) )
            {
              if ( *(unsigned char *)(aP3 + 324) ) /*0x48a14a*/
              {
                if ( aP3 == *((unsigned int *)dword_8871E0 + 1020) /*0x48a182*/
                  || (v86 = Random::Range(1, dword_8871E0->TiberiumLongScan), v86 < v113) )
                {
                  v87 = 3; /*0x48a199*/
                  if ( (unsigned __int8)CellClass::SetTerrainType(&v108) ) /*0x48a192*/
                  {
LABEL_189:
                    AbstractClass::ClearTargetToMeClearManagerTarget(v71); /*0x48a1c6*/
                  }
                  else
                  {
                    while ( v100 && v87 > 0 ) /*0x48a1aa*/
                    {
                      --v87; /*0x48a1bb*/
                      if ( (unsigned __int8)CellClass::SetTerrainType(&v108) ) /*0x48a1b6*/
                        goto LABEL_189; /*0x48a1be*/
                    }
                  }
                  Coord::To_Screen(v114, v115); /*0x48a1dd*/
                  Cell::CreateCrater(v115[0] - 96, v115[1] - 96, 192, 192, 0); /*0x48a20f*/
                }
              }
            }
          }
          v88 = *(unsigned int *)(v71 + 68); /*0x48a214*/
          if ( v88 >= 74 && v88 <= 99 ) /*0x48a21f*/
          {
            if ( aP3 == *((unsigned int *)dword_8871E0 + 1020) /*0x48a24e*/
              || (v89 = Random::Range(1, dword_8871E0->TiberiumLongScan), v89 < v113) )
            {
              if ( (unsigned __int8)CellClass::CheckTilePassable2(&v108) ) /*0x48a25a*/
                AbstractClass::ClearTargetToMeClearManagerTarget(v71); /*0x48a265*/
            }
          }
          v90 = *(unsigned int *)(v71 + 68); /*0x48a26a*/
          if ( v90 >= 205 && v90 <= 230 ) /*0x48a279*/
          {
            if ( aP3 == *((unsigned int *)dword_8871E0 + 1020) /*0x48a2a8*/
              || (v91 = Random::Range(1, dword_8871E0->TiberiumLongScan), v91 < v113) )
            {
              if ( (unsigned __int8)CellClass::CheckTilePassable(&v108) ) /*0x48a2b4*/
                AbstractClass::ClearTargetToMeClearManagerTarget(v71); /*0x48a2bf*/
            }
          }
          goto LABEL_203; /*0x48a2bf*/
        }
LABEL_151:
        if ( (*(unsigned int *)(v71 + 320) & 0x100) == 0 /*0x489fbc*/
          || (v78 = v71->u32_11B, v79 = *(unsigned int *)(v114 + 8), v79 <= dword_89E864 + dword_89E870 * (v78 + 1))
          && v79 > dword_89E864 + dword_89E870 * (v78 - 2) )
        {
          if ( *(unsigned char *)(aP3 + 324) ) /*0x489fc5*/
          {
            if ( aP3 == *((unsigned int *)dword_8871E0 + 1020) /*0x489ffe*/
              || (v80 = Random::Range(1, dword_8871E0->TiberiumLongScan), v80 < v113) )
            {
              v81 = 3; /*0x48a015*/
              if ( (unsigned __int8)CellClass::SetTerrainType(&v108) ) /*0x48a00e*/
              {
LABEL_163:
                AbstractClass::ClearTargetToMeClearManagerTarget(v71); /*0x48a042*/
              }
              else
              {
                while ( v100 && v81 > 0 ) /*0x48a026*/
                {
                  --v81; /*0x48a037*/
                  if ( (unsigned __int8)CellClass::SetTerrainType(&v108) ) /*0x48a032*/
                    goto LABEL_163; /*0x48a03a*/
                }
              }
              Coord::To_Screen(v114, &v134); /*0x48a05c*/
              Cell::CreateCrater(LODWORD(v134) - 128, HIDWORD(v134) - 128, 256, 256, 0); /*0x48a094*/
            }
            v76 = g_TerrainSoundTable2; /*0x48a099*/
            v77 = g_TerrainSoundConfig; /*0x48a09f*/
          }
        }
        goto LABEL_166; /*0x48a09f*/
      }
    }
    v77 = g_TerrainSoundConfig; /*0x489f71*/
    goto LABEL_151; /*0x489f71*/
  }
LABEL_203:
  v92 = *(unsigned int *)(v71 + 68); /*0x48a2c4*/
  if ( v92 == -1 || !*(unsigned char *)(*((unsigned int *)MEMORY[0xA83D84] + v92) + 688) ) /*0x48a2d9*/
  {
    v94 = v114; /*0x48a433*/
  }
  else
  {
    BuildingClass::CreatePlacementCrater(v71); /*0x48a2e9*/
    *(unsigned int *)(v71 + 68) = -1; /*0x48a2f0*/
    House::AnnounceUpgrade(-1); /*0x48a2f9*/
    Cell::SetRadar(v71 + 36); /*0x48a307*/
    Radar::Update(v71 + 36); /*0x48a312*/
    AbstractClass::ClearTargetToMeClearManagerTarget(v71); /*0x48a319*/
    v93 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x48a323*/
    v94 = v114; /*0x48a335*/
    if ( v93 ) /*0x48a32d*/
      AnimClass::ctor(v93, *((void **)dword_8871E0 + 21), v114, 0, 1, (void *)0x600, 0, 0); /*0x48a34d*/
    PlaySoundEffectAt(0, *((unsigned int *)dword_8871E0 + 1002), 1, aP6); /*0x48a371*/
    v95 = 0; /*0x48a37c*/
    if ( *((int *)dword_8871E0 + 26) > 0 ) /*0x48a383*/
    {
      while ( (int)Random::Range(0, 99) >= 15 ) /*0x48a39c*/
      {
        if ( ++v95 >= *((unsigned int *)dword_8871E0 + 26) ) /*0x48a3a8*/
          goto LABEL_213; /*0x48a3a8*/
      }
      if ( __2_YAPAXI_Z(0x148u) ) /*0x48a3b1*/
        DamageAnimClass::Constructor(*(unsigned int *)(*((unsigned int *)dword_8871E0 + 23) + 4 * v95), v94, 0); /*0x48a3cf*/
    }
LABEL_213:
    if ( (int)Random::Range(0, 99) < 25 ) /*0x48a3eb*/
    {
      if ( __2_YAPAXI_Z(0x100u) ) /*0x48a3f2*/
        ParticleSystemClass::Constructor(*((unsigned int *)dword_8871E0 + 29), v94, 0, 0, &dword_89E830, 0); /*0x48a416*/
      ParticleSystemClass::CreateParticle(v94, v94); /*0x48a41f*/
    }
  }
  if ( *(unsigned int *)(aP3 + 320) ) /*0x48a43a*/
  {
    if ( __2_YAPAXI_Z(0x100u) ) /*0x48a449*/
      ParticleSystemClass::Constructor(*(unsigned int *)(aP3 + 320), v94, 0, 0, &dword_89E830, aP6); /*0x48a46c*/
    ParticleSystemClass::CreateParticle(v94, v94); /*0x48a479*/
  }
  v96 = v111 == 0; /*0x48a489*/
  v117 = &vt_VectorClass_DamageGroup; /*0x48a491*/
  if ( Block && (((v120) >> 8) & 0xFF) ) /*0x48a4a1*/
    __3_YAXPAX_Z(Block); /*0x48a4a4*/
  return v96; /*0x489b40*/

}
} // namespace gamemd

// 0x48A620
namespace gamemd {
AbstractClass * * CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{

  wchar_t *v7; // eax
  double v10; // st7
  int v11; // eax
  int v12; // esi
  ObjectClass *v13; // eax

  LOBYTE(v7) = MEMORY[0xA8EB78]; /*0x48a620*/
  if ( MEMORY[0xA8EB78] && (v7 = (wchar_t *)PingPongBuffer::GetWriteOffset(), dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = a2->q150, (unsigned char)v7) ) /*0x48a662*/
    {
      v10 = a2->q13C; /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v12 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v12 < 63 ) /*0x48a6aa*/
        {
          if ( v12 <= 21 ) /*0x48a6b6*/
            v12 = 21; /*0x48a6b8*/
        }
        else
        {
          v12 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        LOWORD(v11) = Math::RoundToInt(v10 * 63.0); /*0x48a696*/
        v12 = v11; /*0x48a69b*/
      }
      v13 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x48a6bf*/
      if ( v13 ) /*0x48a6c9*/
      {
        v7 = (wchar_t *)ObjectClass::RegisterInArray(v13, a3, a4, a5, v12); /*0x48a6e7*/
        *(&v7->u32_14) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return (char)v7; /*0x48a6ef*/

}
}
// 0x48A9D0
namespace gamemd {
int Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{

  if ( a4 <= 0 )
  {
    if ( (double)a3 == 0.0 ) /*0x48aa0a*/
      a3 = 0; /*0x48aa0c*/
    double v7; // st7
    v7 = (double)a4; /*0x48aa1a*/
    double v16; // [esp+20h] [ebp-8h]
    v16 = (double)a2; /*0x48aa25*/
    double v15; // [esp+18h] [ebp-10h]
    v15 = v16 * v16 - v7 * a5; /*0x48aa38*/
    double v13; // [esp+10h] [ebp-18h]
    v13 = (double)a3 * (double)a3; /*0x48aa44*/
    double v11; // [esp+8h] [ebp-20h]
    v11 = v16 * v16 * v16 * v16 - (v16 * v16 * v7 * a5 + v16 * v16 * v7 * a5) - a5 * a5 * v13; /*0x48aa64*/
    double v8 = v7 * v7 / v13 + 1.0 + v7 * v7 / v13 + 1.0; // st7 /*0x48aa7a*/
    double v14; // [esp+10h] [ebp-18h]
    v14 = v8; /*0x48aa7c*/
    if ( v11 < 0.0 || v8 == 0.0 ) /*0x48aa9c*/
      return 0; /*0x48aa9c*/
    double v9; // st7
    v9 = a1 ? v15 - Math::Sqrt(v11) : Math::Sqrt(v11) + v15;
    double v12; // [esp+8h] [ebp-20h]
    v12 = v9 / v14; /*0x48aad4*/
    if ( v12 < 0.0 ) /*0x48aae3*/
    {
      return 0; /*0x48ab12*/
    }
    else
    {
      double v10; // st7
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


  /* X11: vtable install elided (implicit via CommBufferClass virtuals 0x48b0fd) */
  *&this->__pad_004 = a2; /*0x48b103*/
  this->CommBufferClass_field_0x8 = a3; /*0x48b106*/
  *(unsigned int *)this->__pad_C = Size; /*0x48b109*/
  this->CommBufferClass_field_0x10 = (AbstractClass *)a5; /*0x48b10c*/
  this->CommBufferClass_field_0x24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->CommBufferClass_field_0x34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *&this->ptr_30 = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->u32_40 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  int v6 = 0; // ebx /*0x48b14c*/
  if ( *&this->__pad_004 > 0 ) /*0x48b150*/
  {
    int v7 = 0; // edi /*0x48b152*/
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
    while ( v6 < *&this->__pad_004 ); /*0x48b191*/
  }
  int v8 = 0; // ebx /*0x48b196*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b19a*/
  {
    int v9 = 0; // edi /*0x48b19c*/
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
  ((Struct *)this)->ClearAllMemberFlags(); /*0x48b1df*/
  return this->__pad_0; /*0x48b1e6*/

}
}
// 0x48BB60
namespace gamemd {
bool sub_48BB60(int a1)
{

  unsigned __int8 *v1; // ebp
  int v2; // esi
  unsigned __int8 *v3; // ebx
  unsigned int *v4; // ecx
  unsigned int *v5; // edi
  unsigned __int8 *v6; // edx
  unsigned int *v7; // eax

  BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = dword_87F684; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !dword_87F684 ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = (unsigned int *)dword_87F690; /*0x48bb78*/
  if ( dword_87F690 && *(unsigned __int8 **)dword_87F690 == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = v4 + 1; /*0x48bc0b*/
    return !*v7 /*0x48bc0e*/
        || (*(unsigned __int8 (**)(unsigned int, unsigned __int8 *))(*(unsigned int *)*v7 + 20))(*v7, v1) == 0;
  }
  if ( !byte_87F68C ) /*0x48bb91*/
  {
    qsort(*(void **)&stru_87F680, dword_87F684, 8u, CompareFuncInt); /*0x48bba1*/
    v2 = dword_87F684; /*0x48bba6*/
    dword_87F690 = 0; /*0x48bbaf*/
    byte_87F68C = 1; /*0x48bbb9*/
  }
  v5 = (unsigned int *)stru_87F680; /*0x48bbc0*/
  if ( v2 <= 0 ) /*0x48bbc8*/
    goto LABEL_12; /*0x48bbc8*/
  while ( 1 ) /*0x48bbd1*/
  {
    v6 = (unsigned __int8 *)v5[2 * (v2 / 2)]; /*0x48bbd1*/
    v4 = &v5[2 * (v2 / 2)]; /*0x48bbd4*/
    if ( (int)v6 <= (int)v3 ) /*0x48bbd9*/
      break; /*0x48bbd9*/
    v2 /= 2; /*0x48bbdb*/
LABEL_11:
    if ( v2 <= 0 ) /*0x48bbed*/
      goto LABEL_12; /*0x48bbed*/
  }
  if ( v6 != v3 ) /*0x48bbdf*/
  {
    v5 = v4 + 2; /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    dword_87F690 = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
LABEL_12:
  v7 = (unsigned int *)&unk_B7883C; /*0x48bbef*/
  return !*v7 /*0x48bc1d*/
      || (*(unsigned __int8 (**)(unsigned int, unsigned __int8 *))(*(unsigned int *)*v7 + 20))(*v7, v1) == 0;

}
}
// 0x48BC20
int CompareFuncInt(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
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
  TechnoClass *v11; // [esp+0h] [ebp-15Ch]
  Main v12; // [esp+8h] [ebp-154h] BYREF
  Main v13; // [esp+Ch] [ebp-150h] BYREF
  char v14[112]; // [esp+7Ch] [ebp-E0h] BYREF
  char v15[112]; // [esp+ECh] [ebp-70h] BYREF

  result = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c8b0*/
  if ( !*(unsigned int *)&stru_A8E960.random[556] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x48c8cc*/
  {
    result = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x48c8ce*/
    if ( *(unsigned short *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 503) /*0x48c8ef*/
      || *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 502) )
    {
      goto LABEL_14; /*0x48c8f7*/
    }
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 501) ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_8; /*0x48c911*/
      }
LABEL_14:
      *(unsigned int *)&stru_A8E960.random[556] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_8:
  ScenarioClass::CleanupTemporary(v10); /*0x48c918*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 20))(dword_887640); /*0x48c925*/
  while ( (*(int (**)(MouseClass *))(dword_887640->HandleClick_ph + 40))(dword_887640) ) /*0x48c930*/
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x48c93f*/
  v3 = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c951*/
  v9 = v1; /*0x48c959*/
  if ( *(unsigned int *)&stru_A8E960.random[556] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v3 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v3 = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c9bf*/
          v4 = *(unsigned int *)&stru_A8E960.random[556] == 1; /*0x48c9c4*/
          goto LABEL_16; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( g_MenuStateFlags ) /*0x48cb40*/
          {
LABEL_33:
            Network::AddFrameEvent(v9); /*0x48cb42*/
          }
          else if ( !*(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 501) /*0x48cb7b*/
                 && !*(unsigned short *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 503)
                 && !*(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 502) )
          {
            StringCSF = (int *)GetStringCSF(aTxtSurrender, 0, g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(StringCSF) ) /*0x48cba1*/
            {
              v8 = EventClass::AddEvent(v15, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48), 8u); /*0x48cbc0*/
              if ( *(int *)&dword_A802C8 < 128 ) /*0x48cbcf*/
              {
                qmemcpy(&byte_A802D4[111 * dword_A802D0], v8, 0x6Fu); /*0x48cbeb*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cbfc*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48cc13*/
                ++*(unsigned int *)&dword_A802C8; /*0x48cc19*/
              }
              Network::AddFrameEvent(v9); /*0x48cc1e*/
              g_GameLoopActive = 0; /*0x48cc23*/
            }
          }
          goto LABEL_42; /*0x48cb47*/
        case 3: /*0x48c968*/
          switch ( ShowGameDialog() ) /*0x48ca2d*/
          {
            case 2: /*0x48ca2d*/
              goto LABEL_33;
            case 3: /*0x48ca2d*/
              v5 = EventClass::AddEvent( /*0x48ca43*/
                     (char *)&v13,
                     *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
                     8u);
              if ( *(int *)&dword_A802C8 < 128 ) /*0x48ca52*/
              {
                qmemcpy(&byte_A802D4[111 * dword_A802D0], v5, 0x6Fu); /*0x48ca6e*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48ca7f*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48ca96*/
                ++*(unsigned int *)&dword_A802C8; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_33; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v6 = EventClass::AddEvent(v14, *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48), 8u); /*0x48cac4*/
              if ( *(int *)&dword_A802C8 < 128 ) /*0x48cad3*/
              {
                qmemcpy(&byte_A802D4[111 * dword_A802D0], v6, 0x6Fu); /*0x48caef*/
                dword_A83A54[dword_A802D0] = timeGetTime(); /*0x48cb00*/
                dword_A802D0 = ((unsigned char)dword_A802D0 + 1) & 0x7F; /*0x48cb17*/
                ++*(unsigned int *)&dword_A802C8; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              byte_8B41C0 = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_42;
          }
          goto LABEL_42;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(); /*0x48ca08*/
          v3 = 5; /*0x48ca0d*/
          *(unsigned int *)&stru_A8E960.random[556] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(&v12); /*0x48c9cd*/
          v3 = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c9d2*/
          if ( *(unsigned int *)&stru_A8E960.random[556] != 5 ) /*0x48c9da*/
            goto LABEL_17; /*0x48c9da*/
          v3 = 1; /*0x48c9dc*/
          *(unsigned int *)&stru_A8E960.random[556] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(); /*0x48c9ef*/
          v3 = 5; /*0x48c9f4*/
          *(unsigned int *)&stru_A8E960.random[556] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_42; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog((ObjectClass *)v9); /*0x48c99d*/
          v3 = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c9a2*/
          v4 = *(unsigned int *)&stru_A8E960.random[556] == 8; /*0x48c9a7*/
LABEL_16:
          if ( !v4 ) /*0x48c9aa*/
            goto LABEL_17; /*0x48c9aa*/
          goto LABEL_42; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing((ScenarioClass *)dword_A8B230); /*0x48c975*/
          v3 = *(unsigned int *)&stru_A8E960.random[556]; /*0x48c97a*/
          if ( *(unsigned int *)&stru_A8E960.random[556] != 9 ) /*0x48c982*/
            goto LABEL_17; /*0x48c982*/
LABEL_42:
          *(unsigned int *)&stru_A8E960.random[556] = 0; /*0x48cc31*/
          goto LABEL_43; /*0x48cc31*/
        default:
LABEL_17:
          if ( v3 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_43; /*0x48c9b2*/
      }
    }
  }
LABEL_43:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( BYTE2(dword_A8B230[381].vfptr3) ) /*0x48cc4b*/
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x48cc5d*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 24))(dword_887640); /*0x48cc68*/
  WTFMode::Init(&dword_A8B238); /*0x48cc70*/
  return PostFrameCleanup(v11); /*0x48c990*/

}
}
// 0x48CCC0
namespace gamemd {
char MainGame()
{

  double v1; // st6
  double v2; // st7
  int inited; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  char v6; // cl
  TechnoTypeClass *v7; // ecx
  int v8; // eax
  int v9; // eax
  ObjectClass *v11; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR v13[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = InitGame(v1, v2); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF(aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, StringCSF, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v5 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v5, -1, v13, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = v13; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  g_ExceptionReturnStack = (int)&v11; /*0x48cd91*/
  g_ExceptionReturnFrame = (int)&savedregs; /*0x48cd97*/
  g_ExceptionReturnAddr = (int)&loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(v11); /*0x48cdd3*/
  while ( (unsigned char)inited ) /*0x48cdda*/
  {
    dword_A8E7AC = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&FileSystem_TEMPERAT_PAL, 15, 0); /*0x48cdfd*/
    Timer::PumpMessages((Timer *)dword_87F770); /*0x48ce08*/
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x48ce1e*/
      dword_ABCDFC = 0; /*0x48ce21*/
      dword_ABCE00 = 0; /*0x48ce27*/
    }
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      stru_A8E960.waypoints[2414] = 0; /*0x48ce3a*/
      dword_B0BDB8 = 0; /*0x48ce40*/
      byte_B0BD78 = 0; /*0x48ce46*/
    }
    if ( *(unsigned int *)&stru_887338.__pad_1C[20] ) /*0x48ce54*/
      Tooltip::Enable(*(Tooltip **)&stru_887338.__pad_1C[20], stru_A8E960.random[12]); /*0x48ce5d*/
    v6 = BYTE2(dword_A8B230[381].vfptr3); /*0x48ce67*/
    *(unsigned int *)&stru_A8E960.random[556] = 0; /*0x48ce6d*/
    stru_A8E960.random[552] = v6; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&dword_A8B238); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( (unsigned __int8)GameFrameLoop(v11) && GameFrameCheck(v11) ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(v11); /*0x48ce9c*/
    }
    while ( !GameFrameCheck(v11) ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&dword_A8B238); /*0x48ceb4*/
    stru_A8E960.random[488] = 0; /*0x48cebf*/
    byte_A8E378 = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(v11); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&word_884E80, 30, 0); /*0x48cf02*/
    LOBYTE(v7) = 1; /*0x48cf07*/
    ScreenSaver::Process(v7, v11); /*0x48cf09*/
    if ( (dword_A8D5F8 & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&dword_A8D58C); /*0x48cf1c*/
    v8 = *(unsigned int *)&dword_A8B238; /*0x48cf21*/
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
      Network::ShutdownInterface((Network *)v11); /*0x48cf3e*/
    }
    v8 = *(unsigned int *)&dword_A8B238; /*0x48cf53*/
LABEL_27:
    if ( v8 == 3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v8 == 4 || v8 == 2 || v8 == 1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings((char *)&dword_A8B238); /*0x48cf79*/
    }
    if ( (dword_A8D5F8 & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v9 = dword_A8D5F8; /*0x48cf87*/
      (v9) = ((v9) & ~0xFF) | ((dword_A8D5F8 & 0xFD) & 0xFF); /*0x48cf92*/
      *(unsigned int *)&dword_A8B238 = 0; /*0x48cf94*/
      dword_A8D5F8 = v9; /*0x48cf9a*/
      (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(v11); /*0x48cfa4*/
  }
  if ( dword_887640 ) /*0x48cfbf*/
    LOBYTE(inited) = (*(char (**)(MouseClass *))(dword_887640->HandleClick_ph + 20))(dword_887640); /*0x48cfc3*/
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
      fprintf(result, "Frames: %d\n", *(unsigned int *)&MEMORY[0xA8EB00].?[416]);
      if ( *(unsigned int *)&g_MissionQueueFrame.waypoints[290] ) /*0x48e0f8*/
        v3 = *(unsigned int *)&g_MissionQueueFrame.waypoints[286] / *(unsigned int *)&g_MissionQueueFrame.waypoints[290]; /*0x48e101*/
      else
        v3 = 0; /*0x48e105*/
      fprintf(v2, "Average FPS: %d\n", v3);
      fprintf(v2, "Max MaxAhead: %d\n", dword_A8B568);
      fprintf(v2, "Latency setting: %d\n", MEMORY[0xA8DB9C]);
      fprintf(v2, "Game speed setting: %d\n", MEMORY[0xA8EB00].vfptr[24]);
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
              (unsigned __int8)*v5,
              BYTE1(*v5),
              (unsigned __int8)BYTE2(*v5),
              HIBYTE(*v5));
        }
      }
      v6 = &unk_A8B5C4; /*0x48e1ad*/
      do
      {
        if ( *((unsigned char *)v6 - 80) )
        {
          fprintf(v2, "\nName: %s\n", (const char *)v6 - 80);
          v7 = Network::FormatAddress((Network *)(v6 + 3), 0); /*0x48e1d4*/
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
  double *v3; // eax
  int v4; // eax

  if ( !BYTE2(dword_A8B230[374].vfptr3) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = (double *)*(&dword_B0F4EC->vfptr + BuildingByTiberiumType); /*0x483735*/
  if ( this->M284 || *((unsigned __int8 *)this + 286) >= *((unsigned int *)v3 + 57) - 1 || v3[22] < 0.00001 ) /*0x483766*/
    return 0; /*0x48377c*/
  v4 = FindBuildingByTiberiumType(this->ambientSoundController[2]); /*0x48376b*/
  return Crate::FindPlacement((int)this, v4, 1); /*0x48377a*/

}
} // namespace gamemd

// 0x484A80
namespace gamemd {
int sub_484A80(int a1)
{
  ++a1->u32_194; /*0x484a84*/
  return a1; /*0x484a8a*/
}
} // namespace gamemd

// 0x484F10
char sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}
// 0x484F50
namespace gamemd {
int E4Recv_484F50::sub_484F50()
{
  unsigned char v8[40]; // [esp+4h] [ebp-28h] BYREF

  int v2 = 0; // ecx /*0x484f56*/
  int result = this->M228; // eax /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    unsigned int *v4 = v8; // edx /*0x484f62*/
    do /*0x484f76*/
    {
      if ( v2 >= 10 ) /*0x484f69*/
        break; /*0x484f69*/
      *v4 = result; /*0x484f6b*/
      result = result->u32_30; /*0x484f6d*/
      ++v2; /*0x484f70*/
      ++v4; /*0x484f71*/
    }
    while ( result ); /*0x484f76*/
  }
  if ( v2 > 0 ) /*0x484f7a*/
  {
    v8 = v8; /*0x484f7f*/
    v2 = v2; /*0x484f83*/
    do /*0x484fd8*/
    {
      unsigned int *v7; // esi
      v7 = (unsigned int *)*v8; /*0x484f85*/
      (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*v8 + 460))(*v8, 0); /*0x484f8d*/
      if ( (*(int (**)(unsigned int *))(*v7 + 44))(v7) == 1 /*0x484fa9*/
        || (result = (*(int (**)(unsigned int *))(*v7 + 44))(v7), result == 2) )
      {
        if ( !v7[413] ) /*0x484fab*/
          sub_7DC720(-2147467261); /*0x484fba*/
        result = (*(int (__stdcall **)(unsigned int, unsigned int))(*(unsigned int *)v7[413] + 124))( /*0x484fd1*/
                   v7[413],
                   *((uint8_t *)&this->estimatedHealth4));
      }
      ++v8; /*0x484fd4*/
      --v2; /*0x484fd7*/
    }
    while ( v2 ); /*0x484fd8*/
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

  unsigned int *pVal; // eax

  int v3 = 1 << a2; // ebx /*0x486da4*/
  if ( (this->M220 & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  int v5 = 0; // esi /*0x486db5*/
  int v6 = 0; // ebp /*0x486db7*/
  bool v7 = 1; // cf /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      int v9 = v5 & 7; // ecx /*0x486dc7*/
      __int16 v10[2]; // [esp+8h] [ebp-4h] BYREF
      *(unsigned int *)v10 = this->occupant; /*0x486dca*/
      int v11; // [esp+10h] [ebp+4h]
      LOWORD(v11) = LOWORD(g_DDrawSurfaceManager.scenario[v9 + 82]) + v10[0]; /*0x486dee*/
      HIWORD(v11) = v10[1] + HIWORD(g_DDrawSurfaceManager.scenario[v9 + 82]); /*0x486df3*/
      *(unsigned int *)v10 = v11; /*0x486e02*/
      pVal = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v10); /*0x486e06*/
    }
    else
    {
      pVal = &this->AbstractClass; /*0x486dbe*/
    }
    if ( (v3 & pVal->u32_DC) != 0 ) /*0x486e11*/
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
  v1 = ((__int16)this->occupant << 8) + 128; /*0x4879cf*/
  int v2; // edi
  v2 = ((__int16)HIWORD(this->occupant) << 8) + 128; /*0x4879d1*/
  unsigned int v5[2]; // [esp+8h] [ebp-14h] BYREF
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  int inited; // eax
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  int v6[3]; // [esp+10h] [ebp-Ch] BYREF
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
  return this->M248; /*0x487c86*/
}
} // namespace gamemd

// 0x487EA0
namespace gamemd {
unsigned int * Coord_Neighbor(unsigned int * a1, unsigned short * a2, char a3)
{

  unsigned int *result = a1; // eax /*0x487ea0*/
  int v4 = a3 & 7; // ecx /*0x487ea7*/
  int v5; // [esp+8h] [ebp+4h]
  (*((unsigned short *)&(v5))) = *a2 + (*((unsigned short *)&(dword_89F688[v4]))); /*0x487ec4*/
  (*(((unsigned short *)&(v5)) + 1)) = a2[1] + (*(((unsigned short *)&(dword_89F688[v4])) + 1)); /*0x487eca*/
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
    GadgetClass::Show((GadgetClass *)this); /*0x48823d*/
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

  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x4882ad*/
  this->M372 = 0; /*0x4882b2*/
  /* X11: vtable install elided (implicit via CheckListClass virtuals 0x4882b9) */
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

  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x48878d*/
  this->M376 = 0; /*0x488799*/
  this->M380 = 0; /*0x48879f*/
  this->M384 = 1; /*0x4887a5*/
  this->M385 = 0; /*0x4887ab*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_DynamicVectorClass) */  /*0x4887b1*/
  this->M392 = 10; /*0x4887bb*/
  this->M388 = 0; /*0x4887c5*/
  this->M400 = 0; /*0x4887cb*/
  this->M396 = 1; /*0x4887d1*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_ColorListClass) */  /*0x4887d7*/
  return this->vfptr; /*0x4887df*/

}
} // namespace gamemd

// 0x4887F0
namespace gamemd {
int E4Recv_4887F0::sub_4887F0()
{

  int v2; // eax
  char *v3; // esi
  void *v4; // eax

  v2 = this->M372; /*0x4887f5*/
  v3 = &this->M372; /*0x4887fb*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_ColorListClass) */  /*0x488803*/
  (*(void (**)(char *))(v2 + 12))(&this->M372); /*0x488809*/
  this->M400 = 0; /*0x48880e*/
  v4 = (void *)*((unsigned int *)v3 + 1); /*0x488814*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x488819*/
  if ( v4 && v3[13] ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    *((unsigned int *)v3 + 1) = 0; /*0x48882f*/
  }
  v3[13] = 0; /*0x488834*/
  *((unsigned int *)v3 + 2) = 0; /*0x488837*/
  return ListClass::Destruct((ListClass *)this); /*0x48883f*/

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
void sub_488FC0()
{
  dbl_89E868 = dbl_89E818 / 60.0; /*0x488fcc*/
}
// 0x488FE0
void sub_488FE0()
{
  dbl_89E850 = 1.0 / dbl_89E868; /*0x488fec*/
}
// 0x489000
void sub_489000()
{
  dbl_89E848 = 0.0174532925199433 * 45.0; /*0x48900c*/
}
// 0x489020
void sub_489020()
{
  dbl_89E820 = 0.0174532925199433 * 60.0; /*0x48902c*/
}
// 0x489040
void sub_489040()
{
  dbl_89E7F8 = 0.0174532925199433 * 90.0; /*0x48904c*/
}
// 0x489060
long long sub_489060()
{

  double v0; // st7
  v0 = Math::Sin(dbl_89E7F8 - dbl_89E820); /*0x489072*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_89E818 * 0.5); /*0x489086*/
  dword_89E870 = result; /*0x48908b*/
  return result; /*0x489090*/
}
// 0x4890A0
void sub_4890A0()
{
  dbl_89E828 = Math::ArcTan((double)dword_89E870 * 0.00390625); /*0x4890b7*/
}
// 0x4890D0
void sub_4890D0()
{
  dbl_89E840 = Math::ArcTan((double)(2 * dword_89E870) / dbl_89E818); /*0x4890f2*/
}
// 0x489100
long long sub_489100()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_89E870) + 0.5); /*0x48911b*/
  dword_89E864 = result; /*0x489120*/
  return result; /*0x489126*/
}
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
void CellChainReact()
{
  ; /*0x489270*/
}
// 0x48A4F0
int GetWarheadVersusMultiplier(int aP0, int aP1, int aP2, BulletClass * aP3)
{

  int v4 = aP0; // edi /*0x48a4f3*/
  if ( !aP0 || !aP1 ) /*0x48a501*/
    return 0; /*0x48a501*/
  if ( aP2 == 2 /*0x48a54f*/
    && *(unsigned char *)(aP1 + 333)
    && (*((unsigned int *)Coord::To_Cell(&dword_87F7E8, aP3) + 80) & 0x100) == 0
    && aP3[2] < Cell::GetGroundHeight(aP3) + 2 * dword_89E870 )
  {
    int v6 = dword_8871E0->u32_BD0; // ecx /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      int v7 = 35 * v6 - 1; // ecx /*0x48a56e*/
      if ( v4 < v7 ) /*0x48a574*/
        v7 = v4; /*0x48a576*/
      return *(unsigned int *)(dword_8871E0->u32_BC4 + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( aP1 == dword_8871E0->RadLevelMax ) /*0x48a5a5*/
    return dword_8871E0->q2F4; /*0x48a5b0*/
  int v9; // eax
  v9 = *(unsigned int *)(aP1 + 276); /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( *(unsigned char *)(aP1 + 340) ) /*0x48a5bd*/
    return *(unsigned int *)(*(unsigned int *)(aP1 + 264) + 4 * Random::Range(&dword_A8B230[14].NeedsSaveOrLink, 0, v9 - 1)); /*0x48a5e4*/
  int v10 = 25 * v9 - 1; // eax /*0x48a5ee*/
  if ( v4 >= v10 ) /*0x48a5f4*/
    v4 = v10; /*0x48a5f6*/
  return *(unsigned int *)(*(unsigned int *)(aP1 + 264) + 4 * (v4 / 25)); /*0x48a57d*/
}
// 0x48A8D0
namespace gamemd {
char Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, unsigned int * a6)
{
  int result; // eax

  double v6 = a5; // kr00_8 /*0x48a8df*/
  if ( SolveMathTrajectory(a1, a2, a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
  {
    if ( a1 ) /*0x48a907*/
    {
      (*((unsigned short *)&(a4))) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
      result = (int)a6; /*0x48a923*/
      *a6 = a4; /*0x48a92d*/
      (*((unsigned char *)&(result))) = 1; /*0x48a930*/
    }
    else
    {
      int v12[2]; // [esp+10h] [ebp-8h] BYREF
      SolveMathTrajectory(0, a2, a3 + 1, a4, v6, (int)v12); /*0x48a94f*/
      char v11; // c0
      if ( v11 ) /*0x48a965*/
      {
        (*((unsigned short *)&(a4))) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
        result = a4; /*0x48a983*/
      }
      else
      {
        (*((unsigned short *)&(result))) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9a1*/
        (*((unsigned short *)&(a4))) = result; /*0x48a9aa*/
      }
      *a6 = a4; /*0x48a989*/
      (*((unsigned char *)&(result))) = 1; /*0x48a98c*/
    }
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x48a9c4*/
  }
  return result; /*0x48a92b*/
}
} // namespace gamemd

// 0x48ABC0
namespace gamemd {
bool globalHelper_08ABC0(IUnknown * aP0, int a2, int a3, double a4)
{

  double v4; // st7
  v4 = (double)aP0; /*0x48abd1*/
  double v5; // st6
  v5 = (double)a2; /*0x48abd5*/
  if ( v5 == 0.0 ) /*0x48abe6*/
    v5 = 0.001; /*0x48abea*/
  double v8; // [esp+8h] [ebp-20h]
  v8 = (double)a3; /*0x48abf3*/
  double v7; // [esp+0h] [ebp-28h]
  v7 = v4 * v4; /*0x48abfb*/
  double v9; // [esp+10h] [ebp-18h]
  v9 = v5 * v5; /*0x48ac03*/
  double v11; // [esp+18h] [ebp-10h]
  v11 = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9; /*0x48ac2c*/
  if ( v11 < 0.0 ) /*0x48ac3b*/
    return 0; /*0x48ac3d*/
  double v12; // [esp+20h] [ebp-8h]
  v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0; /*0x48ac5b*/
  if ( v12 == 0.0 ) /*0x48ac6a*/
    return 0; /*0x48ac6c*/
  double v10; // [esp+10h] [ebp-18h]
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
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x48b088) */
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = (void *)a3; /*0x48b098*/
      return &this->vtable0; /*0x48b09e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->IsAllocated = 1; /*0x48b0b0*/
  }
  return &this->vtable0; /*0x48b09d*/

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


  int v2 = 0; // ebx /*0x48b1f4*/
  int v3 = *&this->__pad_004; // eax /*0x48b1f7*/
  /* X11: vtable install elided (implicit via CommBufferClass virtuals 0x48b1fa) */
  if ( v3 > 0 ) /*0x48b202*/
  {
    int v4 = 0; // edi /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x24 + v4 + 20)); /*0x48b20e*/
      int CommBufferClass_field_0x24; // edx
      CommBufferClass_field_0x24 = this->CommBufferClass_field_0x24; /*0x48b213*/
      if ( *(unsigned int *)(CommBufferClass_field_0x24 + v4 + 28) ) /*0x48b219*/
        __3_YAXPAX_Z(*(void **)(CommBufferClass_field_0x24 + v4 + 28)); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 36; /*0x48b22e*/
    }
    while ( v2 < *&this->__pad_004 ); /*0x48b233*/
  }
  int v6 = 0; // ebx /*0x48b238*/
  if ( this->CommBufferClass_field_0x8 > 0 ) /*0x48b23c*/
  {
    int v7 = 0; // edi /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->CommBufferClass_field_0x34 + v7 + 12)); /*0x48b248*/
      int CommBufferClass_field_0x34; // edx
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
  __3_YAXPAX_Z(*&this->ptr_30); /*0x48b285*/
  __3_YAXPAX_Z(this->u32_346)); /*0x48b28e*/

}
} // namespace gamemd

// 0x48BB00
namespace gamemd {
ObjectClass * E4Recv_48BB00::sub_48BB00(void * Block, char a2)
{
  sub_48B1F0((CommBufferClass *)Block); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    operator delete((Block)); /*0x48bb10*/
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

  (((unsigned char *)&(a2))[1]) &= ~8u; /*0x48bb40*/
  int v2 = a2; // eax /*0x48bb43*/
  (((unsigned char *)&(v2))[1]) = (((unsigned char *)&(a2))[1]) & 0xE8; /*0x48bb45*/
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
  v0 = Math::Sin(dbl_89E898 - dbl_89E8C0); /*0x48bd52*/
  int64_t result; // rax
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
  v0 = Math::Sin(dbl_89E918 - dbl_89E958); /*0x48c792*/
  int64_t result; // rax
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
  v0 = Math::Sin(dbl_89E9B8 - dbl_89E9E0); /*0x48e372*/
  int64_t result; // rax
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
  dword_89ECF8 = (int)&vt_DynamicVectorClass; /*0x48e6bd*/
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
    dword_89ECF8 = (int)&vt_VectorClass; /*0x48e6ee*/
    byte_89ED10 |= 1u; /*0x48e701*/
    if ( dword_89ECFC ) /*0x48e707*/
    {
      if ( byte_89ED05 ) /*0x48e711*/
      {
        operator delete((void *)(dword_89ECFC)); /*0x48e714*/
        dword_89ECFC = 0; /*0x48e71c*/
      }
    }
    byte_89ED05 = 0; /*0x48e726*/
    dword_89ED00 = 0; /*0x48e72d*/
  }
}
} // namespace gamemd
