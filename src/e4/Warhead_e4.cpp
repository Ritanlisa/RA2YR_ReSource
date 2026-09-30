// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x41D7E0
namespace gamemd {
int Warhead::GetWarheadSound(int a2)
{

  int v3; // eax

  if ( VeterancyStruct::IsElite((float *)(*((unsigned int *)this + 19) + 336)) ) /*0x41d7ec*/
    v3 = *((unsigned int *)this + 18); /*0x41d7f5*/
  else
    v3 = *((unsigned int *)this + 17); /*0x41d7fa*/
  return !*((unsigned char *)this + 60) && v3 + *((unsigned int *)this + 16) <= (int)g_abs_A8ED84 || a2 != *((unsigned int *)this + 20); /*0x41d814*/

}
} // namespace gamemd
// 0x452820
namespace gamemd {
int Warhead::RemoveFromDamageList(int a2)
{

  unsigned int *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = (unsigned int *)this + 411; /*0x452827*/
  v3 = (*(int (**)(unsigned int *, int *))(*((unsigned int *)this + 411) + 16))((unsigned int *)this + 411, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = v2[4]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( v2[4] = v5; v3 < v2[4]; *(unsigned int *)(v2[1] + 4 * v3 - 4) = *(unsigned int *)(v2[1] + 4 * v3) ) /*0x452849*/
        ++v3; /*0x45284e*/
    }
  }
  v6 = v2[2]; /*0x45285d*/
  if ( v2[4] < v6 /*0x452887*/
    || ((IDA_LOBYTE(v7) = *((unsigned char *)v2 + 13), (unsigned char)v7) || !v6)
    && (v7 = v2[5], v7 > 0)
    && (IDA_LOBYTE(v7) = (*(int (**)(unsigned int *, int, unsigned int))(*v2 + 8))(v2, v6 + v7, 0), (unsigned char)v7) )
  {
    v7 = v2[4]; /*0x452889*/
    v8 = v2[1]; /*0x45288c*/
    v2[4] = v7 + 1; /*0x452892*/
    *(unsigned int *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/

}
} // namespace gamemd
// 0x4690B0
namespace gamemd {
int Warhead::ApplyDamage(ObjectClass * aP1)
{
    unsigned int v124 = 0;  /* G37 hoist */
    unsigned int v9 = 0;  /* G37 hoist */

  int v3; // eax
  IUnknown *v4; // ecx
  int v5; // eax
  IUnknown *v6; // ecx
  int v7; // ecx
  InfantryClass *v8; // edi
  Concurrency::details::SchedulerBase *v9; // ebx
  unsigned int *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  unsigned int *v11; // eax
  RadSiteClass *v12; // edi
  unsigned char *v13; // eax
  TechnoClass *v14; // eax
  int v15; // eax
  int v16; // edi
  bool v17; // bl
  void **v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  TechnoClass *v22; // ecx
  TechnoClass *v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int *v27; // edi
  TechnoClass *v28; // eax
  int v29; // ecx
  int v30; // edi
  unsigned int *v31; // eax
  ObjectClass *Member; // ebx
  int v33; // edi
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  TechnoClass *v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // ecx
  TechnoClass *v43; // ecx
  int v44; // eax
  int owningHouseIndex0; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int *v49; // edi
  double v50; // st7
  unsigned int *v51; // edx
  int v52; // ecx
  int v53; // edx
  double v54; // st7
  float v55; // edx
  int v56; // ebx
  int v57; // eax
  int v58; // edx
  unsigned char *v59; // eax
  int v60; // eax
  ObjectClass *v61; // eax
  TechnoClass *v62; // ecx
  TechnoClass *v63; // eax
  void *focus; // ecx
  int Instance; // eax
  char v66; // cl
  int v67; // ecx
  int v68; // edx
  RadSiteClass *v69; // eax
  int v70; // ebx
  int v71; // ecx
  int v72; // eax
  unsigned int *v73; // edi
  int v74; // edi
  int v75; // ecx
  int v76; // edx
  CoordStruct *WarheadVersusMultiplier; // ebx
  unsigned char *v78; // edx
  int v79; // eax
  AnimClass *v81; // edi
  void *eax160; // eax
  TechnoClass *v83; // eax
  int ecx162; // ecx
  int v84; // ecx
  int v85; // eax
  TechnoTypeClass *v87; // ebx
  int eax166; // eax
  TechnoClass *v88; // edx
  int v89; // edx
  VoxelAnimClass *v91; // ebx
  int *edi173; // edi
  int *v92; // eax
  AnimClass *v94; // edi
  unsigned int *eax181; // eax
  unsigned int v95; // ecx
  unsigned int v96; // edx
  unsigned int v97; // eax
  int v98; // eax
  int v99; // edi
  int v100; // edx
  unsigned int v101; // ebx
  TechnoClass *v102; // ecx
  TechnoClass *v104; // edx
  TechnoTypeClass *v105; // ebx
  char al187; // al
  int16_t v106; // cx
  double v107; // st7
  double v108; // st7
  int v109; // edx
  int v110; // eax
  int v111; // edx
  InfantryClass *v113; // ebx
  TechnoTypeClass *v114; // esi
  char al192; // al
  int16_t v115; // cx
  ObjectClass *v117; // edi
  unsigned int ebx192; // ebx
  double v118; // st7
  double v119; // st7
  int v120; // ecx
  int v121; // edx
  int v122; // eax
  CoordStruct *v124; // edi
  AnimClass *v125; // esi
  void *eax197; // eax
  float v127; // [esp+0h] [ebp-A8h]
  int64_t Z; // [esp+0h] [ebp-A8h]
  int64_t v129; // [esp+0h] [ebp-A8h]
  char v130; // [esp+17h] [ebp-91h]
  double v131; // [esp+18h] [ebp-90h]
  AbstractClass *NeighbourContent; // [esp+18h] [ebp-90h]
  double v133; // [esp+18h] [ebp-90h]
  double v134; // [esp+18h] [ebp-90h]
  AbstractClass *v138; // [esp+18h] [ebp-90h]
  double v136; // [esp+18h] [ebp-90h]
  double v137; // [esp+18h] [ebp-90h]
  double var90e; // [esp+18h] [ebp-90h]
  TechnoClass *v139; // [esp+20h] [ebp-88h] BYREF
  int v140; // [esp+24h] [ebp-84h]
  double v141; // [esp+28h] [ebp-80h] BYREF
  double v142; // [esp+30h] [ebp-78h]
  char v143; // [esp+3Bh] [ebp-6Dh]
  int v144; // [esp+3Ch] [ebp-6Ch]
  IUnknown *aP3[2]; // [esp+40h] [ebp-68h]
  double v146; // [esp+48h] [ebp-60h]
  LPVOID ppv[2]; // [esp+50h] [ebp-58h] BYREF
  TechnoClass *aP4[2]; // [esp+58h] [ebp-50h] BYREF
  int v149; // [esp+60h] [ebp-48h]
  InfantryClass *v153; // [esp+68h] [ebp-40h] BYREF
  CoordStruct aP2; // [esp+6Ch] [ebp-3Ch] BYREF
  TechnoTypeClass *v152; // [esp+78h] [ebp-30h]
  double var2C; // [esp+7Ch] [ebp-2Ch] BYREF
  int64_t v154; // [esp+84h] [ebp-24h]
  InfantryClass *aP5; // [esp+8Ch] [ebp-1Ch]
  double v156; // [esp+90h] [ebp-18h] BYREF
  double v157; // [esp+98h] [ebp-10h]
  double v158; // [esp+A0h] [ebp-8h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  v144 = 1;
  v130 = 0;
  v3 = *((unsigned int *)this + 74);
  v4 = *(IUnknown **)(v3 + 380);
  if ( v4 || *(unsigned int *)(v3 + 384) )
    g_abs_87F7EC = (TechnoTypeClass *)Random::Range(
                                            &g_abs_87F8E4,
                                            v4,
                                            *(IUnknown **)(v3 + 384));
  v5 = *((unsigned int *)this + 74);
  v6 = *(IUnknown **)(v5 + 388);
  if ( v6 || *(unsigned int *)(v5 + 392) )
    g_abs_87F7F0 = (TechnoTypeClass *)Random::Range(
                                            &g_abs_87F8E4,
                                            v6,
                                            *(IUnknown **)(v5 + 392));
  v7 = *((unsigned int *)this + 76);
  if ( v7 )
  {
    v153 = *(InfantryClass **)(v7 + 344);
    v8 = v153;
    if ( (int)v153 > 0 )
    {
      IDA_LOWORD(v139) = *(unsigned int *)aP1->__pad_0 / 256;
      IDA_HIWORD(v139) = *(unsigned int *)&aP1->__pad_0[4] / 256;
      v140 = Math::RoundToInt(*(float *)(*(unsigned int *)(v7 + 172) + 292));
      v9 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v139);
      NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (unsigned int *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v9);
      if ( NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ )
      {
        RadSiteClass::Add(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ, (int)v8);
      }
      else
      {
        v11 = (unsigned int *)RA2_OPNEW(0x74u);
        if ( v11 )
          v12 = (RadSiteClass *)RadSiteClass::RadSiteClass(v11);
        else
          v12 = 0;
        RadSiteClass::SetBaseCell(v12, &v139);
        RadSiteClass::SetSpread(v12, v140);
        RadSiteClass::SetRadLevel(v12, (int)v153);
        Warhead::ProcessDamageArea((int)v12);
        TerrainClass::SetFieldF8(v9, (int)v12);
      }
    }
  }
  v13 = (unsigned char *)*((unsigned int *)this + 74);
  if ( v13[341] )
  {
    v14 = (TechnoClass *)*((unsigned int *)this + 44);
    if ( v14 && v14->rockerLinkedUnit )
    {
      v15 = *((unsigned int *)this + 67);
      if ( v15 )
        v16 = (*(unsigned char *)(v15 + 20) & 2) != 0 ? v15 : 0;
      else
        v16 = 0;
      v17 = v15 && (*(unsigned char *)(v15 + 20) & 1) != 0 && (uint8_t)House::IsHumanPlayer(*(void **)(v15 + 540));
      if ( v16 )
      {
        if ( *(unsigned char *)(v16 + 144) )
        {
          v18 = *(void ***)(v16 + 52);
          if ( v18 )
          {
            TeamClass::Update_0(v18, 6, (AbstractClass *)v16, dword_89DDF0, 0, *((AbstractClass **)this + 44));
            TeamClass::Update_0(
              *(void ***)(v16 + 52),
              44,
              (AbstractClass *)v16,
              dword_89DDF0,
              0,
              *((AbstractClass **)this + 44));
          }
        }
      }
      if ( CaptureManagerClass::CaptureUnit(
             *(unsigned int *)(*((unsigned int *)this + 44) + 700),
             (int)&savedregs,
             *((unsigned int *)this + 67))
        && *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 532) != -1
        && ((uint8_t)House::IsHumanPlayer(*(void **)(*((unsigned int *)this + 44) + 540)) || v17) )
      {
        v19 = v16 + 156;
        v141 = *(double *)v19;
        IDA_LODWORD(v142) = *(unsigned int *)(v19 + 8);
        StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 532), (int)&v141, 0);
      }
    }
  }
  else if ( v13[343] )
  {
    v20 = *((unsigned int *)this + 67);
    if ( v20 )
      v20 = (*(unsigned char *)(v20 + 20) & 1) != 0 ? v20 : 0;
    ((AbstractClass *)(&g_abs_87F5D8))->Initialize(*((TechnoClass **)this + 44), (TechnoClass *)v20);
  }
  else if ( v13[344] )
  {
    v21 = *((unsigned int *)this + 67);
    if ( v21 )
    {
      if ( (*(int (**)(int))(*(unsigned int *)v21 + 44))(v21) == 6 )
      {
        v22 = (TechnoClass *)*((unsigned int *)this + 44);
        if ( v22 )
        {
          if ( (*(int (**)(TechnoClass *))(*(unsigned int *)v22->__pad_0 + 44))(v22) == 15 )
            Warhead::RemoveFromDamageList(*((unsigned int **)this + 67), *((unsigned int *)this + 44));
        }
      }
    }
  }
  else if ( v13[345] )
  {
    v23 = (TechnoClass *)*((unsigned int *)this + 44);
    if ( v23 )
    {
      v24 = *((unsigned int *)this + 67);
      if ( v24 )
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], (*(unsigned char *)(v24 + 20) & 4) != 0 ? (unsigned int *)v24 : 0);
      else
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], 0);
    }
  }
  else if ( v13[346] )
  {
    if ( *((unsigned int *)this + 44) )
    {
      v25 = *((unsigned int *)this + 67);
      if ( v25 )
      {
        if ( (*(unsigned char *)(v25 + 20) & 4) == 0
          || (v26 = (*(unsigned char *)(v25 + 20) & 4) != 0 ? v25 : 0,
              (*(int (**)(int))(*(unsigned int *)v26 + 120))(v26) == 2) )
        {
          v27 = (unsigned int *)*((unsigned int *)this + 67);
          if ( v27 )
          {
            if ( (v27[5] & 1) != 0 )
            {
              if ( v27[185] && (*(int (**)(unsigned int))(*v27 + 44))(*((unsigned int *)this + 67)) == 1 )
              {
                v27 = (unsigned int *)v27[185];
                (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)this + 44) + 968))(*((unsigned int *)this + 44), v27);
              }
            }
            else
            {
              v27 = 0;
            }
          }
          OreManagerClass::AssignMinerToRefinery(*(unsigned int *)(*((unsigned int *)this + 44) + 628), v27);
        }
      }
    }
  }
  else if ( v13[347] )
  {
    v28 = (TechnoClass *)*((unsigned int *)this + 44);
    if ( v28 )
    {
      v29 = *((unsigned int *)this + 67);
      if ( *(unsigned int *)&v28->isBerserk != v29
        && !v28->isBerserk_duration_left
        && (((unsigned int)((unsigned int)(v28)->abstractFlags)& 4) == 0
         || !*(((unsigned int)((unsigned int)(v28)->abstractFlags)& 4) != 0 ? (char *)&v28[1].targetingTimer[2] + 1 : (unsigned char *)1709)) )
      {
        v143 = 0;
        if ( v29 && (*(int (**)(int))(*(unsigned int *)v29 + 44))(v29) == 1 )
        {
          v30 = *((unsigned int *)this + 67);
          v31 = v30
              ? ((*(int (**)(unsigned int))(*(unsigned int *)v30 + 44))(*((unsigned int *)this + 67)) == 1
               ? (unsigned int *)v30
               : 0)
              : 0;
          Member = (ObjectClass *)Team::GetMember(v31, 0);
          if ( Member
            && (*(int (**)(ObjectClass *))(*(unsigned int *)Member->__pad_0 + 44))(Member) == 6
            && *(unsigned char *)(Member[7].health + 5821) )
          {
            v33 = *((unsigned int *)this + 67);
            v34 = v33
                ? ((*(int (**)(unsigned int))(*(unsigned int *)v33 + 44))(*((unsigned int *)this + 67)) == 1
                 ? v33
                 : 0)
                : 0;
            v35 = v34 + 156;
            v141 = *(double *)v35;
            IDA_LODWORD(v142) = *(unsigned int *)(v35 + 8);
            v36 = Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&v141);
            if ( Cell::IsBridge(v36) == (unsigned int *)Member )
              v143 = 1;
          }
        }
        v37 = (TechnoClass *)*((unsigned int *)this + 44);
        if ( *(unsigned int *)&v37->isBerserk )
          TechnoClass::EjectPassengers((int *)v37->__pad_0, 0);
        v38 = *((unsigned int *)this + 67);
        if ( v38 )
        {
          if ( !v143 )
          {
            if ( (*(unsigned char *)(v38 + 20) & 4) == 0
              || (v39 = (*(unsigned char *)(v38 + 20) & 4) != 0 ? v38 : 0,
                  (*(int (**)(int))(*(unsigned int *)v39 + 120))(v39) == 2) )
            {
              v40 = *((unsigned int *)this + 67);
              if ( v40
                && (*(unsigned char *)(v40 + 20) & 4) != 0
                && !(*(uint8_t (**)(unsigned int))(*(unsigned int *)v40 + 352))(*((unsigned int *)this + 67))
                && ((v41 = *((unsigned int *)this + 67)) != 0 && (*(int (**)(int))(*(unsigned int *)v41 + 44))(v41) == 1
                 || (v42 = *((unsigned int *)this + 67)) != 0 && (*(int (**)(int))(*(unsigned int *)v42 + 44))(v42) == 2)
                && !*(unsigned char *)(v40 + 1709)
                && (double)*((int *)this + 27) > *(double *)((*(int (**)(int))(*(unsigned int *)v40 + 132))(v40)
                                                           + 896) )
              {
                FootClass::FootClass_ImbueLocomotor(
                  *((int **)this + 44),
                  (int)&savedregs,
                  v40,
                  (unsigned int *)v40,
                  *(IID *)(*((unsigned int *)this + 74) + 348),
                  *(unsigned int *)(*((unsigned int *)this + 74) + 360));
              }
            }
          }
        }
      }
    }
  }
  else if ( v13[364] )
  {
    v43 = (TechnoClass *)*((unsigned int *)this + 44);
    if ( v43 )
    {
      v44 = *((unsigned int *)this + 67);
      if ( v44 )
      {
        if ( (*(unsigned char *)(v44 + 20) & 1) != 0 )
        {
          owningHouseIndex0 = v43->owningHouseIndex0;
          if ( owningHouseIndex0 )
          {
            if ( Warhead::GetWarheadSound(owningHouseIndex0, (*(unsigned char *)(v44 + 20) & 1) != 0 ? v44 : 0) )
            {
              v46 = *((unsigned int *)this + 67);
              if ( v46 )
                v46 = (*(unsigned char *)(v46 + 20) & 1) != 0 ? v46 : 0;
              AirstrikeClass::StartMission(*(unsigned int *)(*((unsigned int *)this + 44) + 660), (int *)v46);
            }
          }
        }
      }
    }
  }
  else if ( v13[335]
         && (v47 = *((unsigned int *)this + 67)) != 0
         && (*(int (**)(int))(*(unsigned int *)v47 + 44))(v47) == 1 )
  {
    v48 = *((unsigned int *)this + 67);
    if ( v48 )
      v49 = (*(unsigned char *)(v48 + 20) & 1) != 0 ? (int *)v48 : 0;
    else
      v49 = 0;
    if ( *((unsigned int *)this + 44) && v49 && !(*(uint8_t (**)(int *))(*v49 + 352))(v49) )
    {
      v140 = (*((unsigned int *)this + 27) * *((unsigned int *)this + 84)) >> 8;
      v50 = (double)v140 * *(float *)(*(unsigned int *)&g_abs_87F8E4 + 6324) / dbl_81AEF8;
      if ( v50 >= 4.0 )
        v131 = 4.0;
      else
        v131 = v50;
      aP4[0] = (TechnoClass *)v49[39];
      aP4[1] = (TechnoClass *)v49[40];
      v51 = (unsigned int *)(*((unsigned int *)this + 44) + 156);
      v149 = v49[41];
      v52 = v51[1];
      v140 = *v51 - (unsigned int)aP4[0];
      v53 = v51[2] - v149;
      *(float *)aP3 = (float)v140;
      v140 = v53;
      *(float *)&aP3[1] = (float)(v52 - (unsigned int)aP4[1]);
      *(float *)&v146 = (float)v53;
      v54 = Math::Sqrt(*(float *)aP3 * *(float *)aP3 + *(float *)&aP3[1] * *(float *)&aP3[1] + *(float *)&v146
                                                                                             * *(float *)&v146);
      if ( v54 == 0.0 )
      {
        v55 = *(float *)&v146;
        var2C = *(double *)aP3;
      }
      else
      {
        *(float *)&v141 = *(float *)aP3 / v54;
        *((float *)&v141 + 1) = *(float *)&aP3[1] / v54;
        var2C = v141;
        *(float *)&v142 = *(float *)&v146 / v54;
        v55 = *(float *)&v142;
      }
      *(float *)&v154 = v55;
      *((float *)&v141 + 1) = *((float *)&var2C + 1) * 10.0;
      *(float *)&v142 = v55 * 10.0;
      v56 = Math::RoundToInt(*(float *)&var2C * 10.0);
      IDA_HIDWORD(var2C) = Math::RoundToInt(*((float *)&v141 + 1));
      v57 = Math::RoundToInt(*(float *)&v142);
      aP4[0] = (TechnoClass *)((char *)aP4[0] + v56);
      aP4[1] = (TechnoClass *)((char *)aP4[1] + IDA_HIDWORD(var2C));
      v58 = *v49;
      v149 += v57;
      v127 = v131;
      (*(void (**)(int *, TechnoClass **, unsigned int, int))(v58 + 984))(v49, aP4, IDA_LODWORD(v127), 1);
      v49[170] = *((unsigned int *)this + 44);
      *(unsigned int *)(*((unsigned int *)this + 44) + 680) = v49;
    }
  }
  else
  {
    v59 = (unsigned char *)*((unsigned int *)this + 74);
    if ( v59[366] )
    {
      v60 = *((unsigned int *)this + 67);
      if ( v60 )
      {
        if ( (*(unsigned char *)(v60 + 20) & 2) != 0 )
        {
          v61 = *(ObjectClass **)(v60 + 56);
          if ( v61 )
            ObjectClass::CleanupAudioAndRefs((int)v61);
        }
      }
    }
    else if ( v59[373] )
    {
      v62 = (TechnoClass *)*((unsigned int *)this + 44);
      if ( v62 )
        (*(void (**)(TechnoClass *, unsigned int))(*(unsigned int *)v62->__pad_0 + 1132))(v62, *((unsigned int *)this + 67));
    }
    else if ( v59[374] )
    {
      SuperWeapon::CreateNukePayload((int *)this);
    }
    else
    {
      if ( *(unsigned int *)(*((unsigned int *)this + 43) + 692) )
        Warhead::ApplyPostDamageEffects((int *)this);
      v63 = (TechnoClass *)*((unsigned int *)this + 44);
      focus = 0;
      if ( v63 )
        focus = v63->focus;
      Instance = PlaySoundEffectAt(
                   aP1,
                   (*((unsigned int *)this + 27) * *((unsigned int *)this + 84)) >> 8,
                   v63,
                   *((unsigned int *)this + 74),
                   1,
                   (int)focus);
      v66 = *((unsigned char *)this + 144);
      v144 = Instance;
      if ( !v66 )
        return Instance;
      if ( Instance == 2 )
        v130 = 1;
    }
  }
  v67 = *(unsigned int *)&aP1->__pad_0[4];
  aP2.X = *(unsigned int *)aP1->__pad_0;
  v68 = *(unsigned int *)&aP1->__pad_0[8];
  v69 = (RadSiteClass *)*((unsigned int *)this + 43);
  aP2.Y = v67;
  aP2.Z = v68;
  if ( IDA_BYTE2(v69[6].abstractFlags) )
    aP2 = *(CoordStruct *)RandomCoordScatter((int *)&v141, &aP2.X, 32, 0);
  v70 = -1;
  if ( (*(int (**)(char *))(*(unsigned int *)this + 456))(this) < 2 * unk_89DE70 )
  {
    v141 = *(double *)((unsigned char *)this + 156);
    IDA_LODWORD(v142) = *((unsigned int *)this + 41);
    v70 = *((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&v141) + 59);
    if ( v70 == 2 && !v144 )
    {
      v71 = *((unsigned int *)this + 41);
      v72 = *((unsigned int *)this + 40);
      IDA_LODWORD(v141) = *((unsigned int *)this + 39);
      IDA_LODWORD(v142) = v71;
      IDA_HIDWORD(v141) = v72;
      v73 = (unsigned int *)*((unsigned int *)Coord::To_Cell(&g_abs_87F7E8, (IUnknown *)&v141) + 57);
      if ( v73 )
      {
        if ( (*(int (**)(unsigned int *))(*v73 + 44))(v73) == 1 )
        {
          v74 = v73[433];
          if ( *(unsigned char *)(v74 + 3278) )
          {
            if ( !*(unsigned char *)(v74 + 3433) )
              v70 = -1;
          }
        }
      }
    }
  }
  v140 = (int)((unsigned char *)this + 156);
  IDA_LODWORD(v141) = *((unsigned int *)this + 39);
  v75 = *((unsigned int *)this + 27);
  IDA_HIDWORD(v141) = *((unsigned int *)this + 40);
  v76 = *((unsigned int *)this + 74);
  IDA_LODWORD(v142) = *((unsigned int *)this + 41);
  WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(v75, v76, v70, &v141);
  IDA_LOBYTE(Instance) = v130;
  if ( *((unsigned char *)this + 224) )
  {
    if ( !v130 )
    {
      v78 = (unsigned char *)*((unsigned int *)this + 74);
      v79 = 0;
      if ( v78[337] )
        v79 = 2;
      if ( v78[338] )
        IDA_LOBYTE(v79) = v79 | 4;
      if ( v78[339] )
        IDA_LOBYTE(v79) = v79 | 8;
      CreateSmokeEffectAt(*((unsigned int *)this + 27), (int)v78, aP2.X, aP2.Y, aP2.Z, 1, v79);
      goto LABEL_158;
    }
  }
  else if ( !v130 )
  {
LABEL_158:
    if ( WarheadVersusMultiplier )
    {
      v81 = (AnimClass *)RA2_OPNEW(0x1C8u);
      if ( !v81
        || (Z = (unsigned int)aP2.Z,
            eax160 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z),
            !AnimClass::ctor(
               (void **)v81,
               WarheadVersusMultiplier,
               &aP2,
               0,
               (CoordStruct *)1,
               (void *)0x2600,
               eax160,
               SBYTE4(Z))) )
      {
        if ( *((unsigned int *)this + 74) == *(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 3980) )
        {
          v83 = (TechnoClass *)*((unsigned int *)this + 44);
          ecx162 = -1;
          if ( v83 )
            ecx162 = *(unsigned int *)(*((unsigned int *)v83->focus + 13) + 184);
          IDA_LOWORD(v144) = aP2.X / 256;
          IDA_HIWORD(v144) = aP2.Y / 256;
          v153 = (InfantryClass *)v144;
          sub_4251F0(ecx162, (int16_t *)&v153);
        }
      }
    }
    v84 = *((unsigned int *)this + 74);
    v85 = *(unsigned int *)(v84 + 452);
    if ( v85 > 0 )
    {
      v87 = (TechnoTypeClass *)Random::Range(
                                 &g_abs_A8B230->random[1],
                                 *(IUnknown **)(v84 + 456),
                                 (IUnknown *)(v85 - 1));
      eax166 = *((unsigned int *)this + 74);
      ppv[1] = v87;
      if ( *(int *)(eax166 + 412) > 0 )
      {
        v88 = 0;
        v139 = 0;
        while ( (int)v87 > 0 )
        {
          v89 = (int)abs32(Random::State(&g_abs_A8B230->random[1]))
              % (*(unsigned int *)(4 * (unsigned int)v88 + *(unsigned int *)(eax166 + 428)) + 1);
          v152 = (TechnoTypeClass *)v89;
          if ( v89 >= (int)v87 )
          {
            v89 = (int)v87;
            v152 = v87;
          }
          if ( v89 > 0 )
          {
            v144 = v89;
            do
            {
              v91 = (VoxelAnimClass *)RA2_OPNEW(0x148u);
              if ( v91 )
              {
                edi173 = (int *)(4 * (unsigned int)v139 + *(unsigned int *)(*((unsigned int *)this + 74) + 400));
                v92 = (int *)(*(int (**)(char *, double *))(*(unsigned int *)this + 72))(this, &v141);
                DamageAnimClass::Constructor((void *)v91, *edi173, v92, 0);
              }
              --v144;
            }
            while ( v144 );
          }
          v87 = (TechnoTypeClass *)((char *)ppv[1] - (char *)v152);
          eax166 = *((unsigned int *)this + 74);
          v88 = (TechnoClass *)&v139->__pad_0[1];
          ppv[1] = (char *)ppv[1] - (int)v152;
          v139 = v88;
          if ( (int)v88 >= *(unsigned int *)(eax166 + 412) )
          {
            v88 = 0;
            v139 = 0;
          }
        }
      }
      if ( !*(unsigned int *)(*((unsigned int *)this + 74) + 412) && (int)v87 > 0 )
      {
        do
        {
          v94 = (AnimClass *)RA2_OPNEW(0x1C8u);
          if ( v94 )
          {
            eax181 = (unsigned int *)(*(int (**)(char *, double *))(*(unsigned int *)this + 72))(this, &var2C);
            v95 = *eax181;
            v96 = eax181[1];
            v97 = eax181[2];
            v141 = COERCE_DOUBLE(__PAIR64__(v96, v95));
            IDA_LODWORD(v142) = v97 + 20;
            v98 = Random::Range(
                    &g_abs_A8B230->random[1],
                    0,
                    (IUnknown *)(*(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 332) - 1));
            AnimClass::ctor(
              (void **)v94,
              *(CoordStruct **)(*(unsigned int *)(*(unsigned int *)&g_abs_87F8E4 + 320) + 4 * v98),
              (CoordStruct *)&v141,
              0,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
          }
          v87 = (TechnoTypeClass *)((char *)v87 - 1);
        }
        while ( v87 );
      }
    }
    Instance = *((unsigned int *)this + 43);
    if ( *(unsigned char *)(Instance + 660) )
    {
      v99 = *(unsigned int *)(Instance + 688);
      v100 = *(unsigned int *)this;
      v101 = 0;
      v153 = *(InfantryClass **)(v99 + 160);
      v139 = (TechnoClass *)(*(int (**)(char *))(v100 + 444))(this);
      v144 = 8;
      do
      {
        NeighbourContent = (AbstractClass *)Cell::GetNeighbourContent(v139, v101);
        v102 = *(TechnoClass **)(v99 + 164);
        v104 = (TechnoClass *)*((unsigned int *)this + 44);
        aP5 = *(InfantryClass **)(v99 + 172);
        v101 = ((unsigned char)v101 + 1) & 7;
        v152 = (TechnoTypeClass *)v101;
        aP4[0] = v102;
        aP3[0] = (IUnknown *)v104;
        ppv[1] = 0;
        if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv[1]) >= 0 )
        {
          v105 = (TechnoTypeClass *)ppv[1];
          Particle::Init(
            (int)ppv[1],
            (AbstractClass *)v153,
            (TechnoClass *)NeighbourContent,
            aP3[0],
            aP4[0],
            aP5,
            50,
            0);
          if ( v105 )
          {
            al187 = Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)0x20);
            IDA_LOBYTE(v106) = 0;
            IDA_HIBYTE(v106) = al187;
            *(double *)aP3 = (double)(*(unsigned int *)(v99 + 168) / 10);
            v133 = (double)(v106 - 0x3FFF) * -0.00009587672516830327;
            *(double *)aP4 = Math::SinCos(v133);
            *(double *)aP4 = Math::ArcTan2(4.712436918747274) * *(double *)aP4 * *(double *)aP3;
            v134 = Math::ArcTan2(v133);
            v107 = Math::ArcTan2(4.712436918747274);
            v154 = *(unsigned long long *)aP4;
            v157 = *(double *)aP4;
            var2C = v107 * v134 * *(double *)aP3;
            v156 = var2C;
            v108 = Math::SinCos(4.712436918747274);
            IDA_LODWORD(v141) = *(unsigned int *)v140;
            v109 = *(unsigned int *)(v140 + 4);
            v158 = v108 * *(double *)aP3;
            v110 = *(unsigned int *)(v140 + 8);
            IDA_HIDWORD(v141) = v109;
            v111 = *(unsigned int *)v105->vtable0;
            IDA_LODWORD(v142) = v110;
            (*(void (**)(TechnoTypeClass *, double *, double *))(v111 + 496))(v105, &v141, &v156);
          }
          v101 = (unsigned int)v152;
        }
        --v144;
      }
      while ( v144 );
      v113 = *(InfantryClass **)(v99 + 172);
      v138 = *(AbstractClass **)(v99 + 164);
      aP3[0] = *((IUnknown **)this + 44);
      ppv[1] = 0;
      Instance = CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv[1]);
      if ( Instance >= 0 )
      {
        v114 = (TechnoTypeClass *)ppv[1];
        IDA_LOBYTE(Instance) = Particle::Init(
                             (int)ppv[1],
                             (AbstractClass *)v153,
                             v139,
                             aP3[0],
                             (TechnoClass *)v138,
                             v113,
                             50,
                             0);
        if ( v114 )
        {
          al192 = Random::Range(&g_abs_A8B230->random[1], 0, (IUnknown *)0x20);
          IDA_LOBYTE(v115) = 0;
          IDA_HIBYTE(v115) = al192;
          *(double *)aP3 = (double)(*(unsigned int *)(v99 + 168) / 10);
          v136 = (double)(v115 - 0x3FFF) * -0.00009587672516830327;
          v117 = (ObjectClass *)IDA_HIDWORD(v136);
          ebx192 = IDA_LODWORD(v136);
          v137 = Math::SinCos(v136);
          var90e = Math::ArcTan2(4.712436918747274) * v137 * *(double *)aP3;
          *(double *)aP4 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__((unsigned int)v117, ebx192)));
          v118 = Math::ArcTan2(4.712436918747274);
          v142 = var90e;
          v157 = var90e;
          v141 = v118 * *(double *)aP4 * *(double *)aP3;
          v156 = v141;
          v119 = Math::SinCos(4.712436918747274);
          v120 = *(unsigned int *)(v140 + 4);
          IDA_LODWORD(v141) = *(unsigned int *)v140;
          v121 = *(unsigned int *)(v140 + 8);
          v122 = *(unsigned int *)v114->vtable0;
          IDA_HIDWORD(v141) = v120;
          v158 = v119 * *(double *)aP3;
          IDA_LODWORD(v142) = v121;
          IDA_LOBYTE(Instance) = (*(char (**)(TechnoTypeClass *, double *, double *))(v122 + 496))(
                               v114,
                               &v141,
                               &v156);
        }
      }
    }
    return Instance;
  }
  v124 = *(CoordStruct **)(*(unsigned int *)&g_abs_87F8E4 + 848);
  if ( v124 )
  {
    Instance = RA2_OPNEW(0x1C8u);
    v125 = (AnimClass *)Instance;
    if ( Instance )
    {
      v129 = (unsigned int)aP2.Z;
      eax197 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z);
      IDA_LOBYTE(Instance) = (uint8_t)AnimClass::ctor(
                                            (void **)v125,
                                            v124,
                                            &aP2,
                                            0,
                                            (CoordStruct *)1,
                                            (void *)0x2600,
                                            eax197,
                                            SBYTE4(v129));
    }
  }
  return Instance;

}
} // namespace gamemd

// 0x46A310
namespace gamemd {
int Warhead::ApplyPostDamageEffects()
{

  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // edx
  unsigned int *v8; // eax
  int *v9; // eax
  int result; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int *v18; // ecx
  int v19; // edx
  bool v20; // cc
  unsigned short *v21; // ebx
  int16_t v22; // ax
  unsigned char *v23; // ebp
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // ebx
  int v28; // eax
  int *v29; // ebx
  int v30; // ecx
  int v31; // edx
  unsigned int *v32; // eax
  double v33; // st7
  int16_t v34; // ax
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st7
  int v41; // ecx
  int v42; // edx
  char v43; // al
  unsigned int *v44; // ecx
  int *v45; // ecx
  int16_t v46; // ax
  int16_t v47; // ax
  char v48; // dl
  int v49; // ecx
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int *v53; // eax
  int *v54; // ebx
  int v55; // edx
  unsigned int *v56; // eax
  double v57; // st7
  int16_t v58; // bp
  unsigned int v59; // ebp
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  unsigned int v64; // ebp
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // ecx
  int v69; // edx
  char v70; // al
  unsigned char *v71; // eax
  unsigned char *v72; // eax
  double v73; // [esp+3Ch] [ebp-A4h] BYREF
  double v74; // [esp+44h] [ebp-9Ch]
  double v75; // [esp+4Ch] [ebp-94h]
  int v76; // [esp+54h] [ebp-8Ch] BYREF
  double v77; // [esp+58h] [ebp-88h]
  double v78; // [esp+60h] [ebp-80h]
  LPVOID v79; // [esp+68h] [ebp-78h] BYREF
  int v80; // [esp+6Ch] [ebp-74h]
  unsigned short *v81; // [esp+70h] [ebp-70h]
  LPVOID v82; // [esp+74h] [ebp-6Ch] BYREF
  int v83; // [esp+78h] [ebp-68h] BYREF
  int v84; // [esp+7Ch] [ebp-64h] BYREF
  int v85; // [esp+80h] [ebp-60h]
  int v86; // [esp+84h] [ebp-5Ch]
  double v87; // [esp+88h] [ebp-58h]
  double v88; // [esp+90h] [ebp-50h] BYREF
  int v89; // [esp+9Ch] [ebp-44h]
  int v90; // [esp+A0h] [ebp-40h] BYREF
  int v91; // [esp+A4h] [ebp-3Ch]
  int v92; // [esp+A8h] [ebp-38h]
  int v93; // [esp+ACh] [ebp-34h] BYREF
  int v94; // [esp+B0h] [ebp-30h]
  int v95; // [esp+B4h] [ebp-2Ch]
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF
  void *v97; // [esp+BCh] [ebp-24h]
  int v98; // [esp+C0h] [ebp-20h]
  int v99; // [esp+C4h] [ebp-1Ch]
  int v100; // [esp+C8h] [ebp-18h]
  int v101; // [esp+CCh] [ebp-14h]
  int v102; // [esp+D0h] [ebp-10h]
  unsigned char v103[12]; // [esp+D4h] [ebp-Ch] BYREF

  v2 = *((char *)this + 43); /*0x46a322*/
  v3 = *(unsigned int *)(v2 + 696); /*0x46a328*/
  if ( v3 >= 0 ) /*0x46a330*/
  {
    v76 = *(unsigned int *)(v2 + 696); /*0x46a3d2*/
  }
  else
  {
    v4 = (int *)*((char *)this + 44); /*0x46a336*/
    if ( v4 ) /*0x46a33e*/
    {
      v5 = *((char *)this + 39); /*0x46a353*/
      v6 = *((char *)this + 40); /*0x46a359*/
      v7 = *v4; /*0x46a35f*/
      v92 = *((char *)this + 41); /*0x46a361*/
      v8 = (unsigned int *)(*(int (**)(int *, int *))(v7 + 72))(v4, &v93); /*0x46a370*/
      v9 = Coord::Subtract(&v90, *v8 - v5, v8[1] - v6, v8[2] - v92); /*0x46a392*/
      v84 = *v9; /*0x46a399*/
      v85 = v9[1]; /*0x46a3a4*/
      v86 = v9[2]; /*0x46a3ab*/
      result = (int)Coord::Length(&v84) / 256; /*0x46a3bd*/
      v76 = -v3 - result; /*0x46a3c6*/
      if ( v76 <= 0 ) /*0x46a3ca*/
        return result; /*0x46a3ca*/
    }
    else
    {
      v76 = 3; /*0x46a340*/
    }
  }
  result = (*(int (**)(int *))(*(unsigned int *)this + 444))(this); /*0x46a3da*/
  if ( *(unsigned int *)(result + 228) ) /*0x46a3e0*/
  {
    v11 = (*(int (**)(int *))(*(unsigned int *)this + 444))(this); /*0x46a3f2*/
    result = (*(int (**)(unsigned int))(**(unsigned int **)(v11 + 228) + 44))(*(unsigned int *)(v11 + 228)); /*0x46a400*/
    if ( result != 6 ) /*0x46a406*/
    {
      v12 = *this; /*0x46a412*/
      v13 = *(unsigned int *)(*((char *)this + 43) + 692); /*0x46a414*/
      v99 = *(unsigned int *)(v13 + 160); /*0x46a425*/
      v14 = *(unsigned int *)(*(int (**)(int *, int *))(v12 + 440))(this, &v83); /*0x46a434*/
      v15 = *(unsigned int *)(v13 + 180); /*0x46a43c*/
      v98 = v14; /*0x46a443*/
      v16 = 0; /*0x46a44c*/
      v17 = v15 / 256; /*0x46a44e*/
      v83 = v17; /*0x46a454*/
      v89 = 0; /*0x46a458*/
      v80 = 1; /*0x46a45c*/
      if ( v17 >= 1 ) /*0x46a464*/
      {
        v18 = &dword_7ED3D4; /*0x46a46a*/
        v79 = &dword_7ED3D4; /*0x46a46f*/
        do /*0x46a926*/
        {
          v19 = *(v18 - 1); /*0x46a475*/
          v20 = v19 < *v18; /*0x46a478*/
          IDA_LODWORD(v78) = *v18; /*0x46a47a*/
          v100 = v19; /*0x46a47e*/
          if ( v20 ) /*0x46a485*/
          {
            v21 = (unsigned short *)(4 * v19 + 11261072); /*0x46a48b*/
            v81 = v21; /*0x46a492*/
            do /*0x46a906*/
            {
              v22 = IDA_HIWORD(v98) + v21[1]; /*0x46a4a5*/
              IDA_LOWORD(v97) = v98 + *v21; /*0x46a4ad*/
              IDA_HIWORD(v97) = v22; /*0x46a4b5*/
              v82 = v97; /*0x46a4c8*/
              v23 = (unsigned char *)*((unsigned int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v82) + 57); /*0x46a4d7*/
              if ( v23 ) /*0x46a4df*/
              {
                v24 = *((char *)this + 44); /*0x46a4e5*/
                if ( v23 != (unsigned char *)v24 && v24 && !Object::IsAlliedWithObjectHouse(*(unsigned int **)(v24 + 540), (int)v23) ) /*0x46a502*/
                {
                  v25 = *(unsigned char *)(v13 + 303); /*0x46a515*/
                  v26 = *(unsigned int *)(v13 + 164); /*0x46a51b*/
                  v27 = *(unsigned int *)(v13 + 168); /*0x46a521*/
                  v102 = *(unsigned int *)(v13 + 172); /*0x46a527*/
                  IDA_LOBYTE(v101) = v25; /*0x46a53b*/
                  v28 = *((char *)this + 44); /*0x46a542*/
                  IDA_LODWORD(v88) = v26; /*0x46a551*/
                  IDA_LODWORD(v77) = v28; /*0x46a555*/
                  ppv = 0; /*0x46a559*/
                  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) >= 0 ) /*0x46a56c*/
                  {
                    v82 = ppv; /*0x46a59d*/
                    Particle::Init((int)ppv, v99, (int)v23, IDA_SLODWORD(v77), IDA_SLODWORD(v88), v102, v27, v101); /*0x46a5a1*/
                    if ( v82 ) /*0x46a5ac*/
                    {
                      v29 = (char *)this + 39; /*0x46a5b2*/
                      v73 = 0.0; /*0x46a5b8*/
                      v74 = 0.0; /*0x46a5ca*/
                      v30 = *((char *)this + 39); /*0x46a5da*/
                      v75 = 0.0; /*0x46a5dc*/
                      v93 = v30; /*0x46a5ec*/
                      v94 = *((char *)this + 40); /*0x46a5f8*/
                      v31 = *(unsigned int *)v23; /*0x46a5ff*/
                      v95 = *((char *)this + 41); /*0x46a605*/
                      v32 = (unsigned int *)(*(int (**)(unsigned char *, unsigned char *))(v31 + 72))(v23, v103); /*0x46a614*/
                      IDA_LODWORD(v77) = *v32; /*0x46a61c*/
                      v33 = Math::CalcAngle((double)v94 - (double)(int)v32[1], (double)IDA_SLODWORD(v77) - (double)v93); /*0x46a63f*/
                      v34 = Math::RoundToInt((v33 - 1.570796326794897) * -10430.06004058427); /*0x46a653*/
                      v35 = v73; /*0x46a658*/
                      IDA_LOWORD(v87) = v34; /*0x46a662*/
                      if ( v73 == 0.0 ) /*0x46a66c*/
                      {
                        v35 = v74; /*0x46a66e*/
                        if ( v74 == 0.0 ) /*0x46a67d*/
                          v73 = 100.0; /*0x46a67f*/
                      }
                      Function::Method_41C430(&v73); /*0x46a693*/
                      v88 = v35; /*0x46a69d*/
                      IDA_LODWORD(v77) = SLOWORD(v87) - 0x3FFF; /*0x46a6a7*/
                      v77 = (double)IDA_SLODWORD(v77) * -0.00009587672516830327; /*0x46a6b5*/
                      v73 = Math::ArcTan2(v77) * v35; /*0x46a6d6*/
                      v36 = -(Math::SinCos(v77) * v88); /*0x46a6ea*/
                      v74 = v36; /*0x46a6ec*/
                      Math::Hypotenuse2D(&v73); /*0x46a6f0*/
                      v37 = Math::CalcAngle(v75, v36); /*0x46a705*/
                      v38 = (double)((int16_t)Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x46a732*/
                          * -0.00009587672516830327;
                      v77 = v38; /*0x46a738*/
                      Vector3::Magnitude(&v73); /*0x46a73c*/
                      v88 = v38; /*0x46a741*/
                      if ( v77 != 0.0 ) /*0x46a754*/
                      {
                        v73 = v73 / Math::ArcTan2(v77); /*0x46a773*/
                        v74 = v74 / Math::ArcTan2(v77); /*0x46a783*/
                      }
                      v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46a7a4*/
                      v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46a7bb*/
                      v75 = Math::SinCos(0.7853262558535721) * v88; /*0x46a7ce*/
                      v77 = (double)*(int *)(v13 + 168); /*0x46a7d8*/
                      v39 = v73; /*0x46a7dc*/
                      if ( v73 == 0.0 ) /*0x46a7eb*/
                      {
                        v39 = v74; /*0x46a7ed*/
                        if ( v74 == 0.0 ) /*0x46a7fc*/
                        {
                          v39 = v75; /*0x46a7fe*/
                          if ( v75 == 0.0 ) /*0x46a80d*/
                            v73 = 100.0; /*0x46a80f*/
                        }
                      }
                      Vector3::Magnitude(&v73); /*0x46a823*/
                      v40 = v77 / v39; /*0x46a828*/
                      v90 = *v29; /*0x46a830*/
                      v91 = *((char *)this + 40); /*0x46a837*/
                      v92 = *((char *)this + 41); /*0x46a842*/
                      v73 = v40 * v73; /*0x46a859*/
                      v74 = v74 * v40; /*0x46a863*/
                      v75 = v75 * v40; /*0x46a86d*/
                      (*(void (**)(LPVOID, int *, double *))(*(unsigned int *)v82 + 496))(v82, &v90, &v73); /*0x46a875*/
                      v41 = *((char *)this + 40); /*0x46a87d*/
                      v42 = *((char *)this + 41); /*0x46a880*/
                      v84 = *v29; /*0x46a883*/
                      v43 = *(unsigned char *)(v13 + 329); /*0x46a887*/
                      v85 = v41; /*0x46a88d*/
                      v86 = v42; /*0x46a893*/
                      if ( v43 ) /*0x46a897*/
                      {
                        v44 = (unsigned int *)*((char *)this + 44); /*0x46a899*/
                        if ( v44 ) /*0x46a8a1*/
                          TechnoClass::CreateFireEffect(v44, v23, 0, v13, &v84); /*0x46a8ac*/
                      }
                      if ( *(unsigned char *)(v13 + 337) ) /*0x46a8b1*/
                      {
                        v45 = (int *)*((char *)this + 44); /*0x46a8bb*/
                        if ( v45 ) /*0x46a8c3*/
                          TechnoClass::CreateRadarBlip(v45, v23, v13, &v84); /*0x46a8cc*/
                      }
                    }
                  }
                  result = ++v89; /*0x46a8d9*/
                  if ( v89 == v76 ) /*0x46a8e0*/
                    return result; /*0x46a8e0*/
                  v21 = v81; /*0x46a8e6*/
                }
              }
              v21 += 2; /*0x46a8f6*/
              v20 = ++v100 < IDA_SLODWORD(v78); /*0x46a8f9*/
              v81 = v21; /*0x46a902*/
            }
            while ( v20 ); /*0x46a906*/
            v17 = v83; /*0x46a90c*/
            v18 = (int *)v79; /*0x46a910*/
          }
          v79 = ++v18; /*0x46a91c*/
          ++v80; /*0x46a922*/
        }
        while ( v80 <= v17 ); /*0x46a926*/
        v16 = v89; /*0x46a92c*/
      }
      result = v76; /*0x46a930*/
      if ( v16 < v76 ) /*0x46a936*/
      {
        v81 = (unsigned short *)(v76 - v16); /*0x46a93e*/
        do /*0x46adc7*/
        {
          v76 = *(unsigned int *)(*(int (**)(int *, double *))(*(unsigned int *)this + 440))(this, &v88); /*0x46a962*/
          v46 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -2, 2); /*0x46a966*/
          IDA_LOWORD(v76) = v46 + v76; /*0x46a971*/
          v47 = Random::Range((unsigned int *)g_abs_A8B230 + 134, -2, 2); /*0x46a980*/
          v48 = *(unsigned char *)(v13 + 303); /*0x46a985*/
          v49 = *((char *)this + 44); /*0x46a98b*/
          IDA_HIWORD(v76) += v47; /*0x46a991*/
          v50 = *(unsigned int *)(v13 + 164); /*0x46a996*/
          v51 = *(unsigned int *)(v13 + 168); /*0x46a99c*/
          v52 = *(unsigned int *)(v13 + 172); /*0x46a9a2*/
          IDA_LOBYTE(v83) = v48; /*0x46a9a8*/
          IDA_LODWORD(v87) = v49; /*0x46a9b0*/
          IDA_LODWORD(v78) = v50; /*0x46a9ba*/
          IDA_LODWORD(v77) = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v76); /*0x46a9c3*/
          v79 = 0; /*0x46a9da*/
          if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &v79) >= 0 ) /*0x46a9ea*/
          {
            v80 = (int)v79; /*0x46aa12*/
            Particle::Init((int)v79, v99, IDA_SLODWORD(v77), IDA_SLODWORD(v87), IDA_SLODWORD(v78), v52, v51, v83); /*0x46aa16*/
            if ( v80 ) /*0x46aa21*/
            {
              v73 = 0.0; /*0x46aa31*/
              v74 = 0.0; /*0x46aa41*/
              v75 = 0.0; /*0x46aa51*/
              v53 = (int *)CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v76); /*0x46aa61*/
              v54 = (char *)this + 39; /*0x46aa66*/
              v84 = *((char *)this + 39); /*0x46aa70*/
              v85 = *((char *)this + 40); /*0x46aa77*/
              v55 = *v53; /*0x46aa7b*/
              v86 = *((char *)this + 41); /*0x46aa80*/
              v56 = (unsigned int *)(*(int (**)(int *, unsigned char *))(v55 + 72))(v53, v103); /*0x46aa8e*/
              IDA_LODWORD(v78) = *v56; /*0x46aa96*/
              v57 = Math::CalcAngle((double)v85 - (double)(int)v56[1], (double)IDA_SLODWORD(v78) - (double)v84); /*0x46aab3*/
              v58 = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427); /*0x46aad6*/
              if ( v73 == 0.0 && v74 == 0.0 ) /*0x46aaef*/
                v73 = 100.0; /*0x46aaf1*/
              v87 = Math::Sqrt(v74 * v74 + v73 * v73); /*0x46ab26*/
              IDA_LODWORD(v78) = v58 - 0x3FFF; /*0x46ab2a*/
              v78 = (double)IDA_SLODWORD(v78) * -0.00009587672516830327; /*0x46ab38*/
              v59 = IDA_HIDWORD(v78); /*0x46ab3c*/
              v73 = Math::ArcTan2(v78) * v87; /*0x46ab55*/
              v60 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v59, IDA_LODWORD(v78)))) * v87); /*0x46ab65*/
              v74 = v60; /*0x46ab67*/
              v78 = (double)*(int *)(v13 + 168); /*0x46ab71*/
              if ( v73 == 0.0 && v60 == 0.0 && v75 == 0.0 ) /*0x46aba2*/
                v73 = 100.0; /*0x46aba4*/
              v61 = Math::Sqrt(v75 * v75 + v73 * v73 + v60 * v60); /*0x46abd6*/
              v62 = v78 / v61; /*0x46abdb*/
              v73 = v62 * v73; /*0x46abec*/
              v74 = v74 * v62; /*0x46abf6*/
              v75 = v75 * v62; /*0x46ac00*/
              Math::Hypotenuse2D(&v73); /*0x46ac06*/
              v63 = Math::CalcAngle(v75, v62); /*0x46ac1b*/
              IDA_LODWORD(v78) = (int16_t)Math::RoundToInt((v63 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x46ac3d*/
              v78 = (double)IDA_SLODWORD(v78) * -0.00009587672516830327; /*0x46ac4b*/
              v87 = Math::Sqrt(v74 * v74 + v75 * v75 + v73 * v73); /*0x46ac73*/
              if ( v78 != 0.0 ) /*0x46ac89*/
              {
                v64 = IDA_HIDWORD(v78); /*0x46ac8b*/
                v73 = v73 / Math::ArcTan2(v78); /*0x46aca4*/
                v74 = v74 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v64, IDA_LODWORD(v78)))); /*0x46acb4*/
              }
              v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46acd5*/
              v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46acec*/
              v65 = Math::SinCos(0.7853262558535721); /*0x46acf0*/
              v90 = *v54; /*0x46ad00*/
              v66 = *((char *)this + 40); /*0x46ad04*/
              v75 = v65 * v87; /*0x46ad07*/
              v67 = *((char *)this + 41); /*0x46ad0b*/
              v91 = v66; /*0x46ad0e*/
              v92 = v67; /*0x46ad16*/
              (*(void (**)(int, int *, double *))(*(unsigned int *)v80 + 496))(v80, &v90, &v73); /*0x46ad29*/
              v68 = *((char *)this + 40); /*0x46ad31*/
              v69 = *((char *)this + 41); /*0x46ad34*/
              v93 = *v54; /*0x46ad37*/
              v70 = *(unsigned char *)(v13 + 329); /*0x46ad3e*/
              v94 = v68; /*0x46ad44*/
              v95 = v69; /*0x46ad4d*/
              if ( v70 && *((char *)this + 44) ) /*0x46ad56*/
              {
                v71 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v76); /*0x46ad75*/
                TechnoClass::CreateFireEffect((unsigned int *)*((char *)this + 44), v71, 0, v13, &v93); /*0x46ad81*/
              }
              if ( *(unsigned char *)(v13 + 337) ) /*0x46ad86*/
              {
                if ( *((char *)this + 44) ) /*0x46ad90*/
                {
                  v72 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)&v76); /*0x46adad*/
                  TechnoClass::CreateRadarBlip((int *)*((char *)this + 44), v72, v13, &v93); /*0x46adb9*/
                }
              }
            }
          }
          result = (int)v81 - 1; /*0x46adc2*/
          v81 = (unsigned short *)((char *)v81 - 1); /*0x46adc3*/
        }
        while ( v81 ); /*0x46adc7*/
      }
    }
  }
  return result; /*0x46adcd*/

}
} // namespace gamemd
// 0x65B580
namespace gamemd {
int Warhead::ProcessDamageArea()
{

  double *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  double v8; // st7
  double v9; // st7
  int v10; // ebp
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // ecx
  void *v16; // eax
  int *v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  int v21; // [esp+10h] [ebp-30h]
  int v22; // [esp+10h] [ebp-30h]
  int v23; // [esp+18h] [ebp-28h]
  int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h]
  int v26; // [esp+24h] [ebp-1Ch]
  int v27; // [esp+28h] [ebp-18h]
  int v28; // [esp+2Ch] [ebp-14h]
  int v29; // [esp+2Ch] [ebp-14h]
  int v30; // [esp+30h] [ebp-10h]
  unsigned char v31[12]; // [esp+34h] [ebp-Ch] BYREF

  v24 = *((unsigned int *)g_abs_8871E0 + 1540); /*0x65b5a3*/
  v25 = *((unsigned int *)g_abs_8871E0 + 1541); /*0x65b5a7*/
  *((unsigned int *)this + 10) = g_abs_A8ED84; /*0x65b5ab*/
  *((unsigned int *)this + 11) = v28; /*0x65b5b3*/
  *((unsigned int *)this + 12) = v24; /*0x65b5b9*/
  *((unsigned int *)this + 13) = g_abs_A8ED84; /*0x65b5c2*/
  *((unsigned int *)this + 14) = v28; /*0x65b5c8*/
  *((unsigned int *)this + 15) = v25; /*0x65b5cb*/
  v2 = (double *)g_abs_8871E0; /*0x65b5ce*/
  v3 = *((uint8_t *)g_abs_8871E0 + 6194); /*0x65b5e2*/
  v4 = *((uint8_t *)g_abs_8871E0 + 6193); /*0x65b5e8*/
  v5 = *((uint8_t *)g_abs_8871E0 + 6192); /*0x65b5f5*/
  if ( *((unsigned int *)g_abs_A8B230 + 1174) == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v21 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*((int *)this + 19) * *((double *)g_abs_8871E0 + 772); /*0x65b63e*/
  v26 = *((unsigned int *)this + 18); /*0x65b679*/
  v23 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  v7 = Math::RoundToInt(v6); /*0x65b69e*/
  v8 = (double)v21 * v2[773]; /*0x65b6a0*/
  if ( v8 > 2000.0 ) /*0x65b6b3*/
    v8 = 2000.0; /*0x65b6b7*/
  v22 = Math::RoundToInt(v8); /*0x65b6c6*/
  v9 = (double)(1000 * v4 / 255) * v2[773]; /*0x65b6ca*/
  if ( v9 > 2000.0 ) /*0x65b6dd*/
    v9 = 2000.0; /*0x65b6e1*/
  v10 = Math::RoundToInt(v9); /*0x65b6f0*/
  v11 = (double)v23 * v2[773]; /*0x65b6f2*/
  if ( v11 > 2000.0 ) /*0x65b705*/
    v11 = 2000.0; /*0x65b709*/
  v12 = Math::RoundToInt(v11); /*0x65b70f*/
  v13 = *((unsigned int *)this + 27); /*0x65b714*/
  v14 = v12; /*0x65b71b*/
  *((unsigned int *)this + 22) = v22; /*0x65b71f*/
  *((unsigned int *)this + 23) = v10; /*0x65b722*/
  *((unsigned int *)this + 24) = v12; /*0x65b72a*/
  *((unsigned int *)this + 21) = v7; /*0x65b72d*/
  *((unsigned int *)this + 20) = v13 / v24; /*0x65b730*/
  v15 = v13 / v25; /*0x65b73a*/
  *((unsigned int *)this + 25) = v15; /*0x65b741*/
  *((unsigned int *)this + 26) = v7 / v15; /*0x65b749*/
  v16 = CellCoord::To_CellObj(&g_abs_87F7E8, (int16_t *)((char *)this + 64)); /*0x65b750*/
  v17 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v16 + 72))(v16, v31); /*0x65b75e*/
  v27 = *v17; /*0x65b763*/
  v29 = v17[1]; /*0x65b76a*/
  v30 = v17[2]; /*0x65b776*/
  if ( *((unsigned int *)this + 9) ) /*0x65b76e*/
  {
    TacticalClass::UpdateScrollTarget(v7, v22, v10, v14, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate(this); /*0x65b7ef*/
  }
  else
  {
    v18 = RA2_OPNEW(0x4Cu); /*0x65b77e*/
    if ( v18 ) /*0x65b788*/
      v19 = LightSourceClass::Construct(v18, v27, v29, v30, v26, v7, v22, v10, v14); /*0x65b7b2*/
    else
      v19 = 0; /*0x65b7b9*/
    *((unsigned int *)this + 9) = v19; /*0x65b7bb*/
    v19[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*(unsigned char **)((char *)this + 36), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate(this); /*0x65b7d1*/
  }

}
} // namespace gamemd