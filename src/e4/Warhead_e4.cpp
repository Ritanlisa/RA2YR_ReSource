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

// 0x41D7E0
int Warhead::GetWarheadSound(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( VeterancyStruct::IsElite((float *)(this->q013 + 336)) ) /*0x41d7ec*/
    int v3 = this->q012; /*0x41d7f5*/
  else
    v3 = this->q044; /*0x41d7fa*/
  return !*(_BYTE *)(this + 60) && v3 + this->q040 <= (int)g_CurrentFrame || a2 != *(_DWORD *)(this + 80); /*0x41d814*/
}
}

// 0x452820
int Warhead::RemoveFromDamageList(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  _DWORD * v2 = this + 411; /*0x452827*/
  int v3 = this->q66C->vt_slot_16(&a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    int v4 = v2[4]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      int v5 = v4 - 1; /*0x452843*/
      for ( v2[4] = v5; v3 < v2[4]; *(_DWORD *)(v2[1] + 4 * v3 - 4) = *(_DWORD *)(v2[1] + 4 * v3) ) /*0x452849*/
        ++v3; /*0x45284e*/
    }
  }
  int v6 = v2[2]; /*0x45285d*/
  if ( v2[4] < v6 /*0x452887*/
  int v7; // eax
    || ((LOBYTE(v7) = *((_BYTE *)v2 + 13), (_BYTE)v7) || !v6)
    && (v7 = v2[5], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v6 + v7, 0), (_BYTE)v7) )
  {
    v7 = v2[4]; /*0x452889*/
    int v8 = v2[1]; /*0x45288c*/
    v2[4] = v7 + 1; /*0x452892*/
    *(_DWORD *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/
}
}

// 0x4690B0
int Warhead::ApplyDamage(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v4; // ecx
  IUnknown *v6; // ecx
  InfantryClass *v8; // edi
  Concurrency::details::SchedulerBase *v9; // ebx
  _DWORD *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  RadSiteClass *v12; // edi
  TechnoClass *v14; // eax
  void **v18; // ecx
  TechnoClass *v22; // ecx
  TechnoClass *v23; // ecx
  TechnoClass *v28; // eax
  ObjectClass *Member; // ebx
  TechnoClass *v37; // ecx
  TechnoClass *v43; // ecx
  int owningHouseIndex0; // ecx
  ObjectClass *v61; // eax
  TechnoClass *v62; // ecx
  TechnoClass *v63; // eax
  void *focus; // ecx
  int Instance; // eax
  RadSiteClass *v69; // eax
  CoordStruct *WarheadVersusMultiplier; // ebx
  AnimClass *v81; // edi
  void *eax160; // eax
  TechnoClass *v83; // eax
  int ecx162; // ecx
  TechnoTypeClass *v87; // ebx
  int eax166; // eax
  TechnoClass *v88; // edx
  VoxelAnimClass *v91; // ebx
  int *edi173; // edi
  AnimClass *v94; // edi
  unsigned int *eax181; // eax
  TechnoClass *v102; // ecx
  TechnoClass *v104; // edx
  TechnoTypeClass *v105; // ebx
  char al187; // al
  __int16 v106; // cx
  InfantryClass *v113; // ebx
  TechnoTypeClass *v114; // esi
  char al192; // al
  __int16 v115; // cx
  ObjectClass *v117; // edi
  unsigned int ebx192; // ebx
  CoordStruct *v124; // edi
  AnimClass *v125; // esi
  void *eax197; // eax
  __int64 Z; // [esp+0h] [ebp-A8h]
  AbstractClass *NeighbourContent; // [esp+18h] [ebp-90h]
  AbstractClass *v138; // [esp+18h] [ebp-90h]
  double var90e; // [esp+18h] [ebp-90h]
  TechnoClass *v139; // [esp+20h] [ebp-88h] BYREF
  int v140; // [esp+24h] [ebp-84h]
  double v141; // [esp+28h] [ebp-80h] BYREF
  double v142; // [esp+30h] [ebp-78h]
  int v144; // [esp+3Ch] [ebp-6Ch]
  IUnknown *aP3[2]; // [esp+40h] [ebp-68h]
  LPVOID ppv[2]; // [esp+50h] [ebp-58h] BYREF
  TechnoClass *aP4[2]; // [esp+58h] [ebp-50h] BYREF
  InfantryClass *v153; // [esp+68h] [ebp-40h] BYREF
  CoordStruct aP2; // [esp+6Ch] [ebp-3Ch] BYREF
  TechnoTypeClass *v152; // [esp+78h] [ebp-30h]
  double var2C; // [esp+7Ch] [ebp-2Ch] BYREF
  __int64 v154; // [esp+84h] [ebp-24h]
  InfantryClass *aP5; // [esp+8Ch] [ebp-1Ch]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  v144 = 1;
  char v130 = 0;
  int v3 = *((_DWORD *)this + 74);
  v4 = *(IUnknown **)(v3 + 380);
  if ( v4 || *(_DWORD *)(v3 + 384) )
    DataGlobal_87F7EC = (TechnoTypeClass *)Random::Range(
                                            &DataGlobal_87F8E4[29348],
                                            v4,
                                            *(IUnknown **)(v3 + 384));
  int v5 = *((_DWORD *)this + 74);
  v6 = *(IUnknown **)(v5 + 388);
  if ( v6 || *(_DWORD *)(v5 + 392) )
    DataGlobal_87F7F0 = (TechnoTypeClass *)Random::Range(
                                            &DataGlobal_87F8E4[29348],
                                            v6,
                                            *(IUnknown **)(v5 + 392));
  int v7 = this->q013;
  if ( v7 )
  {
    v153 = *(InfantryClass **)(v7 + 344);
    v8 = v153;
    if ( (int)v153 > 0 )
    {
      LOWORD(v139) = *(_DWORD *)aP1->__pad_0 / 256;
      HIWORD(v139) = *(_DWORD *)&aP1->__pad_0[4] / 256;
      v140 = Math::RoundToInt(*(float *)(*(_DWORD *)(v7 + 172) + 292));
      v9 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v139);
      NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (_DWORD *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v9);
      if ( NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ )
      {
        RadSiteClass::Add(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ, (int)v8);
      }
      else
      {
        _DWORD * v11 = (_DWORD *)__2_YAPAXI_Z(0x74u);
        if ( v11 )
          v12 = (RadSiteClass *)RadSiteClass::RadSiteClass(v11);
        RadSiteClass *v12 = 0;
        RadSiteClass::SetBaseCell(v12, &v139);
        RadSiteClass::SetSpread(v12, v140);
        RadSiteClass::SetRadLevel(v12, (int)v153);
        Warhead::ProcessDamageArea((int)v12);
        TerrainClass::SetFieldF8(v9, (int)v12);
      }
    }
  }
  _BYTE * v13 = (_BYTE *)*((_DWORD *)this + 74);
  if ( v13[341] )
  {
    v14 = (TechnoClass *)*((_DWORD *)this + 44);
    if ( v14 && v14->rockerLinkedUnit )
    {
      int v15 = *((_DWORD *)this + 67);
      if ( v15 )
        int v16 = (*(_BYTE *)(v15 + 20) & 2) != 0 ? v15 : 0;
      else
        v16 = 0;
      bool v17 = v15 && (*(_BYTE *)(v15 + 20) & 1) != 0 && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v15 + 540));
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 144) )
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
             *(_DWORD *)(*((_DWORD *)this + 44) + 700),
             (int)&savedregs,
             *((_DWORD *)this + 67))
        && *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 532) != -1
        && ((unsigned __int8)House::IsHumanPlayer(*(#375 **)(*((_DWORD *)this + 44) + 540)) || v17) )
      {
        int v19 = v16 + 156;
        v141 = *(double *)v19;
        LODWORD(v142) = *(_DWORD *)(v19 + 8);
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 532), (int)&v141, 0);
      }
    }
  }
  else if ( v13[343] )
  {
    int v20 = *((_DWORD *)this + 67);
    if ( v20 )
      v20 = (*(_BYTE *)(v20 + 20) & 1) != 0 ? v20 : 0;
    AbstractClass::Initialize(&DataGlobal_87F5D8, *((TechnoClass **)this + 44), (TechnoClass *)v20);
  }
  else if ( v13[344] )
  {
    int v21 = *((_DWORD *)this + 67);
    if ( v21 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 44))(v21) == 6 )
      {
        v22 = (TechnoClass *)*((_DWORD *)this + 44);
        if ( v22 )
        {
          if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v22->__pad_0 + 44))(v22) == 15 )
            Warhead::RemoveFromDamageList(*((_DWORD **)this + 67), *((_DWORD *)this + 44));
        }
      }
    }
  }
  else if ( v13[345] )
  {
    v23 = (TechnoClass *)*((_DWORD *)this + 44);
    if ( v23 )
    {
      int v24 = *((_DWORD *)this + 67);
      if ( v24 )
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], (*(_BYTE *)(v24 + 20) & 4) != 0 ? (_DWORD *)v24 : 0);
      else
        ParasiteClass::TryInfect(v23[1].radarFlashTimer[1], 0);
    }
  }
  else if ( v13[346] )
  {
    if ( *((_DWORD *)this + 44) )
    {
      int v25 = *((_DWORD *)this + 67);
      if ( v25 )
      {
        if ( (*(_BYTE *)(v25 + 20) & 4) == 0
  int v26; // ecx
          || (v26 = (*(_BYTE *)(v25 + 20) & 4) != 0 ? v25 : 0,
              (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 120))(v26) == 2) )
        {
          _DWORD * v27 = (_DWORD *)*((_DWORD *)this + 67);
          if ( v27 )
          {
            if ( (v27[5] & 1) != 0 )
            {
              if ( v27[185] && (*(int (__thiscall **)(_DWORD))(*v27 + 44))(*((_DWORD *)this + 67)) == 1 )
              {
                v27 = (_DWORD *)v27[185];
                (*(void (__thiscall **)(_DWORD, _DWORD *))(**((_DWORD **)this + 44) + 968))(*((_DWORD *)this + 44), v27);
              }
            }
            else
            {
              v27 = 0;
            }
          }
          OreManagerClass::AssignMinerToRefinery(*(_DWORD *)(*((_DWORD *)this + 44) + 628), v27);
        }
      }
    }
  }
  else if ( v13[347] )
  {
    v28 = (TechnoClass *)*((_DWORD *)this + 44);
    if ( v28 )
    {
      int v29 = *((_DWORD *)this + 67);
      if ( *(_DWORD *)&v28->isBerserk != v29
        && !v28->isBerserk_duration_left
        && ((v28->abstractFlags & 4) == 0
         || !*((v28->abstractFlags & 4) != 0 ? (char *)&v28[1].targetingTimer[2] + 1 : (_BYTE *)1709)) )
      {
        char v143 = 0;
        if ( v29 && (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 44))(v29) == 1 )
        {
          int v30 = *((_DWORD *)this + 67);
  _DWORD *v31; // eax
          v31 = v30
              ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v30 + 44))(*((_DWORD *)this + 67)) == 1
               ? (_DWORD *)v30
               : 0)
              : 0;
          Member = (ObjectClass *)Team::GetMember(v31, 0);
          if ( Member
            && (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)Member->__pad_0 + 44))(Member) == 6
            && *(_BYTE *)(Member[7].health + 5821) )
          {
            int v33 = *((_DWORD *)this + 67);
  int v34; // eax
            v34 = v33
                ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 44))(*((_DWORD *)this + 67)) == 1
                 ? v33
                 : 0)
                : 0;
            int v35 = v34 + 156;
            v141 = *(double *)v35;
            LODWORD(v142) = *(_DWORD *)(v35 + 8);
            _DWORD * v36 = Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v141);
            if ( Cell::IsBridge(v36) == (_DWORD *)Member )
              v143 = 1;
          }
        }
        v37 = (TechnoClass *)*((_DWORD *)this + 44);
        if ( *(_DWORD *)&v37->isBerserk )
          TechnoClass::EjectPassengers((int *)v37->__pad_0, 0);
        int v38 = *((_DWORD *)this + 67);
        if ( v38 )
        {
          if ( !v143 )
          {
            if ( (*(_BYTE *)(v38 + 20) & 4) == 0
  int v39; // ecx
              || (v39 = (*(_BYTE *)(v38 + 20) & 4) != 0 ? v38 : 0,
                  (*(int (__thiscall **)(int))(*(_DWORD *)v39 + 120))(v39) == 2) )
            {
              int v40 = *((_DWORD *)this + 67);
              if ( v40
                && (*(_BYTE *)(v40 + 20) & 4) != 0
                && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v40 + 352))(*((_DWORD *)this + 67))
  int v41; // ecx
                && ((v41 = *((_DWORD *)this + 67)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(v41) == 1
  int v42; // ecx
                 || (v42 = *((_DWORD *)this + 67)) != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 44))(v42) == 2)
                && !*(_BYTE *)(v40 + 1709)
                && (double)this->q01B > *(double *)((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 132))(v40)
                                                           + 896) )
              {
                FootClass::FootClass_ImbueLocomotor(
                  *((int **)this + 44),
                  (int)&savedregs,
                  v40,
                  (_DWORD *)v40,
                  *(IID *)(*((_DWORD *)this + 74) + 348),
                  *(_DWORD *)(*((_DWORD *)this + 74) + 360));
              }
            }
          }
        }
      }
    }
  }
  else if ( v13[364] )
  {
    v43 = (TechnoClass *)*((_DWORD *)this + 44);
    if ( v43 )
    {
      int v44 = *((_DWORD *)this + 67);
      if ( v44 )
      {
        if ( (*(_BYTE *)(v44 + 20) & 1) != 0 )
        {
          owningHouseIndex0 = v43->owningHouseIndex0;
          if ( owningHouseIndex0 )
          {
            if ( Warhead::GetWarheadSound(owningHouseIndex0, (*(_BYTE *)(v44 + 20) & 1) != 0 ? v44 : 0) )
            {
              int v46 = *((_DWORD *)this + 67);
              if ( v46 )
                v46 = (*(_BYTE *)(v46 + 20) & 1) != 0 ? v46 : 0;
              AirstrikeClass::StartMission(*(_DWORD *)(*((_DWORD *)this + 44) + 660), (int *)v46);
            }
          }
        }
      }
    }
  }
  else if ( v13[335]
  int v47; // ecx
         && (v47 = *((_DWORD *)this + 67)) != 0
         && (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 44))(v47) == 1 )
  {
    int v48 = *((_DWORD *)this + 67);
    if ( v48 )
      int * v49 = (*(_BYTE *)(v48 + 20) & 1) != 0 ? (int *)v48 : 0;
    else
      v49 = 0;
    if ( *((_DWORD *)this + 44) && v49 && !(*(unsigned __int8 (__thiscall **)(int *))(*v49 + 352))(v49) )
    {
  float v55; // edx
      v140 = (this->q01B * *((_DWORD *)this + 84)) >> 8;
      double v50 = (double)v140 * *(float *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 6324) / dbl_81AEF8;
      if ( v50 >= 4.0 )
        double v131 = 4.0;
      else
        v131 = v50;
      aP4[0] = (TechnoClass *)v49[39];
      aP4[1] = (TechnoClass *)v49[40];
      _DWORD * v51 = (_DWORD *)(*((_DWORD *)this + 44) + 156);
      int v149 = v49[41];
      int v52 = v51[1];
      v140 = *v51 - (unsigned int)aP4[0];
      int v53 = v51[2] - v149;
      *(float *)aP3 = (float)v140;
      v140 = v53;
      *(float *)&aP3[1] = (float)(v52 - (unsigned int)aP4[1]);
  double v146; // [esp+48h] [ebp-60h]
      *(float *)&v146 = (float)v53;
  double v54; // st7
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
      int v56 = Math::RoundToInt(*(float *)&var2C * 10.0);
      HIDWORD(var2C) = Math::RoundToInt(*((float *)&v141 + 1));
      int v57 = Math::RoundToInt(*(float *)&v142);
      aP4[0] = (TechnoClass *)((char *)aP4[0] + v56);
      aP4[1] = (TechnoClass *)((char *)aP4[1] + HIDWORD(var2C));
      int v58 = *v49;
      v149 += v57;
      float v127 = v131;
      (*(void (__thiscall **)(int *, TechnoClass **, _DWORD, int))(v58 + 984))(v49, aP4, LODWORD(v127), 1);
      v49[170] = *((_DWORD *)this + 44);
      *(_DWORD *)(*((_DWORD *)this + 44) + 680) = v49;
    }
  }
  else
  {
    _BYTE * v59 = (_BYTE *)*((_DWORD *)this + 74);
    if ( v59[366] )
    {
      int v60 = *((_DWORD *)this + 67);
      if ( v60 )
      {
        if ( (*(_BYTE *)(v60 + 20) & 2) != 0 )
        {
          v61 = *(ObjectClass **)(v60 + 56);
          if ( v61 )
            ObjectClass::CleanupAudioAndRefs((int)v61);
        }
      }
    }
    else if ( v59[373] )
    {
      v62 = (TechnoClass *)*((_DWORD *)this + 44);
      if ( v62 )
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v62->__pad_0 + 1132))(v62, *((_DWORD *)this + 67));
    }
    else if ( v59[374] )
    {
      SuperWeapon::CreateNukePayload((int *)this);
    }
    else
    {
      if ( *(_DWORD *)(this->q0AC + 692) )
        Warhead::ApplyPostDamageEffects((int *)this);
      v63 = (TechnoClass *)*((_DWORD *)this + 44);
      focus = 0;
      if ( v63 )
        focus = v63->focus;
      Instance = PlaySoundEffectAt(
                   aP1,
                   (this->q01B * *((_DWORD *)this + 84)) >> 8,
                   v63,
                   *((_DWORD *)this + 74),
                   1,
                   (int)focus);
      char v66 = *(this + 144);
      v144 = Instance;
      if ( !v66 )
        return Instance;
      if ( Instance == 2 )
        v130 = 1;
    }
  }
  int v67 = *(_DWORD *)&aP1->__pad_0[4];
  aP2.X = *(_DWORD *)aP1->__pad_0;
  int v68 = *(_DWORD *)&aP1->__pad_0[8];
  v69 = (RadSiteClass *)this->q0AC;
  aP2.Y = v67;
  aP2.Z = v68;
  if ( BYTE2(v69[6].abstractFlags) )
    aP2 = *(CoordStruct *)RandomCoordScatter((int *)&v141, &aP2.X, 32, 0);
  int v70 = -1;
  if ( (*(int (__thiscall **)(char *))(this->q1C8)(this) < 2 * unk_89DE70 )
  {
    v141 = *(double *)(this + 156);
    LODWORD(v142) = *((_DWORD *)this + 41);
    v70 = *((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v141) + 59);
    if ( v70 == 2 && !v144 )
    {
      int v71 = *((_DWORD *)this + 41);
      int v72 = *((_DWORD *)this + 40);
      LODWORD(v141) = *((_DWORD *)this + 39);
      LODWORD(v142) = v71;
      HIDWORD(v141) = v72;
      _DWORD * v73 = (_DWORD *)*((_DWORD *)Coord::To_Cell(&DataGlobal_87F7E8, (IUnknown *)&v141) + 57);
      if ( v73 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*v73 + 44))(v73) == 1 )
        {
          int v74 = v73[433];
          if ( *(_BYTE *)(v74 + 3278) )
          {
            if ( !*(_BYTE *)(v74 + 3433) )
              v70 = -1;
          }
        }
      }
    }
  }
  v140 = (int)(this + 156);
  LODWORD(v141) = *((_DWORD *)this + 39);
  bool v75 = this->q01B;
  HIDWORD(v141) = *((_DWORD *)this + 40);
  int v76 = *((_DWORD *)this + 74);
  LODWORD(v142) = *((_DWORD *)this + 41);
  WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(v75, v76, v70, &v141);
  LOBYTE(Instance) = v130;
  if ( *(this + 224) )
  {
    if ( !v130 )
    {
      _BYTE * v78 = (_BYTE *)*((_DWORD *)this + 74);
      int v79 = 0;
      if ( v78[337] )
        v79 = 2;
      if ( v78[338] )
        LOBYTE(v79) = v79 | 4;
      if ( v78[339] )
        LOBYTE(v79) = v79 | 8;
      CreateSmokeEffectAt(this->q01B, (int)v78, aP2.X, aP2.Y, aP2.Z, 1, v79);
      goto LABEL_158;
    }
  }
  else if ( !v130 )
  {
LABEL_158:
    if ( WarheadVersusMultiplier )
    {
      v81 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
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
        if ( *((_DWORD *)this + 74) == *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 3980) )
        {
          v83 = (TechnoClass *)*((_DWORD *)this + 44);
          ecx162 = -1;
          if ( v83 )
            ecx162 = *(_DWORD *)(*((_DWORD *)v83->focus + 13) + 184);
          LOWORD(v144) = aP2.X / 256;
          HIWORD(v144) = aP2.Y / 256;
          v153 = (InfantryClass *)v144;
          sub_4251F0(ecx162, (__int16 *)&v153);
        }
      }
    }
    int v84 = *((_DWORD *)this + 74);
    int v85 = *(_DWORD *)(v84 + 452);
    if ( v85 > 0 )
    {
      v87 = (TechnoTypeClass *)Random::Range(
                                 &g_ScenarioClass_Instance->random[1],
                                 *(IUnknown **)(v84 + 456),
                                 (IUnknown *)(v85 - 1));
      eax166 = *((_DWORD *)this + 74);
      ppv[1] = v87;
      if ( *(int *)(eax166 + 412) > 0 )
      {
        v88 = 0;
        v139 = 0;
        while ( (int)v87 > 0 )
        {
  int v89; // edx
          v89 = (int)abs32(Random::State(&g_ScenarioClass_Instance->random[1]))
              % (*(_DWORD *)(4 * (_DWORD)v88 + *(_DWORD *)(eax166 + 428)) + 1);
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
              v91 = (VoxelAnimClass *)__2_YAPAXI_Z(0x148u);
              if ( v91 )
              {
                edi173 = (int *)(4 * (_DWORD)v139 + *(_DWORD *)(*((_DWORD *)this + 74) + 400));
                int * v92 = (int *)(*(int (__thiscall **)(char *, double *))(this->q012)(this, &v141);
                DamageAnimClass::Constructor((#374 *)v91, *edi173, v92, 0);
              }
              --v144;
            }
            while ( v144 );
          }
          v87 = (TechnoTypeClass *)((char *)ppv[1] - (char *)v152);
          eax166 = *((_DWORD *)this + 74);
          v88 = (TechnoClass *)&v139->__pad_0[1];
          ppv[1] = (char *)ppv[1] - (int)v152;
          v139 = v88;
          if ( (int)v88 >= *(_DWORD *)(eax166 + 412) )
          {
            v88 = 0;
            v139 = 0;
          }
        }
      }
      if ( !*(_DWORD *)(*((_DWORD *)this + 74) + 412) && (int)v87 > 0 )
      {
        do
        {
          v94 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
          if ( v94 )
          {
            eax181 = (unsigned int *)(*(int (__thiscall **)(char *, double *))(this->q012)(this, &var2C);
            unsigned int v95 = *eax181;
            unsigned int v96 = eax181[1];
            unsigned int v97 = eax181[2];
            v141 = COERCE_DOUBLE(__PAIR64__(v96, v95));
            LODWORD(v142) = v97 + 20;
  int v98; // eax
            v98 = Random::Range(
                    &g_ScenarioClass_Instance->random[1],
                    0,
                    (IUnknown *)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 332) - 1));
            AnimClass::ctor(
              (void **)v94,
              *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 320) + 4 * v98),
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
    Instance = this->q0AC;
    if ( *(_BYTE *)(Instance + 660) )
    {
  double v158; // [esp+A0h] [ebp-8h]
  double v157; // [esp+98h] [ebp-10h]
  double v156; // [esp+90h] [ebp-18h] BYREF
      int v99 = *(_DWORD *)(Instance + 688);
      int v100 = *(_DWORD *)this;
      unsigned int v101 = 0;
      v153 = *(InfantryClass **)(v99 + 160);
      v139 = (TechnoClass *)(*(int (__thiscall **)(char *))(v100 + 444))(this);
      v144 = 8;
      do
      {
        NeighbourContent = (AbstractClass *)Cell::GetNeighbourContent(v139, v101);
        v102 = *(TechnoClass **)(v99 + 164);
        v104 = (TechnoClass *)*((_DWORD *)this + 44);
        aP5 = *(InfantryClass **)(v99 + 172);
        v101 = ((_BYTE)v101 + 1) & 7;
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
            al187 = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x20);
            LOBYTE(v106) = 0;
            HIBYTE(v106) = al187;
            *(double *)aP3 = (double)(*(_DWORD *)(v99 + 168) / 10);
            double v133 = (double)(v106 - 0x3FFF) * -0.00009587672516830327;
            *(double *)aP4 = Math::SinCos(v133);
            *(double *)aP4 = Math::ArcTan2(4.712436918747274) * *(double *)aP4 * *(double *)aP3;
            double v134 = Math::ArcTan2(v133);
            double v107 = Math::ArcTan2(4.712436918747274);
            v154 = *(_QWORD *)aP4;
            v157 = *(double *)aP4;
            var2C = v107 * v134 * *(double *)aP3;
            v156 = var2C;
            double v108 = Math::SinCos(4.712436918747274);
            LODWORD(v141) = *(_DWORD *)v140;
            int v109 = *(_DWORD *)(v140 + 4);
            v158 = v108 * *(double *)aP3;
            int v110 = *(_DWORD *)(v140 + 8);
            HIDWORD(v141) = v109;
            int v111 = *(_DWORD *)v105->vtable0;
            LODWORD(v142) = v110;
            (*(void (__thiscall **)(TechnoTypeClass *, double *, double *))(v111 + 496))(v105, &v141, &v156);
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
        LOBYTE(Instance) = Particle::Init(
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
          al192 = Random::Range(&g_ScenarioClass_Instance->random[1], 0, (IUnknown *)0x20);
          LOBYTE(v115) = 0;
          HIBYTE(v115) = al192;
          *(double *)aP3 = (double)(*(_DWORD *)(v99 + 168) / 10);
          double v136 = (double)(v115 - 0x3FFF) * -0.00009587672516830327;
          v117 = (ObjectClass *)HIDWORD(v136);
          ebx192 = LODWORD(v136);
          double v137 = Math::SinCos(v136);
          var90e = Math::ArcTan2(4.712436918747274) * v137 * *(double *)aP3;
          *(double *)aP4 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__((unsigned int)v117, ebx192)));
          double v118 = Math::ArcTan2(4.712436918747274);
          v142 = var90e;
          v157 = var90e;
          v141 = v118 * *(double *)aP4 * *(double *)aP3;
          v156 = v141;
          double v119 = Math::SinCos(4.712436918747274);
          int v120 = *(_DWORD *)(v140 + 4);
          LODWORD(v141) = *(_DWORD *)v140;
          int v121 = *(_DWORD *)(v140 + 8);
          int v122 = *(_DWORD *)v114->vtable0;
          HIDWORD(v141) = v120;
          v158 = v119 * *(double *)aP3;
          LODWORD(v142) = v121;
          LOBYTE(Instance) = (*(char (__thiscall **)(TechnoTypeClass *, double *, double *))(v122 + 496))(
                               v114,
                               &v141,
                               &v156);
        }
      }
    }
    return Instance;
  }
  v124 = *(CoordStruct **)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 848);
  if ( v124 )
  {
    Instance = __2_YAPAXI_Z(0x1C8u);
    v125 = (AnimClass *)Instance;
    if ( Instance )
    {
      __int64 v129 = (unsigned int)aP2.Z;
      eax197 = (void *)Return::HRESULT_Fail(aP2.X, aP2.Y, aP2.Z);
      LOBYTE(Instance) = (unsigned __int8)AnimClass::ctor(
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
}

// 0x46A310
int Warhead::ApplyPostDamageEffects()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  __int16 v22; // ax
  __int16 v34; // ax
  __int16 v46; // ax
  __int16 v47; // ax
  __int16 v58; // bp
  int v76; // [esp+54h] [ebp-8Ch] BYREF
  LPVOID v79; // [esp+68h] [ebp-78h] BYREF
  LPVOID v82; // [esp+74h] [ebp-6Ch] BYREF
  int v84; // [esp+7Ch] [ebp-64h] BYREF
  int v85; // [esp+80h] [ebp-60h]
  int v86; // [esp+84h] [ebp-5Ch]
  int v90; // [esp+A0h] [ebp-40h] BYREF
  int v92; // [esp+A8h] [ebp-38h]
  int v93; // [esp+ACh] [ebp-34h] BYREF
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF

  int v2 = this->q0AC; /*0x46a322*/
  int v3 = *(_DWORD *)(v2 + 696); /*0x46a328*/
  if ( v3 >= 0 ) /*0x46a330*/
  {
    v76 = *(_DWORD *)(v2 + 696); /*0x46a3d2*/
  }
  else
  {
    ParticleSystemClass *v4 = (int *)*(this + 44); /*0x46a336*/
    if ( v4 ) /*0x46a33e*/
    {
      int v5 = *(this + 39); /*0x46a353*/
      int v6 = *(this + 40); /*0x46a359*/
      int v7 = *v4; /*0x46a35f*/
      v92 = *(this + 41); /*0x46a361*/
      _DWORD * v8 = (_DWORD *)v4->GetCoords_0(&v93); /*0x46a370*/
      IUnknown *v9 = Coord::Subtract(&v90, *v8 - v5, v8[1] - v6, v8[2] - v92); /*0x46a392*/
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
  result = this->vt_slot_444(); /*0x46a3da*/
  if ( result->q0E4 ) /*0x46a3e0*/
  {
    int v11 = this->vt_slot_444(); /*0x46a3f2*/
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 228) + 44))(*(_DWORD *)(v11 + 228)); /*0x46a400*/
    if ( result != 6 ) /*0x46a406*/
    {
  _BYTE v103[12]; // [esp+D4h] [ebp-Ch] BYREF
  int v95; // [esp+B4h] [ebp-2Ch]
  int v94; // [esp+B0h] [ebp-30h]
  int v91; // [esp+A4h] [ebp-3Ch]
  double v88; // [esp+90h] [ebp-50h] BYREF
  double v87; // [esp+88h] [ebp-58h]
  _WORD *v81; // [esp+70h] [ebp-70h]
  double v78; // [esp+60h] [ebp-80h]
  double v77; // [esp+58h] [ebp-88h]
  double v75; // [esp+4Ch] [ebp-94h]
  double v74; // [esp+44h] [ebp-9Ch]
  double v73; // [esp+3Ch] [ebp-A4h] BYREF
      int v12 = *this; /*0x46a412*/
      IUnknown *v13 = *(_DWORD *)(this->q0AC + 692); /*0x46a414*/
      int v99 = v13->q028; /*0x46a425*/
  int v83; // [esp+78h] [ebp-68h] BYREF
      int v14 = *(_DWORD *)this->vt_slot_440(&v83); /*0x46a434*/
      int v15 = *(_DWORD *)(v13 + 180); /*0x46a43c*/
      int v98 = v14; /*0x46a443*/
      int v16 = 0; /*0x46a44c*/
      int v17 = v15 / 256; /*0x46a44e*/
      v83 = v17; /*0x46a454*/
      int v89 = 0; /*0x46a458*/
      int v80 = 1; /*0x46a45c*/
      if ( v17 >= 1 ) /*0x46a464*/
      {
        int * v18 = &dword_7ED3D4; /*0x46a46a*/
        v79 = &dword_7ED3D4; /*0x46a46f*/
        do /*0x46a926*/
        {
          int v19 = *(v18 - 1); /*0x46a475*/
          bool v20 = v19 < *v18; /*0x46a478*/
          LODWORD(v78) = *v18; /*0x46a47a*/
          int v100 = v19; /*0x46a47e*/
          if ( v20 ) /*0x46a485*/
          {
            _WORD * v21 = (_WORD *)(4 * v19 + 11261072); /*0x46a48b*/
            v81 = v21; /*0x46a492*/
            do /*0x46a906*/
            {
              v22 = HIWORD(v98) + v21[1]; /*0x46a4a5*/
  void *v97; // [esp+BCh] [ebp-24h]
              LOWORD(v97) = v98 + *v21; /*0x46a4ad*/
              HIWORD(v97) = v22; /*0x46a4b5*/
              v82 = v97; /*0x46a4c8*/
              _BYTE * v23 = (_BYTE *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v82) + 57); /*0x46a4d7*/
              if ( v23 ) /*0x46a4df*/
              {
                ParticleSystemClass *v24 = *(this + 44); /*0x46a4e5*/
                if ( v23 != (_BYTE *)v24 && v24 && !Object::IsAlliedWithObjectHouse(v24->q21C, (int)v23) ) /*0x46a502*/
                {
                  char v25 = *(_BYTE *)(v13 + 303); /*0x46a515*/
                  int v26 = v13->q0A4; /*0x46a51b*/
                  int v27 = *(_DWORD *)(v13 + 168); /*0x46a521*/
                  bool v102 = v13->q02B; /*0x46a527*/
  int v101; // [esp+CCh] [ebp-14h]
                  LOBYTE(v101) = v25; /*0x46a53b*/
                  ParticleSystemClass *v28 = *(this + 44); /*0x46a542*/
                  LODWORD(v88) = v26; /*0x46a551*/
                  LODWORD(v77) = v28; /*0x46a555*/
                  ppv = 0; /*0x46a559*/
                  if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &ppv) >= 0 ) /*0x46a56c*/
                  {
                    v82 = ppv; /*0x46a59d*/
                    Particle::Init((int)ppv, v99, (int)v23, SLODWORD(v77), SLODWORD(v88), v102, v27, v101); /*0x46a5a1*/
                    if ( v82 ) /*0x46a5ac*/
                    {
                      int * v29 = this + 39; /*0x46a5b2*/
                      v73 = 0.0; /*0x46a5b8*/
                      v74 = 0.0; /*0x46a5ca*/
                      int v30 = *(this + 39); /*0x46a5da*/
                      v75 = 0.0; /*0x46a5dc*/
                      v93 = v30; /*0x46a5ec*/
                      v94 = *(this + 40); /*0x46a5f8*/
                      int v31 = *(_DWORD *)v23; /*0x46a5ff*/
                      v95 = *(this + 41); /*0x46a605*/
                      _DWORD * v32 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(v31 + 72))(v23, v103); /*0x46a614*/
                      LODWORD(v77) = *v32; /*0x46a61c*/
                      double v33 = Math::CalcAngle((double)v94 - (double)(int)v32[1], (double)SLODWORD(v77) - (double)v93); /*0x46a63f*/
                      v34 = Math::RoundToInt((v33 - 1.570796326794897) * -10430.06004058427); /*0x46a653*/
                      double v35 = v73; /*0x46a658*/
                      LOWORD(v87) = v34; /*0x46a662*/
                      if ( v73 == 0.0 ) /*0x46a66c*/
                      {
                        v35 = v74; /*0x46a66e*/
                        if ( v74 == 0.0 ) /*0x46a67d*/
                          v73 = 100.0; /*0x46a67f*/
                      }
                      Function::Method_41C430(&v73); /*0x46a693*/
                      v88 = v35; /*0x46a69d*/
                      LODWORD(v77) = SLOWORD(v87) - 0x3FFF; /*0x46a6a7*/
                      v77 = (double)SLODWORD(v77) * -0.00009587672516830327; /*0x46a6b5*/
                      v73 = Math::ArcTan2(v77) * v35; /*0x46a6d6*/
                      double v36 = -(Math::SinCos(v77) * v88); /*0x46a6ea*/
                      v74 = v36; /*0x46a6ec*/
                      Math::Hypotenuse2D(&v73); /*0x46a6f0*/
                      double v37 = Math::CalcAngle(v75, v36); /*0x46a705*/
  double v38; // st7
                      v38 = (double)((__int16)Math::RoundToInt((v37 - 1.570796326794897) * -10430.06004058427) - 0x3FFF) /*0x46a732*/
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
                      double v39 = v73; /*0x46a7dc*/
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
                      double v40 = v77 / v39; /*0x46a828*/
                      v90 = *v29; /*0x46a830*/
                      v91 = *(this + 40); /*0x46a837*/
                      v92 = *(this + 41); /*0x46a842*/
                      v73 = v40 * v73; /*0x46a859*/
                      v74 = v74 * v40; /*0x46a863*/
                      v75 = v75 * v40; /*0x46a86d*/
                      (*(void (__thiscall **)(LPVOID, int *, double *))(*(_DWORD *)v82 + 496))(v82, &v90, &v73); /*0x46a875*/
                      int v41 = *(this + 40); /*0x46a87d*/
                      int v42 = *(this + 41); /*0x46a880*/
                      v84 = *v29; /*0x46a883*/
                      char v43 = *(_BYTE *)(v13 + 329); /*0x46a887*/
                      v85 = v41; /*0x46a88d*/
                      v86 = v42; /*0x46a893*/
                      if ( v43 ) /*0x46a897*/
                      {
                        ParticleSystemClass *v44 = (_DWORD *)*(this + 44); /*0x46a899*/
                        if ( v44 ) /*0x46a8a1*/
                          TechnoClass::CreateFireEffect(v44, v23, 0, v13, &v84); /*0x46a8ac*/
                      }
                      if ( *(_BYTE *)(v13 + 337) ) /*0x46a8b1*/
                      {
                        ParticleSystemClass *v45 = (int *)*(this + 44); /*0x46a8bb*/
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
              v20 = ++v100 < SLODWORD(v78); /*0x46a8f9*/
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
        v81 = (_WORD *)(v76 - v16); /*0x46a93e*/
        do /*0x46adc7*/
        {
          v76 = *(_DWORD *)this->vt_slot_440(&v88); /*0x46a962*/
          v46 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -2, 2); /*0x46a966*/
          LOWORD(v76) = v46 + v76; /*0x46a971*/
          v47 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, -2, 2); /*0x46a980*/
          char v48 = *(_BYTE *)(v13 + 303); /*0x46a985*/
          ParticleSystemClass *v49 = *(this + 44); /*0x46a98b*/
          HIWORD(v76) += v47; /*0x46a991*/
          int v50 = v13->q0A4; /*0x46a996*/
          int v51 = *(_DWORD *)(v13 + 168); /*0x46a99c*/
          bool v52 = v13->q02B; /*0x46a9a2*/
          LOBYTE(v83) = v48; /*0x46a9a8*/
          LODWORD(v87) = v49; /*0x46a9b0*/
          LODWORD(v78) = v50; /*0x46a9ba*/
          LODWORD(v77) = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x46a9c3*/
          v79 = 0; /*0x46a9da*/
          if ( CoCreateInstance(&rclsid, 0, 7u, &IID_IUnknown, &v79) >= 0 ) /*0x46a9ea*/
          {
            v80 = (int)v79; /*0x46aa12*/
            Particle::Init((int)v79, v99, SLODWORD(v77), SLODWORD(v87), SLODWORD(v78), v52, v51, v83); /*0x46aa16*/
            if ( v80 ) /*0x46aa21*/
            {
              v73 = 0.0; /*0x46aa31*/
              v74 = 0.0; /*0x46aa41*/
              v75 = 0.0; /*0x46aa51*/
              int * v53 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x46aa61*/
              int * v54 = this + 39; /*0x46aa66*/
              v84 = *(this + 39); /*0x46aa70*/
              v85 = *(this + 40); /*0x46aa77*/
              int v55 = *v53; /*0x46aa7b*/
              v86 = *(this + 41); /*0x46aa80*/
              _DWORD * v56 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v55 + 72))(v53, v103); /*0x46aa8e*/
              LODWORD(v78) = *v56; /*0x46aa96*/
              double v57 = Math::CalcAngle((double)v85 - (double)(int)v56[1], (double)SLODWORD(v78) - (double)v84); /*0x46aab3*/
              v58 = Math::RoundToInt((v57 - 1.570796326794897) * -10430.06004058427); /*0x46aad6*/
              if ( v73 == 0.0 && v74 == 0.0 ) /*0x46aaef*/
                v73 = 100.0; /*0x46aaf1*/
              v87 = Math::Sqrt(v74 * v74 + v73 * v73); /*0x46ab26*/
              LODWORD(v78) = v58 - 0x3FFF; /*0x46ab2a*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ab38*/
              unsigned int v59 = HIDWORD(v78); /*0x46ab3c*/
              v73 = Math::ArcTan2(v78) * v87; /*0x46ab55*/
              double v60 = -(Math::SinCos(COERCE_DOUBLE(__PAIR64__(v59, LODWORD(v78)))) * v87); /*0x46ab65*/
              v74 = v60; /*0x46ab67*/
              v78 = (double)*(int *)(v13 + 168); /*0x46ab71*/
              if ( v73 == 0.0 && v60 == 0.0 && v75 == 0.0 ) /*0x46aba2*/
                v73 = 100.0; /*0x46aba4*/
              double v61 = Math::Sqrt(v75 * v75 + v73 * v73 + v60 * v60); /*0x46abd6*/
              double v62 = v78 / v61; /*0x46abdb*/
              v73 = v62 * v73; /*0x46abec*/
              v74 = v74 * v62; /*0x46abf6*/
              v75 = v75 * v62; /*0x46ac00*/
              Math::Hypotenuse2D(&v73); /*0x46ac06*/
              double v63 = Math::CalcAngle(v75, v62); /*0x46ac1b*/
              LODWORD(v78) = (__int16)Math::RoundToInt((v63 - 1.570796326794897) * -10430.06004058427) - 0x3FFF; /*0x46ac3d*/
              v78 = (double)SLODWORD(v78) * -0.00009587672516830327; /*0x46ac4b*/
              v87 = Math::Sqrt(v74 * v74 + v75 * v75 + v73 * v73); /*0x46ac73*/
              if ( v78 != 0.0 ) /*0x46ac89*/
              {
                unsigned int v64 = HIDWORD(v78); /*0x46ac8b*/
                v73 = v73 / Math::ArcTan2(v78); /*0x46aca4*/
                v74 = v74 / Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v64, LODWORD(v78)))); /*0x46acb4*/
              }
              v73 = Math::ArcTan2(0.7853262558535721) * v73; /*0x46acd5*/
              v74 = Math::ArcTan2(0.7853262558535721) * v74; /*0x46acec*/
              double v65 = Math::SinCos(0.7853262558535721); /*0x46acf0*/
              v90 = *v54; /*0x46ad00*/
              int v66 = *(this + 40); /*0x46ad04*/
              v75 = v65 * v87; /*0x46ad07*/
              int v67 = *(this + 41); /*0x46ad0b*/
              v91 = v66; /*0x46ad0e*/
              v92 = v67; /*0x46ad16*/
              (*(void (__thiscall **)(int, int *, double *))(*(_DWORD *)v80 + 496))(v80, &v90, &v73); /*0x46ad29*/
              int v68 = *(this + 40); /*0x46ad31*/
              int v69 = *(this + 41); /*0x46ad34*/
              v93 = *v54; /*0x46ad37*/
              char v70 = *(_BYTE *)(v13 + 329); /*0x46ad3e*/
              v94 = v68; /*0x46ad44*/
              v95 = v69; /*0x46ad4d*/
              if ( v70 && *(this + 44) ) /*0x46ad56*/
              {
                _BYTE * v71 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x46ad75*/
                TechnoClass::CreateFireEffect((_DWORD *)*(this + 44), v71, 0, v13, &v93); /*0x46ad81*/
              }
              if ( *(_BYTE *)(v13 + 337) ) /*0x46ad86*/
              {
                if ( *(this + 44) ) /*0x46ad90*/
                {
                  _BYTE * v72 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v76); /*0x46adad*/
                  TechnoClass::CreateRadarBlip((int *)*(this + 44), v72, v13, &v93); /*0x46adb9*/
                }
              }
            }
          }
          result = (int)v81 - 1; /*0x46adc2*/
          v81 = (_WORD *)((char *)v81 - 1); /*0x46adc3*/
        }
        while ( v81 ); /*0x46adc7*/
      }
    }
  }
  return result; /*0x46adcd*/
}
}

// 0x65B580
int Warhead::ProcessDamageArea()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v24 = *((_DWORD *)g_RulesClass_Instance + 1540); /*0x65b5a3*/
  int v25 = *((_DWORD *)g_RulesClass_Instance + 1541); /*0x65b5a7*/
  *(_DWORD *)(this + 40) = g_CurrentFrame; /*0x65b5ab*/
  int v28; // [esp+2Ch] [ebp-14h]
  *(_DWORD *)(this + 44) = v28; /*0x65b5b3*/
  this->q00C = v24; /*0x65b5b9*/
  this->q034 = g_CurrentFrame; /*0x65b5c2*/
  *(_DWORD *)(this + 56) = v28; /*0x65b5c8*/
  *(_DWORD *)(this + 60) = v25; /*0x65b5cb*/
  double * v2 = (double *)g_RulesClass_Instance; /*0x65b5ce*/
  int v3 = *((unsigned __int8 *)g_RulesClass_Instance + 6194); /*0x65b5e2*/
  int v4 = *((unsigned __int8 *)g_RulesClass_Instance + 6193); /*0x65b5e8*/
  int v5 = *((unsigned __int8 *)g_RulesClass_Instance + 6192); /*0x65b5f5*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  int v21 = 1000 * v5 / 255; /*0x65b62a*/
  double v6 = (double)this->q013 * *((double *)g_RulesClass_Instance + 772); /*0x65b63e*/
  int v26 = this->q012; /*0x65b679*/
  int v23 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  int v7 = Math::RoundToInt(v6); /*0x65b69e*/
  double v8 = (double)v21 * v2[773]; /*0x65b6a0*/
  if ( v8 > 2000.0 ) /*0x65b6b3*/
    v8 = 2000.0; /*0x65b6b7*/
  int v22 = Math::RoundToInt(v8); /*0x65b6c6*/
  double v9 = (double)(1000 * v4 / 255) * v2[773]; /*0x65b6ca*/
  if ( v9 > 2000.0 ) /*0x65b6dd*/
    v9 = 2000.0; /*0x65b6e1*/
  int v10 = Math::RoundToInt(v9); /*0x65b6f0*/
  double v11 = (double)v23 * v2[773]; /*0x65b6f2*/
  if ( v11 > 2000.0 ) /*0x65b705*/
    v11 = 2000.0; /*0x65b709*/
  int v12 = Math::RoundToInt(v11); /*0x65b70f*/
  bool v13 = this->q01B; /*0x65b714*/
  int v14 = v12; /*0x65b71b*/
  *(_DWORD *)(this + 88) = v22; /*0x65b71f*/
  *(_DWORD *)(this + 92) = v10; /*0x65b722*/
  *(_DWORD *)(this + 96) = v12; /*0x65b72a*/
  *(_DWORD *)(this + 84) = v7; /*0x65b72d*/
  *(_DWORD *)(this + 80) = v13 / v24; /*0x65b730*/
  int v15 = v13 / v25; /*0x65b73a*/
  *(_DWORD *)(this + 100) = v15; /*0x65b741*/
  *(_DWORD *)(this + 104) = v7 / v15; /*0x65b749*/
  void * v16 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)(this + 64)); /*0x65b750*/
  _BYTE v31[12]; // [esp+34h] [ebp-Ch] BYREF
  int * v17 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v16 + 72))(v16, v31); /*0x65b75e*/
  int v27 = *v17; /*0x65b763*/
  int v29 = v17[1]; /*0x65b76a*/
  int v30 = v17[2]; /*0x65b776*/
  if ( *(_DWORD *)(this + 36) ) /*0x65b76e*/
  {
    TacticalClass::UpdateScrollTarget(v7, v22, v10, v14, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate(this); /*0x65b7ef*/
  }
  else
  {
    _DWORD * v18 = __2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v18 ) /*0x65b788*/
      _DWORD * v19 = LightSourceClass::Construct(v18, v27, v29, v30, v26, v7, v22, v10, v14); /*0x65b7b2*/
    else
      v19 = 0; /*0x65b7b9*/
    *(_DWORD *)(this + 36) = v19; /*0x65b7bb*/
    v19[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*(_BYTE **)(this + 36), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate(this); /*0x65b7d1*/
  }
}
}
