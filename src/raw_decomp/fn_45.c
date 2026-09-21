// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x004500A0  BuildingClass::GetAdjustedExitCoords  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetAdjustedExitCoords(#377 *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  _BYTE v9[12]; // [esp+Ch] [ebp-Ch] BYREF
  int *v10; // [esp+1Ch] [ebp+4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v9); /*0x4500b1*/
  v3 = v2[1]; /*0x4500b6*/
  v4 = v2[2]; /*0x4500b9*/
  v5 = *v2 + *(_DWORD *)(this->gattlingValue + 3772); /*0x4500cd*/
  v6 = *(_DWORD *)(this->gattlingValue + 3776); /*0x4500cf*/
  v7 = *(_DWORD *)(this->gattlingValue + 3780); /*0x4500d2*/
  *v10 = v5; /*0x4500db*/
  v10[1] = v3 + v6; /*0x4500dd*/
  v10[2] = v4 + v7; /*0x4500e0*/
  return (int)v10; /*0x4500e5*/
}


// ==== 0x004500F0  ObjectClass::ProcessAutoProduction  this=BuildingClass  sig=csp ====
void __thiscall ProcessAutoProduction(void *this)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *TypeAbstractClass; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  wchar_t *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // edi
  char v21; // al
  void *v22; // eax
  int v23; // eax
  char v24; // al
  int v25; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  int v27; // [esp+10h] [ebp-8h]
  int v28; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)this->Factory; /*0x4500fa*/
  if ( !v2 || !ObjectClass::IsCliffWall(v2) ) /*0x450108*/
    goto LABEL_19; /*0x45010f*/
  v3 = this->veterancy; /*0x450115*/
  v4 = this->q558; /*0x45011b*/
  if ( v3 == -1 ) /*0x450124*/
    goto LABEL_6; /*0x450124*/
  if ( (int)MEMORY[0xA8ED84] - v3 < v4 ) /*0x450130*/
  {
    v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x450132*/
LABEL_6:
    if ( v4 ) /*0x450136*/
      goto LABEL_19; /*0x450136*/
  }
  TypeAbstractClass = (_DWORD *)AbstractClass::GetType(*((_DWORD **)this + 329)); /*0x45013c*/
  v6 = (*(int (__thiscall **)(void *, _DWORD *, int))(this->turretChargeTimer)(this, TypeAbstractClass, dword_89C818); /*0x450155*/
  if ( !v6 ) /*0x45015d*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*TypeAbstractClass + 44))(TypeAbstractClass) == 6 /*0x450211*/
      && *(_BYTE *)(TypeAbstractClass[328] + 3278) )
    {
      *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*TypeAbstractClass + 60))(TypeAbstractClass) + 496) = 0; /*0x450220*/
    }
    FactoryClass::AbandonProduction(this->Factory); /*0x45022c*/
    v13 = this->Factory; /*0x450231*/
    if ( v13 ) /*0x450239*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 32))(v13, 1); /*0x45023f*/
    goto LABEL_18; /*0x45023f*/
  }
  v7 = v6 - 1; /*0x450163*/
  if ( v7 ) /*0x450164*/
  {
    if ( v7 == 1 ) /*0x450167*/
    {
      v26 = this->q027; /*0x450176*/
      v8 = this->gattlingValue; /*0x45017a*/
      v27 = this->owningHouseIndex; /*0x450183*/
      v28 = this->q029; /*0x45018a*/
      PlayAudioAt2(*(_DWORD *)(v8 + 3700), &v26, 0); /*0x450198*/
      HouseClass::ProcessPromotionSound(TypeAbstractClass); /*0x4501a4*/
      ProductionQueue::CompleteOrCancel(this->Factory); /*0x4501af*/
      v9 = this->Factory; /*0x4501b4*/
      if ( v9 ) /*0x4501bc*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 32))(v9, 1); /*0x4501c6*/
LABEL_18:
      this->Factory = 0; /*0x450242*/
    }
  }
  else
  {
    v10 = MEMORY[0xA8ED84]; /*0x4501d0*/
    v11 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0]->PlacementDelay * 900.0); /*0x4501e2*/
    v12 = v27; /*0x4501e7*/
    this->veterancy = v10; /*0x4501eb*/
    this->q1550 = v12; /*0x4501f1*/
    this->q558 = v11; /*0x4501f7*/
  }
LABEL_19:
  if ( !*(_BYTE *)(this->owner + 494) /*0x450286*/
    || (*(int (__thiscall **)(void *))(this->q184)(this) == 18
    || (*(int (__thiscall **)(void *))(this->q184)(this) == 19
    || !*(_DWORD *)(this->gattlingValue + 3768) )
  {
    return; /*0x45028c*/
  }
  v14 = this->Factory; /*0x450292*/
  if ( v14 ) /*0x45029a*/
  {
    v15 = this->veterancy; /*0x45029c*/
    v16 = this->q558; /*0x4502a2*/
    if ( v15 != -1 ) /*0x4502ab*/
    {
      if ( (int)MEMORY[0xA8ED84] - v15 >= v16 ) /*0x4502b7*/
      {
LABEL_28:
        if ( *(_DWORD *)(v14 + 56) && !*(_BYTE *)(v14 + 112) ) /*0x4502cb*/
          return; /*0x4502cb*/
        FactoryClass::AbandonProduction(v14); /*0x4502d1*/
        v17 = (_DWORD *)this->Factory; /*0x4502d6*/
        goto LABEL_31; /*0x4502d6*/
      }
      v16 -= (int)MEMORY[0xA8ED84] - v15; /*0x4502b9*/
    }
    if ( v16 ) /*0x4502bd*/
      return; /*0x4502bd*/
    goto LABEL_28; /*0x4502bd*/
  }
  v18 = this->owner; /*0x4502f4*/
  if ( *(_BYTE *)(v18 + 494) )
  {
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v18 + 36) + 24))(v18 + 36) > 10 )
    {
      v19 = sub_4FBD80(*(_DWORD *)(this->gattlingValue + 3768), 0); /*0x45032d*/
      v20 = v19; /*0x450332*/
      if ( v19 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 44))(v19) != 40
          || ((v21 = *(_BYTE *)(this->gattlingValue + 3278)) == 0 || *(_BYTE *)(v20 + 3278))
          && (!*(_BYTE *)(v20 + 3278) || v21) )
        {
          v22 = __2_YAPAXI_Z(0x74u); /*0x45036e*/
          v23 = v22 ? TeamTypeClass::Construct((int)v22) : 0;
          this->Factory = v23; /*0x450387*/
          if ( v23 ) /*0x45038d*/
          {
            v24 = FactoryClass::DemandProduction(v20, *((#375 **)this + 135), 0); /*0x45039a*/
            v17 = (_DWORD *)this->Factory; /*0x45039f*/
            if ( v24 ) /*0x4503a7*/
            {
              v25 = AbstractClass::GetType(v17); /*0x4503ad*/
              nullsub_100(v25); /*0x4503b9*/
              ProductionClass::StartTimer(this->Factory, 0); /*0x4503c5*/
              return; /*0x4503c5*/
            }
LABEL_31:
            if ( v17 ) /*0x4502de*/
              (*(void (__thiscall **)(_DWORD *, int))(*v17 + 32))(v17, 1); /*0x4502e4*/
            this->Factory = 0; /*0x4502e7*/
          }
        }
      }
    }
  }
}


// ==== 0x004503E0  nullsub_101  this=-  sig=ida-proto ====
void nullsub_101()
{
  ; /*0x4503e0*/
}


// ==== 0x004503F0  BuildingClass::UpdatePrism  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePrism(int *this)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // eax
  int v5; // ecx

  LODWORD(v2) = this->PrismStage; /*0x4503f3*/
  if ( (_DWORD)v2 ) /*0x4503fb*/
  {
    v3 = this->DelayBeforeFiring - 1; /*0x450407*/
    this->DelayBeforeFiring = v3; /*0x45040a*/
    if ( v3 <= 0 ) /*0x450412*/
    {
      v4 = v2 - 1; /*0x450418*/
      this->DelayBeforeFiring = 0; /*0x450419*/
      if ( v4 ) /*0x450423*/
      {
        LODWORD(v2) = v4 - 1; /*0x450425*/
        if ( !(_DWORD)v2 ) /*0x450426*/
        {
          LODWORD(v2) = BuildingClass::FireLaser(this, this->PrismTargetCoords, this->q70C, this->q1C4); /*0x45044d*/
          this->PrismStage = 0; /*0x450452*/
          return v2; /*0x45045d*/
        }
      }
      else
      {
        LODWORD(v2) = this->target; /*0x45045e*/
        if ( (_DWORD)v2 ) /*0x450466*/
        {
          LODWORD(v2) = (*(int (__thiscall **)(int *, _DWORD, _DWORD, int))(*this + 960))(this, v2, this->PrismTargetCoords, 1); /*0x450476*/
          if ( !(_DWORD)v2 ) /*0x45047e*/
          {
            LODWORD(v2) = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 972))( /*0x450492*/
                            this,
                            this->target,
                            this->PrismTargetCoords);
            v5 = v2; /*0x450498*/
            if ( (_DWORD)v2 ) /*0x45049c*/
            {
              LODWORD(v2) = this->q199; /*0x45049e*/
              if ( (_DWORD)v2 ) /*0x4504a6*/
              {
                v2 = 1374389535LL * (unsigned int)(((_DWORD)v2 * HIDWORD(MEMORY[0x8871E0]->?) + 100) << 8); /*0x4504c2*/
                *(_DWORD *)(v5 + 336) = HIDWORD(v2) >> 5; /*0x4504c7*/
                this->q199 = 0; /*0x4504cd*/
              }
            }
          }
        }
      }
      this->PrismStage = 0; /*0x4504d7*/
    }
  }
  return v2; /*0x45045c*/
}


// ==== 0x00450630  BuildingClass::ProcessActiveAnimation  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::ProcessActiveAnimation(ObjectClass *this)
{
  int v2; // ecx
  int v3; // edi
  IUnknown *v4; // ebp
  IUnknown *v5; // eax
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // et2
  int v11; // ecx
  IUnknown *v12; // edi
  int v13; // ebp
  int v14; // edx
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  BOOL v18; // ebx
  IUnknown *v19; // ebp
  int v20; // edi
  _BYTE *v21; // eax
  int v22; // ecx
  _DWORD *v24; // [esp+10h] [ebp-14h]
  int ProductionFrame; // [esp+14h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-8h]

  if ( *(_DWORD *)(this->owner + 588) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5188) /*0x450683*/
    || (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)this->__pad_0 + 388))(this) == 18
    || (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)this->__pad_0 + 388))(this) == 19
    || !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(*(_DWORD *)this->__pad_0 + 148))(this) )
  {
    goto LABEL_22; /*0x45068b*/
  }
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 36) + 24))(this->owner + 36) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5976) ) /*0x4506ac*/
  {
    if ( (*(_DWORD *)&HouseClass_Player.__pad_5568[8068] || this->BuildingClass_field_bool_6DC) /*0x450805*/
      && this->hasBeenAttacked
      && *(_DWORD *)(this->owner + 464) >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5212)
      && (unsigned int)Random::Range(
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x32) < *(_DWORD *)(this->owner + 468)
      && !this->attachedTag
      && *(_DWORD *)(this->gattlingValue + 3768) != 7
      && BuildingClass::GetHealthRatio((int *)this->__pad_0) < *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                         + 5896) )
    {
      (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)this->__pad_0 + 416))(this, 1); /*0x45080d*/
    }
LABEL_22:
    LOBYTE(v8) = this->IsBeingRepaired; /*0x450813*/
    if ( !(_BYTE)v8 ) /*0x45081b*/
      return v8; /*0x45081b*/
    goto LABEL_23; /*0x45081b*/
  }
  v2 = this->owner; /*0x4506b2*/
  if ( *(_BYTE *)(v2 + 581) ) /*0x4506b8*/
    goto LABEL_22; /*0x4506c0*/
  if ( !this->IsBeingRepaired ) /*0x4506c6*/
  {
    if ( this->HasBeenCaptured || this->q6CB || (unsigned __int8)House::IsCurrentPlayer((#375 *)v2) ) /*0x4506e8*/
    {
      *(_BYTE *)(this->owner + 581) = 1; /*0x4506ff*/
      (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)this->__pad_0 + 412))(this, 1); /*0x450708*/
      if ( !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)this + 135)) ) /*0x450714*/
      {
        v3 = this->owner; /*0x450721*/
        v4 = (IUnknown *)Math::RoundToInt(*(double *)(v3 + 448) * 1800.0); /*0x450744*/
        v5 = (IUnknown *)Math::RoundToInt(*(double *)(v3 + 448) * 225.0); /*0x450746*/
        v6 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), v5, v4); /*0x450759*/
        v7 = (_DWORD *)(this->owner + 640); /*0x45076a*/
        *v7 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x450770*/
        v7[1] = v26; /*0x450776*/
        v7[2] = v6; /*0x450779*/
      }
    }
    goto LABEL_22; /*0x45077c*/
  }
LABEL_23:
  v9 = Math::RoundToInt(*(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5856) * 900.0); /*0x450821*/
  v10 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] % v9; /*0x45083f*/
  v8 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] / v9; /*0x45083f*/
  if ( !v10 )
  {
    v11 = this->gattlingValue; /*0x45084f*/
    this->NeedsRepairs = this->NeedsRepairs == 0; /*0x45085a*/
    v12 = (IUnknown *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 176))(v11); /*0x45086e*/
    v13 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 328) + 180))(this->gattlingValue); /*0x45087a*/
    ProductionFrame = BuildingClass::GetProductionFrame((int *)this->__pad_0); /*0x450881*/
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->owner + 36) + 24))(this->owner + 36); /*0x450891*/
    if ( v8 < (int)v12 )
    {
      this->IsBeingRepaired = 0; /*0x4509b4*/
    }
    else
    {
      HouseClass::ProcessPowerDrain(this->owner, v12); /*0x4508a3*/
      v14 = this->gattlingValue; /*0x4508ae*/
      v15 = v13 + this->health; /*0x4508b4*/
      v16 = v13 + this->estimatedHealth; /*0x4508b6*/
      this->health = v15; /*0x4508b8*/
      this->estimatedHealth = v16; /*0x4508bb*/
      v17 = *(_DWORD *)(v14 + 160); /*0x4508be*/
      if ( v15 >= v17 ) /*0x4508c8*/
      {
        this->health = v17; /*0x4508ca*/
        this->estimatedHealth = v17; /*0x4508cd*/
        this->IsBeingRepaired = 0; /*0x4508d0*/
      }
      v18 = BuildingClass::GetHealthRatio((int *)this->__pad_0) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x4508ee*/
                                                                             + 5888);
      if ( this->IsDamaged != v18 )
      {
        v19 = 0; /*0x450907*/
        this->IsDamaged = v18; /*0x450909*/
        v20 = 0; /*0x45090f*/
        v24 = (_DWORD *)((char *)this + 1372); /*0x450911*/
        do
        {
          if ( *v24 )
          {
            v21 = (_BYTE *)(v18 ? v20 + this->gattlingValue + 3932 : v20 + this->gattlingValue + 3916);
            if ( v21 && *v21 ) /*0x450942*/
              BuildingClass::PlayAnim(this, (int)v24, v21, v19, (IUnknown *)v18, 0, 0); /*0x450950*/
          }
          v20 += 68; /*0x450959*/
          v19 = (IUnknown *)((char *)v19 + 1); /*0x45095c*/
          ++v24; /*0x450966*/
        }
        while ( v20 < 1428 );
      }
      if ( BuildingClass::GetHealthRatio((int *)this->__pad_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x450984*/
                                                                           + 5888) )
      {
        v22 = this->missionData; /*0x450986*/
        if ( v22 ) /*0x45098e*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 248))(v22); /*0x450992*/
      }
      v8 = BuildingClass::GetProductionFrame((int *)this->__pad_0); /*0x45099a*/
      if ( v8 != ProductionFrame ) /*0x4509a3*/
        this->needsRedraw = 1; /*0x4509a5*/
    }
  }
  return v8; /*0x4509ac*/
}


// ==== 0x004509D0  BuildingClass::UpdateAnimFrames  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::UpdateAnimFrames(int this)
{
  TerrainTypeClass *v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // edx
  BuildingTypeClass *v7; // edi
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  int v10; // ecx
  _BYTE *v11; // eax
  BuildingTypeClass *v12; // eax
  BOOL v13; // ebx
  bool v14; // al
  int v15; // edx
  int *v16; // eax
  bool v17; // zf
  BuildingTypeClass *v18; // eax
  BOOL v19; // ebx
  bool v20; // al
  int v21; // edx
  int *v22; // eax
  BuildingTypeClass *v23; // eax
  BuildingTypeClass *v24; // ecx
  int v25; // eax
  double v26; // st7
  int v27; // eax
  BuildingTypeClass *v28; // edx
  int v29; // edi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  _BYTE *v33; // eax
  double v34; // st7
  int v35; // eax
  double v36; // st7
  int v37; // ecx
  double v38; // st7
  int v39; // eax
  double v40; // st7
  int v41; // ecx
  _BYTE *v42; // eax
  int v43; // edx
  int v44; // ecx
  _BYTE *v45; // eax
  int v46; // edx
  int v47; // ecx
  _BYTE *v48; // eax
  int v49; // ecx
  _BYTE *v50; // eax
  int v51; // eax
  int v52; // ebx
  BuildingTypeClass *v53; // edi
  _DWORD *v54; // eax
  int v55; // edx
  int v56; // ecx
  int v57; // edx
  int v58; // ecx
  _BYTE *v59; // eax
  int v60; // edx
  int v61; // ecx
  _BYTE *v62; // eax
  BuildingTypeClass *v63; // ecx
  int *v64; // edi
  _DWORD *Value; // eax
  int v66; // ecx
  unsigned int v67; // eax
  char result; // al
  unsigned int v69; // eax
  _DWORD *v70; // edi
  char *ProductionTimeMult; // eax
  BuildingTypeClass *v72; // eax
  char v73; // [esp+Eh] [ebp-12h]
  char v74; // [esp+Fh] [ebp-11h]
  int v75; // [esp+10h] [ebp-10h] BYREF
  int v76; // [esp+18h] [ebp-8h]

  v2 = (TerrainTypeClass *)(this + 256); /*0x4509de*/
  if ( CDTimerClass::TimeRemaining((int *)(this + 256)) || (v3 = *(_DWORD *)(this + 268)) == 0 ) /*0x4509f7*/
  {
    *(_BYTE *)(this + 252) = 0; /*0x450a2c*/
    v73 = 0; /*0x450a33*/
  }
  else
  {
    v4 = *(_DWORD *)(this + 272); /*0x4509f9*/
    v5 = *(_DWORD *)(this + 248); /*0x4509ff*/
    *(_BYTE *)(this + 252) = 1; /*0x450a07*/
    *(_DWORD *)(this + 248) = v4 + v5; /*0x450a0e*/
    v6 = v76; /*0x450a19*/
    *(_DWORD *)v2->__pad_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x450a1d*/
    *(_DWORD *)&v2->__pad_0[4] = v6; /*0x450a1f*/
    *(_DWORD *)&v2->__pad_0[8] = v3; /*0x450a22*/
    v73 = 1; /*0x450a25*/
  }
  v74 = 0; /*0x450a3c*/
  v7 = (BuildingTypeClass *)(*(int (__thiscall **)(int))(this->infantryBlinkTimer)(this); /*0x450a4b*/
  v8 = ((__int64 (__thiscall *)(int))*(_DWORD *)(this->q1BC)(this); /*0x450a4d*/
  v9 = globalHelper_056FB0((_DWORD *)this, SHIDWORD(v8), *(__int16 *)(v8 + 266)); /*0x450a5d*/
  *(_WORD *)(this + 1792) = v9; /*0x450a62*/
  BuildingClass::SyncCrateVisuals((char *)this, v7, v9); /*0x450a72*/
  BuildingClass::SetConnectedBuildingMission((int *)this, (BuildingClass *)*(char *)(this + 1773)); /*0x450a81*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + 5801) /*0x450ac7*/
    && (*(int (__thiscall **)(int))(this->q184)(this) != 20
    && (*(_DWORD *)(this + 1404) || *(_DWORD *)(this + 1416))
    && !*(_BYTE *)(*(_DWORD *)(this + 1312) + 3278) )
  {
    if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x450ae9*/
    {
      v10 = 0; /*0x450b03*/
      v11 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4732); /*0x450b05*/
    }
    else
    {
      v10 = 1; /*0x450af1*/
      v11 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4748); /*0x450af6*/
    }
    if ( v11 && *v11 ) /*0x450b0e*/
      BuildingClass::PlayAnim( /*0x450b1d*/
        (ObjectClass *)this,
        *(int *)&stru_87C374.__pad_579C[22224],
        v11,
        (IUnknown *)0xC,
        (IUnknown *)v10,
        0,
        0);
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)8); /*0x450b26*/
    BuildingClass::ClearAnims((int *)this, (TechnoClass *)0xB); /*0x450b2f*/
  }
  v12 = *(BuildingTypeClass **)(this + 1312); /*0x450b34*/
  if ( v12->ExtraPowerBonus > 0 && v12->InfantryAbsorb && *(_BYTE *)(this + 1764) && *(_DWORD *)(this + 1332) )
  {
    if ( HouseClass::SumPowerDrain((int *)(this + 276)) <= 0 )
    {
      if ( *(_DWORD *)(this + 1388) ) /*0x450c22*/
        BuildingClass::ClearAnims((int *)this, (TechnoClass *)4); /*0x450c30*/
      if ( !*(_DWORD *)(this + 1384) )
      {
        v19 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x450c57*/
        v20 = (*(int (__thiscall **)(int))(this->q408)(this) > 0; /*0x450c6e*/
        LOBYTE(v75) = v20; /*0x450c73*/
        if ( v19 )
        {
          v22 = (int *)(*(_DWORD *)(this + 1312) + 4136); /*0x450c7f*/
        }
        else
        {
          v17 = !v20; /*0x450c86*/
          v23 = *(BuildingTypeClass **)(this + 1312); /*0x450c88*/
          v22 = v17 ? &v23->?[51] : &v23->?[59];
        }
        if ( v22 && *(_BYTE *)v22 ) /*0x450ca0*/
          BuildingClass::PlayAnim((ObjectClass *)this, v21, v22, (IUnknown *)3, (IUnknown *)v19, v75, 0); /*0x450cb2*/
      }
    }
    else
    {
      if ( *(_DWORD *)(this + 1384) ) /*0x450b85*/
        BuildingClass::ClearAnims((int *)this, (TechnoClass *)3); /*0x450b93*/
      if ( !*(_DWORD *)(this + 1388) )
      {
        v13 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x450bbd*/
        v14 = (*(int (__thiscall **)(int))(this->q408)(this) > 0; /*0x450bd4*/
        LOBYTE(v75) = v14; /*0x450bd9*/
        if ( v13 )
        {
          v16 = (int *)(*(_DWORD *)(this + 1312) + 4204); /*0x450be5*/
        }
        else
        {
          v17 = !v14; /*0x450bec*/
          v18 = *(BuildingTypeClass **)(this + 1312); /*0x450bee*/
          v16 = v17 ? &v18->?[68] : &v18->?[76];
        }
        if ( v16 && *(_BYTE *)v16 ) /*0x450c0a*/
          BuildingClass::PlayAnim((ObjectClass *)this, v15, v16, (IUnknown *)4, (IUnknown *)v13, v75, 0); /*0x450c1d*/
      }
    }
  }
  v24 = *(BuildingTypeClass **)(this + 1312); /*0x450cb7*/
  if ( v24->SiloDamage ) /*0x450cbd*/
  {
    v25 = 0; /*0x450cd1*/
    if ( *(int *)&v24->DebrisTypes[1260] <= 0 ) /*0x450cd5*/
      goto LABEL_49; /*0x450cd5*/
    v26 = Float4::Sum((float *)(this + 828)); /*0x450cdd*/
    v27 = Math::RoundToInt(v26); /*0x450ce2*/
    v28 = *(BuildingTypeClass **)(this + 1312); /*0x450ce7*/
    v75 = 4 * v27; /*0x450cf0*/
    v25 = Math::RoundToInt((double)(4 * v27) / (double)*(int *)&v28->DebrisTypes[1260] + 0.5); /*0x450d04*/
    if ( v25 < 0 ) /*0x450d0b*/
    {
      v29 = 0; /*0x450d0d*/
      goto LABEL_50; /*0x450d0f*/
    }
    v29 = 3; /*0x450d14*/
    if ( v25 <= 3 ) /*0x450d19*/
LABEL_49:
      v29 = v25; /*0x450d1b*/
LABEL_50:
    v30 = *(_DWORD *)(this + 1412); /*0x450d1d*/
    if ( v29 ) /*0x450d25*/
    {
      if ( !v30 ) /*0x450d29*/
      {
        if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x450d42*/
        {
          v32 = 0; /*0x450d5c*/
          v33 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4596); /*0x450d5e*/
        }
        else
        {
          v32 = 1; /*0x450d4a*/
          v33 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4612); /*0x450d4f*/
        }
        if ( v33 && *v33 ) /*0x450d67*/
          BuildingClass::PlayAnim((ObjectClass *)this, v31, v33, (IUnknown *)0xA, (IUnknown *)v32, 0, 0); /*0x450d76*/
      }
      *(_DWORD *)(*(_DWORD *)(this + 1412) + 172) = v29; /*0x450d81*/
    }
    else if ( v30 ) /*0x450d8b*/
    {
      BuildingClass::ClearAnims((int *)this, (TechnoClass *)0xA); /*0x450d91*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + 5819) ) /*0x450d9c*/
  {
    v34 = Float4::Sum((float *)(this + 828)); /*0x450db2*/
    v35 = Math::RoundToInt(v34); /*0x450db7*/
    if ( v35 ) /*0x450dbe*/
    {
      v36 = Float4::Sum((float *)(this + 828)); /*0x450dc2*/
      v35 = (int)(4 * Math::RoundToInt(v36)) / *(_DWORD *)(*(_DWORD *)(this + 1312) + 2048); /*0x450dd6*/
    }
    v37 = *(_DWORD *)(this + 1776); /*0x450ddc*/
    if ( v37 != v35 ) /*0x450de4*/
    {
      if ( v37 < 3 ) /*0x450ded*/
      {
        if ( v37 < 2 ) /*0x450df6*/
        {
          if ( v37 < 1 ) /*0x450dff*/
          {
            if ( v37 >= 0 ) /*0x450e07*/
              BuildingClass::ClearAnims((int *)this, (TechnoClass *)3); /*0x450e0d*/
          }
          else
          {
            BuildingClass::ClearAnims((int *)this, (TechnoClass *)4); /*0x450e03*/
          }
        }
        else
        {
          BuildingClass::ClearAnims((int *)this, (TechnoClass *)5); /*0x450dfa*/
        }
      }
      else
      {
        BuildingClass::ClearAnims((int *)this, (TechnoClass *)6); /*0x450df1*/
      }
      v38 = Float4::Sum((float *)(this + 828)); /*0x450e14*/
      v39 = Math::RoundToInt(v38); /*0x450e19*/
      if ( v39 ) /*0x450e20*/
      {
        v40 = Float4::Sum((float *)(this + 828)); /*0x450e24*/
        v39 = (int)(4 * Math::RoundToInt(v40)) / *(_DWORD *)(*(_DWORD *)(this + 1312) + 2048); /*0x450e38*/
      }
      *(_DWORD *)(this + 1776) = v39; /*0x450e41*/
      if ( v39 < 3 ) /*0x450e47*/
      {
        if ( v39 < 2 ) /*0x450ea2*/
        {
          if ( v39 < 1 ) /*0x450efc*/
          {
            if ( v39 >= 0 ) /*0x450f4b*/
            {
              if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x450f65*/
                                                                          + 5888) )
              {
                v49 = 0; /*0x450f7f*/
                v50 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4120); /*0x450f81*/
              }
              else
              {
                v49 = 1; /*0x450f6d*/
                v50 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4136); /*0x450f72*/
              }
              if ( v50 && *v50 ) /*0x450f8a*/
                BuildingClass::PlayAnim( /*0x450f99*/
                  (ObjectClass *)this,
                  *(int *)&stru_87C374.__pad_579C[22224],
                  v50,
                  (IUnknown *)3,
                  (IUnknown *)v49,
                  0,
                  0);
            }
          }
          else
          {
            if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x450f16*/
                                                                        + 5888) )
            {
              v47 = 0; /*0x450f30*/
              v48 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4188); /*0x450f32*/
            }
            else
            {
              v47 = 1; /*0x450f1e*/
              v48 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4204); /*0x450f23*/
            }
            if ( v48 && *v48 ) /*0x450f3b*/
              BuildingClass::PlayAnim((ObjectClass *)this, v46, v48, (IUnknown *)4, (IUnknown *)v47, 0, 0); /*0x450f47*/
          }
        }
        else
        {
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x450ebb*/
          {
            v44 = 0; /*0x450ed5*/
            v45 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4256); /*0x450ed7*/
          }
          else
          {
            v44 = 1; /*0x450ec3*/
            v45 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4272); /*0x450ec8*/
          }
          if ( v45 && *v45 ) /*0x450ee4*/
            BuildingClass::PlayAnim((ObjectClass *)this, v43, v45, (IUnknown *)5, (IUnknown *)v44, 0, 0); /*0x450ef4*/
        }
      }
      else
      {
        if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x450e61*/
        {
          v41 = 0; /*0x450e7b*/
          v42 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4324); /*0x450e7d*/
        }
        else
        {
          v41 = 1; /*0x450e69*/
          v42 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4340); /*0x450e6e*/
        }
        if ( v42 && *v42 ) /*0x450e8a*/
          BuildingClass::PlayAnim( /*0x450e9a*/
            (ObjectClass *)this,
            *(int *)&stru_87C374.__pad_579C[22224],
            v42,
            (IUnknown *)6,
            (IUnknown *)v41,
            0,
            0);
      }
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(this + 1312) + 5872) != -1 /*0x450fee*/
    && (*(int (__thiscall **)(int))(this->q184)(this) != 18
    && (*(int (__thiscall **)(int))(this->q184)(this) != 19
    && *(float *)(*(_DWORD *)(this + 1312) + 5864) <= 990.0 )
  {
    v51 = *(_DWORD *)(this + 540); /*0x450ff4*/
    v52 = 0; /*0x450ffa*/
    if ( *(int *)(v51 + 612) > 0 ) /*0x451004*/
    {
      while ( 1 ) /*0x451010*/
      {
        v53 = *(BuildingTypeClass **)(this + 1312); /*0x451010*/
        v54 = *(_DWORD **)(*(_DWORD *)(v51 + 600) + 4 * v52); /*0x451016*/
        if ( *(_DWORD *)(v54[10] + 180) == v53->SuperWeapon ) /*0x45102a*/
          break; /*0x45102a*/
LABEL_129:
        v51 = *(_DWORD *)(this + 540); /*0x451132*/
        if ( ++v52 >= *(_DWORD *)(v51 + 612) ) /*0x45113f*/
          goto LABEL_130; /*0x45113f*/
      }
      v55 = v54[12]; /*0x451030*/
      v56 = v54[14]; /*0x451033*/
      if ( v55 != -1 ) /*0x451039*/
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v55 >= v56 ) /*0x451044*/
        {
          v75 = 0; /*0x4510a5*/
LABEL_113:
          if ( (double)v75 * 0.0011111111 > v53->ChargedAnimTime ) /*0x451061*/
          {
            if ( *(_DWORD *)(this + 1436) ) /*0x4510ce*/
            {
              BuildingClass::ClearAnims((int *)this, (TechnoClass *)0x10); /*0x4510dc*/
              if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x4510f9*/
                                                                          + 5888) )
              {
                v61 = 0; /*0x451113*/
                v62 = (_BYTE *)(*(_DWORD *)(this + 1312) + 5072); /*0x451115*/
              }
              else
              {
                v61 = 1; /*0x451101*/
                v62 = (_BYTE *)(*(_DWORD *)(this + 1312) + 5088); /*0x451106*/
              }
              if ( v62 && *v62 ) /*0x45111e*/
                BuildingClass::PlayAnim((ObjectClass *)this, v60, v62, (IUnknown *)0x11, (IUnknown *)v61, 0, 0); /*0x45112d*/
            }
          }
          else if ( *(_DWORD *)(this + 1428) ) /*0x451063*/
          {
            BuildingClass::ClearAnims((int *)this, (TechnoClass *)0xE); /*0x451075*/
            if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x451091*/
                                                                        + 5888) )
            {
              v58 = 0; /*0x4510b5*/
              v59 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4936); /*0x4510b7*/
            }
            else
            {
              v58 = 1; /*0x451099*/
              v59 = (_BYTE *)(*(_DWORD *)(this + 1312) + 4952); /*0x45109e*/
            }
            if ( v59 && *v59 ) /*0x4510c0*/
              BuildingClass::PlayAnim((ObjectClass *)this, v57, v59, (IUnknown *)0xF, (IUnknown *)v58, 0, 0); /*0x4510cc*/
          }
          goto LABEL_129; /*0x4510cc*/
        }
        v56 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v55; /*0x451046*/
      }
      v75 = v56; /*0x451048*/
      goto LABEL_113; /*0x451048*/
    }
  }
LABEL_130:
  if ( !(*(unsigned __int8 (__thiscall **)(int))(this->q0FF)(this) /*0x45116f*/
    || (*(int (__thiscall **)(int))(this->q184)(this) == 18
    || (*(int (__thiscall **)(int))(this->q184)(this) == 19 )
  {
    if ( v73 ) /*0x45117b*/
    {
      v63 = *(BuildingTypeClass **)(this + 1312); /*0x451187*/
      v64 = &v63->BuildingAnimFrame[3 * *(_DWORD *)(this + 1332)]; /*0x451197*/
      if ( *(_DWORD *)(this + 248) == v63->BuildingAnimFrame[3 * *(_DWORD *)(this + 1332) + 1] + *v64 - 1 /*0x4511dd*/
        || !*(_DWORD *)(this + 536)
        && *(_DWORD *)&v63->DebrisTypes[244]
        && (*(int (__thiscall **)(int))(this->q184)(this) == 19
        && *(_DWORD *)(this + 248) == 23 )
      {
        *(_BYTE *)(this + 1757) = 1; /*0x4511df*/
      }
      if ( *(_DWORD *)(this + 248) >= *v64 + v64[1] ) /*0x4511f5*/
        v74 = 1; /*0x4511f7*/
      *(_BYTE *)(this + 128) = 1; /*0x4511fc*/
    }
    else if ( *(_DWORD *)(this + 1332) == -1 || !*(_DWORD *)(this + 268) ) /*0x45120e*/
    {
      *(_BYTE *)(this + 1757) = 1; /*0x451218*/
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->q160)(this) ) /*0x451223*/
    *(_BYTE *)(this + 128) = 1; /*0x45122d*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(this->q0FF)(this) ) /*0x451238*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(this->q0FF)(this) ) /*0x451246*/
    {
      if ( *(_DWORD *)(this + 1408) ) /*0x451250*/
      {
        Value = ProgressTimer::GetValue((_WORD *)(this + 904), (IUnknown *)&v75); /*0x451265*/
        v66 = *(_DWORD *)(this + 1408); /*0x45126c*/
        v67 = ((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F; /*0x451278*/
        if ( v66 ) /*0x45127d*/
        {
          *(_DWORD *)(v66 + 172) = dword_7F4890[v67]; /*0x451286*/
          *(_DWORD *)(v66 + 196) = 0; /*0x45128c*/
        }
      }
    }
  }
  result = v74; /*0x451296*/
  if ( v74 ) /*0x45129c*/
  {
    v69 = *(_DWORD *)(this + 1332); /*0x45129e*/
    v70 = (_DWORD *)(*(_DWORD *)(this + 1312) + 12 * v69 + 3844); /*0x4512af*/
    if ( v69 < 2 ) /*0x4512b6*/
      ProductionTimeMult = Rules::GetProductionTimeMult( /*0x4512e1*/
                             (int *)&HouseClass_Player.__pad_5568[22700],
                             *(CellStruct **)(*(_DWORD *)(this + 1312) + 12 * v69 + 3852));
    else
      ProductionTimeMult = *(char **)(*(_DWORD *)(this + 1312) + 12 * v69 + 3852); /*0x4512c3*/
    *(_DWORD *)(this + 256) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x4512cc*/
    *(_DWORD *)(this + 260) = v76; /*0x4512fc*/
    *(_DWORD *)(this + 264) = ProductionTimeMult; /*0x451303*/
    *(_DWORD *)(this + 268) = ProductionTimeMult; /*0x451306*/
    v72 = *(BuildingTypeClass **)this; /*0x45130e*/
    *(_DWORD *)(this + 248) = *v70; /*0x451310*/
    return ((char (__thiscall *)(int, int))v72->ChargerBarrels[8])(this, 2); /*0x451316*/
  }
  return result; /*0x45131c*/
}


// ==== 0x00451330  BuildingClass::GetCrewCount  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetCrewCount(#377 *this)
{
  _BYTE *v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int result; // eax

  if ( this->NoCrew ) /*0x451334*/
    return 0; /*0x451334*/
  v2 = (_BYTE *)this->gattlingValue; /*0x451342*/
  if ( !v2[3277] ) /*0x451348*/
    return 0; /*0x451350*/
  v3 = this->owner; /*0x451352*/
  v4 = *(_DWORD *)(v3 + 488); /*0x451358*/
  if ( v4 ) /*0x451360*/
  {
    if ( v4 == 1 ) /*0x451372*/
    {
      v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5372); /*0x451379*/
    }
    else
    {
      if ( v4 != 2 ) /*0x451384*/
        return 0; /*0x4513c9*/
      v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5376); /*0x45138b*/
    }
  }
  else
  {
    v5 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5368); /*0x451367*/
  }
  if ( !v5 ) /*0x451393*/
    return 0; /*0x451393*/
  if ( this->HasBeenCaptured ) /*0x451395*/
    v5 *= 2; /*0x45139f*/
  result = (*(int (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v2 + 184))(v2, v3, 0) / v5; /*0x4513ad*/
  if ( result < 1 ) /*0x4513b2*/
    return 1; /*0x4513b5*/
  if ( result > 5 ) /*0x4513bf*/
    return 5; /*0x4513c2*/
  return result; /*0x4513b4*/
}


// ==== 0x004513D0  BuildingClass::ProductionCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProductionCheck(#377 *this)
{
  if ( this->BuildingClass_field_int_534 && this->ActuallyPlacedOnMap ) /*0x4513da*/
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 328) + 156))(this->gattlingValue); /*0x4513ec*/
  else
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 328) + 192))(this->gattlingValue); /*0x4513fa*/
}


// ==== 0x00451400  UpdateBuildingActiveAnim  this=-  sig=ida-proto ====
char __fastcall UpdateBuildingActiveAnim(int a1, int edx0)
{
  int v3; // eax
  IUnknown *v4; // edi
  int v5; // esi
  _DWORD *v6; // ebx
  int v7; // ecx
  double HealthRatio; // st7
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int v12; // esi
  _DWORD *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char v21; // al
  BOOL v22; // edx
  IUnknown *v23; // eax
  _BYTE *v24; // ecx
  char a2[64]; // [esp+10h] [ebp-40h] BYREF

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1312) + 160); /*0x451412*/
  if ( *(_DWORD *)(a1 + 108) != v3 ) /*0x45141a*/
  {
    *(_DWORD *)(a1 + 108) = v3; /*0x451420*/
    if ( *(_BYTE *)(a1 + 1766) ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      *(_BYTE *)(a1 + 1766) = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      v6 = (_DWORD *)(a1 + 1372); /*0x451438*/
      do /*0x451475*/
      {
        if ( *v6 ) /*0x45143e*/
        {
          v7 = *(_DWORD *)(a1 + 1312); /*0x451443*/
          if ( v5 + v7 != -3916 ) /*0x451452*/
          {
            if ( *(_BYTE *)(v5 + v7 + 3916) ) /*0x451454*/
              BuildingClass::PlayAnim((ObjectClass *)a1, edx0, (void *)(v5 + v7 + 3916), v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 68; /*0x451468*/
        v4 = (IUnknown *)((char *)v4 + 1); /*0x45146b*/
        ++v6; /*0x45146c*/
      }
      while ( v5 < 1428 ); /*0x451475*/
    }
    HealthRatio = BuildingClass::GetHealthRatio((int *)a1); /*0x451479*/
    v9 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x45147e*/
    if ( HealthRatio > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45148f*/
    {
      v10 = *(_DWORD *)(a1 + 784); /*0x451491*/
      if ( v10 ) /*0x451499*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 248))(v10); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 204; /*0x4514a8*/
    v13 = (_DWORD *)(a1 + 1384); /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = *(_DWORD *)(a1 + 1312); /*0x4514b8*/
        if ( v12 + v14 != -3916 ) /*0x4514c7*/
        {
          if ( *(_BYTE *)(v12 + v14 + 3916) ) /*0x4514c9*/
            BuildingClass::PlayAnim((ObjectClass *)a1, v9, (void *)(v12 + v14 + 3916), (IUnknown *)v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 68; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 408 ); /*0x4514ea*/
    *(_BYTE *)(a1 + 128) = 1; /*0x4514ec*/
  }
  v15 = *(_DWORD *)(a1 + 1312); /*0x4514f9*/
  if ( v15 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2172) ) /*0x451505*/
  {
    v16 = *(_DWORD *)(a1 + 1532); /*0x45150b*/
    v17 = v16 + 1; /*0x451511*/
    if ( v16 + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != v16 && !*(_BYTE *)(v15 + 5829) ) /*0x451523*/
    {
      BuildingClass::ClearAnims((int *)a1, (TechnoClass *)9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(a2, (const char *)(*(_DWORD *)(a1 + 1312) + 504)); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&a2[strlen(a2)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(a2); /*0x4515b3*/
        a2[v19] = v17 + 66; /*0x4515b6*/
        a2[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim((ObjectClass *)a1, v18, a2, (IUnknown *)9, 0, 0, 0); /*0x4515c6*/
        *(_DWORD *)(a1 + 1532) = v17; /*0x4515cb*/
      }
    }
    ++*(_BYTE *)(a1 + 1794); /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    v21 = *(_BYTE *)(a1 + 1794); /*0x4515e9*/
    if ( v21 == *(_DWORD *)(v15 + 5344) ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      *(_BYTE *)(a1 + 1794) = v21 + 1; /*0x45160a*/
      v22 = BuildingClass::GetHealthRatio((int *)a1) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451625*/
      v23 = (IUnknown *)(*(char *)(a1 + 1794) - 1); /*0x451637*/
      if ( v22 ) /*0x45163c*/
        v24 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + 68 * (_DWORD)v23 + 3932); /*0x451649*/
      else
        v24 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + 68 * (_DWORD)v23 + 3916); /*0x45165d*/
      if ( v24 && *v24 ) /*0x451668*/
        BuildingClass::PlayAnim((ObjectClass *)a1, v22, v24, v23, (IUnknown *)v22, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }
}


// ==== 0x00451690  BuildingClass::ClearSuperWeaponAnim  this=BuildingClass  sig=csp ====
char __thiscall sub_451690(int this)
{
  char result; // al
  int v3; // ecx
  bool v4; // bl
  int v5; // eax
  char v6; // cl

  result = *(_BYTE *)(this + 1794); /*0x451694*/
  if ( result ) /*0x45169c*/
  {
    v3 = result; /*0x4516a1*/
    v4 = 0; /*0x4516a4*/
    v5 = *(_DWORD *)(this + 4 * result + 1512); /*0x4516a6*/
    if ( v5 && (v4 = *(_DWORD *)(v5 + 5872) != -1, *(_BYTE *)(v5 + 3233)) ) /*0x4516c0*/
    {
      BuildingClass::ClearAnims((int *)this, 9); /*0x4516ce*/
      *(_DWORD *)(this + 4 * *(char *)(this + 1794) + 1512) = 0; /*0x4516dc*/
      *(_BYTE *)(this + 1794) = 0; /*0x4516e7*/
      *(_DWORD *)(this + 1532) = -1; /*0x4516ee*/
      if ( v4 ) /*0x4516f8*/
      {
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(*(_DWORD *)(this + 540)); /*0x451700*/
        return 1; /*0x451709*/
      }
    }
    else
    {
      BuildingClass::ClearAnims((int *)this, v3 - 1); /*0x45170e*/
      v6 = *(_BYTE *)(this + 1794) - 1; /*0x451719*/
      *(_BYTE *)(this + 1794) = v6; /*0x45171b*/
      *(_DWORD *)(this + 4 * v6 + 1516) = 0; /*0x451726*/
      if ( v4 ) /*0x451731*/
        SuperWeapon::UpdateSuperWeaponsOwnedHouseClass(*(_DWORD *)(this + 540)); /*0x451739*/
    }
    return 1; /*0x45173f*/
  }
  return result; /*0x45169e*/
}


// ==== 0x00451750  BuildingClass::PlayUpgradeAnim  this=IUnknown  sig=csp ====
int __thiscall BuildingClass_PlayUpgradeAnim(_DWORD *this, int a2, int a3, int a4, void *a5)
{
  int result; // eax
  _BYTE *v6; // edx

  if ( (_BYTE)a3 ) /*0x45175f*/
  {
    result = a2; /*0x451761*/
    v6 = (_BYTE *)(this->q520 + 68 * a2 + 3932); /*0x451772*/
  }
  else
  {
    result = a2; /*0x45177b*/
    if ( (_BYTE)a4 ) /*0x451783*/
      v6 = (_BYTE *)(this->q520 + 68 * a2 + 3948); /*0x451790*/
    else
      v6 = (_BYTE *)(this->q520 + 68 * a2 + 3916); /*0x4517a4*/
  }
  if ( v6 ) /*0x4517ad*/
  {
    if ( *v6 ) /*0x4517af*/
      return BuildingClass::PlayAnim(this, (int)v6, v6, result, a3, a4, a5); /*0x4517bf*/
  }
  return result; /*0x4517c4*/
}


// ==== 0x004517D0  ObjectClass::method_4517D0  this=ObjectClass  sig=csp ====
int __thiscall sub_4517D0(int **this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // edx
  int result; // eax
  int *v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int **v12; // [esp+10h] [ebp-28h]
  int v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+1Ch] [ebp-1Ch]
  _DWORD v16[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v17[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v2 = (int *)((int (__thiscall *)(int **, _DWORD *))(*this)[43])(this, v16); /*0x4517e2*/
  v3 = 0; /*0x4517ea*/
  v13 = *v2; /*0x4517ec*/
  v14 = v2[1]; /*0x4517f3*/
  v4 = v2[2]; /*0x4517f7*/
  result = (int)(this + 343); /*0x4517fa*/
  v15 = v4; /*0x451800*/
  v12 = this + 343; /*0x451804*/
  do /*0x451879*/
  {
    v6 = *v12; /*0x45180c*/
    if ( *v12 ) /*0x45180c*/
    {
      v7 = Matrix3x4::TransformCell((float *)MEMORY[0x887324], v17, &(this->q148)[v3 + 991]); /*0x45182b*/
      v8 = v13 + *v7; /*0x45183a*/
      v9 = v7[1]; /*0x45183c*/
      v10 = v7[2]; /*0x45183f*/
      v16[1] = v14 + v9; /*0x45184a*/
      v11 = *v6; /*0x45184e*/
      v16[2] = v15 + v10; /*0x451850*/
      v16[0] = v8; /*0x451858*/
      result = (*(int (__thiscall **)(int *, _DWORD *))(v11 + 436))(v6, v16); /*0x45185f*/
    }
    v3 += 17; /*0x451869*/
    ++v12; /*0x451875*/
  }
  while ( v3 < 357 ); /*0x451879*/
  return result; /*0x45187b*/
}


// ==== 0x00451890  BuildingClass::PlayAnim  this=IUnknown  sig=csp ====
int __fastcall BuildingClass::PlayAnim(
        ObjectClass *aP0,
        int edx0,
        void *a2,
        IUnknown *aP3,
        IUnknown *aP4,
        int _44,
        void *a6)
{
  int v8; // edi
  void **p_lineTrailer; // ebp
  AnimClass *result; // eax
  AnimClass *v11; // ebp
  int v12; // edi
  _DWORD *v13; // ebx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  AnimClass *v17; // eax
  void **v18; // eax
  AnimClass *v19; // ebp
  int v20; // edx
  int v21; // ebx
  void **v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int health; // eax
  int v27; // eax
  BuildingTypeClass *v28; // edi
  ObjectClass *v29; // eax
  CoordStruct aP2; // [esp+10h] [ebp-24h] BYREF
  _BYTE v31[12]; // [esp+1Ch] [ebp-18h] BYREF
  _BYTE v32[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( BYTE2(aP0[10].fallRate) != (_BYTE)aP4 ) /*0x4518a3*/
  {
    BYTE2(aP0[10].fallRate) = (_BYTE)aP4; /*0x4518a5*/
    v8 = 0; /*0x4518ab*/
    p_lineTrailer = &aP0[7].lineTrailer; /*0x4518ad*/
    do /*0x4518cd*/
    {
      if ( *p_lineTrailer ) /*0x4518b3*/
        BuildingClass::PlayUpgradeAnim(aP0, (IUnknown *)v8, aP4, 0, 0); /*0x4518c1*/
      ++v8; /*0x4518c6*/
      ++p_lineTrailer; /*0x4518c7*/
    }
    while ( v8 < 21 ); /*0x4518cd*/
  }
  result = (AnimClass *)AnimTypeClass::FindIndex(a2); /*0x4518d3*/
  v11 = result; /*0x4518d8*/
  if ( result != (AnimClass *)-1 )
  {
    v12 = 68 * (_DWORD)aP3; /*0x4518f8*/
    v13 = Matrix3x4::TransformCell( /*0x451913*/
            *(float **)&stru_87C374.__pad_579C[22548],
            (AbstractClass *)v31,
            (AbstractClass *)(aP0[7].health + 68 * (_DWORD)aP3 + 3964));
    v14 = (_DWORD *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)aP0->__pad_0 + 172))(aP0, v32); /*0x45191a*/
    v15 = *v13 + *v14; /*0x451924*/
    v16 = v13[1] + v14[1]; /*0x45192c*/
    v17 = (AnimClass *)(v13[2] + v14[2]); /*0x45192f*/
    aP2.X = v15; /*0x451937*/
    aP2.Y = v16; /*0x45193b*/
    aP2.Z = (int)v17; /*0x45193f*/
    v18 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x451943*/
    if ( v18 ) /*0x45194d*/
      v19 = AnimClass::ctor( /*0x451975*/
              v18,
              *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v11),
              &aP2,
              (CoordStruct *)a6,
              (CoordStruct *)1,
              (void *)0x1600,
              0,
              0);
    else
      v19 = 0; /*0x451979*/
    v19->field_100 = *(_DWORD *)(aP0[7].health + v12 + 3972); /*0x451988*/
    v20 = *(_DWORD *)(aP0[7].health + v12 + 3976); /*0x451994*/
    v19->__pad_118[0] = 1; /*0x45199b*/
    v19->field_104 = v20; /*0x4519a2*/
    if ( HIBYTE(aP0[10].fallRate) ) /*0x4519a8*/
      v19->__pad_194[5] = 1; /*0x4519b2*/
    v21 = SBYTE1(aP0[10].attachedTag); /*0x4519b9*/
    if ( v21 == 15 /*0x4519d3*/
      && (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP0->__pad_0 + 104))(aP0, 0, 0) == 5 )
    {
      LOBYTE(v21) = 16; /*0x4519d5*/
    }
    v22 = &aP0[7].lineTrailer; /*0x4519da*/
    v23 = 21; /*0x4519e0*/
    do /*0x4519f5*/
    {
      if ( *v22 ) /*0x4519e5*/
        *((_BYTE *)*v22 + 376) = v21; /*0x4519eb*/
      ++v22; /*0x4519f1*/
      --v23; /*0x4519f4*/
    }
    while ( v23 ); /*0x4519f5*/
    v24 = aP0[7].location[(_DWORD)aP3 + 3]; /*0x4519fb*/
    if ( v24 ) /*0x451a04*/
    {
      v19->field_AC = *(_DWORD *)(v24 + 172); /*0x451a0c*/
      v25 = aP0[7].location[(_DWORD)aP3 + 3]; /*0x451a12*/
      aP0[7].location[(_DWORD)aP3 + 3] = 0; /*0x451a1b*/
      if ( v25 ) /*0x451a26*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 32))(v25, 1); /*0x451a2c*/
    }
    aP0[7].location[(_DWORD)aP3 + 3] = (int)v19; /*0x451a2f*/
    if ( !BYTE2(aP0[10].nextObject) /*0x451a44*/
      || !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 848))(aP0) )
    {
      health = aP0[7].health; /*0x451a4e*/
      if ( *(_BYTE *)(health + 5491) ) /*0x451a54*/
      {
        if ( *(_BYTE *)(health + v12 + 3980) ) /*0x451a5e*/
          AnimClass::SetField8(v19); /*0x451a6b*/
      }
    }
    if ( *((_BYTE *)v19->field_C8 + 860) )
    {
      v19->field_D4 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 484))(aP0); /*0x451a8a*/
      v27 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 444))(aP0); /*0x451a94*/
      v28 = (BuildingTypeClass *)(*(int (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)aP0->__pad_0 + 1124))( /*0x451aac*/
                                   aP0,
                                   *(__int16 *)(v27 + 266));
      if ( (*(unsigned __int8 (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 352))(aP0)
        || *(_DWORD *)&aP0[3].isAliveFlag
        && (aP0
          ? (v29 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 44))(aP0) == 6 ? aP0 : 0)
          : (v29 = 0),
            *(ObjectClass **)(*(_DWORD *)&aP0[3].isAliveFlag + 80) == v29) )
      {
        v28 = Techno::StartInvulnerability(aP0, v28); /*0x451af3*/
      }
      v19->field_FC = (int)v28; /*0x451af5*/
    }
    if ( aP3 == (IUnknown *)9 && *(_BYTE *)(aP0[7].health + 5830) ) /*0x451b06*/
      v19->__pad_194[9] = 1; /*0x451b10*/
    result = (AnimClass *)(*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP0->__pad_0 + 468))(aP0); /*0x451b1b*/
    if ( (_BYTE)result ) /*0x451b23*/
      v19->__pad_118[2] = 1; /*0x451b25*/
  }
  return (int)result; /*0x451b2c*/
}


// ==== 0x00451B40  BuildingClass::StopAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::StopAnim(int this, IUnknown *aP1)
{
  int v3; // eax
  AnimClass *i; // ecx
  int v5; // edx
  int v6; // ecx
  double HealthRatio; // st7
  AbstractClass *v8; // edx
  bool v9; // c0
  bool v10; // c3
  BOOL v11; // ebx
  bool v12; // al
  int v13; // edx
  bool v14; // zf
  BuildingTypeClass *v15; // eax
  double v16; // st7
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx

  LOBYTE(v3) = *(_BYTE *)(this + 144); /*0x451b44*/
  if ( (_BYTE)v3 )
  {
    v3 = 0; /*0x451b56*/
    for ( i = (AnimClass *)(this + 1372); (IUnknown *)i->field_0 != aP1; i = (AnimClass *)((char *)i + 4) ) /*0x451b58*/
    {
      if ( ++v3 >= 21 ) /*0x451b69*/
        return v3; /*0x451b69*/
    }
    *(_DWORD *)(this + 4 * v3 + 1372) = 0; /*0x451b70*/
    v3 -= 10; /*0x451b7b*/
    switch ( v3 )
    {
      case 0:
        v3 = *(_DWORD *)(this + 1312); /*0x451b8e*/
        if ( *(_BYTE *)(v3 + 5801) )
        {
          if ( !Team::AllMembersValid((int *)this) || (*(int (__thiscall **)(int))(this->q184)(this) != 20 ) /*0x451bba*/
          {
            HealthRatio = BuildingClass::GetHealthRatio((int *)this); /*0x451c1c*/
            v8 = *(AbstractClass **)&stru_87C374.__pad_579C[22224]; /*0x451c21*/
            v9 = HealthRatio < *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451c27*/
            v10 = HealthRatio == *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451c27*/
            goto LABEL_30; /*0x451c2d*/
          }
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x451bd4*/
          {
            v6 = 0; /*0x451bee*/
            v3 = *(_DWORD *)(this + 1312) + 4664; /*0x451bf0*/
          }
          else
          {
            v6 = 1; /*0x451bdc*/
            v3 = *(_DWORD *)(this + 1312) + 4680; /*0x451be1*/
          }
          if ( v3 && *(_BYTE *)v3 ) /*0x451bfd*/
            LOBYTE(v3) = BuildingClass::PlayAnim( /*0x451c10*/
                           (ObjectClass *)this,
                           v5,
                           (void *)v3,
                           (IUnknown *)0xB,
                           (IUnknown *)v6,
                           0,
                           0);
        }
        else if ( *(_BYTE *)(v3 + 5799) )
        {
          LOBYTE(v3) = aP1->__pad_164[21]; /*0x451c40*/
          if ( (_BYTE)v3 )
          {
            v11 = BuildingClass::GetHealthRatio((int *)this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x451c65*/
                                                                          + 5888);
            v12 = (*(int (__thiscall **)(int))(this->q408)(this) > 0; /*0x451c7c*/
            LOBYTE(aP1) = v12; /*0x451c81*/
            if ( v11 )
            {
              v3 = *(_DWORD *)(this + 1312) + 4136; /*0x451c8d*/
            }
            else
            {
              v14 = !v12; /*0x451c94*/
              v15 = *(BuildingTypeClass **)(this + 1312); /*0x451c96*/
              v3 = (int)(v14 ? &v15->?[51] : &v15->?[59]);
            }
            if ( v3 && *(_BYTE *)v3 ) /*0x451cb2*/
              LOBYTE(v3) = BuildingClass::PlayAnim( /*0x451cc8*/
                             (ObjectClass *)this,
                             v13,
                             (void *)v3,
                             (IUnknown *)3,
                             (IUnknown *)v11,
                             (int)aP1,
                             0);
          }
        }
        break; /*0x451c17*/
      case 2:
        v3 = *(_DWORD *)(this + 1312); /*0x451cd2*/
        if ( *(_BYTE *)(v3 + 5801) ) /*0x451cd8*/
        {
          LOBYTE(v3) = aP1->__pad_164[21]; /*0x451ce6*/
          if ( (_BYTE)v3 ) /*0x451cee*/
          {
            v16 = BuildingClass::GetHealthRatio((int *)this); /*0x451cf6*/
            v9 = v16 < *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451d01*/
            v10 = v16 == *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x451d01*/
LABEL_30:
            if ( v9 || v10 ) /*0x451d09*/
            {
              v17 = 1; /*0x451d14*/
              v3 = *(_DWORD *)(this + 1312) + 5156; /*0x451d19*/
            }
            else
            {
              v17 = 0; /*0x451d26*/
              v3 = *(_DWORD *)(this + 1312) + 5140; /*0x451d28*/
            }
            if ( v3 && *(_BYTE *)v3 ) /*0x451d35*/
              LOBYTE(v3) = BuildingClass::PlayAnim( /*0x451d48*/
                             (ObjectClass *)this,
                             (int)v8,
                             (void *)v3,
                             (IUnknown *)0x12,
                             (IUnknown *)v17,
                             0,
                             0);
          }
        }
        break; /*0x451d4f*/
      case 5:
        LOBYTE(v3) = aP1->__pad_164[21]; /*0x451d52*/
        if ( (_BYTE)v3 ) /*0x451d5a*/
        {
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x451d78*/
          {
            v18 = 0; /*0x451d92*/
            v3 = *(_DWORD *)(this + 1312) + 5004; /*0x451d94*/
          }
          else
          {
            v18 = 1; /*0x451d80*/
            v3 = *(_DWORD *)(this + 1312) + 5020; /*0x451d85*/
          }
          if ( v3 && *(_BYTE *)v3 ) /*0x451d9d*/
            LOBYTE(v3) = BuildingClass::PlayAnim( /*0x451dac*/
                           (ObjectClass *)this,
                           *(int *)&stru_87C374.__pad_579C[22224],
                           (void *)v3,
                           (IUnknown *)0x10,
                           (IUnknown *)v18,
                           0,
                           0);
        }
        break; /*0x451db3*/
      case 7:
        LOBYTE(v3) = aP1->__pad_164[21]; /*0x451db6*/
        if ( (_BYTE)v3 ) /*0x451dbe*/
        {
          if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x451dd7*/
          {
            v20 = 0; /*0x451df1*/
            v3 = *(_DWORD *)(this + 1312) + 4868; /*0x451df3*/
          }
          else
          {
            v20 = 1; /*0x451ddf*/
            v3 = *(_DWORD *)(this + 1312) + 4884; /*0x451de4*/
          }
          if ( v3 && *(_BYTE *)v3 ) /*0x451dfc*/
            LOBYTE(v3) = BuildingClass::PlayAnim( /*0x451e0b*/
                           (ObjectClass *)this,
                           v19,
                           (void *)v3,
                           (IUnknown *)0xE,
                           (IUnknown *)v20,
                           0,
                           0);
        }
        break; /*0x451e0b*/
      default:
        return v3;
    }
  }
  return v3; /*0x451b6b*/
}


// ==== 0x00451E40  BuildingClass::ClearAnims  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::ClearAnims(int *this, TechnoClass *aP1)
{
  int *v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // eax

  if ( aP1 == (TechnoClass *)-2 ) /*0x451e47*/
  {
    v2 = this + 343; /*0x451e4b*/
    v3 = 21; /*0x451e51*/
    do /*0x451e6d*/
    {
      v4 = *v2; /*0x451e56*/
      if ( *v2 ) /*0x451e56*/
      {
        *v2 = 0; /*0x451e5c*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x451e66*/
      }
      ++v2; /*0x451e69*/
      --v3; /*0x451e6c*/
    }
    while ( v3 ); /*0x451e6d*/
  }
  else
  {
    v5 = *(this + (_DWORD)aP1 + 343); /*0x451e74*/
    if ( v5 ) /*0x451e7d*/
    {
      *(this + (_DWORD)aP1 + 343) = 0; /*0x451e7f*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x451e90*/
    }
  }
}


// ==== 0x00451EE0  globalHelper_051EE0  this=TechnoClass  sig=csp ====
void __fastcall globalHelper_051EE0(int a1, int a2, IUnknown *aP4)
{
  IUnknown *v4; // ecx
  IUnknown *v5; // ebp
  int v6; // esi
  _DWORD *v7; // ebx
  _BYTE *v8; // eax

  v4 = aP4; /*0x451ee3*/
  if ( *(_BYTE *)(a1 + 1766) != (_BYTE)aP4 ) /*0x451eed*/
  {
    v5 = 0; /*0x451ef2*/
    *(_BYTE *)(a1 + 1766) = (_BYTE)aP4; /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (_DWORD *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (_BYTE)v4 ) /*0x451f09*/
        {
          v8 = (_BYTE *)(*(_DWORD *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(_DWORD *)(a1 + 1312); /*0x451f1a*/
          v8 = (_BYTE *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((ObjectClass *)a1, a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = aP4; /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      v5 = (IUnknown *)((char *)v5 + 1); /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}


// ==== 0x00451F60  BuildingClass::SyncCrateVisuals  this=BuildingClass  sig=csp ====
int __thiscall sub_451F60(char *this, int a2, int a3)
{
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // esi
  int result; // eax
  int v11; // [esp+10h] [ebp-4h]

  v11 = 21; /*0x451f67*/
  v4 = this + 1372; /*0x451f6f*/
  do /*0x451fee*/
  {
    v5 = (_DWORD *)*v4; /*0x451f75*/
    if ( *v4 ) /*0x451f75*/
    {
      v6 = v5[50]; /*0x451f7c*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x451f86*/
      {
        v5[53] = a2; /*0x451f98*/
        v5[63] = a3; /*0x451f9e*/
      }
      v7 = this->Translucency; /*0x451fa4*/
      if ( v7 == 15 && (*(int (__thiscall **)(char *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) == 5 ) /*0x451fbe*/
        LOBYTE(v7) = 16; /*0x451fc0*/
      v8 = this + 1372; /*0x451fc5*/
      v9 = 21; /*0x451fcb*/
      do /*0x451fe0*/
      {
        if ( *(_DWORD *)v8 ) /*0x451fd0*/
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x451fd6*/
        v8 += 4; /*0x451fdc*/
        --v9; /*0x451fdf*/
      }
      while ( v9 ); /*0x451fe0*/
    }
    ++v4; /*0x451fe6*/
    result = --v11; /*0x451fe9*/
  }
  while ( v11 ); /*0x451fee*/
  return result; /*0x451ff0*/
}


// ==== 0x00452000  sub_452000  this=TechnoClass  sig=csp ====
int __fastcall sub_452000(_DWORD *a1)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  _DWORD *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]

  v17 = (*(int (__thiscall **)(_DWORD *))(*a1 + 484))(a1); /*0x452015*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*a1 + 444))(a1); /*0x452019*/
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 1124))(a1, *(__int16 *)(v2 + 266)); /*0x452031*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(_DWORD **)(a1[165] + 80) == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((_WORD *)a1 + 896) = v3; /*0x45207a*/
  v15 = a1 + 343; /*0x452091*/
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    v5 = (_DWORD *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (unsigned __int16)v3; /*0x4520c9*/
      }
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        LOBYTE(v7) = 16; /*0x4520eb*/
      v8 = a1 + 343; /*0x4520f0*/
      v9 = 21; /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(_BYTE *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    LOBYTE(v11) = 16; /*0x45213f*/
  v12 = a1 + 343; /*0x452144*/
  v13 = 21; /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      *(_BYTE *)(result + 376) = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}


// ==== 0x00452170  BuildingClass::SetConnectedBuildingMission  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_SetConnectedBuildingMission(int *this, int a2)
{
  char v3; // bl
  int *v4; // ecx
  int v5; // esi
  int result; // eax

  v3 = a2; /*0x45217b*/
  if ( a2 == 15 && (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 104))(this, 0, 0) == 5 ) /*0x45218b*/
    v3 = 16; /*0x45218d*/
  v4 = this + 343; /*0x452192*/
  v5 = 21; /*0x452198*/
  do /*0x4521ad*/
  {
    result = *v4; /*0x45219d*/
    if ( *v4 ) /*0x45219d*/
      *(_BYTE *)(result + 376) = v3; /*0x4521a3*/
    ++v4; /*0x4521a9*/
    --v5; /*0x4521ac*/
  }
  while ( v5 ); /*0x4521ad*/
  return result; /*0x4521af*/
}


// ==== 0x004521C0  BuildingClass::DisableTemporal  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DisableTemporal(int *this)
{
  int *v1; // ecx
  int v2; // edx
  int result; // eax
  int v4; // esi

  this->HasPower = 0; /*0x4521c0*/
  v1 = this + 343; /*0x4521c8*/
  v2 = 21; /*0x4521ce*/
  do /*0x4521fe*/
  {
    result = *v1; /*0x4521d3*/
    if ( *v1 ) /*0x4521d3*/
    {
      v4 = *(_DWORD *)(result + 172); /*0x4521d9*/
      *(_BYTE *)(result + 282) = 1; /*0x4521df*/
      *(_BYTE *)(result + 283) = 0; /*0x4521e6*/
      *(_DWORD *)(result + 284) = v4; /*0x4521ed*/
      *(_BYTE *)(result + 281) = 1; /*0x4521f3*/
    }
    ++v1; /*0x4521fa*/
    --v2; /*0x4521fd*/
  }
  while ( v2 ); /*0x4521fe*/
  return result; /*0x452200*/
}


// ==== 0x00452210  BuildingClass::EnableTogglePower  this=BuildingClass  sig=csp ====
_BYTE *__thiscall BuildingClass::EnableTogglePower(_BYTE *this)
{
  _DWORD *v1; // ecx
  int v2; // edx
  _BYTE *result; // eax

  this->HasPower = 1; /*0x452210*/
  v1 = this + 1372; /*0x452218*/
  v2 = 21; /*0x45221e*/
  do /*0x452242*/
  {
    result = (_BYTE *)*v1; /*0x452225*/
    if ( *v1 ) /*0x452225*/
    {
      result[282] = 0; /*0x45222b*/
      result[283] = 1; /*0x452231*/
      result[281] = 0; /*0x452238*/
    }
    ++v1; /*0x45223e*/
    --v2; /*0x452241*/
  }
  while ( v2 ); /*0x452242*/
  return result; /*0x452244*/
}


// ==== 0x00452250  BuildingClass::StubReturn0  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::StubReturn0(#377 *this)
{
  return 0; /*0x452252*/
}


// ==== 0x00452260  BuildingClass::AnnounceReady  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass_AnnounceReady(int this)
{
  int v2; // ecx
  _BYTE *v3; // ecx
  int v4; // edx
  int v5; // edi
  _BYTE **v6; // ebx
  int v7; // eax
  int v8; // ecx

  if ( !*(_BYTE *)(this + 1632) && !*(_DWORD *)(this + 1284) ) /*0x452271*/
  {
    v2 = *(_DWORD *)(this + 540); /*0x45227f*/
    *(_BYTE *)(this + 1632) = 1; /*0x452287*/
    *(_BYTE *)(this + 128) = 1; /*0x45228d*/
    *(_BYTE *)(v2 + 22392) = 1; /*0x452293*/
    *(_BYTE *)(*(_DWORD *)(this + 540) + 22393) = 1; /*0x45229f*/
    *(_BYTE *)(*(_DWORD *)(this + 540) + 508) = 1; /*0x4522ab*/
    v3 = *(_BYTE **)(this + 1556); /*0x4522b1*/
    *(_BYTE *)(this + 1770) = 1; /*0x4522b9*/
    if ( v3 ) /*0x4522bf*/
      Trigger::EnableOnce(v3, 0); /*0x4522c3*/
    v4 = *(_DWORD *)(this + 1312); /*0x4522c8*/
    if ( *(_BYTE *)(v4 + 5822) ) /*0x4522ce*/
      BuildingClass::RepairPlacement((_BYTE *)this, 0); /*0x4522dc*/
    v5 = 0; /*0x4522e3*/
    v6 = (_BYTE **)(this + 1372); /*0x4522e5*/
    do /*0x452313*/
    {
      if ( *(_BYTE *)(v5 + *(_DWORD *)(this + 1312) + 3980) && *v6 ) /*0x4522fc*/
        VtableStub::Method_425270(*v6); /*0x452302*/
      v5 += 68; /*0x452307*/
      ++v6; /*0x45230a*/
    }
    while ( v5 < 1428 ); /*0x452313*/
    v7 = *(_DWORD *)(this + 1312); /*0x452315*/
    v8 = *(_DWORD *)(v7 + 3768); /*0x45231d*/
    if ( v8 ) /*0x452325*/
    {
      LOBYTE(v4) = *(_BYTE *)(v7 + 3278); /*0x452327*/
      HouseClass::UpdateProduction(*(_DWORD *)(this + 540), v8, v4, 0); /*0x452337*/
    }
    if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x452342*/
      VoxClass::FindAndPlay(aEvaBuildingonl, -1); /*0x452355*/
  }
}


// ==== 0x00452360  BuildingClass::PowerOff  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_PowerOff(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx

  LOBYTE(v2) = *(_BYTE *)(this + 1632); /*0x452363*/
  if ( (_BYTE)v2 ) /*0x45236b*/
  {
    v2 = *(_DWORD *)(this + 1312); /*0x452371*/
    if ( *(int *)(v2 + 3812) > 0 || *(_BYTE *)(v2 + 5491) ) /*0x452381*/
    {
      v3 = *(_DWORD *)(this + 540); /*0x45238b*/
      *(_BYTE *)(this + 1632) = 0; /*0x452393*/
      *(_BYTE *)(this + 128) = 1; /*0x45239a*/
      *(_BYTE *)(v3 + 22392) = 1; /*0x4523a0*/
      *(_BYTE *)(*(_DWORD *)(this + 540) + 22393) = 1; /*0x4523ac*/
      *(_BYTE *)(*(_DWORD *)(this + 540) + 508) = 1; /*0x4523b8*/
      BuildingClass::Deactivate(this); /*0x4523c0*/
      if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(this + 540)) ) /*0x4523cb*/
        VoxClass::FindAndPlay(MEMORY[0x819108], -1); /*0x4523de*/
      v2 = *(_DWORD *)(this + 1312); /*0x4523e3*/
      v5 = *(_DWORD *)(v2 + 3768); /*0x4523e9*/
      if ( v5 ) /*0x4523f1*/
      {
        LOBYTE(v4) = *(_BYTE *)(v2 + 3278); /*0x4523f3*/
        LOBYTE(v2) = HouseClass::UpdateProduction(*(_DWORD *)(this + 540), v5, v4, 0); /*0x452403*/
      }
    }
  }
  return v2; /*0x452408*/
}


// ==== 0x00452410  BuildingClass::EnableStuff  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::EnableStuff(int this)
{
  _BYTE *v2; // ecx
  int v3; // esi
  _BYTE **v4; // edi

  v2 = *(_BYTE **)(this + 1556); /*0x452415*/
  *(_BYTE *)(this + 1770) = 1; /*0x45241b*/
  if ( v2 ) /*0x452424*/
    Trigger::EnableOnce(v2, 0); /*0x452428*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + 5822) ) /*0x452433*/
    BuildingClass::RepairPlacement((_BYTE *)this, 0); /*0x452441*/
  v3 = 0; /*0x452446*/
  v4 = (_BYTE **)(this + 1372); /*0x452448*/
  do /*0x452476*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + v3 + 3980) ) /*0x452454*/
    {
      if ( *v4 ) /*0x45245f*/
        VtableStub::Method_425270(*v4); /*0x452465*/
    }
    v3 += 68; /*0x45246a*/
    ++v4; /*0x45246d*/
  }
  while ( v3 < 1428 ); /*0x452476*/
}


// ==== 0x00452480  BuildingClass::Deactivate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass_Deactivate(int this)
{
  int v2; // ecx
  _BYTE *v3; // eax
  char v4; // cl
  int v5; // esi
  _BYTE **v6; // ebx

  v2 = *(_DWORD *)(this + 1556); /*0x452485*/
  *(_BYTE *)(this + 1770) = 0; /*0x45248b*/
  if ( v2 ) /*0x452494*/
    MapClass::ScrollOnce(v2, 0); /*0x452498*/
  v3 = *(_BYTE **)(this + 1312); /*0x45249d*/
  if ( v3[5831] ) /*0x4524a3*/
  {
    v4 = *(_BYTE *)(this + 1772); /*0x4524ad*/
    *(_BYTE *)(this + 1771) = -1; /*0x4524b3*/
    if ( !v4 ) /*0x4524bc*/
      *(_BYTE *)(this + 1772) = v3[5895]; /*0x4524c4*/
    *(_BYTE *)(this + 128) = 1; /*0x4524ca*/
  }
  if ( v3[3281] && *(_BYTE *)(this + 617) ) /*0x4524db*/
    (*(void (__thiscall **)(int))(this->isTether)(this); /*0x4524e9*/
  if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + 5822) ) /*0x4524f5*/
    BuildingClass::RepairPlacement((_BYTE *)this, 0); /*0x452503*/
  v5 = 0; /*0x452508*/
  v6 = (_BYTE **)(this + 1372); /*0x45250a*/
  do /*0x452538*/
  {
    if ( *(_BYTE *)(*(_DWORD *)(this + 1312) + v5 + 3980) ) /*0x452516*/
    {
      if ( *v6 ) /*0x452521*/
        BuildingClass::SetField8(*v6); /*0x452527*/
    }
    v5 += 68; /*0x45252c*/
    ++v6; /*0x45252f*/
  }
  while ( v5 < 1428 ); /*0x452538*/
}


// ==== 0x00452540  BuildingClass::MakeTraversable  this=ObjectClass  sig=csp ====
char __thiscall BuildingClass::MakeTraversable(_DWORD *this)
{
  if ( !*(_BYTE *)(this->q520 + 5815) ) /*0x45254a*/
    return 1; /*0x452558*/
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 24 /*0x45257b*/
    || BuildingClass::CheckFlag24((_BYTE *)this + 848)
    || Flag::CheckNone((_BYTE *)this + 848) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 496))(this, -1); /*0x4525be*/
    (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 24, 0); /*0x4525cc*/
    (*(void (__thiscall **)(_DWORD *))(*this + 492))(this); /*0x4525d6*/
  }
  else
  {
    if ( !*(_BYTE *)(this->q520 + 5815) ) /*0x45258a*/
      return 1; /*0x452598*/
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 24 /*0x4525aa*/
      && BuildingClass::CheckPowerFlags((_BYTE *)this + 848) )
    {
      return 1; /*0x4525b7*/
    }
  }
  return 0; /*0x452554*/
}


// ==== 0x004525F0  BuildingClass::IsPoweredOn  this=AbstractClass  sig=csp ====
bool __thiscall BuildingClass_IsPoweredOn(_DWORD *this)
{
  if ( !*(_BYTE *)(this->q520 + 5815) ) /*0x4525f9*/
    return 1; /*0x452603*/
  return (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) == 24 /*0x452605*/
      && BuildingClass::CheckPowerFlags((_BYTE *)this + 848);
}


// ==== 0x00452630  BuildingClass::CheckHealthForRepair  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CheckHealthForRepair(#377 *this)
{
  int result; // eax

  result = this->health; /*0x452633*/
  if ( result ) /*0x452638*/
  {
    result = this->gattlingValue; /*0x45263e*/
    if ( *(_BYTE *)(result + 5498) ) /*0x452644*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->needsRedraw)(this); /*0x452656*/
      if ( (_BYTE)result ) /*0x45265e*/
        LOBYTE(result) = 0; /*0x452660*/
      else
        LOBYTE(result) = InfantryClass::CheckHealthDiff(this); /*0x452666*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x45264e*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x45263a*/
  }
  return result; /*0x45263c*/
}


// ==== 0x00452670  BuildingClass::CanAcceptType  this=IUnknown  sig=csp ====
bool __thiscall BuildingClass_CanAcceptType(int this, int a2, int a3)
{
  int v4; // eax

  if ( a3 != *(_DWORD *)(this + 540) /*0x452695*/
    || _strcmpi((const void *)(a2 + 3720), (const void *)(*(_DWORD *)(this + 1312) + 36)) )
  {
    return 0; /*0x45269f*/
  }
  v4 = *(_DWORD *)(a2 + 5884); /*0x4526a1*/
  if ( v4 == -1 ) /*0x4526aa*/
  {
    if ( *(char *)(this + 1794) < *(_DWORD *)(*(_DWORD *)(this + 1312) + 5344) ) /*0x4526cf*/
      return 1; /*0x4526d5*/
  }
  else if ( v4 <= 0 || v4 > 3 ) /*0x4526b3*/
  {
    return 0; /*0x4526b3*/
  }
  return !*(_BYTE *)(this + 1794); /*0x4526d8*/
}


// ==== 0x004526F0  BuildingClass::SelectVocOrSfx  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SelectWeaponSlot(#377 *this)
{
  char v2; // al
  int v3; // ebx
  BuildingTypeClass *v4; // edi
  int result; // eax
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int weaponIndex; // [esp+14h] [ebp+4h]

  v2 = this->UpgradeLevel; /*0x4526fa*/
  if ( v2 && (v3 = 0, v2 > 0) ) /*0x452708*/
  {
    v4 = (BuildingTypeClass *)&CONTAINING_RECORD(this, BuildingTypeClass, __pad_0)->DebrisTypes[728]; /*0x45270a*/
    while ( 1 ) /*0x452710*/
    {
      if ( *(_DWORD *)v4->vtable0 ) /*0x452710*/
      {
        result = TechnoClass::GetWeaponSlot(*(void **)v4->vtable0, weaponIndex); /*0x452717*/
        if ( *(_DWORD *)result ) /*0x45271c*/
          break; /*0x45271c*/
      }
      ++v3; /*0x45272c*/
      v4 = (BuildingTypeClass *)((char *)v4 + 4); /*0x45272d*/
      if ( v3 >= *((char *)this + 1794) ) /*0x452732*/
        goto LABEL_7; /*0x452732*/
    }
  }
  else
  {
LABEL_7:
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->turretChargeTimer)(this) ) /*0x452738*/
    {
      v6 = this->q1A7; /*0x452742*/
      if ( v6 < this->q1A5 ) /*0x452750*/
      {
        v7 = *(_DWORD *)(this->q1A2 + 4 * v6); /*0x452758*/
        v8 = !VeterancyStruct::IsElite((float *)(v7 + 336)); /*0x452766*/
        v9 = *(_DWORD *)(v7 + 1728); /*0x452768*/
        if ( v8 ) /*0x45276e*/
        {
          v11 = *(_DWORD *)(v9 + 3588); /*0x452792*/
          result = v9 + 3588; /*0x452798*/
          if ( v11 ) /*0x45279f*/
            return result; /*0x45279f*/
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 3616); /*0x452770*/
          result = v9 + 3616; /*0x452776*/
          if ( v10 ) /*0x45277d*/
            return result; /*0x45277d*/
        }
        return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 1016))(v7, 0); /*0x45278f*/
      }
    }
    return (int)TechnoClass::SelectWeaponSlot((TechnoClass *)this, weaponIndex); /*0x4527b7*/
  }
  return result; /*0x45278b*/
}


// ==== 0x004527D0  BuildingClass::HasOccupantAudio  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HasOccupantAudio(#377 *this)
{
  int result; // eax
  char v2; // al
  int v3; // esi
  int v4; // edx
  int *v5; // ecx

  result = this->gattlingValue; /*0x4527d0*/
  if ( *(_BYTE *)(result + 3233) ) /*0x4527d8*/
  {
LABEL_2:
    LOBYTE(result) = 1; /*0x4527e2*/
    return result; /*0x4527e6*/
  }
  v2 = this->UpgradeLevel; /*0x4527e7*/
  if ( v2 ) /*0x4527ef*/
  {
    v3 = v2; /*0x4527f1*/
    v4 = 0; /*0x4527f4*/
    if ( v2 > 0 ) /*0x4527f8*/
    {
      v5 = (int *)((char *)this + 1516); /*0x4527fa*/
      do /*0x452800*/
      {
        result = *v5; /*0x452800*/
        if ( *v5 ) /*0x452800*/
        {
          if ( *(_BYTE *)(result + 3233) ) /*0x452806*/
            goto LABEL_2; /*0x45280e*/
        }
        ++v4; /*0x452810*/
        ++v5; /*0x452811*/
      }
      while ( v4 < v3 ); /*0x452800*/
    }
  }
  LOBYTE(result) = 0; /*0x452818*/
  return result; /*0x4527e2*/
}


// ==== 0x00452820  Warhead::RemoveFromDamageList  this=Warhead  sig=csp ====
char __thiscall sub_452820(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = this + 411; /*0x452827*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(this->q66C + 16))(this + 411, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = v2[4]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( v2[4] = v5; v3 < v2[4]; *(_DWORD *)(v2[1] + 4 * v3 - 4) = *(_DWORD *)(v2[1] + 4 * v3) ) /*0x452849*/
        ++v3; /*0x45284e*/
    }
  }
  v6 = v2[2]; /*0x45285d*/
  if ( v2[4] < v6 /*0x452887*/
    || ((LOBYTE(v7) = *((_BYTE *)v2 + 13), (_BYTE)v7) || !v6)
    && (v7 = v2[5], v7 > 0)
    && (LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v6 + v7, 0), (_BYTE)v7) )
  {
    v7 = v2[4]; /*0x452889*/
    v8 = v2[1]; /*0x45288c*/
    v2[4] = v7 + 1; /*0x452892*/
    *(_DWORD *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/
}


// ==== 0x004528A0  ObjectClass::method_4528A0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4528A0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // edx
  double v10; // st7
  int v12; // [esp+20h] [ebp-Ch] BYREF
  int v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  v3 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 72))(this, &v12); /*0x4528b2*/
  v4 = *v3; /*0x4528b5*/
  v5 = v3[1]; /*0x4528bb*/
  v6 = v3[2]; /*0x4528c0*/
  v7 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 72))(a2, &v12); /*0x4528c8*/
  v8 = v4 - *v7; /*0x4528d2*/
  v9 = v7[2]; /*0x4528d9*/
  v13 = v5 - v7[1]; /*0x4528dc*/
  v12 = v8; /*0x4528e6*/
  v14 = v6 - v9; /*0x4528ea*/
  v10 = Math::Sqrt((double)v8 * (double)v8 + (double)(v6 - v9) * (double)(v6 - v9) + (double)v13 * (double)v13); /*0x45290f*/
  return (int)Math::RoundToInt(v10) <= *(_DWORD *)(this->q520 + 5900) << 8; /*0x452922*/
}


// ==== 0x00452940  CellClass::Get  this=CellClass  sig=csp ====
bool __thiscall sub_452940(_DWORD *this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int *Coords; // eax
  int v8; // edi
  int v9; // edx
  double v10; // st7
  int v12; // [esp+1Ch] [ebp-Ch] BYREF
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]

  v3 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 72))(this, &v12); /*0x452952*/
  v4 = *v3; /*0x452955*/
  v5 = v3[1]; /*0x45295f*/
  v6 = v3[2]; /*0x452963*/
  Coords = CellClass::GetCoords(a2, &v12); /*0x452966*/
  v8 = v4 - *Coords; /*0x452972*/
  v9 = Coords[2]; /*0x452979*/
  v13 = v5 - Coords[1]; /*0x45297c*/
  v12 = v8; /*0x452986*/
  v14 = v6 - v9; /*0x45298a*/
  v10 = Math::Sqrt((double)v8 * (double)v8 + (double)(v6 - v9) * (double)(v6 - v9) + (double)v13 * (double)v13); /*0x4529af*/
  return (int)Math::RoundToInt(v10) <= *(_DWORD *)(this->q520 + 5900) << 8; /*0x4529c2*/
}


// ==== 0x00452A40  BuildingClass::DemolishBridgeCheck  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_DemolishBridge_Check(int *this, int a2)
{
  int result; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // edi
  int v12; // ebp
  _DWORD *v13; // [esp+4h] [ebp-20h]
  int v14; // [esp+8h] [ebp-1Ch]
  char v15; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-10h] BYREF
  _BYTE v18[12]; // [esp+18h] [ebp-Ch] BYREF
  __int16 v19; // [esp+28h] [ebp+4h]
  __int16 v20; // [esp+2Ah] [ebp+6h]

  result = MEMORY[0xA8E7AC]; /*0x452a40*/
  if ( !MEMORY[0xA8E7AC] ) /*0x452a4d*/
  {
    result = this->gattlingValue; /*0x452a53*/
    if ( *(_BYTE *)(result + 5822) ) /*0x452a59*/
    {
      v15 = a2 == 1; /*0x452a79*/
      v4 = 0; /*0x452a89*/
      v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v18); /*0x452a8b*/
      v13 = &unk_818CA0; /*0x452a90*/
      v6 = *v5 / 256; /*0x452ab3*/
      v7 = v5[1] / 256; /*0x452ab6*/
      v19 = v6; /*0x452ab9*/
      v20 = v7; /*0x452abe*/
      while ( 1 ) /*0x452ad1*/
      {
        v8 = v4 & 7; /*0x452ad1*/
        LOWORD(v14) = v6 + LOWORD(MEMORY[0x89F688][v8]); /*0x452aed*/
        HIWORD(v14) = v7 + HIWORD(MEMORY[0x89F688][v8]); /*0x452af2*/
        v16 = v14; /*0x452aff*/
        v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x452b09*/
        v10 = Cell::IsBridge(v9); /*0x452b10*/
        v11 = v10; /*0x452b15*/
        if ( v10 ) /*0x452b19*/
        {
          if ( *(_BYTE *)(v10[328] + 5823) ) /*0x452b21*/
          {
            v12 = (*(int (__thiscall **)(_DWORD *))(*v10 + 56))(v10); /*0x452b32*/
            if ( (*(int (__thiscall **)(int *))(*this + 56))(this) == v12 /*0x452b5f*/
              && (v4 & 3) == (((unsigned int)((*ProgressTimer::GetValue((_WORD *)v11 + 452, &v17) >> 12) + 1) >> 1) & 3) )
            {
              this->LaserFenceFrame |= *v13; /*0x452b79*/
              BuildingClass::DemolishBridgeAnim(this, v4, v15); /*0x452b7f*/
            }
          }
        }
        result = (int)(v13 + 1); /*0x452b8b*/
        v4 = ((_BYTE)v4 + 2) & 7; /*0x452b8e*/
        if ( (int)++v13 >= (int)&dword_818CB0 ) /*0x452b9a*/
          break; /*0x452b9a*/
        LOWORD(v7) = v20; /*0x452aca*/
        LOWORD(v6) = v19; /*0x452aca*/
      }
    }
  }
  return result; /*0x452ba3*/
}


// ==== 0x00452BB0  BuildingClass::FindBridgeSegment  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass::FindBridgeSegment(_DWORD *this, TechnoClass *aP1, char a3, int a4)
{
  BuildingTypeClass *v4; // ebx
  BuildingTypeClass *v6; // eax
  char v7; // si
  int v8; // ebp
  _DWORD *v9; // eax
  int result; // eax
  _WORD *v11; // esi
  _DWORD *v12; // eax
  BuildingTypeClass *v13; // eax
  BuildingTypeClass *v14; // esi
  BuildingTypeClass *v15; // ebx
  BuildingTypeClass *v16; // ebx
  BuildingTypeClass *v17; // [esp+10h] [ebp-20h]
  TechnoClass *v18; // [esp+14h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  char v22[12]; // [esp+24h] [ebp-Ch] BYREF

  v4 = (BuildingTypeClass *)1; /*0x452bba*/
  v17 = (BuildingTypeClass *)1; /*0x452bc4*/
  if ( a4 >= 0 ) /*0x452bc8*/
  {
    v4 = (BuildingTypeClass *)a4; /*0x452bf3*/
  }
  else
  {
    v6 = (BuildingTypeClass *)this->q520; /*0x452bca*/
    if ( !v6->LaserFencePost ) /*0x452bd0*/
      goto LABEL_7; /*0x452bd0*/
    v4 = (BuildingTypeClass *)(*(int *)&v6->DebrisTypes[676] >> 8); /*0x452be0*/
    v17 = v4; /*0x452be6*/
    if ( (int)v4 > 1 ) /*0x452bea*/
      goto LABEL_7; /*0x452bea*/
    v4 = (BuildingTypeClass *)1; /*0x452bec*/
  }
  v17 = v4; /*0x452bf5*/
LABEL_7:
  v7 = (char)aP1; /*0x452bf9*/
  v8 = (unsigned __int8)aP1 & 3; /*0x452c08*/
  v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 72))(this, v22); /*0x452c0b*/
  LOWORD(a4) = *v9 / 256; /*0x452c1e*/
  HIWORD(a4) = v9[1] / 256; /*0x452c32*/
  result = 0; /*0x452c3b*/
  aP1 = (TechnoClass *)a4; /*0x452c3d*/
  a4 = 0; /*0x452c43*/
  v19 = 0; /*0x452c47*/
  if ( (int)v4 <= 0 ) /*0x452c4b*/
    return result; /*0x452c4b*/
  v11 = (_WORD *)(4 * (v7 & 7) + 9041544); /*0x452c54*/
  for ( i = v11; ; v11 = i ) /*0x452c5b*/
  {
    LOWORD(v18) = (_WORD)aP1 + *v11; /*0x452c76*/
    HIWORD(v18) = HIWORD(aP1) + v11[1]; /*0x452c7b*/
    aP1 = v18; /*0x452c8e*/
    v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x452c92*/
    v13 = (BuildingTypeClass *)Cell::IsBridge(v12); /*0x452c99*/
    v14 = v13; /*0x452c9e*/
    if ( !v13 ) /*0x452ca2*/
      goto LABEL_19; /*0x452ca2*/
    if ( *(_BYTE *)(*(_DWORD *)&v13->DebrisTypes[524] + 5822) ) /*0x452caa*/
    {
      v15 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v13->vtable0 + 56))(v13); /*0x452cbb*/
      if ( (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *))(*this + 56))(this) == v15 ) /*0x452cc6*/
        a4 = (int)v14; /*0x452cc8*/
    }
    if ( !a3 ) /*0x452cd2*/
      break; /*0x452cd2*/
    if ( !*(_BYTE *)(*(_DWORD *)&v14->DebrisTypes[524] + 5823) ) /*0x452cda*/
      break; /*0x452cda*/
    v16 = (BuildingTypeClass *)(*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v14->vtable0 + 56))(v14); /*0x452ceb*/
    if ( (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *))(*this + 56))(this) != v16 /*0x452d15*/
      || (((unsigned int)((*ProgressTimer::GetValue(&v14->DebrisTypes[116], (IUnknown *)&v21) >> 12) + 1) >> 1) & 3) != v8 )
    {
      break; /*0x452d15*/
    }
    v4 = v17; /*0x452d17*/
LABEL_19:
    if ( ++v19 >= (int)v4 ) /*0x452d26*/
      return a4; /*0x452d26*/
  }
  return a4; /*0x452d30*/
}


// ==== 0x00452D40  ObjectClass::ProcessDataBuildingClass  this=ObjectClass  sig=csp ====
int sub_452D40()
{
  int result; // eax
  int i; // edi
  int v2; // esi

  result = MEMORY[0xA8EB50]; /*0x452d40*/
  for ( i = 0; i < MEMORY[0xA8EB50]; ++i ) /*0x452d4a*/
  {
    v2 = *((_DWORD *)MEMORY[0xA8EB44] + i); /*0x452d52*/
    if ( v2 /*0x452d7c*/
      && *(_BYTE *)(*(_DWORD *)(v2 + 1312) + 5822)
      && !MEMORY[0xA8E7AC]
      && *(_BYTE *)(v2 + 144)
      && !*(_BYTE *)(v2 + 129) )
    {
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d8a*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d93*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452d9c*/
      BuildingClass::DemolishBridge((#377 *)v2); /*0x452da5*/
      BuildingClass::RepairPlacement((_BYTE *)v2, 1); /*0x452dae*/
    }
    result = MEMORY[0xA8EB50]; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}


// ==== 0x00452DC0  BuildingClass::DemolishBridge  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::DemolishBridge(#377 *this)
{
  int BridgeSegment; // eax
  int v3; // ebp
  ObjectClass *v4; // ecx
  _DWORD *v5; // eax
  _WORD *v6; // ebx
  __int16 v7; // cx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int *v10; // esi
  int v11; // ebx
  int v12; // eax
  IUnknown *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  IUnknown *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  TechnoClass *v19; // [esp+10h] [ebp-20h] BYREF
  TechnoClass *v20; // [esp+14h] [ebp-1Ch]
  _DWORD *v21; // [esp+18h] [ebp-18h]
  _WORD *i; // [esp+1Ch] [ebp-14h]
  unsigned int v23; // [esp+20h] [ebp-10h]
  _DWORD v24[3]; // [esp+24h] [ebp-Ch] BYREF
  TechnoClass *aP1; // [esp+34h] [ebp+4h]
  TechnoClass *aP1a; // [esp+34h] [ebp+4h]
  TechnoClass *aP1b; // [esp+34h] [ebp+4h]

  if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x452dd0*/
  {
    if ( *(_BYTE *)(this->gattlingValue + 5822) ) /*0x452ddc*/
    {
      BridgeSegment = BuildingClass::FindBridgeSegment(this, aP1, 0, -1); /*0x452e08*/
      v21 = (_DWORD *)BridgeSegment; /*0x452e0f*/
      if ( BridgeSegment ) /*0x452e13*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19 ) /*0x452e26*/
        {
          v3 = 0; /*0x452e31*/
          if ( (int)g_TriggerClassCount > 0 ) /*0x452e35*/
          {
            v4 = (ObjectClass *)g_TriggerTypeCount; /*0x452e37*/
            do /*0x452e4e*/
            {
              if ( *(_BYTE *)(*(_DWORD *)v4->__pad_0 + 5823) ) /*0x452e3f*/
                break; /*0x452e46*/
              ++v3; /*0x452e48*/
              v4 = (ObjectClass *)((char *)v4 + 4); /*0x452e49*/
            }
            while ( v3 < (int)g_TriggerClassCount ); /*0x452e4e*/
          }
          if ( v3 < (int)g_TriggerClassCount ) /*0x452e52*/
          {
            v5 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q048)(this, v24); /*0x452e61*/
            LOWORD(v20) = *v5 / 256; /*0x452e74*/
            HIWORD(v20) = v5[1] / 256; /*0x452e88*/
            v19 = v20; /*0x452e93*/
            v6 = (_WORD *)(4 * ((unsigned __int8)aP1 & 7) + 9041544); /*0x452ea0*/
            for ( i = v6; ; v6 = i ) /*0x452ea7*/
            {
              v7 = v6[1] + HIWORD(v19); /*0x452ebe*/
              LOWORD(v20) = (_WORD)v19 + *v6; /*0x452ec2*/
              HIWORD(v20) = v7; /*0x452ec7*/
              v19 = v20; /*0x452eda*/
              v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x452ede*/
              v9 = Cell::IsBridge(v8); /*0x452ee5*/
              if ( v9 == v21 ) /*0x452eee*/
                break; /*0x452eee*/
              v10 = (int *)*((_DWORD *)g_TriggerTypeCount + v3); /*0x452efc*/
              v11 = *v10; /*0x452f01*/
              v12 = (*(int (__thiscall **)(#377 *))(this->ambientSoundController)(this); /*0x452f03*/
              v13 = (IUnknown *)(*(int (__thiscall **)(int *, int))(v11 + 140))(v10, v12); /*0x452f13*/
              v24[2] = 0; /*0x452f21*/
              LOWORD(v23) = ((unsigned __int8)aP1 & 3) << 13; /*0x452f38*/
              v24[0] = ((__int16)v19 << 8) + 128; /*0x452f3d*/
              v14 = v13->field_0; /*0x452f48*/
              v24[1] = (SHIWORD(v19) << 8) + 128; /*0x452f54*/
              if ( !(*(unsigned __int8 (__thiscall **)(IUnknown *, _DWORD *, _DWORD))(v14 + 216))( /*0x452f68*/
                      v13,
                      v24,
                      (unsigned __int8)(((v23 >> 7) + 1) >> 1)) )
              {
                if ( v13 ) /*0x452f78*/
                  (*(void (__thiscall **)(IUnknown *, int))(v13->field_0 + 32))(v13, 1); /*0x452f80*/
                BuildingClass::DemolishBridgeAnim(this, (int)aP1, 0); /*0x452f88*/
                return; /*0x452f94*/
              }
            }
            v15 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q048)(this, v24); /*0x452fa0*/
            LOWORD(aP1a) = *v15 / 256; /*0x452fb8*/
            HIWORD(aP1a) = v15[1] / 256; /*0x452fcc*/
            v19 = aP1a; /*0x452fd5*/
            do /*0x453048*/
            {
              v16 = (IUnknown *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x452fe8*/
              if ( BuildingClass::FindByCellHash(v16) != -1 ) /*0x452ff4*/
                CellClass::ReduceTiberium((int)v16, (InfantryTypeClass *)0xC); /*0x452ffa*/
              if ( v16->field_44 == 126 ) /*0x453002*/
                Helper_486E30((__int16 *)v16); /*0x453006*/
              LOWORD(aP1b) = *v6 + (_WORD)v19; /*0x45301c*/
              HIWORD(aP1b) = HIWORD(v19) + v6[1]; /*0x453021*/
              v19 = aP1b; /*0x453034*/
              v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x453038*/
              v18 = Cell::IsBridge(v17); /*0x45303f*/
            }
            while ( v18 != v21 ); /*0x453048*/
          }
        }
      }
    }
  }
}


// ==== 0x00453060  BuildingClass::DemolishBridgeAnim  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_DemolishBridgeAnim(_DWORD *this, int a2, char a3)
{
  _DWORD *v3; // ebx
  _DWORD *Value; // eax
  int v5; // ebp
  char v6; // si
  int v7; // edi
  _DWORD *v8; // eax
  _WORD *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  int v12; // ebp
  int v13; // ebp
  int v14; // ebx
  int *v15; // eax
  char v17; // [esp+14h] [ebp-38h]
  int v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+24h] [ebp-28h]
  __int64 v20; // [esp+28h] [ebp-24h]
  int v21; // [esp+28h] [ebp-24h]
  _WORD *i; // [esp+30h] [ebp-1Ch]
  int v24; // [esp+38h] [ebp-14h]
  int v25; // [esp+3Ch] [ebp-10h] BYREF
  _BYTE v26[12]; // [esp+40h] [ebp-Ch] BYREF

  v3 = this; /*0x453064*/
  Value = (_DWORD *)this->Type; /*0x453068*/
  if ( *((_BYTE *)Value + 5822) ) /*0x453073*/
  {
    v5 = (int)Value[366] >> 8; /*0x453087*/
    v19 = v5; /*0x45308d*/
    if ( v5 <= 1 ) /*0x453091*/
    {
      v5 = 1; /*0x453093*/
      v19 = 1; /*0x453098*/
    }
    v6 = a2; /*0x45309c*/
    v7 = a2 & 3; /*0x4530a8*/
    v24 = v7; /*0x4530ae*/
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v26); /*0x4530b2*/
    HIWORD(v20) = 0; /*0x4530b7*/
    LOWORD(v20) = *v8 / 256; /*0x4530cd*/
    *(_DWORD *)((char *)&v20 + 2) = (unsigned __int16)(v8[1] / 256); /*0x4530e1*/
    a2 = v20; /*0x4530ec*/
    v9 = (_WORD *)(4 * (v6 & 7) + 9041544); /*0x4530f9*/
    for ( i = v9; ; v9 = i ) /*0x453100*/
    {
      LOWORD(v21) = a2 + *v9; /*0x45311b*/
      HIWORD(v21) = HIWORD(a2) + v9[1]; /*0x453120*/
      a2 = v21; /*0x453133*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x453137*/
      Value = Cell::IsBridge(v10); /*0x45313e*/
      v11 = Value; /*0x453143*/
      if ( Value ) /*0x453147*/
      {
        LOBYTE(Value) = *(_BYTE *)(Value[328] + 5823); /*0x453153*/
        if ( !(_BYTE)Value ) /*0x45315b*/
          return (char)Value; /*0x45315b*/
        v12 = (*(int (__thiscall **)(_DWORD *))(*v11 + 56))(v11); /*0x453168*/
        Value = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 56))(v3); /*0x45316e*/
        if ( Value != (_DWORD *)v12 ) /*0x453173*/
          return (char)Value; /*0x453173*/
        Value = ProgressTimer::GetValue((_WORD *)v11 + 452, &v25); /*0x453184*/
        if ( (((unsigned int)((*Value >> 12) + 1) >> 1) & 3) != v7 ) /*0x453196*/
          return (char)Value; /*0x453196*/
        if ( a3 ) /*0x4531a2*/
        {
          v13 = v11[27]; /*0x4531ab*/
          v14 = *((_DWORD *)MEMORY[0x8871E0] + 1002); /*0x4531b1*/
          v15 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD, _DWORD))(*v11 + 72))(v11, v26, 0, 0); /*0x4531c2*/
          CreateSmokeEffectAt(v13, v14, *v15, v15[1], v15[2], v17, v18); /*0x4531de*/
          v18 = 0; /*0x4531ea*/
          v17 = 1; /*0x4531ec*/
          (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, int))(*v11 + 364))( /*0x4531fe*/
            v11,
            v11 + 27,
            0,
            *((_DWORD *)MEMORY[0x8871E0] + 1002),
            0,
            1);
          v3 = this; /*0x453204*/
          v5 = v19; /*0x453208*/
          v7 = v24; /*0x45320c*/
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *))(*v11 + 248))(v11); /*0x453216*/
          v5 = v19; /*0x45321c*/
        }
      }
      LOBYTE(Value) = BYTE4(v20) + 1; /*0x453224*/
      ++HIDWORD(v20); /*0x453227*/
      if ( SHIDWORD(v20) >= v5 ) /*0x45322b*/
        return (char)Value; /*0x45322b*/
    }
  }
  return (char)Value; /*0x453231*/
}


// ==== 0x00453240  BuildingClass::TraverseBridgeSegments  this=BuildingClass  sig=csp ====
char __thiscall sub_453240(__int16 *this)
{
  _WORD *v2; // eax
  _WORD *v3; // ebp
  unsigned int v4; // esi
  int v5; // eax
  _DWORD *v6; // ebx
  unsigned int v7; // esi
  int v8; // edx
  _WORD *v9; // edi
  __int16 v10; // cx
  int i; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  __int16 v15; // cx
  int v17; // [esp+10h] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h] BYREF

  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], this); /*0x45324f*/
  if ( v2 ) /*0x453256*/
  {
    v2 = Cell::IsBridge(v2); /*0x45325e*/
    v3 = v2; /*0x453263*/
    if ( v2 ) /*0x453267*/
    {
      v2 = (_WORD *)*((_DWORD *)v2 + 328); /*0x45326d*/
      if ( *((_BYTE *)v2 + 5823) ) /*0x453273*/
      {
        v4 = *ProgressTimer::GetValue(v3 + 452, &v20); /*0x453291*/
        v5 = *(_DWORD *)this; /*0x453293*/
        v6 = 0; /*0x453299*/
        v7 = (((v4 >> 12) + 1) >> 1) & 3; /*0x45329d*/
        v18 = v5; /*0x4532a0*/
        v8 = v7 & 7; /*0x4532a6*/
        v9 = (_WORD *)(4 * v8 + 9041544); /*0x4532b1*/
        v10 = v5 + LOWORD(MEMORY[0x89F688][v8]); /*0x4532b8*/
        LOWORD(v8) = HIWORD(MEMORY[0x89F688][v8]); /*0x4532bb*/
        LOWORD(v19) = v10; /*0x4532bf*/
        HIWORD(v19) = HIWORD(v5) + v8; /*0x4532c9*/
        for ( i = v19; ; i = v19 ) /*0x4532ce*/
        {
          v17 = i; /*0x4532d5*/
          if ( (_WORD)i == (_WORD)v5 ) /*0x4532d9*/
          {
            LOBYTE(v2) = BYTE2(v18); /*0x4532db*/
            if ( HIWORD(v17) == HIWORD(v18) ) /*0x4532e5*/
              break; /*0x4532e5*/
          }
          v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x4532f1*/
          v13 = Cell::IsBridge(v12); /*0x4532f8*/
          v6 = v13; /*0x4532fd*/
          if ( !v13 ) /*0x453301*/
            goto LABEL_13; /*0x453301*/
          v14 = v13[328]; /*0x453303*/
          if ( *(_BYTE *)(v14 + 5822) ) /*0x453309*/
          {
            LOBYTE(v2) = BuildingClass::DemolishBridgeAnim(v6, v7 | 4, 0); /*0x45334c*/
            break; /*0x45334c*/
          }
          if ( !*(_BYTE *)(v14 + 5823) ) /*0x45331b*/
            goto LABEL_13; /*0x45331b*/
          LOWORD(v5) = v17; /*0x45331d*/
          v15 = v9[1]; /*0x453324*/
          LOWORD(v19) = v17 + *v9; /*0x453330*/
          v18 = v17; /*0x453335*/
          HIWORD(v19) = HIWORD(v17) + v15; /*0x453339*/
        }
        if ( v6 ) /*0x453353*/
          return (char)v2; /*0x453353*/
LABEL_13:
        LOBYTE(v2) = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)v3 + 248))(v3); /*0x453355*/
      }
    }
  }
  return (char)v2; /*0x453360*/
}


// ==== 0x004533A0  BuildingClass::RepairPlacement  this=AbstractClass  sig=csp ====
BuildingTypeClass *__thiscall BuildingClass::RepairPlacement(_BYTE *this, char a2)
{
  TechnoClass *v2; // ebx
  BuildingTypeClass *result; // eax
  _DWORD *v4; // eax
  char v5; // si
  int v6; // kr00_4
  int v7; // edx
  __int16 v8; // di
  __int16 v9; // cx
  _DWORD *v10; // eax
  BuildingTypeClass *v11; // eax
  BuildingTypeClass *v12; // edi
  int v13; // esi
  int v14; // ebp
  _BYTE *BridgeSegment; // esi
  int v16; // ebx
  int v17; // esi
  _DWORD *Value; // eax
  _DWORD *v19; // esi
  int v20; // eax
  _DWORD *v21; // ebp
  __int16 v22; // dx
  __int16 v23; // ax
  _DWORD *v24; // eax
  BuildingTypeClass *v25; // eax
  bool v26; // zf
  bool v27; // [esp+6h] [ebp-4Eh]
  char v28; // [esp+7h] [ebp-4Dh]
  int v29; // [esp+8h] [ebp-4Ch]
  int v30; // [esp+Ch] [ebp-48h] BYREF
  int v31; // [esp+10h] [ebp-44h]
  BuildingTypeClass *v32; // [esp+14h] [ebp-40h]
  BuildingTypeClass *v33; // [esp+18h] [ebp-3Ch]
  int v34; // [esp+1Ch] [ebp-38h]
  BuildingTypeClass *v35; // [esp+20h] [ebp-34h]
  int v36; // [esp+24h] [ebp-30h]
  int v37; // [esp+28h] [ebp-2Ch]
  int v38; // [esp+2Ch] [ebp-28h]
  BuildingTypeClass *v39; // [esp+30h] [ebp-24h]
  BuildingTypeClass *v40; // [esp+34h] [ebp-20h]
  int v41; // [esp+38h] [ebp-1Ch]
  _WORD *v42; // [esp+3Ch] [ebp-18h]
  int v43; // [esp+40h] [ebp-14h] BYREF
  int v44; // [esp+44h] [ebp-10h] BYREF
  char v45[12]; // [esp+48h] [ebp-Ch] BYREF

  v2 = (TechnoClass *)this; /*0x4533a4*/
  v35 = (BuildingTypeClass *)this; /*0x4533a6*/
  result = (BuildingTypeClass *)this->q148; /*0x4533aa*/
  if ( result->LaserFencePost && this->q090 && !this->q081 ) /*0x4533cc*/
  {
    v37 = *(int *)&result->DebrisTypes[676] >> 8; /*0x4533e6*/
    if ( v37 <= 1 ) /*0x4533ea*/
      v37 = 1; /*0x4533ec*/
    v27 = 0; /*0x4533f8*/
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(this->q0D4)(this) /*0x45341e*/
      && BYTE2(v2[1].isDeactivated)
      && (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v2->__pad_0 + 388))(v2) != 19 )
    {
      v27 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v2->__pad_0 + 388))(v2) != 18; /*0x45342f*/
    }
    v32 = 0; /*0x453437*/
    v41 = 4; /*0x45343f*/
    do /*0x453450*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(*(_DWORD *)v2->__pad_0 + 72))(v2, v45); /*0x453450*/
      v5 = (char)v32; /*0x453465*/
      v6 = v4[1]; /*0x453470*/
      v7 = (unsigned __int8)v32 & 7; /*0x453474*/
      v8 = *v4 / 256 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v7); /*0x453489*/
      v42 = (_WORD *)(4 * v7 + 9041544); /*0x45348c*/
      v9 = *((_WORD *)&MEMORY[0x89F68A] + 2 * v7); /*0x453490*/
      LOWORD(v36) = v8; /*0x453494*/
      HIWORD(v36) = v6 / 256 + v9; /*0x4534a3*/
      v30 = v36; /*0x4534b2*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x4534b6*/
      v11 = (BuildingTypeClass *)Cell::IsBridge(v10); /*0x4534bd*/
      v12 = v11; /*0x4534c2*/
      v13 = v5 & 3; /*0x4534c4*/
      v34 = v13; /*0x4534c9*/
      if ( v11 ) /*0x4534cd*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&v11->DebrisTypes[524] + 5823) ) /*0x4534d9*/
        {
          v14 = (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v11->vtable0 + 56))(v11); /*0x4534ee*/
          if ( (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v2->__pad_0 + 56))(v2) == v14 /*0x45351c*/
            && (((unsigned int)((*ProgressTimer::GetValue(&v12->DebrisTypes[116], (IUnknown *)&v43) >> 12) + 1) >> 1) & 3) == v13 )
          {
            v40 = v12; /*0x453526*/
            v39 = v12; /*0x45352c*/
            if ( a2 ) /*0x453530*/
              goto LABEL_20; /*0x453530*/
            if ( v27 ) /*0x453538*/
            {
              if ( *(int *)&v12->DebrisTypes[772] >= 8 ) /*0x453547*/
                goto LABEL_20; /*0x453547*/
            }
            else if ( *(int *)&v12->DebrisTypes[772] < 8 ) /*0x453556*/
            {
LABEL_20:
              BridgeSegment = 0; /*0x453561*/
              if ( v27 ) /*0x453569*/
                BridgeSegment = (_BYTE *)BuildingClass::FindBridgeSegment(v2, (TechnoClass *)v32, 1, -1); /*0x45357b*/
              v16 = 12; /*0x453581*/
              v29 = 12; /*0x453589*/
              v31 = 12; /*0x45358d*/
              if ( v34 == 2 ) /*0x453591*/
              {
                v16 = 8; /*0x453593*/
                v29 = 8; /*0x453595*/
                v31 = 8; /*0x453599*/
              }
              v28 = 0; /*0x4535a1*/
              if ( v27 /*0x4535f4*/
                && BridgeSegment
                && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 848))(BridgeSegment)
                && BridgeSegment[1770]
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 19
                && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)BridgeSegment + 388))(BridgeSegment) != 18 )
              {
                v28 = 1; /*0x4535fa*/
                switch ( (unsigned int)v32 ) /*0x453604*/
                {
                  case 0u: /*0x453604*/
                    v16 = 5; /*0x45360b*/
                    v29 = 4; /*0x453610*/
                    v31 = 6; /*0x453618*/
                    break; /*0x453620*/
                  case 2u: /*0x453604*/
                    v16 = 1; /*0x453639*/
                    v29 = 0; /*0x45363e*/
                    v31 = 2; /*0x453642*/
                    break; /*0x45364a*/
                  case 4u: /*0x453604*/
                    v16 = 6; /*0x453622*/
                    v29 = 4; /*0x453627*/
                    v31 = 5; /*0x45362f*/
                    break; /*0x453637*/
                  case 6u: /*0x453604*/
                    v16 = 2; /*0x45364c*/
                    v29 = 0; /*0x453651*/
                    v31 = 1; /*0x453655*/
                    break; /*0x453655*/
                  default:
                    break;
                }
              }
              v33 = 0; /*0x45365d*/
              do /*0x4537a8*/
              {
                if ( (int)v33 >= v37 ) /*0x45366f*/
                  break; /*0x45366f*/
                if ( !*(_BYTE *)(*(_DWORD *)&v12->DebrisTypes[524] + 5823) ) /*0x45367b*/
                  break; /*0x45367b*/
                v17 = (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v12->vtable0 + 56))(v12); /*0x453694*/
                if ( (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v35->vtable0 + 56))(v35) != v17 ) /*0x45369d*/
                  break; /*0x45369d*/
                Value = ProgressTimer::GetValue(&v12->DebrisTypes[116], (IUnknown *)&v44); /*0x4536ae*/
                if ( (((unsigned int)((*Value >> 12) + 1) >> 1) & 3) != v34 ) /*0x4536c4*/
                  break; /*0x4536c4*/
                v39 = v12; /*0x4536ce*/
                if ( v12 == v40 ) /*0x4536d4*/
                  *(_DWORD *)&v12->DebrisTypes[772] = v16; /*0x4536d6*/
                else
                  *(_DWORD *)&v12->DebrisTypes[772] = v29; /*0x4536e2*/
                v12->Name[28] = 1; /*0x4536ec*/
                if ( v28 ) /*0x4536f5*/
                {
                  v19 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30) + 57); /*0x453706*/
                  while ( v19 ) /*0x45370e*/
                  {
                    v20 = (*(int (__thiscall **)(_DWORD *))(*v19 + 44))(v19); /*0x453714*/
                    if ( v20 > 0 && (v20 <= 2 || v20 == 15) ) /*0x453723*/
                    {
                      v21 = (_DWORD *)v19[12]; /*0x453728*/
                      if ( (int)v19[27] > 0 ) /*0x453730*/
                        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, BuildingTypeClass *, int, int, _DWORD))(*v19 + 364))( /*0x45374d*/
                          v19,
                          v19 + 27,
                          0,
                          *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                          v12,
                          1,
                          1,
                          0);
                      v19 = v21; /*0x453753*/
                    }
                    else
                    {
                      v19 = (_DWORD *)v19[12]; /*0x453757*/
                    }
                  }
                }
                v22 = v30 + *v42; /*0x45376e*/
                v23 = HIWORD(v30) + v42[1]; /*0x453773*/
                v33 = (BuildingTypeClass *)((char *)v33 + 1); /*0x453778*/
                LOWORD(v38) = v22; /*0x45377c*/
                HIWORD(v38) = v23; /*0x453781*/
                v30 = v38; /*0x45378e*/
                v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x453798*/
                v12 = (BuildingTypeClass *)Cell::IsBridge(v24); /*0x4537a4*/
              }
              while ( v12 ); /*0x4537a8*/
              if ( v28 ) /*0x4537b4*/
              {
                v25 = v39; /*0x4537b6*/
                if ( v39 ) /*0x4537bc*/
                {
                  if ( v40 == v39 ) /*0x4537c2*/
                  {
                    if ( v34 == 2 ) /*0x4537c9*/
                      *(_DWORD *)&v39->DebrisTypes[772] = 3; /*0x4537cb*/
                    else
                      *(_DWORD *)&v39->DebrisTypes[772] = 7; /*0x4537d7*/
                  }
                  else
                  {
                    *(_DWORD *)&v39->DebrisTypes[772] = v31; /*0x4537e7*/
                  }
                  v25->Name[28] = 1; /*0x4537ed*/
                }
              }
              v2 = (TechnoClass *)v35; /*0x4537f4*/
            }
          }
        }
      }
      result = (BuildingTypeClass *)(v41 - 1); /*0x4537f8*/
      v26 = v41 == 1; /*0x453806*/
      v32 = (BuildingTypeClass *)(((_BYTE)v32 + 2) & 7); /*0x453807*/
      --v41; /*0x45380b*/
    }
    while ( !v26 ); /*0x453450*/
  }
  return result; /*0x453818*/
}


// ==== 0x00453840  BuildingClass::RenderExitPosition  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::RenderExitPosition(#377 *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  BuildingTypeClass *v8; // eax
  BuildingTypeClass *v10; // ecx
  BuildingTypeClass **v11; // eax
  BuildingTypeClass *v12; // edi
  BuildingTypeClass *v13; // ebx
  BuildingTypeClass **v14; // eax
  BuildingTypeClass *v15; // ecx
  BuildingTypeClass *v16; // edx
  BuildingTypeClass *v17; // eax
  BuildingTypeClass **v18; // eax
  BuildingTypeClass *v19; // edi
  BuildingTypeClass *v20; // ebx
  int v21; // eax
  BuildingTypeClass *v22; // esi
  int v23; // ecx
  BuildingTypeClass **v24; // ecx
  BuildingTypeClass **v25; // eax
  BuildingTypeClass *v26; // edi
  BuildingTypeClass *v27; // esi
  BuildingTypeClass *v28; // ebx
  BuildingTypeClass *v29; // ebp
  int v30; // ecx
  _DWORD *v31; // eax
  Tactical *v32; // [esp-4h] [ebp-28h]
  _DWORD v33[2]; // [esp+10h] [ebp-14h] BYREF
  _DWORD v34[3]; // [esp+18h] [ebp-Ch] BYREF
  BuildingTypeClass **cell; // [esp+28h] [ebp+4h]
  int v36; // [esp+2Ch] [ebp+8h]

  if ( *(_BYTE *)(this->gattlingValue + 5499) && (*(int (__thiscall **)(#377 *))(this->q408)(this) > 0 ) /*0x453865*/
  {
    v2 = World::ToScreen( /*0x453886*/
           *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
           (AbstractClass *)v33,
           (AbstractClass *)(this->gattlingValue + 8 * this->q1A7 + 5512));
    v3 = *v2; /*0x45388b*/
    v4 = v2[1]; /*0x45388d*/
    v5 = (int *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->currentMission)(this, v34); /*0x453899*/
    v6 = *v5; /*0x45389f*/
    v7 = v5[1]; /*0x4538a5*/
    v8 = (BuildingTypeClass *)v5[2]; /*0x4538a8*/
    *cell = (BuildingTypeClass *)(v3 + v6); /*0x4538b1*/
    cell[1] = (BuildingTypeClass *)(v4 + v7); /*0x4538b3*/
    cell[2] = v8; /*0x4538b6*/
    return (int)cell; /*0x4538b9*/
  }
  else
  {
    v10 = (BuildingTypeClass *)this->gattlingValue; /*0x4538c5*/
    if ( v10->PrimaryFirePixelOffset[0] == 0xFFFF && v10->PrimaryFirePixelOffset[1] == 0xFFFF ) /*0x4538e6*/
    {
      if ( v10->BarrelAnimIsVoxel ) /*0x4539a1*/
      {
        v24 = (BuildingTypeClass **)BuildingClass::CalcBarrelFlashPosition((int *)this, (Tactical *)v34, v36, 1); /*0x4539be*/
        *cell = *v24; /*0x4539c8*/
        cell[1] = v24[1]; /*0x4539cd*/
        cell[2] = v24[2]; /*0x4539d3*/
        return (int)cell; /*0x4539c0*/
      }
      else
      {
        v25 = (BuildingTypeClass **)TechnoClass::ComputeTransform((_DWORD **)this, v34, v36, 0, 0, 0); /*0x4539ff*/
        v26 = *v25; /*0x453a04*/
        v27 = (BuildingTypeClass *)this->gattlingValue; /*0x453a06*/
        v28 = v25[1]; /*0x453a0c*/
        v29 = v25[2]; /*0x453a0f*/
        if ( v27->TurretAnimIsVoxel ) /*0x453a12*/
        {
          v30 = v27->?[165]; /*0x453a22*/
          v33[1] = v27->?[166]; /*0x453a28*/
          v33[0] = v30; /*0x453a34*/
          v31 = World::ToScreen( /*0x453a40*/
                  *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                  (AbstractClass *)v34,
                  (AbstractClass *)v33);
          v26 = (BuildingTypeClass *)((char *)v26 + *v31); /*0x453a4a*/
          v28 = (BuildingTypeClass *)((char *)v28 + v31[1]); /*0x453a4c*/
        }
        *cell = v26; /*0x453a54*/
        cell[1] = v28; /*0x453a58*/
        cell[2] = v29; /*0x453a5b*/
        return (int)cell; /*0x453a4e*/
      }
    }
    else
    {
      v32 = (Tactical *)v10->PrimaryFirePixelOffset; /*0x4538f2*/
      if ( v10->? ) /*0x4538ec*/
      {
        v11 = (BuildingTypeClass **)World::ToScreen( /*0x453902*/
                                      *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                                      (AbstractClass *)v33,
                                      (AbstractClass *)v32);
        v12 = *v11; /*0x453907*/
        v13 = v11[1]; /*0x453909*/
        v14 = (BuildingTypeClass **)TechnoClass::ComputeTransform((_DWORD **)this, v34, v36, 0, 0, 0); /*0x45392c*/
        v15 = *v14; /*0x453931*/
        v16 = v14[1]; /*0x453937*/
        v17 = v14[2]; /*0x45393a*/
        *cell = (BuildingTypeClass *)((char *)v15 + (_DWORD)v12); /*0x453943*/
        cell[1] = (BuildingTypeClass *)((char *)v16 + (_DWORD)v13); /*0x453945*/
      }
      else
      {
        v18 = (BuildingTypeClass **)World::ToScreen( /*0x453962*/
                                      *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
                                      (AbstractClass *)v33,
                                      (AbstractClass *)v32);
        v19 = *v18; /*0x453967*/
        v20 = v18[1]; /*0x453969*/
        v21 = (*(int (__thiscall **)(#377 *, _DWORD *))(this->currentMission)(this, v34); /*0x453975*/
        v22 = *(BuildingTypeClass **)v21; /*0x45397b*/
        v23 = *(_DWORD *)(v21 + 4); /*0x453981*/
        v17 = *(BuildingTypeClass **)(v21 + 8); /*0x453984*/
        *cell = (BuildingTypeClass *)((char *)v19 + (_DWORD)v22); /*0x45398d*/
        cell[1] = (BuildingTypeClass *)((char *)v20 + v23); /*0x45398f*/
      }
      cell[2] = v17; /*0x453948*/
      return (int)cell; /*0x45394b*/
    }
  }
}


// ==== 0x00453A70  TechnoClass::GetTurretScreenPos  this=BuildingClass  sig=csp ====
int __thiscall TechnoClass::GetTurretScreenPos(#377 *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // ebx
  BuildingTypeClass *v5; // edx
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  BuildingTypeClass *v9; // eax
  BuildingTypeClass *v11; // ecx
  int *v12; // eax
  BuildingTypeClass **v13; // ecx
  BuildingTypeClass **TurretOffset; // eax
  BuildingTypeClass *v15; // edi
  BuildingTypeClass *v16; // esi
  BuildingTypeClass *v17; // ebx
  BuildingTypeClass *v18; // ebp
  Tactical *v19; // ecx
  _DWORD *v20; // eax
  _DWORD v21[2]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD v22[3]; // [esp+14h] [ebp-Ch] BYREF
  BuildingTypeClass **v23; // [esp+24h] [ebp+4h]
  int v24; // [esp+28h] [ebp+8h]

  if ( *(_BYTE *)(this->gattlingValue + 5499) && (*(int (__thiscall **)(#377 *))(this->q408)(this) > 0 ) /*0x453a94*/
  {
    v2 = World::ToScreen( /*0x453ab5*/
           *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
           (AbstractClass *)v21,
           (AbstractClass *)(this->gattlingValue + 8 * this->q1A7 + 5512));
    v3 = *v2; /*0x453aba*/
    v4 = v2[1]; /*0x453abc*/
    v5 = *(BuildingTypeClass **)this; /*0x453abf*/
LABEL_4:
    v6 = (int *)((int (__thiscall *)(#377 *, _DWORD *))v5->AlphaImage)(this, v22); /*0x453ac5*/
    v7 = *v6; /*0x453ace*/
    v8 = v6[1]; /*0x453ad4*/
    v9 = (BuildingTypeClass *)v6[2]; /*0x453ad7*/
    *v23 = (BuildingTypeClass *)(v3 + v7); /*0x453ae0*/
    v23[1] = (BuildingTypeClass *)(v4 + v8); /*0x453ae2*/
    v23[2] = v9; /*0x453ae5*/
    return (int)v23; /*0x453af0*/
  }
  v11 = (BuildingTypeClass *)this->gattlingValue; /*0x453af3*/
  if ( v11->PrimaryFirePixelOffset[0] != 0xFFFF || v11->PrimaryFirePixelOffset[1] != 0xFFFF ) /*0x453b14*/
  {
    v12 = World::ToScreen( /*0x453b22*/
            *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
            (AbstractClass *)v21,
            (AbstractClass *)v11->PrimaryFirePixelOffset);
    v3 = *v12; /*0x453b27*/
    v4 = v12[1]; /*0x453b29*/
    v5 = *(BuildingTypeClass **)this; /*0x453b2c*/
    goto LABEL_4; /*0x453b32*/
  }
  if ( v11->BarrelAnimIsVoxel ) /*0x453b34*/
  {
    v13 = (BuildingTypeClass **)BuildingClass::CalcBarrelFlashPosition((int *)this, (Tactical *)v22, v24, 0); /*0x453b51*/
    *v23 = *v13; /*0x453b5c*/
    v23[1] = v13[1]; /*0x453b61*/
    v23[2] = v13[2]; /*0x453b69*/
    return (int)v23; /*0x453b53*/
  }
  else
  {
    TurretOffset = (BuildingTypeClass **)TechnoClass::GetTurretOffset((_DWORD **)this, v22, v24); /*0x453b7f*/
    v15 = *TurretOffset; /*0x453b84*/
    v16 = (BuildingTypeClass *)this->gattlingValue; /*0x453b86*/
    v17 = TurretOffset[1]; /*0x453b8c*/
    v18 = TurretOffset[2]; /*0x453b8f*/
    if ( v16->TurretAnimIsVoxel ) /*0x453b92*/
    {
      v19 = (Tactical *)v16->?[165]; /*0x453ba2*/
      v21[1] = v16->?[166]; /*0x453ba8*/
      v21[0] = v19; /*0x453bb4*/
      v20 = World::ToScreen(*(float **)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)v22, (AbstractClass *)v21); /*0x453bc0*/
      v15 = (BuildingTypeClass *)((char *)v15 + *v20); /*0x453bca*/
      v17 = (BuildingTypeClass *)((char *)v17 + v20[1]); /*0x453bcc*/
    }
    *v23 = v15; /*0x453bd4*/
    v23[1] = v17; /*0x453bd6*/
    v23[2] = v18; /*0x453bd9*/
    return (int)v23; /*0x453bce*/
  }
}


// ==== 0x00453BF0  BuildingClass::CalcBarrelFlashPosition  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::CalcBarrelFlashPosition(int *this, Tactical *aP1, int a3, char a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // ebp
  __int64 v15; // rax
  _DWORD *v16; // eax
  int v17; // esi
  int v18; // ecx
  void *v19; // ebp
  int v20; // edx
  char *v21; // edi
  int v22; // ebx
  _DWORD *v23; // eax
  int v24; // edx
  AbstractClass aP2; // [esp+10h] [ebp-5Ch] BYREF
  float v27[12]; // [esp+3Ch] [ebp-30h] BYREF
  int v28; // [esp+78h] [ebp+Ch]

  v5 = *(_DWORD *)(*(int (__thiscall **)(int *, int))(*this + 1016))(this, a3); /*0x453c0c*/
  if ( a4 ) /*0x453c10*/
  {
    v6 = this->currentBurstIndex; /*0x453c12*/
    if ( v6 ) /*0x453c1a*/
      v7 = v6 - 1; /*0x453c25*/
    else
      v7 = *(_DWORD *)(v5 + 156) - 1; /*0x453c22*/
  }
  else
  {
    v7 = this->currentBurstIndex; /*0x453c2a*/
  }
  if ( v7 ) /*0x453c32*/
  {
    if ( v7 == 1 ) /*0x453c49*/
      v28 = -*(_DWORD *)(this->gattlingValue + 5976); /*0x453c59*/
    else
      v28 = 0; /*0x453c5f*/
  }
  else
  {
    v28 = *(_DWORD *)(this->gattlingValue + 5976); /*0x453c40*/
  }
  v8 = this->gattlingValue; /*0x453c67*/
  v9 = (double)*(int *)(v8 + 5980); /*0x453c71*/
  *(float *)&aP2.abstractFlags = (float)*(int *)(v8 + 5972); /*0x453c83*/
  *(float *)&aP2.nextArrayIndex = (float)v28; /*0x453c90*/
  *(float *)&aP2.referenceCount = v9; /*0x453c94*/
  v10 = BuildingClass::BuildTurretTransform((int)this, v27); /*0x453c98*/
  v11 = TransformMatrix3x4Point((float *)&aP2.NeedsSaveOrLink, v10, (float *)&aP2.abstractFlags); /*0x453ca3*/
  *(float *)&aP2.__pad_0[8] = *v11; /*0x453caa*/
  v12 = *((_DWORD *)v11 + 2); /*0x453cb5*/
  *(float *)&aP2.__pad_0[12] = v11[1]; /*0x453cb8*/
  aP2.uniqueId = v12; /*0x453cbc*/
  v13 = Math::RoundToInt(*(float *)&aP2.__pad_0[8]); /*0x453ccb*/
  v14 = Math::RoundToInt(-*(float *)&aP2.__pad_0[12]); /*0x453cd6*/
  v15 = Math::RoundToInt(*(float *)&aP2.uniqueId); /*0x453cd8*/
  aP2.uniqueId = v15; /*0x453ce1*/
  v16 = (_DWORD *)(*(int (__fastcall **)(int *, _DWORD, void **))(*this + 172))( /*0x453cea*/
                    this,
                    HIDWORD(v15),
                    &aP2.NeedsSaveOrLink);
  v17 = this->gattlingValue; /*0x453cfc*/
  v18 = v14 + v16[1]; /*0x453d04*/
  v19 = (void *)(aP2.uniqueId + v16[2]); /*0x453d06*/
  v20 = *(_DWORD *)(v17 + 4576); /*0x453d0e*/
  v21 = (char *)(v13 + *v16); /*0x453d14*/
  *(_DWORD *)&aP2.__pad_0[4] = *(_DWORD *)(v17 + 4580); /*0x453d16*/
  v22 = v18; /*0x453d1a*/
  aP2.NeedsSaveOrLink = v21; /*0x453d2c*/
  *(_DWORD *)aP2.__pad_0 = v20; /*0x453d30*/
  v23 = World::ToScreen(*(float **)&MEMORY[0x87F8E4].__pad_5568[9432], (AbstractClass *)&aP2.__pad_0[8], &aP2); /*0x453d34*/
  v24 = v23[1]; /*0x453d3b*/
  *(_DWORD *)aP1->__pad_0 = &v21[*v23]; /*0x453d4a*/
  *(_DWORD *)&aP1->field_2[2] = v24 + v22; /*0x453d4c*/
  aP1->field_8 = v19; /*0x453d4f*/
  return aP1->__pad_0; /*0x453d48*/
}


// ==== 0x00453D60  BuildingClass::MarkCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::MarkCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453d60*/
  LOWORD(v5) = *v5 / 256; /*0x453d72*/
  HIWORD(v5) = v1[1] / 256; /*0x453d8b*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x453d9d*/
  v3 = v2[73]; /*0x453da2*/
  result = (int)(v2 + 73); /*0x453da8*/
  LOBYTE(v3) = v3 | 0x80; /*0x453dad*/
  *(_DWORD *)result = v3; /*0x453db0*/
  return result; /*0x453db2*/
}


// ==== 0x00453DC0  BuildingClass::ClearCellOccupied  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ClearCellOccupied(#377 *this)
{
  _DWORD *v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp+4h] BYREF

  v1 = v5; /*0x453dc0*/
  LOWORD(v5) = *v5 / 256; /*0x453dd2*/
  HIWORD(v5) = v1[1] / 256; /*0x453deb*/
  v2 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v5); /*0x453dfd*/
  v3 = v2[73]; /*0x453e02*/
  result = (int)(v2 + 73); /*0x453e08*/
  LOBYTE(v3) = v3 & 0x7F; /*0x453e0d*/
  *(_DWORD *)result = v3; /*0x453e10*/
  return result; /*0x453e12*/
}


// ==== 0x00453E20  BuildingClass::LoadFromStream  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::LoadFromStream(#377 *this)
{
  int v1; // edi
  int v2; // esi
  size_t v3; // eax
  int v4; // ebx
  int v5; // eax
  signed int v6; // ecx
  size_t i; // eax
  _DWORD *v8; // eax
  int v9; // ebp
  int result; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // eax
  int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int *v26; // esi
  int v27; // ebp
  int *v28; // esi
  int v29; // ebp
  int *v30; // esi
  int v31; // ebp
  int v32; // [esp+58h] [ebp-4h]
  int v33; // [esp+60h] [ebp+4h] BYREF
  int v34; // [esp+64h] [ebp+8h] BYREF

  v1 = v33; /*0x453e25*/
  v2 = v33 + 4; /*0x453e2c*/
  v33 = (*(int (__stdcall **)(int))(*(_DWORD *)(v33 + 4) + 16))(v33 + 4); /*0x453e3d*/
  v3 = BuildingTypeClass::Dequeue((char **)&MEMORY[0xB0E840], &v33); /*0x453e41*/
  v4 = 0; /*0x453e46*/
  if ( v3 ) /*0x453e4a*/
  {
    v5 = (int)(v3 - (_DWORD)MEMORY[0xB0E840]) >> 3; /*0x453e52*/
    if ( v5 != -1 ) /*0x453e58*/
    {
      v6 = v5 + 1; /*0x453e5a*/
      for ( i = MEMORY[0xB0E844]; v6 < (int)MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x453e64*/
      {
        v8 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * v6++); /*0x453e6c*/
        *(v8 - 2) = *v8; /*0x453e72*/
        *(v8 - 1) = v8[1]; /*0x453e78*/
      }
      MEMORY[0xB0E844] = i - 1; /*0x453e8d*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = 0; /*0x453e92*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = 0; /*0x453ea3*/
      MEMORY[0xB0E850] = 0; /*0x453ea7*/
    }
  }
  v9 = v34; /*0x453ead*/
  result = BuildingClass::AllocAndCtor(v1, v34); /*0x453eb3*/
  v32 = result; /*0x453eba*/
  if ( result >= 0 ) /*0x453ebe*/
  {
    if ( v1 ) /*0x453ec6*/
      BuildingClass::ctor((_DWORD *)v1, (int)&v33); /*0x453ecf*/
    v11 = (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 16))(v2); /*0x453ee0*/
    v12 = MEMORY[0xB0E848]; /*0x453ee2*/
    if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x453eea*/
      goto LABEL_13; /*0x453eea*/
    if ( !MEMORY[0xB0E848] ) /*0x453eee*/
      v12 = 10; /*0x453ef0*/
    if ( BuildingTypeClass::Enqueue((int)&MEMORY[0xB0E840], v12) ) /*0x453efb*/
    {
LABEL_13:
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = v11; /*0x453f0f*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = v1; /*0x453f1e*/
      MEMORY[0xB0E84C] = 0; /*0x453f28*/
      ++MEMORY[0xB0E844]; /*0x453f2f*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1312)); /*0x453f40*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1316)); /*0x453f51*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1344)); /*0x453f62*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1352)); /*0x453f73*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1356)); /*0x453f84*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1536)); /*0x453f95*/
    AudioController::Init((_DWORD *)(v1 + 1696)); /*0x453fa0*/
    AudioController::Init((_DWORD *)(v1 + 1716)); /*0x453fab*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v1 + 1780)); /*0x453fbc*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x453fcd*/
    if ( result >= 0 ) /*0x453fd2*/
    {
      v13 = v34; /*0x453fd8*/
      if ( v34 <= 0 ) /*0x453fde*/
      {
LABEL_24:
        v18 = 0; /*0x45404c*/
        if ( v13 > 0 ) /*0x454050*/
        {
          do /*0x45406b*/
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v1 + 1648) + 4 * v18++)); /*0x454061*/
          while ( v18 < v34 ); /*0x45406b*/
        }
        result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v34, 4, 0); /*0x45407a*/
        if ( result >= 0 ) /*0x45407f*/
        {
          v19 = v34; /*0x454085*/
          v20 = 0; /*0x454089*/
          if ( v34 <= 0 ) /*0x45408d*/
          {
LABEL_36:
            v25 = 0; /*0x4540fb*/
            if ( v19 > 0 ) /*0x4540ff*/
            {
              do /*0x45411a*/
                ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v1 + 1672) + 4 * v25++)); /*0x454110*/
              while ( v25 < v34 ); /*0x45411a*/
            }
            v26 = (int *)(v1 + 1372); /*0x45411c*/
            v27 = 21; /*0x454122*/
            do /*0x454136*/
            {
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v26++); /*0x45412d*/
              --v27; /*0x454135*/
            }
            while ( v27 ); /*0x454136*/
            v28 = (int *)(v1 + 1516); /*0x454138*/
            v29 = 3; /*0x45413e*/
            do /*0x454152*/
            {
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v28++); /*0x454149*/
              --v29; /*0x454151*/
            }
            while ( v29 ); /*0x454152*/
            v30 = (int *)(v1 + 1480); /*0x454154*/
            v31 = 8; /*0x45415a*/
            do /*0x45416e*/
            {
              ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v30++); /*0x454165*/
              --v31; /*0x45416d*/
            }
            while ( v31 ); /*0x45416e*/
            *(_DWORD *)(v1 + 1556) = 0; /*0x454174*/
            return v32; /*0x454170*/
          }
          else
          {
            while ( 1 ) /*0x45409c*/
            {
              result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x45409c*/
              if ( result < 0 ) /*0x4540a1*/
                break; /*0x4540a1*/
              v21 = *(_DWORD *)(v1 + 1676); /*0x4540a7*/
              if ( *(_DWORD *)(v1 + 1684) < v21 /*0x4540d8*/
                || (*(_BYTE *)(v1 + 1681) || !v21)
                && (v22 = *(_DWORD *)(v1 + 1688), v22 > 0)
                && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v1 + 1668) + 8))(
                     v1 + 1668,
                     v21 + v22,
                     0) )
              {
                v23 = *(_DWORD *)(v1 + 1684); /*0x4540df*/
                v24 = *(_DWORD *)(v1 + 1672); /*0x4540e2*/
                *(_DWORD *)(v1 + 1684) = v23 + 1; /*0x4540e8*/
                *(_DWORD *)(v24 + 4 * v23) = v33; /*0x4540ef*/
              }
              v19 = v34; /*0x4540f2*/
              if ( ++v20 >= v34 ) /*0x4540f9*/
                goto LABEL_36; /*0x4540f9*/
            }
          }
        }
      }
      else
      {
        while ( 1 ) /*0x453fed*/
        {
          result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v9 + 12))(v9, &v33, 4, 0); /*0x453fed*/
          if ( result < 0 ) /*0x453ff2*/
            break; /*0x453ff2*/
          v14 = *(_DWORD *)(v1 + 1652); /*0x453ff8*/
          if ( *(_DWORD *)(v1 + 1660) < v14 /*0x454029*/
            || (*(_BYTE *)(v1 + 1657) || !v14)
            && (v15 = *(_DWORD *)(v1 + 1664), v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v1 + 1644) + 8))(
                 v1 + 1644,
                 v14 + v15,
                 0) )
          {
            v16 = *(_DWORD *)(v1 + 1660); /*0x454030*/
            v17 = *(_DWORD *)(v1 + 1648); /*0x454033*/
            *(_DWORD *)(v1 + 1660) = v16 + 1; /*0x454039*/
            *(_DWORD *)(v17 + 4 * v16) = v33; /*0x454040*/
          }
          v13 = v34; /*0x454043*/
          if ( ++v4 >= v34 ) /*0x45404a*/
            goto LABEL_24; /*0x45404a*/
        }
      }
    }
  }
  return result; /*0x45417e*/
}


// ==== 0x00454190  BuildingClass::Size  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Size(#377 *this)
{
  int SizeMax; // ebp
  int v2; // edx
  int result; // eax
  int v4; // ebx
  int v5; // edx
  int v6; // ebx
  _DWORD *v7; // [esp+38h] [ebp+4h]
  int v8; // [esp+3Ch] [ebp+8h]
  int v9; // [esp+40h] [ebp+Ch] BYREF

  SizeMax = IPersistStream::GetSizeMax((int)v7, v8, v9); /*0x4541a8*/
  if ( SizeMax < 0 ) /*0x4541ac*/
    return SizeMax; /*0x4541ac*/
  v2 = *(_DWORD *)v8; /*0x4541b8*/
  v9 = v7[415]; /*0x4541c4*/
  result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2 + 16))(v8, &v9, 4, 0); /*0x4541c8*/
  if ( result < 0 ) /*0x4541cd*/
    return result; /*0x4541cd*/
  v4 = 0; /*0x4541d3*/
  if ( v9 <= 0 ) /*0x4541d7*/
  {
LABEL_6:
    v5 = *(_DWORD *)v8; /*0x4541fa*/
    v9 = v7[421]; /*0x45420c*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(v5 + 16))(v8, &v9, 4, 0); /*0x454210*/
    if ( result < 0 ) /*0x454215*/
      return result; /*0x454215*/
    v6 = 0; /*0x45421b*/
    if ( v9 > 0 ) /*0x45421f*/
    {
      while ( 1 ) /*0x454232*/
      {
        result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[418] + 4 * v6, 4, 0); /*0x454232*/
        if ( result < 0 ) /*0x454237*/
          break; /*0x454237*/
        if ( ++v6 >= v9 ) /*0x454240*/
          return SizeMax; /*0x454240*/
      }
      return result; /*0x454237*/
    }
    return SizeMax; /*0x454242*/
  }
  while ( 1 ) /*0x4541ea*/
  {
    result = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, v7[412] + 4 * v4, 4, 0); /*0x4541ea*/
    if ( result < 0 ) /*0x4541ef*/
      return result; /*0x454244*/
    if ( ++v4 >= v9 ) /*0x4541f8*/
      goto LABEL_6; /*0x4541f8*/
  }
}


// ==== 0x00454250  BuildingClass::IsProducing  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsProducing(#377 *this)
{
  int result; // eax

  LOBYTE(result) = this->BuildingClass_field_bool_6DD != 0; /*0x454258*/
  return result; /*0x45425b*/
}


// ==== 0x00454260  BuildingClass::PowerDrainUpdate  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::PowerDrainUpdate(#377 *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int *v31; // [esp+Ch] [ebp+4h]

  House::PowerBeginUpdate((int)this, (int)v31); /*0x454269*/
  v2 = this->C4Timer; /*0x45426e*/
  v3 = this->ammoReloadTimer; /*0x454274*/
  if ( v2 != -1 ) /*0x45427d*/
  {
    if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x454289*/
      v3 = 0; /*0x45428f*/
    else
      v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x45428b*/
  }
  Power::TimerProcess(v3); /*0x454294*/
  v4 = this->q6D0; /*0x454299*/
  v5 = this->q6D8; /*0x45429f*/
  if ( v4 != -1 ) /*0x4542a8*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x4542b4*/
      v5 = 0; /*0x4542ba*/
    else
      v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x4542b6*/
  }
  Power::TimerProcess(v5); /*0x4542bf*/
  Power::TimerProcess(this->BuildingClass_field_int_534); /*0x4542cd*/
  Power::TimerProcess(this->q14E); /*0x4542db*/
  Power::TimerProcess(this->OwnerCountryIndex); /*0x4542e9*/
  v6 = this->initialOwner; /*0x4542ee*/
  if ( v6 ) /*0x4542f6*/
  {
    v7 = (*(int (__stdcall **)(int))(*(_DWORD *)(v6 + 4) + 16))(v6 + 4); /*0x4542ff*/
    Power::TimerProcess(v7); /*0x454305*/
  }
  Power::TimerProcess(this->BuildingClass_field_544); /*0x454313*/
  v8 = this->FirestormAnim; /*0x454318*/
  if ( v8 ) /*0x454320*/
  {
    v9 = (*(int (__stdcall **)(int))(*(_DWORD *)(v8 + 4) + 16))(v8 + 4); /*0x454329*/
    Power::TimerProcess(v9); /*0x45432f*/
  }
  v10 = this->veterancy; /*0x454334*/
  v11 = this->q558; /*0x45433a*/
  if ( v10 != -1 ) /*0x454343*/
  {
    if ( (int)MEMORY[0xA8ED84] - v10 >= v11 ) /*0x45434f*/
      v11 = 0; /*0x454355*/
    else
      v11 -= (int)MEMORY[0xA8ED84] - v10; /*0x454351*/
  }
  Power::TimerProcess(v11); /*0x45435a*/
  Power::TimerProcess(this->BuildingClass_field_5FC); /*0x454368*/
  Power::TimerProcess(this->LaserFenceFrame); /*0x454376*/
  Power::TimerProcess(this->FirestormWallFrame); /*0x454384*/
  LOBYTE(v12) = this->HasPower; /*0x454389*/
  v13 = Power::FlagProcess(v31, v12); /*0x454392*/
  LOBYTE(v13) = this->StuffEnabled; /*0x454397*/
  Power::FlagProcess(v31, v13); /*0x4543a0*/
  LOBYTE(v14) = this->q6CA; /*0x4543a5*/
  Power::FlagProcess(v31, v14); /*0x4543ae*/
  LOBYTE(v15) = this->q6CB; /*0x4543b3*/
  v16 = Power::FlagProcess(v31, v15); /*0x4543bc*/
  LOBYTE(v16) = this->BuildingClass_field_bool_6DC; /*0x4543c1*/
  Power::FlagProcess(v31, v16); /*0x4543ca*/
  LOBYTE(v17) = this->BuildingClass_field_bool_6DD; /*0x4543cf*/
  Power::FlagProcess(v31, v17); /*0x4543d8*/
  LOBYTE(v18) = this->IsBeingRepaired; /*0x4543dd*/
  v19 = Power::FlagProcess(v31, v18); /*0x4543e6*/
  LOBYTE(v19) = this->NeedsRepairs; /*0x4543eb*/
  Power::FlagProcess(v31, v19); /*0x4543f4*/
  LOBYTE(v20) = this->C4Applied; /*0x4543f9*/
  Power::FlagProcess(v31, v20); /*0x454402*/
  LOBYTE(v21) = this->NoCrew; /*0x454407*/
  v22 = Power::FlagProcess(v31, v21); /*0x454410*/
  LOBYTE(v22) = this->BuildingClass_field_bool_6E1; /*0x454415*/
  Power::FlagProcess(v31, v22); /*0x45441e*/
  LOBYTE(v23) = this->BuildingClass_field_bool_6E2; /*0x454423*/
  Power::FlagProcess(v31, v23); /*0x45442c*/
  LOBYTE(v24) = this->HasBeenCaptured; /*0x454431*/
  v25 = Power::FlagProcess(v31, v24); /*0x45443a*/
  LOBYTE(v25) = this->ActuallyPlacedOnMap; /*0x45443f*/
  Power::FlagProcess(v31, v25); /*0x454448*/
  LOBYTE(v26) = this->q6CC; /*0x45444d*/
  Power::FlagProcess(v31, v26); /*0x454456*/
  LOBYTE(v27) = this->BuildingClass_field_bool_6E5; /*0x45445b*/
  v28 = Power::FlagProcess(v31, v27); /*0x454464*/
  LOBYTE(v28) = this->IsDamaged; /*0x454469*/
  Power::FlagProcess(v31, v28); /*0x454472*/
  Power::TimerProcess(*((unsigned __int16 *)this + 896)); /*0x454483*/
  LOBYTE(v29) = this->UpgradeLevel; /*0x454488*/
  return Power::FinalizeDrain(v31, v29); /*0x454496*/
}


// ==== 0x004544A0  BuildingClass::UpdatePowerDrain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdatePowerDrain(#377 *this)
{
  char v2; // al
  IUnknown *v3; // edi
  BuildingTypeClass *v4; // eax
  int v5; // ecx
  int v6; // eax
  IUnknown *v7; // ecx
  _WORD *v8; // eax
  IUnknown *v10; // [esp-4h] [ebp-18h]
  TechnoClass *aP1; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h] BYREF

  v2 = this->Translucency; /*0x4544a7*/
  if ( !v2 ) /*0x4544af*/
    return TechnoClass::UpdatePowerDrain((char *)this, aP1, v12); /*0x4545c3*/
  if ( v2 <= 10 ) /*0x4544b7*/
    return (v2 > 5) + 1; /*0x4545ae*/
  if ( (_BYTE)aP1 ) /*0x4544c3*/
  {
    v3 = (IUnknown *)v12; /*0x4544c5*/
    if ( v12 ) /*0x4544cb*/
    {
      v4 = (BuildingTypeClass *)this->q027; /*0x4544d7*/
      v5 = this->owningHouseIndex; /*0x4544d9*/
      LOWORD(v12) = (int)v4 / 256; /*0x4544ef*/
      v6 = v5; /*0x4544f6*/
      v7 = *(IUnknown **)&v3->__pad_28[8]; /*0x4544f7*/
      HIWORD(v12) = v6 / 256; /*0x454509*/
      v10 = v7; /*0x454512*/
      v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v12); /*0x45451d*/
      if ( Cell::IsPassableOffset(v8, v10) ) /*0x454524*/
        return 3; /*0x454537*/
    }
  }
  else if ( this->isOwnedByCurrentPlayer /*0x45458f*/
         || (*(unsigned __int8 (__thiscall **)(#377 *))(this->railgunParticles)(this)
         || !g_hWnd
         || MEMORY[0xA8B238]
         && this->owner
         && HouseClass_Player
         && (unsigned __int8)HouseClass::IsAlliedWith(HouseClass_Player, *((IUnknown **)this + 135))
         && (unsigned __int8)HouseClass::IsAlliedWith(*((void **)this + 135), HouseClass_Player) )
  {
    return 3; /*0x454596*/
  }
  return 5; /*0x45452d*/
}


// ==== 0x004545D0  BuildingClass::ProcessAnimationStates  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessAnimationStates(int this)
{
  AnimClass *v2; // ecx
  IUnknown *v3; // ebp
  int v4; // edi
  BuildingTypeClass *v5; // eax
  BuildingTypeClass *v6; // ecx
  int v7; // edx
  int v8; // ecx
  _BYTE *v9; // eax
  int v10; // [esp+Ch] [ebp-4h]

  BuildingClass::ClearAnims((int *)this, (TechnoClass *)0x14); /*0x4545d8*/
  v2 = (AnimClass *)(this + 1372); /*0x4545dd*/
  v3 = 0; /*0x4545e3*/
  v4 = 0; /*0x4545e5*/
  v10 = this + 1372; /*0x4545e7*/
  do /*0x454716*/
  {
    v5 = *(BuildingTypeClass **)(this + 1312); /*0x4545eb*/
    if ( LOBYTE(v5->?[v4 + 16]) ) /*0x4545f1*/
    {
      v6 = (BuildingTypeClass *)v2->field_0; /*0x4545fc*/
      if ( v6 ) /*0x454600*/
        VtableStub::Method_425270(v6); /*0x454606*/
    }
    else if ( BYTE1(v5->?[v4 + 16]) ) /*0x454610*/
    {
      if ( !v2->field_0 && *(_BYTE *)(this + 1764) && (!v5->IsAnimDelayedFire || v4 != 170) ) /*0x454642*/
      {
        if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45465f*/
        {
          v8 = 0; /*0x45467b*/
          v9 = (_BYTE *)(v4 * 4 + *(_DWORD *)(this + 1312) + 3916); /*0x45467d*/
        }
        else
        {
          v7 = *(_DWORD *)(this + 1312); /*0x454661*/
          v8 = 1; /*0x454667*/
          v9 = (_BYTE *)(v4 * 4 + v7 + 3932); /*0x45466c*/
        }
        if ( v9 && *v9 ) /*0x454688*/
          goto LABEL_23; /*0x45468b*/
      }
    }
    else if ( BYTE2(v5->?[v4 + 16]) && v3->__pad_524[this + 140] ) /*0x45469a*/
    {
      v3->__pad_524[this + 140] = 0; /*0x4546a7*/
      if ( BuildingClass::GetHealthRatio((int *)this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x4546c5*/
      {
        v8 = 0; /*0x4546e1*/
        v9 = (_BYTE *)(v4 * 4 + *(_DWORD *)(this + 1312) + 3916); /*0x4546e3*/
      }
      else
      {
        v7 = *(_DWORD *)(this + 1312); /*0x4546c7*/
        v8 = 1; /*0x4546cd*/
        v9 = (_BYTE *)(v4 * 4 + v7 + 3932); /*0x4546d2*/
      }
      if ( v9 && *v9 ) /*0x4546ee*/
LABEL_23:
        BuildingClass::PlayAnim((ObjectClass *)this, v7, v9, v3, (IUnknown *)v8, 0, 0); /*0x4546f3*/
    }
    v4 += 17; /*0x454701*/
    v3 = (IUnknown *)((char *)v3 + 1); /*0x454708*/
    v2 = (AnimClass *)(v10 + 4); /*0x454709*/
    v10 += 4; /*0x454712*/
  }
  while ( v4 < 357 ); /*0x454716*/
}


// ==== 0x00454730  BuildingClass::UpdateIdleAnims  this=BuildingClass  sig=csp ====
BuildingTypeClass *__thiscall BuildingClass::UpdateIdleAnims(int *this)
{
  IUnknown *v2; // ebx
  int i; // edi
  BuildingTypeClass *result; // eax
  int v5; // edx
  int v6; // ecx

  BuildingClass::ClearAnims(this, (TechnoClass *)0x13); /*0x454737*/
  v2 = 0; /*0x45473c*/
  for ( i = 0; i < 357; i += 17 ) /*0x45473e*/
  {
    result = (BuildingTypeClass *)this->gattlingValue; /*0x454740*/
    if ( HIBYTE(result->?[i + 16]) ) /*0x454746*/
    {
      if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454769*/
      {
        v6 = 0; /*0x454785*/
        result = (BuildingTypeClass *)(this->gattlingValue + i * 4 + 3916); /*0x454787*/
      }
      else
      {
        v5 = this->gattlingValue; /*0x45476b*/
        v6 = 1; /*0x454771*/
        result = (BuildingTypeClass *)(v5 + i * 4 + 3932); /*0x454776*/
      }
      if ( result ) /*0x454790*/
      {
        if ( result->vtable0[0] ) /*0x454792*/
          result = (BuildingTypeClass *)BuildingClass::PlayAnim( /*0x4547a0*/
                                          (ObjectClass *)this,
                                          v5,
                                          result,
                                          v2,
                                          (IUnknown *)v6,
                                          0,
                                          0);
      }
    }
    v2 = (IUnknown *)((char *)v2 + 1); /*0x4547a8*/
  }
  return result; /*0x4547b1*/
}


// ==== 0x004547C0  BuildingClass::UpdateAnimationSlots  this=AbstractClass  sig=csp ====
void __thiscall BuildingClass::UpdateAnimationSlots(int *this)
{
  TechnoClass *i; // edi
  _BYTE *v3; // eax
  _BYTE *v4; // ecx
  BuildingTypeClass *v5; // eax
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // edx
  int v9; // ecx
  _BYTE *v10; // eax

  for ( i = 0; (int)i < 21; i = (TechnoClass *)((char *)i + 1) ) /*0x4547c4*/
  {
    v3 = (_BYTE *)(this->q148 + 68 * (_DWORD)i); /*0x4547d3*/
    if ( v3[3980] ) /*0x4547d6*/
    {
      v4 = (_BYTE *)*(this + (_DWORD)i + 343); /*0x4547e0*/
      if ( v4 ) /*0x4547e9*/
        AnimClass::SetField8(v4); /*0x4547ef*/
    }
    else if ( v3[3981] ) /*0x4547f9*/
    {
      if ( *(this + (_DWORD)i + 343) ) /*0x454807*/
      {
        BuildingClass::ClearAnims(this, i); /*0x454819*/
        if ( i == (TechnoClass *)10 ) /*0x454821*/
        {
          v5 = (BuildingTypeClass *)this->q148; /*0x454827*/
          if ( v5->IsAnimDelayedFire ) /*0x45482d*/
          {
            if ( LOBYTE(v5->?[67]) ) /*0x45483b*/
            {
              if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454861*/
              {
                v6 = 0; /*0x45487b*/
                v7 = (_BYTE *)(this->q148 + 4120); /*0x45487d*/
              }
              else
              {
                v6 = 1; /*0x454869*/
                v7 = (_BYTE *)(this->q148 + 4136); /*0x45486e*/
              }
              if ( v7 && *v7 ) /*0x45488a*/
                BuildingClass::PlayAnim( /*0x45489a*/
                  (ObjectClass *)this,
                  *(int *)&stru_87C374.__pad_579C[22224],
                  v7,
                  (IUnknown *)3,
                  (IUnknown *)v6,
                  0,
                  0);
            }
          }
        }
      }
    }
    else if ( v3[3982] ) /*0x45489c*/
    {
      if ( *(this + (_DWORD)i + 343) ) /*0x4548a6*/
      {
        *((_BYTE *)this + (_DWORD)i + 1456) = 1; /*0x4548b4*/
        BuildingClass::ClearAnims(this, i); /*0x4548bc*/
        if ( i == (TechnoClass *)16 ) /*0x4548c4*/
        {
          if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x4548dd*/
          {
            v9 = 0; /*0x4548f7*/
            v10 = (_BYTE *)(this->q148 + 5276); /*0x4548f9*/
          }
          else
          {
            v9 = 1; /*0x4548e5*/
            v10 = (_BYTE *)(this->q148 + 5292); /*0x4548ea*/
          }
          if ( v10 && *v10 ) /*0x454902*/
            BuildingClass::PlayAnim((ObjectClass *)this, v8, v10, (IUnknown *)0x14, (IUnknown *)v9, 0, 0); /*0x454911*/
        }
      }
    }
  }
}


// ==== 0x00454930  BuildingClass::ProcessDamageAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::ProcessDamageAnim(int *this)
{
  int v2; // edx
  int v3; // ecx
  _BYTE *v4; // eax
  TechnoClass *v5; // ebx
  int i; // esi

  if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45494a*/
  {
    v3 = 0; /*0x454964*/
    v4 = (_BYTE *)(this->gattlingValue + 5208); /*0x454966*/
  }
  else
  {
    v3 = 1; /*0x454952*/
    v4 = (_BYTE *)(this->gattlingValue + 5224); /*0x454957*/
  }
  if ( v4 && *v4 ) /*0x45496f*/
    BuildingClass::PlayAnim((ObjectClass *)this, v2, v4, (IUnknown *)0x13, (IUnknown *)v3, 0, 0); /*0x45497e*/
  v5 = 0; /*0x454983*/
  for ( i = 0; i < 1428; i += 68 ) /*0x454985*/
  {
    if ( *(_BYTE *)(this->gattlingValue + i + 3983) ) /*0x45498d*/
      BuildingClass::ClearAnims(this, v5); /*0x45499b*/
    v5 = (TechnoClass *)((char *)v5 + 1); /*0x4549a3*/
  }
}


// ==== 0x004549B0  Animation::UpdateBuildingAnimations  this=Animation  sig=csp ====
void __thiscall Animation::UpdateBuildingAnimations(int *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  char v6; // cl
  int v7; // eax
  IUnknown *v8; // ebp
  int i; // edi
  double HealthRatio; // st7
  int v11; // edx
  int v12; // ecx
  _BYTE *v13; // eax
  int v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  _BYTE *v24; // eax
  TechnoClass *v25; // ebp
  int j; // edi

  v2 = (*(unsigned __int8 (__thiscall **)(int *))(*this + 848))(this) == 0; /*0x4549bd*/
  v3 = this->q148; /*0x4549bf*/
  v4 = *(_DWORD *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
    if ( v4 && !*((_BYTE *)this + 1634) ) /*0x4549d5*/
    {
      *((_BYTE *)this + 1634) = 1; /*0x4549df*/
      TechnoClass::Find(this->q087, *(_DWORD *)(v3 + 1036)); /*0x4549f3*/
    }
    v5 = (_BYTE *)this->q148; /*0x4549f8*/
    if ( v5[5831] ) /*0x4549fe*/
    {
      if ( *((char *)this + 1771) <= 0 ) /*0x454a10*/
      {
        v6 = *((_BYTE *)this + 1772); /*0x454a12*/
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          *((_BYTE *)this + 1771) = 1; /*0x454a22*/
          if ( v6 == v5[5895] ) /*0x454a31*/
            *((_BYTE *)this + 1772) = 0; /*0x454a33*/
          *((_BYTE *)this + 128) = 1; /*0x454a3a*/
        }
      }
    }
    if ( v5[3281] && !*((_BYTE *)this + 617) ) /*0x454a4b*/
      (*(void (__thiscall **)(int *))(*this + 1044))(this); /*0x454a59*/
    v7 = this->q148; /*0x454a5f*/
    if ( *(_BYTE *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      BuildingClass::ProcessAnimationStates((int)this); /*0x454a7b*/
    if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454a86*/
    {
      BuildingClass::ClearAnims(this, (TechnoClass *)0x13); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
        if ( *(_BYTE *)(i + this->q148 + 3983) ) /*0x454aa7*/
        {
          HealthRatio = BuildingClass::GetHealthRatio(this); /*0x454ab4*/
          v11 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x454ab9*/
          if ( HealthRatio > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454aca*/
          {
            v11 = this->q148; /*0x454ae0*/
            v12 = 0; /*0x454ae6*/
            v13 = (_BYTE *)(i + v11 + 3916); /*0x454ae8*/
          }
          else
          {
            v12 = 1; /*0x454ad2*/
            v13 = (_BYTE *)(i + this->q148 + 3932); /*0x454ad7*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( *v13 ) /*0x454af3*/
              BuildingClass::PlayAnim((ObjectClass *)this, v11, v13, v8, (IUnknown *)v12, 0, 0); /*0x454b01*/
          }
        }
        v8 = (IUnknown *)((char *)v8 + 1); /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
  if ( v4 && *((_BYTE *)this + 1634) ) /*0x454b1a*/
  {
    v14 = this->q087; /*0x454b24*/
    *((_BYTE *)this + 1634) = 0; /*0x454b2a*/
    HouseClass::LostPoweredCenter(v14, *(_DWORD *)(v3 + 1036)); /*0x454b38*/
  }
  v15 = (_DWORD *)this->q0AF; /*0x454b3d*/
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
  if ( this->q0AB ) /*0x454b4c*/
    TechnoClass::EjectPassengers(this, 1); /*0x454b5a*/
  v16 = this->q148; /*0x454b5f*/
  if ( *(_BYTE *)(v16 + 5831) && *((char *)this + 1771) >= 0 && *((_BYTE *)this + 1772) ) /*0x454b79*/
  {
    *((_BYTE *)this + 1771) = -1; /*0x454b83*/
    *((_BYTE *)this + 128) = 1; /*0x454b8a*/
  }
  if ( *(_BYTE *)(v16 + 3281) ) /*0x454b91*/
  {
    if ( *((_BYTE *)this + 617) ) /*0x454b9b*/
    {
      (*(void (__thiscall **)(int *))(*this + 1048))(this); /*0x454ba9*/
      if ( *((_BYTE *)this + 616) ) /*0x454baf*/
      {
        v17 = this->q087; /*0x454bb9*/
        *((_BYTE *)this + 616) = 0; /*0x454bbf*/
        *((_BYTE *)this + 1641) = 0; /*0x454bc6*/
        *(_BYTE *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *this; /*0x454bda*/
        this->q09B = *(char *)(this->q148 + 3282); /*0x454be5*/
        (*(void (__thiscall **)(int *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
  v19 = this->q148; /*0x454bf1*/
  if ( *(_BYTE *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    BuildingClass::UpdateAnimationSlots(this); /*0x454c0d*/
  if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454c18*/
  {
    v20 = this->q087; /*0x454c26*/
    v21 = *(_DWORD *)(v20 + 676); /*0x454c2c*/
    v22 = *(_DWORD *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
LABEL_52:
      if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454c71*/
      {
        v23 = 0; /*0x454c8b*/
        v24 = (_BYTE *)(this->q148 + 5208); /*0x454c8d*/
      }
      else
      {
        v23 = 1; /*0x454c79*/
        v24 = (_BYTE *)(this->q148 + 5224); /*0x454c7e*/
      }
      if ( v24 && *v24 ) /*0x454c96*/
        BuildingClass::PlayAnim( /*0x454ca5*/
          (ObjectClass *)this,
          *(int *)&stru_87C374.__pad_579C[22224],
          v24,
          (IUnknown *)0x13,
          (IUnknown *)v23,
          0,
          0);
      v25 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
        if ( *(_BYTE *)(j + this->q148 + 3983) ) /*0x454cb4*/
          BuildingClass::ClearAnims(this, v25); /*0x454cc2*/
        v25 = (TechnoClass *)((char *)v25 + 1); /*0x454cca*/
      }
      return; /*0x454cd1*/
    }
LABEL_51:
    if ( !*(_BYTE *)(v20 + 22395) ) /*0x454c57*/
      return; /*0x454c57*/
    goto LABEL_52; /*0x454c57*/
  }
}


// ==== 0x00454CE0  ObjectClass::nullsub_5  this=ObjectClass  sig=csp ====
void nullsub_5()
{
  ; /*0x454ce0*/
}


// ==== 0x00454DB0  BuildingClass::CleanupOccupation  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::CleanupOccupation(#377 *this)
{
  #377 *v1; // esi
  int result; // eax
  _DWORD *v3; // eax
  int v4; // eax
  char v5; // al
  char v6; // al
  char v7; // bl
  char *v8; // ecx
  int v9; // edi
  int v10; // ecx
  char v11; // al
  char v12; // al
  char v13; // bl
  char *v14; // ecx
  int v15; // edi
  int v16; // eax
  int *v17; // eax
  int v18; // ebp
  int v19; // ebx
  void *v20; // edi
  void *Parachute; // edx
  int v22; // esi
  void *v23; // edx
  int v24; // eax
  void *v25; // eax
  int v26; // eax
  #377 *v27; // ebx
  int *v28; // esi
  int v29; // eax
  int v30; // ebp
  int v31; // edi
  int *v32; // eax
  int v33; // ebp
  int k; // ebx
  bool v35; // zf
  _DWORD *v36; // edi
  _DWORD *m; // esi
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // eax
  int *v41; // eax
  int *v42; // eax
  int v43; // ebp
  int v44; // ebx
  _DWORD *v45; // edi
  _DWORD *i; // esi
  int v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  int j; // edi
  int v51; // esi
  _DWORD *v52; // eax
  int v53; // edx
  int v54; // eax
  char v55; // dl
  char v56; // al
  int v57; // [esp+1Ch] [ebp-54h]
  int v59; // [esp+30h] [ebp-40h]
  int v60; // [esp+34h] [ebp-3Ch] BYREF
  _BYTE *v61; // [esp+38h] [ebp-38h]
  _BYTE *v62; // [esp+3Ch] [ebp-34h]
  int v63[3]; // [esp+40h] [ebp-30h] BYREF
  int v64; // [esp+4Ch] [ebp-24h]
  _DWORD v65[2]; // [esp+54h] [ebp-1Ch] BYREF
  int v66; // [esp+5Ch] [ebp-14h] BYREF
  _BYTE v67[8]; // [esp+60h] [ebp-10h] BYREF
  int v68; // [esp+68h] [ebp-8h]
  _BYTE *v69; // [esp+74h] [ebp+4h] BYREF

  v1 = this; /*0x454db6*/
  result = this->gattlingValue; /*0x454dbb*/
  if ( result ) /*0x454dc7*/
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v67); /*0x454dd6*/
    LOWORD(v64) = *v3 / 256; /*0x454de9*/
    HIWORD(v64) = v3[1] / 256; /*0x454dfd*/
    v4 = *((_DWORD *)v1 + 136); /*0x454e02*/
    if ( v4 == 1 ) /*0x454e0b*/
    {
      v5 = *((_BYTE *)v1 + 1773); /*0x454e11*/
      if ( v5 < 15 ) /*0x454e19*/
      {
        v6 = v5 + 1; /*0x454e1f*/
        *((_BYTE *)v1 + 1773) = v6; /*0x454e23*/
        if ( v6 == 1 || v6 == 6 || v6 == 11 ) /*0x454e31*/
          *((_BYTE *)v1 + 128) = 1; /*0x454e33*/
        v7 = v6; /*0x454e3a*/
        if ( v6 == 15 && (*(int (__thiscall **)(#377 *, _DWORD, _DWORD))(*(_DWORD *)v1 + 104))(v1, 0, 0) == 5 ) /*0x454e4e*/
          v7 = 16; /*0x454e50*/
        v8 = (char *)v1 + 1372; /*0x454e55*/
        v9 = 21; /*0x454e5b*/
        do /*0x454e70*/
        {
          if ( *(_DWORD *)v8 ) /*0x454e60*/
            *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x454e66*/
          v8 += 4; /*0x454e6c*/
          --v9; /*0x454e6f*/
        }
        while ( v9 ); /*0x454e70*/
        if ( *((_BYTE *)v1 + 1773) == 15 ) /*0x454e79*/
        {
          v10 = *((_DWORD *)v1 + 195); /*0x454e7f*/
          *((_DWORD *)v1 + 136) = 2; /*0x454e85*/
          if ( v10 ) /*0x454e91*/
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 32))(v10, 1); /*0x454e9b*/
            *((_DWORD *)v1 + 195) = 0; /*0x454e9e*/
          }
        }
      }
    }
    else if ( v4 == 3 ) /*0x454eac*/
    {
      v11 = *((_BYTE *)v1 + 1773); /*0x454eb2*/
      if ( v11 >= 0 ) /*0x454eba*/
      {
        if ( v11 > 0 ) /*0x454ec0*/
          *((_BYTE *)v1 + 1773) = v11 - 1; /*0x454ec4*/
        v12 = *((_BYTE *)v1 + 1773); /*0x454eca*/
        if ( !v12 || v12 == 5 || v12 == 10 ) /*0x454eda*/
          *((_BYTE *)v1 + 128) = 1; /*0x454edc*/
        v13 = v12; /*0x454ee3*/
        if ( v12 == 15 && (*(int (__thiscall **)(#377 *, _DWORD, _DWORD))(*(_DWORD *)v1 + 104))(v1, 0, 0) == 5 ) /*0x454ef7*/
          v13 = 16; /*0x454ef9*/
        v14 = (char *)v1 + 1372; /*0x454efe*/
        v15 = 21; /*0x454f04*/
        do /*0x454f19*/
        {
          if ( *(_DWORD *)v14 ) /*0x454f09*/
            *(_BYTE *)(*(_DWORD *)v14 + 376) = v13; /*0x454f0f*/
          v14 += 4; /*0x454f15*/
          --v15; /*0x454f18*/
        }
        while ( v15 ); /*0x454f19*/
        if ( !*((_BYTE *)v1 + 1773) ) /*0x454f1b*/
        {
          v16 = *((_DWORD *)v1 + 195); /*0x454f29*/
          *((_DWORD *)v1 + 136) = 0; /*0x454f2f*/
          if ( !v16 ) /*0x454f37*/
          {
            v17 = (int *)(*((_DWORD *)v1 + 328) + 1896); /*0x454f49*/
            if ( *v17 != aP5 /*0x454f6c*/
              || *(_DWORD *)(*((_DWORD *)v1 + 328) + 1900) != unk_89C84C
              || *(_DWORD *)(*((_DWORD *)v1 + 328) + 1904) != unk_89C850 )
            {
              v18 = *v17; /*0x454f75*/
              v19 = *(_DWORD *)(*((_DWORD *)v1 + 328) + 1900); /*0x454f77*/
              v68 = *(_DWORD *)(*((_DWORD *)v1 + 328) + 1904); /*0x454f7f*/
              v20 = __2_YAPAXI_Z(0x100u); /*0x454f88*/
              if ( v20 ) /*0x454f8f*/
              {
                Parachute = (void *)this->owningHouseIndex; /*0x454fa9*/
                v63[0] = v18 + this->q027; /*0x454fac*/
                v22 = this->q029; /*0x454fb4*/
                v65[0] = this->q027; /*0x454fbb*/
                v63[1] = (int)Parachute + v19; /*0x454fbf*/
                v23 = (void *)this->owningHouseIndex; /*0x454fc3*/
                v24 = this->q029; /*0x454fc6*/
                v63[2] = v68 + v22; /*0x454fd5*/
                v65[1] = v23; /*0x454fd9*/
                v66 = v24; /*0x454fdd*/
                v25 = Coord::To_Cell(&MEMORY[0x87F7E8], v65); /*0x454fe1*/
                v26 = ParticleSystemClass::Constructor( /*0x454fff*/
                        (int)v20,
                        *(_DWORD *)(this->gattlingValue + 1892),
                        v63,
                        (int)v25,
                        0,
                        &aP5,
                        0);
                v1 = this; /*0x455004*/
              }
              else
              {
                v26 = 0; /*0x45500a*/
              }
              *((_DWORD *)v1 + 195) = v26; /*0x45500c*/
            }
          }
        }
      }
    }
    if ( *((_DWORD *)v1 + 136) == 2 && (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)v1 + 676))(v1) ) /*0x45501f*/
      (*(void (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)v1 + 1116))(v1, 0); /*0x45502f*/
    result = *((_DWORD *)v1 + 136); /*0x455035*/
    if ( !result ) /*0x45503d*/
    {
      result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)v1 + 672))(v1); /*0x455043*/
      if ( (_BYTE)result ) /*0x45504b*/
        result = (*(int (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)v1 + 1120))(v1, 0); /*0x455053*/
    }
    LOBYTE(result) = *((_BYTE *)v1 + 1771); /*0x455059*/
    if ( (_BYTE)result ) /*0x455061*/
    {
      result = *((_DWORD *)v1 + 328); /*0x455067*/
      if ( *(_BYTE *)(result + 5831) ) /*0x45506d*/
      {
        v27 = this; /*0x45507b*/
        v28 = (int *)dword_89DDC0; /*0x45507f*/
        v29 = *(_DWORD *)dword_89DDC0; /*0x45508b*/
        v60 = *(_DWORD *)(this->owner + 48); /*0x455092*/
        v30 = (*(int (__thiscall **)(int))(v29 + 124))(dword_89DDC0); /*0x455099*/
        result = v30 - (v30 >> 31); /*0x45509c*/
        v59 = v30; /*0x45509e*/
        v31 = v30 / 2; /*0x4550aa*/
        LOBYTE(result) = this->CloakRadius; /*0x4550ae*/
        if ( *((char *)this + 1771) <= 0 ) /*0x4550b4*/
        {
          if ( (_BYTE)result ) /*0x455275*/
          {
            this->CloakRadius = result - 1; /*0x45528b*/
            (*(void (__thiscall **)(int *))(*v28 + 24))(v28); /*0x455295*/
            v41 = (int *)(*(int (__thiscall **)(int *, int *, _DWORD))(*v28 + 120))(v28, &v66, 0); /*0x4552a3*/
            Draw::Ellipse(v28, v31, v31, *(char *)(this->gattlingValue + 5895), *v41, v41[1], v41[2], v41[3], 2); /*0x4552d3*/
            if ( this->CloakRadius ) /*0x4552d8*/
            {
              v42 = (int *)(*(int (__thiscall **)(int *, _BYTE *))(*v28 + 120))(v28, v67); /*0x4552ed*/
              Draw::Ellipse(v28, v31, v31, *((char *)this + 1772), *v42, v42[1], v42[2], v42[3], 1); /*0x455317*/
            }
            v62 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v28 + 92))(v28, 0, 0); /*0x45532d*/
            result = v64 - v31; /*0x455337*/
            HIWORD(v65[0]) = HIWORD(v64) - v31; /*0x455339*/
            LOWORD(v65[0]) = v64 - v31; /*0x455340*/
            v61 = 0; /*0x455345*/
            if ( v30 > 0 ) /*0x45534d*/
            {
              v43 = v60; /*0x455353*/
              while ( 2 ) /*0x455357*/
              {
                v44 = 0; /*0x455357*/
                do /*0x45544d*/
                {
                  v35 = *v62++ == 0; /*0x455360*/
                  if ( v35 ) /*0x455366*/
                  {
                    LOWORD(v63[0]) = v44 + LOWORD(v65[0]); /*0x45537d*/
                    HIWORD(v63[0]) = (_WORD)v61 + HIWORD(v65[0]); /*0x455382*/
                    v60 = v63[0]; /*0x45538f*/
                    v45 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v60); /*0x45539e*/
                    if ( Cell::HasOccupierBit(v45, v43) ) /*0x4553a3*/
                    {
                      ((void (__stdcall *)(int))BuildingClass::updateOccupiedState)(v43); /*0x4553b3*/
                      for ( i = (_DWORD *)v45[57]; i; i = (_DWORD *)i[12] ) /*0x4553c0*/
                      {
                        v47 = (*(int (__thiscall **)(_DWORD *))(*i + 44))(i); /*0x4553c6*/
                        if ( v47 == 1 || v47 == 15 || v47 == 2 ) /*0x4553d6*/
                          (*(void (__thiscall **)(_DWORD *))(*i + 1056))(i); /*0x4553dc*/
                      }
                      v48 = Cell::IsBridge(v45); /*0x4553eb*/
                      if ( v48 ) /*0x4553f2*/
                      {
                        if ( *(_DWORD *)(v48[135] + 48) == v43 ) /*0x4553fd*/
                        {
                          v49 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v48 + 72))(v48, v67); /*0x455408*/
                          if ( __PAIR32__(v49[1] / 256, *v49 / 256) == v60 && !(_BYTE)v69 ) /*0x455440*/
                          {
                            ++this->CloakRadius; /*0x4555c0*/
                            return (int)this; /*0x4555b0*/
                          }
                        }
                      }
                    }
                  }
                  ++v44; /*0x45544a*/
                }
                while ( v44 < v59 ); /*0x45544d*/
                result = (int)++v61; /*0x45545b*/
                if ( (int)v61 < v59 ) /*0x455462*/
                  continue; /*0x455462*/
                break;
              }
              v27 = this; /*0x455468*/
            }
            LOBYTE(result) = *((_BYTE *)v27 + 1772); /*0x45546c*/
            if ( !(_BYTE)result ) /*0x455474*/
            {
              result = MEMORY[0xA8EB50]; /*0x45547a*/
              for ( j = 0; j < MEMORY[0xA8EB50]; ++j ) /*0x455483*/
              {
                v51 = *((_DWORD *)MEMORY[0xA8EB44] + j); /*0x45548f*/
                if ( *(_BYTE *)(v51 + 144) ) /*0x455492*/
                {
                  if ( (#377 *)v51 != v27 ) /*0x4554a2*/
                  {
                    if ( *(_BYTE *)(*(_DWORD *)(v51 + 1312) + 5831) ) /*0x4554ae*/
                    {
                      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v51 + 848))(*((_DWORD *)MEMORY[0xA8EB44] /*0x4554c0*/
                                                                                              + j)) )
                      {
                        if ( !*(_BYTE *)(v51 + 1771) ) /*0x4554ce*/
                        {
                          v52 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v51 + 72))(v51, v67); /*0x4554e5*/
                          LOWORD(v65[0]) = *v52 / 256; /*0x4554f8*/
                          HIWORD(v65[0]) = v52[1] / 256; /*0x455510*/
                          v53 = *(char *)(*((_DWORD *)v27 + 328) + 5895) + 2; /*0x45553a*/
                          if ( (__int16)(HIWORD(v64) - HIWORD(v65[0])) * (__int16)(HIWORD(v64) - HIWORD(v65[0])) /*0x455551*/
                             + (__int16)(v64 - LOWORD(v65[0])) * (__int16)(v64 - LOWORD(v65[0])) < 4 * v53 * v53 )
                          {
                            v54 = *(_DWORD *)(v51 + 1312); /*0x455553*/
                            if ( *(_BYTE *)(v54 + 5831) ) /*0x455559*/
                            {
                              v55 = *(_BYTE *)(v51 + 1772); /*0x455563*/
                              *(_BYTE *)(v51 + 1771) = 1; /*0x455569*/
                              if ( v55 == *(_BYTE *)(v54 + 5895) ) /*0x455576*/
                                *(_BYTE *)(v51 + 1772) = 0; /*0x455578*/
                              *(_BYTE *)(v51 + 128) = 1; /*0x45557f*/
                            }
                            v56 = *(_BYTE *)(v51 + 1772); /*0x455586*/
                            if ( v56 ) /*0x45558e*/
                              *(_BYTE *)(v51 + 1772) = v56 - 1; /*0x455592*/
                          }
                        }
                      }
                    }
                  }
                }
                result = MEMORY[0xA8EB50]; /*0x455598*/
              }
            }
          }
          else
          {
            this->HasCloakingData = 0; /*0x455277*/
          }
        }
        else if ( (_BYTE)result == *(_BYTE *)(this->gattlingValue + 5895) ) /*0x4550c6*/
        {
          this->HasCloakingData = 0; /*0x4550c8*/
        }
        else
        {
          this->CloakRadius = result + 1; /*0x4550dd*/
          (*(void (__thiscall **)(int *, _DWORD))(*v28 + 24))(v28, 0); /*0x4550e7*/
          v32 = (int *)(*(int (__thiscall **)(int *, _BYTE *, int))(*v28 + 120))(v28, v67, 1); /*0x4550f5*/
          Draw::Ellipse(v28, v31, v31, *((char *)this + 1772), *v32, v32[1], v32[2], v32[3], v57); /*0x45511f*/
          v61 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(*v28 + 92))(v28, 0); /*0x455135*/
          v33 = 0; /*0x455141*/
          LOWORD(v63[0]) = v64 - v31; /*0x455143*/
          result = v59; /*0x455148*/
          for ( HIWORD(v63[0]) = HIWORD(v64) - v31; v33 < v59; ++v33 ) /*0x455153*/
          {
            for ( k = 0; k < v59; ++k ) /*0x455159*/
            {
              v35 = *v61++ == 0; /*0x455162*/
              if ( !v35 ) /*0x455168*/
              {
                HIWORD(v62) = v33 + HIWORD(v63[0]); /*0x45517b*/
                LOWORD(v62) = k + LOWORD(v63[0]); /*0x455180*/
                v69 = v62; /*0x45518d*/
                v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x4551a0*/
                if ( !Cell::HasOccupierBit(v36, v60) ) /*0x4551a5*/
                {
                  ((void (__stdcall *)(int))BuildingClass::checkOccupant)(v60); /*0x4551b9*/
                  for ( m = (_DWORD *)v36[57]; m; m = (_DWORD *)m[12] ) /*0x4551c6*/
                  {
                    v38 = (*(int (__thiscall **)(_DWORD *))(*m + 44))(m); /*0x4551cc*/
                    if ( v38 == 1 || v38 == 15 || v38 == 2 ) /*0x4551dc*/
                      (*(void (__thiscall **)(_DWORD *))(*m + 1056))(m); /*0x4551e2*/
                  }
                  v39 = Cell::IsBridge(v36); /*0x4551f1*/
                  if ( v39 ) /*0x4551f8*/
                  {
                    if ( *(_DWORD *)(v39[135] + 48) == v60 ) /*0x455207*/
                    {
                      v40 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v39 + 72))(v39, v67); /*0x455212*/
                      if ( (_BYTE *)__PAIR32__(v40[1] / 256, *v40 / 256) == v69 ) /*0x45523b*/
                      {
                        --this->CloakRadius; /*0x455263*/
                        return (int)this; /*0x455270*/
                      }
                    }
                  }
                }
              }
              result = v59; /*0x455244*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4550cf*/
}


// ==== 0x004555D0  BuildingClass::IsPoweredActive  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsPoweredActive(#377 *this)
{
  int result; // eax
  double PowerRatio; // st7
  bool v4; // c0
  char v5; // c2
  bool v6; // c3
  char v7; // fps^1
  int v8; // ebx
  int v9; // edi
  int v10; // edx

  if ( !this->HasPower && *((int *)this + 415) < 2 ) /*0x4555ea*/
    goto LABEL_20; /*0x4555ea*/
  result = this->empLockRemaining; /*0x4555f0*/
  if ( result > 0 ) /*0x4555f8*/
    goto LABEL_20; /*0x4555f8*/
  result = this->health; /*0x4555fe*/
  if ( !result ) /*0x455603*/
    goto LABEL_20; /*0x455603*/
  result = this->gattlingValue; /*0x455609*/
  if ( *(_BYTE *)(result + 5491) ) /*0x45560f*/
  {
    if ( *(int *)(result + 3812) > 0 ) /*0x455621*/
    {
      PowerRatio = HouseClass::GetPowerRatio((int *)this->owner); /*0x455629*/
      v4 = PowerRatio < 1.0; /*0x45562e*/
      v5 = 0; /*0x45562e*/
      v6 = PowerRatio == 1.0; /*0x45562e*/
      BYTE1(result) = v7; /*0x455634*/
      if ( PowerRatio < 1.0 && *((int *)this + 415) < 2 ) /*0x455641*/
        goto LABEL_20; /*0x455641*/
    }
  }
  v8 = this->gattlingValue; /*0x455643*/
  if ( *(_BYTE *)(v8 + 5492) ) /*0x455649*/
  {
    v9 = this->owner; /*0x455653*/
    v10 = *(_DWORD *)(v9 + 676); /*0x455659*/
    result = *(_DWORD *)(v9 + 684); /*0x45565f*/
    if ( v10 != -1 ) /*0x455668*/
    {
      if ( (int)MEMORY[0xA8ED84] - v10 >= result ) /*0x455674*/
      {
LABEL_14:
        if ( *(_BYTE *)(v9 + 22395) ) /*0x45567c*/
          goto LABEL_20; /*0x455684*/
        goto LABEL_15; /*0x455684*/
      }
      result -= (int)MEMORY[0xA8ED84] - v10; /*0x455676*/
    }
    if ( result ) /*0x45567a*/
      goto LABEL_20; /*0x45567a*/
    goto LABEL_14; /*0x45567a*/
  }
LABEL_15:
  if ( !*(_BYTE *)(v8 + 5458) || this->q6CC ) /*0x455690*/
  {
    result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x45569e*/
    if ( result != 18 ) /*0x4556a7*/
    {
      result = (*(int (__thiscall **)(#377 *))(this->q184)(this); /*0x4556ad*/
      if ( result != 19 ) /*0x4556b6*/
      {
        LOBYTE(result) = 1; /*0x4556ba*/
        return result; /*0x4556bd*/
      }
    }
  }
LABEL_20:
  LOBYTE(result) = 0; /*0x4556be*/
  return result; /*0x4556b8*/
}


// ==== 0x004556D0  BuildingClass::ScanCircleForUnits  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScanCircleForUnits(#377 *this)
{
  int v1; // ebp
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // edi
  int result; // eax
  int v7; // ebx
  _DWORD *v8; // esi
  _DWORD *j; // esi
  int v10; // eax
  int v11; // [esp+Ch] [ebp-24h]
  int v12; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch] BYREF
  int v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h]
  _BYTE v18[12]; // [esp+24h] [ebp-Ch] BYREF
  int v19; // [esp+34h] [ebp+4h]

  v1 = *(char *)(this->gattlingValue + 5895); /*0x4556e1*/
  v2 = *(_DWORD *)(this->owner + 48); /*0x4556ea*/
  v3 = v1 * v1; /*0x4556ed*/
  v16 = v1 * v1; /*0x4556fd*/
  v15 = v2; /*0x455701*/
  if ( v19 == dword_89C818 ) /*0x455705*/
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v18); /*0x45571c*/
    LOWORD(v11) = *v4 / 256; /*0x45572f*/
    HIWORD(v11) = v4[1] / 256; /*0x455743*/
    v19 = v11; /*0x45574c*/
  }
  v5 = -v1; /*0x455752*/
  result = -v1; /*0x455754*/
  v17 = -v1; /*0x455756*/
  for ( i = -v1; result < v1; i = result ) /*0x455760*/
  {
    if ( v5 < v1 ) /*0x455769*/
    {
      v7 = result * result; /*0x455775*/
      HIWORD(v12) = result + HIWORD(v19); /*0x45577b*/
      do /*0x4557f8*/
      {
        LOWORD(v12) = v5 + v19; /*0x455787*/
        v14 = v12; /*0x455799*/
        if ( v7 + v5 * v5 < v3 ) /*0x45579d*/
        {
          v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x4557ae*/
          FootClass::updateLocomotion(v15); /*0x4557b7*/
          for ( j = (_DWORD *)v8[57]; j; j = (_DWORD *)j[12] ) /*0x4557c4*/
          {
            v10 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x4557ca*/
            if ( v10 == 1 || v10 == 15 || v10 == 2 ) /*0x4557da*/
              (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x4557e0*/
          }
          result = i; /*0x4557ed*/
          v3 = v16; /*0x4557f1*/
        }
        ++v5; /*0x4557f5*/
      }
      while ( v5 < v1 ); /*0x4557f8*/
      v5 = v17; /*0x4557fa*/
    }
    ++result; /*0x4557fe*/
  }
  return result; /*0x45580c*/
}


// ==== 0x00455820  BuildingClass::ScanCircleForUnits2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScanCircleForUnits2(#377 *this)
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _DWORD *j; // esi
  int v9; // eax
  int v10; // [esp+Ch] [ebp-24h]
  int v11; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  int v13; // [esp+18h] [ebp-18h] BYREF
  int v14; // [esp+1Ch] [ebp-14h]
  int v15; // [esp+20h] [ebp-10h]
  _BYTE v16[12]; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+34h] [ebp+4h]

  result = (*(int (__thiscall **)(#377 *))(this->storedTiberium)(this); /*0x45582a*/
  if ( (_BYTE)result ) /*0x455832*/
  {
    v3 = *(_DWORD *)(this->gattlingValue + 1520); /*0x455844*/
    v14 = *(_DWORD *)(this->owner + 48); /*0x455862*/
    if ( v17 == dword_89C818 ) /*0x455866*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v16); /*0x45587f*/
      LOWORD(v10) = *v4 / 256; /*0x455892*/
      HIWORD(v10) = v4[1] / 256; /*0x4558a6*/
      v17 = v10; /*0x4558af*/
    }
    v5 = -v3; /*0x4558b5*/
    result = -v3; /*0x4558b7*/
    v15 = -v3; /*0x4558b9*/
    for ( i = -v3; result < v3; i = result ) /*0x4558c3*/
    {
      if ( v5 < v3 ) /*0x4558cc*/
      {
        v6 = result * result; /*0x4558d8*/
        HIWORD(v11) = result + HIWORD(v17); /*0x4558de*/
        do /*0x45595b*/
        {
          LOWORD(v11) = v5 + v17; /*0x4558ea*/
          v13 = v11; /*0x4558f8*/
          if ( v6 + v5 * v5 < v3 * v3 ) /*0x455904*/
          {
            v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x455919*/
            FootClass::checkTerrainSpeed(v14); /*0x45591e*/
            for ( j = (_DWORD *)v7[57]; j; j = (_DWORD *)j[12] ) /*0x45592b*/
            {
              v9 = (*(int (__thiscall **)(_DWORD *))(*j + 44))(j); /*0x455931*/
              if ( v9 == 1 || v9 == 15 || v9 == 2 ) /*0x455941*/
                (*(void (__thiscall **)(_DWORD *))(*j + 1056))(j); /*0x455947*/
            }
            result = i; /*0x455954*/
          }
          ++v5; /*0x455958*/
        }
        while ( v5 < v3 ); /*0x45595b*/
        v5 = v15; /*0x45595d*/
      }
      ++result; /*0x455961*/
    }
  }
  return result; /*0x45596f*/
}


// ==== 0x00455980  BuildingClass::ScanCircleForTiberium  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScanCircleForTiberium(#377 *this)
{
  int v1; // ebx
  int result; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // ebp
  int v6; // [esp+Ch] [ebp-20h]
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+14h] [ebp-18h] BYREF
  int v9; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v11[12]; // [esp+20h] [ebp-Ch] BYREF
  int v12; // [esp+30h] [ebp+4h]

  v1 = *(_DWORD *)(this->gattlingValue + 1524); /*0x455991*/
  result = *(_DWORD *)(this->owner + 48); /*0x4559a1*/
  v9 = result; /*0x4559a9*/
  if ( (_WORD)v12 == (_WORD)dword_89C818 ) /*0x4559b4*/
  {
    LOWORD(result) = HIWORD(v12); /*0x4559b6*/
    if ( HIWORD(v12) == HIWORD(dword_89C818) ) /*0x4559c2*/
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v11); /*0x4559cb*/
      LOWORD(v6) = *v3 / 256; /*0x4559de*/
      result = v3[1] / 256; /*0x4559ef*/
      HIWORD(v6) = result; /*0x4559f2*/
      v12 = v6; /*0x4559fb*/
    }
  }
  v4 = -v1; /*0x455a01*/
  v5 = -v1; /*0x455a03*/
  for ( i = -v1; v5 < v1; ++v5 ) /*0x455a0b*/
  {
    if ( v4 < v1 ) /*0x455a10*/
    {
      do /*0x455a64*/
      {
        LOWORD(v7) = v4 + v12; /*0x455a2f*/
        HIWORD(v7) = HIWORD(v12) + v5; /*0x455a1e*/
        v8 = v7; /*0x455a38*/
        result = v1 * v1; /*0x455a3c*/
        if ( v5 * v5 + v4 * v4 < v1 * v1 ) /*0x455a44*/
        {
          CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8); /*0x455a50*/
          result = BuildingClass::evaulateDefense(v9); /*0x455a5c*/
        }
        ++v4; /*0x455a61*/
      }
      while ( v4 < v1 ); /*0x455a64*/
      v4 = i; /*0x455a66*/
    }
  }
  return result; /*0x455a70*/
}


// ==== 0x00455A80  BuildingClass::UpdateTerrainEffect  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateTerrainEffect(#377 *this)
{
  int result; // eax
  int v3; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // ebp
  int v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  _BYTE v12[12]; // [esp+20h] [ebp-Ch] BYREF
  int v13; // [esp+30h] [ebp+4h]

  result = (*(int (__thiscall **)(#377 *))(this->storedTiberium)(this); /*0x455a8a*/
  if ( (_BYTE)result ) /*0x455a92*/
  {
    v3 = *(_DWORD *)(this->gattlingValue + 1524); /*0x455aa4*/
    result = *(_DWORD *)(this->owner + 48); /*0x455abf*/
    v10 = result; /*0x455ac2*/
    if ( v13 == dword_89C818 ) /*0x455ac6*/
    {
      v4 = (_DWORD *)(*(int (__thiscall **)(#377 *, _BYTE *))(this->q048)(this, v12); /*0x455adf*/
      LOWORD(v7) = *v4 / 256; /*0x455af2*/
      result = v4[1] / 256; /*0x455b03*/
      HIWORD(v7) = result; /*0x455b06*/
      v13 = v7; /*0x455b0f*/
    }
    v5 = -v3; /*0x455b15*/
    v6 = -v3; /*0x455b17*/
    for ( i = -v3; v6 < v3; ++v6 ) /*0x455b1f*/
    {
      if ( v5 < v3 ) /*0x455b24*/
      {
        do /*0x455b78*/
        {
          LOWORD(v8) = v5 + v13; /*0x455b43*/
          result = v3 * v3; /*0x455b48*/
          HIWORD(v8) = HIWORD(v13) + v6; /*0x455b32*/
          v9 = v8; /*0x455b54*/
          if ( v6 * v6 + v5 * v5 < v3 * v3 ) /*0x455b58*/
          {
            CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x455b64*/
            result = BuildingClass::processGarrison(v10); /*0x455b70*/
          }
          ++v5; /*0x455b75*/
        }
        while ( v5 < v3 ); /*0x455b78*/
        v5 = i; /*0x455b7a*/
      }
    }
  }
  return result; /*0x455b84*/
}


// ==== 0x00455B90  BuildingClass::GetFWFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetFWFlags(_DWORD *this)
{
  _DWORD *v1; // ecx
  int v2; // ebx
  _DWORD *v3; // edi
  signed int i; // esi
  _DWORD *NeighbourContent; // eax
  _DWORD *v6; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this + 39; /*0x455b93*/
  v2 = 0; /*0x455b9e*/
  v8[0] = *v1; /*0x455ba0*/
  v8[1] = v1[1]; /*0x455ba7*/
  v8[2] = v1[2]; /*0x455bb8*/
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], v8); /*0x455bc1*/
  for ( i = 0; i < 8; i += 2 ) /*0x455bc3*/
  {
    NeighbourContent = Cell::GetNeighbourContent(v3, i); /*0x455bc8*/
    v6 = Cell::IsBridge(NeighbourContent); /*0x455bcf*/
    if ( v6 && *(_BYTE *)(v6[328] + 5824) && !*((_BYTE *)v6 + 129) && *((_BYTE *)v6 + 144) ) /*0x455bf2*/
      v2 |= 1 << (i >> 1); /*0x455c07*/
  }
  return v2; /*0x455c11*/
}


// ==== 0x00455C20  ObjectClass::GetScreenCoords  this=BuildingClass  sig=csp ====
int __thiscall ObjectClass::GetScreenCoords(#377 *this)
{
  int *v2; // eax
  bool v3; // zf
  int v4; // edx
  int v5; // edi
  char *v6; // eax
  BuildingTypeClass *v7; // ecx
  BuildingTypeClass *v8; // edx
  BuildingTypeClass *v9; // esi
  BuildingTypeClass *v10; // edi
  int *v11; // eax
  BuildingTypeClass *v12; // edi
  int v13; // eax
  BuildingTypeClass **v14; // esi
  Tactical *lpVtbl; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch] BYREF
  BuildingTypeClass *v19; // [esp+1Ch] [ebp-28h]
  BuildingTypeClass *v20; // [esp+20h] [ebp-24h]
  int v21; // [esp+24h] [ebp-20h]
  int a1; // [esp+28h] [ebp-1Ch] BYREF
  int v23; // [esp+2Ch] [ebp-18h]
  int v24; // [esp+30h] [ebp-14h]
  _BYTE v25[16]; // [esp+34h] [ebp-10h] BYREF
  BuildingTypeClass **v26; // [esp+48h] [ebp+4h]

  v2 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->currentMission)(this, &v18); /*0x455c32*/
  a1 = *v2; /*0x455c3c*/
  v3 = a1 == this->BuildingClass_field_coord_64C; /*0x455c40*/
  v4 = v2[1]; /*0x455c46*/
  v23 = v4; /*0x455c49*/
  v5 = v2[2]; /*0x455c4d*/
  v24 = v5; /*0x455c56*/
  lpVtbl = *(Tactical **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x455c66*/
  v17 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180); /*0x455c6a*/
  if ( v3 /*0x455c8e*/
    && v4 == this->q194
    && v5 == this->q654
    && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176) == this->BuildingClass_field_int_658
    && *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) == this->BuildingClass_field_65C )
  {
    v6 = (char *)this + 1596; /*0x455c96*/
    v7 = (BuildingTypeClass *)this->BuildingClass_field_rect_63C; /*0x455c98*/
    v8 = (BuildingTypeClass *)this->ironCurtainTimer; /*0x455c9a*/
    v9 = (BuildingTypeClass *)this->q644; /*0x455c9d*/
    v10 = (BuildingTypeClass *)*((_DWORD *)v6 + 3); /*0x455ca0*/
  }
  else
  {
    Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], &a1, (IUnknown *)&v18); /*0x455cb2*/
    v11 = CalculateBuildingFoundationBounds(*((int **)this + 328), (BuildingTypeClass *)v25); /*0x455cc2*/
    v7 = (BuildingTypeClass *)(v18 + *v11); /*0x455cd4*/
    v8 = (BuildingTypeClass *)((char *)v19 + v11[1]); /*0x455cda*/
    v12 = (BuildingTypeClass *)v11[2]; /*0x455cdc*/
    v13 = v11[3]; /*0x455cdf*/
    this->BuildingClass_field_coord_64C = a1; /*0x455ce2*/
    v20 = v12; /*0x455cec*/
    this->q194 = v23; /*0x455cf0*/
    this->q654 = v24; /*0x455cfa*/
    this->BuildingClass_field_int_658 = lpVtbl; /*0x455d04*/
    this->BuildingClass_field_65C = v17; /*0x455d0e*/
    v14 = (BuildingTypeClass **)((char *)this + 1596); /*0x455d14*/
    v19 = v8; /*0x455d1a*/
    v21 = v13; /*0x455d1e*/
    *v14 = v7; /*0x455d22*/
    v14[1] = v8; /*0x455d24*/
    v14[2] = v12; /*0x455d27*/
    v10 = (BuildingTypeClass *)v13; /*0x455d2a*/
    v14[3] = (BuildingTypeClass *)v13; /*0x455d2c*/
    v9 = v20; /*0x455d2f*/
  }
  *v26 = v7; /*0x455d39*/
  v26[1] = v8; /*0x455d3b*/
  v26[2] = v9; /*0x455d3e*/
  v26[3] = v10; /*0x455d41*/
  return (int)v26; /*0x455d44*/
}


// ==== 0x00455D50  BuildingClass::AssignDestination_SyncLog  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::AssignDestination_SyncLog(#377 *this)
{
  int result; // eax
  IUnknown *aP1; // [esp+8h] [ebp+4h]
  int v4; // [esp+Ch] [ebp+8h]

  if ( this->q02B != 19 ) /*0x455d5a*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q284)(this) /*0x455d73*/
      || *(_BYTE *)(this->gattlingValue + 5817) )
    {
      TechnoClass::SetFocus(this, aP1); /*0x455d80*/
    }
    IPersistStream::Stub((BuildingTypeClass *)aP1, v4); /*0x455d8d*/
  }
  return result; /*0x455d93*/
}


// ==== 0x00455DA0  BuildingClass::CheckSpecialUpdateFlags  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt161(#377 *this)
{
  int result; // eax
  int v2; // ecx

  result = this->gattlingValue; /*0x455da0*/
  v2 = *(_DWORD *)(result + 3768); /*0x455da6*/
  LOBYTE(result) = v2 == 40 || v2 == 16 || *(_BYTE *)(result + 5804) || *(_BYTE *)(result + 5801); /*0x455dcd*/
  return result; /*0x455dcc*/
}


// ==== 0x00455DD0  globalHelper_055DD0  this=-  sig=csp ====
_DWORD *__fastcall sub_455DD0(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  _DWORD *v5; // esi
  double v6; // st7
  int v7; // eax
  int v9; // [esp+24h] [ebp-24h]
  int v11; // [esp+2Ch] [ebp-1Ch]
  _DWORD *v12; // [esp+30h] [ebp-18h]
  int v14; // [esp+38h] [ebp-10h]
  int v15; // [esp+3Ch] [ebp-Ch]
  int v16; // [esp+40h] [ebp-8h]
  int v17; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v3 = a2; /*0x455de7*/
  v12 = 0; /*0x455df5*/
  v9 = 0x7FFFFFFF; /*0x455df9*/
  if ( (unk_89C828 & 1) == 0 ) /*0x455e01*/
  {
    unk_89C828 |= 1u; /*0x455e11*/
    unk_89C7F0 = Math::RoundToInt(unk_89C820 * 20.0); /*0x455e1c*/
  }
  v4 = 0; /*0x455e27*/
  v14 = *(_DWORD *)(v2 + 144); /*0x455e2b*/
  v11 = 0; /*0x455e2f*/
  if ( v14 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v5 = *(_DWORD **)(*(_DWORD *)(v2 + 132) + 4 * v4); /*0x455e47*/
    if ( (*(int (__thiscall **)(_DWORD *, int, _DWORD *))(*v3 + 632))(v3, 15, v5) ) /*0x455e4f*/
    {
      v15 = v5[39] - v3[39]; /*0x455e7f*/
      v16 = v5[40] - v3[40]; /*0x455e88*/
      v17 = v5[41] - v3[41]; /*0x455e92*/
      v6 = Math::Sqrt((double)v15 * (double)v15 + (double)v17 * (double)v17 + (double)v16 * (double)v16); /*0x455eb7*/
      v7 = Math::RoundToInt(v6); /*0x455ebf*/
      if ( v7 < v9 && v7 < unk_89C7F0 ) /*0x455ed0*/
      {
        v12 = v5; /*0x455ed2*/
        v9 = v7; /*0x455ed6*/
      }
      v3 = a2; /*0x455eda*/
    }
    v4 = ++v11; /*0x455ee6*/
    if ( v11 >= v14 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v12; /*0x455ef7*/
}


// ==== 0x00455F10  ObjectClass::MarkBuildingFoundationCells  this=IUnknown  sig=csp ====
char __thiscall MarkBuildingFoundationCells(int *this, int a2)
{
  int v2; // esi
  int FoundationWidthBuildingTypeClass; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  __int16 v10; // cx
  int v11; // ebx
  int v12; // esi
  int v13; // esi
  _DWORD *v14; // eax
  int *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  _DWORD *v26; // esi
  int v27; // ecx
  int v28; // ecx
  _DWORD *v29; // esi
  int v30; // ecx
  int v31; // edx
  int v33; // [esp-4h] [ebp-38h]
  int v34; // [esp+10h] [ebp-24h]
  int v35; // [esp+14h] [ebp-20h]
  __int16 v36[2]; // [esp+18h] [ebp-1Ch] BYREF
  int v37; // [esp+1Ch] [ebp-18h]
  int v38; // [esp+20h] [ebp-14h]
  int v39; // [esp+24h] [ebp-10h]
  int v40; // [esp+28h] [ebp-Ch]
  int v41; // [esp+30h] [ebp-4h]

  v2 = *(_DWORD *)&MEMORY[0x8871E0][1].FreeMCV; /*0x455f1b*/
  FoundationWidthBuildingTypeClass = BuildingTypeClass::GetFoundationWidth((_DWORD *)this->q520); /*0x455f2d*/
  v5 = this->q520; /*0x455f32*/
  v38 = 2 * v2 + FoundationWidthBuildingTypeClass; /*0x455f3c*/
  v35 = 2 * v2 + BuildingTypeClass::GetFoundationHeight(v5, 0); /*0x455f53*/
  v6 = this->q09C; /*0x455f5f*/
  v7 = 1 << *(_DWORD *)(this->q21C + 48); /*0x455f61*/
  v8 = this->q028; /*0x455f63*/
  v41 = this->q0A4; /*0x455f69*/
  LOWORD(v40) = v6 / 256; /*0x455f79*/
  v9 = (__int16)(v40 - v2); /*0x455f9b*/
  v10 = v8 / 256 - v2; /*0x455fa2*/
  v11 = v9; /*0x455fa4*/
  HIWORD(v40) = v10; /*0x455fa6*/
  v12 = v9 + v38; /*0x455fab*/
  v39 = v9; /*0x455fae*/
  v37 = v9 + v38; /*0x455fb4*/
  if ( v9 < v9 + v38 ) /*0x455fb8*/
  {
    v34 = v35 + v10; /*0x455fc3*/
    do /*0x456013*/
    {
      v13 = v10; /*0x455fcb*/
      if ( v10 < v34 ) /*0x455fd0*/
      {
        do /*0x456001*/
        {
          v36[0] = v11; /*0x455fd6*/
          v36[1] = v13; /*0x455fe1*/
          v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v36); /*0x455fe6*/
          ++v13; /*0x455ff8*/
          v14[55] |= v7; /*0x455ff9*/
        }
        while ( v13 < v34 ); /*0x456001*/
        v9 = v39; /*0x456003*/
        v10 = HIWORD(v40); /*0x456007*/
      }
      ++v11; /*0x456010*/
    }
    while ( v11 < v37 ); /*0x456013*/
    v12 = v37; /*0x456015*/
  }
  v15 = (int *)(this->q21C + 22356); /*0x45601d*/
  if ( !*v15 ) /*0x456022*/
    *v15 = v9; /*0x456027*/
  if ( !v15[1] ) /*0x456029*/
    v15[1] = v10; /*0x456033*/
  if ( v9 < *v15 ) /*0x45603a*/
  {
    v16 = v15[2]; /*0x45603c*/
    v17 = *v15 - v9; /*0x45603f*/
    *v15 = v9; /*0x456043*/
    v15[2] = v17 + v16; /*0x456045*/
  }
  if ( v12 > v15[2] + *v15 ) /*0x456051*/
    v15[2] = v38 + v9 - *v15; /*0x45605d*/
  v18 = v15[1]; /*0x456060*/
  if ( v10 < v18 ) /*0x456068*/
  {
    v19 = v15[3]; /*0x45606a*/
    v15[1] = v10; /*0x456071*/
    v15[3] = v18 - v10 + v19; /*0x456074*/
  }
  if ( v10 + v35 > v15[1] + v15[3] ) /*0x45608f*/
    v15[3] = v35 + v10 - v15[1]; /*0x45609e*/
  LOBYTE(v20) = a2; /*0x4560a1*/
  if ( !(_BYTE)a2 ) /*0x4560a7*/
  {
    v21 = v9 - 1; /*0x4560ad*/
    v22 = v12 + 2; /*0x4560ae*/
    v37 = v21; /*0x4560b3*/
    v39 = v22; /*0x4560b7*/
    if ( v21 < v22 ) /*0x4560bb*/
    {
      LOBYTE(v20) = v10 + v35; /*0x4560c1*/
      v40 = v10 - 1; /*0x4560c6*/
      v23 = v10 + v35 + 2; /*0x4560ca*/
      do /*0x4561dc*/
      {
        v24 = v40; /*0x4560cd*/
        if ( v40 < v23 ) /*0x4560d3*/
        {
          LOWORD(v38) = v21; /*0x4560d9*/
          do /*0x4561c7*/
          {
            v25 = this->q21C; /*0x4560de*/
            HIWORD(v38) = v24; /*0x4560e4*/
            a2 = v38; /*0x4560ed*/
            v33 = *(_DWORD *)(v25 + 48); /*0x4560f8*/
            CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x4560ff*/
            v20 = sub_486D90(v33); /*0x456106*/
            if ( v20 == 255 ) /*0x456110*/
            {
              v26 = (_DWORD *)(this->q21C + 22304); /*0x45611c*/
              v20 = (*(int (__thiscall **)(_DWORD *, int *))(*v26 + 16))(v26, &a2); /*0x456127*/
              if ( v20 != -1 ) /*0x45612d*/
              {
                v27 = v26[4]; /*0x456133*/
                if ( v20 < v27 ) /*0x456138*/
                {
                  v28 = v27 - 1; /*0x45613e*/
                  for ( v26[4] = v28; v20 < v26[4]; *(_DWORD *)(v26[1] + 4 * v20 - 4) = *(_DWORD *)(v26[1] + 4 * v20) ) /*0x456144*/
                    ++v20; /*0x456149*/
                }
              }
            }
            else if ( v20 > 0 ) /*0x45615c*/
            {
              v20 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this->q21C + 22304) + 16))( /*0x456171*/
                      this->q21C + 22304,
                      &a2);
              if ( v20 == -1 ) /*0x456177*/
              {
                v29 = (_DWORD *)(this->q21C + 22304); /*0x45617f*/
                v20 = *(_DWORD *)(this->q21C + 22312); /*0x456185*/
                if ( *(_DWORD *)(this->q21C + 22320) < v20 /*0x4561af*/
                  || (*(_BYTE *)(this->q21C + 22317) || !v20)
                  && (v30 = *(_DWORD *)(this->q21C + 22324), v30 > 0)
                  && (LOBYTE(v20) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v29 + 8))(v29, v20 + v30, 0),
                      (_BYTE)v20) )
                {
                  v20 = v29[4]; /*0x4561b1*/
                  v31 = v29[1]; /*0x4561b4*/
                  v29[4] = v20 + 1; /*0x4561ba*/
                  *(_DWORD *)(v31 + 4 * v20) = a2; /*0x4561c1*/
                }
              }
            }
            ++v24; /*0x4561c4*/
          }
          while ( v24 < v23 ); /*0x4561c7*/
          v21 = v37; /*0x4561cd*/
          v22 = v39; /*0x4561d1*/
        }
        v37 = ++v21; /*0x4561d8*/
      }
      while ( v21 < v22 ); /*0x4561dc*/
    }
  }
  return v20; /*0x4561e2*/
}


// ==== 0x004561F0  ObjectClass::RecalculateBuildingFoundation  this=BuildingClass  sig=csp ====
int __thiscall RecalculateBuildingFoundation(_DWORD **this)
{
  int v1; // edi
  _DWORD *v2; // esi
  int v3; // ebp
  int FoundationHeightBuildingTypeClass; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  __int16 v10; // cx
  int v11; // esi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // ebp
  int v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // ebp
  int result; // eax
  int v22; // edx
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // esi
  int v28; // ecx
  int v29; // ecx
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  _DWORD *v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  _DWORD *v37; // eax
  int v38; // edx
  int v39; // [esp-4h] [ebp-44h]
  int v41; // [esp+14h] [ebp-2Ch] BYREF
  int v42; // [esp+18h] [ebp-28h] BYREF
  int v43; // [esp+1Ch] [ebp-24h] BYREF
  int v44; // [esp+20h] [ebp-20h]
  __int16 v45; // [esp+26h] [ebp-1Ah]
  int v46; // [esp+28h] [ebp-18h]
  int v47; // [esp+2Ch] [ebp-14h]
  int v48; // [esp+30h] [ebp-10h]
  int v49; // [esp+34h] [ebp-Ch]
  int v50; // [esp+3Ch] [ebp-4h]

  v1 = *(_DWORD *)&MEMORY[0x8871E0][1].FreeMCV; /*0x4561fc*/
  v2 = this; /*0x456202*/
  v3 = 2 * v1 + BuildingTypeClass::GetFoundationWidth(this->gattlingValue); /*0x456220*/
  FoundationHeightBuildingTypeClass = BuildingTypeClass::GetFoundationHeight(v2[328], 0); /*0x456222*/
  v5 = v2[135]; /*0x456227*/
  v41 = 2 * v1 + FoundationHeightBuildingTypeClass; /*0x45622f*/
  v47 = 1 << *(_DWORD *)(v5 + 48); /*0x456243*/
  v6 = v2[39]; /*0x456247*/
  v7 = v2[40]; /*0x456249*/
  v50 = v2[41]; /*0x45624f*/
  LOWORD(v49) = v6 / 256; /*0x45625f*/
  HIWORD(v49) = v7 / 256; /*0x456272*/
  v8 = (__int16)(v49 - v1); /*0x456281*/
  v9 = v8; /*0x456284*/
  v10 = HIWORD(v49) - v1; /*0x456286*/
  v45 = HIWORD(v49) - v1; /*0x45628b*/
  v44 = v8; /*0x456292*/
  v46 = v8 + v3; /*0x456296*/
  if ( v8 < v8 + v3 ) /*0x45629a*/
  {
    v43 = v41 + v10; /*0x4562a5*/
    do /*0x456303*/
    {
      v11 = v10; /*0x4562ad*/
      if ( v10 < v43 ) /*0x4562b2*/
      {
        v48 = ~v47; /*0x4562ba*/
        do /*0x4562f1*/
        {
          LOWORD(v42) = v9; /*0x4562c8*/
          HIWORD(v42) = v11; /*0x4562cd*/
          v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x4562d2*/
          ++v11; /*0x4562e8*/
          v12[55] &= v48; /*0x4562e9*/
        }
        while ( v11 < v43 ); /*0x4562f1*/
        v8 = v44; /*0x4562f3*/
        v10 = v45; /*0x4562f7*/
      }
      ++v9; /*0x456300*/
    }
    while ( v9 < v46 ); /*0x456303*/
    v2 = this; /*0x456305*/
  }
  v48 = 2 * v1; /*0x45630e*/
  v13 = v8 - v1; /*0x456314*/
  v49 = v8 + 2 * v1 + v3; /*0x45631a*/
  if ( v8 - v1 < v49 ) /*0x45631e*/
  {
    v42 = v10 - v1; /*0x456335*/
    v14 = v48 + v10 + v41; /*0x456339*/
    do /*0x4563ba*/
    {
      v15 = v42; /*0x45633c*/
      if ( v42 < v14 ) /*0x456342*/
      {
        do /*0x4563a4*/
        {
          LOWORD(v43) = v13; /*0x45634e*/
          HIWORD(v43) = v15; /*0x456353*/
          v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x456358*/
          v17 = Cell::IsBridge(v16); /*0x45635f*/
          v18 = v17; /*0x456364*/
          if ( v17 ) /*0x456368*/
          {
            if ( v17 != this ) /*0x45636e*/
            {
              v19 = v17[328]; /*0x456370*/
              if ( (!*(_DWORD *)(v19 + 1032) || !*(_BYTE *)(v19 + 1516)) /*0x45638e*/
                && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v18 + 128))(v18) )
              {
                MarkBuildingFoundationCells(1); /*0x45639c*/
              }
            }
          }
          ++v15; /*0x4563a1*/
        }
        while ( v15 < v14 ); /*0x4563a4*/
        v8 = v44; /*0x4563a6*/
        v10 = v45; /*0x4563aa*/
        v2 = this; /*0x4563af*/
      }
      ++v13; /*0x4563b7*/
    }
    while ( v13 < v49 ); /*0x4563ba*/
  }
  v20 = v8 - 1; /*0x4563bc*/
  result = v46; /*0x4563bf*/
  v22 = v46 + 2; /*0x4563c3*/
  v48 = v46 + 2; /*0x4563c8*/
  if ( v20 >= v46 + 2 ) /*0x4563cc*/
    return result; /*0x4563cc*/
  result = v10; /*0x4563d2*/
  v49 = v10 - 1; /*0x4563d8*/
  v23 = v10 + v41 + 2; /*0x4563e0*/
  do /*0x45656a*/
  {
    v24 = v49; /*0x4563e4*/
    if ( v49 >= v23 ) /*0x4563ea*/
      goto LABEL_47; /*0x4563ea*/
    LOWORD(v46) = v20; /*0x4563f0*/
    do /*0x45655d*/
    {
      v25 = v2[135]; /*0x4563f5*/
      HIWORD(v46) = v24; /*0x4563fb*/
      v41 = v46; /*0x456404*/
      v39 = *(_DWORD *)(v25 + 48); /*0x45640f*/
      CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v41); /*0x456416*/
      v26 = sub_486D90(v39); /*0x45641d*/
      if ( v26 == 255 ) /*0x456427*/
      {
        v27 = (_DWORD *)(v2[135] + 22304); /*0x456433*/
        result = (*(int (__thiscall **)(_DWORD *, int *))(*v27 + 16))(v27, &v41); /*0x45643e*/
        if ( result != -1 ) /*0x456444*/
        {
          v28 = v27[4]; /*0x45644a*/
          if ( result < v28 ) /*0x45644f*/
          {
            v29 = v28 - 1; /*0x456455*/
            for ( v27[4] = v29; result < v27[4]; *(_DWORD *)(v27[1] + 4 * result - 4) = *(_DWORD *)(v27[1] + 4 * result) ) /*0x45645b*/
              ++result; /*0x456464*/
          }
        }
      }
      else if ( v26 <= 0 ) /*0x45647a*/
      {
        v33 = (_DWORD *)(v2[135] + 22304); /*0x4564fe*/
        v34 = (*(int (__thiscall **)(_DWORD *, int *))(*v33 + 16))(v33, &v41); /*0x456509*/
        if ( v34 != -1 ) /*0x45650f*/
        {
          v35 = v33[4]; /*0x456511*/
          if ( v34 < v35 ) /*0x456516*/
          {
            v36 = v35 - 1; /*0x456518*/
            for ( v33[4] = v36; v34 < v33[4]; *(_DWORD *)(v33[1] + 4 * v34 - 4) = *(_DWORD *)(v33[1] + 4 * v34) ) /*0x45651e*/
              ++v34; /*0x456523*/
          }
        }
        v37 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v41); /*0x45653c*/
        v38 = v37[55]; /*0x456545*/
        result = (int)(v37 + 55); /*0x45654b*/
        *(_DWORD *)result = ~v47 & v38; /*0x456554*/
      }
      else
      {
        result = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(v2[135] + 22304) + 16))(v2[135] + 22304, &v41); /*0x456493*/
        if ( result != -1 ) /*0x456499*/
          goto LABEL_45; /*0x456499*/
        v30 = v2[135] + 22304; /*0x4564a5*/
        result = *(_DWORD *)(v30 + 8); /*0x4564ab*/
        if ( *(_DWORD *)(v30 + 16) < result /*0x4564dd*/
          || (*(_BYTE *)(v30 + 13) || !result)
          && (v31 = *(_DWORD *)(v30 + 20), v31 > 0)
          && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 8))(v30, result + v31, 0),
              (_BYTE)result) )
        {
          result = *(_DWORD *)(v30 + 16); /*0x4564df*/
          v32 = *(_DWORD *)(v30 + 4); /*0x4564e2*/
          *(_DWORD *)(v30 + 16) = result + 1; /*0x4564e8*/
          *(_DWORD *)(v32 + 4 * result) = v41; /*0x4564ef*/
        }
      }
      v2 = this; /*0x456556*/
LABEL_45:
      ++v24; /*0x45655a*/
    }
    while ( v24 < v23 ); /*0x45655d*/
    v22 = v48; /*0x456563*/
LABEL_47:
    ++v20; /*0x456567*/
  }
  while ( v20 < v22 ); /*0x45656a*/
  return result; /*0x456570*/
}


// ==== 0x00456580  BuildingClass::UpdateRevealField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt293(#377 *this)
{
  char *Field; // ebx
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], this->gattlingValue); /*0x456596*/
  v3 = 0; /*0x456598*/
  result = *((_DWORD *)Field + 4); /*0x45659a*/
  if ( result > 0 ) /*0x45659f*/
  {
    do /*0x4565d0*/
    {
      BuildingClass::ProcessFogCellOccupancy( /*0x4565c5*/
        (int)&MEMORY[0x87F7E8],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->inOpenToppedTransport,
        this->isSelected + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x4565ca*/
      ++v3; /*0x4565cd*/
    }
    while ( v3 < result ); /*0x4565d0*/
  }
  this->isRadarTracked = 1; /*0x4565d2*/
  return result; /*0x4565d9*/
}


// ==== 0x004565E0  BuildingClass::UpdateGapGeneratorField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt294(#377 *this)
{
  char *Field; // ebp
  int v3; // edi
  int result; // eax

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], this->gattlingValue); /*0x4565f6*/
  v3 = 0; /*0x4565f8*/
  result = *((_DWORD *)Field + 4); /*0x4565fa*/
  if ( result > 0 ) /*0x4565ff*/
  {
    do /*0x456630*/
    {
      BuildingClass::RemoveGapCellCoverage( /*0x456625*/
        (int)&MEMORY[0x87F7E8],
        (int)this,
        *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3) + this->inOpenToppedTransport,
        this->isSelected + *(_DWORD *)(*((_DWORD *)Field + 1) + 8 * v3 + 4));
      result = *((_DWORD *)Field + 4); /*0x45662a*/
      ++v3; /*0x45662d*/
    }
    while ( v3 < result ); /*0x456630*/
  }
  this->isRadarTracked = 0; /*0x456632*/
  return result; /*0x456639*/
}


// ==== 0x00456640  BuildingClass::UpdateDetectionField  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt295(#377 *this)
{
  char *Field; // ebx
  int v3; // esi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD v9[2]; // [esp+Ch] [ebp-8h] BYREF

  Field = Diplomacy::GetField((char *)&MEMORY[0x87F7E8], this->gattlingValue); /*0x456659*/
  v3 = 0; /*0x45665b*/
  result = *((_DWORD *)Field + 4); /*0x45665d*/
  if ( result > 0 ) /*0x456662*/
  {
    do /*0x45669d*/
    {
      v5 = *((_DWORD *)Field + 1); /*0x456664*/
      v6 = *(_DWORD *)(v5 + 8 * v3) + this->inOpenToppedTransport; /*0x456673*/
      v7 = this->isSelected; /*0x456675*/
      v8 = *(_DWORD *)(v5 + 8 * v3 + 4); /*0x45667b*/
      v9[0] = v6; /*0x45667e*/
      v9[1] = v7 + v8; /*0x456688*/
      FogOfWar::RevealCell((int)&MEMORY[0x87F7E8], v9); /*0x456692*/
      result = *((_DWORD *)Field + 4); /*0x456697*/
      ++v3; /*0x45669a*/
    }
    while ( v3 < result ); /*0x45669d*/
  }
  return result; /*0x45669f*/
}


// ==== 0x004566B0  BuildingClass::GetPowerFrame  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::GetPowerFrame(int this)
{
  int v2; // ecx
  int result; // eax
  int updated; // edi
  int v6; // eax

  v2 = *(_DWORD *)(this + 1312); /*0x4566b7*/
  result = *(_DWORD *)(v2 + 5900); /*0x4566bd*/
  if ( result <= 0 ) /*0x4566c5*/
  {
    if ( *(_BYTE *)(v2 + 3281) ) /*0x4566cb*/
    {
      if ( *(_BYTE *)(this + 616) ) /*0x4566d5*/
        return *(char *)(v2 + 3283); /*0x4566df*/
      else
        return *(char *)(v2 + 3282); /*0x4566ec*/
    }
    else if ( *(_BYTE *)(v2 + 5832) || *(_BYTE *)(v2 + 5831) ) /*0x456703*/
    {
      return *(char *)(v2 + 5895); /*0x45673e*/
    }
    else
    {
      updated = TechnoClass::UpdatePowered((#377 *)this); /*0x456714*/
      if ( (unsigned __int8)IsNonNullPtr(updated) && (v6 = *(_DWORD *)(*(_DWORD *)updated + 180), v6 > 0) ) /*0x45672c*/
        return v6 / 256; /*0x456739*/
      else
        return 0; /*0x456749*/
    }
  }
  return result; /*0x4566e5*/
}


// ==== 0x00456750  BuildingClass::DrawDeployCircle  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::DrawDeployCircle(#377 *this)
{
  int result; // eax
  int v3; // ecx
  DWORD Time; // eax
  char v5; // ecx^3
  int v6; // edi
  int *v7; // eax
  double v8; // st7
  int v9; // ecx
  int *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+0h] [ebp-2Ch]
  int v15; // [esp+0h] [ebp-2Ch]
  float v16; // [esp+4h] [ebp-28h]
  float v17; // [esp+4h] [ebp-28h]
  float v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+18h] [ebp-14h]
  int v20[3]; // [esp+20h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp+4h] BYREF

  result = BuildingClass::GetPowerFrame((int)this); /*0x456757*/
  v19 = result; /*0x45675e*/
  if ( result > 0 ) /*0x456762*/
  {
    LOBYTE(result) = this->HasPower; /*0x456768*/
    if ( (_BYTE)result ) /*0x456770*/
    {
      result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x45677c*/
      if ( (_BYTE)result ) /*0x456783*/
      {
        if ( *(_BYTE *)(this->gattlingValue + 5896) ) /*0x45678f*/
        {
          if ( (unk_89C838 & 1) == 0 ) /*0x4567a4*/
          {
            unk_89C800 = -1; /*0x4567b0*/
            unk_89C838 |= 1u; /*0x4567b7*/
            unk_89C801 = -1; /*0x4567bd*/
            unk_89C802 = -1; /*0x4567c4*/
            atexit(nullsub_103); /*0x4567cb*/
          }
          v3 = this->owner + 22265; /*0x4567d9*/
          LOWORD(v21) = *(_WORD *)v3; /*0x4567e2*/
          BYTE2(v21) = *(_BYTE *)(v3 + 2); /*0x4567ea*/
          Time = timeGetTime(); /*0x4567ee*/
          v6 = (Time >> 1) & 0x3FF; /*0x4567f8*/
          if ( ((Time >> 1) & 0x200) == 0 ) /*0x456804*/
          {
            if ( ((Time >> 1) & 0x100) == 0 ) /*0x45680c*/
              Color::Lerp((unsigned __int8 *)&v21, ~(Time >> 1), (unsigned __int8 *)&unk_89C800); /*0x456822*/
            v16 = (float)v19; /*0x456835*/
            HIBYTE(v13) = v5; /*0x456838*/
            LOWORD(v13) = v21; /*0x45683f*/
            BYTE2(v13) = BYTE2(v21); /*0x456847*/
            v7 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, v20); /*0x45684e*/
            DrawTechnoDeployCircle(0, 0, *v7, v7[1], v7[2], v13, v16, 0, 1); /*0x45686a*/
          }
          v8 = Math::Sqrt(2.0); /*0x456884*/
          result = (v6 * (unsigned int)Math::RoundToInt(((double)v19 + 0.5) / v8 * 60.0)) >> 10; /*0x45689e*/
          if ( (unsigned int)result > 0x20 ) /*0x4568a4*/
          {
            v9 = this->owner; /*0x4568bf*/
            v17 = (float)(unsigned int)result; /*0x4568cb*/
            v14 = v9 + 22265; /*0x4568ce*/
            LOWORD(v14) = *(_WORD *)(v9 + 22265); /*0x4568d7*/
            BYTE2(v14) = *(_BYTE *)(v9 + 22267); /*0x4568df*/
            v10 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, v20); /*0x4568e6*/
            LOBYTE(result) = DrawTechnoDeployCircle(0, 0, *v10, v10[1], v10[2], v14, v17, 1, 1); /*0x456902*/
          }
        }
        else
        {
          v11 = this->owner; /*0x456918*/
          v18 = (float)v19; /*0x456924*/
          v15 = v11 + 22265; /*0x456927*/
          LOWORD(v15) = *(_WORD *)(v11 + 22265); /*0x456930*/
          BYTE2(v15) = *(_BYTE *)(v11 + 22267); /*0x456938*/
          v12 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->q048)(this, v20); /*0x45693f*/
          LOBYTE(result) = DrawTechnoDeployCircle(v21, 1, *v12, v12[1], v12[2], v15, v18, 0, 1); /*0x45695d*/
        }
      }
    }
  }
  return result; /*0x456907*/
}


// ==== 0x00456970  nullsub_103  this=-  sig=ida-proto ====
void __cdecl nullsub_103()
{
  ; /*0x456970*/
}


// ==== 0x00456980  DrawTechnoDeployCircle  this=-  sig=csp ====
char __fastcall DrawTechnoDeployCircle(
        IUnknown *aP0,
        IUnknown *aP1,
        int a1,
        int a4,
        int a5,
        int a6,
        float a7,
        char a8,
        char a9)
{
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  double v15; // st7
  double *v16; // ebx
  double v17; // st7
  double v18; // st7
  int v19; // eax
  IUnknown *v20; // ecx
  Tactical *v21; // edx
  char *v22; // esi
  Tactical *v23; // eax
  double v24; // st7
  double v25; // st7
  int v26; // esi
  int v27; // eax
  Tactical *v28; // edi
  double v29; // st7
  float aP0_4; // [esp+5Ch] [ebp-8Ch]
  char v32; // [esp+6Eh] [ebp-7Ah]
  char v33; // [esp+6Fh] [ebp-79h]
  unsigned __int8 a2[4]; // [esp+70h] [ebp-78h] BYREF
  int v35; // [esp+74h] [ebp-74h]
  double v36; // [esp+78h] [ebp-70h]
  unsigned __int8 v37[8]; // [esp+80h] [ebp-68h] BYREF
  Tactical *v38; // [esp+88h] [ebp-60h] BYREF
  IUnknown *v39; // [esp+8Ch] [ebp-5Ch]
  double v40; // [esp+90h] [ebp-58h]
  double v41; // [esp+98h] [ebp-50h]
  double v42; // [esp+A0h] [ebp-48h]
  double v43; // [esp+A8h] [ebp-40h]
  double v44; // [esp+B0h] [ebp-38h]
  _DWORD v45[4]; // [esp+B8h] [ebp-30h] BYREF
  double v46; // [esp+C8h] [ebp-20h] BYREF
  _DWORD v47[4]; // [esp+D8h] [ebp-10h] BYREF

  v9 = a7; /*0x45698d*/
  v32 = (char)aP1; /*0x456994*/
  v33 = (char)aP0; /*0x456998*/
  if ( a9 ) /*0x45699c*/
    v9 = (double)(int)Math::RoundToInt(v9); /*0x4569a7*/
  if ( a8 ) /*0x4569b0*/
  {
    v10 = Math::RoundToInt(v9); /*0x4569b2*/
  }
  else
  {
    v46 = v9 + 0.5; /*0x4569c6*/
    v11 = Math::Sqrt(0); /*0x4569ca*/
    v10 = Math::RoundToInt(v46 / v11 * 60.0); /*0x4569dc*/
  }
  v12 = v10; /*0x4569e1*/
  v35 = v10; /*0x4569f2*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &a1, (IUnknown *)&v38); /*0x4569f6*/
  v38 = (Tactical *)((char *)v38 + *(_DWORD *)&stru_87C374.__pad_579C[21648]); /*0x456a11*/
  v39 = (IUnknown *)((char *)v39 + *(_DWORD *)&stru_87C374.__pad_579C[21652]); /*0x456a20*/
  v47[1] = (char *)v39 - v12 / 2; /*0x456a2f*/
  LODWORD(v36) = v12 / 2; /*0x456a48*/
  v47[0] = (char *)v38 - v12; /*0x456a4c*/
  v47[2] = 2 * v12; /*0x456a53*/
  v47[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection( /*0x456a66*/
                    (IUnknown *)v45,
                    (IUnknown *)v47,
                    (IUnknown *)&stru_87C374.__pad_579C[21648],
                    0,
                    0);
  v46 = *v13; /*0x456a6a*/
  v14 = *((_DWORD *)v13 + 2); /*0x456a75*/
  if ( v14 > 0 && *((int *)v13 + 3) > 0 ) /*0x456a85*/
  {
    v37[2] = BYTE2(a6); /*0x456a92*/
    a2[0] = 0; /*0x456a9c*/
    a2[1] = 0; /*0x456aa1*/
    a2[2] = 0; /*0x456aa6*/
    *(_WORD *)v37 = a6; /*0x456aab*/
    if ( v32 ) /*0x456ab0*/
      Color::Lerp(v37, (ObjectClass *)0x32, a2); /*0x456abd*/
    (*(void (__thiscall **)(_DWORD, Tactical *, IUnknown *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 32))( /*0x456b57*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      v38,
      v39,
      v12,
      v12 / 2,
      *(_DWORD *)&stru_87C374.__pad_579C[21648],
      *(_DWORD *)&stru_87C374.__pad_579C[21652],
      *(_DWORD *)&stru_87C374.__pad_579C[21656],
      *(_DWORD *)&stru_87C374.__pad_579C[21660],
      (v37[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
    | (v37[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
    | (v37[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
    (*(void (__thiscall **)(_DWORD, Tactical *, IUnknown *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 32))( /*0x456beb*/
      *(_DWORD *)&stru_87C374.__pad_579C[22532],
      v38,
      v39,
      v12 - 1,
      v12 / 2 - 1,
      *(_DWORD *)&stru_87C374.__pad_579C[21648],
      *(_DWORD *)&stru_87C374.__pad_579C[21652],
      *(_DWORD *)&stru_87C374.__pad_579C[21656],
      *(_DWORD *)&stru_87C374.__pad_579C[21660],
      (v37[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
    | (v37[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
    | (v37[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]));
    LOBYTE(v14) = v33; /*0x456bee*/
    if ( v33 ) /*0x456bf4*/
    {
      v15 = (double)v35; /*0x456bfa*/
      v35 = 0; /*0x456bfe*/
      v16 = (double *)dword_818CC8; /*0x456c06*/
      v41 = v15; /*0x456c0b*/
      v40 = (double)SLODWORD(v36); /*0x456c13*/
      do /*0x456c23*/
      {
        LODWORD(v36) = v35 + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x456c23*/
        v17 = (double)(v35 + *(_DWORD *)&HouseClass_Player.__pad_5568[23248]) * 0.005; /*0x456c2b*/
        v36 = v17 - (double)(int)Math::RoundToInt(v17) * 6.283185307179586; /*0x456c4e*/
        if ( fabs(v36 - 1.570796326794897) >= 0.001 ) /*0x456c6b*/
        {
          if ( fabs(v36 - 4.71238898038469) >= 0.001 ) /*0x456ca1*/
          {
            v24 = Math::Sin(v36); /*0x456cb3*/
            v43 = v40 * v40; /*0x456cc0*/
            v42 = v41 * v41; /*0x456ccc*/
            v44 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(1.0 / (v24 * v24 / v43 + 1.0 / v42))); /*0x456cf4*/
            v25 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((1.0 - v44 * v44 / v42) * v43)); /*0x456d0f*/
            if ( v36 < 3.141592653589793 ) /*0x456d54*/
              v25 = -v25; /*0x456d5a*/
            v26 = Math::RoundToInt(v25); /*0x456d61*/
            v27 = Math::RoundToInt(v25); /*0x456d63*/
            v21 = v38; /*0x456d68*/
            v20 = v39; /*0x456d6c*/
            v28 = (Tactical *)((char *)v38 + v26); /*0x456d70*/
            v22 = (char *)v39 + v27; /*0x456d73*/
            v23 = v28; /*0x456d76*/
            goto LABEL_20; /*0x456d76*/
          }
          v18 = v40; /*0x456ca3*/
        }
        else
        {
          v18 = -v40; /*0x456c71*/
        }
        v19 = Math::RoundToInt(v18); /*0x456c73*/
        v20 = v39; /*0x456c78*/
        v21 = v38; /*0x456c7c*/
        v22 = (char *)v39 + v19; /*0x456c80*/
        v23 = v38; /*0x456c83*/
LABEL_20:
        v29 = *v16; /*0x456d78*/
        v45[0] = (char *)v23 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x456d88*/
        HIDWORD(v46) = (char *)v20 - *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x456d91*/
        LODWORD(v46) = (char *)v21 - *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x456da3*/
        aP0_4 = v29; /*0x456da7*/
        v45[1] = &v22[-*(_DWORD *)&stru_87C374.__pad_579C[21652]]; /*0x456dc9*/
        LOBYTE(v14) = (*(int (__thiscall **)(_DWORD, char *, double *, _DWORD *, int *, int, int, _DWORD, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 60))( /*0x456dd8*/
                        *(_DWORD *)&stru_87C374.__pad_579C[22532],
                        &stru_87C374.__pad_579C[21648],
                        &v46,
                        v45,
                        &a6,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        LODWORD(aP0_4));
        ++v16; /*0x456ddf*/
        ++v35; /*0x456de9*/
      }
      while ( (int)v16 < (int)aStructures ); /*0x456c23*/
    }
  }
  return v14; /*0x456df5*/
}


// ==== 0x00456E00  BuildingClass::AcquireTarget  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::vt_82_(#377 *this)
{
  int v2; // eax
  int v3; // edi
  #377 *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ebx
  char *v8; // ecx
  int v9; // ebp
  bool v10; // zf
  int v11; // ebx
  int *v12; // ecx
  int v13; // esi
  int result; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+20h] [ebp+4h]
  _DWORD *v18; // [esp+20h] [ebp+4h]

  if ( v17 ) /*0x456e0f*/
    this->needsRedraw = 1; /*0x456e11*/
  TechnoClass::SetTargetIfAllowed(this, v17); /*0x456e1b*/
  v16 = (*(int (__thiscall **)(#377 *))(this->infantryBlinkTimer)(this); /*0x456e2e*/
  v2 = (*(int (__thiscall **)(#377 *))(this->q1BC)(this); /*0x456e32*/
  v3 = (*(int (__thiscall **)(#377 *, _DWORD))(this->q1190)(this, *(__int16 *)(v2 + 266)); /*0x456e4a*/
  if ( (*(unsigned __int8 (__thiscall **)(#377 *))(this->q160)(this)
    || this->airstrike
    && (this ? (v4 = (*(int (__thiscall **)(#377 *))(this->fallRate)(this) == 6 ? this : 0) : (v4 = 0),
        *(#377 **)(this->airstrike + 80) == v4) )
  {
    LOWORD(v3) = Techno::StartInvulnerability(v3); /*0x456e91*/
  }
  this->qE00 = v3; /*0x456e93*/
  v18 = (_DWORD *)((char *)this + 1372); /*0x456eaa*/
  v15 = 21; /*0x456eae*/
  do /*0x456f36*/
  {
    v5 = (_DWORD *)*v18; /*0x456eba*/
    if ( *v18 ) /*0x456eba*/
    {
      v6 = v5[50]; /*0x456ec0*/
      if ( v6 && *(_BYTE *)(v6 + 860) ) /*0x456eca*/
      {
        v5[53] = v16; /*0x456edc*/
        v5[63] = (unsigned __int16)v3; /*0x456ee2*/
      }
      v7 = *((char *)this + 1773); /*0x456ee8*/
      if ( v7 == 15 && (*(int (__thiscall **)(#377 *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) == 5 ) /*0x456f02*/
        LOBYTE(v7) = 16; /*0x456f04*/
      v8 = (char *)this + 1372; /*0x456f09*/
      v9 = 21; /*0x456f0b*/
      do /*0x456f20*/
      {
        if ( *(_DWORD *)v8 ) /*0x456f10*/
          *(_BYTE *)(*(_DWORD *)v8 + 376) = v7; /*0x456f16*/
        v8 += 4; /*0x456f1c*/
        --v9; /*0x456f1f*/
      }
      while ( v9 ); /*0x456f20*/
    }
    v10 = v15 == 1; /*0x456f2d*/
    ++v18; /*0x456f2e*/
    --v15; /*0x456f32*/
  }
  while ( !v10 ); /*0x456f36*/
  v11 = *((char *)this + 1773); /*0x456f3c*/
  if ( v11 == 15 && (*(int (__thiscall **)(#377 *, _DWORD, _DWORD))(this->bombVisible)(this, 0, 0) == 5 ) /*0x456f56*/
    LOBYTE(v11) = 16; /*0x456f58*/
  v12 = (int *)((char *)this + 1372); /*0x456f5d*/
  v13 = 21; /*0x456f5f*/
  do /*0x456f74*/
  {
    result = *v12; /*0x456f64*/
    if ( *v12 ) /*0x456f64*/
      *(_BYTE *)(result + 376) = v11; /*0x456f6a*/
    ++v12; /*0x456f70*/
    --v13; /*0x456f73*/
  }
  while ( v13 ); /*0x456f74*/
  return result; /*0x456f76*/
}


// ==== 0x00456F80  TechnoClass::ProcessMissionDeploy  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt281(#377 *this)
{
  int result; // eax
  int v2; // [esp+4h] [ebp+4h]

  result = v2; /*0x456f8b*/
  if ( (this->ambientSoundController & 2) == 2 ) /*0x456f8f*/
  {
    if ( v2 <= 1500 ) /*0x456f96*/
      return v2 + 500; /*0x456fa0*/
    else
      return v2 - 500; /*0x456f98*/
  }
  return result; /*0x456f9d*/
}


// ==== 0x00456FB0  globalHelper_056FB0  this=BuildingClass  sig=csp ====
int __fastcall sub_456FB0(_DWORD *a1, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 1124))(a1, a3); /*0x456fc7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1[165]
    && (a1 ? (v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v5 = 0),
        *(_DWORD **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return v4; /*0x45700f*/
  }
}


// ==== 0x00457020  BuildingClass::IsCellVisibleToPlayer  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsCellVisibleToPlayer(#377 *this)
{
  int result; // eax
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  bool v8; // bl
  int v9; // [esp+8h] [ebp-20h]
  int v10; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v12[3]; // [esp+1Ch] [ebp-Ch] BYREF
  _DWORD *v13; // [esp+2Ch] [ebp+4h]

  result = this->gattlingValue; /*0x457027*/
  if ( *(_BYTE *)(result + 3226) || this->inLimbo ) /*0x45703b*/
    goto LABEL_22; /*0x45703b*/
  result = House::IsHumanPlayer(*((#375 **)this + 135)); /*0x45704f*/
  if ( (_BYTE)result ) /*0x457056*/
  {
    LOBYTE(result) = this->isDiscoveredByCurrentPlayer != 0; /*0x457061*/
    return result; /*0x457068*/
  }
  v3 = (_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD *))(this->q048)(this, v12); /*0x457074*/
  LOWORD(v9) = *v3 / 256; /*0x457089*/
  HIWORD(v9) = v3[1] / 256; /*0x4570a1*/
  v10 = v9; /*0x4570aa*/
  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v10, 1) ) /*0x4570b4*/
    goto LABEL_22; /*0x4570b4*/
  v4 = (BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0) << 8) - 256; /*0x4570db*/
  v5 = (BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) << 8) - 256; /*0x4570f5*/
  v11[0] = this->q027; /*0x4570fb*/
  v11[1] = this->owningHouseIndex; /*0x45710c*/
  v11[2] = this->q029; /*0x457113*/
  v8 = 0; /*0x457154*/
  if ( Cell::IsPassable(v11) ) /*0x457117*/
  {
    v6 = this->q029; /*0x457125*/
    v7 = this->owningHouseIndex + v4; /*0x45712e*/
    v12[0] = v5 + this->q027; /*0x457136*/
    v12[1] = v7; /*0x45713a*/
    v12[2] = v6; /*0x45713e*/
    if ( Cell::IsPassable(v12) ) /*0x457142*/
    {
      if ( g_hWnd ) /*0x457152*/
        v8 = 1; /*0x45711e*/
    }
  }
  result = this->parachute; /*0x45715a*/
  if ( result != 2 && this->Translucency != 15 && !this->IsFogged && !v8 ) /*0x45717c*/
  {
    LOBYTE(result) = 1; /*0x45717f*/
    return result; /*0x457185*/
  }
  result = (*(int (__thiscall **)(#377 *))(this->railgunParticles)(this); /*0x45718c*/
  if ( !(_BYTE)result ) /*0x457194*/
  {
LABEL_22:
    LOBYTE(result) = 0; /*0x4571cf*/
  }
  else
  {
    result = HouseClass::IsAlliedWith(HouseClass_Player, *((#375 **)this + 135)); /*0x4571a3*/
    if ( !(_BYTE)result && !this->IsFogged && !v8 ) /*0x4571b8*/
      *v13 = 1; /*0x4571be*/
    LOBYTE(result) = 1; /*0x4571c5*/
  }
  return result; /*0x45705e*/
}


// ==== 0x004571E0  BuildingClass::Infiltrate  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::Infiltrate(#375 **this, #375 *a2)
{
  #375 *v3; // edi
  #375 *v4; // ecx
  int *v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // ecx
  char v14; // [esp+Bh] [ebp-1h]

  v3 = a2; /*0x4571e5*/
  v4 = this->owner; /*0x4571e9*/
  v14 = 0; /*0x4571ef*/
  if ( v4 != a2 ) /*0x4571f6*/
  {
    if ( (unsigned __int8)House::IsHumanPlayer(v4) || (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45720e*/
    {
      v5 = (int *)(*((int (__thiscall **)(#375 **, #375 **))*this + 110))(this, &a2); /*0x457221*/
      if ( CreateTriggerClassIfFarEnough(9, *v5, *v5) ) /*0x45722f*/
        v14 = 1; /*0x457238*/
    }
    v6 = (int)this->gattlingValue; /*0x45723c*/
    if ( *(_BYTE *)(v6 + 5796) ) /*0x457242*/
    {
      HouseClass::ReshroudMap(this->owner); /*0x457252*/
      if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && !*((_BYTE *)this->owner + 22394) && v14 ) /*0x45727c*/
        VoxClass::FindAndPlay(aEvaRadarsabota, -1); /*0x457288*/
      if ( (unsigned __int8)House::IsHumanPlayer(v3) && !*((_BYTE *)this->owner + 22394) ) /*0x4572a2*/
      {
        if ( v14 ) /*0x4572b6*/
          VoxClass::FindAndPlay(aEvaBuildinginf, -1); /*0x4572c6*/
      }
      goto LABEL_64; /*0x4572c6*/
    }
    if ( *(int *)(v6 + 3808) > 0 ) /*0x4572d9*/
    {
      HouseClass::CreatePowerOutage((int)this->owner, *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3428)); /*0x4572e8*/
      if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && v14 ) /*0x457302*/
      {
        VoxClass::FindAndPlay(aEvaPowersabota, -1); /*0x45730e*/
      }
      else if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x457328*/
      {
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x457338*/
        VoxClass::FindAndPlay(aEvaEnemybasepo, -1); /*0x457347*/
      }
      goto LABEL_64; /*0x45730e*/
    }
    v7 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 2348); /*0x45734c*/
    v8 = 0; /*0x457352*/
    if ( v7 <= 0 ) /*0x457356*/
    {
LABEL_26:
      v10 = *(_DWORD *)(v6 + 5872); /*0x45736a*/
      if ( v10 != -1 ) /*0x457373*/
      {
        SuperClass::Reset(*(_DWORD *)(*((_DWORD *)this->owner + 150) + 4 * v10)); /*0x457388*/
        if ( (unsigned __int8)House::IsHumanPlayer(this->owner) || (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x4573b1*/
          VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x4573c1*/
        goto LABEL_64; /*0x4573c1*/
      }
      if ( *(int *)(v6 + 2048) > 0 ) /*0x45741c*/
      {
        a2 = (#375 *)(*(int (__stdcall **)(char *))(*((_DWORD *)this->owner + 9) + 24))((char *)this->owner + 36); /*0x457437*/
        v12 = Math::RoundToInt((double)(int)a2 * *(float *)(MEMORY[0x87F7E8][7806] + 3432)); /*0x457450*/
        HouseClass::ProcessPowerDrain((int)this->owner, v12); /*0x457453*/
        HouseClass::AddPower(v3, v12); /*0x45745b*/
        if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && v14 ) /*0x457475*/
          VoxClass::FindAndPlay(aEvaCashstolen, -1); /*0x457481*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) && v14 ) /*0x45749b*/
          VoxClass::FindAndPlay(aEvaBuildinginf_1, -1); /*0x4574ab*/
        goto LABEL_64; /*0x4574ab*/
      }
      v13 = *(_DWORD *)(v6 + 3768); /*0x4574b0*/
      if ( v13 != 40 ) /*0x4574b9*/
      {
        if ( v13 != 16 ) /*0x45751a*/
          goto LABEL_64; /*0x45751a*/
        *((_BYTE *)v3 + 703) = 1; /*0x45751e*/
        *((_BYTE *)v3 + 508) = 1; /*0x457524*/
        if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x45752a*/
          BYTE2(MEMORY[0x87F7E8][5353]) = 1; /*0x457533*/
        if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && v14 ) /*0x45754e*/
          VoxClass::FindAndPlay(aEvaTechnologys, -1); /*0x45755a*/
        if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 ) /*0x457570*/
          goto LABEL_64; /*0x457570*/
LABEL_63:
        VoxClass::FindAndPlay(g_Str_EVA_BuildingInfiltrated, -1); /*0x457572*/
        VoxClass::FindAndPlay(aEvaNewtechnolo, -1); /*0x45758b*/
LABEL_64:
        (*((void (__thiscall **)(#375 **, int))*this + 73))(this, 2); /*0x457590*/
        return; /*0x457597*/
      }
      *((_BYTE *)v3 + 704) = 1; /*0x4574bd*/
      *((_BYTE *)v3 + 508) = 1; /*0x4574c3*/
      if ( (unsigned __int8)House::IsHumanPlayer(v3) ) /*0x4574c9*/
        BYTE2(MEMORY[0x87F7E8][5353]) = 1; /*0x4574d2*/
      if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && v14 ) /*0x4574ed*/
        goto LABEL_51; /*0x4574ed*/
    }
    else
    {
      v9 = *(_DWORD **)(MEMORY[0x87F7E8][7806] + 2336); /*0x457358*/
      while ( *v9 != v6 ) /*0x457360*/
      {
        ++v8; /*0x457362*/
        ++v9; /*0x457363*/
        if ( v8 >= v7 ) /*0x457368*/
          goto LABEL_26; /*0x457368*/
      }
      v11 = *(_DWORD *)(v6 + 1744); /*0x4573c6*/
      if ( v11 ) /*0x4573ce*/
      {
        if ( v11 == 1 ) /*0x4573da*/
          *((_BYTE *)v3 + 701) = 1; /*0x4573dc*/
        else
          *((_BYTE *)v3 + 700) = 1; /*0x4573e4*/
      }
      else
      {
        *((_BYTE *)v3 + 702) = 1; /*0x4573d0*/
      }
      *((_BYTE *)v3 + 508) = 1; /*0x4573ea*/
      if ( (unsigned __int8)House::IsHumanPlayer(this->owner) && v14 ) /*0x457409*/
LABEL_51:
        VoxClass::FindAndPlay(aEvaTechnologys, -1); /*0x4574ef*/
    }
    if ( !(unsigned __int8)House::IsHumanPlayer(v3) || !v14 ) /*0x457513*/
      goto LABEL_64; /*0x457513*/
    goto LABEL_63; /*0x457513*/
  }
}


// ==== 0x004575B0  HouseClass::Add  this=HouseClass  sig=csp ====
int __thiscall sub_4575B0(_BYTE *this)
{
  char i; // al
  int v3; // ecx
  int v4; // eax

  for ( i = this->q702; i > 0; i = this->q702 ) /*0x4575c1*/
  {
    v3 = *((_DWORD *)this + i + 378); /*0x4575c7*/
    v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 184))(v3, this->q21C, 1); /*0x4575d7*/
    HouseClass::AddPower(*((_DWORD **)this + 135), v4); /*0x4575e4*/
    BuildingClass::ClearSuperWeaponAnim((int)this); /*0x4575eb*/
    *(_BYTE *)(this->q21C + 22392) = 1; /*0x4575f6*/
    *(_BYTE *)(this->q21C + 22393) = 1; /*0x457602*/
  }
  return (*(int (__thiscall **)(_BYTE *, int))(this->q1A0)(this, 1); /*0x45761d*/
}


// ==== 0x00457620  BuildingClass::IsFactorySelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsFactorySelectable(#377 *this)
{
  return BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(this->gattlingValue);
}


// ==== 0x00457630  BuildingClass::SWAvailable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SWAvailable(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(this->Type + 5872); /*0x457639*/
  if ( v2 == -1 ) /*0x457642*/
    return *(_DWORD *)(this->Type + 5872); /*0x457642*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)MEMORY[0xA83CBC] + v2) + 40) + 200); /*0x457650*/
  if ( !v3 || DynamicVector::GetOrGrow((_DWORD *)(this->owner + 21840), *(_DWORD *)(v3 + 3576)) ) /*0x45766d*/
    return *(_DWORD *)(this->Type + 5872); /*0x457682*/
  else
    return -1; /*0x457676*/
}


// ==== 0x00457690  BuildingClass::SW2Available  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SW2Available(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(this->Type + 5876); /*0x457699*/
  if ( v2 == -1 ) /*0x4576a2*/
    return *(_DWORD *)(this->Type + 5876); /*0x4576a2*/
  v3 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_A83CBC + v2) + 40) + 200); /*0x4576b0*/
  if ( !v3 || DynamicVector::GetOrGrow((_DWORD *)(this->owner + 21840), *(_DWORD *)(v3 + 3576)) ) /*0x4576cd*/
    return *(_DWORD *)(this->Type + 5876); /*0x4576e2*/
  else
    return -1; /*0x4576d6*/
}


// ==== 0x004576F0  BuildingClass::DestroyOnBridgeCollapse  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt184(#377 *this)
{
  int result; // eax
  int i; // edi
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  #377 *v7; // eax
  #377 *v8; // ecx
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  result = MEMORY[0xA83DF8]; /*0x4576f0*/
  for ( i = 0; i < MEMORY[0xA83DF8]; ++i ) /*0x457700*/
  {
    v4 = *((_DWORD *)MEMORY[0xA83DEC] + i); /*0x45770a*/
    v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 76))(v4, v9, 0); /*0x457716*/
    v6 = Coord::To_Cell(&MEMORY[0x87F7E8], v5); /*0x45771f*/
    v7 = (#377 *)Cell::IsBridge(v6); /*0x457726*/
    if ( *(_BYTE *)(v4 + 144) ) /*0x45772b*/
    {
      if ( v7 ) /*0x457737*/
      {
        if ( v7 == this ) /*0x45773b*/
        {
          v8 = *(#377 **)(v4 + 1444); /*0x45773d*/
          if ( !v8 || v8 == v7 ) /*0x457749*/
            (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)v4 + 372))(v4, &MEMORY[0x89C848], 1, 1); /*0x457758*/
        }
      }
    }
    result = MEMORY[0xA83DF8]; /*0x45775e*/
  }
  return result; /*0x457769*/
}


// ==== 0x00457770  BuildingClass::UpdateCloak  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::vt_168_(#377 *this)
{
  int result; // eax
  int *v3; // eax
  _DWORD *v4; // ecx
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  _DWORD *v12; // eax
  #377 *ClosestObject; // eax
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19; // [esp+20h] [ebp-20h] BYREF
  int v20; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  result = TechnoClass::ShouldBeCloaked(); /*0x457779*/
  if ( (_BYTE)result ) /*0x457780*/
  {
    v3 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->airstrikeTintTimer)(this, &v22); /*0x457790*/
    v4 = (_DWORD *)this->gattlingValue; /*0x457798*/
    v23 = *v3; /*0x45779e*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4); /*0x4577a2*/
    v6 = this->gattlingValue; /*0x4577a7*/
    v7 = FoundationWidth; /*0x4577ad*/
    v22 = FoundationWidth; /*0x4577b1*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x4577b5*/
    v8 = -1; /*0x4577ba*/
    v21 = result; /*0x4577c0*/
    v18 = -1; /*0x4577c4*/
    if ( v7 < -1 ) /*0x4577c8*/
    {
LABEL_13:
      LOBYTE(result) = 1; /*0x4578a3*/
      return result; /*0x4578ac*/
    }
    while ( 1 ) /*0x4577ce*/
    {
      v9 = -1; /*0x4577ce*/
      v17 = -1; /*0x4577d4*/
      if ( result >= -1 ) /*0x4577d8*/
        break; /*0x4577d8*/
LABEL_12:
      v18 = ++v8; /*0x457899*/
      if ( v8 > v7 ) /*0x45789d*/
        goto LABEL_13; /*0x45789d*/
    }
    v10 = v23 + v8; /*0x4577e2*/
    while ( 1 ) /*0x4577eb*/
    {
      v24[0] = 0; /*0x4577eb*/
      v24[1] = 0; /*0x4577ef*/
      v11 = HIWORD(v23) + v9; /*0x4577f4*/
      LOWORD(v15) = v10; /*0x4577fe*/
      HIWORD(v15) = v11; /*0x457803*/
      v19 = v15; /*0x457813*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x457817*/
      ClosestObject = (#377 *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45781e*/
      if ( ClosestObject == this ) /*0x457825*/
      {
        LOWORD(v16) = v10; /*0x457827*/
        HIWORD(v16) = v11; /*0x45782c*/
        v20 = v16; /*0x457841*/
        v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x457845*/
        ClosestObject = (#377 *)WTFMode::FindObjectByType(v14, 0); /*0x45784c*/
      }
      if ( ClosestObject ) /*0x457853*/
      {
        if ( *((_DWORD *)ClosestObject + 135) != this->owner ) /*0x457863*/
        {
          result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)ClosestObject + 132))(ClosestObject); /*0x457869*/
          if ( *(_BYTE *)(result + 3229) ) /*0x45786f*/
            break; /*0x45786f*/
        }
      }
      result = v21; /*0x45787d*/
      v9 = ++v17; /*0x457881*/
      if ( v17 > v21 ) /*0x457888*/
      {
        v7 = v22; /*0x45788e*/
        v8 = v18; /*0x457892*/
        goto LABEL_12; /*0x457892*/
      }
    }
  }
  LOBYTE(result) = 0; /*0x4578b0*/
  return result; /*0x4578a3*/
}


// ==== 0x004578C0  BuildingClass::IsFootprintBlocked  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt169(#377 *this)
{
  int result; // eax
  int *v3; // eax
  _DWORD *v4; // ecx
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edi
  __int16 v9; // si
  __int16 v10; // di
  __int16 v11; // si
  _DWORD *v12; // eax
  #377 *ClosestObjectCell; // eax
  _DWORD *v14; // eax
  int v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+1Ch] [ebp-24h]
  int v19; // [esp+20h] [ebp-20h] BYREF
  int v20; // [esp+24h] [ebp-1Ch] BYREF
  int v21; // [esp+28h] [ebp-18h]
  int v22; // [esp+2Ch] [ebp-14h] BYREF
  int v23; // [esp+30h] [ebp-10h]
  _DWORD v24[2]; // [esp+38h] [ebp-8h] BYREF

  if ( !TechnoClass::ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
  {
    v3 = (int *)(*(int (__thiscall **)(#377 *, int *))(this->airstrikeTintTimer)(this, &v22); /*0x4578e0*/
    v4 = (_DWORD *)this->gattlingValue; /*0x4578e8*/
    v23 = *v3; /*0x4578ee*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v4); /*0x4578f2*/
    v6 = this->gattlingValue; /*0x4578f7*/
    v7 = FoundationWidth; /*0x4578fd*/
    v22 = FoundationWidth; /*0x457901*/
    result = BuildingTypeClass::GetFoundationHeight(v6, 0); /*0x457905*/
    v8 = -1; /*0x45790a*/
    v21 = result; /*0x457910*/
    v18 = -1; /*0x457914*/
    if ( v7 < -1 ) /*0x457918*/
    {
LABEL_13:
      LOBYTE(result) = 0; /*0x4579f3*/
      return result; /*0x4579fc*/
    }
    while ( 1 ) /*0x45791e*/
    {
      v9 = -1; /*0x45791e*/
      v17 = -1; /*0x457924*/
      if ( result >= -1 ) /*0x457928*/
        break; /*0x457928*/
LABEL_12:
      v18 = ++v8; /*0x4579e9*/
      if ( v8 > v7 ) /*0x4579ed*/
        goto LABEL_13; /*0x4579ed*/
    }
    v10 = v23 + v8; /*0x457932*/
    while ( 1 ) /*0x45793b*/
    {
      v24[0] = 0; /*0x45793b*/
      v24[1] = 0; /*0x45793f*/
      v11 = HIWORD(v23) + v9; /*0x457944*/
      LOWORD(v15) = v10; /*0x45794e*/
      HIWORD(v15) = v11; /*0x457953*/
      v19 = v15; /*0x457963*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x457967*/
      ClosestObjectCell = (#377 *)Object::FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
      if ( ClosestObjectCell == this ) /*0x457975*/
      {
        LOWORD(v16) = v10; /*0x457977*/
        HIWORD(v16) = v11; /*0x45797c*/
        v20 = v16; /*0x457991*/
        v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x457995*/
        ClosestObjectCell = (#377 *)WTFMode::FindObjectByType(v14, 0); /*0x45799c*/
      }
      if ( ClosestObjectCell ) /*0x4579a3*/
      {
        if ( *((_DWORD *)ClosestObjectCell + 135) != this->owner ) /*0x4579b3*/
        {
          result = (*(int (__thiscall **)(#377 *))(*(_DWORD *)ClosestObjectCell + 132))(ClosestObjectCell); /*0x4579b9*/
          if ( *(_BYTE *)(result + 3229) ) /*0x4579bf*/
            break; /*0x4579bf*/
        }
      }
      result = v21; /*0x4579cd*/
      v9 = ++v17; /*0x4579d1*/
      if ( v17 > v21 ) /*0x4579d8*/
      {
        v7 = v22; /*0x4579de*/
        v8 = v18; /*0x4579e2*/
        goto LABEL_12; /*0x4579e2*/
      }
    }
  }
  LOBYTE(result) = 1; /*0x457a00*/
  return result; /*0x4579f3*/
}


// ==== 0x00457A10  ObjectClass::method_457A10  this=BuildingClass  sig=csp ====
char __thiscall sub_457A10(_DWORD **this)
{
  int v2; // edi
  _WORD *i; // esi
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)((int (__thiscall *)(_DWORD **, int *))(*this)[110])(this, &v6); /*0x457a2d*/
  for ( i = (_WORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*this->gattlingValue + 144))(this->gattlingValue, 0); /*0x457a42*/
        *i != 0x7FFF || i[1] != 0x7FFF;
        i += 2 )
  {
    LOWORD(v5) = v2 + *i; /*0x457a59*/
    HIWORD(v5) = HIWORD(v2) + i[1]; /*0x457a66*/
    v6 = v5; /*0x457a6f*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v6) + 80) & 0x400000) == 0 ) /*0x457a87*/
      return 0; /*0x457a96*/
  }
  return 1; /*0x457a8e*/
}


// ==== 0x00457AA0  BuildingClass::CreateFoggedObjects  this=BuildingClass  sig=csp ====
__int16 __thiscall BuildingClass::CreateFoggedObjects(int *this, int a2, ScenarioClass *aP2, char a4)
{
  FoggedObjectClass *v5; // edi
  int v6; // eax
  __int16 result; // ax
  ScenarioClass *v9; // edi
  ScenarioClass *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  FoggedObjectClass *v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h] BYREF
  int v23; // [esp+28h] [ebp+4h]
  FoggedObjectClass *v24; // [esp+30h] [ebp+Ch]

  v5 = (FoggedObjectClass *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->gattlingValue + 144))(this->gattlingValue, 0); /*0x457abc*/
  v20 = v5; /*0x457ac0*/
  (*(void (__thiscall **)(int *))(*this + 336))(this); /*0x457ac4*/
  v6 = __2_YAPAXI_Z(0x78u); /*0x457acc*/
  if ( v6 ) /*0x457ad6*/
    v24 = (FoggedObjectClass *)FoggedObjectClass::Constructor(v6, (BuildingClass *)this, (FoggedObjectClass *)a4); /*0x457ae5*/
  else
    v24 = 0; /*0x457aeb*/
  v21 = *(_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v22); /*0x457b04*/
  while ( 1 ) /*0x457b08*/
  {
    result = *(_WORD *)v5->__pad_0; /*0x457b08*/
    if ( *(_WORD *)v5->__pad_0 == 0x7FFF && *(_WORD *)&v5->__pad_0[2] == 0x7FFF ) /*0x457b15*/
      return result; /*0x457c79*/
    LOWORD(v23) = v21 + result; /*0x457b25*/
    HIWORD(v23) = HIWORD(v21) + *(_WORD *)&v5->__pad_0[2]; /*0x457b34*/
    v22 = v23; /*0x457b3d*/
    v9 = (ScenarioClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v22); /*0x457b4b*/
    if ( aP2 && v9 == aP2 ) /*0x457b57*/
    {
      v10 = *(ScenarioClass **)(a2 + 8); /*0x457b59*/
      if ( *(_DWORD *)(a2 + 16) < (int)v10 /*0x457b84*/
        || (*(_BYTE *)(a2 + 13) || !v10)
        && (v11 = *(_DWORD *)(a2 + 20), v11 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)a2 + 8))(a2, (char *)v10 + v11, 0) )
      {
        v12 = *(_DWORD *)(a2 + 16); /*0x457b8f*/
        v13 = *(_DWORD *)(a2 + 4); /*0x457b92*/
        *(_DWORD *)(a2 + 16) = v12 + 1; /*0x457b98*/
LABEL_31:
        *(_DWORD *)(v13 + 4 * v12) = v24; /*0x457c60*/
      }
    }
    else
    {
      v14 = v9->nextScenario[10]; /*0x457ba0*/
      if ( v14 ) /*0x457ba5*/
      {
        v15 = *(_DWORD *)(v14 + 8); /*0x457ba7*/
        if ( *(_DWORD *)(v14 + 16) < v15 ) /*0x457baf*/
          goto LABEL_30; /*0x457baf*/
        if ( *(_BYTE *)(v14 + 13) || !v15 ) /*0x457bbc*/
        {
          v16 = *(_DWORD *)(v14 + 20); /*0x457bc2*/
          if ( v16 > 0 ) /*0x457bc7*/
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v15 + v16, 0) ) /*0x457bd5*/
              goto LABEL_30; /*0x457bda*/
          }
        }
      }
      else
      {
        v17 = __2_YAPAXI_Z(0x18u); /*0x457be4*/
        if ( v17 ) /*0x457bee*/
        {
          *(_DWORD *)(v17 + 4) = 0; /*0x457bf0*/
          *(_DWORD *)(v17 + 8) = 0; /*0x457bf3*/
          *(_BYTE *)(v17 + 12) = 1; /*0x457bf6*/
          *(_BYTE *)(v17 + 13) = 0; /*0x457bfa*/
          *(_DWORD *)v17 = &vt_DynamicVectorClass_FoggedObjectClass; /*0x457bfd*/
          *(_DWORD *)(v17 + 20) = 10; /*0x457c03*/
          *(_DWORD *)(v17 + 16) = 0; /*0x457c0a*/
        }
        else
        {
          v17 = 0; /*0x457c0f*/
        }
        v9->nextScenario[10] = v17; /*0x457c11*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v17 + 8))(v17, 1, 0); /*0x457c1b*/
        *(_DWORD *)(v9->nextScenario[10] + 20) = 1; /*0x457c21*/
        v14 = v9->nextScenario[10]; /*0x457c28*/
        v18 = *(_DWORD *)(v14 + 8); /*0x457c2b*/
        if ( *(_DWORD *)(v14 + 16) < v18 /*0x457c4d*/
          || (*(_BYTE *)(v14 + 13) || !v18)
          && (v19 = *(_DWORD *)(v14 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 8))(v14, v18 + v19, 0) )
        {
LABEL_30:
          v12 = *(_DWORD *)(v14 + 16); /*0x457c54*/
          *(_DWORD *)(v14 + 16) = v12 + 1; /*0x457c5a*/
          v13 = *(_DWORD *)(v14 + 4); /*0x457c5d*/
          goto LABEL_31; /*0x457c5d*/
        }
      }
    }
    v20 = (FoggedObjectClass *)((char *)v20 + 4); /*0x457c67*/
    v5 = v20; /*0x457c72*/
  }
}


// ==== 0x00457C90  BuildingClass::IronCurtain  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ApplyIronCurtain(#377 *this)
{
  #72 *v1; // eax
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+10h] [ebp+4h]
  int v5; // [esp+14h] [ebp+8h]
  char v6; // [esp+18h] [ebp+Ch]

  if ( this->C4Applied ) /*0x457c90*/
  {
    this->C4Applied = 0; /*0x457ca0*/
    v1 = MEMORY[0xA8ED84]; /*0x457ca6*/
    this->initialOwner = 0; /*0x457cb1*/
    this->C4Timer = v1; /*0x457cb7*/
    this->q52C = v3; /*0x457cbd*/
    this->ammoReloadTimer = 0; /*0x457cc0*/
  }
  return TechnoClass::IronCurtain(v4, v5, v6); /*0x457cd8*/
}


// ==== 0x00457CE0  BuildingClass::CanRepair  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass_CanRepair(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _BYTE v8[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a2 ) /*0x457ced*/
    return 0; /*0x457ced*/
  if ( !*(_BYTE *)(this->Type + 5499) ) /*0x457cf9*/
    return 0; /*0x457cf9*/
  v3 = this->currentMission; /*0x457d07*/
  if ( v3 == 18 ) /*0x457d10*/
    return 0; /*0x457d10*/
  if ( v3 == 19 ) /*0x457d19*/
    return 0; /*0x457d19*/
  v4 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v8); /*0x457d28*/
  if ( !(unsigned __int8)IsCoordVisibleMap(v4) || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 468))(this) ) /*0x457d3e*/
    return 0; /*0x457d46*/
  v5 = *(_DWORD *)(a2 + 1728); /*0x457d48*/
  if ( !*(_BYTE *)(v5 + 3764) ) /*0x457d56*/
    return *(_BYTE *)(v5 + 3765) /*0x457daa*/
        && !Object::IsAlliedWithObjectHouse((_DWORD *)this->owner, a2)
        && (*(int (__thiscall **)(_DWORD *))(*this + 1032))(this);
  v6 = this->owner; /*0x457d58*/
  return (v6 == *(_DWORD *)(a2 + 540) || *(_BYTE *)(*(_DWORD *)(v6 + 52) + 422)) /*0x457d9a*/
      && (*(int (__thiscall **)(_DWORD *))(*this + 1032))(this) != *(_DWORD *)(this->Type + 5504)
      && !(unsigned __int8)BuildingClass::IsHealthLow(this)
      && !(unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(a2);
}


// ==== 0x00457DE0  BuildingClass::UnloadUnits  this=IUnknown  sig=csp ====
void __thiscall BuildingClass::UnloadUnits(BuildingTypeClass **this, char a2, char a3)
{
  BuildingTypeClass *v4; // eax
  BuildingTypeClass *v6; // ecx
  int FoundationWidth; // eax
  BuildingTypeClass *v8; // ecx
  __int16 di2; // di
  int FoundationHeight; // eax
  BuildingTypeClass *v11; // edx
  __int16 bp2; // bp
  char v12; // bl
  int *v13; // eax
  int **v14; // edx
  int *v15; // edi
  int v16; // ebp
  void *v17; // eax
  int v18; // eax
  int v19; // ebp
  void *v20; // eax
  int *v21; // eax
  int v22; // ecx
  __int16 *v23; // eax
  int v24; // ebp
  void *v25; // eax
  __int16 *v26; // eax
  int v27; // ebp
  void *v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  void *v32; // eax
  void *v33; // eax
  int *v34; // eax
  int v35; // edx
  int v36; // ebp
  TechnoClass *v38; // edi
  int ebx23; // ebx
  int v39; // eax
  int queuedMission; // ecx
  __int16 v41; // di
  _WORD *v42; // eax
  int v43; // ebx
  _DWORD *v44; // eax
  int v45; // [esp+84h] [ebp-2Ch] BYREF
  int v46; // [esp+88h] [ebp-28h] BYREF
  int v47; // [esp+8Ch] [ebp-24h]
  int v48; // [esp+90h] [ebp-20h]
  char v49[4]; // [esp+94h] [ebp-1Ch] BYREF
  int v50; // [esp+98h] [ebp-18h] BYREF
  int v51; // [esp+9Ch] [ebp-14h]
  int i; // [esp+A0h] [ebp-10h]
  _BYTE v53[12]; // [esp+A4h] [ebp-Ch] BYREF
  int v54; // [esp+B8h] [ebp+8h]

  v4 = *this; /*0x457de9*/
  this->q1A7 = 0; /*0x457deb*/
  if ( ((int (*)(void))v4->UndeploysInto[0])() ) /*0x457df5*/
  {
    v50 = aP5.field_0; /*0x457e14*/
    v51 = unk_89C84C; /*0x457e1e*/
    v46 = dword_89C818; /*0x457e22*/
    v6 = this->q520; /*0x457e26*/
    i = unk_89C850; /*0x457e2c*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v6); /*0x457e30*/
    v8 = this->q520; /*0x457e35*/
    di2 = FoundationWidth; /*0x457e3b*/
    v47 = FoundationWidth; /*0x457e3f*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)v8, 0); /*0x457e43*/
    v11 = *this; /*0x457e48*/
    bp2 = FoundationHeight; /*0x457e4a*/
    v48 = FoundationHeight; /*0x457e53*/
    v12 = 0; /*0x457e57*/
    v13 = (int *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&v11->__pad_14D[107])(this, v49); /*0x457e59*/
    v14 = (int **)this->q1A2; /*0x457e61*/
    v45 = *v13; /*0x457e67*/
    LOWORD(v45) = di2 + v45; /*0x457e6b*/
    HIWORD(v45) += bp2; /*0x457e70*/
    v15 = *v14; /*0x457e75*/
    v16 = **v14; /*0x457e7b*/
    v17 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v45); /*0x457e8b*/
    if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v16 + 428))(v15, v17, -1, -1, 0, 1) ) /*0x457e93*/
    {
      while ( 1 ) /*0x457ea6*/
      {
        v18 = (*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457ea6*/
        if ( SHIWORD(v45) <= *(__int16 *)(v18 + 2) - 1 ) /*0x457eb8*/
          break; /*0x457eb8*/
        --HIWORD(v45); /*0x457eba*/
        v19 = *v15; /*0x457ebf*/
        v20 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v45); /*0x457ed3*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v19 + 428))(v15, v20, -1, -1, 0, 1) ) /*0x457edb*/
          goto LABEL_5; /*0x457ee3*/
      }
    }
    else
    {
LABEL_5:
      v12 = 1; /*0x457ee5*/
      v46 = v45; /*0x457eeb*/
    }
    v21 = (int *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457ef8*/
    v22 = *v21; /*0x457efe*/
    LOWORD(v45) = v47 + *v21; /*0x457f0e*/
    HIWORD(v45) = v48 + HIWORD(v22); /*0x457f13*/
    if ( !v12 ) /*0x457f1a*/
    {
      while ( 1 ) /*0x457f25*/
      {
        v23 = (__int16 *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457f25*/
        if ( (__int16)v45 <= *v23 - 1 ) /*0x457f36*/
          break; /*0x457f36*/
        LOWORD(v45) = v45 - 1; /*0x457f38*/
        v24 = *v15; /*0x457f3d*/
        v25 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v45); /*0x457f51*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v24 + 428))(v15, v25, -1, -1, 0, 1) ) /*0x457f59*/
        {
          v12 = 1; /*0x457f67*/
          v46 = v45; /*0x457f69*/
          break; /*0x457f69*/
        }
      }
    }
    v45 = *(_DWORD *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457f6d*/
    LOWORD(v45) = v45 - 1; /*0x457f82*/
    --HIWORD(v45); /*0x457f87*/
    if ( !v12 ) /*0x457f8e*/
    {
      while ( 1 ) /*0x457f99*/
      {
        v26 = (__int16 *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457f99*/
        if ( (__int16)v45 >= v47 + *v26 ) /*0x457fad*/
          break; /*0x457fad*/
        LOWORD(v45) = v45 + 1; /*0x457faf*/
        v27 = *v15; /*0x457fb4*/
        v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v45); /*0x457fc8*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v27 + 428))(v15, v28, -1, -1, 0, 1) ) /*0x457fd0*/
        {
          v12 = 1; /*0x457fde*/
          v46 = v45; /*0x457fe0*/
          break; /*0x457fe0*/
        }
      }
    }
    v45 = *(_DWORD *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x457fe4*/
    LOWORD(v45) = v45 - 1; /*0x457ff9*/
    --HIWORD(v45); /*0x457ffe*/
    if ( !v12 ) /*0x458005*/
    {
      v29 = v48; /*0x458007*/
      while ( 1 ) /*0x458014*/
      {
        v30 = (*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x458014*/
        if ( SHIWORD(v45) >= v29 + *(__int16 *)(v30 + 2) ) /*0x458027*/
          break; /*0x458027*/
        ++HIWORD(v45); /*0x45802d*/
        v31 = *v15; /*0x458032*/
        v32 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v45); /*0x458046*/
        if ( !(*(int (__thiscall **)(int *, void *, int, int, _DWORD, int))(v31 + 428))(v15, v32, -1, -1, 0, 1) ) /*0x45804e*/
        {
          v46 = v45; /*0x45805c*/
          goto LABEL_19; /*0x45805c*/
        }
      }
      if ( !a3 ) /*0x458146*/
      {
        BuildingClass::AnimateUnloadUnits(this, 0); /*0x458184*/
        return; /*0x458190*/
      }
      v41 = v47 - 1; /*0x458156*/
      v42 = (_WORD *)(*(int (__thiscall **)(BuildingTypeClass **, char *))&(*this)->__pad_14D[107])(this, v49); /*0x458159*/
      LOWORD(v54) = *v42 + v41; /*0x458169*/
      HIWORD(v54) = v29 - 1 + v42[1]; /*0x45816e*/
      v46 = v54; /*0x458177*/
    }
LABEL_19:
    v33 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v46); /*0x458060*/
    v34 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v33 + 72))(v33, v53); /*0x458078*/
    v50 = *v34; /*0x45807d*/
    v51 = v34[1]; /*0x458084*/
    v35 = v34[2]; /*0x45808e*/
    ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x458092*/
    v36 = (int)(this->q1A5)[-1].align_1794 + 3; /*0x45809e*/
    for ( i = v35; v36 >= 0; --v36 ) /*0x4580a3*/
    {
      v38 = (TechnoClass *)*(&(this->q1A2)->vtable0 + v36); /*0x4580b1*/
      if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *, int *, _DWORD))(*(_DWORD *)v38->__pad_0 + 216))( /*0x4580bd*/
             v38,
             &v50,
             0) )
      {
        if ( *((_BYTE *)v38->focus + 492) ) /*0x4580d1*/
        {
          BYTE1(v38[1].idleActionTimer[1]) = 0; /*0x4580db*/
          LOBYTE(v38[1].idleActionTimer[1]) = 0; /*0x4580e2*/
        }
        (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v38->__pad_0 + 968))(v38, 0); /*0x4580ef*/
        ebx23 = *(_DWORD *)v38->__pad_0; /*0x4580f7*/
        v39 = (*(int (__thiscall **)(BuildingTypeClass **, _BYTE *, int, int))&(*this)->UINameLabel[11])( /*0x458104*/
                this,
                v53,
                1,
                1);
        (*(void (__thiscall **)(TechnoClass *, int))(ebx23 + 372))(v38, v39); /*0x45810a*/
        if ( a2 ) /*0x458116*/
        {
          queuedMission = v38[1].queuedMission; /*0x45811c*/
          if ( queuedMission ) /*0x458124*/
            TeamClass::LiberateMember_Start(queuedMission, (IUnknown *)v38, 0xFFFFFFFF, 0); /*0x45812b*/
          (*(void (__thiscall **)(TechnoClass *, int, _DWORD))(*(_DWORD *)v38->__pad_0 + 488))(v38, 15, 0); /*0x458138*/
        }
      }
      else
      {
        (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v38->__pad_0 + 248))(v38); /*0x458197*/
      }
    }
    --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x4581b2*/
    v43 = (int)this->q68C; /*0x4581b9*/
    ((void (__thiscall *)(BuildingTypeClass **))(this->q1A1)->vtable3)(this + 417); /*0x4581bc*/
    ((void (__thiscall *)(BuildingTypeClass **, int, _DWORD))(this->q1A1)->vtable2)(this + 417, v43, 0); /*0x4581c6*/
    v44 = (_DWORD *)(*(int (__thiscall **)(BuildingTypeClass **))&(*this)->__pad_14D[111])(this); /*0x4581cd*/
    BuildingClass::UpdateThreatBounds(this, v44); /*0x4581d6*/
  }
}


// ==== 0x004581F0  BuildingClass::MissionStubReturnZero6  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt258(#377 *this)
{
  return this->q1A5; /*0x4581f6*/
}


// ==== 0x00458200  BuildingClass::ProcessStructureAbandoned  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ProcessStructureAbandoned(int this)
{
  int result; // eax
  int v3; // edi
  #375 *v4; // ebx
  int v5; // eax
  int v6; // ecx
  HouseClass *v7; // edx
  #375 *v8; // ecx
  __int64 v9; // rax
  _BYTE v10[4]; // [esp+8h] [ebp-4h] BYREF

  result = *(_DWORD *)(this + 1312); /*0x458205*/
  if ( *(_DWORD *)(result + 1588) == -1 ) /*0x458212*/
  {
    if ( BuildingClass::IsHealthLow((int *)this) ) /*0x45821a*/
      BuildingClass::UnloadUnits((int *)this, 0, 0); /*0x458229*/
    v3 = HouseClass_Count; /*0x458230*/
    v4 = 0; /*0x45823b*/
    v5 = HouseTypeClass::Find(MEMORY[0x818164]); /*0x45823d*/
    v6 = 0; /*0x458242*/
    if ( v3 > 0 ) /*0x458246*/
    {
      v7 = HouseClass_Array; /*0x458248*/
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7->__pad_0 + 52) + 188) != v5 ) /*0x458259*/
      {
        ++v6; /*0x45825b*/
        v7 = (HouseClass *)((char *)v7 + 4); /*0x45825c*/
        if ( v6 >= v3 ) /*0x458261*/
          goto LABEL_10; /*0x458261*/
      }
      v4 = *(#375 **)&HouseClass_Array->__pad_0[4 * v6]; /*0x45826b*/
    }
LABEL_10:
    if ( !(*(int (__thiscall **)(int))(this->q408)(this) ) /*0x458272*/
    {
      v8 = *(#375 **)(this + 540); /*0x45827e*/
      if ( v8 != v4 ) /*0x458286*/
      {
        if ( (unsigned __int8)House::IsHumanPlayer(v8) ) /*0x458288*/
        {
          PlayVocClass(MEMORY[0x8871E0]->GeneticMutatorActivateSound, 0x2000, 1.0, 0); /*0x4582a9*/
          v9 = ((__int64 (__thiscall *)(int, _BYTE *))*(_DWORD *)(this->airstrikeTintTimer)(this, v10); /*0x4582b7*/
          if ( CreateTriggerClassIfFarEnough(15, SHIDWORD(v9), *(_DWORD *)v9) ) /*0x4582c5*/
            VoxClass::FindAndPlay(aEvaStructureab, -1); /*0x4582d8*/
        }
        PlayHealthDependentBuildingAnim((int *)this); /*0x4582df*/
        (*(void (__thiscall **)(int, #375 *, _DWORD))(this->isALoaner)(this, v4, 0); /*0x4582eb*/
      }
    }
    result = (*(int (__thiscall **)(int))(this->q408)(this); /*0x4582f5*/
    if ( result > 0 && *(#375 **)(this + 540) == v4 ) /*0x458305*/
    {
      PlayHealthDependentBuildingAnim((int *)this); /*0x458309*/
      return (*(int (__thiscall **)(int, _DWORD, _DWORD))(this->isALoaner)( /*0x458323*/
               this,
               *(_DWORD *)(**(_DWORD **)(this + 1672) + 540),
               0);
    }
  }
  return result; /*0x458329*/
}


// ==== 0x00458330  ObjectClass::PlayHealthDependentBuildingAnim  this=BuildingClass  sig=csp ====
int *__thiscall PlayHealthDependentBuildingAnim(int *this)
{
  BOOL v2; // ebx
  bool v3; // al
  int v4; // edx
  int *v5; // eax
  bool v6; // zf
  BuildingTypeClass *v7; // eax
  BOOL v8; // ebx
  bool v9; // al
  int v10; // edx
  int *v11; // eax
  BuildingTypeClass *v12; // eax
  BOOL v13; // ebx
  bool v14; // al
  int v15; // edx
  int *v16; // eax
  BuildingTypeClass *v17; // eax
  BOOL v18; // ebx
  bool v19; // al
  int v20; // edx
  int *v21; // eax
  BuildingTypeClass *v22; // eax
  int *result; // eax
  BOOL v24; // ebx
  bool v25; // al
  int v26; // edx
  BuildingTypeClass *v27; // eax
  int v28; // [esp+8h] [ebp-4h]

  if ( this->q169 )
  {
    v2 = BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x458354*/
    v3 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x45836b*/
    LOBYTE(v28) = v3; /*0x458370*/
    if ( v2 )
    {
      v5 = (int *)(this->gattlingValue + 5156); /*0x45837c*/
    }
    else
    {
      v6 = !v3; /*0x458383*/
      v7 = (BuildingTypeClass *)this->gattlingValue; /*0x458385*/
      v5 = v6 ? &v7->?[306] : &v7->?[314];
    }
    if ( v5 && *(_BYTE *)v5 ) /*0x45839d*/
      BuildingClass::PlayAnim((ObjectClass *)this, v4, v5, (IUnknown *)0x12, (IUnknown *)v2, v28, 0); /*0x4583af*/
  }
  if ( this->q15A )
  {
    v8 = BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x4583d6*/
    v9 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x4583ed*/
    LOBYTE(v28) = v9; /*0x4583f2*/
    if ( v8 )
    {
      v11 = (int *)(this->gattlingValue + 4136); /*0x4583fe*/
    }
    else
    {
      v6 = !v9; /*0x458405*/
      v12 = (BuildingTypeClass *)this->gattlingValue; /*0x458407*/
      v11 = v6 ? &v12->?[51] : &v12->?[59];
    }
    if ( v11 && *(_BYTE *)v11 ) /*0x45841f*/
      BuildingClass::PlayAnim((ObjectClass *)this, v10, v11, (IUnknown *)3, (IUnknown *)v8, v28, 0); /*0x458431*/
  }
  if ( this->q15B )
  {
    v13 = BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x458458*/
    v14 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x45846f*/
    LOBYTE(v28) = v14; /*0x458474*/
    if ( v13 )
    {
      v16 = (int *)(this->gattlingValue + 4204); /*0x458480*/
    }
    else
    {
      v6 = !v14; /*0x458487*/
      v17 = (BuildingTypeClass *)this->gattlingValue; /*0x458489*/
      v16 = v6 ? &v17->?[68] : &v17->?[76];
    }
    if ( v16 && *(_BYTE *)v16 ) /*0x4584a1*/
      BuildingClass::PlayAnim((ObjectClass *)this, v15, v16, (IUnknown *)4, (IUnknown *)v13, v28, 0); /*0x4584b3*/
  }
  if ( this->armorMultiplier )
  {
    v18 = BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x4584da*/
    v19 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x4584f1*/
    LOBYTE(v28) = v19; /*0x4584f6*/
    if ( v18 )
    {
      v21 = (int *)(this->gattlingValue + 4272); /*0x458502*/
    }
    else
    {
      v6 = !v19; /*0x458509*/
      v22 = (BuildingTypeClass *)this->gattlingValue; /*0x45850b*/
      v21 = v6 ? &v22->?[85] : &v22->?[93];
    }
    if ( v21 && *(_BYTE *)v21 ) /*0x458523*/
      BuildingClass::PlayAnim((ObjectClass *)this, v20, v21, (IUnknown *)5, (IUnknown *)v18, v28, 0); /*0x458535*/
  }
  result = (int *)this->q15D; /*0x45853a*/
  if ( result ) /*0x458542*/
  {
    v24 = BuildingClass::GetHealthRatio(this) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888); /*0x45855c*/
    v25 = (*(int (__thiscall **)(int *))(*this + 1032))(this) > 0; /*0x458573*/
    LOBYTE(v28) = v25; /*0x458578*/
    if ( v24 ) /*0x45857c*/
    {
      result = (int *)(this->gattlingValue + 4340); /*0x458584*/
    }
    else
    {
      v6 = !v25; /*0x45858b*/
      v27 = (BuildingTypeClass *)this->gattlingValue; /*0x45858d*/
      if ( v6 ) /*0x458593*/
        result = &v27->?[102]; /*0x45859c*/
      else
        result = &v27->?[110]; /*0x458595*/
    }
    if ( result ) /*0x4585a3*/
    {
      if ( *(_BYTE *)result ) /*0x4585a5*/
        return (int *)BuildingClass::PlayAnim((ObjectClass *)this, v26, result, (IUnknown *)6, (IUnknown *)v24, v28, 0); /*0x4585b7*/
    }
  }
  return result; /*0x4585bc*/
}


// ==== 0x004585C0  BuildingClass::AnimateUnloadUnits  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::AnimateUnloadUnits(_DWORD *this, CoordStruct *aP1)
{
  int v4; // edi
  int i; // edi
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  BuildingTypeClass *v10; // edx
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  TechnoTypeClass *v14; // eax
  AnimClass *v15; // ebx
  int v16; // eax
  AnimClass *v17; // eax
  int v18; // ecx
  AudioController *v19; // ebx
  _DWORD *v20; // eax
  int result; // eax
  _BYTE v22[32]; // [esp+10h] [ebp-20h] BYREF
  CoordStruct *aP1a; // [esp+34h] [ebp+4h]

  this->q1A7 = 0; /*0x4585cf*/
  v4 = this->q1A5; /*0x4585d9*/
  if ( aP1 ) /*0x4585df*/
  {
    v7 = v4 - 1; /*0x458601*/
    if ( v7 >= 0 ) /*0x458602*/
    {
      aP1a = (CoordStruct *)(8 * v7 + 5512); /*0x45860f*/
      do /*0x4586fe*/
      {
        v8 = World::ToScreen( /*0x45862b*/
               *(float **)&MEMORY[0x87F8E4].__pad_5568[9432],
               (AbstractClass *)v22,
               (AbstractClass *)((char *)aP1a + this->q520));
        v9 = v8[1]; /*0x458630*/
        v10 = (BuildingTypeClass *)*this; /*0x458635*/
        *(_DWORD *)&v22[8] = *v8; /*0x458637*/
        *(_DWORD *)&v22[12] = v9; /*0x45863f*/
        *(_DWORD *)&v22[16] = 0; /*0x458646*/
        v11 = (_DWORD *)((int (__thiscall *)(_DWORD *, _BYTE *))v10->AlphaImage)(this, &v22[20]); /*0x45864e*/
        v12 = *(_DWORD *)&v22[8] + *v11; /*0x45865e*/
        v13 = v11[1]; /*0x458660*/
        v14 = (TechnoTypeClass *)(*(_DWORD *)&v22[16] + v11[2]); /*0x45866c*/
        *(_DWORD *)&v22[8] = v12; /*0x458673*/
        *(_DWORD *)&v22[12] += v13; /*0x458677*/
        *(_DWORD *)&v22[16] = v14; /*0x45867b*/
        v15 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x458684*/
        if ( v15 ) /*0x45868b*/
        {
          v16 = (*(int (__thiscall **)(CoordStruct *, _DWORD))(aP1->X + 1016))(aP1, 0); /*0x4586a6*/
          v17 = AnimClass::ctor( /*0x4586b7*/
                  (void **)v15,
                  *(CoordStruct **)(*(_DWORD *)v16 + 276),
                  (CoordStruct *)&v22[8],
                  0,
                  (CoordStruct *)1,
                  (void *)0x600,
                  0,
                  0);
        }
        else
        {
          v17 = 0; /*0x4586be*/
        }
        v17->field_100 = -200; /*0x4586c0*/
        (*(void (__thiscall **)(CoordStruct *, _DWORD))(aP1->X + 224))(aP1, *(_DWORD *)(this->q1A2 + 4 * v7)); /*0x4586d9*/
        v18 = *(_DWORD *)(this->q1A2 + 4 * v7); /*0x4586e5*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 248))(v18); /*0x4586ea*/
        --v7; /*0x4586f4*/
        aP1a = (CoordStruct *)((char *)aP1a - 8); /*0x4586fa*/
      }
      while ( v7 >= 0 ); /*0x4586fe*/
    }
  }
  else
  {
    for ( i = v4 - 1; i >= 0; --i ) /*0x4585e2*/
    {
      v6 = *(_DWORD *)(this->q1A2 + 4 * i); /*0x4585ee*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x4585f3*/
    }
  }
  v19 = (AudioController *)this->q68C; /*0x45870a*/
  (*(void (__thiscall **)(_DWORD *))(this->q1A1 + 12))(this + 417); /*0x458718*/
  (*(void (__thiscall **)(_DWORD *, AudioController *, _DWORD))(this->q1A1 + 8))(this + 417, v19, 0); /*0x458722*/
  v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 444))(this); /*0x458729*/
  BuildingClass::UpdateThreatBounds(this, v20); /*0x458732*/
  return result; /*0x458737*/
}


// ==== 0x00458750  HouseClass::Process  this=HouseClass  sig=csp ====
char __thiscall sub_458750(int *this)
{
  int v2; // ecx
  char result; // al
  int v4; // eax
  int v5; // [esp+8h] [ebp-8h]

  v2 = *(_DWORD *)(this->q148 + 5472); /*0x458767*/
  this->q1B4 = (int)MEMORY[0xA8ED84]; /*0x45876d*/
  this->q1B5 = v5; /*0x458773*/
  this->q6D8 = v2; /*0x458776*/
  result = *(_BYTE *)(*(_DWORD *)(this->q21C + 52) + 422); /*0x458782*/
  if ( !result ) /*0x45878a*/
  {
    result = (*(int (__thiscall **)(int *))(*this + 848))(this); /*0x458790*/
    if ( result ) /*0x458798*/
    {
      v4 = *(_DWORD *)(this->q148 + 5468); /*0x4587a0*/
      if ( v4 <= 0 ) /*0x4587a8*/
        return HouseClass::ProcessPowerDrain(this->q21C, -v4); /*0x4587c4*/
      else
        return HouseClass::AddPower((_DWORD *)this->q21C, v4); /*0x4587b1*/
    }
  }
  return result; /*0x4587b6*/
}


// ==== 0x00458810  BuildingClass::BuildTurretTransform  this=BuildingClass  sig=csp ====
float *__thiscall sub_458810(int this, float *a2)
{
  float v4; // [esp+0h] [ebp-44h]
  float v5; // [esp+0h] [ebp-44h]
  float v6; // [esp+0h] [ebp-44h]
  float v7; // [esp+0h] [ebp-44h]
  float v8; // [esp+0h] [ebp-44h]
  float v9; // [esp+0h] [ebp-44h]
  float v10; // [esp+0h] [ebp-44h]
  float v11; // [esp+0h] [ebp-44h]
  float v12; // [esp+0h] [ebp-44h]
  float v13; // [esp+0h] [ebp-44h]
  float v14; // [esp+0h] [ebp-44h]
  float v15; // [esp+Ch] [ebp-38h]
  int v16; // [esp+10h] [ebp-34h] BYREF
  float v17[12]; // [esp+14h] [ebp-30h] BYREF

  Matrix3x4::Identity(v17); /*0x45881b*/
  v4 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5960); /*0x458831*/
  Matrix3x4::Translate(v17, v4); /*0x458834*/
  v5 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5964); /*0x45884a*/
  Matrix3x3::ApplyCol0(v17, v5); /*0x45884d*/
  v6 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5968); /*0x458863*/
  Matrix3x3::ApplyCol1(v17, v6); /*0x458866*/
  v7 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x45889c*/
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v17, v7); /*0x45889f*/
  v8 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5948); /*0x4588b5*/
  Matrix3x4::Translate(v17, v8); /*0x4588b8*/
  v9 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5952); /*0x4588ce*/
  Matrix3x3::ApplyCol0(v17, v9); /*0x4588d1*/
  v10 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5956); /*0x4588e7*/
  Matrix3x3::ApplyCol1(v17, v10); /*0x4588ea*/
  v11 = -((double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 880), &v16) >> 10) + 1) >> 1) & 0x1F) /*0x458922*/
                      - 8)
        * -0.1963495408493621);
  Matrix3D::RotateZ(v17, v11); /*0x458925*/
  v12 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5936); /*0x45893b*/
  Matrix3x4::Translate(v17, v12); /*0x45893e*/
  v13 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5940); /*0x458954*/
  Matrix3x3::ApplyCol0(v17, v13); /*0x458957*/
  v14 = (float)*(int *)(*(_DWORD *)(this + 1312) + 5944); /*0x45896d*/
  Matrix3x3::ApplyCol1(v17, v14); /*0x458970*/
  v15 = *(double *)(*(_DWORD *)(this + 1312) + 5928); /*0x458985*/
  BuildingClass::processBaseExpansion(v17, v15); /*0x45898e*/
  BuildingClass::updateFoundation(v17, v15); /*0x458998*/
  BuildingClass::recalcAdjacency(v17, v15); /*0x4589a2*/
  qmemcpy(a2, v17, 0x30u); /*0x4589b6*/
  return a2; /*0x4589b8*/
}


// ==== 0x00458A00  UnitClass::IsCellBlockedByBridge  this=AbstractClass  sig=csp ====
bool __thiscall UnitClass::IsCellBlockedByBridge(_DWORD *this, IUnknown *aP1)
{
  MouseClass *v2; // edi
  int v5; // eax
  int v6; // edi

  v2 = (MouseClass *)aP1; /*0x458a02*/
  if ( Cell::IsBridge(aP1) != this ) /*0x458a11*/
    return 0; /*0x458a14*/
  v5 = this->q520; /*0x458a1a*/
  if ( *(_DWORD *)(v5 + 5664) == -1 ) /*0x458a27*/
    return 1; /*0x458a2a*/
  if ( *(_BYTE *)(v5 + 5803) && this->q0B9 ) /*0x458a3a*/
    return 1; /*0x458a45*/
  v6 = *(__int16 *)&v2->__pad_18[12]; /*0x458a51*/
  return *(__int16 *)(*(int (__thiscall **)(_DWORD *, IUnknown **))(*this + 440))(this, &aP1) /*0x458a13*/
       + *(_DWORD *)(this->q520 + 5664) > v6;
}


// ==== 0x00458A80  TechnoClass::EvacuateFootprintCells  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt292(#377 *this)
{
  #377 *v1; // esi
  int v2; // eax
  _WORD *v3; // ebp
  _WORD *v4; // eax
  __int16 v5; // dx
  _DWORD *v6; // edi
  _BYTE *v7; // esi
  int v8; // eax
  int i; // edi
  _DWORD *v10; // esi
  int j; // edi
  _DWORD *v12; // esi
  int result; // eax
  int k; // edi
  int *v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // ebx
  int v20; // eax
  int *v21; // [esp+0h] [ebp-44h]
  int v22; // [esp+4h] [ebp-40h]
  __int16 v23; // [esp+10h] [ebp-34h]
  __int16 v24; // [esp+12h] [ebp-32h]
  int v25; // [esp+14h] [ebp-30h] BYREF
  #377 *v26; // [esp+18h] [ebp-2Ch] BYREF
  int v27; // [esp+1Ch] [ebp-28h] BYREF
  int v28; // [esp+20h] [ebp-24h] BYREF
  int v29; // [esp+24h] [ebp-20h] BYREF
  int v30; // [esp+28h] [ebp-1Ch] BYREF
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  int v34; // [esp+38h] [ebp-Ch]
  int v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  _DWORD *v37; // [esp+48h] [ebp+4h]
  int v38; // [esp+4Ch] [ebp+8h]
  int v39; // [esp+50h] [ebp+Ch] BYREF
  int v40; // [esp+54h] [ebp+10h] BYREF

  v1 = this; /*0x458a86*/
  v2 = *(_DWORD *)this; /*0x458a8b*/
  v26 = this; /*0x458a8e*/
  v3 = (_WORD *)(*(int (__stdcall **)(_DWORD))(v2 + 264))(0); /*0x458a9c*/
  v23 = *v37 / 256; /*0x458aae*/
  v24 = v37[1] / 256; /*0x458ac6*/
  EventClass::resetEvent(&v31, 0, 0); /*0x458acb*/
  v31 = &vt_DynamicVectorClass_TechnoClass; /*0x458ad0*/
  v36 = 10; /*0x458ad8*/
  v35 = 0; /*0x458ae0*/
  while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x458af8*/
  {
    v4 = v3; /*0x458afe*/
    v3 += 2; /*0x458b00*/
    v5 = v24 + v4[1]; /*0x458b0f*/
    LOWORD(v25) = v23 + *v4; /*0x458b14*/
    HIWORD(v25) = v5; /*0x458b1d*/
    v27 = v25; /*0x458b2c*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v27); /*0x458b35*/
    if ( v6[17] != -1 ) /*0x458b3d*/
    {
      v6[17] = -1; /*0x458b3f*/
      *((_BYTE *)v6 + 286) = 0; /*0x458b42*/
      v6[16] = 0; /*0x458b48*/
    }
    v7 = (_BYTE *)v6[57]; /*0x458b4b*/
    if ( v7 ) /*0x458b53*/
    {
      while ( (v7[20] & 1) != 0 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) != 6 ) /*0x458b65*/
      {
        if ( v35 < v33 /*0x458b91*/
          || (BYTE1(v34) || !v33)
          && v36 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v31[2])(&v31, v36 + v33, 0) )
        {
          v8 = v35++; /*0x458b9c*/
          *((_DWORD *)Block + v8) = v7; /*0x458ba7*/
        }
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 212))(v7); /*0x458bae*/
        v7 = (_BYTE *)v6[57]; /*0x458bb4*/
        if ( !v7 ) /*0x458bbc*/
          goto LABEL_2; /*0x458bbc*/
      }
      for ( i = v35 - 1; i >= 0; --i ) /*0x458bcc*/
      {
        v10 = (_DWORD *)*((_DWORD *)Block + i); /*0x458bd7*/
        v28 = v10[39]; /*0x458be6*/
        v29 = v10[40]; /*0x458bed*/
        v30 = v10[41]; /*0x458bf9*/
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v10 + 216))(v10, &v28, 0) ) /*0x458c01*/
          (*(void (__thiscall **)(_DWORD *))(*v10 + 248))(v10); /*0x458c0f*/
      }
      goto LABEL_28; /*0x458c16*/
    }
LABEL_2:
    v1 = v26; /*0x458ae6*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(#377 *, _DWORD *, int))(*(_DWORD *)v1 + 216))(v1, v37, v38) ) /*0x458c28*/
  {
    (*(void (__thiscall **)(#377 *))(*(_DWORD *)v1 + 248))(v1); /*0x458c3a*/
    for ( j = v35 - 1; j >= 0; --j ) /*0x458c49*/
    {
      v12 = (_DWORD *)*((_DWORD *)Block + j); /*0x458c50*/
      v28 = v12[39]; /*0x458c5f*/
      v29 = v12[40]; /*0x458c68*/
      v30 = v12[41]; /*0x458c6f*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, _DWORD))(*v12 + 216))(v12, &v28, 0) ) /*0x458c7a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x458c88*/
    }
LABEL_28:
    result = (int)Block; /*0x458c91*/
    v35 = 0; /*0x458c95*/
    if ( Block && BYTE1(v34) ) /*0x458ca1*/
      __3_YAXPAX_Z(Block); /*0x458ca4*/
    LOBYTE(result) = 0; /*0x458caf*/
    return result; /*0x458cb5*/
  }
  for ( k = v35 - 1; k >= 0; --k ) /*0x458cc1*/
  {
    v15 = (int *)*((_DWORD *)Block + k); /*0x458cd9*/
    v40 = *(_DWORD *)(*(int (__thiscall **)(int *, int *, int *, int))(*v15 + 440))(v15, &v25, v21, v22); /*0x458cfb*/
    v16 = *v15; /*0x458cff*/
    v39 = 0; /*0x458d07*/
    v17 = (*(int (__thiscall **)(int *))(v16 + 132))(v15); /*0x458d11*/
    v29 = *LayerClass::Pathfinding_Find( /*0x458d38*/
             &MEMORY[0x87F7E8],
             (int)&v40,
             &v26,
             (__int16 *)&v40,
             *(_DWORD *)(v17 + 1660),
             -1,
             0,
             0,
             1,
             1,
             0,
             0,
             0,
             1,
             (__int16 *)&v39,
             0,
             0);
    v18 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x458d42*/
    v22 = 0; /*0x458d4d*/
    v19 = *v18; /*0x458d4e*/
    v21 = &v30; /*0x458d50*/
    v28 = *v15; /*0x458d53*/
    v20 = (*(int (__thiscall **)(int *))(v19 + 72))(v18); /*0x458d57*/
    if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(v27 + 216))(v15, v20) ) /*0x458d61*/
      (*(void (__thiscall **)(int *))(*v15 + 248))(v15); /*0x458d6f*/
  }
  result = (int)Block; /*0x458d7e*/
  v31 = &vt_VectorClass_TechnoClass; /*0x458d82*/
  if ( Block && BYTE1(v34) ) /*0x458d92*/
    __3_YAXPAX_Z(Block); /*0x458d95*/
  LOBYTE(result) = 1; /*0x458da0*/
  return result; /*0x458cac*/
}


// ==== 0x00458DB0  BuildingClass::HasActiveParam  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::HasActiveParam(#377 *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(#377 *))(this->turretChargeTimer)(this); /*0x458db5*/
  if ( !(_BYTE)result ) /*0x458dbd*/
    return TechnoClass::HasActiveParam(this); /*0x458dc5*/
  LOBYTE(result) = 1; /*0x458dbf*/
  return result; /*0x458dc1*/
}


// ==== 0x00458DD0  BuildingClass::CheckMissionGuard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt256(#377 *this)
{
  int v1; // eax

  v1 = this->gattlingValue; /*0x458dd0*/
  return *(_BYTE *)(v1 + 5499) /*0x458dfb*/
      && *(_BYTE *)(v1 + 5500)
      && (*(int (__thiscall **)(#377 *))(this->q408)(this) > 0;
}


// ==== 0x00458E00  BuildingClass::CheckMissionAttack  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt257(#377 *this)
{
  int FoundationHeight; // edi

  FoundationHeight = BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0); /*0x458e17*/
  if ( BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) >= FoundationHeight ) /*0x458e20*/
    return BuildingTypeClass::GetFoundationHeight(this->gattlingValue, 0) / 2; /*0x458e46*/
  else
    return BuildingTypeClass::GetFoundationWidth(*((_DWORD **)this + 328)) / 2; /*0x458e31*/
}


// ==== 0x00458E50  BuildingClass::UpdateBunker  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::UpdateBunker(IUnknown *this)
{
  IUnknown *Member; // ebp
  int v3; // eax
  IUnknown *v4; // eax
  _DWORD *v5; // eax
  _WORD *v6; // ebx
  _DWORD *v7; // eax
  IUnknown *ClosestObjectCell; // eax
  IUnknown *v9; // edi
  int v10; // ebx
  int v11; // eax
  _WORD *v12; // edi
  int v13; // ebx
  _DWORD *v14; // eax
  int v15; // edi
  int *v16; // eax
  double v17; // st7
  int v18; // eax
  int *v19; // eax
  int v20; // edi
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // eax
  int v25; // edx
  int v26; // ecx
  _BYTE *v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  int v31; // ecx
  int *v32; // esi
  __int128 aP0; // [esp+10h] [ebp-98h]
  char v35; // [esp+33h] [ebp-75h]
  int v36; // [esp+34h] [ebp-74h]
  int var74a; // [esp+34h] [ebp-74h]
  ParticleSystemClass *v37; // [esp+38h] [ebp-70h]
  _WORD *v39; // [esp+3Ch] [ebp-6Ch]
  int v40; // [esp+3Ch] [ebp-6Ch]
  DirStruct v41; // [esp+3Ch] [ebp-6Ch]
  ParticleSystemClass *v42; // [esp+40h] [ebp-68h] BYREF
  int v43; // [esp+44h] [ebp-64h] BYREF
  DirStruct desiredFacing; // [esp+48h] [ebp-60h] BYREF
  DirStruct v45; // [esp+4Ch] [ebp-5Ch] BYREF
  int v46; // [esp+50h] [ebp-58h] BYREF
  int var54; // [esp+54h] [ebp-54h] BYREF
  AbstractClass *v47; // [esp+58h] [ebp-50h] BYREF
  _DWORD v49[2]; // [esp+5Ch] [ebp-4Ch] BYREF
  _DWORD v50[2]; // [esp+64h] [ebp-44h] BYREF
  int v51[3]; // [esp+6Ch] [ebp-3Ch] BYREF
  _BYTE v52[8]; // [esp+78h] [ebp-30h] BYREF
  int v53; // [esp+80h] [ebp-28h]
  _BYTE v54[12]; // [esp+84h] [ebp-24h] BYREF
  _BYTE v55[12]; // [esp+90h] [ebp-18h] BYREF
  _BYTE v56[12]; // [esp+9Ch] [ebp-Ch] BYREF

  Member = *(IUnknown **)&this->__pad_2B8[44]; /*0x458e5b*/
  if ( (Member || (Member = (IUnknown *)Team::GetMember(this, 0)) != 0) /*0x458e7c*/
    && (*(int (__thiscall **)(IUnknown *))(Member->field_0 + 44))(Member) == 1 )
  {
    v4 = (IUnknown *)this->field_718; /*0x458e99*/
    switch ( (unsigned int)v4 ) /*0x458ea8*/
    {
      case 0u: /*0x458ea8*/
        v5 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(Member->field_0 + 444))(Member); /*0x458eb4*/
        v4 = (IUnknown *)Cell::IsBridge(v5); /*0x458ebc*/
        if ( v4 == this ) /*0x458ec3*/
        {
          if ( !*(_DWORD *)&Member->__pad_524[336] ) /*0x458ec9*/
            WinAPI::Wrapper(-2147467261); /*0x458ed6*/
          LOBYTE(v4) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)&Member->__pad_524[336] + 16))(*(_DWORD *)&Member->__pad_524[336]); /*0x458ee4*/
          if ( !(_BYTE)v4 ) /*0x458ee9*/
          {
            v6 = (_WORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 264))(this, 0); /*0x458efe*/
            v39 = v6; /*0x458f05*/
            v36 = *(_DWORD *)(*(int (__thiscall **)(IUnknown *, int *))(this->field_0 + 440))(this, &v46); /*0x458f11*/
            while ( 1 ) /*0x458f15*/
            {
              LOWORD(v4) = *v6; /*0x458f15*/
              if ( *v6 == 0x7FFF && v6[1] == 0x7FFF ) /*0x458f22*/
                break; /*0x458f22*/
              LOWORD(v37) = v36 + (_WORD)v4; /*0x458f3b*/
              HIWORD(v37) = HIWORD(v36) + v6[1]; /*0x458f40*/
              v42 = v37; /*0x458f4f*/
              v7 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v42); /*0x458f53*/
              v49[0] = 128; /*0x458f62*/
              v49[1] = 128; /*0x458f66*/
              ClosestObjectCell = (IUnknown *)Object::FindClosestObjectCell(v7, (IUnknown *)v49, 0, this); /*0x458f6f*/
              v9 = ClosestObjectCell; /*0x458f74*/
              if ( ClosestObjectCell && ClosestObjectCell != Member ) /*0x458f7c*/
              {
                v10 = ClosestObjectCell->field_0; /*0x458f80*/
                v11 = (*(int (__thiscall **)(IUnknown *, _BYTE *, int, _DWORD))(this->field_0 + 72))(this, v54, 1, 0); /*0x458f8d*/
                (*(void (__thiscall **)(IUnknown *, int))(v10 + 372))(v9, v11); /*0x458f93*/
                v6 = v39; /*0x458f99*/
              }
              v6 += 2; /*0x458f9d*/
              v39 = v6; /*0x458fa0*/
            }
            goto LABEL_25; /*0x458f22*/
          }
        }
        break; /*0x458fa4*/
      case 1u: /*0x458ea8*/
        v35 = 0; /*0x458fae*/
        v12 = (_WORD *)(*(int (__thiscall **)(IUnknown *, _DWORD))(this->field_0 + 264))(this, 0); /*0x458fbd*/
        v13 = *(_DWORD *)(*(int (__thiscall **)(IUnknown *, int *))(this->field_0 + 440))(this, &var54); /*0x458fca*/
        while ( *v12 != 0x7FFF || v12[1] != 0x7FFF ) /*0x458fdd*/
        {
          LOWORD(v40) = v13 + *v12; /*0x458fee*/
          HIWORD(v40) = HIWORD(v13) + v12[1]; /*0x458ff4*/
          v43 = v40; /*0x459002*/
          v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v43); /*0x459006*/
          v50[0] = 128; /*0x459015*/
          v50[1] = 128; /*0x459019*/
          v4 = (IUnknown *)Object::FindClosestObjectCell(v14, (IUnknown *)v50, 0, this); /*0x459022*/
          if ( v4 ) /*0x459029*/
          {
            if ( v4 != Member ) /*0x45902d*/
            {
              v35 = 1; /*0x459032*/
              if ( (v4->__pad_10[4] & 4) != 0 && !*(_DWORD *)&v4->__pad_524[128] ) /*0x459044*/
              {
LABEL_25:
                this->field_718 = 1; /*0x45904b*/
                return (char)v4; /*0x45905c*/
              }
            }
          }
          v12 += 2; /*0x459046*/
        }
        LOBYTE(v4) = v35; /*0x45905d*/
        if ( !v35 ) /*0x459063*/
        {
          v15 = (*(int (__thiscall **)(IUnknown *, _BYTE *))(Member->field_0 + 72))(Member, v55); /*0x459078*/
          v16 = (int *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v52); /*0x459081*/
          v41 = *(DirStruct *)v15; /*0x459088*/
          *((double *)&aP0 + 1) = (double)*(int *)v15 - (double)*v16; /*0x45909e*/
          *(double *)&aP0 = (double)v16[1] - (double)*(int *)(v15 + 4); /*0x4590a8*/
          v17 = Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x4590ab*/
          v41.Value = Math::RoundToInt((v17 - 1.570796326794897) * -10430.06004058427) + 0x7FFF; /*0x4590d6*/
          desiredFacing = v41; /*0x4590df*/
          LOBYTE(v4) = FacingClass::Update((FacingClass *)&Member->__pad_2B8[208], &desiredFacing); /*0x4590ea*/
          this->field_718 = 2; /*0x4590ef*/
        }
        break; /*0x459100*/
      case 2u: /*0x458ea8*/
        LOBYTE(v4) = TimerClass::Active((int)&Member->__pad_2B8[208]); /*0x459109*/
        if ( !(_BYTE)v4 ) /*0x459110*/
        {
          v18 = ((unsigned __int16)(*ProgressTimer::GetValue(&Member->__pad_2B8[208], (IUnknown *)&v47) >> 7) + 1) /*0x459128*/
              & 0x1FE;
          if ( v18 == 64 ) /*0x459130*/
          {
            var74a = 67; /*0x459132*/
          }
          else if ( v18 == 448 ) /*0x459141*/
          {
            var74a = 70; /*0x459143*/
          }
          else
          {
            var74a = 68; /*0x459152*/
            if ( v18 != 192 ) /*0x45915a*/
              var74a = 69; /*0x45915c*/
          }
          v19 = (int *)(*(int (__thiscall **)(IUnknown *, _BYTE *))(this->field_0 + 72))(this, v56); /*0x45916d*/
          v20 = *v19; /*0x459170*/
          v21 = v19[1]; /*0x459172*/
          v22 = v19[2]; /*0x459175*/
          v23 = *(_DWORD *)&Member->__pad_524[336]; /*0x459178*/
          v53 = v22; /*0x459180*/
          if ( !v23 ) /*0x459184*/
            WinAPI::Wrapper(-2147467261); /*0x45918b*/
          (*(void (__stdcall **)(_DWORD, int, int, int, int))(**(_DWORD **)&Member->__pad_524[336] + 112))( /*0x4591af*/
            *(_DWORD *)&Member->__pad_524[336],
            var74a,
            v20,
            v21,
            v53);
          LOBYTE(v4) = (*(int (__thiscall **)(IUnknown *, _DWORD, int))(Member->field_0 + 1348))(Member, 0, 1072693248); /*0x4591be*/
          this->field_718 = 3; /*0x4591c4*/
        }
        break; /*0x4591d5*/
      case 3u: /*0x458ea8*/
        v24 = (_DWORD *)(*(int (__thiscall **)(IUnknown *))(Member->field_0 + 444))(Member); /*0x4591db*/
        v4 = (IUnknown *)Cell::IsBridge(v24); /*0x4591e3*/
        if ( v4 == this ) /*0x4591ea*/
        {
          if ( !*(_DWORD *)&Member->__pad_524[336] ) /*0x4591f0*/
            WinAPI::Wrapper(-2147467261); /*0x4591fd*/
          LOBYTE(v4) = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)&Member->__pad_524[336] + 16))(*(_DWORD *)&Member->__pad_524[336]); /*0x45920b*/
          if ( !(_BYTE)v4 ) /*0x459210*/
          {
            v45.Value = 0x8000; /*0x459221*/
            LOBYTE(v4) = FacingClass::Update((FacingClass *)&Member->__pad_2B8[208], &v45); /*0x459228*/
            this->field_718 = 4; /*0x45922d*/
          }
        }
        break; /*0x45923e*/
      case 4u: /*0x458ea8*/
        LOBYTE(v4) = TimerClass::Active((int)&Member->__pad_2B8[208]); /*0x459245*/
        if ( !(_BYTE)v4 ) /*0x45924c*/
        {
          if ( BuildingClass::GetHealthRatio(&this->field_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x459269*/
                                                                         + 5888) )
          {
            v26 = 0; /*0x459283*/
            v27 = (_BYTE *)(this->field_520 + 4596); /*0x459285*/
          }
          else
          {
            v26 = 1; /*0x459271*/
            v27 = (_BYTE *)(this->field_520 + 4612); /*0x459276*/
          }
          if ( v27 && *v27 ) /*0x45928e*/
            BuildingClass::PlayAnim((ObjectClass *)this, v25, v27, (IUnknown *)0xA, (IUnknown *)v26, 0, 0); /*0x45929b*/
          if ( BuildingClass::GetHealthRatio(&this->field_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] /*0x4592b8*/
                                                                         + 5888) )
          {
            v29 = 0; /*0x4592d2*/
            v4 = (IUnknown *)(this->field_520 + 4664); /*0x4592d4*/
          }
          else
          {
            v29 = 1; /*0x4592c0*/
            v4 = (IUnknown *)(this->field_520 + 4680); /*0x4592c5*/
          }
          if ( v4 && LOBYTE(v4->field_0) ) /*0x4592dd*/
            LOBYTE(v4) = BuildingClass::PlayAnim((ObjectClass *)this, v28, v4, (IUnknown *)0xB, (IUnknown *)v29, 0, 0); /*0x4592ea*/
          this->field_718 = 5; /*0x4592ef*/
        }
        break; /*0x459300*/
      case 5u: /*0x458ea8*/
        *(_DWORD *)&this->__pad_2B8[44] = Member; /*0x459301*/
        v30 = Member->field_0; /*0x459307*/
        *(_DWORD *)&Member->__pad_2B8[44] = this; /*0x45930f*/
        *(_DWORD *)&Member->__pad_1D8[60] = -1; /*0x459315*/
        (*(void (__thiscall **)(IUnknown *))(v30 + 336))(Member); /*0x45931b*/
        v31 = *(_DWORD *)&this->__pad_2B8[44]; /*0x459321*/
        this->field_718 = 6; /*0x459327*/
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v31 + 488))(v31, 5, 1); /*0x459337*/
        LOBYTE(v4) = stru_87C374.__pad_579C[22224]; /*0x45933d*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 576) != -1 ) /*0x459348*/
        {
          v32 = &this->field_9C; /*0x45934a*/
          v51[0] = *v32; /*0x459353*/
          v51[1] = v32[1]; /*0x45935a*/
          v51[2] = v32[2]; /*0x459365*/
          LOBYTE(v4) = StartAudioControllerAt( /*0x45936f*/
                         *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 576),
                         (int)v51,
                         0);
        }
        break; /*0x45936f*/
      default:
        return (char)v4;
    }
  }
  else
  {
    v3 = this->field_0; /*0x458e7e*/
    this->field_718 = 0; /*0x458e85*/
    LOBYTE(v4) = (*(char (__thiscall **)(IUnknown *, int, _DWORD))(v3 + 488))(this, 5, 0); /*0x458e8b*/
  }
  return (char)v4; /*0x458e91*/
}


// ==== 0x004593A0  BuildingClass::RemoveLimpet  this=IUnknown  sig=csp ====
void __thiscall BuildingClass_RemoveLimpet(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+18h] [ebp-4h]

  v2 = (_DWORD *)this->q0B9; /*0x4593a9*/
  if ( v2 && (*(int (__thiscall **)(_DWORD))(*v2 + 44))(this->q0B9) == 1 ) /*0x4593c1*/
  {
    if ( !v2[413] ) /*0x4593c7*/
      WinAPI::Wrapper(-2147467261); /*0x4593d6*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2[413] + 88))(v2[413]); /*0x4593e4*/
    v3 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 72))(this, &v11); /*0x4593f0*/
    v4 = *v3; /*0x4593f3*/
    v5 = v3[1]; /*0x4593f5*/
    v6 = v3[2]; /*0x4593f8*/
    v7 = v2[413]; /*0x4593fb*/
    v8 = v4 - 128; /*0x459401*/
    v9 = v5 + 128; /*0x459407*/
    v12 = v6; /*0x45940f*/
    if ( !v7 ) /*0x459413*/
      WinAPI::Wrapper(-2147467261); /*0x45941a*/
    (*(void (__stdcall **)(_DWORD, int, int, int, int))(*(_DWORD *)v2[413] + 112))(v2[413], 71, v8, v9, v12); /*0x45943b*/
    (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v2 + 1348))(v2, 0, 1072693248); /*0x45944a*/
    v2[185] = 0; /*0x459450*/
    v10 = *this; /*0x459456*/
    this->q0B9 = 0; /*0x45945c*/
    (*(void (__thiscall **)(_DWORD *, int))(v10 + 628))(this, 3); /*0x459462*/
  }
}


// ==== 0x00459470  BuildingClass::UpdateDamageAnim  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::UpdateDamageAnim(int *this)
{
  int result; // eax
  int v3; // ecx
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // edx
  int v9[3]; // [esp+4h] [ebp-Ch] BYREF

  BuildingClass::ClearAnims(this, (TechnoClass *)0xA); /*0x459478*/
  BuildingClass::ClearAnims(this, (TechnoClass *)0xB); /*0x459481*/
  result = this->alignmentPaddingB9; /*0x459486*/
  if ( result ) /*0x45948e*/
  {
    if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 580) != -1 ) /*0x4594a0*/
    {
      v9[0] = this->q027; /*0x4594ac*/
      v9[1] = this->owningHouseIndex; /*0x4594b3*/
      v9[2] = this->q029; /*0x4594be*/
      StartAudioControllerAt(*(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 580), (int)v9, 0); /*0x4594c8*/
    }
    if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x4594e5*/
    {
      v3 = 0; /*0x4594ff*/
      v4 = (_BYTE *)(this->gattlingValue + 4732); /*0x459501*/
    }
    else
    {
      v3 = 1; /*0x4594ed*/
      v4 = (_BYTE *)(this->gattlingValue + 4748); /*0x4594f2*/
    }
    if ( v4 && *v4 ) /*0x45950a*/
      BuildingClass::PlayAnim( /*0x459519*/
        (ObjectClass *)this,
        *(int *)&stru_87C374.__pad_579C[22224],
        v4,
        (IUnknown *)0xC,
        (IUnknown *)v3,
        0,
        0);
    if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x459535*/
    {
      v6 = 0; /*0x45954f*/
      v7 = (_BYTE *)(this->gattlingValue + 4800); /*0x459551*/
    }
    else
    {
      v6 = 1; /*0x45953d*/
      v7 = (_BYTE *)(this->gattlingValue + 4816); /*0x459542*/
    }
    if ( v7 ) /*0x459558*/
    {
      if ( *v7 ) /*0x45955a*/
        BuildingClass::PlayAnim((ObjectClass *)this, v5, v7, (IUnknown *)0xD, (IUnknown *)v6, 0, 0); /*0x459569*/
    }
    (*(void (__thiscall **)(int *, int))(*this + 628))(this, 3); /*0x459574*/
    *(_DWORD *)(this->alignmentPaddingB9 + 740) = 0; /*0x459586*/
    v8 = *this; /*0x459590*/
    this->alignmentPaddingB9 = 0; /*0x459592*/
    this->BunkerState = 0; /*0x45959c*/
    return (*(int (__thiscall **)(int *, int, _DWORD))(v8 + 488))(this, 5, 0); /*0x4595a6*/
  }
  return result; /*0x4595ac*/
}


// ==== 0x004595C0  BuildingClass::EmptyBunker  this=IUnknown  sig=csp ====
int __thiscall BuildingClass::EmptyBunker(ObjectClass *this)
{
  int v2; // ecx
  _BYTE *v3; // eax
  int v4; // edx
  int v5; // ecx
  _BYTE *v6; // eax
  _DWORD *v7; // esi
  int v8; // edx
  int result; // eax
  int *v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // ecx
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  __int16 *v17; // eax
  __int16 v18; // dx
  int v19; // eax
  int v20; // eax
  __int16 *v21; // eax
  void *v22; // eax
  int v23; // edx
  int v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+30h] [ebp-10h] BYREF
  int v27; // [esp+34h] [ebp-Ch] BYREF
  int v28; // [esp+38h] [ebp-8h] BYREF
  int v29; // [esp+3Ch] [ebp-4h]

  BuildingClass::ClearAnims((int *)this->__pad_0, (TechnoClass *)0xA); /*0x4595cb*/
  BuildingClass::ClearAnims((int *)this->__pad_0, (TechnoClass *)0xB); /*0x4595d4*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 580) != -1 ) /*0x4595e5*/
  {
    v27 = this->location[0]; /*0x4595f1*/
    v28 = this->location[1]; /*0x4595f8*/
    v29 = this->location[2]; /*0x459603*/
    StartAudioControllerAt(*(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 580), (int)&v27, 0); /*0x45960d*/
  }
  if ( BuildingClass::GetHealthRatio((int *)this->__pad_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45962a*/
  {
    v2 = 0; /*0x459644*/
    v3 = (_BYTE *)(this->q520 + 4732); /*0x459646*/
  }
  else
  {
    v2 = 1; /*0x459632*/
    v3 = (_BYTE *)(this->q520 + 4748); /*0x459637*/
  }
  if ( v3 && *v3 ) /*0x459651*/
    BuildingClass::PlayAnim(this, *(int *)&stru_87C374.__pad_579C[22224], v3, (IUnknown *)0xC, (IUnknown *)v2, 0, 0); /*0x45965e*/
  if ( BuildingClass::GetHealthRatio((int *)this->__pad_0) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x45967a*/
  {
    v5 = 0; /*0x459694*/
    v6 = (_BYTE *)(this->q520 + 4800); /*0x459696*/
  }
  else
  {
    v5 = 1; /*0x459682*/
    v6 = (_BYTE *)(this->q520 + 4816); /*0x459687*/
  }
  if ( v6 && *v6 ) /*0x45969f*/
    BuildingClass::PlayAnim(this, v4, v6, (IUnknown *)0xD, (IUnknown *)v5, 0, 0); /*0x4596ac*/
  v7 = (_DWORD *)this->q0B9; /*0x4596b1*/
  if ( v7 ) /*0x4596b9*/
  {
    result = (*(int (__thiscall **)(_DWORD))(*v7 + 44))(this->q0B9); /*0x4596da*/
    if ( result == 1 ) /*0x4596e0*/
    {
      v7[185] = 0; /*0x4596e6*/
      if ( !v7[413] ) /*0x4596ec*/
        WinAPI::Wrapper(-2147467261); /*0x4596fb*/
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7[413] + 88))(v7[413]); /*0x459709*/
      v10 = (int *)(*(int (__thiscall **)(ObjectClass *, int *))(*(_DWORD *)this->__pad_0 + 72))(this, &v27); /*0x459715*/
      v11 = *v10; /*0x459718*/
      v12 = v10[1]; /*0x45971a*/
      v13 = v10[2]; /*0x45971d*/
      v14 = v7[413]; /*0x459720*/
      v15 = v11 - 128; /*0x459726*/
      v16 = v12 + 128; /*0x45972c*/
      v29 = v13; /*0x459734*/
      if ( !v14 ) /*0x459738*/
        WinAPI::Wrapper(-2147467261); /*0x45973f*/
      (*(void (__stdcall **)(_DWORD, int, int, int, int, int, int))(*(_DWORD *)v7[413] + 112))( /*0x459760*/
        v7[413],
        71,
        v15,
        v16,
        v29,
        v24,
        v25);
      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v7 + 1348))(v7, 0, 1072693248); /*0x45976f*/
      v17 = (__int16 *)(*(int (__thiscall **)(ObjectClass *, int *))(*(_DWORD *)this->__pad_0 + 440))(this, &v28); /*0x45977e*/
      v18 = *v17; /*0x459784*/
      LOWORD(v17) = v17[1] + 1; /*0x45978d*/
      LOWORD(v26) = v18 - 1; /*0x45978f*/
      HIWORD(v26) = (_WORD)v17; /*0x459794*/
      v27 = v26; /*0x4597aa*/
      v19 = *v7; /*0x4597b5*/
      v26 = 0; /*0x4597bd*/
      v20 = (*(int (__thiscall **)(_DWORD *))(v19 + 132))(v7); /*0x4597c7*/
      v21 = (__int16 *)LayerClass::Pathfinding_Find( /*0x4597e3*/
                         (IUnknown *)&stru_87C374.__pad_14B0[8132],
                         (IUnknown *)&v27,
                         (IUnknown *)&v28,
                         (IUnknown *)&v27,
                         *(IUnknown **)(v20 + 1660),
                         (IUnknown *)0xFFFFFFFF,
                         0,
                         0,
                         (IUnknown *)1,
                         (IUnknown *)1,
                         0,
                         0,
                         0,
                         (IUnknown *)1,
                         (IUnknown *)&v26,
                         0,
                         0);
      v22 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v21); /*0x4597ee*/
      (*(void (__thiscall **)(_DWORD *, void *, int))(*v7 + 1152))(v7, v22, 1); /*0x4597fa*/
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 488))(v7, 2, 0); /*0x459807*/
      v23 = *(_DWORD *)this->__pad_0; /*0x45980d*/
      this->q0B9 = 0; /*0x459814*/
      this->q718 = 0; /*0x45981a*/
      (*(void (__thiscall **)(ObjectClass *, int, _DWORD))(v23 + 488))(this, 5, 0); /*0x459820*/
      return (*(int (__thiscall **)(ObjectClass *, int))(*(_DWORD *)this->__pad_0 + 628))(this, 3); /*0x45982c*/
    }
  }
  else
  {
    v8 = *(_DWORD *)this->__pad_0; /*0x4596bb*/
    this->q718 = 0; /*0x4596c2*/
    return (*(int (__thiscall **)(ObjectClass *, int, _DWORD))(v8 + 488))(this, 5, 0); /*0x4596c8*/
  }
  return result; /*0x4596ce*/
}


// ==== 0x00459840  HouseClass::GetRepairStepAmount  this=HouseClass  sig=csp ====
int __thiscall sub_459840(_DWORD *this)
{
  _DWORD *v1; // edx
  int result; // eax

  v1 = (_DWORD *)this->q520; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->q6F4; /*0x459864*/
    }
  }
  return result; /*0x45986a*/
}


// ==== 0x00459870  BuildingClass::MissionStubReturnZero  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt181(#377 *this)
{
  return *(_DWORD *)(this->gattlingValue + 5412); /*0x45987c*/
}


// ==== 0x00459880  BuildingClass::MissionStubReturnZero2  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt182(#377 *this)
{
  return *(_DWORD *)(this->gattlingValue + 5416); /*0x45988c*/
}


// ==== 0x00459890  BuildingClass::MissionStubReturnZero3  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt183(#377 *this)
{
  return *(_DWORD *)(this->gattlingValue + 5420); /*0x45989c*/
}


// ==== 0x004598A0  InfantryClass::updateDeployAnimation  this=IUnknown  sig=csp ====
BOOL __thiscall InfantryClass::updateDeployAnimation(_DWORD *this)
{
  int v1; // eax

  v1 = this->q520; /*0x4598a0*/
  return *(_BYTE *)(v1 + 5806) || *(_BYTE *)(v1 + 5807); /*0x4598bc*/
}


// ==== 0x00459900  BuildingClass::SpawnParticles  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::SpawnParticles(#377 *this)
{
  BuildingTypeClass *result; // eax
  IUnknown *v3; // ebp
  BuildingTypeClass *v4; // ecx
  BuildingTypeClass *v5; // edx
  int v6; // eax
  int v7; // ebx
  char *v8; // edi
  ParticleSystemClass *v9; // eax
  BuildingTypeClass **v10; // edx
  BuildingTypeClass *v11; // ecx
  BuildingTypeClass *v12; // edx
  int v13; // eax
  int v14; // ebx
  char *v15; // edi
  ParticleSystemClass *v16; // eax
  BuildingTypeClass **v17; // edx
  BuildingTypeClass *v18; // ecx
  BuildingTypeClass *v19; // edx
  int v20; // eax
  int v21; // ebx
  char *v22; // edi
  ParticleSystemClass *v23; // eax
  int v24; // edx
  BuildingTypeClass *v25; // ecx
  BuildingTypeClass *v26; // edx
  int v27; // eax
  int v28; // ebx
  char *v29; // edi
  ParticleSystemClass *v30; // eax
  ParticleSystemClass *aP1; // [esp+10h] [ebp-1Ch]
  BuildingTypeClass *v32; // [esp+14h] [ebp-18h] BYREF
  BuildingTypeClass *v33; // [esp+18h] [ebp-14h]
  BuildingTypeClass *v34; // [esp+1Ch] [ebp-10h]
  char *v35; // [esp+20h] [ebp-Ch] BYREF
  char *v36; // [esp+24h] [ebp-8h]
  char *v37; // [esp+28h] [ebp-4h]

  result = (BuildingTypeClass *)this->gattlingValue; /*0x459909*/
  v3 = *(IUnknown **)&result->DebrisTypes[1120]; /*0x45990f*/
  if ( v3 ) /*0x459917*/
  {
    aP1 = (ParticleSystemClass *)result->RefinerySmokeFrames; /*0x459930*/
    v32 = *(BuildingTypeClass **)&result->DebrisTypes[1208]; /*0x459936*/
    v4 = *(BuildingTypeClass **)&result->DebrisTypes[1212]; /*0x45993c*/
    v33 = v4; /*0x45993f*/
    v5 = *(BuildingTypeClass **)&result->DebrisTypes[1216]; /*0x459943*/
    v34 = v5; /*0x459946*/
    if ( (v32 != (BuildingTypeClass *)aP5.field_0 /*0x459965*/
       || v4 != (BuildingTypeClass *)unk_89C84C
       || v5 != (BuildingTypeClass *)unk_89C850)
      && !Coord3D::Equals(&v32, (BuildingClass *)&unk_89C870) )
    {
      v6 = __2_YAPAXI_Z(0x100u); /*0x459973*/
      if ( v6 ) /*0x45997d*/
      {
        v7 = this->q029; /*0x459994*/
        v8 = &v33->vtable0[this->owningHouseIndex]; /*0x4599a1*/
        v35 = &v32->vtable0[this->q027]; /*0x4599a7*/
        v36 = v8; /*0x4599b5*/
        v37 = &v34->vtable0[v7]; /*0x4599b9*/
        v9 = ParticleSystemClass::Constructor(v6, v3, (IUnknown *)&v35, 0, (IUnknown *)this, &aP5, 0); /*0x4599bd*/
      }
      else
      {
        v9 = 0; /*0x4599c4*/
      }
      ObjectClass::SetMember59(v9, aP1); /*0x4599cd*/
    }
    v10 = (BuildingTypeClass **)(this->gattlingValue + 2008); /*0x4599de*/
    v32 = *v10; /*0x4599e6*/
    v11 = v10[1]; /*0x4599ec*/
    v33 = v11; /*0x4599ef*/
    v12 = v10[2]; /*0x4599f3*/
    v34 = v12; /*0x4599f6*/
    if ( (v32 != (BuildingTypeClass *)aP5.field_0 /*0x459a15*/
       || v11 != (BuildingTypeClass *)unk_89C84C
       || v12 != (BuildingTypeClass *)unk_89C850)
      && !Coord3D::Equals(&v32, (BuildingClass *)&unk_89C870) )
    {
      v13 = __2_YAPAXI_Z(0x100u); /*0x459a23*/
      if ( v13 ) /*0x459a2d*/
      {
        v14 = this->q029; /*0x459a44*/
        v15 = &v33->vtable0[this->owningHouseIndex]; /*0x459a51*/
        v35 = &v32->vtable0[this->q027]; /*0x459a57*/
        v36 = v15; /*0x459a65*/
        v37 = &v34->vtable0[v14]; /*0x459a69*/
        v16 = ParticleSystemClass::Constructor(v13, v3, (IUnknown *)&v35, 0, (IUnknown *)this, &aP5, 0); /*0x459a6d*/
      }
      else
      {
        v16 = 0; /*0x459a74*/
      }
      ObjectClass::SetMember59(v16, aP1); /*0x459a7d*/
    }
    v17 = (BuildingTypeClass **)(this->gattlingValue + 2020); /*0x459a8e*/
    v32 = *v17; /*0x459a96*/
    v18 = v17[1]; /*0x459a9c*/
    v33 = v18; /*0x459a9f*/
    v19 = v17[2]; /*0x459aa3*/
    v34 = v19; /*0x459aa6*/
    if ( (v32 != (BuildingTypeClass *)aP5.field_0 /*0x459ac5*/
       || v18 != (BuildingTypeClass *)unk_89C84C
       || v19 != (BuildingTypeClass *)unk_89C850)
      && !Coord3D::Equals(&v32, (BuildingClass *)&unk_89C870) )
    {
      v20 = __2_YAPAXI_Z(0x100u); /*0x459ad3*/
      if ( v20 ) /*0x459add*/
      {
        v21 = this->q029; /*0x459af4*/
        v22 = &v33->vtable0[this->owningHouseIndex]; /*0x459b01*/
        v35 = &v32->vtable0[this->q027]; /*0x459b07*/
        v36 = v22; /*0x459b15*/
        v37 = &v34->vtable0[v21]; /*0x459b19*/
        v23 = ParticleSystemClass::Constructor(v20, v3, (IUnknown *)&v35, 0, (IUnknown *)this, &aP5, 0); /*0x459b1d*/
      }
      else
      {
        v23 = 0; /*0x459b24*/
      }
      ObjectClass::SetMember59(v23, aP1); /*0x459b2d*/
    }
    v24 = this->gattlingValue + 2032; /*0x459b3e*/
    result = *(BuildingTypeClass **)v24; /*0x459b44*/
    v32 = result; /*0x459b46*/
    v25 = *(BuildingTypeClass **)(v24 + 4); /*0x459b4c*/
    v33 = v25; /*0x459b4f*/
    v26 = *(BuildingTypeClass **)(v24 + 8); /*0x459b53*/
    v34 = v26; /*0x459b56*/
    if ( result != (BuildingTypeClass *)aP5.field_0 /*0x459b6a*/
      || v25 != (BuildingTypeClass *)unk_89C84C
      || v26 != (BuildingTypeClass *)unk_89C850 )
    {
      result = (BuildingTypeClass *)Coord3D::Equals(&v32, (BuildingClass *)&unk_89C870); /*0x459b79*/
      if ( !(_BYTE)result ) /*0x459b80*/
      {
        v27 = __2_YAPAXI_Z(0x100u); /*0x459b87*/
        if ( v27 ) /*0x459b91*/
        {
          v28 = this->q029; /*0x459ba8*/
          v29 = &v33->vtable0[this->owningHouseIndex]; /*0x459bb5*/
          v35 = &v32->vtable0[this->q027]; /*0x459bbb*/
          v36 = v29; /*0x459bc9*/
          v37 = &v34->vtable0[v28]; /*0x459bcd*/
          v30 = ParticleSystemClass::Constructor(v27, v3, (IUnknown *)&v35, 0, (IUnknown *)this, &aP5, 0); /*0x459bd1*/
          return ObjectClass::SetMember59(v30, aP1); /*0x459bdd*/
        }
        else
        {
          return ObjectClass::SetMember59(0, aP1); /*0x459bf3*/
        }
      }
    }
  }
  return (int)result->vtable0; /*0x459be2*/
}


// ==== 0x00459C00  BuildingClass::IsMassSelectable  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::IsMassSelectable(#377 *this)
{
  int result; // eax

  result = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(this->gattlingValue); /*0x459c09*/
  if ( (_BYTE)result ) /*0x459c10*/
    LOBYTE(result) = TechnoClass::CanMoveToCell(this); /*0x459c16*/
  return result; /*0x459c12*/
}


// ==== 0x00459C20  BuildingClass::ProcessUpgradeTargeting  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::_vt219(#377 *this)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax

  v2 = this->q086; /*0x459c23*/
  if ( v2 && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 11 )
  {
    v3 = this->q086; /*0x459c38*/
    v4 = v3 ? ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 44))(this->q086) == 11 ? v3 : 0) : 0;
    if ( *(_DWORD *)(v4 + 236) == 5 ) /*0x459c62*/
    {
      v5 = this->gattlingValue; /*0x459c64*/
      if ( *(_BYTE *)(v5 + 1517) ) /*0x459c6a*/
      {
        if ( *(_BYTE *)(v5 + 1516) ) /*0x459c74*/
        {
          v6 = *(_DWORD *)(v5 + 1404); /*0x459c7e*/
          if ( v6 != -1 ) /*0x459c87*/
            return (*(int (__thiscall **)(#377 *, int))(*(_DWORD *)this + 852))(this, v6); /*0x459c8e*/
        }
      }
    }
  }
  TechnoClass::PickAlternateTarget(this); /*0x459c98*/
  return result; /*0x459c94*/
}


// ==== 0x00459CA0  ObjectClass::ProcessDataCellClass  this=IUnknown  sig=csp ====
char __thiscall sub_459CA0(_DWORD *this)
{
  _WORD *v1; // esi
  int v2; // edi
  __int16 v3; // bx
  _WORD *v4; // eax
  __int16 v5; // dx
  void *v6; // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  v1 = *(_WORD **)(this->q520 + 3796); /*0x459cad*/
  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v9); /*0x459cbf*/
  v9 = v2; /*0x459cc3*/
  if ( v1 ) /*0x459cc7*/
  {
    v3 = HIWORD(v9); /*0x459ccd*/
    while ( *v1 != 0x7FFF || v1[1] != 0x7FFF ) /*0x459cdf*/
    {
      v4 = v1; /*0x459ce5*/
      v1 += 2; /*0x459cea*/
      v5 = v3 + v4[1]; /*0x459cf4*/
      LOWORD(v9) = *v4 + v2; /*0x459cf7*/
      HIWORD(v9) = v5; /*0x459d00*/
      v8 = v9; /*0x459d0f*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v8) /*0x459d2b*/
        && !*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8) + 57) )
      {
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8); /*0x459d4d*/
        if ( Cell::IsBuildable((int)v6, 0, 0, 0, -1, 0, -1, 1) ) /*0x459d54*/
          return 1; /*0x459d69*/
      }
    }
  }
  return 0; /*0x459d61*/
}


// ==== 0x00459D80  TechnoClass::StubReturnFalse  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459d80*/
  return result; /*0x459d82*/
}


// ==== 0x00459D90  TechnoClass::MissionStubReturnZero4  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt177(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 1; /*0x459d90*/
  return result; /*0x459d92*/
}


// ==== 0x00459DA0  TechnoClass::MissionStubReturnZero5  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt188(#377 *this)
{
  return 2; /*0x459da5*/
}


// ==== 0x00459DB0  TechnoClass::ClearLimpetCheck  this=TechnoClass  sig=csp ====
TechnoClass *__thiscall BuildingClass::ClearLimpetCheck(void *this)
{
  TechnoClass *v2; // [esp+4h] [ebp+4h]

  *(_DWORD *)v2->__pad_0 = dword_89C818; /*0x459dba*/
  return v2; /*0x459dbc*/
}


// ==== 0x00459DC0  TechnoClass::COMStub_Return0_190  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_190(#377 *this)
{
  int result; // eax

  return result; /*0x459dc0*/
}


// ==== 0x00459DD0  TechnoClass::StubReturnFalse2  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse2(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459dd0*/
  return result; /*0x459dd2*/
}


// ==== 0x00459DE0  TechnoClass::COMStub_Return0_205  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_205(#377 *this)
{
  int result; // eax

  return result; /*0x459de0*/
}


// ==== 0x00459DF0  TechnoClass::StubReturnFalse3  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse3(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459df0*/
  return result; /*0x459df2*/
}


// ==== 0x00459E00  TechnoClass::StubReturnFalse4  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::StubReturnFalse4(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e00*/
  return result; /*0x459e02*/
}


// ==== 0x00459E10  TechnoClass::StubReturnFalse10  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt209(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e10*/
  return result; /*0x459e12*/
}


// ==== 0x00459E20  TechnoClass::StubReturnFalse11  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt210(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e20*/
  return result; /*0x459e22*/
}


// ==== 0x00459E30  TechnoClass::StubReturnFalse12  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt211(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e30*/
  return result; /*0x459e32*/
}


// ==== 0x00459E40  TechnoClass::StubReturnFalse13  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt224(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e40*/
  return result; /*0x459e42*/
}


// ==== 0x00459E50  TechnoClass::StubReturnFalse14  this=TechnoClass  sig=csp ====
int __thiscall BuildingClass::_vt247(#377 *this)
{
  int result; // eax

  LOBYTE(result) = 0; /*0x459e50*/
  return result; /*0x459e52*/
}


// ==== 0x00459E60  TechnoClass::COMStub_Return0_270  this=TechnoClass  sig=csp ====
int __thiscall AbstractClass::COMStub_Return0_270(#377 *this)
{
  int result; // eax

  return result; /*0x459e60*/
}


// ==== 0x00459E70  BuildingClass::Mission_Guard  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Guard(#377 *this)
{
  return 1824; /*0x459e75*/
}


// ==== 0x00459E80  BuildingClass::Destroyed  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Destroyed(#377 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x459e86*/
    return -2147467261; /*0x459e88*/
  *v2 = 237448646; /*0x459e96*/
  v2[1] = 298949647; /*0x459e9e*/
  v2[2] = -1610610249; /*0x459ea7*/
  v2[3] = -777003740; /*0x459eb0*/
  return 0; /*0x459e8d*/
}


// ==== 0x00459EC0  BuildingClass::Mission_Construction  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::Mission_Construction(#377 *this)
{
  return 6; /*0x459ec5*/
}


// ==== 0x00459ED0  BuildingClass::GetTypeField60  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypeField60(#377 *this)
{
  return *(_DWORD *)(this->gattlingValue + 96); /*0x459ed9*/
}


// ==== 0x00459EE0  BuildingClass::GetTypePtr  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetTypePtr(#377 *this)
{
  return this->gattlingValue; /*0x459ee6*/
}


// ==== 0x00459EF0  BuildingClass::GetBuildCoordsAdjusted  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::GetBuildCoordsAdjusted(#377 *this)
{
  char *v1; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v6; // edx
  _DWORD *v7; // [esp+Ch] [ebp+4h]

  v1 = (char *)this + 156; /*0x459ef7*/
  v2 = this->q027; /*0x459efa*/
  v3 = this->owningHouseIndex; /*0x459efc*/
  v4 = v2 - 128; /*0x459eff*/
  v6 = *((_DWORD *)v1 + 2); /*0x459f09*/
  *v7 = v4; /*0x459f0e*/
  v7[1] = v3 - 128; /*0x459f10*/
  v7[2] = v6; /*0x459f13*/
  return (int)v7; /*0x459f16*/
}


// ==== 0x00459F20  BuildingClass::ScalarDtor  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ScalarDtor(#377 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  BuildingClass::Dtor((void **)this); /*0x459f23*/
  if ( (v3 & 1) != 0 ) /*0x459f2d*/
    __3_YAXPAX_Z(this); /*0x459f30*/
  return (int)this; /*0x459f3a*/
}


// ==== 0x00459F40  IsObjectTypeBuildingType  this=BuildingClass  sig=ida-proto ====
int __fastcall ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}


// ==== 0x00459F60  Coord3D::Equals  this=RecoilData  sig=csp ====
BOOL __thiscall Coord3D::Equals(_DWORD *this, BuildingClass *aP1)
{
  return *this == *(_DWORD *)aP1->__pad_0 /*0x459f84*/
      && *(this + 1) == *(_DWORD *)&aP1->__pad_0[4]
      && *(this + 2) == *(_DWORD *)&aP1->__pad_0[8];
}


// ==== 0x00459F90  _DynamicVectorClass_PBVParticleSystemTypeClass::GetClassIdentifier  this=DynamicVector  sig=csp ====
void __thiscall TypeList_cptr_ParticleSystemTypeClass::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x459f96*/
  *(_DWORD *)(this + 16) = 0; /*0x459f99*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x459fa0*/
  {
    __3_YAXPAX_Z(v2); /*0x459fa6*/
    *(_DWORD *)(this + 4) = 0; /*0x459fae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x459fb1*/
  *(_DWORD *)(this + 8) = 0; /*0x459fb4*/
}


// ==== 0x00459FC0  _DynamicVectorClass_PBVParticleSystemTypeClass::LoadTypeData  this=DynamicVector  sig=csp ====
unsigned int __thiscall TypeList_cptr_ParticleSystemTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x459fc0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x459fd5*/
  else
    return 0; /*0x459fc7*/
}


// ==== 0x00459FE0  _VectorClass_PBVParticleSystemTypeClass::GetIndex  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::GetIndex(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x459fea*/
}


// ==== 0x00459FF0  ?$DynamicVectorClass@PAVInfantryClass@@::initBuildingData  this=DynamicVector  sig=csp ====
void __thiscall BuildingClass::sub_459FF0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x459ff6*/
  *(_DWORD *)(this + 16) = 0; /*0x459ff9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x45a000*/
  {
    __3_YAXPAX_Z(v2); /*0x45a006*/
    *(_DWORD *)(this + 4) = 0; /*0x45a00e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a011*/
  *(_DWORD *)(this + 8) = 0; /*0x45a014*/
}


// ==== 0x0045A020  ?$DynamicVectorClass@PAVInfantryClass@@::updateFactoryProduction  this=DynamicVector  sig=csp ====
unsigned int __thiscall BuildingClass::sub_45A020(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a020*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a035*/
  else
    return 0; /*0x45a027*/
}


// ==== 0x0045A040  _VectorClass_PAVInfantryClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x45a04a*/
}


// ==== 0x0045A050  Stream::GetChecked  this=ILocomotion  sig=csp ====
int __thiscall Stream_GetChecked(void *this)
{
  if ( !*(_DWORD *)this ) /*0x45a053*/
    WinAPI::Wrapper(-2147467261); /*0x45a05d*/
  return *(_DWORD *)this; /*0x45a064*/
}


// ==== 0x0045A070  _DynamicVectorClass_PAVFoggedObjectClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::sub_45A070(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x45a076*/
  *(_DWORD *)(this + 16) = 0; /*0x45a079*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x45a080*/
  {
    __3_YAXPAX_Z(v2); /*0x45a086*/
    *(_DWORD *)(this + 4) = 0; /*0x45a08e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a091*/
  *(_DWORD *)(this + 8) = 0; /*0x45a094*/
}


// ==== 0x0045A0A0  _DynamicVectorClass_PAVFoggedObjectClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::sub_45A0A0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a0a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a0b5*/
  else
    return 0; /*0x45a0a7*/
}


// ==== 0x0045A0C0  _VectorClass_PAVFoggedObjectClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x45a0ca*/
}


// ==== 0x0045A0D0  _DynamicVectorClass_PAVReestablish::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::sub_45A0D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x45a0d6*/
  *(_DWORD *)(this + 16) = 0; /*0x45a0d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x45a0e0*/
  {
    __3_YAXPAX_Z(v2); /*0x45a0e6*/
    *(_DWORD *)(this + 4) = 0; /*0x45a0ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a0f1*/
  *(_DWORD *)(this + 8) = 0; /*0x45a0f4*/
}


// ==== 0x0045A100  _DynamicVectorClass_PAVReestablish::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::sub_45A100(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a100*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a115*/
  else
    return 0; /*0x45a107*/
}


// ==== 0x0045A120  _VectorClass_PAVReestablish::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x45a12a*/
}


// ==== 0x0045A130  Rect::Construct  this=IUnknown  sig=csp ====
AbstractClass *__thiscall Rect::Construct(_DWORD *this, IUnknown *aP1, AbstractClass *aP2, AbstractClass *aP3)
{
  *this = aP1->field_0; /*0x45a138*/
  this->q004 = aP1->field_4; /*0x45a141*/
  this->q008 = aP2; /*0x45a148*/
  this->q00C = aP3; /*0x45a14b*/
  return (AbstractClass *)this; /*0x45a14e*/
}


// ==== 0x0045A160  ObjectClass::Release2COM  this=ObjectClass  sig=csp ====
int __thiscall COM_Release2(int *this)
{
  int result; // eax

  result = *this; /*0x45a160*/
  if ( *this ) /*0x45a160*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x45a169*/
  return result; /*0x45a16c*/
}


// ==== 0x0045A170  CellClass::SetField2C  this=CellClass  sig=csp ====
int __thiscall CellClass::SetField2C(int *this)
{
  int result; // eax

  result = *this; /*0x45a170*/
  if ( *this ) /*0x45a170*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)result + 4))(result); /*0x45a179*/
  return result; /*0x45a17c*/
}


// ==== 0x0045A180  _VectorClass_PBVParticleSystemTypeClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x45a182*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x45a18d*/
  {
    v3 = 0; /*0x45a18f*/
    if ( v2 <= 0 ) /*0x45a193*/
      return 1; /*0x45a1b3*/
    v4 = (_DWORD *)this->Items; /*0x45a195*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a19b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a1a4*/
    {
      ++v3; /*0x45a1a6*/
      ++v4; /*0x45a1a7*/
      if ( v3 >= v2 ) /*0x45a1ac*/
        return 1; /*0x45a1ac*/
    }
  }
  return 0; /*0x45a1ae*/
}


// ==== 0x0045A1C0  _VectorClass_PBVParticleSystemTypeClass::Remove  this=VectorClass  sig=csp ====
char __thiscall TypeList_Particle::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a1cc*/
  {
    this->IsInitialized = 0; /*0x45a1d6*/
    if ( a3 ) /*0x45a1dc*/
      v4 = a3; /*0x45a1f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a1ee*/
    this->IsInitialized = 1; /*0x45a1f6*/
    if ( v4 ) /*0x45a1fa*/
    {
      if ( this->Items ) /*0x45a205*/
      {
        v6 = this->Capacity; /*0x45a20c*/
        if ( a2 < v6 ) /*0x45a211*/
          v6 = a2; /*0x45a213*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a219*/
          ++i; /*0x45a21e*/
        if ( this->IsAllocated ) /*0x45a22b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a236*/
          this->Items = 0; /*0x45a23e*/
        }
      }
      this->Items = v4; /*0x45a247*/
      this->Capacity = a2; /*0x45a24f*/
      this->IsAllocated = a3 == 0; /*0x45a252*/
      return 1; /*0x45a258*/
    }
    else
    {
      return 0; /*0x45a1ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a262*/
    return 1; /*0x45a268*/
  }
}


// ==== 0x0045A270  ?$VectorClass@PBVParticleSystemTypeClass@@::Cleanup  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45a27d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45a283*/
    *(_DWORD *)(this + 4) = 0; /*0x45a28b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a28e*/
  *(_DWORD *)(this + 8) = 0; /*0x45a291*/
}


// ==== 0x0045A2A0  _VectorClass_PBVParticleSystemTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall TypeList_Particle::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45a2a0*/
    return 0; /*0x45a2a8*/
  v3 = *(_DWORD *)(this + 8); /*0x45a2ae*/
  result = 0; /*0x45a2b1*/
  if ( v3 <= 0 ) /*0x45a2b5*/
    return -1; /*0x45a2cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a2bb*/
  {
    if ( ++result >= v3 ) /*0x45a2ca*/
      return -1; /*0x45a2ca*/
  }
  return result; /*0x45a2aa*/
}


// ==== 0x0045A2E0  _VectorClass_PBVParticleSystemTypeClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall TypeList_Particle::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a2e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a2f5*/
  else
    return 0; /*0x45a2e7*/
}


// ==== 0x0045A300  _DynamicVectorClass_PBVParticleSystemTypeClass::Add  this=DynamicVector  sig=csp ====
char __thiscall TypeList_cptr_ParticleSystemTypeClass::Add(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a30c*/
  {
    this->IsInitialized = 0; /*0x45a312*/
    if ( a3 ) /*0x45a318*/
      v4 = a3; /*0x45a32e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a32a*/
    this->IsInitialized = 1; /*0x45a332*/
    if ( !v4 ) /*0x45a336*/
      return 0; /*0x45a3aa*/
    if ( this->Items ) /*0x45a338*/
    {
      v5 = this->q008; /*0x45a33f*/
      if ( a2 < v5 ) /*0x45a344*/
        v5 = a2; /*0x45a346*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a34c*/
        ++i; /*0x45a351*/
      if ( this->IsAllocated ) /*0x45a35e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a369*/
        this->Items = 0; /*0x45a371*/
      }
    }
    this->Items = v4; /*0x45a37a*/
    this->q008 = a2; /*0x45a382*/
    this->IsAllocated = a3 == 0; /*0x45a385*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a38e*/
  }
  v7 = this->q008; /*0x45a391*/
  if ( v7 < this->Items ) /*0x45a399*/
    this->Items = v7; /*0x45a39b*/
  return 1; /*0x45a39e*/
}


// ==== 0x0045A3B0  _DynamicVectorClass_PBVParticleSystemTypeClass::Remove  this=DynamicVector  sig=csp ====
int __thiscall TypeList_cptr_ParticleSystemTypeClass::Remove(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a3b0*/
  result = 0; /*0x45a3b3*/
  if ( v2 <= 0 ) /*0x45a3b8*/
    return -1; /*0x45a3cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a3be*/
  {
    if ( ++result >= v2 ) /*0x45a3cd*/
      return -1; /*0x45a3cd*/
  }
  return result; /*0x45a3d2*/
}


// ==== 0x0045A3E0  _VectorClass_PAVInfantryClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x45a3e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x45a3ed*/
  {
    v3 = 0; /*0x45a3ef*/
    if ( v2 <= 0 ) /*0x45a3f3*/
      return 1; /*0x45a413*/
    v4 = (_DWORD *)this->Items; /*0x45a3f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a3fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a404*/
    {
      ++v3; /*0x45a406*/
      ++v4; /*0x45a407*/
      if ( v3 >= v2 ) /*0x45a40c*/
        return 1; /*0x45a40c*/
    }
  }
  return 0; /*0x45a40e*/
}


// ==== 0x0045A420  ?$VectorClass@PAVInfantryClass@@::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_InfantryClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a42c*/
  {
    this->IsInitialized = 0; /*0x45a436*/
    if ( a3 ) /*0x45a43c*/
      v4 = a3; /*0x45a452*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a44e*/
    this->IsInitialized = 1; /*0x45a456*/
    if ( v4 ) /*0x45a45a*/
    {
      if ( this->Items ) /*0x45a465*/
      {
        v6 = this->Capacity; /*0x45a46c*/
        if ( a2 < v6 ) /*0x45a471*/
          v6 = a2; /*0x45a473*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a479*/
          ++i; /*0x45a47e*/
        if ( this->IsAllocated ) /*0x45a48b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a496*/
          this->Items = 0; /*0x45a49e*/
        }
      }
      this->Items = v4; /*0x45a4a7*/
      this->Capacity = a2; /*0x45a4af*/
      this->IsAllocated = a3 == 0; /*0x45a4b2*/
      return 1; /*0x45a4b8*/
    }
    else
    {
      return 0; /*0x45a45f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a4c2*/
    return 1; /*0x45a4c8*/
  }
}


// ==== 0x0045A4D0  _VectorClass_PAVInfantryClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_InfantryClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45a4dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45a4e3*/
    *(_DWORD *)(this + 4) = 0; /*0x45a4eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a4ee*/
  *(_DWORD *)(this + 8) = 0; /*0x45a4f1*/
}


// ==== 0x0045A500  ?$VectorClass@PAVInfantryClass@@::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_InfantryClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45a500*/
    return 0; /*0x45a508*/
  v3 = *(_DWORD *)(this + 8); /*0x45a50e*/
  result = 0; /*0x45a511*/
  if ( v3 <= 0 ) /*0x45a515*/
    return -1; /*0x45a52c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a51b*/
  {
    if ( ++result >= v3 ) /*0x45a52a*/
      return -1; /*0x45a52a*/
  }
  return result; /*0x45a50a*/
}


// ==== 0x0045A540  ?$VectorClass@PAVInfantryClass@@::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_InfantryClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a540*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a555*/
  else
    return 0; /*0x45a547*/
}


// ==== 0x0045A560  ?$DynamicVectorClass@PAVInfantryClass@@::ResizeOccupiedCellList  this=DynamicVector  sig=csp ====
char __thiscall BuildingClass::sub_45A560(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a56c*/
  {
    this->IsInitialized = 0; /*0x45a572*/
    if ( a3 ) /*0x45a578*/
      v4 = a3; /*0x45a58e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a58a*/
    this->IsInitialized = 1; /*0x45a592*/
    if ( !v4 ) /*0x45a596*/
      return 0; /*0x45a60a*/
    if ( this->Items ) /*0x45a598*/
    {
      v5 = this->q008; /*0x45a59f*/
      if ( a2 < v5 ) /*0x45a5a4*/
        v5 = a2; /*0x45a5a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a5ac*/
        ++i; /*0x45a5b1*/
      if ( this->IsAllocated ) /*0x45a5be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a5c9*/
        this->Items = 0; /*0x45a5d1*/
      }
    }
    this->Items = v4; /*0x45a5da*/
    this->q008 = a2; /*0x45a5e2*/
    this->IsAllocated = a3 == 0; /*0x45a5e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a5ee*/
  }
  v7 = this->q008; /*0x45a5f1*/
  if ( v7 < this->Items ) /*0x45a5f9*/
    this->Items = v7; /*0x45a5fb*/
  return 1; /*0x45a5fe*/
}


// ==== 0x0045A610  ?$DynamicVectorClass@PAVInfantryClass@@::FindInPointerArray  this=DynamicVector  sig=csp ====
int __thiscall BuildingClass::sub_45A610(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a610*/
  result = 0; /*0x45a613*/
  if ( v2 <= 0 ) /*0x45a618*/
    return -1; /*0x45a62f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a61e*/
  {
    if ( ++result >= v2 ) /*0x45a62d*/
      return -1; /*0x45a62d*/
  }
  return result; /*0x45a632*/
}


// ==== 0x0045A640  _VectorClass_PAVFoggedObjectClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x45a642*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x45a64d*/
  {
    v3 = 0; /*0x45a64f*/
    if ( v2 <= 0 ) /*0x45a653*/
      return 1; /*0x45a673*/
    v4 = (_DWORD *)this->Items; /*0x45a655*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a664*/
    {
      ++v3; /*0x45a666*/
      ++v4; /*0x45a667*/
      if ( v3 >= v2 ) /*0x45a66c*/
        return 1; /*0x45a66c*/
    }
  }
  return 0; /*0x45a66e*/
}


// ==== 0x0045A680  _DynamicVectorClass_PAVFoggedObjectClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::sub_45A680(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a68c*/
  {
    this->IsInitialized = 0; /*0x45a692*/
    if ( a3 ) /*0x45a698*/
      v4 = a3; /*0x45a6ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a6aa*/
    this->IsInitialized = 1; /*0x45a6b2*/
    if ( !v4 ) /*0x45a6b6*/
      return 0; /*0x45a72a*/
    if ( this->Items ) /*0x45a6b8*/
    {
      v5 = this->q008; /*0x45a6bf*/
      if ( a2 < v5 ) /*0x45a6c4*/
        v5 = a2; /*0x45a6c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a6cc*/
        ++i; /*0x45a6d1*/
      if ( this->IsAllocated ) /*0x45a6de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a6e9*/
        this->Items = 0; /*0x45a6f1*/
      }
    }
    this->Items = v4; /*0x45a6fa*/
    this->q008 = a2; /*0x45a702*/
    this->IsAllocated = a3 == 0; /*0x45a705*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a70e*/
  }
  v7 = this->q008; /*0x45a711*/
  if ( v7 < this->Items ) /*0x45a719*/
    this->Items = v7; /*0x45a71b*/
  return 1; /*0x45a71e*/
}


// ==== 0x0045A730  _DynamicVectorClass_PAVFoggedObjectClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::sub_45A730(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a730*/
  result = 0; /*0x45a733*/
  if ( v2 <= 0 ) /*0x45a738*/
    return -1; /*0x45a74f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a73e*/
  {
    if ( ++result >= v2 ) /*0x45a74d*/
      return -1; /*0x45a74d*/
  }
  return result; /*0x45a752*/
}


// ==== 0x0045A760  _VectorClass_PAVReestablish::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x45a762*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x45a76d*/
  {
    v3 = 0; /*0x45a76f*/
    if ( v2 <= 0 ) /*0x45a773*/
      return 1; /*0x45a793*/
    v4 = (_DWORD *)this->Items; /*0x45a775*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x45a77b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x45a784*/
    {
      ++v3; /*0x45a786*/
      ++v4; /*0x45a787*/
      if ( v3 >= v2 ) /*0x45a78c*/
        return 1; /*0x45a78c*/
    }
  }
  return 0; /*0x45a78e*/
}


// ==== 0x0045A7A0  _VectorClass_PAVReestablish::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45a7ac*/
  {
    this->IsInitialized = 0; /*0x45a7b6*/
    if ( a3 ) /*0x45a7bc*/
      v4 = a3; /*0x45a7d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a7ce*/
    this->IsInitialized = 1; /*0x45a7d6*/
    if ( v4 ) /*0x45a7da*/
    {
      if ( this->Items ) /*0x45a7e5*/
      {
        v6 = this->Capacity; /*0x45a7ec*/
        if ( a2 < v6 ) /*0x45a7f1*/
          v6 = a2; /*0x45a7f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a7f9*/
          ++i; /*0x45a7fe*/
        if ( this->IsAllocated ) /*0x45a80b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a816*/
          this->Items = 0; /*0x45a81e*/
        }
      }
      this->Items = v4; /*0x45a827*/
      this->Capacity = a2; /*0x45a82f*/
      this->IsAllocated = a3 == 0; /*0x45a832*/
      return 1; /*0x45a838*/
    }
    else
    {
      return 0; /*0x45a7df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a842*/
    return 1; /*0x45a848*/
  }
}


// ==== 0x0045A850  _VectorClass_PAVReestablish::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_Reestablish::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45a85d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45a863*/
    *(_DWORD *)(this + 4) = 0; /*0x45a86b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45a86e*/
  *(_DWORD *)(this + 8) = 0; /*0x45a871*/
}


// ==== 0x0045A880  _VectorClass_PAVReestablish::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45a880*/
    return 0; /*0x45a888*/
  v3 = *(_DWORD *)(this + 8); /*0x45a88e*/
  result = 0; /*0x45a891*/
  if ( v3 <= 0 ) /*0x45a895*/
    return -1; /*0x45a8ac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45a89b*/
  {
    if ( ++result >= v3 ) /*0x45a8aa*/
      return -1; /*0x45a8aa*/
  }
  return result; /*0x45a88a*/
}


// ==== 0x0045A8C0  _VectorClass_PAVReestablish::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_Reestablish::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45a8c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45a8d5*/
  else
    return 0; /*0x45a8c7*/
}


// ==== 0x0045A8E0  _DynamicVectorClass_PAVReestablish::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_Reestablish::sub_45A8E0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x45a8ec*/
  {
    this->IsInitialized = 0; /*0x45a8f2*/
    if ( a3 ) /*0x45a8f8*/
      v4 = a3; /*0x45a90e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45a90a*/
    this->IsInitialized = 1; /*0x45a912*/
    if ( !v4 ) /*0x45a916*/
      return 0; /*0x45a98a*/
    if ( this->Items ) /*0x45a918*/
    {
      v5 = this->q008; /*0x45a91f*/
      if ( a2 < v5 ) /*0x45a924*/
        v5 = a2; /*0x45a926*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45a92c*/
        ++i; /*0x45a931*/
      if ( this->IsAllocated ) /*0x45a93e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x45a949*/
        this->Items = 0; /*0x45a951*/
      }
    }
    this->Items = v4; /*0x45a95a*/
    this->q008 = a2; /*0x45a962*/
    this->IsAllocated = a3 == 0; /*0x45a965*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45a96e*/
  }
  v7 = this->q008; /*0x45a971*/
  if ( v7 < this->Items ) /*0x45a979*/
    this->Items = v7; /*0x45a97b*/
  return 1; /*0x45a97e*/
}


// ==== 0x0045A990  _DynamicVectorClass_PAVReestablish::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_Reestablish::sub_45A990(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x45a990*/
  result = 0; /*0x45a993*/
  if ( v2 <= 0 ) /*0x45a998*/
    return -1; /*0x45a9af*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x45a99e*/
  {
    if ( ++result >= v2 ) /*0x45a9ad*/
      return -1; /*0x45a9ad*/
  }
  return result; /*0x45a9b2*/
}


// ==== 0x0045A9C0  _VectorClass_PBVParticleSystemTypeClass::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall TypeList_Particle::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45a9c3*/
  *Block = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x45a9c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45a9d0*/
  {
    __3_YAXPAX_Z(v3); /*0x45a9d8*/
    *(Block + 1) = 0; /*0x45a9e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45a9eb*/
  *(Block + 2) = 0; /*0x45a9f1*/
  if ( (a2 & 1) != 0 ) /*0x45a9f8*/
    __3_YAXPAX_Z(Block); /*0x45a9fb*/
  return (VectorClass *)Block; /*0x45aa05*/
}


// ==== 0x0045AA10  _DynamicVectorClass_PBVParticleSystemTypeClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_Reestablish::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45aa13*/
  *Block = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x45aa16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aa20*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa28*/
    *(Block + 1) = 0; /*0x45aa30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aa3b*/
  *(Block + 2) = 0; /*0x45aa41*/
  if ( (a2 & 1) != 0 ) /*0x45aa48*/
    __3_YAXPAX_Z(Block); /*0x45aa4b*/
  return (DynamicVector *)Block; /*0x45aa55*/
}


// ==== 0x0045AA60  ?$VectorClass@PAVInfantryClass@@::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall FootClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45aa63*/
  *Block = &vt_VectorClass_InfantryClass; /*0x45aa66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aa70*/
  {
    __3_YAXPAX_Z(v3); /*0x45aa78*/
    *(Block + 1) = 0; /*0x45aa80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aa8b*/
  *(Block + 2) = 0; /*0x45aa91*/
  if ( (a2 & 1) != 0 ) /*0x45aa98*/
    __3_YAXPAX_Z(Block); /*0x45aa9b*/
  return (DynamicVector *)Block; /*0x45aaa5*/
}


// ==== 0x0045AAB0  _DynamicVectorClass_PAVInfantryClass::Destruct  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_InfantryPtr::Destruct(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45aab3*/
  *Block = &vt_VectorClass_InfantryClass; /*0x45aab6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aac0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aac8*/
    *(Block + 1) = 0; /*0x45aad0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45aadb*/
  *(Block + 2) = 0; /*0x45aae1*/
  if ( (a2 & 1) != 0 ) /*0x45aae8*/
    __3_YAXPAX_Z(Block); /*0x45aaeb*/
  return (DynamicVector *)Block; /*0x45aaf5*/
}


// ==== 0x0045AB00  _DynamicVectorClass_PAVFoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_FoggedObjectClass::Constructor_VectorClass_FoggedObjectClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45ab03*/
  *Block = &vt_VectorClass_FoggedObjectClass; /*0x45ab06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45ab10*/
  {
    __3_YAXPAX_Z(v3); /*0x45ab18*/
    *(Block + 1) = 0; /*0x45ab20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45ab2b*/
  *(Block + 2) = 0; /*0x45ab31*/
  if ( (a2 & 1) != 0 ) /*0x45ab38*/
    __3_YAXPAX_Z(Block); /*0x45ab3b*/
  return (DynamicVector *)Block; /*0x45ab45*/
}


// ==== 0x0045AB50  _VectorClass_PAVFoggedObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_FoggedObjectClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x45ab5c*/
  {
    this->IsInitialized = 0; /*0x45ab66*/
    if ( a3 ) /*0x45ab6c*/
      v4 = a3; /*0x45ab82*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x45ab7e*/
    this->IsInitialized = 1; /*0x45ab86*/
    if ( v4 ) /*0x45ab8a*/
    {
      if ( this->Items ) /*0x45ab95*/
      {
        v6 = this->Capacity; /*0x45ab9c*/
        if ( a2 < v6 ) /*0x45aba1*/
          v6 = a2; /*0x45aba3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x45aba9*/
          ++i; /*0x45abae*/
        if ( this->IsAllocated ) /*0x45abbb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x45abc6*/
          this->Items = 0; /*0x45abce*/
        }
      }
      this->Items = v4; /*0x45abd7*/
      this->Capacity = a2; /*0x45abdf*/
      this->IsAllocated = a3 == 0; /*0x45abe2*/
      return 1; /*0x45abe8*/
    }
    else
    {
      return 0; /*0x45ab8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x45abf2*/
    return 1; /*0x45abf8*/
  }
}


// ==== 0x0045AC00  _VectorClass_PAVFoggedObjectClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_FoggedObjectClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x45ac0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x45ac13*/
    *(_DWORD *)(this + 4) = 0; /*0x45ac1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x45ac1e*/
  *(_DWORD *)(this + 8) = 0; /*0x45ac21*/
}


// ==== 0x0045AC30  _VectorClass_PAVFoggedObjectClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_FoggedObjectClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x45ac30*/
    return 0; /*0x45ac38*/
  v3 = *(_DWORD *)(this + 8); /*0x45ac3e*/
  result = 0; /*0x45ac41*/
  if ( v3 <= 0 ) /*0x45ac45*/
    return -1; /*0x45ac5c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x45ac4b*/
  {
    if ( ++result >= v3 ) /*0x45ac5a*/
      return -1; /*0x45ac5a*/
  }
  return result; /*0x45ac3a*/
}


// ==== 0x0045AC70  _VectorClass_PAVFoggedObjectClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_FoggedObjectClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x45ac70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x45ac85*/
  else
    return 0; /*0x45ac77*/
}


// ==== 0x0045AC90  _VectorClass_PAVFoggedObjectClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_FoggedObjectClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45ac93*/
  *Block = &vt_VectorClass_FoggedObjectClass; /*0x45ac96*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45aca0*/
  {
    __3_YAXPAX_Z(v3); /*0x45aca8*/
    *(Block + 1) = 0; /*0x45acb0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45acbb*/
  *(Block + 2) = 0; /*0x45acc1*/
  if ( (a2 & 1) != 0 ) /*0x45acc8*/
    __3_YAXPAX_Z(Block); /*0x45accb*/
  return (VectorClass *)Block; /*0x45acd5*/
}


// ==== 0x0045ACE0  _VectorClass_PAVReestablish::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_Reestablish::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45ace3*/
  *Block = &vt_VectorClass_Reestablish; /*0x45ace6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45acf0*/
  {
    __3_YAXPAX_Z(v3); /*0x45acf8*/
    *(Block + 1) = 0; /*0x45ad00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45ad0b*/
  *(Block + 2) = 0; /*0x45ad11*/
  if ( (a2 & 1) != 0 ) /*0x45ad18*/
    __3_YAXPAX_Z(Block); /*0x45ad1b*/
  return (VectorClass *)Block; /*0x45ad25*/
}


// ==== 0x0045AD30  _DynamicVectorClass_PAVReestablish::Constructor_VectorClass_Reestablish___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_Reestablish::Constructor_VectorClass_Reestablish___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x45ad33*/
  *Block = &vt_VectorClass_Reestablish; /*0x45ad36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x45ad40*/
  {
    __3_YAXPAX_Z(v3); /*0x45ad48*/
    *(Block + 1) = 0; /*0x45ad50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x45ad5b*/
  *(Block + 2) = 0; /*0x45ad61*/
  if ( (a2 & 1) != 0 ) /*0x45ad68*/
    __3_YAXPAX_Z(Block); /*0x45ad6b*/
  return (DynamicVector *)Block; /*0x45ad75*/
}


// ==== 0x0045AD80  VectorClass::ConstructorWithVtable  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass::ConstructorWithVtable(_DWORD *this, TechnoTypeClass *aP1, TechnoTypeClass *aP2)
{
  this->Items = 0; /*0x45ad8b*/
  this->Capacity = aP1; /*0x45ad8e*/
  this->q030 = 1; /*0x45ad91*/
  this->q034 = 0; /*0x45ad95*/
  *this = &vt_VectorClass_ParticleSystemTypeClass_const; /*0x45ad98*/
  if ( aP1 ) /*0x45ad9e*/
  {
    if ( aP2 ) /*0x45ada6*/
    {
      this->Items = aP2; /*0x45ada8*/
      return this; /*0x45adae*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x45adbd*/
    this->q034 = 1; /*0x45adc0*/
  }
  return this; /*0x45adad*/
}


// ==== 0x0045ADD0  DynamicVector::RemoveItem  this=DynamicVectorClass  sig=csp ====
char __thiscall DynamicVector::RemoveItem(_DWORD *this, IUnknown *aP1)
{
  int v2; // edx
  IUnknown *v3; // eax
  int v4; // edx

  v2 = this->Count; /*0x45add0*/
  v3 = aP1; /*0x45add3*/
  if ( (int)aP1 >= v2 ) /*0x45add9*/
    return 0; /*0x45adfc*/
  v4 = v2 - 1; /*0x45addb*/
  this->Count = v4; /*0x45adde*/
  if ( (int)aP1 < v4 ) /*0x45ade1*/
  {
    do /*0x45adf4*/
    {
      v3 = (IUnknown *)((char *)v3 + 1); /*0x45ade7*/
      *(_DWORD *)(this->Items + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(this->Items + 4 * (_DWORD)v3); /*0x45adeb*/
    }
    while ( (int)v3 < this->Count ); /*0x45adf4*/
  }
  return 1; /*0x45adf9*/
}


// ==== 0x0045AE10  Vector::RemoveAt  this=VectorClass  sig=csp ====
char __thiscall Vector::RemoveAt(_DWORD *this, AbstractClass *aP1)
{
  int v2; // edx
  AbstractClass *v3; // eax
  int v4; // edx

  v2 = this->q010; /*0x45ae10*/
  v3 = aP1; /*0x45ae13*/
  if ( (int)aP1 >= v2 ) /*0x45ae19*/
    return 0; /*0x45ae3c*/
  v4 = v2 - 1; /*0x45ae1b*/
  this->q010 = v4; /*0x45ae1e*/
  if ( (int)aP1 < v4 ) /*0x45ae21*/
  {
    do /*0x45ae34*/
    {
      v3 = (AbstractClass *)((char *)v3 + 1); /*0x45ae27*/
      *(_DWORD *)(this->Items + 4 * (_DWORD)v3 - 4) = *(_DWORD *)(this->Items + 4 * (_DWORD)v3); /*0x45ae2b*/
    }
    while ( (int)v3 < this->q010 ); /*0x45ae34*/
  }
  return 1; /*0x45ae39*/
}


// ==== 0x0045AE50  VectorClass_ReestablishPtr::Construct  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ReestablishPtr::Construct(_DWORD *this, BuildingClass *aP1, BuildingClass *aP2)
{
  this->Items = 0; /*0x45ae5b*/
  this->Capacity = aP1; /*0x45ae5e*/
  this->q030 = 1; /*0x45ae61*/
  this->q034 = 0; /*0x45ae65*/
  *this = &vt_VectorClass_Reestablish; /*0x45ae68*/
  if ( aP1 ) /*0x45ae6e*/
  {
    if ( aP2 ) /*0x45ae76*/
    {
      this->Items = aP2; /*0x45ae78*/
      return this; /*0x45ae7e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x45ae8d*/
    this->q034 = 1; /*0x45ae90*/
  }
  return this; /*0x45ae7d*/
}


// ==== 0x0045AEA0  StreamClass::Set2  this=StreamClass  sig=csp ====
int __thiscall StreamClass_Set2(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v5; // ebx
  int v6; // eax

  if ( *a2 ) /*0x45aea8*/
  {
    v3 = (**(int (__stdcall ***)(_DWORD, void *, _DWORD **))*a2)(*a2, &unk_818858, &a2); /*0x45aebd*/
    if ( v3 >= 0 ) /*0x45aec1*/
    {
      v5 = a2; /*0x45aedf*/
      if ( *this ) /*0x45aedc*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45aeea*/
      *this = v5; /*0x45aeed*/
      return v3; /*0x45aef0*/
    }
    else
    {
      if ( *this ) /*0x45aec3*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45aecc*/
      *this = 0; /*0x45aed1*/
      return v3; /*0x45aecf*/
    }
  }
  else
  {
    v6 = *this; /*0x45aef7*/
    if ( *this ) /*0x45aef7*/
    {
      *this = 0; /*0x45aefd*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af06*/
    }
    return -2147467262; /*0x45af0e*/
  }
}


// ==== 0x0045AF20  StreamClass::Set  this=ILocomotion  sig=csp ====
int __thiscall StreamClass::Set(_DWORD *this, IUnknown *aP1)
{
  int v3; // edi
  IUnknown *v5; // ebx
  int v6; // eax

  if ( aP1->field_0 ) /*0x45af28*/
  {
    v3 = (**(int (__stdcall ***)(int, void *, IUnknown **))aP1->field_0)(aP1->field_0, &unk_819088, &aP1); /*0x45af3d*/
    if ( v3 >= 0 ) /*0x45af41*/
    {
      v5 = aP1; /*0x45af5f*/
      if ( *this ) /*0x45af5c*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45af6a*/
      *this = v5; /*0x45af6d*/
      return v3; /*0x45af70*/
    }
    else
    {
      if ( *this ) /*0x45af43*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*this + 8))(*this); /*0x45af4c*/
      *this = 0; /*0x45af51*/
      return v3; /*0x45af4f*/
    }
  }
  else
  {
    v6 = *this; /*0x45af77*/
    if ( *this ) /*0x45af77*/
    {
      *this = 0; /*0x45af7d*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x45af86*/
    }
    return -2147467262; /*0x45af8e*/
  }
}


// ==== 0x0045AFA0  sub_45AFA0  this=-  sig=ida-proto ====
void sub_45AFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x45afac*/
  unk_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}


// ==== 0x0045AFD0  sub_45AFD0  this=-  sig=ida-proto ====
void sub_45AFD0()
{
  unk_89D360 = unk_89C8B8 / 60.0; /*0x45afdc*/
}


// ==== 0x0045AFF0  sub_45AFF0  this=-  sig=ida-proto ====
void sub_45AFF0()
{
  unk_89C8F8 = 1.0 / unk_89D360; /*0x45affc*/
}


// ==== 0x0045B010  sub_45B010  this=-  sig=ida-proto ====
void sub_45B010()
{
  unk_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}


// ==== 0x0045B030  sub_45B030  this=-  sig=ida-proto ====
void sub_45B030()
{
  unk_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}


// ==== 0x0045B050  sub_45B050  this=-  sig=ida-proto ====
void sub_45B050()
{
  unk_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}


// ==== 0x0045B070  sub_45B070  this=-  sig=ida-proto ====
__int64 sub_45B070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_89C898 - unk_89C8C0); /*0x45b082*/
  result = Math::RoundToInt(v0 * unk_89C8B8 * 0.5); /*0x45b096*/
  unk_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}


// ==== 0x0045B0B0  sub_45B0B0  this=-  sig=ida-proto ====
void sub_45B0B0()
{
  unk_89C8C8 = Math::ArcTan((double)unk_89DDB8 * 0.00390625); /*0x45b0c7*/
}


// ==== 0x0045B0E0  sub_45B0E0  this=-  sig=ida-proto ====
void sub_45B0E0()
{
  unk_89C8E0 = Math::ArcTan((double)(2 * unk_89DDB8) / unk_89C8B8); /*0x45b102*/
}


// ==== 0x0045B110  sub_45B110  this=-  sig=ida-proto ====
__int64 sub_45B110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_89DDB8) + 0.5); /*0x45b12b*/
  unk_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}


// ==== 0x0045B140  sub_45B140  this=-  sig=ida-proto ====
int sub_45B140()
{
  unk_89C8B0 = 0; /*0x45b142*/
  unk_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}


// ==== 0x0045B150  sub_45B150  this=-  sig=ida-proto ====
int sub_45B150()
{
  unk_89C8D0 = 0; /*0x45b152*/
  unk_89C8D4 = 0; /*0x45b157*/
  unk_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}


// ==== 0x0045B170  sub_45B170  this=-  sig=ida-proto ====
int sub_45B170()
{
  unk_89D358 = 0; /*0x45b175*/
  unk_89D350 = 128; /*0x45b17f*/
  unk_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}


// ==== 0x0045B190  sub_45B190  this=-  sig=ida-proto ====
int sub_45B190()
{
  unk_89C8A0 = 0; /*0x45b192*/
  unk_89C8A4 = 0; /*0x45b197*/
  unk_89C8A8 = 0; /*0x45b19c*/
  unk_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}


// ==== 0x0045B1B0  j_MapData_InitHeights  this=-  sig=ida-proto ====
// attributes: thunk
int j_MapData_InitHeights()
{
  return MapData::InitHeights();
}


// ==== 0x0045C2F0  j_Map_InitCellOffsets  this=-  sig=ida-proto ====
// attributes: thunk
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}


// ==== 0x0045C300  InitCellOffsetsMap  this=-  sig=ida-proto ====
int Map_InitCellOffsets()
{
  int v1; // [esp+10h] [ebp-4h] BYREF

  unk_89D368 = 0x10000;
  unk_89D36C = 0x1FFFF;
  unk_89D370 = 65537;
  unk_89D374 = 0xFFFF;
  unk_89D378 = 1;
  unk_89D380 = -1;
  unk_89D37C = -65536;
  unk_89D384 = -65535;
  unk_89D388 = 2147450879;
  memset(&unk_89D38C, 0, 0x54u);
  unk_89D3E0 = 0x10000;
  unk_89D3E4 = 65537;
  unk_89D3E8 = 0x1FFFF;
  unk_89D3EC = 65538;
  unk_89D3F0 = 0xFFFF;
  unk_89D3F4 = 2;
  unk_89D3F8 = -65536;
  unk_89D3FC = -65535;
  unk_89D404 = -65534;
  unk_89D400 = -1;
  unk_89D408 = 2147450879;
  memset(&unk_89D40C, 0, 0x4Cu);
  unk_89D458 = 0x20000;
  unk_89D45C = 131073;
  unk_89D460 = 196607;
  unk_89D464 = 0x1FFFF;
  unk_89D468 = 65537;
  unk_89D46C = 0xFFFF;
  unk_89D470 = 1;
  unk_89D478 = -1;
  unk_89D474 = -65536;
  unk_89D47C = -65535;
  unk_89D480 = 2147450879;
  memset(&unk_89D484, 0, 0x4Cu);
  unk_89D4D0 = 0x20000;
  unk_89D4D4 = 131073;
  unk_89D4D8 = 196607;
  unk_89D4DC = 131074;
  unk_89D4E0 = 0x1FFFF;
  unk_89D4E4 = 65538;
  unk_89D4E8 = 0xFFFF;
  unk_89D4EC = 2;
  unk_89D4F0 = -65536;
  unk_89D4F4 = -65535;
  unk_89D4F8 = -1;
  unk_89D4FC = -65534;
  unk_89D500 = 2147450879;
  memset(&unk_89D504, 0, 0x44u);
  unk_89D548 = 196608;
  unk_89D54C = 196609;
  unk_89D550 = 0x3FFFF;
  unk_89D554 = 196610;
  unk_89D558 = 196607;
  unk_89D55C = 131074;
  unk_89D560 = 0x1FFFF;
  unk_89D564 = 65538;
  unk_89D568 = 0xFFFF;
  unk_89D56C = 2;
  unk_89D570 = -65536;
  unk_89D574 = -65535;
  unk_89D57C = -65534;
  unk_89D578 = -1;
  unk_89D580 = 2147450879;
  memset(&unk_89D584, 0, 0x3Cu);
  unk_89D5C0 = 0x20000;
  unk_89D5C4 = 131073;
  unk_89D5C8 = 131074;
  unk_89D5CC = 196607;
  unk_89D5D0 = 131075;
  unk_89D5D4 = 0x1FFFF;
  unk_89D5D8 = 65539;
  unk_89D5DC = 0xFFFF;
  unk_89D5E0 = 3;
  unk_89D5E4 = -65536;
  unk_89D5E8 = -65535;
  unk_89D5EC = -65534;
  unk_89D5F0 = -1;
  unk_89D5F4 = -65533;
  unk_89D5F8 = 2147450879;
  memset(&unk_89D5FC, 0, 0x3Cu);
  unk_89D638 = 196608;
  unk_89D63C = 196609;
  unk_89D640 = 196610;
  unk_89D644 = 0x3FFFF;
  unk_89D648 = 196611;
  unk_89D64C = 196607;
  unk_89D650 = 131075;
  unk_89D654 = 0x1FFFF;
  unk_89D658 = 65539;
  unk_89D65C = 0xFFFF;
  unk_89D660 = 3;
  unk_89D664 = -65536;
  unk_89D668 = -65535;
  unk_89D66C = -65534;
  unk_89D670 = -1;
  unk_89D674 = -65533;
  unk_89D678 = 2147450879;
  memset(&unk_89D67C, 0, 0x34u);
  unk_89D6B0 = -1;
  unk_89D6B4 = -65536;
  unk_89D6B8 = -65535;
  unk_89D6BC = -65534;
  unk_89D6C0 = -65533;
  unk_89D6C4 = 0xFFFF;
  unk_89D6C8 = 3;
  unk_89D6CC = 0x1FFFF;
  unk_89D6D0 = 65539;
  unk_89D6D4 = 196607;
  unk_89D6D8 = 131075;
  unk_89D6DC = 0x3FFFF;
  unk_89D6E0 = 196611;
  unk_89D6E8 = 262147;
  unk_89D6E4 = 327679;
  unk_89D6EC = 393215;
  unk_89D6F0 = 327680;
  unk_89D6F4 = 327681;
  unk_89D6F8 = 327682;
  unk_89D6FC = 327683;
  unk_89D700 = 2147450879;
  memset(&unk_89D704, 0, 0x24u);
  unk_89D728 = 0x20000;
  unk_89D72C = 131073;
  unk_89D730 = 131074;
  unk_89D734 = 131075;
  unk_89D738 = 196607;
  unk_89D73C = 131076;
  unk_89D740 = 0x1FFFF;
  unk_89D744 = 65540;
  unk_89D748 = 0xFFFF;
  unk_89D74C = 4;
  unk_89D750 = -65536;
  unk_89D754 = -65535;
  unk_89D75C = -65533;
  unk_89D758 = -65534;
  unk_89D760 = -1;
  unk_89D764 = -65532;
  unk_89D768 = 2147450879;
  memset(&unk_89D76C, 0, 0x34u);
  unk_89D7A0 = 0;
  unk_89D7A4 = 2147450879;
  memset(&unk_89D7A8, 0, 0x70u);
  unk_89D818 = -1;
  unk_89D81C = -65536;
  unk_89D820 = -65535;
  unk_89D824 = 0xFFFF;
  unk_89D828 = 1;
  unk_89D82C = 0x1FFFF;
  unk_89D830 = 65537;
  unk_89D834 = 196607;
  unk_89D838 = 131073;
  unk_89D83C = 0x3FFFF;
  unk_89D844 = 196609;
  unk_89D840 = 196608;
  unk_89D848 = 2147450879;
  memset(&unk_89D84C, 0, 0x44u);
  unk_89D890 = -1;
  unk_89D894 = -65536;
  unk_89D898 = -65535;
  unk_89D89C = -65534;
  unk_89D8A0 = -65533;
  unk_89D8A4 = 0xFFFF;
  unk_89D8A8 = 3;
  unk_89D8AC = 0x1FFFF;
  unk_89D8B0 = 0x10000;
  unk_89D8B4 = 65537;
  unk_89D8B8 = 65538;
  unk_89D8BC = 65539;
  unk_89D8C0 = 2147450879;
  memset(&unk_89D8C4, 0, 0x44u);
  unk_89D908 = 196608;
  unk_89D90C = 196609;
  unk_89D910 = 196610;
  unk_89D914 = 0x3FFFF;
  unk_89D918 = 196611;
  unk_89D91C = 196607;
  unk_89D920 = 131075;
  unk_89D924 = 0x1FFFF;
  unk_89D928 = 65539;
  unk_89D92C = 0xFFFF;
  unk_89D930 = 3;
  unk_89D934 = -65536;
  unk_89D938 = -65535;
  unk_89D93C = -65534;
  unk_89D944 = -65533;
  unk_89D940 = -1;
  unk_89D948 = 2147450879;
  memset(&unk_89D94C, 0, 0x34u);
  unk_89D980 = -1;
  unk_89D984 = -65536;
  unk_89D988 = -65535;
  unk_89D98C = 0xFFFF;
  unk_89D990 = 1;
  unk_89D994 = 0x1FFFF;
  unk_89D998 = 65537;
  unk_89D9A0 = 131073;
  unk_89D99C = 196607;
  unk_89D9A4 = 0x3FFFF;
  unk_89D9A8 = 196609;
  unk_89D9AC = 327679;
  unk_89D9B4 = 262145;
  unk_89D9B0 = 0x40000;
  unk_89D9B8 = 2147450879;
  memset(&unk_89D9BC, 0, 0x3Cu);
  unk_89D9F8 = -1;
  unk_89D9FC = -65536;
  unk_89DA00 = -65535;
  unk_89DA04 = 0xFFFF;
  unk_89DA08 = 1;
  unk_89DA0C = 0x1FFFF;
  unk_89DA10 = 65537;
  unk_89DA18 = 131073;
  unk_89DA14 = 196607;
  unk_89DA1C = 0x3FFFF;
  unk_89DA20 = 196609;
  unk_89DA28 = 262145;
  unk_89DA24 = 327679;
  unk_89DA2C = 393215;
  unk_89DA30 = 327680;
  unk_89DA34 = 327681;
  unk_89DA38 = 2147450879;
  memset(&unk_89DA3C, 0, 0x34u);
  unk_89DA70 = -1;
  unk_89DA74 = -65536;
  unk_89DA78 = -65535;
  unk_89DA7C = -65534;
  unk_89DA80 = 0xFFFF;
  unk_89DA84 = 2;
  unk_89DA88 = 0x1FFFF;
  unk_89DA8C = 65538;
  unk_89DA90 = 196607;
  unk_89DA94 = 131074;
  unk_89DA98 = 0x3FFFF;
  unk_89DA9C = 196610;
  unk_89DAA0 = 393215;
  unk_89DAA4 = 327682;
  unk_89DAA8 = 458751;
  unk_89DAAC = 393216;
  unk_89DAB4 = 393218;
  unk_89DAB0 = 393217;
  unk_89DAB8 = 2147450879;
  memset(&unk_89DABC, 0, 0x2Cu);
  unk_89DAE8 = -1;
  unk_89DAEC = -65536;
  unk_89DAF0 = -65535;
  unk_89DAF4 = -65534;
  unk_89DAF8 = 0xFFFF;
  unk_89DAFC = 2;
  unk_89DB00 = 0x1FFFF;
  unk_89DB04 = 65538;
  unk_89DB08 = 196607;
  unk_89DB0C = 131074;
  unk_89DB10 = 0x3FFFF;
  unk_89DB14 = 196610;
  unk_89DB18 = 393215;
  unk_89DB1C = 327680;
  unk_89DB24 = 327682;
  unk_89DB20 = 327681;
  unk_89DB28 = 2147450879;
  memset(&unk_89DB2C, 0, 0x34u);
  unk_89DB60 = -1;
  unk_89DB64 = -65536;
  unk_89DB68 = -65535;
  v1 = -65532;
  unk_89DB70 = -65533;
  unk_89DB6C = -65534;
  unk_89DB74 = -65532;
  unk_89DB78 = *(_DWORD *)CellStruct::Set(&v1, 5, -1);
  unk_89DB7C = *(_DWORD *)CellStruct::Set(&v1, -1, 0);
  unk_89DB80 = *(_DWORD *)CellStruct::Set(&v1, 5, 0);
  unk_89DB84 = *(_DWORD *)CellStruct::Set(&v1, -1, 1);
  unk_89DB88 = *(_DWORD *)CellStruct::Set(&v1, 5, 1);
  unk_89DB8C = *(_DWORD *)CellStruct::Set(&v1, -1, 2);
  unk_89DB90 = *(_DWORD *)CellStruct::Set(&v1, 5, 2);
  unk_89DB94 = *(_DWORD *)CellStruct::Set(&v1, -1, 3);
  unk_89DB98 = *(_DWORD *)CellStruct::Set(&v1, 0, 3);
  unk_89DB9C = *(_DWORD *)CellStruct::Set(&v1, 1, 3);
  unk_89DBA0 = *(_DWORD *)CellStruct::Set(&v1, 2, 3);
  unk_89DBA4 = *(_DWORD *)CellStruct::Set(&v1, 3, 3);
  unk_89DBA8 = *(_DWORD *)CellStruct::Set(&v1, 4, 3);
  unk_89DBAC = *(_DWORD *)CellStruct::Set(&v1, 5, 3);
  unk_89DBB0 = *(_DWORD *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DBB4, 0, 0x24u);
  Array::ForEach((int)&stru_89DBB4, 4, 9, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DBD8 = *(_DWORD *)CellStruct::Set(&v1, -1, -1);
  unk_89DBDC = *(_DWORD *)CellStruct::Set(&v1, 0, -1);
  unk_89DBE0 = *(_DWORD *)CellStruct::Set(&v1, 1, -1);
  unk_89DBE4 = *(_DWORD *)CellStruct::Set(&v1, 2, -1);
  unk_89DBE8 = *(_DWORD *)CellStruct::Set(&v1, 3, -1);
  unk_89DBEC = *(_DWORD *)CellStruct::Set(&v1, 4, -1);
  unk_89DBF0 = *(_DWORD *)CellStruct::Set(&v1, -1, 4);
  unk_89DBF4 = *(_DWORD *)CellStruct::Set(&v1, 0, 4);
  unk_89DBF8 = *(_DWORD *)CellStruct::Set(&v1, 1, 4);
  unk_89DBFC = *(_DWORD *)CellStruct::Set(&v1, 2, 4);
  unk_89DC00 = *(_DWORD *)CellStruct::Set(&v1, 3, 4);
  unk_89DC04 = *(_DWORD *)CellStruct::Set(&v1, 4, 4);
  unk_89DC08 = *(_DWORD *)CellStruct::Set(&v1, -1, 0);
  unk_89DC0C = *(_DWORD *)CellStruct::Set(&v1, -1, 1);
  unk_89DC10 = *(_DWORD *)CellStruct::Set(&v1, -1, 2);
  unk_89DC14 = *(_DWORD *)CellStruct::Set(&v1, -1, 3);
  unk_89DC18 = *(_DWORD *)CellStruct::Set(&v1, -1, 4);
  unk_89DC1C = *(_DWORD *)CellStruct::Set(&v1, 4, 0);
  unk_89DC20 = *(_DWORD *)CellStruct::Set(&v1, 4, 1);
  unk_89DC24 = *(_DWORD *)CellStruct::Set(&v1, 4, 2);
  unk_89DC28 = *(_DWORD *)CellStruct::Set(&v1, 4, 3);
  unk_89DC2C = *(_DWORD *)CellStruct::Set(&v1, 4, 4);
  unk_89DC30 = *(_DWORD *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DC34, 0, 0x1Cu);
  Array::ForEach((int)&stru_89DC34, 4, 7, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  MEMORY[0x89DC50] = *(_DWORD *)CellStruct::Set(&v1, 0, 4);
  MEMORY[0x89DC54] = *(_DWORD *)CellStruct::Set(&v1, 1, 4);
  unk_89DC58 = *(_DWORD *)CellStruct::Set(&v1, 2, 4);
  unk_89DC5C = *(_DWORD *)CellStruct::Set(&v1, -1, 4);
  unk_89DC60 = *(_DWORD *)CellStruct::Set(&v1, 3, 4);
  unk_89DC64 = *(_DWORD *)CellStruct::Set(&v1, -1, 2);
  unk_89DC68 = *(_DWORD *)CellStruct::Set(&v1, 3, 2);
  unk_89DC6C = *(_DWORD *)CellStruct::Set(&v1, -1, 1);
  unk_89DC70 = *(_DWORD *)CellStruct::Set(&v1, 3, 1);
  unk_89DC74 = *(_DWORD *)CellStruct::Set(&v1, -1, 0);
  unk_89DC78 = *(_DWORD *)CellStruct::Set(&v1, 3, 0);
  unk_89DC7C = *(_DWORD *)CellStruct::Set(&v1, 0, -1);
  unk_89DC80 = *(_DWORD *)CellStruct::Set(&v1, 1, -1);
  unk_89DC84 = *(_DWORD *)CellStruct::Set(&v1, 2, -1);
  unk_89DC88 = *(_DWORD *)CellStruct::Set(&v1, -1, -1);
  unk_89DC8C = *(_DWORD *)CellStruct::Set(&v1, 3, -1);
  unk_89DC90 = *(_DWORD *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DC94, 0, 0x34u);
  Array::ForEach((int)&stru_89DC94, 4, 13, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DCC8 = *(_DWORD *)CellStruct::Set(&v1, 2, -1);
  unk_89DCCC = *(_DWORD *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DCD0, 0, 0x70u);
  Array::ForEach((int)&stru_89DCD0, 4, 28, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DD40 = *(_DWORD *)CellStruct::Set(&v1, 0x7FFF, 0x7FFF);
  memset(&stru_89DD44, 0, 0x74u);
  return Array::ForEach((int)&stru_89DD44, 4, 29, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_2);
}


// ==== 0x0045DD20  ObjectClass::method_45DD20  this=ObjectClass  sig=csp ====
char *__thiscall sub_45DD20(void *this)
{
  int v1; // edx
  int *v2; // eax

  v1 = 0; /*0x45dd20*/
  v2 = &dword_81928C; /*0x45dd22*/
  while ( (void *)*v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)dword_8192BC ) /*0x45dd34*/
      return off_819288; /*0x45dd3b*/
  }
  return (&off_819288)[2 * v1]; /*0x45dd3b*/
}


// ==== 0x0045DD50  ObjectClass::method_45DD50  this=ObjectClass  sig=csp ====
int __thiscall sub_45DD50(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x45dd55*/
  v3 = (const void **)&off_819288; /*0x45dd57*/
  while ( _strcmpi(*v3, this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x45dd6f*/
    if ( (int)v3 >= (int)dword_8192B8 ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return dword_81928C[2 * (_DWORD)v2]; /*0x45dd78*/
}


// ==== 0x0045DD90  BuildingTypeClass::ConstructFull  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass_ConstructorFull(int this, char *Source)
{
  int v3; // ecx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // eax
  int v13; // edi
  int v14; // edx
  _DWORD *v15; // eax
  int v16; // edi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // edi

  TechnoTypeClass::ReadINI((char *)this, Source, 0); /*0x45dda1*/
  *(_DWORD *)(this + 3576) = -1; /*0x45ddaf*/
  *(_DWORD *)(this + 3580) = 0; /*0x45ddb5*/
  *(_DWORD *)(this + 3584) = 0; /*0x45ddbb*/
  *(_BYTE *)(this + 3588) = 0; /*0x45ddc1*/
  *(_DWORD *)(this + 3592) = 0; /*0x45ddc7*/
  *(_DWORD *)(this + 3596) = unk_89C8D0; /*0x45ddd3*/
  *(_DWORD *)(this + 3600) = unk_89C8D4; /*0x45ddda*/
  *(_DWORD *)(this + 3604) = unk_89C8D8; /*0x45dde9*/
  *(_DWORD *)(this + 3608) = unk_89C8D0; /*0x45ddf2*/
  *(_DWORD *)(this + 3612) = unk_89C8D4; /*0x45ddfa*/
  *(_DWORD *)(this + 3616) = unk_89C8D8; /*0x45de03*/
  *(_DWORD *)(this + 3624) = 0; /*0x45de06*/
  *(_DWORD *)(this + 3628) = 0; /*0x45de0c*/
  *(_DWORD *)(this + 3632) = 5000; /*0x45de12*/
  *(_DWORD *)(this + 3636) = 0; /*0x45de21*/
  *(_DWORD *)(this + 3640) = 1000000; /*0x45de27*/
  *(_DWORD *)(this + 3644) = 1000000; /*0x45de2d*/
  *(_DWORD *)(this + 3648) = 1000000; /*0x45de33*/
  *(_DWORD *)(this + 3652) = 0xFFFF; /*0x45de40*/
  *(_DWORD *)(this + 3656) = 0xFFFF; /*0x45de46*/
  *(_DWORD *)(this + 3660) = 0xFFFF; /*0x45de4c*/
  *(_DWORD *)(this + 3664) = 0xFFFF; /*0x45de52*/
  *(_DWORD *)(this + 3668) = 0; /*0x45de58*/
  *(_DWORD *)(this + 3672) = 0; /*0x45de5e*/
  *(_DWORD *)(this + 3692) = -1; /*0x45de64*/
  *(_DWORD *)(this + 3696) = -1; /*0x45de6a*/
  *(_DWORD *)(this + 3700) = -1; /*0x45de70*/
  *(_DWORD *)(this + 3704) = -1; /*0x45de76*/
  *(_DWORD *)(this + 3708) = -1; /*0x45de7c*/
  *(_DWORD *)(this + 3712) = -1; /*0x45de82*/
  *(_DWORD *)(this + 3716) = -1; /*0x45de88*/
  *(_DWORD *)(this + 3744) = 0; /*0x45de8e*/
  *(_DWORD *)(this + 3748) = 0; /*0x45de94*/
  *(_DWORD *)(this + 3752) = 0; /*0x45de9a*/
  *(_DWORD *)(this + 3756) = 0; /*0x45dea0*/
  *(_DWORD *)(this + 3760) = -1; /*0x45dea6*/
  *(_DWORD *)(this + 3764) = 3; /*0x45deac*/
  *(_DWORD *)(this + 3768) = 0; /*0x45deb6*/
  *(_DWORD *)(this + 3772) = 0; /*0x45debc*/
  *(_DWORD *)(this + 3776) = 0; /*0x45dec2*/
  *(_DWORD *)(this + 3780) = 0; /*0x45dec8*/
  *(_DWORD *)(this + 3784) = 0; /*0x45dece*/
  *(_DWORD *)(this + 3788) = 0; /*0x45ded4*/
  *(_DWORD *)(this + 3792) = 0; /*0x45deda*/
  *(_DWORD *)(this + 3796) = 0; /*0x45dee0*/
  *(_DWORD *)(this + 3800) = 0; /*0x45dee6*/
  *(_DWORD *)(this + 3804) = 128; /*0x45deec*/
  *(_DWORD *)(this + 3808) = 0; /*0x45def6*/
  *(_DWORD *)(this + 3812) = 0; /*0x45defc*/
  *(_DWORD *)(this + 3816) = 0; /*0x45df02*/
  *(_DWORD *)(this + 3820) = 0; /*0x45df08*/
  *(_DWORD *)(this + 3824) = 0; /*0x45df13*/
  *(_DWORD *)(this + 3828) = 2; /*0x45df19*/
  *(_DWORD *)(this + 3832) = 2; /*0x45df1f*/
  *(_DWORD *)(this + 3836) = 0; /*0x45df25*/
  *(_DWORD *)(this + 3840) = 0; /*0x45df2b*/
  *(_DWORD *)(this + 5344) = 0; /*0x45df31*/
  *(_DWORD *)(this + 5348) = 0; /*0x45df37*/
  *(_DWORD *)(this + 5356) = 0; /*0x45df3d*/
  *(_DWORD *)(this + 5364) = 0; /*0x45df43*/
  *(_DWORD *)(this + 5372) = 0; /*0x45df49*/
  *(_DWORD *)(this + 5380) = 0; /*0x45df4f*/
  *(_DWORD *)(this + 5388) = 0; /*0x45df55*/
  *(_DWORD *)(this + 5392) = 0; /*0x45df5b*/
  *(_DWORD *)(this + 5396) = 0; /*0x45df61*/
  *(_DWORD *)(this + 5400) = 0; /*0x45df67*/
  *(_BYTE *)(this + 5404) = 0; /*0x45df6d*/
  *(_DWORD *)(this + 5408) = 0; /*0x45df73*/
  *(_DWORD *)(this + 5412) = 0; /*0x45df79*/
  *(_DWORD *)(this + 5416) = 0; /*0x45df7f*/
  *(_DWORD *)(this + 5420) = 0; /*0x45df87*/
  *(_DWORD *)(this + 5424) = 0; /*0x45df8d*/
  *(_DWORD *)(this + 5428) = 0; /*0x45df93*/
  *(_DWORD *)(this + 5432) = unk_89C8A0; /*0x45dfa4*/
  *(_DWORD *)(this + 5436) = unk_89C8A4; /*0x45dfb0*/
  *(_DWORD *)(this + 5440) = unk_89C8A8; /*0x45dfb8*/
  v3 = unk_89C8AC; /*0x45dfbb*/
  *(_BYTE *)(this + 5454) = 0; /*0x45dfc3*/
  *(_DWORD *)(this + 5444) = v3; /*0x45dfc9*/
  *(_WORD *)(this + 5448) = 0; /*0x45dfcc*/
  *(_BYTE *)(this + 5450) = 1; /*0x45dfd3*/
  *(_BYTE *)(this + 5451) = 0; /*0x45dfda*/
  *(_BYTE *)(this + 5452) = 0; /*0x45dfe0*/
  *(_DWORD *)(this + 5656) = 0; /*0x45dfe6*/
  *(_BYTE *)(this + 5453) = 0; /*0x45dfec*/
  *(_BYTE *)(this + 5455) = 1; /*0x45dff2*/
  *(_BYTE *)(this + 5456) = 0; /*0x45dff9*/
  *(_BYTE *)(this + 5457) = 0; /*0x45dfff*/
  *(_BYTE *)(this + 5458) = 0; /*0x45e005*/
  *(_DWORD *)(this + 5460) = -1; /*0x45e00b*/
  *(_DWORD *)(this + 5464) = 0; /*0x45e011*/
  *(_DWORD *)(this + 5468) = 0; /*0x45e017*/
  *(_DWORD *)(this + 5472) = 0; /*0x45e01d*/
  *(_DWORD *)(this + 5476) = 0; /*0x45e023*/
  *(_DWORD *)(this + 5480) = 0; /*0x45e029*/
  *(_DWORD *)(this + 5484) = 25; /*0x45e02f*/
  *(_BYTE *)(this + 5488) = 0; /*0x45e039*/
  *(_BYTE *)(this + 5489) = 0; /*0x45e03f*/
  *(_BYTE *)(this + 5490) = 0; /*0x45e045*/
  *(_BYTE *)(this + 5491) = 0; /*0x45e04b*/
  *(_BYTE *)(this + 5492) = 0; /*0x45e051*/
  *(_BYTE *)(this + 5493) = 0; /*0x45e057*/
  *(_BYTE *)(this + 5494) = 0; /*0x45e05d*/
  *(_BYTE *)(this + 5495) = 1; /*0x45e063*/
  *(_BYTE *)(this + 5496) = 0; /*0x45e06a*/
  *(_BYTE *)(this + 5497) = 0; /*0x45e070*/
  *(_BYTE *)(this + 5498) = 1; /*0x45e076*/
  *(_BYTE *)(this + 5499) = 0; /*0x45e07d*/
  *(_BYTE *)(this + 5500) = 0; /*0x45e083*/
  *(_DWORD *)(this + 5504) = 0; /*0x45e089*/
  *(_BYTE *)(this + 5508) = 1; /*0x45e08f*/
  *(_DWORD *)(this + 5660) = 0; /*0x45e096*/
  *(_DWORD *)(this + 5664) = -1; /*0x45e09c*/
  *(_BYTE *)(this + 5796) = 0; /*0x45e0a2*/
  *(_BYTE *)(this + 5797) = 0; /*0x45e0a8*/
  *(_BYTE *)(this + 5798) = 0; /*0x45e0ae*/
  *(_BYTE *)(this + 5799) = 0; /*0x45e0b4*/
  *(_BYTE *)(this + 5800) = 0; /*0x45e0ba*/
  *(_BYTE *)(this + 5801) = 0; /*0x45e0c0*/
  *(_BYTE *)(this + 5802) = 0; /*0x45e0c6*/
  *(_BYTE *)(this + 5803) = 0; /*0x45e0cc*/
  *(_BYTE *)(this + 5804) = 0; /*0x45e0d2*/
  *(_BYTE *)(this + 5805) = 0; /*0x45e0d8*/
  *(_BYTE *)(this + 5806) = 0; /*0x45e0de*/
  *(_BYTE *)(this + 5807) = 0; /*0x45e0e4*/
  *(_BYTE *)(this + 5808) = 0; /*0x45e0ea*/
  *(_BYTE *)(this + 5809) = 0; /*0x45e0f0*/
  *(_BYTE *)(this + 5810) = 0; /*0x45e0f6*/
  *(_BYTE *)(this + 5811) = 0; /*0x45e0fc*/
  *(_BYTE *)(this + 5812) = 0; /*0x45e102*/
  *(_BYTE *)(this + 5813) = 1; /*0x45e108*/
  *(_BYTE *)(this + 5814) = 0; /*0x45e10f*/
  *(_BYTE *)(this + 5815) = 0; /*0x45e115*/
  *(_BYTE *)(this + 5816) = 0; /*0x45e11b*/
  *(_BYTE *)(this + 5817) = 0; /*0x45e121*/
  *(_BYTE *)(this + 5818) = 0; /*0x45e127*/
  *(_BYTE *)(this + 5819) = 0; /*0x45e12d*/
  *(_BYTE *)(this + 5820) = 0; /*0x45e133*/
  *(_BYTE *)(this + 5821) = 0; /*0x45e139*/
  *(_BYTE *)(this + 5822) = 0; /*0x45e13f*/
  *(_BYTE *)(this + 5823) = 0; /*0x45e145*/
  *(_BYTE *)(this + 5824) = 0; /*0x45e14b*/
  *(_BYTE *)(this + 5825) = 0; /*0x45e151*/
  *(_BYTE *)(this + 5826) = 0; /*0x45e157*/
  *(_BYTE *)(this + 5827) = 0; /*0x45e15d*/
  *(_BYTE *)(this + 5828) = 0; /*0x45e163*/
  *(_BYTE *)(this + 5829) = 0; /*0x45e169*/
  *(_BYTE *)(this + 5830) = 0; /*0x45e16f*/
  *(_BYTE *)(this + 5831) = 0; /*0x45e175*/
  *(_BYTE *)(this + 5832) = 0; /*0x45e17b*/
  *(_BYTE *)(this + 5833) = 0; /*0x45e181*/
  *(_BYTE *)(this + 5834) = 0; /*0x45e187*/
  *(_BYTE *)(this + 5835) = 0; /*0x45e18d*/
  *(_BYTE *)(this + 5836) = 0; /*0x45e193*/
  *(_BYTE *)(this + 5837) = 0; /*0x45e19e*/
  *(_DWORD *)(this + 5840) = 1065353216; /*0x45e1a4*/
  *(_DWORD *)(this + 5844) = 1065353216; /*0x45e1aa*/
  *(_DWORD *)(this + 5848) = 1065353216; /*0x45e1b0*/
  *(_DWORD *)(this + 5852) = 1065353216; /*0x45e1b6*/
  *(_DWORD *)(this + 5856) = 1065353216; /*0x45e1bc*/
  *(_BYTE *)(this + 5860) = 0; /*0x45e1c2*/
  *(_BYTE *)(this + 5861) = 0; /*0x45e1c8*/
  *(_BYTE *)(this + 5862) = 0; /*0x45e1ce*/
  *(_DWORD *)(this + 5864) = 1148829696; /*0x45e1d4*/
  *(_DWORD *)(this + 5868) = 0; /*0x45e1de*/
  *(_DWORD *)(this + 5872) = -1; /*0x45e1e4*/
  *(_DWORD *)(this + 5876) = -1; /*0x45e1ea*/
  *(_DWORD *)(this + 5880) = 9; /*0x45e1f0*/
  *(_DWORD *)(this + 5884) = -1; /*0x45e1fa*/
  *(_BYTE *)(this + 5888) = 0; /*0x45e200*/
  *(_BYTE *)(this + 5889) = 0; /*0x45e206*/
  *(_BYTE *)(this + 5890) = 0; /*0x45e20c*/
  *(_BYTE *)(this + 5891) = 0; /*0x45e212*/
  *(_BYTE *)(this + 5892) = 1; /*0x45e218*/
  *(_BYTE *)(this + 5893) = 0; /*0x45e21f*/
  *(_BYTE *)(this + 5894) = 0; /*0x45e225*/
  *(_BYTE *)(this + 5895) = 20; /*0x45e22b*/
  *(_BYTE *)(this + 5896) = 0; /*0x45e232*/
  *(_DWORD *)(this + 5900) = 0; /*0x45e238*/
  *(_DWORD *)(this + 5904) = 64; /*0x45e23e*/
  *(_BYTE *)(this + 5984) = 0; /*0x45e248*/
  *(_BYTE *)(this + 5985) = 0; /*0x45e24e*/
  *(_BYTE *)(this + 5986) = 0; /*0x45e254*/
  *(_BYTE *)(this + 5987) = 0; /*0x45e25a*/
  *(_BYTE *)(this + 5988) = 0; /*0x45e260*/
  *(_BYTE *)(this + 5989) = 0; /*0x45e266*/
  *(_BYTE *)(this + 5990) = 1; /*0x45e26c*/
  *(_BYTE *)(this + 5991) = 0; /*0x45e273*/
  *(_BYTE *)(this + 5992) = 0; /*0x45e279*/
  *(_BYTE *)(this + 5993) = 0; /*0x45e284*/
  *(_DWORD *)(this + 6016) = 1; /*0x45e28a*/
  *(_DWORD *)(this + 6024) = 0; /*0x45e292*/
  *(_DWORD *)(this + 6028) = 1; /*0x45e298*/
  *(_BYTE *)(this + 6032) = 1; /*0x45e29e*/
  *(_BYTE *)(this + 6033) = 0; /*0x45e2a5*/
  *(_DWORD *)(this + 6020) = &vt_VectorClass_TPoint3D_int; /*0x45e2ab*/
  *(_DWORD *)(this + 6024) = __2_YAPAXI_Z(0xCu); /*0x45e2ba*/
  *(_BYTE *)(this + 6033) = 1; /*0x45e2c6*/
  *(_DWORD *)this = &BuildingTypeClass::`vftable'; /*0x45e2cd*/
  *(_DWORD *)(this + 4) = &BuildingTypeClass::`vftable'; /*0x45e2d3*/
  *(_DWORD *)(this + 8) = &BuildingTypeClass::`vftable'; /*0x45e2d9*/
  *(_DWORD *)(this + 12) = &vt_BuildingTypeClass; /*0x45e2e1*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x45e2e8*/
  v4 = g_TriggerClassCount; /*0x45e2ed*/
  if ( g_TriggerClassCount < dword_A83C70 /*0x45e32b*/
    || (byte_A83C75 || !dword_A83C70)
    && dword_A83C7C > 0
    && (v5 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83C68 + 8))(
               &dword_A83C68,
               dword_A83C7C + dword_A83C70,
               0) == 0,
        v4 = g_TriggerClassCount,
        !v5) )
  {
    g_TriggerClassCount = v4 + 1; /*0x45e330*/
    *((_DWORD *)g_TriggerTypeCount + v4) = this; /*0x45e33a*/
    v4 = g_TriggerClassCount; /*0x45e33d*/
  }
  v6 = 0; /*0x45e342*/
  if ( v4 <= 0 ) /*0x45e346*/
  {
LABEL_11:
    v6 = -1; /*0x45e35a*/
  }
  else
  {
    v7 = g_TriggerTypeCount; /*0x45e348*/
    while ( *v7 != this ) /*0x45e350*/
    {
      ++v6; /*0x45e352*/
      ++v7; /*0x45e353*/
      if ( v6 >= v4 ) /*0x45e358*/
        goto LABEL_11; /*0x45e358*/
    }
  }
  *(_DWORD *)(this + 3576) = v6; /*0x45e35c*/
  *(_DWORD *)(this + 3844) = 0; /*0x45e362*/
  *(_DWORD *)(this + 3848) = 1; /*0x45e368*/
  *(_DWORD *)(this + 3852) = 0; /*0x45e36e*/
  *(_DWORD *)(this + 3856) = 0; /*0x45e374*/
  *(_DWORD *)(this + 3860) = 1; /*0x45e37a*/
  *(_DWORD *)(this + 3864) = 0; /*0x45e380*/
  *(_DWORD *)(this + 3868) = 0; /*0x45e386*/
  *(_DWORD *)(this + 3872) = 1; /*0x45e38c*/
  *(_DWORD *)(this + 3876) = 0; /*0x45e392*/
  *(_DWORD *)(this + 3892) = 0; /*0x45e398*/
  *(_DWORD *)(this + 3896) = 1; /*0x45e39e*/
  *(_DWORD *)(this + 3900) = 0; /*0x45e3a4*/
  *(_DWORD *)(this + 3904) = 0; /*0x45e3aa*/
  *(_DWORD *)(this + 3908) = 1; /*0x45e3b0*/
  *(_DWORD *)(this + 3912) = 0; /*0x45e3b6*/
  v8 = (_DWORD *)(this + 3932); /*0x45e3be*/
  v9 = 21; /*0x45e3c4*/
  do /*0x45e414*/
  {
    v10 = v8 - 4; /*0x45e3c9*/
    *v10 = 0; /*0x45e3ce*/
    v10[1] = 0; /*0x45e3d1*/
    v10[2] = 0; /*0x45e3d4*/
    v10[3] = 0; /*0x45e3d7*/
    *v8 = 0; /*0x45e3dc*/
    v8[1] = 0; /*0x45e3df*/
    v8[2] = 0; /*0x45e3e2*/
    v8[3] = 0; /*0x45e3e5*/
    v11 = v8 + 4; /*0x45e3e8*/
    v8 += 17; /*0x45e3eb*/
    --v9; /*0x45e3ee*/
    *v11 = 0; /*0x45e3ef*/
    v11[1] = 0; /*0x45e3f2*/
    v11[2] = 0; /*0x45e3f5*/
    v11[3] = 0; /*0x45e3f8*/
    *(v8 - 9) = 0; /*0x45e3fb*/
    *(v8 - 8) = 0; /*0x45e3fe*/
    *(v8 - 7) = 0; /*0x45e401*/
    *(v8 - 6) = 0; /*0x45e404*/
    *((_BYTE *)v8 - 20) = 1; /*0x45e407*/
    *((_BYTE *)v8 - 19) = 0; /*0x45e40b*/
    *((_BYTE *)v8 - 18) = 0; /*0x45e40e*/
    *((_BYTE *)v8 - 17) = 0; /*0x45e411*/
  }
  while ( v9 ); /*0x45e414*/
  *(_BYTE *)(this + 3676) = 0; /*0x45e416*/
  *(_BYTE *)(this + 3720) = 0; /*0x45e41c*/
  *(_BYTE *)(this + 5994) = 0; /*0x45e422*/
  *(_BYTE *)(this + 5908) = 0; /*0x45e428*/
  *(_BYTE *)(this + 3214) = 0; /*0x45e42e*/
  *(_BYTE *)(this + 5352) = 0; /*0x45e434*/
  *(_BYTE *)(this + 5360) = 0; /*0x45e43a*/
  *(_BYTE *)(this + 5368) = 0; /*0x45e440*/
  *(_BYTE *)(this + 5376) = 0; /*0x45e446*/
  *(_BYTE *)(this + 5384) = 0; /*0x45e44c*/
  v12 = (_DWORD *)(this + 5512); /*0x45e452*/
  v13 = 10; /*0x45e458*/
  do /*0x45e472*/
  {
    v14 = unk_89C8D4; /*0x45e463*/
    *v12 = unk_89C8D0; /*0x45e469*/
    v12[1] = v14; /*0x45e46b*/
    v12 += 2; /*0x45e46e*/
    --v13; /*0x45e471*/
  }
  while ( v13 ); /*0x45e472*/
  v15 = (_DWORD *)(this + 5592); /*0x45e474*/
  v16 = 8; /*0x45e47a*/
  do /*0x45e494*/
  {
    v17 = unk_89C8D4; /*0x45e485*/
    *v15 = unk_89C8D0; /*0x45e48b*/
    v15[1] = v17; /*0x45e48d*/
    v15 += 2; /*0x45e490*/
    --v16; /*0x45e493*/
  }
  while ( v16 ); /*0x45e494*/
  v18 = (_DWORD *)(this + 5732); /*0x45e49b*/
  v19 = 8; /*0x45e4a7*/
  do /*0x45e4c4*/
  {
    *(v18 - 16) = 0xFFFF; /*0x45e4ac*/
    *(v18 - 15) = 0xFFFF; /*0x45e4b4*/
    *v18 = 0xFFFF; /*0x45e4b7*/
    v18[1] = 0xFFFF; /*0x45e4bd*/
    v18 += 2; /*0x45e4c0*/
    --v19; /*0x45e4c3*/
  }
  while ( v19 ); /*0x45e4c4*/
  v20 = *(_DWORD **)(this + 6024); /*0x45e4c6*/
  *v20 = 0; /*0x45e4d2*/
  v20[1] = 0; /*0x45e4d6*/
  v20[2] = 0; /*0x45e4d9*/
  *(_BYTE *)(this + 3381) = 1; /*0x45e4dc*/
  *(_BYTE *)(this + 3382) = 1; /*0x45e4e3*/
  *(_BYTE *)(this + 3387) = 0; /*0x45e4ea*/
  *(_BYTE *)(this + 3384) = 0; /*0x45e4f0*/
  *(_BYTE *)(this + 3479) = 0; /*0x45e4f6*/
  *(_BYTE *)(this + 3478) = 0; /*0x45e4fc*/
  *(_BYTE *)(this + 3374) = 0; /*0x45e502*/
  return this; /*0x45e508*/
}


// ==== 0x0045E520  BuildingTypeClass::loadBuildingProperty_b_545E520  this=BuildingTypeClass  sig=csp ====
_DWORD *__thiscall BuildingTypeClass::loadBuildingProperty_b_545E520(_DWORD *this, ObjectTypeClass *aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x45e528*/
  this->qE00 = 0; /*0x45e52f*/
  this->PreventsPlacementOverlap = 0; /*0x45e535*/
  this->ProductionCompletionThreshold = 0; /*0x45e53b*/
  this->CostRatePerFrame = 1; /*0x45e541*/
  this->q1791 = 0; /*0x45e548*/
  this->DockingOffsets = &vt_VectorClass_TPoint3D_int; /*0x45e54e*/
  *this = &BuildingTypeClass::`vftable'; /*0x45e558*/
  this->vtable2 = &BuildingTypeClass::`vftable'; /*0x45e55e*/
  this->vtable3 = &BuildingTypeClass::`vftable'; /*0x45e565*/
  this->vtable4 = &vt_BuildingTypeClass; /*0x45e56c*/
  return this; /*0x45e575*/
}


// ==== 0x0045E580  BuildingTypeClass::CleanupMembers  this=BuildingTypeClass  sig=csp ====
int __fastcall BuildingTypeClass::CleanupMembers(AbstractClass *a1, AbstractClass *a2)
{
  char nextArrayIndex; // al
  int eax22; // eax
  SHPStruct *v4; // eax
  BuildingTypeClass *v6; // [esp+8h] [ebp-4h] BYREF

  nextArrayIndex = a1[99].nextArrayIndex; /*0x45e587*/
  *(_DWORD *)a1->__pad_0 = &BuildingTypeClass::`vftable'; /*0x45e58d*/
  *(_DWORD *)&a1->__pad_0[4] = &BuildingTypeClass::`vftable'; /*0x45e595*/
  *(_DWORD *)&a1->__pad_0[8] = &BuildingTypeClass::`vftable'; /*0x45e59c*/
  *(_DWORD *)&a1->__pad_0[12] = &vt_BuildingTypeClass; /*0x45e5a3*/
  if ( nextArrayIndex && a1[99].abstractFlags ) /*0x45e5ac*/
  {
    __3_YAXPAX_Z((void *)a1[99].abstractFlags); /*0x45e5b7*/
    a1[99].abstractFlags = 0; /*0x45e5bf*/
    LOBYTE(a1[99].nextArrayIndex) = 0; /*0x45e5c5*/
  }
  if ( a1[150].__pad_0[4] && *(_DWORD *)a1[150].__pad_0 ) /*0x45e5d3*/
  {
    __3_YAXPAX_Z(*(void **)a1[150].__pad_0); /*0x45e5de*/
    *(_DWORD *)a1[150].__pad_0 = 0; /*0x45e5e6*/
    a1[150].__pad_0[4] = 0; /*0x45e5ec*/
  }
  if ( LOBYTE(a1[148].nextArrayIndex) && a1[148].abstractFlags ) /*0x45e5fa*/
  {
    __3_YAXPAX_Z((void *)a1[148].abstractFlags); /*0x45e605*/
    a1[148].abstractFlags = 0; /*0x45e60d*/
    LOBYTE(a1[148].nextArrayIndex) = 0; /*0x45e613*/
  }
  if ( LOBYTE(a1[148].NeedsSaveOrLink) && a1[148].referenceCount ) /*0x45e621*/
  {
    __3_YAXPAX_Z((void *)a1[148].referenceCount); /*0x45e62c*/
    a1[148].referenceCount = 0; /*0x45e634*/
    LOBYTE(a1[148].NeedsSaveOrLink) = 0; /*0x45e63a*/
  }
  if ( a1[149].__pad_0[4] && *(_DWORD *)a1[149].__pad_0 ) /*0x45e648*/
  {
    __3_YAXPAX_Z(*(void **)a1[149].__pad_0); /*0x45e653*/
    *(_DWORD *)a1[149].__pad_0 = 0; /*0x45e65b*/
    a1[149].__pad_0[4] = 0; /*0x45e661*/
  }
  if ( a1[149].__pad_0[12] && *(_DWORD *)&a1[149].__pad_0[8] ) /*0x45e66f*/
  {
    __3_YAXPAX_Z(*(void **)&a1[149].__pad_0[8]); /*0x45e67a*/
    *(_DWORD *)&a1[149].__pad_0[8] = 0; /*0x45e682*/
    a1[149].__pad_0[12] = 0; /*0x45e688*/
  }
  if ( LOBYTE(a1[149].abstractFlags) && a1[149].uniqueId ) /*0x45e696*/
  {
    __3_YAXPAX_Z((void *)a1[149].uniqueId); /*0x45e6a1*/
    a1[149].uniqueId = 0; /*0x45e6a9*/
    LOBYTE(a1[149].abstractFlags) = 0; /*0x45e6af*/
  }
  LOBYTE(a2) = 1; /*0x45e6b5*/
  AbstractClass::AnnounceExpiredPointer(a1, a2); /*0x45e6b9*/
  v6 = (BuildingTypeClass *)a1; /*0x45e6ce*/
  eax22 = ((int (__thiscall *)(DynamicVector **, BuildingTypeClass **))dword_A83C68->field_10)(&dword_A83C68, &v6); /*0x45e6d2*/
  if ( eax22 != -1 && eax22 < (int)g_TriggerClassCount ) /*0x45e6e2*/
  {
    for ( g_TriggerClassCount = (BuildingTypeClass *)((char *)g_TriggerClassCount - 1); /*0x45e6ed*/
          eax22 < (int)g_TriggerClassCount;
          *((_DWORD *)g_TriggerTypeCount + eax22 - 1) = *((_DWORD *)g_TriggerTypeCount + eax22) )
    {
      ++eax22; /*0x45e6f5*/
    }
  }
  v4 = *(SHPStruct **)&a1[167].__pad_0[12]; /*0x45e707*/
  *(_DWORD *)&a1[167].__pad_0[8] = &vt_VectorClass_TPoint3D_int; /*0x45e70d*/
  if ( v4 && BYTE1(a1[167].abstractFlags) ) /*0x45e71b*/
  {
    __3_YAXPAX_Z(v4); /*0x45e724*/
    *(_DWORD *)&a1[167].__pad_0[12] = 0; /*0x45e72c*/
  }
  BYTE1(a1[167].abstractFlags) = 0; /*0x45e734*/
  a1[167].uniqueId = 0; /*0x45e73a*/
  return TechnoTypeClass::DTOR((int)a1); /*0x45e745*/
}


// ==== 0x0045E750  nullsub_6  this=-  sig=ida-proto ====
void nullsub_6()
{
  ; /*0x45e750*/
}


// ==== 0x0045E7B0  BuildingTypeClass::FindIndexByName  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass::FindIndexByName(void *this)
{
  int v2; // esi

  if ( !this ) /*0x45e7b6*/
    return -1; /*0x45e7b6*/
  v2 = 0; /*0x45e7bd*/
  if ( (int)g_TriggerClassCount <= 0 ) /*0x45e7c1*/
    return -1; /*0x45e7e6*/
  while ( _strcmpi((const void *)(*((_DWORD *)g_TriggerTypeCount + v2) + 36), this) ) /*0x45e7da*/
  {
    if ( ++v2 >= (int)g_TriggerClassCount ) /*0x45e7e4*/
      return -1; /*0x45e7e4*/
  }
  return v2; /*0x45e7e6*/
}


// ==== 0x0045E800  AbstractClass::clearRefCount  this=AbstractClass  sig=csp ====
char __thiscall AbstractClass::clearRefCount(AbstractClass *this, __int16 *a2, AbstractClass *aP2)
{
  int v4; // eax
  BuildingClass *v5; // eax
  int v6; // edx
  _DWORD v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x720u); /*0x45e80b*/
  if ( !v4 ) /*0x45e815*/
    return 0; /*0x45e815*/
  v5 = BuildingClass::Construct(v4, this, aP2); /*0x45e81f*/
  if ( !v5 ) /*0x45e826*/
    return 0; /*0x45e86d*/
  v8[2] = 0; /*0x45e82e*/
  v6 = *a2 << 8; /*0x45e840*/
  v8[1] = (a2[1] << 8) + 128; /*0x45e84f*/
  v8[0] = v6 + 128; /*0x45e857*/
  return (*(char (__thiscall **)(BuildingClass *, _DWORD *, _DWORD))(*(_DWORD *)v5->__pad_0 + 216))(v5, v8, 0); /*0x45e866*/
}


// ==== 0x0045E880  AbstractClass::addRefCount  this=AbstractClass  sig=csp ====
BuildingClass *__thiscall AbstractClass::addRefCount(AbstractClass *this, AbstractClass *aP2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(0x720u); /*0x45e888*/
  if ( v3 ) /*0x45e892*/
    return BuildingClass::Construct(v3, this, aP2); /*0x45e89c*/
  else
    return 0; /*0x45e8a5*/
}


// ==== 0x0045E8B0  ObjectClass::method_45E8B0  this=ObjectClass  sig=csp ====
int __thiscall sub_45E8B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)(this + 3 * a2); /*0x45e8c3*/
  *((_DWORD *)v6 + 961) = a3; /*0x45e8c6*/
  *((_DWORD *)v6 + 962) = a4; /*0x45e8d0*/
  *(this + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/
}


// ==== 0x0045E8F0  ObjectClass::ProcessDataCCFileClass  this=ObjectClass  sig=csp ====
char sub_45E8F0()
{
  int SubFile; // eax
  int v1; // esi
  int v2; // edx
  int v3; // edi
  int i; // ecx
  _DWORD v6[4]; // [esp+4h] [ebp-10h] BYREF

  LOBYTE(SubFile) = (_BYTE)unk_89DDBC; /*0x45e8f0*/
  if ( !unk_89DDBC ) /*0x45e8fb*/
  {
    unk_89DDBC = (void *)SearchMIXFile(aBuildngzSha, 0); /*0x45e90d*/
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((char **)unk_89DDBC, 0); /*0x45e924*/
    v1 = *((__int16 *)unk_89DDBC + 1); /*0x45e92f*/
    if ( *((__int16 *)unk_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      v2 = SubFile; /*0x45e93c*/
      v3 = *((__int16 *)unk_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          LOBYTE(SubFile) = *(_BYTE *)(v2 + i); /*0x45e946*/
          if ( (_BYTE)SubFile ) /*0x45e94b*/
          {
            LOBYTE(SubFile) = SubFile - 65; /*0x45e94d*/
            *(_BYTE *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}


// ==== 0x0045E970  BuildingTypeClass::LoadRepairAnimations  this=BuildingTypeClass  sig=csp ====
void BuildingTypeClass::LoadRepairAnimations(#376 *this)
{
  ObjectTypeClass *v1; // ecx
  ObjectTypeClass *v2; // edi
  int v3; // ebp
  ObjectTypeClass *v4; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  BuildingTypeClass *v8; // esi
  int v9; // [esp+10h] [ebp-204h]
  char Buffer[512]; // [esp+14h] [ebp-200h] BYREF

  v2 = v1; /*0x45e97a*/
  ProcessDataCCFileClass(); /*0x45e97c*/
  unk_89DDC4 = SearchMIXFile(aPoweroffShp, 0); /*0x45e994*/
  aP2 = SearchMIXFile(aWrenchShp, 0); /*0x45e99e*/
  v3 = 0; /*0x45e9aa*/
  v9 = 0; /*0x45e9ae*/
  if ( (int)g_TriggerClassCount > 0 ) /*0x45e9b2*/
  {
    do /*0x45eb42*/
    {
      v4 = (ObjectTypeClass *)*((_DWORD *)g_TriggerTypeCount + v3); /*0x45e9c1*/
      if ( v9 <= SHIBYTE(v4[8].VoxelCaches[8]) ) /*0x45e9cd*/
        v9 = SHIBYTE(v4[8].VoxelCaches[8]); /*0x45e9cf*/
      if ( v4->Theater ) /*0x45e9d3*/
      {
        if ( v4[9].__pad_24[8] ) /*0x45e9df*/
        {
          if ( v4->Image ) /*0x45ea23*/
          {
            __3_YAXPAX_Z(v4->Image); /*0x45ea2e*/
            v4->Image = 0; /*0x45ea36*/
            v4->ImageAllocated = 0; /*0x45ea3c*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, v4->ImageFile, (const char *)&off_7E1BC6 + 112 * (_DWORD)v2); /*0x45ea08*/
          v4->Image = (void *)SearchMIXFile(Buffer, 0); /*0x45ea1b*/
        }
        if ( v4[9].__pad_24[9] ) /*0x45ea42*/
        {
          if ( v4[5].ChargerBarrels[6] ) /*0x45ea86*/
          {
            __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45ea91*/
            v4[5].ChargerBarrels[6] = 0; /*0x45ea99*/
            LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45ea9f*/
          }
        }
        else
        {
          _makepath(Buffer, 0, 0, &v4[5].__pad_14D[43], (const char *)&off_7E1BC6 + 112 * (_DWORD)v2); /*0x45ea6b*/
          v4[5].ChargerBarrels[6] = SearchMIXFile(Buffer, 0); /*0x45ea7e*/
        }
        v5 = v4[5].ChargerBarrels[6]; /*0x45eaa5*/
        if ( v5 ) /*0x45eaad*/
        {
          v6 = *(__int16 *)(v5 + 6); /*0x45eab3*/
          v7 = 1; /*0x45eab9*/
          if ( v6 ) /*0x45eabe*/
            v7 = 75 / v6; /*0x45eac6*/
          *(_DWORD *)&v4[5].AlphaImageFile[13] = 0; /*0x45eac8*/
          *(_DWORD *)&v4[5].AlphaImageFile[17] = v6; /*0x45eace*/
          *(_DWORD *)&v4[5].AlphaImageFile[21] = v7; /*0x45ead4*/
        }
      }
      else if ( v4->NewTheater ) /*0x45eadc*/
      {
        if ( v4[9].__pad_24[8] && v4->Image ) /*0x45eaec*/
        {
          __3_YAXPAX_Z(v4->Image); /*0x45eaf7*/
          v4->Image = 0; /*0x45eaff*/
          v4->ImageAllocated = 0; /*0x45eb05*/
        }
        if ( v4[9].__pad_24[9] && v4[5].ChargerBarrels[6] ) /*0x45eb13*/
        {
          __3_YAXPAX_Z((void *)v4[5].ChargerBarrels[6]); /*0x45eb1e*/
          v4[5].ChargerBarrels[6] = 0; /*0x45eb26*/
          LOBYTE(v4[5].ChargerBarrels[7]) = 0; /*0x45eb2c*/
        }
        BuildingTypeClass::LoadAnimations((int)v4, v2); /*0x45eb35*/
      }
      ++v3; /*0x45eb3f*/
    }
    while ( v3 < (int)g_TriggerClassCount ); /*0x45eb42*/
    if ( v9 ) /*0x45eb4c*/
    {
      if ( dword_89DDC0 ) /*0x45eb56*/
        (*(void (__thiscall **)(_DWORD *, int))*dword_89DDC0)(dword_89DDC0, 1); /*0x45eb5c*/
      v8 = (BuildingTypeClass *)__2_YAPAXI_Z(0x20u); /*0x45eb65*/
      if ( v8 ) /*0x45eb6c*/
      {
        *(_DWORD *)&v8->vtable0[12] = 0; /*0x45eb72*/
        *(_DWORD *)v8->vtable0 = &XSurface_Vtable; /*0x45eb78*/
        *(_DWORD *)&v8->vtable0[4] = v9 + 16; /*0x45eb80*/
        *(_DWORD *)&v8->vtable0[8] = v9 + 16; /*0x45eb8b*/
        v8->uniqueId = 1; /*0x45eb8e*/
        Buffer::Init(&v8->abstractFlags, 0, (AbstractClass *)((v9 + 16) * (v9 + 16))); /*0x45eb95*/
        *(_DWORD *)v8->vtable0 = &BSurface_Vtable; /*0x45eb9a*/
        dword_89DDC0 = v8->vtable0; /*0x45eba0*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x45ebb1*/
      }
    }
  }
}


// ==== 0x0045EBD0  AbstractClass::checkPointer  this=AbstractClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_45EBD0(void *this, _DWORD *a2)
{
  _DWORD *FoundationSize; // eax
  int v3; // ecx
  int v4; // edx
  _DWORD v6[4]; // [esp+10h] [ebp-10h] BYREF

  if ( (*(int (__thiscall **)(void *))(this->q09C)(this) ) /*0x45ebd5*/
  {
    FoundationSize = Building::GetFoundationSize(v6, 0); /*0x45ebe8*/
    v3 = FoundationSize[2]; /*0x45ebfa*/
    v4 = FoundationSize[3]; /*0x45ebfd*/
  }
  else
  {
    v3 = 0; /*0x45ec02*/
    v4 = 0; /*0x45ec04*/
  }
  *a2 = v3; /*0x45ec0d*/
  a2[1] = v3; /*0x45ec0f*/
  a2[2] = v4; /*0x45ec12*/
  return a2; /*0x45ec16*/
}


// ==== 0x0045EC20  AbstractClass::validatePointer  this=AbstractClass  sig=csp ====
int *__thiscall AbstractClass::sub_45EC20(int **this, int a2)
{
  int *result; // eax

  if ( (unk_89C890 & 1) == 0 ) /*0x45ec2e*/
  {
    unk_89C890 |= 1u; /*0x45ec4c*/
    unk_89C8E8 = 2147450879; /*0x45ec52*/
    atexit(nullsub_107); /*0x45ec57*/
  }
  result = this->qDFC; /*0x45ec5f*/
  if ( !result ) /*0x45ec68*/
    return &unk_89C8E8; /*0x45ec6a*/
  return result; /*0x45ec65*/
}


// ==== 0x0045EC80  nullsub_107  this=-  sig=ida-proto ====
void __cdecl nullsub_107()
{
  ; /*0x45ec80*/
}


// ==== 0x0045EC90  BuildingTypeClass::GetFoundationWidth  this=IUnknown  sig=csp ====
int __thiscall BuildingTypeClass_GetFoundationWidth(_DWORD *this)
{
  return dword_8192B8[this->q3BC]; /*0x45ec9d*/
}


// ==== 0x0045ECA0  BuildingTypeClass::GetFoundationHeight  this=AbstractClass  sig=csp ====
int __thiscall BuildingTypeClass::GetFoundationHeight(int this, IUnknown *aP1)
{
  if ( (_BYTE)aP1 && *(_BYTE *)(this + 5488) ) /*0x45eca8*/
    return dword_819310[*(_DWORD *)(this + 3824)] + 1; /*0x45ecc4*/
  else
    return dword_819310[*(_DWORD *)(this + 3824)]; /*0x45ecd1*/
}


// ==== 0x0045ECE0  BuildingTypeClass::GetMaxPips  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::GetMaxPips(int this)
{
  int result; // eax
  int v2; // ecx
  int v3; // ecx

  result = 60 * dword_8192B8[*(_DWORD *)(this + 3824)] / 8; /*0x45ed02*/
  if ( *(_DWORD *)(this + 980) == 2 ) /*0x45ed08*/
  {
    if ( *(_BYTE *)(this + 5820) ) /*0x45ed14*/
    {
      v2 = MEMORY[0x8871E0][1].?[1]; /*0x45ed24*/
      if ( v2 >= 0 ) /*0x45ed2c*/
      {
        if ( v2 <= result ) /*0x45ed33*/
          return MEMORY[0x8871E0][1].?[1]; /*0x45ed35*/
      }
      else
      {
        return 0; /*0x45ed2e*/
      }
    }
    else
    {
      v3 = *(_DWORD *)(this + 2048); /*0x45ed38*/
      if ( v3 >= 0 ) /*0x45ed40*/
      {
        if ( v3 <= result ) /*0x45ed47*/
          return v3; /*0x45ed49*/
      }
      else
      {
        return 0; /*0x45ed42*/
      }
    }
  }
  else if ( *(_DWORD *)(this + 980) != 4 ) /*0x45ed0d*/
  {
    return ObjectClass::GetModeSpecificValue((int *)this); /*0x45ed0f*/
  }
  return result; /*0x45ed30*/
}


// ==== 0x0045ED50  AbstractClass::removePointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_45ED50(_DWORD *this)
{
  int Member388; // esi
  int *v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax

  Member388 = TechnoClass::GetMember388(this); /*0x45ed61*/
  v3 = (int *)MEMORY[0x8871E0]->?[0]; /*0x45ed63*/
  v4 = *v3; /*0x45ed69*/
  if ( this == **(_DWORD ***)(*v3 + 1004) && !LOBYTE(MEMORY[0x8871E0][1].?[3]) ) /*0x45ed75*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3[1] + 172))(v3[1]); /*0x45ed8c*/
    Member388 += (v5 + (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 172))(v4)) / -2; /*0x45eda1*/
  }
  v6 = this->qEA0; /*0x45eda3*/
  if ( !v6 ) /*0x45edab*/
    return Member388; /*0x45edc8*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 172))(v6); /*0x45edb1*/
  return (Member388 - v7) & ((Member388 - v7 <= 0) - 1); /*0x45edc1*/
}


// ==== 0x0045EDD0  AbstractClass::addPointer  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_45EDD0(_DWORD *this, int a2)
{
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v10; // [esp+14h] [ebp+4h]

  v4 = TechnoTypeClass::ComputeValueSimple(this, a2); /*0x45ede6*/
  v5 = (int *)MEMORY[0x8871E0]->?[0]; /*0x45ede8*/
  v6 = *v5; /*0x45edee*/
  if ( this == **(_DWORD ***)(*v5 + 1004) && !LOBYTE(MEMORY[0x8871E0][1].?[3]) ) /*0x45edfa*/
  {
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5[1] + 132))(v5[1], a2); /*0x45ee19*/
    v4 += (v10 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 132))(v6, a2)) / 2; /*0x45ee2e*/
  }
  v7 = this->qEA0; /*0x45ee30*/
  if ( !v7 ) /*0x45ee38*/
    return v4; /*0x45ee58*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 132))(v7, a2); /*0x45ee3f*/
  return v8 + v4 <= 0 ? 0 : v8 + v4;
}


// ==== 0x0045EE70  BuildingClass::ApplyFoundationDamage  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass::ApplyFoundationDamage(void *this, _WORD *a1, HouseClass *aP2)
{
  _WORD *v4; // edi
  _WORD *v5; // eax
  __int16 v6; // dx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  char v12; // [esp+13h] [ebp-15h]
  int v13; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v12 = 0; /*0x45ee81*/
  if ( *a1 == unk_89C8B0 && a1[1] == unk_89C8B2 ) /*0x45ee9a*/
    return 0; /*0x45ee9a*/
  v4 = (_WORD *)(*(int (__thiscall **)(void *, int))(this->isAliveFlag)(this, 1); /*0x45eeac*/
  while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x45eebb*/
  {
    v5 = v4; /*0x45eec5*/
    v4 += 2; /*0x45eec7*/
    v6 = a1[1] + v5[1]; /*0x45eed1*/
    LOWORD(v14) = *v5 + *a1; /*0x45eed5*/
    HIWORD(v14) = v6; /*0x45eede*/
    v13 = v14; /*0x45eeed*/
    if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&v13) ) /*0x45eef1*/
    {
      v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x45ef04*/
      v8 = v7[17]; /*0x45ef09*/
      if ( v8 != -1 && (this != *(void **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2172) || v8 != 2) ) /*0x45ef26*/
        return 2; /*0x45f017*/
      v9 = v7[57]; /*0x45ef2c*/
      if ( v9 ) /*0x45ef34*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 36 ) /*0x45ef44*/
          return 2; /*0x45ef44*/
        if ( (*(_BYTE *)(v9 + 20) & 1) != 0 ) /*0x45ef4e*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9) == 6 ) /*0x45ef5e*/
          {
            if ( !BuildingClass::CanAcceptType(v9, (IUnknown *)this, (AbstractClass *)aP2) ) /*0x45ef6f*/
              return 2; /*0x45ef6f*/
          }
          else
          {
            if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v9 + 540), (IUnknown *)aP2) /*0x45ef9b*/
              || (*(_BYTE *)(v9 + 20) & 4) == 0 )
            {
              return 2; /*0x45ef9b*/
            }
            v12 = 1; /*0x45efa3*/
            if ( !*(_DWORD *)(v9 + 1444) /*0x45efdf*/
              || (v15[0] = *(_DWORD *)(v9 + 156),
                  v15[1] = *(_DWORD *)(v9 + 160),
                  v15[2] = *(_DWORD *)(v9 + 164),
                  Coord::To_Cell(&MEMORY[0x87F7E8], (IUnknown *)v15) == *(void **)(v9 + 1444)) )
            {
              v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x45effa*/
              Cell::ApplyDamage(v10, (IUnknown *)&unk_89C8D0, 1, 1, 0); /*0x45f001*/
            }
          }
        }
      }
    }
  }
  return v12 != 0; /*0x45f034*/
}


// ==== 0x0045F040  AbstractClass::LoadTypeFile  this=AbstractClass  sig=csp ====
int __thiscall AbstractClass::sub_45F040(int this)
{
  int result; // eax
  void *EntireFile; // eax
  void *v4; // eax
  _DWORD v5[22]; // [esp+4h] [ebp-1DCh] BYREF
  _BYTE v6[12]; // [esp+5Ch] [ebp-184h] BYREF
  int v7; // [esp+68h] [ebp-178h]
  _DWORD v8[22]; // [esp+70h] [ebp-170h] BYREF
  _BYTE v9[12]; // [esp+C8h] [ebp-118h] BYREF
  int v10; // [esp+D4h] [ebp-10Ch]
  char Destination[260]; // [esp+DCh] [ebp-104h] BYREF

  result = *(_DWORD *)(this + 164); /*0x45f049*/
  if ( !result && *(_BYTE *)(this + 5984) ) /*0x45f057*/
  {
    if ( *(_BYTE *)(this + 5994) ) /*0x45f065*/
    {
      CCFileClass::Construct(v5, (char *)(this + 5994)); /*0x45f07f*/
      CCFileClass::Open(v5, 0); /*0x45f08a*/
      EntireFile = CCFileClass::ReadEntireFile(v5); /*0x45f093*/
      *(_DWORD *)(this + 164) = EntireFile; /*0x45f09a*/
      if ( EntireFile ) /*0x45f0a0*/
      {
        *(_BYTE *)(this + 168) = 1; /*0x45f0a2*/
      }
      else
      {
        strncpy(Destination, (const char *)(this + 5994), 0x13u); /*0x45f0b6*/
        ObjectTypeClass::SetRTTI71(Destination); /*0x45f0c5*/
        CCFileClass::Construct(v8, Destination); /*0x45f0d6*/
        v4 = CCFileClass::ReadEntireFile(v8); /*0x45f0df*/
        *(_DWORD *)(this + 164) = v4; /*0x45f0e6*/
        if ( v4 ) /*0x45f0ec*/
          *(_BYTE *)(this + 168) = 1; /*0x45f0ee*/
        v8[0] = &vt_CCFileClass; /*0x45f0fc*/
        v10 = 0; /*0x45f104*/
        Vector::Clear((int)v9); /*0x45f10f*/
        v8[0] = &off_7E1668; /*0x45f118*/
        BufferIOFileClass::Dtor(v8); /*0x45f120*/
      }
      v5[0] = &vt_CCFileClass; /*0x45f129*/
      v7 = 0; /*0x45f131*/
      Vector::Clear((int)v6); /*0x45f139*/
      v5[0] = &off_7E1668; /*0x45f142*/
      BufferIOFileClass::Dtor(v5); /*0x45f14a*/
    }
    return *(_DWORD *)(this + 164); /*0x45f14f*/
  }
  return result; /*0x45f156*/
}


// ==== 0x0045F160  BuildingClass::GetPlacementCoords  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::GetPlacementCoords(int *this, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v4; // eax

  if ( this->q1768 && a2 ) /*0x45f171*/
  {
    v3 = this->q14F4; /*0x45f173*/
    if ( v3 ) /*0x45f17b*/
    {
      *a2 = v3; /*0x45f1ad*/
      *a3 = 0; /*0x45f1b2*/
      return 1; /*0x45f1b8*/
    }
    v4 = (*(int (__thiscall **)(int *))(*this + 156))(this); /*0x45f17f*/
    *a2 = v4; /*0x45f187*/
    if ( v4 && *(__int16 *)(v4 + 6) / 2 > 3 ) /*0x45f197*/
    {
      *a3 = 3; /*0x45f1a0*/
      return 1; /*0x45f1a6*/
    }
  }
  return 0; /*0x45f19f*/
}


// ==== 0x0045F1D0  TacticalClass::initTacticalMap  this=TacticalClass  sig=csp ====
char __thiscall sub_45F1D0(int *this, int *a2, int *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this->q1768 && a2 ) /*0x45f1e1*/
  {
    v3 = this->q14F4; /*0x45f1e3*/
    if ( v3 ) /*0x45f1eb*/
    {
      *a2 = v3; /*0x45f218*/
      *a3 = *(__int16 *)(v3 + 6) / 2; /*0x45f227*/
    }
    else
    {
      v4 = (*(int (__thiscall **)(int *))(*this + 156))(this); /*0x45f1ef*/
      *a2 = v4; /*0x45f1f7*/
      if ( v4 ) /*0x45f1f9*/
      {
        v5 = *(__int16 *)(v4 + 6) / 2; /*0x45f202*/
        if ( v5 > 3 ) /*0x45f207*/
        {
          *a3 = v5 + 3; /*0x45f211*/
          return 1; /*0x45f215*/
        }
      }
    }
  }
  return 0; /*0x45f210*/
}


// ==== 0x0045F230  BuildingTypeClass::LoadAnimations  this=ObjectTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::LoadAnimations(int this, ObjectTypeClass *aP1)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  _BYTE *v6; // esi
  void *FileSHP; // eax
  _BYTE *v8; // esi
  void *v9; // eax
  int v10; // eax
  _BYTE *v11; // esi
  void *v12; // eax
  _BYTE *v13; // esi
  void *v14; // eax
  _BYTE *v15; // esi
  void *v16; // eax
  int v17; // eax
  _BYTE *v18; // esi
  void *v19; // eax
  const char *v20; // edi
  int v21; // eax
  int result; // eax
  int v23; // [esp+10h] [ebp-158h]
  INIClass Filename; // [esp+14h] [ebp-154h] BYREF
  char Ext[16]; // [esp+54h] [ebp-114h] BYREF
  char Source[260]; // [esp+64h] [ebp-104h] BYREF

  if ( !*(_BYTE *)(this + 5985) && strlen((const char *)(this + 3676)) ) /*0x45f257*/
  {
    _makepath(Source, 0, 0, (const char *)(this + 3676), ::Ext); /*0x45f26f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f282*/
    v3 = SearchMIXFile(Source, 0); /*0x45f28d*/
    if ( !v3 ) /*0x45f294*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f29a*/
      v3 = SearchMIXFile(Source, 0); /*0x45f2a5*/
    }
    *(_DWORD *)(this + 3584) = v3; /*0x45f2ac*/
    if ( v3 ) /*0x45f2b2*/
    {
      v4 = 1; /*0x45f2bb*/
      v5 = *(__int16 *)(v3 + 6) / 2; /*0x45f2c8*/
      v23 = v5; /*0x45f2cc*/
      if ( *(_BYTE *)(this + 5815) ) /*0x45f2c2*/
      {
        v5 = *(_DWORD *)(this + 5880) + 1; /*0x45f2d8*/
        v23 = v5; /*0x45f2d9*/
      }
      if ( v5 > 0 ) /*0x45f2df*/
        v4 = Math::RoundToInt(*(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5400) * 900.0 / (double)v23); /*0x45f2fc*/
      *(_DWORD *)(this + 3844) = 0; /*0x45f2fe*/
      *(_DWORD *)(this + 3848) = v5; /*0x45f304*/
      *(_DWORD *)(this + 3852) = v4; /*0x45f30a*/
    }
  }
  INIClass::GetString( /*0x45f32d*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    aDeployinganim,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f336*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f357*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f36a*/
    v6 = (_BYTE *)(this + 5352); /*0x45f375*/
    if ( *(_BYTE *)(this + 5352) && *(_DWORD *)(this + 5348) ) /*0x45f37f*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f38a*/
      *(_DWORD *)(this + 5348) = 0; /*0x45f392*/
      *v6 = 0; /*0x45f398*/
    }
    FileSHP = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3a0*/
    *(_DWORD *)(this + 5348) = FileSHP; /*0x45f3a7*/
    if ( !FileSHP ) /*0x45f3ad*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f3b3*/
      if ( *v6 && *(_DWORD *)(this + 5348) ) /*0x45f3bc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5348)); /*0x45f3c7*/
        *(_DWORD *)(this + 5348) = 0; /*0x45f3cf*/
        *v6 = 0; /*0x45f3d5*/
      }
      *(_DWORD *)(this + 5348) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f3e2*/
    }
  }
  INIClass::GetString( /*0x45f405*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    aRoofdeployinga,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f40e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f42f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f442*/
    v8 = (_BYTE *)(this + 5376); /*0x45f44d*/
    if ( *(_BYTE *)(this + 5376) && *(_DWORD *)(this + 5372) ) /*0x45f457*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f462*/
      *(_DWORD *)(this + 5372) = 0; /*0x45f46a*/
      *v8 = 0; /*0x45f470*/
    }
    v9 = LoadFileSHP(Source, (bool *)(this + 5376)); /*0x45f478*/
    *(_DWORD *)(this + 5372) = v9; /*0x45f47f*/
    if ( !v9 ) /*0x45f485*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f48b*/
      if ( *v8 && *(_DWORD *)(this + 5372) ) /*0x45f494*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5372)); /*0x45f49f*/
        *(_DWORD *)(this + 5372) = 0; /*0x45f4a7*/
        *v8 = 0; /*0x45f4ad*/
      }
      *(_DWORD *)(this + 5372) = LoadFileSHP(Source, (bool *)(this + 5352)); /*0x45f4be*/
    }
  }
  INIClass::GetString( /*0x45f4e1*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.unknown50,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f4ea*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f507*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f51a*/
    v10 = SearchMIXFile(Source, 0); /*0x45f525*/
    *(_DWORD *)(this + 5388) = v10; /*0x45f52c*/
    if ( !v10 ) /*0x45f532*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f538*/
      *(_DWORD *)(this + 5388) = SearchMIXFile(Source, 0); /*0x45f548*/
    }
  }
  INIClass::GetString( /*0x45f565*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.ownsFile,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f56e*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f58f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f5a2*/
    v11 = (_BYTE *)(this + 5360); /*0x45f5ad*/
    if ( *(_BYTE *)(this + 5360) && *(_DWORD *)(this + 5356) ) /*0x45f5b7*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5c2*/
      *(_DWORD *)(this + 5356) = 0; /*0x45f5ca*/
      *v11 = 0; /*0x45f5d0*/
    }
    v12 = LoadFileSHP(Source, (bool *)(this + 5360)); /*0x45f5d8*/
    *(_DWORD *)(this + 5356) = v12; /*0x45f5df*/
    if ( !v12 ) /*0x45f5e5*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f5eb*/
      if ( *v11 && *(_DWORD *)(this + 5356) ) /*0x45f5f4*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5356)); /*0x45f5ff*/
        *(_DWORD *)(this + 5356) = 0; /*0x45f607*/
        *v11 = 0; /*0x45f60d*/
      }
      *(_DWORD *)(this + 5356) = SearchMIXFile(Source, 0); /*0x45f61a*/
    }
  }
  v13 = (_BYTE *)(this + 5368); /*0x45f626*/
  if ( *(_BYTE *)(this + 5368) && *(_DWORD *)(this + 5364) ) /*0x45f630*/
  {
    __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f63b*/
    *(_DWORD *)(this + 5364) = 0; /*0x45f643*/
    *v13 = 0; /*0x45f649*/
  }
  INIClass::GetString( /*0x45f668*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.unknown38,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f671*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f68e*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f6a1*/
    v14 = LoadFileSHP(Source, (bool *)(this + 5368)); /*0x45f6ac*/
    *(_DWORD *)(this + 5364) = v14; /*0x45f6b3*/
    if ( !v14 ) /*0x45f6b9*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f6bf*/
      if ( *v13 && *(_DWORD *)(this + 5364) ) /*0x45f6c8*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5364)); /*0x45f6d3*/
        *(_DWORD *)(this + 5364) = 0; /*0x45f6db*/
        *v13 = 0; /*0x45f6e1*/
      }
      *(_DWORD *)(this + 5364) = SearchMIXFile(Source, 0); /*0x45f6ee*/
    }
  }
  INIClass::GetString( /*0x45f711*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.__pad_20[4],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f71a*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f73b*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f74e*/
    v15 = (_BYTE *)(this + 5384); /*0x45f759*/
    if ( *(_BYTE *)(this + 5384) && *(_DWORD *)(this + 5380) ) /*0x45f763*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f76e*/
      *(_DWORD *)(this + 5380) = 0; /*0x45f776*/
      *v15 = 0; /*0x45f77c*/
    }
    v16 = LoadFileSHP(Source, (bool *)(this + 5384)); /*0x45f784*/
    *(_DWORD *)(this + 5380) = v16; /*0x45f78b*/
    if ( !v16 ) /*0x45f791*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f797*/
      if ( *v15 && *(_DWORD *)(this + 5380) ) /*0x45f7a0*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5380)); /*0x45f7ab*/
        *(_DWORD *)(this + 5380) = 0; /*0x45f7b3*/
        *v15 = 0; /*0x45f7b9*/
      }
      *(_DWORD *)(this + 5380) = SearchMIXFile(Source, 0); /*0x45f7c6*/
    }
  }
  INIClass::GetString( /*0x45f7e9*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.sectionHead[1],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f7f2*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f80f*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f822*/
    v17 = SearchMIXFile(Source, 0); /*0x45f82d*/
    *(_DWORD *)(this + 5392) = v17; /*0x45f834*/
    if ( !v17 ) /*0x45f83a*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f840*/
      *(_DWORD *)(this + 5392) = SearchMIXFile(Source, 0); /*0x45f850*/
    }
  }
  INIClass::GetString( /*0x45f86d*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image.headNode[1],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( strlen(Filename.__pad_0) ) /*0x45f876*/
  {
    _makepath(Source, 0, 0, Filename.__pad_0, ::Ext); /*0x45f897*/
    TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f8aa*/
    v18 = (_BYTE *)(this + 5404); /*0x45f8b5*/
    if ( *(_BYTE *)(this + 5404) && *(_DWORD *)(this + 5400) ) /*0x45f8bf*/
    {
      __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f8ca*/
      *(_DWORD *)(this + 5400) = 0; /*0x45f8d2*/
      *v18 = 0; /*0x45f8d8*/
    }
    v19 = LoadFileSHP(Source, (bool *)(this + 5404)); /*0x45f8e0*/
    *(_DWORD *)(this + 5400) = v19; /*0x45f8e7*/
    if ( !v19 ) /*0x45f8ed*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45f8f3*/
      if ( *v18 && *(_DWORD *)(this + 5400) ) /*0x45f8fc*/
      {
        __3_YAXPAX_Z(*(void **)(this + 5400)); /*0x45f907*/
        *(_DWORD *)(this + 5400) = 0; /*0x45f90f*/
        *v18 = 0; /*0x45f915*/
      }
      *(_DWORD *)(this + 5400) = SearchMIXFile(Source, 0); /*0x45f922*/
    }
  }
  INIClass::GetString( /*0x45f945*/
    (unsigned __int8 ***)&MEMORY[0x87F8E4].__pad_5568[9012],
    (INIClass *)(this + 504),
    (unsigned __int8 *)&g_INI_Key_Image,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &Filename,
    64);
  if ( !*(_BYTE *)(this + 556) || aP1 == (ObjectTypeClass *)-1 ) /*0x45f95c*/
    v20 = ::Ext; /*0x45f97a*/
  else
    v20 = (const char *)(&off_7E1BC6 + 28 * (_DWORD)aP1); /*0x45f96e*/
  strcpy(Ext, v20); /*0x45f993*/
  if ( strlen(Filename.__pad_0) ) /*0x45f9a2*/
    _makepath(Source, 0, 0, Filename.__pad_0, Ext); /*0x45f9bd*/
  else
    _makepath(Source, 0, 0, (const char *)(this + 504), Ext); /*0x45f9cd*/
  TheaterObjectTypeClassSpecificID(Source, (int)aP1); /*0x45f9e0*/
  strncpy((char *)(this + 5994), Source, 0x13u); /*0x45f9f3*/
  if ( !*(_BYTE *)(this + 5984) ) /*0x45f9f8*/
  {
    v21 = SearchMIXFile(Source, 0); /*0x45fa0b*/
    *(_DWORD *)(this + 164) = v21; /*0x45fa12*/
    if ( !v21 ) /*0x45fa18*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa1e*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa2b*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa3e*/
    }
    if ( !*(_DWORD *)(this + 164) ) /*0x45fa44*/
    {
      ObjectTypeClass::SetRTTI71(Source); /*0x45fa50*/
      strncpy((char *)(this + 5994), Source, 0x13u); /*0x45fa5d*/
      *(_DWORD *)(this + 164) = SearchMIXFile(Source, 0); /*0x45fa70*/
    }
  }
  BuildingTypeClass::LoadVoxel(this); /*0x45fa78*/
  return result; /*0x45fa7d*/
}


// ==== 0x0045FA90  BuildingTypeClass::LoadVoxel  this=BuildingTypeClass  sig=csp ====
void __thiscall BuildingTypeClass_LoadVoxel(int this)
{
  char *v2; // eax
  void *v3; // esi
  _DWORD *v4; // eax
  _DWORD *File; // eax
  void *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int Info; // eax
  char *v10; // eax
  char *v11; // eax
  _BYTE *v12; // eax
  void *v13; // esi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  void *v16; // esi
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  char *v20; // [esp-Ch] [ebp-2D8h]
  char *v21; // [esp-Ch] [ebp-2D8h]
  _DWORD v22[22]; // [esp+8h] [ebp-2C4h] BYREF
  _BYTE v23[12]; // [esp+60h] [ebp-26Ch] BYREF
  int v24; // [esp+6Ch] [ebp-260h]
  _DWORD v25[22]; // [esp+74h] [ebp-258h] BYREF
  _BYTE v26[12]; // [esp+CCh] [ebp-200h] BYREF
  int v27; // [esp+D8h] [ebp-1F4h]
  _DWORD v28[22]; // [esp+E0h] [ebp-1ECh] BYREF
  _BYTE v29[12]; // [esp+138h] [ebp-194h] BYREF
  int v30; // [esp+144h] [ebp-188h]
  char Destination[4]; // [esp+14Ch] [ebp-180h] BYREF
  char v32[124]; // [esp+150h] [ebp-17Ch] BYREF
  char Buffer[4]; // [esp+1CCh] [ebp-100h] BYREF
  char String[252]; // [esp+1D0h] [ebp-FCh] BYREF

  if ( *(_BYTE *)(this + 5829) || *(_BYTE *)(this + 5830) ) /*0x45faa4*/
  {
    strcpy(Destination, (const char *)(this + 4528)); /*0x45fadf*/
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45faf3*/
    v20 = _strupr(off_8194A8); /*0x45fb05*/
    v2 = _strupr(String); /*0x45fb0e*/
    if ( strstr(v2, v20) ) /*0x45fb17*/
    {
      CCFileClass::Construct(v25, Buffer); /*0x45fb3b*/
      if ( CCFileClass::Open(v25, 0) ) /*0x45fb48*/
      {
        v3 = *(void **)(this + 184); /*0x45fb55*/
        if ( v3 ) /*0x45fb5d*/
        {
          WaveClass::Destroy(*(_DWORD *)(this + 184)); /*0x45fb61*/
          __3_YAXPAX_Z(v3); /*0x45fb67*/
        }
        v4 = __2_YAPAXI_Z(0x1Cu); /*0x45fb71*/
        if ( v4 ) /*0x45fb7b*/
          File = File::LoadFileVXL(v4, (int)v25, 0); /*0x45fb85*/
        else
          File = 0; /*0x45fb8c*/
        *(_DWORD *)(this + 184) = File; /*0x45fb8e*/
        _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fbab*/
        CCFileClass::Construct(v22, Buffer); /*0x45fbbf*/
        v6 = *(void **)(this + 188); /*0x45fbc4*/
        if ( v6 ) /*0x45fbcc*/
        {
          String::Release(*(void ***)(this + 188)); /*0x45fbd0*/
          __3_YAXPAX_Z(v6); /*0x45fbd6*/
        }
        v7 = __2_YAPAXI_Z(0x10u); /*0x45fbe0*/
        if ( v7 ) /*0x45fbea*/
          v8 = File::LoadFileHVA(v7, (int)v22); /*0x45fbf3*/
        else
          v8 = 0; /*0x45fbfa*/
        *(_DWORD *)(this + 188) = v8; /*0x45fbfe*/
        if ( v8 && !*(_BYTE *)v8 ) /*0x45fc06*/
        {
          Info = VoxelSection::GetInfo(*(_DWORD **)(this + 184), 0, 0); /*0x45fc12*/
          Matrix::Scale(*(unsigned int **)(this + 188), *(float *)(Info + 12)); /*0x45fc21*/
        }
        v22[0] = &vt_CCFileClass; /*0x45fc2a*/
        v24 = 0; /*0x45fc32*/
        Vector::Clear((int)v23); /*0x45fc36*/
        v22[0] = &off_7E1668; /*0x45fc3f*/
        BufferIOFileClass::Dtor(v22); /*0x45fc43*/
      }
      v21 = _strupr(off_8194A8); /*0x45fc55*/
      v10 = _strupr(v32); /*0x45fc5e*/
      v11 = strstr(v10, v21); /*0x45fc67*/
      if ( v11 ) /*0x45fc71*/
      {
        *v11 = 66; /*0x45fc73*/
        v12 = v11 + 1; /*0x45fc76*/
        *v12++ = 65; /*0x45fc77*/
        *v12++ = 82; /*0x45fc7b*/
        *v12 = 76; /*0x45fc7f*/
        v12[1] = 0; /*0x45fc82*/
      }
      v25[0] = &vt_CCFileClass; /*0x45fc8c*/
      v27 = 0; /*0x45fc94*/
      Vector::Clear((int)v26); /*0x45fc9b*/
      v25[0] = &off_7E1668; /*0x45fca4*/
      BufferIOFileClass::Dtor(v25); /*0x45fca8*/
    }
    else if ( *(_BYTE *)(this + 5830) ) /*0x45fcaf*/
    {
      strncpy(Destination, (const char *)(this + 5908), 0x80u); /*0x45fccb*/
    }
    _makepath(Buffer, 0, 0, Destination, g_Str_File__VXL); /*0x45fcea*/
    CCFileClass::Construct(v28, Buffer); /*0x45fd01*/
    if ( CCFileClass::Open(v28, 0) ) /*0x45fd0e*/
    {
      v13 = *(void **)(this + 192); /*0x45fd1b*/
      if ( v13 ) /*0x45fd23*/
      {
        WaveClass::Destroy(*(_DWORD *)(this + 192)); /*0x45fd27*/
        __3_YAXPAX_Z(v13); /*0x45fd2d*/
      }
      v14 = __2_YAPAXI_Z(0x1Cu); /*0x45fd37*/
      if ( v14 ) /*0x45fd41*/
        v15 = File::LoadFileVXL(v14, (int)v28, 0); /*0x45fd4e*/
      else
        v15 = 0; /*0x45fd55*/
      *(_DWORD *)(this + 192) = v15; /*0x45fd63*/
      _makepath(Buffer, 0, 0, Destination, g_Str_File__HVA); /*0x45fd74*/
      CCFileClass::Construct(v22, Buffer); /*0x45fd88*/
      v16 = *(void **)(this + 196); /*0x45fd8d*/
      if ( v16 ) /*0x45fd95*/
      {
        String::Release(*(void ***)(this + 196)); /*0x45fd99*/
        __3_YAXPAX_Z(v16); /*0x45fd9f*/
      }
      v17 = __2_YAPAXI_Z(0x10u); /*0x45fda9*/
      if ( v17 ) /*0x45fdb3*/
        v18 = File::LoadFileHVA(v17, (int)v22); /*0x45fdbc*/
      else
        v18 = 0; /*0x45fdc3*/
      *(_DWORD *)(this + 196) = v18; /*0x45fdc7*/
      if ( v18 ) /*0x45fdcd*/
      {
        if ( !*(_BYTE *)v18 ) /*0x45fdcf*/
        {
          v19 = VoxelSection::GetInfo(*(_DWORD **)(this + 192), 0, 0); /*0x45fddb*/
          Matrix::Scale(*(unsigned int **)(this + 196), *(float *)(v19 + 12)); /*0x45fdea*/
        }
      }
      v22[0] = &vt_CCFileClass; /*0x45fdf3*/
      v24 = 0; /*0x45fdfb*/
      Vector::Clear((int)v23); /*0x45fdff*/
      v22[0] = &off_7E1668; /*0x45fe08*/
      BufferIOFileClass::Dtor(v22); /*0x45fe0c*/
    }
    v28[0] = &vt_CCFileClass; /*0x45fe18*/
    v30 = 0; /*0x45fe23*/
    Vector::Clear((int)v29); /*0x45fe2a*/
    v28[0] = &off_7E1668; /*0x45fe36*/
    BufferIOFileClass::Dtor(v28); /*0x45fe3d*/
  }
}

